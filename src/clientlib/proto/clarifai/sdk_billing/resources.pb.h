// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clarifai/sdk_billing/resources.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "proto/clarifai/analytics/resources.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto;
namespace clarifai {
namespace sdk_billing {
class SDKBilling;
class SDKBillingDefaultTypeInternal;
extern SDKBillingDefaultTypeInternal _SDKBilling_default_instance_;
class SDKBillingCycle;
class SDKBillingCycleDefaultTypeInternal;
extern SDKBillingCycleDefaultTypeInternal _SDKBillingCycle_default_instance_;
}  // namespace sdk_billing
}  // namespace clarifai
PROTOBUF_NAMESPACE_OPEN
template<> ::clarifai::sdk_billing::SDKBilling* Arena::CreateMaybeMessage<::clarifai::sdk_billing::SDKBilling>(Arena*);
template<> ::clarifai::sdk_billing::SDKBillingCycle* Arena::CreateMaybeMessage<::clarifai::sdk_billing::SDKBillingCycle>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace clarifai {
namespace sdk_billing {

// ===================================================================

class SDKBillingCycle :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:clarifai.sdk_billing.SDKBillingCycle) */ {
 public:
  SDKBillingCycle();
  virtual ~SDKBillingCycle();

  SDKBillingCycle(const SDKBillingCycle& from);
  SDKBillingCycle(SDKBillingCycle&& from) noexcept
    : SDKBillingCycle() {
    *this = ::std::move(from);
  }

  inline SDKBillingCycle& operator=(const SDKBillingCycle& from) {
    CopyFrom(from);
    return *this;
  }
  inline SDKBillingCycle& operator=(SDKBillingCycle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SDKBillingCycle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SDKBillingCycle* internal_default_instance() {
    return reinterpret_cast<const SDKBillingCycle*>(
               &_SDKBillingCycle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SDKBillingCycle& a, SDKBillingCycle& b) {
    a.Swap(&b);
  }
  inline void Swap(SDKBillingCycle* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SDKBillingCycle* New() const final {
    return CreateMaybeMessage<SDKBillingCycle>(nullptr);
  }

  SDKBillingCycle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SDKBillingCycle>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SDKBillingCycle& from);
  void MergeFrom(const SDKBillingCycle& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SDKBillingCycle* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "clarifai.sdk_billing.SDKBillingCycle";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto);
    return ::descriptor_table_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kYearFieldNumber = 1,
    kMonthFieldNumber = 2,
  };
  // uint32 year = 1;
  void clear_year();
  ::PROTOBUF_NAMESPACE_ID::uint32 year() const;
  void set_year(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_year() const;
  void _internal_set_year(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 month = 2;
  void clear_month();
  ::PROTOBUF_NAMESPACE_ID::uint32 month() const;
  void set_month(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_month() const;
  void _internal_set_month(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:clarifai.sdk_billing.SDKBillingCycle)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 year_;
  ::PROTOBUF_NAMESPACE_ID::uint32 month_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto;
};
// -------------------------------------------------------------------

class SDKBilling :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:clarifai.sdk_billing.SDKBilling) */ {
 public:
  SDKBilling();
  virtual ~SDKBilling();

  SDKBilling(const SDKBilling& from);
  SDKBilling(SDKBilling&& from) noexcept
    : SDKBilling() {
    *this = ::std::move(from);
  }

  inline SDKBilling& operator=(const SDKBilling& from) {
    CopyFrom(from);
    return *this;
  }
  inline SDKBilling& operator=(SDKBilling&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SDKBilling& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SDKBilling* internal_default_instance() {
    return reinterpret_cast<const SDKBilling*>(
               &_SDKBilling_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SDKBilling& a, SDKBilling& b) {
    a.Swap(&b);
  }
  inline void Swap(SDKBilling* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SDKBilling* New() const final {
    return CreateMaybeMessage<SDKBilling>(nullptr);
  }

  SDKBilling* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SDKBilling>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SDKBilling& from);
  void MergeFrom(const SDKBilling& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SDKBilling* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "clarifai.sdk_billing.SDKBilling";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto);
    return ::descriptor_table_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBatchUniqueIdentifierFieldNumber = 1,
    kSystemUuidFieldNumber = 7,
    kDeviceInfoFieldNumber = 2,
    kCycleFieldNumber = 3,
    kHostAppInfoFieldNumber = 4,
    kOperatingSystemFieldNumber = 5,
    kStateFieldNumber = 6,
    kSdkFieldNumber = 8,
  };
  // string batch_unique_identifier = 1;
  void clear_batch_unique_identifier();
  const std::string& batch_unique_identifier() const;
  void set_batch_unique_identifier(const std::string& value);
  void set_batch_unique_identifier(std::string&& value);
  void set_batch_unique_identifier(const char* value);
  void set_batch_unique_identifier(const char* value, size_t size);
  std::string* mutable_batch_unique_identifier();
  std::string* release_batch_unique_identifier();
  void set_allocated_batch_unique_identifier(std::string* batch_unique_identifier);
  private:
  const std::string& _internal_batch_unique_identifier() const;
  void _internal_set_batch_unique_identifier(const std::string& value);
  std::string* _internal_mutable_batch_unique_identifier();
  public:

  // string system_uuid = 7;
  void clear_system_uuid();
  const std::string& system_uuid() const;
  void set_system_uuid(const std::string& value);
  void set_system_uuid(std::string&& value);
  void set_system_uuid(const char* value);
  void set_system_uuid(const char* value, size_t size);
  std::string* mutable_system_uuid();
  std::string* release_system_uuid();
  void set_allocated_system_uuid(std::string* system_uuid);
  private:
  const std::string& _internal_system_uuid() const;
  void _internal_set_system_uuid(const std::string& value);
  std::string* _internal_mutable_system_uuid();
  public:

  // .clarifai.analytics.DeviceInfo device_info = 2;
  bool has_device_info() const;
  private:
  bool _internal_has_device_info() const;
  public:
  void clear_device_info();
  const ::clarifai::analytics::DeviceInfo& device_info() const;
  ::clarifai::analytics::DeviceInfo* release_device_info();
  ::clarifai::analytics::DeviceInfo* mutable_device_info();
  void set_allocated_device_info(::clarifai::analytics::DeviceInfo* device_info);
  private:
  const ::clarifai::analytics::DeviceInfo& _internal_device_info() const;
  ::clarifai::analytics::DeviceInfo* _internal_mutable_device_info();
  public:

  // .clarifai.sdk_billing.SDKBillingCycle cycle = 3;
  bool has_cycle() const;
  private:
  bool _internal_has_cycle() const;
  public:
  void clear_cycle();
  const ::clarifai::sdk_billing::SDKBillingCycle& cycle() const;
  ::clarifai::sdk_billing::SDKBillingCycle* release_cycle();
  ::clarifai::sdk_billing::SDKBillingCycle* mutable_cycle();
  void set_allocated_cycle(::clarifai::sdk_billing::SDKBillingCycle* cycle);
  private:
  const ::clarifai::sdk_billing::SDKBillingCycle& _internal_cycle() const;
  ::clarifai::sdk_billing::SDKBillingCycle* _internal_mutable_cycle();
  public:

  // .clarifai.analytics.HostAppInfo host_app_info = 4;
  bool has_host_app_info() const;
  private:
  bool _internal_has_host_app_info() const;
  public:
  void clear_host_app_info();
  const ::clarifai::analytics::HostAppInfo& host_app_info() const;
  ::clarifai::analytics::HostAppInfo* release_host_app_info();
  ::clarifai::analytics::HostAppInfo* mutable_host_app_info();
  void set_allocated_host_app_info(::clarifai::analytics::HostAppInfo* host_app_info);
  private:
  const ::clarifai::analytics::HostAppInfo& _internal_host_app_info() const;
  ::clarifai::analytics::HostAppInfo* _internal_mutable_host_app_info();
  public:

  // .clarifai.analytics.OperatingSystem operating_system = 5;
  bool has_operating_system() const;
  private:
  bool _internal_has_operating_system() const;
  public:
  void clear_operating_system();
  const ::clarifai::analytics::OperatingSystem& operating_system() const;
  ::clarifai::analytics::OperatingSystem* release_operating_system();
  ::clarifai::analytics::OperatingSystem* mutable_operating_system();
  void set_allocated_operating_system(::clarifai::analytics::OperatingSystem* operating_system);
  private:
  const ::clarifai::analytics::OperatingSystem& _internal_operating_system() const;
  ::clarifai::analytics::OperatingSystem* _internal_mutable_operating_system();
  public:

  // .clarifai.analytics.State state = 6;
  bool has_state() const;
  private:
  bool _internal_has_state() const;
  public:
  void clear_state();
  const ::clarifai::analytics::State& state() const;
  ::clarifai::analytics::State* release_state();
  ::clarifai::analytics::State* mutable_state();
  void set_allocated_state(::clarifai::analytics::State* state);
  private:
  const ::clarifai::analytics::State& _internal_state() const;
  ::clarifai::analytics::State* _internal_mutable_state();
  public:

  // .clarifai.analytics.SDK sdk = 8;
  bool has_sdk() const;
  private:
  bool _internal_has_sdk() const;
  public:
  void clear_sdk();
  const ::clarifai::analytics::SDK& sdk() const;
  ::clarifai::analytics::SDK* release_sdk();
  ::clarifai::analytics::SDK* mutable_sdk();
  void set_allocated_sdk(::clarifai::analytics::SDK* sdk);
  private:
  const ::clarifai::analytics::SDK& _internal_sdk() const;
  ::clarifai::analytics::SDK* _internal_mutable_sdk();
  public:

  // @@protoc_insertion_point(class_scope:clarifai.sdk_billing.SDKBilling)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr batch_unique_identifier_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr system_uuid_;
  ::clarifai::analytics::DeviceInfo* device_info_;
  ::clarifai::sdk_billing::SDKBillingCycle* cycle_;
  ::clarifai::analytics::HostAppInfo* host_app_info_;
  ::clarifai::analytics::OperatingSystem* operating_system_;
  ::clarifai::analytics::State* state_;
  ::clarifai::analytics::SDK* sdk_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SDKBillingCycle

// uint32 year = 1;
inline void SDKBillingCycle::clear_year() {
  year_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SDKBillingCycle::_internal_year() const {
  return year_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SDKBillingCycle::year() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBillingCycle.year)
  return _internal_year();
}
inline void SDKBillingCycle::_internal_set_year(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  year_ = value;
}
inline void SDKBillingCycle::set_year(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_year(value);
  // @@protoc_insertion_point(field_set:clarifai.sdk_billing.SDKBillingCycle.year)
}

// uint32 month = 2;
inline void SDKBillingCycle::clear_month() {
  month_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SDKBillingCycle::_internal_month() const {
  return month_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SDKBillingCycle::month() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBillingCycle.month)
  return _internal_month();
}
inline void SDKBillingCycle::_internal_set_month(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  month_ = value;
}
inline void SDKBillingCycle::set_month(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_month(value);
  // @@protoc_insertion_point(field_set:clarifai.sdk_billing.SDKBillingCycle.month)
}

// -------------------------------------------------------------------

// SDKBilling

// string batch_unique_identifier = 1;
inline void SDKBilling::clear_batch_unique_identifier() {
  batch_unique_identifier_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SDKBilling::batch_unique_identifier() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
  return _internal_batch_unique_identifier();
}
inline void SDKBilling::set_batch_unique_identifier(const std::string& value) {
  _internal_set_batch_unique_identifier(value);
  // @@protoc_insertion_point(field_set:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
}
inline std::string* SDKBilling::mutable_batch_unique_identifier() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
  return _internal_mutable_batch_unique_identifier();
}
inline const std::string& SDKBilling::_internal_batch_unique_identifier() const {
  return batch_unique_identifier_.GetNoArena();
}
inline void SDKBilling::_internal_set_batch_unique_identifier(const std::string& value) {
  
  batch_unique_identifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SDKBilling::set_batch_unique_identifier(std::string&& value) {
  
  batch_unique_identifier_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
}
inline void SDKBilling::set_batch_unique_identifier(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  batch_unique_identifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
}
inline void SDKBilling::set_batch_unique_identifier(const char* value, size_t size) {
  
  batch_unique_identifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
}
inline std::string* SDKBilling::_internal_mutable_batch_unique_identifier() {
  
  return batch_unique_identifier_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SDKBilling::release_batch_unique_identifier() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
  
  return batch_unique_identifier_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SDKBilling::set_allocated_batch_unique_identifier(std::string* batch_unique_identifier) {
  if (batch_unique_identifier != nullptr) {
    
  } else {
    
  }
  batch_unique_identifier_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), batch_unique_identifier);
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.batch_unique_identifier)
}

// .clarifai.analytics.DeviceInfo device_info = 2;
inline bool SDKBilling::_internal_has_device_info() const {
  return this != internal_default_instance() && device_info_ != nullptr;
}
inline bool SDKBilling::has_device_info() const {
  return _internal_has_device_info();
}
inline const ::clarifai::analytics::DeviceInfo& SDKBilling::_internal_device_info() const {
  const ::clarifai::analytics::DeviceInfo* p = device_info_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::analytics::DeviceInfo*>(
      &::clarifai::analytics::_DeviceInfo_default_instance_);
}
inline const ::clarifai::analytics::DeviceInfo& SDKBilling::device_info() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.device_info)
  return _internal_device_info();
}
inline ::clarifai::analytics::DeviceInfo* SDKBilling::release_device_info() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.device_info)
  
  ::clarifai::analytics::DeviceInfo* temp = device_info_;
  device_info_ = nullptr;
  return temp;
}
inline ::clarifai::analytics::DeviceInfo* SDKBilling::_internal_mutable_device_info() {
  
  if (device_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::analytics::DeviceInfo>(GetArenaNoVirtual());
    device_info_ = p;
  }
  return device_info_;
}
inline ::clarifai::analytics::DeviceInfo* SDKBilling::mutable_device_info() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.device_info)
  return _internal_mutable_device_info();
}
inline void SDKBilling::set_allocated_device_info(::clarifai::analytics::DeviceInfo* device_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(device_info_);
  }
  if (device_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      device_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, device_info, submessage_arena);
    }
    
  } else {
    
  }
  device_info_ = device_info;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.device_info)
}

