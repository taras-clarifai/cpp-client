// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/color/color.proto

#include "proto/color/color.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fcolor_5fresult_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fdatabatch_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_DataBatch_proto_2futils_2fdatabatch_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2frequest_5fmeta_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2frequest_5fmeta_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto;
class ColorPredictRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ColorPredictRequest> _instance;
} _ColorPredictRequest_default_instance_;
class ColorPredictResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ColorPredictResponse> _instance;
} _ColorPredictResponse_default_instance_;
static void InitDefaultsscc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ColorPredictRequest_default_instance_;
    new (ptr) ::ColorPredictRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ColorPredictRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto}, {
      &scc_info_RequestMeta_proto_2futils_2frequest_5fmeta_2eproto.base,
      &scc_info_DataBatch_proto_2futils_2fdatabatch_2eproto.base,}};

static void InitDefaultsscc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ColorPredictResponse_default_instance_;
    new (ptr) ::ColorPredictResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ColorPredictResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto}, {
      &scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto.base,
      &scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fcolor_2fcolor_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fcolor_2fcolor_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fcolor_2fcolor_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fcolor_2fcolor_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ColorPredictRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ColorPredictRequest, meta_),
  PROTOBUF_FIELD_OFFSET(::ColorPredictRequest, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ColorPredictResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ColorPredictResponse, status_),
  PROTOBUF_FIELD_OFFSET(::ColorPredictResponse, result_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ColorPredictRequest)},
  { 7, -1, sizeof(::ColorPredictResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ColorPredictRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ColorPredictResponse_default_instance_),
};

const char descriptor_table_protodef_proto_2fcolor_2fcolor_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027proto/color/color.proto\032\036proto/utils/c"
  "olor_result.proto\032\033proto/utils/databatch"
  ".proto\032\036proto/utils/request_meta.proto\"K"
  "\n\023ColorPredictRequest\022\032\n\004meta\030\001 \001(\0132\014.Re"
  "questMeta\022\030\n\004data\030\002 \001(\0132\n.DataBatch\"U\n\024C"
  "olorPredictResponse\022\037\n\006status\030\001 \001(\0132\017.Re"
  "sponseStatus\022\034\n\006result\030\002 \003(\0132\014.ColorResu"
  "lt2M\n\014ColorService\022=\n\014ColorPredict\022\024.Col"
  "orPredictRequest\032\025.ColorPredictResponse\""
  "\000B\007Z\005colorb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fcolor_2fcolor_2eproto_deps[3] = {
  &::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto,
  &::descriptor_table_proto_2futils_2fdatabatch_2eproto,
  &::descriptor_table_proto_2futils_2frequest_5fmeta_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fcolor_2fcolor_2eproto_sccs[2] = {
  &scc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto.base,
  &scc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fcolor_2fcolor_2eproto_once;
static bool descriptor_table_proto_2fcolor_2fcolor_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcolor_2fcolor_2eproto = {
  &descriptor_table_proto_2fcolor_2fcolor_2eproto_initialized, descriptor_table_protodef_proto_2fcolor_2fcolor_2eproto, "proto/color/color.proto", 378,
  &descriptor_table_proto_2fcolor_2fcolor_2eproto_once, descriptor_table_proto_2fcolor_2fcolor_2eproto_sccs, descriptor_table_proto_2fcolor_2fcolor_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_proto_2fcolor_2fcolor_2eproto::offsets,
  file_level_metadata_proto_2fcolor_2fcolor_2eproto, 2, file_level_enum_descriptors_proto_2fcolor_2fcolor_2eproto, file_level_service_descriptors_proto_2fcolor_2fcolor_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fcolor_2fcolor_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fcolor_2fcolor_2eproto), true);

// ===================================================================

void ColorPredictRequest::InitAsDefaultInstance() {
  ::_ColorPredictRequest_default_instance_._instance.get_mutable()->meta_ = const_cast< ::RequestMeta*>(
      ::RequestMeta::internal_default_instance());
  ::_ColorPredictRequest_default_instance_._instance.get_mutable()->data_ = const_cast< ::DataBatch*>(
      ::DataBatch::internal_default_instance());
}
class ColorPredictRequest::_Internal {
 public:
  static const ::RequestMeta& meta(const ColorPredictRequest* msg);
  static const ::DataBatch& data(const ColorPredictRequest* msg);
};

const ::RequestMeta&
ColorPredictRequest::_Internal::meta(const ColorPredictRequest* msg) {
  return *msg->meta_;
}
const ::DataBatch&
ColorPredictRequest::_Internal::data(const ColorPredictRequest* msg) {
  return *msg->data_;
}
void ColorPredictRequest::clear_meta() {
  if (GetArenaNoVirtual() == nullptr && meta_ != nullptr) {
    delete meta_;
  }
  meta_ = nullptr;
}
void ColorPredictRequest::clear_data() {
  if (GetArenaNoVirtual() == nullptr && data_ != nullptr) {
    delete data_;
  }
  data_ = nullptr;
}
ColorPredictRequest::ColorPredictRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ColorPredictRequest)
}
ColorPredictRequest::ColorPredictRequest(const ColorPredictRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_meta()) {
    meta_ = new ::RequestMeta(*from.meta_);
  } else {
    meta_ = nullptr;
  }
  if (from._internal_has_data()) {
    data_ = new ::DataBatch(*from.data_);
  } else {
    data_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:ColorPredictRequest)
}

void ColorPredictRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto.base);
  ::memset(&meta_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_) -
      reinterpret_cast<char*>(&meta_)) + sizeof(data_));
}

