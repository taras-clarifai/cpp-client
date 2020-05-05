// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/py_media_processor/py_media_processor.proto

#include "proto/py_media_processor/py_media_processor.pb.h"
#include "proto/py_media_processor/py_media_processor.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* MediaProcessorService_method_names[] = {
  "/MediaProcessorService/Predict",
};

std::unique_ptr< MediaProcessorService::Stub> MediaProcessorService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MediaProcessorService::Stub> stub(new MediaProcessorService::Stub(channel));
  return stub;
}

MediaProcessorService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Predict_(MediaProcessorService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MediaProcessorService::Stub::Predict(::grpc::ClientContext* context, const ::PredictRequest& request, ::PredictResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Predict_, context, request, response);
}

void MediaProcessorService::Stub::experimental_async::Predict(::grpc::ClientContext* context, const ::PredictRequest* request, ::PredictResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request, response, std::move(f));
}

void MediaProcessorService::Stub::experimental_async::Predict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::PredictResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request, response, std::move(f));
}

void MediaProcessorService::Stub::experimental_async::Predict(::grpc::ClientContext* context, const ::PredictRequest* request, ::PredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request, response, reactor);
}

void MediaProcessorService::Stub::experimental_async::Predict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::PredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::PredictResponse>* MediaProcessorService::Stub::AsyncPredictRaw(::grpc::ClientContext* context, const ::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::PredictResponse>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::PredictResponse>* MediaProcessorService::Stub::PrepareAsyncPredictRaw(::grpc::ClientContext* context, const ::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::PredictResponse>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, false);
}

MediaProcessorService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MediaProcessorService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MediaProcessorService::Service, ::PredictRequest, ::PredictResponse>(
          std::mem_fn(&MediaProcessorService::Service::Predict), this)));
}

MediaProcessorService::Service::~Service() {
}

::grpc::Status MediaProcessorService::Service::Predict(::grpc::ServerContext* context, const ::PredictRequest* request, ::PredictResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