// .clarifai.sdk_billing.SDKBillingCycle cycle = 3;
inline bool SDKBilling::_internal_has_cycle() const {
  return this != internal_default_instance() && cycle_ != nullptr;
}
inline bool SDKBilling::has_cycle() const {
  return _internal_has_cycle();
}
inline void SDKBilling::clear_cycle() {
  if (GetArenaNoVirtual() == nullptr && cycle_ != nullptr) {
    delete cycle_;
  }
  cycle_ = nullptr;
}
inline const ::clarifai::sdk_billing::SDKBillingCycle& SDKBilling::_internal_cycle() const {
  const ::clarifai::sdk_billing::SDKBillingCycle* p = cycle_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::sdk_billing::SDKBillingCycle*>(
      &::clarifai::sdk_billing::_SDKBillingCycle_default_instance_);
}
inline const ::clarifai::sdk_billing::SDKBillingCycle& SDKBilling::cycle() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.cycle)
  return _internal_cycle();
}
inline ::clarifai::sdk_billing::SDKBillingCycle* SDKBilling::release_cycle() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.cycle)
  
  ::clarifai::sdk_billing::SDKBillingCycle* temp = cycle_;
  cycle_ = nullptr;
  return temp;
}
inline ::clarifai::sdk_billing::SDKBillingCycle* SDKBilling::_internal_mutable_cycle() {
  
  if (cycle_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::sdk_billing::SDKBillingCycle>(GetArenaNoVirtual());
    cycle_ = p;
  }
  return cycle_;
}
inline ::clarifai::sdk_billing::SDKBillingCycle* SDKBilling::mutable_cycle() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.cycle)
  return _internal_mutable_cycle();
}
inline void SDKBilling::set_allocated_cycle(::clarifai::sdk_billing::SDKBillingCycle* cycle) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete cycle_;
  }
  if (cycle) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      cycle = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, cycle, submessage_arena);
    }
    
  } else {
    
  }
  cycle_ = cycle;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.cycle)
}

