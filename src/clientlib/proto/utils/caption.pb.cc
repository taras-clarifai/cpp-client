// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/caption.proto

#include "proto/utils/caption.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
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
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_Caption_proto_2futils_2fcaption_2eproto}, {
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
  if (!from.text().empty()) {
    text_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.has_tokenized_caption()) {
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

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
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
          ptr = ctx->ParseMessage(mutable_tokenized_caption(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Tag tag = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_tag(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 18);
        } else goto handle_unusual;
        continue;
      // repeated string raw_caption = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(add_raw_caption(), ptr, ctx, "Caption.raw_caption");
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
        } else goto handle_unusual;
        continue;
      // string text = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_text(), ptr, ctx, "Caption.text");
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Caption::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:Caption)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .NDArray tokenized_caption = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_tokenized_caption()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Tag tag = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_tag()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string raw_caption = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->add_raw_caption()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->raw_caption(this->raw_caption_size() - 1).data(),
            static_cast<int>(this->raw_caption(this->raw_caption_size() - 1).length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Caption.raw_caption"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string text = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->text().data(), static_cast<int>(this->text().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Caption.text"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Caption)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Caption)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Caption::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Caption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .NDArray tokenized_caption = 1;
  if (this->has_tokenized_caption()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::tokenized_caption(this), output);
  }

  // repeated .Tag tag = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->tag_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->tag(static_cast<int>(i)),
      output);
  }

  // repeated string raw_caption = 3;
  for (int i = 0, n = this->raw_caption_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->raw_caption(i).data(), static_cast<int>(this->raw_caption(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.raw_caption");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteString(
      3, this->raw_caption(i), output);
  }

  // string text = 4;
  if (this->text().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.text");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->text(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Caption)
}

::PROTOBUF_NAMESPACE_ID::uint8* Caption::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Caption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .NDArray tokenized_caption = 1;
  if (this->has_tokenized_caption()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::tokenized_caption(this), target);
  }

  // repeated .Tag tag = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->tag_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->tag(static_cast<int>(i)), target);
  }

  // repeated string raw_caption = 3;
  for (int i = 0, n = this->raw_caption_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->raw_caption(i).data(), static_cast<int>(this->raw_caption(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.raw_caption");
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteStringToArray(3, this->raw_caption(i), target);
  }

  // string text = 4;
  if (this->text().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Caption.text");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->text(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Caption)
  return target;
}

size_t Caption::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Caption)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Tag tag = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->tag_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->tag(static_cast<int>(i)));
    }
  }

  // repeated string raw_caption = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->raw_caption_size());
  for (int i = 0, n = this->raw_caption_size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      this->raw_caption(i));
  }

  // string text = 4;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->text());
  }

  // .NDArray tokenized_caption = 1;
  if (this->has_tokenized_caption()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *tokenized_caption_);
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
    mutable_tokenized_caption()->::NDArray::MergeFrom(from.tokenized_caption());
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
  CastToBase(&tag_)->InternalSwap(CastToBase(&other->tag_));
  raw_caption_.InternalSwap(CastToBase(&other->raw_caption_));
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
