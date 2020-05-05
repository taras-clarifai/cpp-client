// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/color/color.proto
#ifndef GRPC_proto_2fcolor_2fcolor_2eproto__INCLUDED
#define GRPC_proto_2fcolor_2fcolor_2eproto__INCLUDED

#include "proto/color/color.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

class ColorService final {
 public:
  static constexpr char const* service_full_name() {
    return "ColorService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::ColorPredictResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>> AsyncColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>>(AsyncColorPredictRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>> PrepareAsyncColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>>(PrepareAsyncColorPredictRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ColorPredict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ColorPredictResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void ColorPredict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ColorPredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>* AsyncColorPredictRaw(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ColorPredictResponse>* PrepareAsyncColorPredictRaw(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::ColorPredictResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>> AsyncColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>>(AsyncColorPredictRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>> PrepareAsyncColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>>(PrepareAsyncColorPredictRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response, std::function<void(::grpc::Status)>) override;
      void ColorPredict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ColorPredictResponse* response, std::function<void(::grpc::Status)>) override;
      void ColorPredict(::grpc::ClientContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void ColorPredict(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ColorPredictResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>* AsyncColorPredictRaw(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ColorPredictResponse>* PrepareAsyncColorPredictRaw(::grpc::ClientContext* context, const ::ColorPredictRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ColorPredict_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ColorPredict() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestColorPredict(::grpc::ServerContext* context, ::ColorPredictRequest* request, ::grpc::ServerAsyncResponseWriter< ::ColorPredictResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ColorPredict<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_ColorPredict() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::ColorPredictRequest, ::ColorPredictResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ColorPredictRequest* request,
                 ::ColorPredictResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->ColorPredict(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_ColorPredict(
        ::grpc::experimental::MessageAllocator< ::ColorPredictRequest, ::ColorPredictResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ColorPredictRequest, ::ColorPredictResponse>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_ColorPredict<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ColorPredict() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ColorPredict() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestColorPredict(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_ColorPredict() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ColorPredict(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ColorPredict(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ColorPredict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ColorPredict() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ColorPredictRequest, ::ColorPredictResponse>(std::bind(&WithStreamedUnaryMethod_ColorPredict<BaseClass>::StreamedColorPredict, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ColorPredict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ColorPredict(::grpc::ServerContext* context, const ::ColorPredictRequest* request, ::ColorPredictResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedColorPredict(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ColorPredictRequest,::ColorPredictResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ColorPredict<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ColorPredict<Service > StreamedService;
};


#endif  // GRPC_proto_2fcolor_2fcolor_2eproto__INCLUDED