// .clarifai.analytics.HostAppInfo host_app_info = 4;
inline bool SDKBilling::_internal_has_host_app_info() const {
  return this != internal_default_instance() && host_app_info_ != nullptr;
}
inline bool SDKBilling::has_host_app_info() const {
  return _internal_has_host_app_info();
}
inline const ::clarifai::analytics::HostAppInfo& SDKBilling::_internal_host_app_info() const {
  const ::clarifai::analytics::HostAppInfo* p = host_app_info_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::analytics::HostAppInfo*>(
      &::clarifai::analytics::_HostAppInfo_default_instance_);
}
inline const ::clarifai::analytics::HostAppInfo& SDKBilling::host_app_info() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.host_app_info)
  return _internal_host_app_info();
}
inline ::clarifai::analytics::HostAppInfo* SDKBilling::release_host_app_info() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.host_app_info)
  
  ::clarifai::analytics::HostAppInfo* temp = host_app_info_;
  host_app_info_ = nullptr;
  return temp;
}
inline ::clarifai::analytics::HostAppInfo* SDKBilling::_internal_mutable_host_app_info() {
  
  if (host_app_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::analytics::HostAppInfo>(GetArenaNoVirtual());
    host_app_info_ = p;
  }
  return host_app_info_;
}
inline ::clarifai::analytics::HostAppInfo* SDKBilling::mutable_host_app_info() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.host_app_info)
  return _internal_mutable_host_app_info();
}
inline void SDKBilling::set_allocated_host_app_info(::clarifai::analytics::HostAppInfo* host_app_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(host_app_info_);
  }
  if (host_app_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      host_app_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, host_app_info, submessage_arena);
    }
    
  } else {
    
  }
  host_app_info_ = host_app_info;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.host_app_info)
}

