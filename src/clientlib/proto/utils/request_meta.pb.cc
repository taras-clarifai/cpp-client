// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/request_meta.proto

#include "proto/utils/request_meta.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2frequest_5fmeta_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fduration_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Duration_google_2fprotobuf_2fduration_2eproto;
class ResponseStatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResponseStatus> _instance;
} _ResponseStatus_default_instance_;
class RequestMeta_MetadataEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RequestMeta_MetadataEntry_DoNotUse> _instance;
} _RequestMeta_MetadataEntry_DoNotUse_default_instance_;
class RequestMetaDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RequestMeta> _instance;
} _RequestMeta_default_instance_;
static void InitDefaultsscc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_RequestMeta_default_instance_;
    new (ptr) ::RequestMeta();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RequestMeta::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto}, {
      &scc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto.base,}};

static void InitDefaultsscc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_RequestMeta_MetadataEntry_DoNotUse_default_instance_;
    new (ptr) ::RequestMeta_MetadataEntry_DoNotUse();
  }
  ::RequestMeta_MetadataEntry_DoNotUse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto}, {}};

static void InitDefaultsscc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ResponseStatus_default_instance_;
    new (ptr) ::ResponseStatus();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ResponseStatus::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto}, {
      &scc_info_Duration_google_2fprotobuf_2fduration_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2futils_2frequest_5fmeta_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2futils_2frequest_5fmeta_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2futils_2frequest_5fmeta_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2futils_2frequest_5fmeta_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, ok_),
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, code_),
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, user_msg_),
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, exception_msg_),
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, trace_),
  PROTOBUF_FIELD_OFFSET(::ResponseStatus, duration_),
  PROTOBUF_FIELD_OFFSET(::RequestMeta_MetadataEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RequestMeta_MetadataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RequestMeta_MetadataEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::RequestMeta_MetadataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RequestMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RequestMeta, requestid_),
  PROTOBUF_FIELD_OFFSET(::RequestMeta, metadata_),
  PROTOBUF_FIELD_OFFSET(::RequestMeta, requesterid_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ResponseStatus)},
  { 11, 18, sizeof(::RequestMeta_MetadataEntry_DoNotUse)},
  { 20, -1, sizeof(::RequestMeta)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ResponseStatus_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RequestMeta_MetadataEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RequestMeta_default_instance_),
};

const char descriptor_table_protodef_proto_2futils_2frequest_5fmeta_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036proto/utils/request_meta.proto\032\036google"
  "/protobuf/duration.proto\032+proto/clarifai"
  "/api/status/status_code.proto\"\261\001\n\016Respon"
  "seStatus\022\n\n\002ok\030\001 \001(\010\022-\n\004code\030\002 \001(\0162\037.cla"
  "rifai.api.status.StatusCode\022\020\n\010user_msg\030"
  "\003 \001(\t\022\025\n\rexception_msg\030\004 \001(\t\022\r\n\005trace\030\005 "
  "\001(\t\022,\n\010duration\030\353\007 \001(\0132\031.google.protobuf"
  ".Duration\"\224\001\n\013RequestMeta\022\021\n\trequestID\030\001"
  " \001(\t\022,\n\010metadata\030\002 \003(\0132\032.RequestMeta.Met"
  "adataEntry\022\023\n\013requesterID\030\003 \001(\t\032/\n\rMetad"
  "ataEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001"
  "B\016\n\005utilsZ\005utilsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
  &::descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_sccs[3] = {
  &scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto.base,
  &scc_info_RequestMeta_MetadataEntry_DoNotUse_proto_2futils_2frequest_5fmeta_2eproto.base,
  &scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_once;
static bool descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2frequest_5fmeta_2eproto = {
  &descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_initialized, descriptor_table_protodef_proto_2futils_2frequest_5fmeta_2eproto, "proto/utils/request_meta.proto", 464,
  &descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_once, descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_sccs, descriptor_table_proto_2futils_2frequest_5fmeta_2eproto_deps, 3, 2,
  schemas, file_default_instances, TableStruct_proto_2futils_2frequest_5fmeta_2eproto::offsets,
  file_level_metadata_proto_2futils_2frequest_5fmeta_2eproto, 3, file_level_enum_descriptors_proto_2futils_2frequest_5fmeta_2eproto, file_level_service_descriptors_proto_2futils_2frequest_5fmeta_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2futils_2frequest_5fmeta_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2futils_2frequest_5fmeta_2eproto), true);

// ===================================================================

void ResponseStatus::InitAsDefaultInstance() {
  ::_ResponseStatus_default_instance_._instance.get_mutable()->duration_ = const_cast< PROTOBUF_NAMESPACE_ID::Duration*>(
      PROTOBUF_NAMESPACE_ID::Duration::internal_default_instance());
}
class ResponseStatus::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Duration& duration(const ResponseStatus* msg);
};

