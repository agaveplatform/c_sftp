// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: sftp.proto
#ifndef GRPC_sftp_2eproto__INCLUDED
#define GRPC_sftp_2eproto__INCLUDED

#include "sftp.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace sftp {

class SFTP final {
 public:
  static constexpr char const* service_full_name() {
    return "sftp.SFTP";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::sftp::CopyFromRemoteResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>> AsyncCopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>>(AsyncCopyFromRemoteServiceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>> PrepareAsyncCopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>>(PrepareAsyncCopyFromRemoteServiceRaw(context, request, cq));
    }
    virtual ::grpc::Status CopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::sftp::CopyLocalToRemoteResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>> AsyncCopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>>(AsyncCopyLocalToRemoteServiceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>> PrepareAsyncCopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>>(PrepareAsyncCopyLocalToRemoteServiceRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void CopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CopyFromRemoteService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sftp::CopyFromRemoteResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CopyLocalToRemoteService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sftp::CopyLocalToRemoteResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>* AsyncCopyFromRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyFromRemoteResponse>* PrepareAsyncCopyFromRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>* AsyncCopyLocalToRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::sftp::CopyLocalToRemoteResponse>* PrepareAsyncCopyLocalToRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::sftp::CopyFromRemoteResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>> AsyncCopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>>(AsyncCopyFromRemoteServiceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>> PrepareAsyncCopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>>(PrepareAsyncCopyFromRemoteServiceRaw(context, request, cq));
    }
    ::grpc::Status CopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::sftp::CopyLocalToRemoteResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>> AsyncCopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>>(AsyncCopyLocalToRemoteServiceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>> PrepareAsyncCopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>>(PrepareAsyncCopyLocalToRemoteServiceRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void CopyFromRemoteService(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response, std::function<void(::grpc::Status)>) override;
      void CopyFromRemoteService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sftp::CopyFromRemoteResponse* response, std::function<void(::grpc::Status)>) override;
      void CopyLocalToRemoteService(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response, std::function<void(::grpc::Status)>) override;
      void CopyLocalToRemoteService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sftp::CopyLocalToRemoteResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>* AsyncCopyFromRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::sftp::CopyFromRemoteResponse>* PrepareAsyncCopyFromRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyFromRemoteRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>* AsyncCopyLocalToRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::sftp::CopyLocalToRemoteResponse>* PrepareAsyncCopyLocalToRemoteServiceRaw(::grpc::ClientContext* context, const ::sftp::CopyLocalToRemoteRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CopyFromRemoteService_;
    const ::grpc::internal::RpcMethod rpcmethod_CopyLocalToRemoteService_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response);
    virtual ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CopyFromRemoteService() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCopyFromRemoteService(::grpc::ServerContext* context, ::sftp::CopyFromRemoteRequest* request, ::grpc::ServerAsyncResponseWriter< ::sftp::CopyFromRemoteResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CopyLocalToRemoteService() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCopyLocalToRemoteService(::grpc::ServerContext* context, ::sftp::CopyLocalToRemoteRequest* request, ::grpc::ServerAsyncResponseWriter< ::sftp::CopyLocalToRemoteResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CopyFromRemoteService<WithAsyncMethod_CopyLocalToRemoteService<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CopyFromRemoteService() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::sftp::CopyFromRemoteRequest, ::sftp::CopyFromRemoteResponse>(
          [this](::grpc::ServerContext* context,
                 const ::sftp::CopyFromRemoteRequest* request,
                 ::sftp::CopyFromRemoteResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CopyFromRemoteService(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CopyLocalToRemoteService() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::sftp::CopyLocalToRemoteRequest, ::sftp::CopyLocalToRemoteResponse>(
          [this](::grpc::ServerContext* context,
                 const ::sftp::CopyLocalToRemoteRequest* request,
                 ::sftp::CopyLocalToRemoteResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CopyLocalToRemoteService(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_CopyFromRemoteService<ExperimentalWithCallbackMethod_CopyLocalToRemoteService<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CopyFromRemoteService() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CopyLocalToRemoteService() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CopyFromRemoteService() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCopyFromRemoteService(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CopyLocalToRemoteService() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCopyLocalToRemoteService(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CopyFromRemoteService() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CopyFromRemoteService(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CopyFromRemoteService(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CopyLocalToRemoteService() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CopyLocalToRemoteService(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CopyLocalToRemoteService(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CopyFromRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CopyFromRemoteService() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::sftp::CopyFromRemoteRequest, ::sftp::CopyFromRemoteResponse>(std::bind(&WithStreamedUnaryMethod_CopyFromRemoteService<BaseClass>::StreamedCopyFromRemoteService, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CopyFromRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CopyFromRemoteService(::grpc::ServerContext* context, const ::sftp::CopyFromRemoteRequest* request, ::sftp::CopyFromRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCopyFromRemoteService(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::sftp::CopyFromRemoteRequest,::sftp::CopyFromRemoteResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CopyLocalToRemoteService : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CopyLocalToRemoteService() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::sftp::CopyLocalToRemoteRequest, ::sftp::CopyLocalToRemoteResponse>(std::bind(&WithStreamedUnaryMethod_CopyLocalToRemoteService<BaseClass>::StreamedCopyLocalToRemoteService, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CopyLocalToRemoteService() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CopyLocalToRemoteService(::grpc::ServerContext* context, const ::sftp::CopyLocalToRemoteRequest* request, ::sftp::CopyLocalToRemoteResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCopyLocalToRemoteService(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::sftp::CopyLocalToRemoteRequest,::sftp::CopyLocalToRemoteResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CopyFromRemoteService<WithStreamedUnaryMethod_CopyLocalToRemoteService<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CopyFromRemoteService<WithStreamedUnaryMethod_CopyLocalToRemoteService<Service > > StreamedService;
};

}  // namespace sftp


#endif  // GRPC_sftp_2eproto__INCLUDED
