// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/color_result.proto

#include "proto/utils/color_result.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fcolor_5fresult_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2frequest_5fmeta_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fcolor_5fresult_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto;
class W3CDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<W3C> _instance;
} _W3C_default_instance_;
class ColorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Color> _instance;
} _Color_default_instance_;
class ColorResultDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ColorResult> _instance;
} _ColorResult_default_instance_;
static void InitDefaultsscc_info_Color_proto_2futils_2fcolor_5fresult_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Color_default_instance_;
    new (ptr) ::Color();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Color::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Color_proto_2futils_2fcolor_5fresult_2eproto}, {
      &scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto.base,}};

static void InitDefaultsscc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ColorResult_default_instance_;
    new (ptr) ::ColorResult();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ColorResult::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto}, {
      &scc_info_ResponseStatus_proto_2futils_2frequest_5fmeta_2eproto.base,
      &scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto.base,}};

static void InitDefaultsscc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_W3C_default_instance_;
    new (ptr) ::W3C();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::W3C::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2futils_2fcolor_5fresult_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2futils_2fcolor_5fresult_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2futils_2fcolor_5fresult_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2futils_2fcolor_5fresult_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::W3C, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::W3C, hex_),
  PROTOBUF_FIELD_OFFSET(::W3C, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Color, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Color, raw_hex_),
  PROTOBUF_FIELD_OFFSET(::Color, w3c_),
  PROTOBUF_FIELD_OFFSET(::Color, density_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ColorResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ColorResult, status_),
  PROTOBUF_FIELD_OFFSET(::ColorResult, colors_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::W3C)},
  { 7, -1, sizeof(::Color)},
  { 15, -1, sizeof(::ColorResult)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_W3C_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Color_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ColorResult_default_instance_),
};

const char descriptor_table_protodef_proto_2futils_2fcolor_5fresult_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036proto/utils/color_result.proto\032\036proto/"
  "utils/request_meta.proto\032)proto/clarifai"
  "/api/utils/extensions.proto\" \n\003W3C\022\013\n\003he"
  "x\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\"B\n\005Color\022\017\n\007raw_he"
  "x\030\001 \001(\t\022\021\n\003w3c\030\026 \001(\0132\004.W3C\022\025\n\007density\030\003 "
  "\001(\002B\004\200\265\030\001\"F\n\013ColorResult\022\037\n\006status\030\001 \001(\013"
  "2\017.ResponseStatus\022\026\n\006colors\030\002 \003(\0132\006.Colo"
  "rB\016\n\005utilsZ\005utilsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_deps[2] = {
  &::descriptor_table_proto_2fclarifai_2fapi_2futils_2fextensions_2eproto,
  &::descriptor_table_proto_2futils_2frequest_5fmeta_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_sccs[3] = {
  &scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto.base,
  &scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto.base,
  &scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_once;
static bool descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fcolor_5fresult_2eproto = {
  &descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_initialized, descriptor_table_protodef_proto_2futils_2fcolor_5fresult_2eproto, "proto/utils/color_result.proto", 305,
  &descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_once, descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_sccs, descriptor_table_proto_2futils_2fcolor_5fresult_2eproto_deps, 3, 2,
  schemas, file_default_instances, TableStruct_proto_2futils_2fcolor_5fresult_2eproto::offsets,
  file_level_metadata_proto_2futils_2fcolor_5fresult_2eproto, 3, file_level_enum_descriptors_proto_2futils_2fcolor_5fresult_2eproto, file_level_service_descriptors_proto_2futils_2fcolor_5fresult_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2futils_2fcolor_5fresult_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2futils_2fcolor_5fresult_2eproto), true);

// ===================================================================

void W3C::InitAsDefaultInstance() {
}
class W3C::_Internal {
 public:
};

W3C::W3C()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:W3C)
}
W3C::W3C(const W3C& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  hex_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_hex().empty()) {
    hex_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.hex_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:W3C)
}

void W3C::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto.base);
  hex_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