// .clarifai.analytics.OperatingSystem operating_system = 5;
inline bool SDKBilling::_internal_has_operating_system() const {
  return this != internal_default_instance() && operating_system_ != nullptr;
}
inline bool SDKBilling::has_operating_system() const {
  return _internal_has_operating_system();
}
inline const ::clarifai::analytics::OperatingSystem& SDKBilling::_internal_operating_system() const {
  const ::clarifai::analytics::OperatingSystem* p = operating_system_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::analytics::OperatingSystem*>(
      &::clarifai::analytics::_OperatingSystem_default_instance_);
}
inline const ::clarifai::analytics::OperatingSystem& SDKBilling::operating_system() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.operating_system)
  return _internal_operating_system();
}
inline ::clarifai::analytics::OperatingSystem* SDKBilling::release_operating_system() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.operating_system)
  
  ::clarifai::analytics::OperatingSystem* temp = operating_system_;
  operating_system_ = nullptr;
  return temp;
}
inline ::clarifai::analytics::OperatingSystem* SDKBilling::_internal_mutable_operating_system() {
  
  if (operating_system_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::analytics::OperatingSystem>(GetArenaNoVirtual());
    operating_system_ = p;
  }
  return operating_system_;
}
inline ::clarifai::analytics::OperatingSystem* SDKBilling::mutable_operating_system() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.operating_system)
  return _internal_mutable_operating_system();
}
inline void SDKBilling::set_allocated_operating_system(::clarifai::analytics::OperatingSystem* operating_system) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(operating_system_);
  }
  if (operating_system) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      operating_system = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, operating_system, submessage_arena);
    }
    
  } else {
    
  }
  operating_system_ = operating_system;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.operating_system)
}

