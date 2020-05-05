#!/bin/bash

set -x

sudo apt-get update -qq
sudo apt-get install -y --no-install-recommends build-essential gdb ccache curl libcurl4-openssl-dev gcov
