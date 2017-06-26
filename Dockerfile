FROM ubuntu:14.04

RUN apt-get update && \
    apt-get install -y \
    cmake \
    gcc \
    libpcap-dev \
    make \
    vim

RUN mkdir -p /work
ADD CMakeLists.txt /work
ADD main.c /work

WORKDIR /work

CMD ["bash"]