const PROTOBUF_NAMESPACE_ID::Duration&
ResponseStatus::_Internal::duration(const ResponseStatus* msg) {
  return *msg->duration_;
}
void ResponseStatus::clear_duration() {
  if (GetArenaNoVirtual() == nullptr && duration_ != nullptr) {
    delete duration_;
  }
  duration_ = nullptr;
}
ResponseStatus::ResponseStatus()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ResponseStatus)
}
ResponseStatus::ResponseStatus(const ResponseStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_user_msg().empty()) {
    user_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.user_msg_);
  }
  exception_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exception_msg().empty()) {
    exception_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.exception_msg_);
  }
  trace_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_trace().empty()) {
    trace_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.trace_);
  }
  if (from._internal_has_duration()) {
    duration_ = new PROTOBUF_NAMESPACE_ID::Duration(*from.duration_);
  } else {
    duration_ = nullptr;
  }
  ::memcpy(&ok_, &from.ok_,
    static_cast<size_t>(reinterpret_cast<char*>(&code_) -
    reinterpret_cast<char*>(&ok_)) + sizeof(code_));
  // @@protoc_insertion_point(copy_constructor:ResponseStatus)
}

void ResponseStatus::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto.base);
  user_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exception_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  trace_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&duration_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&code_) -
      reinterpret_cast<char*>(&duration_)) + sizeof(code_));
}

ResponseStatus::~ResponseStatus() {
  // @@protoc_insertion_point(destructor:ResponseStatus)
  SharedDtor();
}

void ResponseStatus::SharedDtor() {
  user_msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exception_msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  trace_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete duration_;
}

void ResponseStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResponseStatus& ResponseStatus::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto.base);
  return *internal_default_instance();
}


void ResponseStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:ResponseStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exception_msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  trace_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && duration_ != nullptr) {
    delete duration_;
  }
  duration_ = nullptr;
  ::memset(&ok_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&code_) -
      reinterpret_cast<char*>(&ok_)) + sizeof(code_));
  _internal_metadata_.Clear();
}

const char* ResponseStatus::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool ok = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ok_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .clarifai.api.status.StatusCode code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_code(static_cast<::clarifai::api::status::StatusCode>(val));
        } else goto handle_unusual;
        continue;
      // string user_msg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_user_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ResponseStatus.user_msg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string exception_msg = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_exception_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ResponseStatus.exception_msg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string trace = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_trace();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ResponseStatus.trace"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Duration duration = 1003;
      case 1003:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_duration(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResponseStatus::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ResponseStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool ok = 1;
  if (this->ok() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_ok(), target);
  }

  // .clarifai.api.status.StatusCode code = 2;
  if (this->code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_code(), target);
  }

  // string user_msg = 3;
  if (this->user_msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_msg().data(), static_cast<int>(this->_internal_user_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ResponseStatus.user_msg");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_user_msg(), target);
  }

  // string exception_msg = 4;
  if (this->exception_msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exception_msg().data(), static_cast<int>(this->_internal_exception_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ResponseStatus.exception_msg");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_exception_msg(), target);
  }

  // string trace = 5;
  if (this->trace().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_trace().data(), static_cast<int>(this->_internal_trace().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ResponseStatus.trace");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_trace(), target);
  }

  // .google.protobuf.Duration duration = 1003;
  if (this->has_duration()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1003, _Internal::duration(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ResponseStatus)
  return target;
}

size_t ResponseStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ResponseStatus)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string user_msg = 3;
  if (this->user_msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user_msg());
  }

  // string exception_msg = 4;
  if (this->exception_msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exception_msg());
  }

  // string trace = 5;
  if (this->trace().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_trace());
  }

  // .google.protobuf.Duration duration = 1003;
  if (this->has_duration()) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *duration_);
  }

  // bool ok = 1;
  if (this->ok() != 0) {
    total_size += 1 + 1;
  }

  // .clarifai.api.status.StatusCode code = 2;
  if (this->code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResponseStatus::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ResponseStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const ResponseStatus* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResponseStatus>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ResponseStatus)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ResponseStatus)
    MergeFrom(*source);
  }
}

void ResponseStatus::MergeFrom(const ResponseStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ResponseStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user_msg().size() > 0) {

    user_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.user_msg_);
  }
  if (from.exception_msg().size() > 0) {

    exception_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.exception_msg_);
  }
  if (from.trace().size() > 0) {

    trace_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.trace_);
  }
  if (from.has_duration()) {
    _internal_mutable_duration()->PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(from._internal_duration());
  }
  if (from.ok() != 0) {
    _internal_set_ok(from._internal_ok());
  }
  if (from.code() != 0) {
    _internal_set_code(from._internal_code());
  }
}

