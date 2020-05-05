# cpp-client

C++ client PoC for Clarifai API

[![Linux](https://github.com/taras-clarifai/cpp-client/workflows/Linux/badge.svg?branch=master)](https://github.com/taras-clarifai/cpp-client/actions)
[![codecov](https://codecov.io/gh/taras-clarifai/cpp-client/branch/master/graph/badge.svg)](https://codecov.io/gh/taras-clarifai/cpp-client)

![language](https://img.shields.io/badge/language-c++-blue.svg)
![c++](https://img.shields.io/badge/std-c++14-blue.svg) 

## Build

#### Library

Main build procedure is relatively simple:

```
git submodule update --init --recursive
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make
```

Or if you're using IDE, just open top-level `CMakeLists.txt` file.

#### Preparation

What is actually hard is to get the right dependencies and protos. As of now, Clarifai protos were build using old gRPC library (1.23.0) and with old protobuf (3.9.1). In order to have consistent version with various python packages, I changed version to 1.27.2 and 3.11.2 accordingly. Submodules gRPC and it's dependency have same versions in the repository.

Second problem was to build Google APIs that we use. For that I modified `internal_proto_build.sh` script in a couple of ways. I set `BUILD_CLIENTS=true`, `BUILD_CPP_CLIENT=true`, `GOOGLEAPISSOURCEDIR="${PROTO_CLIENTS_DIR}/googleapis"` and added:

```
mkdir -p ${GOOGLEAPISSOURCEDIR}
protoc -I $SOURCEDIR \
        -I $ANNOTATIONS_PATH \
        --cpp_out=$GOOGLEAPISSOURCEDIR \
        --grpc_out=$GOOGLEAPISSOURCEDIR \
        --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
        $PACKAGE_ROOT/proto/google/api/*.proto
```

After this I copied generated `*.cc` and `.h` files for Google APIs and added to this repository.