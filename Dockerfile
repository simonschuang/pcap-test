FROM ubuntu:14.04

RUN apt-get update && \
    apt-get install -y \
    cmake \
    gcc \
    make \
    vim

WORKDIR /work

CMD ["bash"]