W3C::~W3C() {
  // @@protoc_insertion_point(destructor:W3C)
  SharedDtor();
}

void W3C::SharedDtor() {
  hex_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void W3C::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const W3C& W3C::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_W3C_proto_2futils_2fcolor_5fresult_2eproto.base);
  return *internal_default_instance();
}


void W3C::Clear() {
// @@protoc_insertion_point(message_clear_start:W3C)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  hex_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* W3C::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string hex = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_hex();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "W3C.hex"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "W3C.name"));
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

::PROTOBUF_NAMESPACE_ID::uint8* W3C::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:W3C)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string hex = 1;
  if (this->hex().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_hex().data(), static_cast<int>(this->_internal_hex().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "W3C.hex");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_hex(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "W3C.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:W3C)
  return target;
}

size_t W3C::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:W3C)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string hex = 1;
  if (this->hex().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_hex());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void W3C::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:W3C)
  GOOGLE_DCHECK_NE(&from, this);
  const W3C* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<W3C>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:W3C)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:W3C)
    MergeFrom(*source);
  }
}

void W3C::MergeFrom(const W3C& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:W3C)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hex().size() > 0) {

    hex_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.hex_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void W3C::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:W3C)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void W3C::CopyFrom(const W3C& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:W3C)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool W3C::IsInitialized() const {
  return true;
}

void W3C::InternalSwap(W3C* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  hex_.Swap(&other->hex_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata W3C::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Color::InitAsDefaultInstance() {
  ::_Color_default_instance_._instance.get_mutable()->w3c_ = const_cast< ::W3C*>(
      ::W3C::internal_default_instance());
}
class Color::_Internal {
 public:
  static const ::W3C& w3c(const Color* msg);
};

const ::W3C&
Color::_Internal::w3c(const Color* msg) {
  return *msg->w3c_;
}
Color::Color()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Color)
}
Color::Color(const Color& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  raw_hex_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_raw_hex().empty()) {
    raw_hex_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.raw_hex_);
  }
  if (from._internal_has_w3c()) {
    w3c_ = new ::W3C(*from.w3c_);
  } else {
    w3c_ = nullptr;
  }
  density_ = from.density_;
  // @@protoc_insertion_point(copy_constructor:Color)
}

void Color::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto.base);
  raw_hex_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&w3c_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&density_) -
      reinterpret_cast<char*>(&w3c_)) + sizeof(density_));
}

Color::~Color() {
  // @@protoc_insertion_point(destructor:Color)
  SharedDtor();
}

void Color::SharedDtor() {
  raw_hex_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete w3c_;
}

void Color::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Color& Color::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Color_proto_2futils_2fcolor_5fresult_2eproto.base);
  return *internal_default_instance();
}


void Color::Clear() {
// @@protoc_insertion_point(message_clear_start:Color)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  raw_hex_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && w3c_ != nullptr) {
    delete w3c_;
  }
  w3c_ = nullptr;
  density_ = 0;
  _internal_metadata_.Clear();
}

const char* Color::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string raw_hex = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_raw_hex();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Color.raw_hex"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float density = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          density_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // .W3C w3c = 22;
      case 22:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 178)) {
          ptr = ctx->ParseMessage(_internal_mutable_w3c(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Color::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Color)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string raw_hex = 1;
  if (this->raw_hex().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_raw_hex().data(), static_cast<int>(this->_internal_raw_hex().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Color.raw_hex");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_raw_hex(), target);
  }

  // float density = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
  if (!(this->density() <= 0 && this->density() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_density(), target);
  }

  // .W3C w3c = 22;
  if (this->has_w3c()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        22, _Internal::w3c(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Color)
  return target;
}

size_t Color::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Color)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string raw_hex = 1;
  if (this->raw_hex().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_raw_hex());
  }

  // .W3C w3c = 22;
  if (this->has_w3c()) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *w3c_);
  }

  // float density = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
  if (!(this->density() <= 0 && this->density() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Color::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Color)
  GOOGLE_DCHECK_NE(&from, this);
  const Color* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Color>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Color)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Color)
    MergeFrom(*source);
  }
}

