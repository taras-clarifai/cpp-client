// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/dataset.proto

#include "proto/utils/dataset.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fvocab_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Vocab_proto_2futils_2fvocab_2eproto;
class DatasetDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Dataset> _instance;
} _Dataset_default_instance_;
static void InitDefaultsscc_info_Dataset_proto_2futils_2fdataset_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Dataset_default_instance_;
    new (ptr) ::Dataset();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Dataset::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Dataset_proto_2futils_2fdataset_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_Dataset_proto_2futils_2fdataset_2eproto}, {
      &scc_info_Vocab_proto_2futils_2fvocab_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2futils_2fdataset_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2futils_2fdataset_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2futils_2fdataset_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2futils_2fdataset_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Dataset, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Dataset, name_),
  PROTOBUF_FIELD_OFFSET(::Dataset, data_dir_),
  PROTOBUF_FIELD_OFFSET(::Dataset, meta_filename_),
  PROTOBUF_FIELD_OFFSET(::Dataset, data_provider_name_),
  PROTOBUF_FIELD_OFFSET(::Dataset, vocab_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Dataset)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Dataset_default_instance_),
};

const char descriptor_table_protodef_proto_2futils_2fdataset_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031proto/utils/dataset.proto\032\027proto/utils"
  "/vocab.proto\"s\n\007Dataset\022\014\n\004name\030\001 \001(\t\022\020\n"
  "\010data_dir\030\002 \001(\t\022\025\n\rmeta_filename\030\003 \001(\t\022\032"
  "\n\022data_provider_name\030\004 \001(\t\022\025\n\005vocab\030\005 \001("
  "\0132\006.VocabB\016\n\005utilsZ\005utilsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2futils_2fdataset_2eproto_deps[1] = {
  &::descriptor_table_proto_2futils_2fvocab_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2futils_2fdataset_2eproto_sccs[1] = {
  &scc_info_Dataset_proto_2futils_2fdataset_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2futils_2fdataset_2eproto_once;
static bool descriptor_table_proto_2futils_2fdataset_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fdataset_2eproto = {
  &descriptor_table_proto_2futils_2fdataset_2eproto_initialized, descriptor_table_protodef_proto_2futils_2fdataset_2eproto, "proto/utils/dataset.proto", 193,
  &descriptor_table_proto_2futils_2fdataset_2eproto_once, descriptor_table_proto_2futils_2fdataset_2eproto_sccs, descriptor_table_proto_2futils_2fdataset_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2futils_2fdataset_2eproto::offsets,
  file_level_metadata_proto_2futils_2fdataset_2eproto, 1, file_level_enum_descriptors_proto_2futils_2fdataset_2eproto, file_level_service_descriptors_proto_2futils_2fdataset_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2futils_2fdataset_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2futils_2fdataset_2eproto), true);

// ===================================================================

void Dataset::InitAsDefaultInstance() {
  ::_Dataset_default_instance_._instance.get_mutable()->vocab_ = const_cast< ::Vocab*>(
      ::Vocab::internal_default_instance());
}
class Dataset::_Internal {
 public:
  static const ::Vocab& vocab(const Dataset* msg);
};

const ::Vocab&
Dataset::_Internal::vocab(const Dataset* msg) {
  return *msg->vocab_;
}
void Dataset::clear_vocab() {
  if (GetArenaNoVirtual() == nullptr && vocab_ != nullptr) {
    delete vocab_;
  }
  vocab_ = nullptr;
}
Dataset::Dataset()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Dataset)
}
Dataset::Dataset(const Dataset& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  data_dir_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.data_dir().empty()) {
    data_dir_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_dir_);
  }
  meta_filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.meta_filename().empty()) {
    meta_filename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.meta_filename_);
  }
  data_provider_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.data_provider_name().empty()) {
    data_provider_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_provider_name_);
  }
  if (from.has_vocab()) {
    vocab_ = new ::Vocab(*from.vocab_);
  } else {
    vocab_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:Dataset)
}

void Dataset::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Dataset_proto_2futils_2fdataset_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_dir_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  meta_filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_provider_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  vocab_ = nullptr;
}

Dataset::~Dataset() {
  // @@protoc_insertion_point(destructor:Dataset)
  SharedDtor();
}

void Dataset::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_dir_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  meta_filename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_provider_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete vocab_;
}

