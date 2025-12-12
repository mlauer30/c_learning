FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    gcc \
    g++ \
    make \
    gdb \
    valgrind \
    man-db \
    manpages-dev \
    build-essential \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

RUN echo 'echo "C Development Environment - Edit on host, compile here!"' >> /root/.bashrc

CMD ["/bin/bash"]
