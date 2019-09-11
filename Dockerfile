FROM grpc/cxx:latest

RUN apt update && \
    apt install ssh libssh-dev

COPY . .

RUN make clean && make all