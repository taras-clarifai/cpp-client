#!/bin/bash

set -x

sudo apt-get update -qq
sudo apt-get install -y --no-install-recommends build-essential autoconf libtool pkg-config cmake
sudo apt-get install -y --no-install-recommends gdb ccache curl libcurl4-openssl-dev lcov

# Golang (for gRPC)
wget https://dl.google.com/go/go1.14.2.linux-amd64.tar.gz
sudo tar -xvf go1.14.2.linux-amd64.tar.gz
sudo mv go /usr/local
export GOROOT=/usr/local/go
