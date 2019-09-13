#define LIBSSH_STATIC 1
//#define SSH_NO_CPP_EXCEPTIONS

#include <libssh/libssh.h>
#include <libssh/libsshpp.hpp>
#include <libssh/sftp.h>
#include <fcntl.h>

#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "sftp.grpc.pb.h"
#include <sys/stat.h>


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using sftp::SFTP;
using sftp::CopyFromRemoteRequest;
using sftp::CopyFromRemoteResponse;
using std::cout;
using std::endl;
using std::string;

//using namespace std;


#define MAX_XFER_BUF_SIZE 16384


class SFTPServiceImpl final : public SFTP::Service {
    Status CopyFromRemoteService(ServerContext* context,
                                 const CopyFromRemoteRequest* request,
                                 CopyFromRemoteResponse* response) override {

        cout << "CopyFromRemoteService on "<< endl;

        cout << request->sftp().username()<< endl;
        cout << request->sftp().password()<< endl;
        cout << request->sftp().hostport()<< endl;
        cout << request->sftp().systemid()<< endl;
        cout << request->sftp().filename()<< endl;

        int rc;
        string password;
        string username;
        string hostport;
        string systemid;
        string filename;

        username=request->sftp().username();
        password=request->sftp().password();
        hostport=request->sftp().hostport();
        systemid=request->sftp().systemid();
        filename=request->sftp().filename();

        cout << username << endl;
        cout << systemid << endl;

        //systemid = "localhost";

        // define the ssh_session
        ssh_session my_ssh_session;
        my_ssh_session = ssh_new();
        if (my_ssh_session == NULL)
            exit(-1);
        int verbosity = SSH_LOG_PACKET;
        ssh_options_set(my_ssh_session, SSH_OPTIONS_HOST, &systemid);
        ssh_options_set(my_ssh_session, SSH_OPTIONS_USER, &username);
        ssh_options_set(my_ssh_session, SSH_OPTIONS_PORT, &hostport);
        ssh_options_set(my_ssh_session, SSH_OPTIONS_LOG_VERBOSITY_STR, "99");
        rc = ssh_connect(my_ssh_session);

        if (rc != SSH_OK)
        {
            fprintf(stderr, "Error connecting to : %s\n",
                    ssh_get_error(my_ssh_session));
            exit(-1);
        }


        //Authenticate ourselves.
//        rc = ssh_userauth_password(my_ssh_session, NULL, password);
//        if (rc != SSH_AUTH_SUCCESS)
//        {
//            fprintf(stderr, "Error authenticating with password: %s\n",
//                    ssh_get_error(my_ssh_session));
//            ssh_disconnect(my_ssh_session);
//            ssh_free(my_ssh_session);
//            exit(-1);
//        }
//        // define the sftp_session
//        sftp_session sftp;
//        sftp = sftp_new(my_ssh_session);
//        if (sftp == NULL)
//        {
//            fprintf(stderr, "Error allocating SFTP session: %s\n",
//                    ssh_get_error(my_ssh_session));
//            return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Error allocating SFTP session"); //SSH_ERROR;
//        }
//        rc = sftp_init(sftp);
//        if (rc != SSH_OK)
//        {
//            fprintf(stderr, "Error initializing SFTP session: code %d.\n",
//                    sftp_get_error(sftp));
//            sftp_free(sftp);
//            return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Error initializing SFTP session: code");
//        }
//
//
//
//        int access_type;
//        sftp_file file;
//        char buffer[MAX_XFER_BUF_SIZE];
//        int nbytes, nwritten;
//        int fd;
//        access_type = O_RDONLY;
//        file = sftp_open(sftp, "/etc/profile",
//                         access_type, 0);
//        if (file == NULL) {
//            fprintf(stderr, "Can't open file for reading: %s\n",
//                    ssh_get_error(my_ssh_session));
//            return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Can't open file for reading");
//        }
//        fd = open("/path/to/profile", O_CREAT);
//        if (fd < 0) {
//            fprintf(stderr, "Can't open file for writing: %s\n",
//                    strerror(errno));
//            return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Can't open file for writing");
//        }
//        for (;;) {
//            nbytes = sftp_read(file, buffer, sizeof(buffer));
//            if (nbytes == 0) {
//                break; // EOF
//            } else if (nbytes < 0) {
//                fprintf(stderr, "Error while reading file: %s\n",
//                        ssh_get_error(my_ssh_session));
//                sftp_close(file);
//                return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Error while reading file");
//            }
//            nwritten = write(fd, buffer, nbytes);
//            if (nwritten != nbytes) {
//                fprintf(stderr, "Error writing: %s\n",
//                        strerror(errno));
//                sftp_close(file);
//                return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Error writing");
//            }
//        }
//        rc = sftp_close(file);
//        if (rc != SSH_OK) {
//            fprintf(stderr, "Can't close the read file: %s\n",
//                    ssh_get_error(my_ssh_session));
//            return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Can't close the read file");
//        }
//
//
//        ssh_disconnect(my_ssh_session);
//        sftp_free(sftp);
//        ssh_free(my_ssh_session);

        return Status::OK;

        //std::string prefix("Hello ");
        //response->set_message(prefix + request->sftp().username());
        //response->set_message(prefix + std::to_string(50000))
//        std::string prefix("Hello ");
//        response->result(prefix + request->sftp().username());
        //return Status::OK;
    }
};


void RunServer() {
    std::string server_address("0.0.0.0:50051");

    SFTPServiceImpl service;

    ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}


int main(int argc, char **argv) {
    RunServer();

    return 0;
}