void Dataset::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Dataset& Dataset::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Dataset_proto_2futils_2fdataset_2eproto.base);
  return *internal_default_instance();
}


void Dataset::Clear() {
// @@protoc_insertion_point(message_clear_start:Dataset)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_dir_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  meta_filename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_provider_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && vocab_ != nullptr) {
    delete vocab_;
  }
  vocab_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Dataset::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_name(), ptr, ctx, "Dataset.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string data_dir = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_data_dir(), ptr, ctx, "Dataset.data_dir");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string meta_filename = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_meta_filename(), ptr, ctx, "Dataset.meta_filename");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string data_provider_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_data_provider_name(), ptr, ctx, "Dataset.data_provider_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Vocab vocab = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(mutable_vocab(), ptr);
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
bool Dataset::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:Dataset)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Dataset.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string data_dir = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_data_dir()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->data_dir().data(), static_cast<int>(this->data_dir().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Dataset.data_dir"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string meta_filename = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_meta_filename()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->meta_filename().data(), static_cast<int>(this->meta_filename().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Dataset.meta_filename"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string data_provider_name = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_data_provider_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->data_provider_name().data(), static_cast<int>(this->data_provider_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "Dataset.data_provider_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Vocab vocab = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_vocab()));
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
  // @@protoc_insertion_point(parse_success:Dataset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Dataset)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Dataset::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Dataset)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string data_dir = 2;
  if (this->data_dir().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->data_dir().data(), static_cast<int>(this->data_dir().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.data_dir");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->data_dir(), output);
  }

  // string meta_filename = 3;
  if (this->meta_filename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->meta_filename().data(), static_cast<int>(this->meta_filename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.meta_filename");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->meta_filename(), output);
  }

  // string data_provider_name = 4;
  if (this->data_provider_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->data_provider_name().data(), static_cast<int>(this->data_provider_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.data_provider_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->data_provider_name(), output);
  }

  // .Vocab vocab = 5;
  if (this->has_vocab()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, _Internal::vocab(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Dataset)
}

::PROTOBUF_NAMESPACE_ID::uint8* Dataset::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Dataset)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string data_dir = 2;
  if (this->data_dir().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->data_dir().data(), static_cast<int>(this->data_dir().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.data_dir");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->data_dir(), target);
  }

  // string meta_filename = 3;
  if (this->meta_filename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->meta_filename().data(), static_cast<int>(this->meta_filename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.meta_filename");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->meta_filename(), target);
  }

  // string data_provider_name = 4;
  if (this->data_provider_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->data_provider_name().data(), static_cast<int>(this->data_provider_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Dataset.data_provider_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->data_provider_name(), target);
  }

  // .Vocab vocab = 5;
  if (this->has_vocab()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, _Internal::vocab(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Dataset)
  return target;
}

size_t Dataset::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Dataset)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string data_dir = 2;
  if (this->data_dir().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->data_dir());
  }

  // string meta_filename = 3;
  if (this->meta_filename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->meta_filename());
  }

  // string data_provider_name = 4;
  if (this->data_provider_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->data_provider_name());
  }

  // .Vocab vocab = 5;
  if (this->has_vocab()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *vocab_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Dataset::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Dataset)
  GOOGLE_DCHECK_NE(&from, this);
  const Dataset* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Dataset>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Dataset)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Dataset)
    MergeFrom(*source);
  }
}

void Dataset::MergeFrom(const Dataset& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Dataset)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.data_dir().size() > 0) {

    data_dir_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_dir_);
  }
  if (from.meta_filename().size() > 0) {

    meta_filename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.meta_filename_);
  }
  if (from.data_provider_name().size() > 0) {

    data_provider_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_provider_name_);
  }
  if (from.has_vocab()) {
    mutable_vocab()->::Vocab::MergeFrom(from.vocab());
  }
}

void Dataset::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Dataset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Dataset::CopyFrom(const Dataset& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Dataset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dataset::IsInitialized() const {
  return true;
}

void Dataset::InternalSwap(Dataset* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_dir_.Swap(&other->data_dir_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  meta_filename_.Swap(&other->meta_filename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_provider_name_.Swap(&other->data_provider_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(vocab_, other->vocab_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Dataset::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Dataset* Arena::CreateMaybeMessage< ::Dataset >(Arena* arena) {
  return Arena::CreateInternal< ::Dataset >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>