// .clarifai.analytics.State state = 6;
inline bool SDKBilling::_internal_has_state() const {
  return this != internal_default_instance() && state_ != nullptr;
}
inline bool SDKBilling::has_state() const {
  return _internal_has_state();
}
inline const ::clarifai::analytics::State& SDKBilling::_internal_state() const {
  const ::clarifai::analytics::State* p = state_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::analytics::State*>(
      &::clarifai::analytics::_State_default_instance_);
}
inline const ::clarifai::analytics::State& SDKBilling::state() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.state)
  return _internal_state();
}
inline ::clarifai::analytics::State* SDKBilling::release_state() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.state)
  
  ::clarifai::analytics::State* temp = state_;
  state_ = nullptr;
  return temp;
}
inline ::clarifai::analytics::State* SDKBilling::_internal_mutable_state() {
  
  if (state_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::analytics::State>(GetArenaNoVirtual());
    state_ = p;
  }
  return state_;
}
inline ::clarifai::analytics::State* SDKBilling::mutable_state() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.state)
  return _internal_mutable_state();
}
inline void SDKBilling::set_allocated_state(::clarifai::analytics::State* state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(state_);
  }
  if (state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, state, submessage_arena);
    }
    
  } else {
    
  }
  state_ = state;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.state)
}

// string system_uuid = 7;
inline void SDKBilling::clear_system_uuid() {
  system_uuid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SDKBilling::system_uuid() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.system_uuid)
  return _internal_system_uuid();
}
inline void SDKBilling::set_system_uuid(const std::string& value) {
  _internal_set_system_uuid(value);
  // @@protoc_insertion_point(field_set:clarifai.sdk_billing.SDKBilling.system_uuid)
}
inline std::string* SDKBilling::mutable_system_uuid() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.system_uuid)
  return _internal_mutable_system_uuid();
}
inline const std::string& SDKBilling::_internal_system_uuid() const {
  return system_uuid_.GetNoArena();
}
inline void SDKBilling::_internal_set_system_uuid(const std::string& value) {
  
  system_uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SDKBilling::set_system_uuid(std::string&& value) {
  
  system_uuid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:clarifai.sdk_billing.SDKBilling.system_uuid)
}
inline void SDKBilling::set_system_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  system_uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:clarifai.sdk_billing.SDKBilling.system_uuid)
}
inline void SDKBilling::set_system_uuid(const char* value, size_t size) {
  
  system_uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:clarifai.sdk_billing.SDKBilling.system_uuid)
}
inline std::string* SDKBilling::_internal_mutable_system_uuid() {
  
  return system_uuid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SDKBilling::release_system_uuid() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.system_uuid)
  
  return system_uuid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SDKBilling::set_allocated_system_uuid(std::string* system_uuid) {
  if (system_uuid != nullptr) {
    
  } else {
    
  }
  system_uuid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), system_uuid);
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.system_uuid)
}

