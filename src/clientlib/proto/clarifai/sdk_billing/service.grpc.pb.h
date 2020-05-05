// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/clarifai/sdk_billing/service.proto
#ifndef GRPC_proto_2fclarifai_2fsdk_5fbilling_2fservice_2eproto__INCLUDED
#define GRPC_proto_2fclarifai_2fsdk_5fbilling_2fservice_2eproto__INCLUDED

#include "proto/clarifai/sdk_billing/service.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace clarifai {
namespace sdk_billing {

class SDKBillingService final {
 public:
  static constexpr char const* service_full_name() {
    return "clarifai.sdk_billing.SDKBillingService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Health Check
    virtual ::grpc::Status GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::clarifai::sdk_billing::GetHealthzResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>> AsyncGetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>>(AsyncGetHealthzRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>> PrepareAsyncGetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>>(PrepareAsyncGetHealthzRaw(context, request, cq));
    }
    // Add a new sdk_billing entry into our database
    // note(lowjiansheng): not following convention for request formats as this proto definition is being used in many parts of Mobile SDK
    virtual ::grpc::Status PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::clarifai::sdk_billing::SDKBillingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>> AsyncPostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>>(AsyncPostSDKBillingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>> PrepareAsyncPostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>>(PrepareAsyncPostSDKBillingRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Health Check
      virtual void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      // Add a new sdk_billing entry into our database
      // note(lowjiansheng): not following convention for request formats as this proto definition is being used in many parts of Mobile SDK
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>* AsyncGetHealthzRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::GetHealthzResponse>* PrepareAsyncGetHealthzRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>* AsyncPostSDKBillingRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::clarifai::sdk_billing::SDKBillingResponse>* PrepareAsyncPostSDKBillingRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::clarifai::sdk_billing::GetHealthzResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>> AsyncGetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>>(AsyncGetHealthzRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>> PrepareAsyncGetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>>(PrepareAsyncGetHealthzRaw(context, request, cq));
    }
    ::grpc::Status PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::clarifai::sdk_billing::SDKBillingResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>> AsyncPostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>>(AsyncPostSDKBillingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>> PrepareAsyncPostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>>(PrepareAsyncPostSDKBillingRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, std::function<void(::grpc::Status)>) override;
      void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetHealthz(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetHealthz(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::GetHealthzResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, std::function<void(::grpc::Status)>) override;
      void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void PostSDKBilling(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void PostSDKBilling(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::clarifai::sdk_billing::SDKBillingResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
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
    ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>* AsyncGetHealthzRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::GetHealthzResponse>* PrepareAsyncGetHealthzRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::GetHealthzRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>* AsyncPostSDKBillingRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::clarifai::sdk_billing::SDKBillingResponse>* PrepareAsyncPostSDKBillingRaw(::grpc::ClientContext* context, const ::clarifai::sdk_billing::SDKBilling& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetHealthz_;
    const ::grpc::internal::RpcMethod rpcmethod_PostSDKBilling_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Health Check
    virtual ::grpc::Status GetHealthz(::grpc::ServerContext* context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response);
    // Add a new sdk_billing entry into our database
    // note(lowjiansheng): not following convention for request formats as this proto definition is being used in many parts of Mobile SDK
    virtual ::grpc::Status PostSDKBilling(::grpc::ServerContext* context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetHealthz() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetHealthz(::grpc::ServerContext* context, ::clarifai::sdk_billing::GetHealthzRequest* request, ::grpc::ServerAsyncResponseWriter< ::clarifai::sdk_billing::GetHealthzResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PostSDKBilling() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPostSDKBilling(::grpc::ServerContext* context, ::clarifai::sdk_billing::SDKBilling* request, ::grpc::ServerAsyncResponseWriter< ::clarifai::sdk_billing::SDKBillingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetHealthz<WithAsyncMethod_PostSDKBilling<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetHealthz() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::clarifai::sdk_billing::GetHealthzRequest, ::clarifai::sdk_billing::GetHealthzResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::clarifai::sdk_billing::GetHealthzRequest* request, ::clarifai::sdk_billing::GetHealthzResponse* response) { return this->GetHealthz(context, request, response); }));}
    void SetMessageAllocatorFor_GetHealthz(
        ::grpc::experimental::MessageAllocator< ::clarifai::sdk_billing::GetHealthzRequest, ::clarifai::sdk_billing::GetHealthzResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::clarifai::sdk_billing::GetHealthzRequest, ::clarifai::sdk_billing::GetHealthzResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetHealthz(
      ::grpc::CallbackServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetHealthz(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_PostSDKBilling() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::clarifai::sdk_billing::SDKBilling, ::clarifai::sdk_billing::SDKBillingResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::clarifai::sdk_billing::SDKBilling* request, ::clarifai::sdk_billing::SDKBillingResponse* response) { return this->PostSDKBilling(context, request, response); }));}
    void SetMessageAllocatorFor_PostSDKBilling(
        ::grpc::experimental::MessageAllocator< ::clarifai::sdk_billing::SDKBilling, ::clarifai::sdk_billing::SDKBillingResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::clarifai::sdk_billing::SDKBilling, ::clarifai::sdk_billing::SDKBillingResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* PostSDKBilling(
      ::grpc::CallbackServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* PostSDKBilling(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetHealthz<ExperimentalWithCallbackMethod_PostSDKBilling<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetHealthz<ExperimentalWithCallbackMethod_PostSDKBilling<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetHealthz() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PostSDKBilling() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetHealthz() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetHealthz(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PostSDKBilling() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPostSDKBilling(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetHealthz() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetHealthz(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetHealthz(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetHealthz(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_PostSDKBilling() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PostSDKBilling(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* PostSDKBilling(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* PostSDKBilling(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetHealthz : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetHealthz() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::clarifai::sdk_billing::GetHealthzRequest, ::clarifai::sdk_billing::GetHealthzResponse>(std::bind(&WithStreamedUnaryMethod_GetHealthz<BaseClass>::StreamedGetHealthz, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetHealthz() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetHealthz(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::GetHealthzRequest* /*request*/, ::clarifai::sdk_billing::GetHealthzResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetHealthz(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::clarifai::sdk_billing::GetHealthzRequest,::clarifai::sdk_billing::GetHealthzResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PostSDKBilling : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PostSDKBilling() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::clarifai::sdk_billing::SDKBilling, ::clarifai::sdk_billing::SDKBillingResponse>(std::bind(&WithStreamedUnaryMethod_PostSDKBilling<BaseClass>::StreamedPostSDKBilling, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_PostSDKBilling() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PostSDKBilling(::grpc::ServerContext* /*context*/, const ::clarifai::sdk_billing::SDKBilling* /*request*/, ::clarifai::sdk_billing::SDKBillingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPostSDKBilling(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::clarifai::sdk_billing::SDKBilling,::clarifai::sdk_billing::SDKBillingResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetHealthz<WithStreamedUnaryMethod_PostSDKBilling<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetHealthz<WithStreamedUnaryMethod_PostSDKBilling<Service > > StreamedService;
};

}  // namespace sdk_billing
}  // namespace clarifai


#endif  // GRPC_proto_2fclarifai_2fsdk_5fbilling_2fservice_2eproto__INCLUDED