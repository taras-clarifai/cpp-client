// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/caption.proto

#include "proto/utils/caption.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fndarray_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NDArray_proto_2futils_2fndarray_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2ftag_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Tag_proto_2futils_2ftag_2eproto;
class CaptionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Caption> _instance;
} _Caption_default_instance_;
static void InitDefaultsscc_info_Caption_proto_2futils_2fcaption_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Caption_default_instance_;
    new (ptr) ::Caption();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Caption::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Caption_proto_2futils_2fcaption_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Caption_proto_2futils_2fcaption_2eproto}, {
      &scc_info_NDArray_proto_2futils_2fndarray_2eproto.base,
      &scc_info_Tag_proto_2futils_2ftag_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2futils_2fcaption_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2futils_2fcaption_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2futils_2fcaption_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2futils_2fcaption_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Caption, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Caption, tokenized_caption_),
  PROTOBUF_FIELD_OFFSET(::Caption, tag_),
  PROTOBUF_FIELD_OFFSET(::Caption, raw_caption_),
  PROTOBUF_FIELD_OFFSET(::Caption, text_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Caption)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Caption_default_instance_),
};

const char descriptor_table_protodef_proto_2futils_2fcaption_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031proto/utils/caption.proto\032\031proto/utils"
  "/ndarray.proto\032\025proto/utils/tag.proto\"d\n"
  "\007Caption\022#\n\021tokenized_caption\030\001 \001(\0132\010.ND"
  "Array\022\021\n\003tag\030\002 \003(\0132\004.Tag\022\023\n\013raw_caption\030"
  "\003 \003(\t\022\014\n\004text\030\004 \001(\tB\016\n\005utilsZ\005utilsb\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2futils_2fcaption_2eproto_deps[2] = {
  &::descriptor_table_proto_2futils_2fndarray_2eproto,
  &::descriptor_table_proto_2futils_2ftag_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2futils_2fcaption_2eproto_sccs[1] = {
  &scc_info_Caption_proto_2futils_2fcaption_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2futils_2fcaption_2eproto_once;
static bool descriptor_table_proto_2futils_2fcaption_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fcaption_2eproto = {
  &descriptor_table_proto_2futils_2fcaption_2eproto_initialized, descriptor_table_protodef_proto_2futils_2fcaption_2eproto, "proto/utils/caption.proto", 203,
  &descriptor_table_proto_2futils_2fcaption_2eproto_once, descriptor_table_proto_2futils_2fcaption_2eproto_sccs, descriptor_table_proto_2futils_2fcaption_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_proto_2futils_2fcaption_2eproto::offsets,
  file_level_metadata_proto_2futils_2fcaption_2eproto, 1, file_level_enum_descriptors_proto_2futils_2fcaption_2eproto, file_level_service_descriptors_proto_2futils_2fcaption_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2futils_2fcaption_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2futils_2fcaption_2eproto), true);

// ===================================================================

void Caption::InitAsDefaultInstance() {
  ::_Caption_default_instance_._instance.get_mutable()->tokenized_caption_ = const_cast< ::NDArray*>(
      ::NDArray::internal_default_instance());
}
class Caption::_Internal {
 public:
  static const ::NDArray& tokenized_caption(const Caption* msg);
};

const ::NDArray&
Caption::_Internal::tokenized_caption(const Caption* msg) {
  return *msg->tokenized_caption_;
}
void Caption::clear_tokenized_caption() {
  if (GetArenaNoVirtual() == nullptr && tokenized_caption_ != nullptr) {
    delete tokenized_caption_;
  }
  tokenized_caption_ = nullptr;
}
void Caption::clear_tag() {
  tag_.Clear();
}
Caption::Caption()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Caption)
}
Caption::Caption(const Caption& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      tag_(from.tag_),
      raw_caption_(from.raw_caption_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_text().empty()) {
    text_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from._internal_has_tokenized_caption()) {
    tokenized_caption_ = new ::NDArray(*from.tokenized_caption_);
  } else {
    tokenized_caption_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:Caption)
}

void Caption::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Caption_proto_2futils_2fcaption_2eproto.base);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  tokenized_caption_ = nullptr;
}

Caption::~Caption() {
  // @@protoc_insertion_point(destructor:Caption)
  SharedDtor();
}

void Caption::SharedDtor() {
  text_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete tokenized_caption_;
}

void Caption::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Caption& Caption::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Caption_proto_2futils_2fcaption_2eproto.base);
  return *internal_default_instance();
}


void Caption::Clear() {
// @@protoc_insertion_point(message_clear_start:Caption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tag_.Clear();
  raw_caption_.Clear();
  text_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && tokenized_caption_ != nullptr) {
    delete tokenized_caption_;
  }
  tokenized_caption_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Caption::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .NDArray tokenized_caption = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_tokenized_caption(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Tag tag = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_tag(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string raw_caption = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_raw_caption();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Caption.raw_caption"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // string text = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_text();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Caption.text"));
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

::PROTOBUF_NAMESPACE_ID::uint8* Caption::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Caption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .NDArray tokenized_caption = 1;
  if (this->has_tokenized_caption()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::tokenized_caption(this), target, stream);
  }

  // repeated .Tag tag = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_tag_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_tag(i), target, stream);
  }

  // repeated string raw_caption = 3;
  for (int i = 0, n = this->_internal_raw_caption_size(); i < n; i++) {
    const auto& s = this->_internal_raw_caption(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.raw_caption");
    target = stream->WriteString(3, s, target);
  }

  // string text = 4;
  if (this->text().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.text");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_text(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Caption)
  return target;
}

size_t Caption::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Caption)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Tag tag = 2;
  total_size += 1UL * this->_internal_tag_size();
  for (const auto& msg : this->tag_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string raw_caption = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(raw_caption_.size());
  for (int i = 0, n = raw_caption_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      raw_caption_.Get(i));
  }

  // string text = 4;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // .NDArray tokenized_caption = 1;
  if (this->has_tokenized_caption()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *tokenized_caption_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Caption::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Caption)
  GOOGLE_DCHECK_NE(&from, this);
  const Caption* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Caption>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Caption)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Caption)
    MergeFrom(*source);
  }
}

void Caption::MergeFrom(const Caption& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Caption)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tag_.MergeFrom(from.tag_);
  raw_caption_.MergeFrom(from.raw_caption_);
  if (from.text().size() > 0) {

    text_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.has_tokenized_caption()) {
    _internal_mutable_tokenized_caption()->::NDArray::MergeFrom(from._internal_tokenized_caption());
  }
}

void Caption::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Caption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Caption::CopyFrom(const Caption& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Caption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Caption::IsInitialized() const {
  return true;
}

void Caption::InternalSwap(Caption* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  tag_.InternalSwap(&other->tag_);
  raw_caption_.InternalSwap(&other->raw_caption_);
  text_.Swap(&other->text_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tokenized_caption_, other->tokenized_caption_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Caption::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Caption* Arena::CreateMaybeMessage< ::Caption >(Arena* arena) {
  return Arena::CreateInternal< ::Caption >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