// .clarifai.analytics.SDK sdk = 8;
inline bool SDKBilling::_internal_has_sdk() const {
  return this != internal_default_instance() && sdk_ != nullptr;
}
inline bool SDKBilling::has_sdk() const {
  return _internal_has_sdk();
}
inline const ::clarifai::analytics::SDK& SDKBilling::_internal_sdk() const {
  const ::clarifai::analytics::SDK* p = sdk_;
  return p != nullptr ? *p : *reinterpret_cast<const ::clarifai::analytics::SDK*>(
      &::clarifai::analytics::_SDK_default_instance_);
}
inline const ::clarifai::analytics::SDK& SDKBilling::sdk() const {
  // @@protoc_insertion_point(field_get:clarifai.sdk_billing.SDKBilling.sdk)
  return _internal_sdk();
}
inline ::clarifai::analytics::SDK* SDKBilling::release_sdk() {
  // @@protoc_insertion_point(field_release:clarifai.sdk_billing.SDKBilling.sdk)
  
  ::clarifai::analytics::SDK* temp = sdk_;
  sdk_ = nullptr;
  return temp;
}
inline ::clarifai::analytics::SDK* SDKBilling::_internal_mutable_sdk() {
  
  if (sdk_ == nullptr) {
    auto* p = CreateMaybeMessage<::clarifai::analytics::SDK>(GetArenaNoVirtual());
    sdk_ = p;
  }
  return sdk_;
}
inline ::clarifai::analytics::SDK* SDKBilling::mutable_sdk() {
  // @@protoc_insertion_point(field_mutable:clarifai.sdk_billing.SDKBilling.sdk)
  return _internal_mutable_sdk();
}
inline void SDKBilling::set_allocated_sdk(::clarifai::analytics::SDK* sdk) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sdk_);
  }
  if (sdk) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sdk = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sdk, submessage_arena);
    }
    
  } else {
    
  }
  sdk_ = sdk;
  // @@protoc_insertion_point(field_set_allocated:clarifai.sdk_billing.SDKBilling.sdk)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sdk_billing
}  // namespace clarifai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fsdk_5fbilling_2fresources_2eproto