void ResponseStatus::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ResponseStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseStatus::CopyFrom(const ResponseStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ResponseStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseStatus::IsInitialized() const {
  return true;
}

void ResponseStatus::InternalSwap(ResponseStatus* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  user_msg_.Swap(&other->user_msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  exception_msg_.Swap(&other->exception_msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  trace_.Swap(&other->trace_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(duration_, other->duration_);
  swap(ok_, other->ok_);
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResponseStatus::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

RequestMeta_MetadataEntry_DoNotUse::RequestMeta_MetadataEntry_DoNotUse() {}
RequestMeta_MetadataEntry_DoNotUse::RequestMeta_MetadataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void RequestMeta_MetadataEntry_DoNotUse::MergeFrom(const RequestMeta_MetadataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata RequestMeta_MetadataEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void RequestMeta_MetadataEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

void RequestMeta::InitAsDefaultInstance() {
}
class RequestMeta::_Internal {
 public:
};

RequestMeta::RequestMeta()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:RequestMeta)
}
RequestMeta::RequestMeta(const RequestMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  metadata_.MergeFrom(from.metadata_);
  requestid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_requestid().empty()) {
    requestid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.requestid_);
  }
  requesterid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_requesterid().empty()) {
    requesterid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.requesterid_);
  }
  // @@protoc_insertion_point(copy_constructor:RequestMeta)
}

void RequestMeta::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto.base);
  requestid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requesterid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

RequestMeta::~RequestMeta() {
  // @@protoc_insertion_point(destructor:RequestMeta)
  SharedDtor();
}

void RequestMeta::SharedDtor() {
  requestid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requesterid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RequestMeta::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RequestMeta& RequestMeta::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto.base);
  return *internal_default_instance();
}


void RequestMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:RequestMeta)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metadata_.Clear();
  requestid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requesterid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* RequestMeta::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string requestID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_requestid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "RequestMeta.requestID"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // map<string, string> metadata = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&metadata_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // string requesterID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_requesterid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "RequestMeta.requesterID"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RequestMeta::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RequestMeta)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string requestID = 1;
  if (this->requestid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_requestid().data(), static_cast<int>(this->_internal_requestid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "RequestMeta.requestID");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_requestid(), target);
  }

  // map<string, string> metadata = 2;
  if (!this->_internal_metadata().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "RequestMeta.MetadataEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "RequestMeta.MetadataEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_metadata().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_metadata().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_metadata().begin();
          it != this->_internal_metadata().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = RequestMeta_MetadataEntry_DoNotUse::Funcs::InternalSerialize(2, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_metadata().begin();
          it != this->_internal_metadata().end(); ++it) {
        target = RequestMeta_MetadataEntry_DoNotUse::Funcs::InternalSerialize(2, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // string requesterID = 3;
  if (this->requesterid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_requesterid().data(), static_cast<int>(this->_internal_requesterid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "RequestMeta.requesterID");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_requesterid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RequestMeta)
  return target;
}

size_t RequestMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RequestMeta)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> metadata = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_metadata_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_metadata().begin();
      it != this->_internal_metadata().end(); ++it) {
    total_size += RequestMeta_MetadataEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string requestID = 1;
  if (this->requestid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_requestid());
  }

  // string requesterID = 3;
  if (this->requesterid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_requesterid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestMeta::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RequestMeta)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestMeta* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RequestMeta>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RequestMeta)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RequestMeta)
    MergeFrom(*source);
  }
}

void RequestMeta::MergeFrom(const RequestMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RequestMeta)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  metadata_.MergeFrom(from.metadata_);
  if (from.requestid().size() > 0) {

    requestid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.requestid_);
  }
  if (from.requesterid().size() > 0) {

    requesterid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.requesterid_);
  }
}

void RequestMeta::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RequestMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestMeta::CopyFrom(const RequestMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RequestMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMeta::IsInitialized() const {
  return true;
}

void RequestMeta::InternalSwap(RequestMeta* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  metadata_.Swap(&other->metadata_);
  requestid_.Swap(&other->requestid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  requesterid_.Swap(&other->requesterid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestMeta::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ResponseStatus* Arena::CreateMaybeMessage< ::ResponseStatus >(Arena* arena) {
  return Arena::CreateInternal< ::ResponseStatus >(arena);
}
template<> PROTOBUF_NOINLINE ::RequestMeta_MetadataEntry_DoNotUse* Arena::CreateMaybeMessage< ::RequestMeta_MetadataEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::RequestMeta_MetadataEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::RequestMeta* Arena::CreateMaybeMessage< ::RequestMeta >(Arena* arena) {
  return Arena::CreateInternal< ::RequestMeta >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
