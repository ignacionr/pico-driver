FROM ubuntu:24.04

# Install needed packages
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    build-essential \
    curl \
    git \
    iproute2 \
    lsb-release \
    procps \
    unzip \
    wget \
    zip \
    cmake \
    ninja-build \
    g++-14

RUN apt-get install -y ca-certificates

RUN mkdir -p /opt/raspberrypi

RUN git clone --depth=1 --recursive https://github.com/raspberrypi/pico-sdk.git /opt/raspberrypi/pico-sdk

RUN apt install -y cmake gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib

RUN apt-get install -y python3 python3-pip

RUN echo "export PICO_SDK_PATH=/opt/raspberrypi/pico-sdk" >> ~/.bashrc
RUN echo "export PICO_CMAKE_INCLUDE=/opt/raspberrypi/pico-sdk/external/pico_sdk_import.cmake" >> ~/.bashrc
