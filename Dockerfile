FROM grpc/cxx:latest

RUN apt update && \
    apt install -y ssh libssh-dev

COPY . /app

WORKDIR /app

RUN make clean && make all

CMD ["/app/server"]