ColorPredictRequest::~ColorPredictRequest() {
  // @@protoc_insertion_point(destructor:ColorPredictRequest)
  SharedDtor();
}

void ColorPredictRequest::SharedDtor() {
  if (this != internal_default_instance()) delete meta_;
  if (this != internal_default_instance()) delete data_;
}

void ColorPredictRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ColorPredictRequest& ColorPredictRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ColorPredictRequest_proto_2fcolor_2fcolor_2eproto.base);
  return *internal_default_instance();
}


void ColorPredictRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:ColorPredictRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && meta_ != nullptr) {
    delete meta_;
  }
  meta_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && data_ != nullptr) {
    delete data_;
  }
  data_ = nullptr;
  _internal_metadata_.Clear();
}

const char* ColorPredictRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .RequestMeta meta = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_meta(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .DataBatch data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_data(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ColorPredictRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ColorPredictRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .RequestMeta meta = 1;
  if (this->has_meta()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::meta(this), target, stream);
  }

  // .DataBatch data = 2;
  if (this->has_data()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::data(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ColorPredictRequest)
  return target;
}

size_t ColorPredictRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ColorPredictRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .RequestMeta meta = 1;
  if (this->has_meta()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *meta_);
  }

  // .DataBatch data = 2;
  if (this->has_data()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *data_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ColorPredictRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ColorPredictRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ColorPredictRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ColorPredictRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ColorPredictRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ColorPredictRequest)
    MergeFrom(*source);
  }
}

void ColorPredictRequest::MergeFrom(const ColorPredictRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ColorPredictRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_meta()) {
    _internal_mutable_meta()->::RequestMeta::MergeFrom(from._internal_meta());
  }
  if (from.has_data()) {
    _internal_mutable_data()->::DataBatch::MergeFrom(from._internal_data());
  }
}

void ColorPredictRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ColorPredictRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ColorPredictRequest::CopyFrom(const ColorPredictRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ColorPredictRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ColorPredictRequest::IsInitialized() const {
  return true;
}

void ColorPredictRequest::InternalSwap(ColorPredictRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(meta_, other->meta_);
  swap(data_, other->data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ColorPredictRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ColorPredictResponse::InitAsDefaultInstance() {
  ::_ColorPredictResponse_default_instance_._instance.get_mutable()->status_ = const_cast< ::ResponseStatus*>(
      ::ResponseStatus::internal_default_instance());
}
class ColorPredictResponse::_Internal {
 public:
  static const ::ResponseStatus& status(const ColorPredictResponse* msg);
};

const ::ResponseStatus&
ColorPredictResponse::_Internal::status(const ColorPredictResponse* msg) {
  return *msg->status_;
}
void ColorPredictResponse::clear_status() {
  if (GetArenaNoVirtual() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
}
void ColorPredictResponse::clear_result() {
  result_.Clear();
}
ColorPredictResponse::ColorPredictResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ColorPredictResponse)
}
ColorPredictResponse::ColorPredictResponse(const ColorPredictResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      result_(from.result_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_status()) {
    status_ = new ::ResponseStatus(*from.status_);
  } else {
    status_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:ColorPredictResponse)
}

void ColorPredictResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto.base);
  status_ = nullptr;
}

ColorPredictResponse::~ColorPredictResponse() {
  // @@protoc_insertion_point(destructor:ColorPredictResponse)
  SharedDtor();
}

void ColorPredictResponse::SharedDtor() {
  if (this != internal_default_instance()) delete status_;
}

void ColorPredictResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ColorPredictResponse& ColorPredictResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ColorPredictResponse_proto_2fcolor_2fcolor_2eproto.base);
  return *internal_default_instance();
}


void ColorPredictResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ColorPredictResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_.Clear();
  if (GetArenaNoVirtual() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
  _internal_metadata_.Clear();
}

const char* ColorPredictResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .ResponseStatus status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .ColorResult result = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_result(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* ColorPredictResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ColorPredictResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ResponseStatus status = 1;
  if (this->has_status()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::status(this), target, stream);
  }

  // repeated .ColorResult result = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_result_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_result(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ColorPredictResponse)
  return target;
}

size_t ColorPredictResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ColorPredictResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ColorResult result = 2;
  total_size += 1UL * this->_internal_result_size();
  for (const auto& msg : this->result_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .ResponseStatus status = 1;
  if (this->has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *status_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ColorPredictResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ColorPredictResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ColorPredictResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ColorPredictResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ColorPredictResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ColorPredictResponse)
    MergeFrom(*source);
  }
}

void ColorPredictResponse::MergeFrom(const ColorPredictResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ColorPredictResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  result_.MergeFrom(from.result_);
  if (from.has_status()) {
    _internal_mutable_status()->::ResponseStatus::MergeFrom(from._internal_status());
  }
}

void ColorPredictResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ColorPredictResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ColorPredictResponse::CopyFrom(const ColorPredictResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ColorPredictResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ColorPredictResponse::IsInitialized() const {
  return true;
}

void ColorPredictResponse::InternalSwap(ColorPredictResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  result_.InternalSwap(&other->result_);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ColorPredictResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ColorPredictRequest* Arena::CreateMaybeMessage< ::ColorPredictRequest >(Arena* arena) {
  return Arena::CreateInternal< ::ColorPredictRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::ColorPredictResponse* Arena::CreateMaybeMessage< ::ColorPredictResponse >(Arena* arena) {
  return Arena::CreateInternal< ::ColorPredictResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