void Color::MergeFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Color)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.raw_hex().size() > 0) {

    raw_hex_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.raw_hex_);
  }
  if (from.has_w3c()) {
    _internal_mutable_w3c()->::W3C::MergeFrom(from._internal_w3c());
  }
  if (!(from.density() <= 0 && from.density() >= 0)) {
    _internal_set_density(from._internal_density());
  }
}

void Color::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Color::CopyFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Color::IsInitialized() const {
  return true;
}

void Color::InternalSwap(Color* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  raw_hex_.Swap(&other->raw_hex_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(w3c_, other->w3c_);
  swap(density_, other->density_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Color::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ColorResult::InitAsDefaultInstance() {
  ::_ColorResult_default_instance_._instance.get_mutable()->status_ = const_cast< ::ResponseStatus*>(
      ::ResponseStatus::internal_default_instance());
}
class ColorResult::_Internal {
 public:
  static const ::ResponseStatus& status(const ColorResult* msg);
};

const ::ResponseStatus&
ColorResult::_Internal::status(const ColorResult* msg) {
  return *msg->status_;
}
void ColorResult::clear_status() {
  if (GetArenaNoVirtual() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
}
ColorResult::ColorResult()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ColorResult)
}
ColorResult::ColorResult(const ColorResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      colors_(from.colors_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_status()) {
    status_ = new ::ResponseStatus(*from.status_);
  } else {
    status_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:ColorResult)
}

void ColorResult::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto.base);
  status_ = nullptr;
}

ColorResult::~ColorResult() {
  // @@protoc_insertion_point(destructor:ColorResult)
  SharedDtor();
}

void ColorResult::SharedDtor() {
  if (this != internal_default_instance()) delete status_;
}

void ColorResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ColorResult& ColorResult::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ColorResult_proto_2futils_2fcolor_5fresult_2eproto.base);
  return *internal_default_instance();
}


void ColorResult::Clear() {
// @@protoc_insertion_point(message_clear_start:ColorResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  colors_.Clear();
  if (GetArenaNoVirtual() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
  _internal_metadata_.Clear();
}

const char* ColorResult::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // repeated .Color colors = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_colors(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ColorResult::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ColorResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ResponseStatus status = 1;
  if (this->has_status()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::status(this), target, stream);
  }

  // repeated .Color colors = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_colors_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_colors(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ColorResult)
  return target;
}

size_t ColorResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ColorResult)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Color colors = 2;
  total_size += 1UL * this->_internal_colors_size();
  for (const auto& msg : this->colors_) {
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

void ColorResult::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ColorResult)
  GOOGLE_DCHECK_NE(&from, this);
  const ColorResult* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ColorResult>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ColorResult)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ColorResult)
    MergeFrom(*source);
  }
}

void ColorResult::MergeFrom(const ColorResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ColorResult)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  colors_.MergeFrom(from.colors_);
  if (from.has_status()) {
    _internal_mutable_status()->::ResponseStatus::MergeFrom(from._internal_status());
  }
}

void ColorResult::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ColorResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ColorResult::CopyFrom(const ColorResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ColorResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ColorResult::IsInitialized() const {
  return true;
}

void ColorResult::InternalSwap(ColorResult* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  colors_.InternalSwap(&other->colors_);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ColorResult::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::W3C* Arena::CreateMaybeMessage< ::W3C >(Arena* arena) {
  return Arena::CreateInternal< ::W3C >(arena);
}
template<> PROTOBUF_NOINLINE ::Color* Arena::CreateMaybeMessage< ::Color >(Arena* arena) {
  return Arena::CreateInternal< ::Color >(arena);
}
template<> PROTOBUF_NOINLINE ::ColorResult* Arena::CreateMaybeMessage< ::ColorResult >(Arena* arena) {
  return Arena::CreateInternal< ::ColorResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
