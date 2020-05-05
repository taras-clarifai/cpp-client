// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/config_runner/config_runner.proto
#ifndef GRPC_proto_2fconfig_5frunner_2fconfig_5frunner_2eproto__INCLUDED
#define GRPC_proto_2fconfig_5frunner_2fconfig_5frunner_2eproto__INCLUDED

#include "proto/config_runner/config_runner.pb.h"

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

class ConfigRunner final {
 public:
  static constexpr char const* service_full_name() {
    return "ConfigRunner";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::ConfigRunResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>> AsyncConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>>(AsyncConfigRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>> PrepareAsyncConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>>(PrepareAsyncConfigRunRaw(context, request, cq));
    }
    virtual ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::ShutdownResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>> AsyncShutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ConfigRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigRunResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void ConfigRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Shutdown(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ShutdownResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void Shutdown(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ShutdownResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>* AsyncConfigRunRaw(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ConfigRunResponse>* PrepareAsyncConfigRunRaw(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ShutdownResponse>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::ConfigRunResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>> AsyncConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>>(AsyncConfigRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>> PrepareAsyncConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>>(PrepareAsyncConfigRunRaw(context, request, cq));
    }
    ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::ShutdownResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>> AsyncShutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response, std::function<void(::grpc::Status)>) override;
      void ConfigRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigRunResponse* response, std::function<void(::grpc::Status)>) override;
      void ConfigRun(::grpc::ClientContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void ConfigRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response, std::function<void(::grpc::Status)>) override;
      void Shutdown(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ShutdownResponse* response, std::function<void(::grpc::Status)>) override;
      void Shutdown(::grpc::ClientContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void Shutdown(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ShutdownResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>* AsyncConfigRunRaw(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ConfigRunResponse>* PrepareAsyncConfigRunRaw(::grpc::ClientContext* context, const ::ConfigRunRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ShutdownResponse>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::ShutdownRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ConfigRun_;
    const ::grpc::internal::RpcMethod rpcmethod_Shutdown_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response);
    virtual ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ConfigRun() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConfigRun(::grpc::ServerContext* context, ::ConfigRunRequest* request, ::grpc::ServerAsyncResponseWriter< ::ConfigRunResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Shutdown() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::ShutdownRequest* request, ::grpc::ServerAsyncResponseWriter< ::ShutdownResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ConfigRun<WithAsyncMethod_Shutdown<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_ConfigRun() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::ConfigRunRequest, ::ConfigRunResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ConfigRunRequest* request,
                 ::ConfigRunResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->ConfigRun(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_ConfigRun(
        ::grpc::experimental::MessageAllocator< ::ConfigRunRequest, ::ConfigRunResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ConfigRunRequest, ::ConfigRunResponse>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Shutdown() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::ShutdownRequest, ::ShutdownResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ShutdownRequest* request,
                 ::ShutdownResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Shutdown(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_Shutdown(
        ::grpc::experimental::MessageAllocator< ::ShutdownRequest, ::ShutdownResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ShutdownRequest, ::ShutdownResponse>*>(
          ::grpc::Service::experimental().GetHandler(1))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_ConfigRun<ExperimentalWithCallbackMethod_Shutdown<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ConfigRun() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Shutdown() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ConfigRun() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConfigRun(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Shutdown() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_ConfigRun() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ConfigRun(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConfigRun(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Shutdown() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Shutdown(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Shutdown(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ConfigRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ConfigRun() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ConfigRunRequest, ::ConfigRunResponse>(std::bind(&WithStreamedUnaryMethod_ConfigRun<BaseClass>::StreamedConfigRun, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ConfigRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ConfigRun(::grpc::ServerContext* context, const ::ConfigRunRequest* request, ::ConfigRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConfigRun(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ConfigRunRequest,::ConfigRunResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Shutdown() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ShutdownRequest, ::ShutdownResponse>(std::bind(&WithStreamedUnaryMethod_Shutdown<BaseClass>::StreamedShutdown, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::ShutdownRequest* request, ::ShutdownResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedShutdown(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ShutdownRequest,::ShutdownResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ConfigRun<WithStreamedUnaryMethod_Shutdown<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ConfigRun<WithStreamedUnaryMethod_Shutdown<Service > > StreamedService;
};


#endif  // GRPC_proto_2fconfig_5frunner_2fconfig_5frunner_2eproto__INCLUDED
