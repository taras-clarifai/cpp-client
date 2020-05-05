// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/caption.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcaption_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcaption_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "proto/utils/ndarray.pb.h"
#include "proto/utils/tag.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fcaption_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2futils_2fcaption_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fcaption_2eproto;
class Caption;
class CaptionDefaultTypeInternal;
extern CaptionDefaultTypeInternal _Caption_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Caption* Arena::CreateMaybeMessage<::Caption>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Caption :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Caption) */ {
 public:
  Caption();
  virtual ~Caption();

  Caption(const Caption& from);
  Caption(Caption&& from) noexcept
    : Caption() {
    *this = ::std::move(from);
  }

  inline Caption& operator=(const Caption& from) {
    CopyFrom(from);
    return *this;
  }
  inline Caption& operator=(Caption&& from) noexcept {
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
  static const Caption& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Caption* internal_default_instance() {
    return reinterpret_cast<const Caption*>(
               &_Caption_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Caption& a, Caption& b) {
    a.Swap(&b);
  }
  inline void Swap(Caption* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Caption* New() const final {
    return CreateMaybeMessage<Caption>(nullptr);
  }

  Caption* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Caption>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Caption& from);
  void MergeFrom(const Caption& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Caption* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Caption";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fcaption_2eproto);
    return ::descriptor_table_proto_2futils_2fcaption_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTagFieldNumber = 2,
    kRawCaptionFieldNumber = 3,
    kTextFieldNumber = 4,
    kTokenizedCaptionFieldNumber = 1,
  };
  // repeated .Tag tag = 2;
  int tag_size() const;
  void clear_tag();
  ::Tag* mutable_tag(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >*
      mutable_tag();
  const ::Tag& tag(int index) const;
  ::Tag* add_tag();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >&
      tag() const;

  // repeated string raw_caption = 3;
  int raw_caption_size() const;
  void clear_raw_caption();
  const std::string& raw_caption(int index) const;
  std::string* mutable_raw_caption(int index);
  void set_raw_caption(int index, const std::string& value);
  void set_raw_caption(int index, std::string&& value);
  void set_raw_caption(int index, const char* value);
  void set_raw_caption(int index, const char* value, size_t size);
  std::string* add_raw_caption();
  void add_raw_caption(const std::string& value);
  void add_raw_caption(std::string&& value);
  void add_raw_caption(const char* value);
  void add_raw_caption(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& raw_caption() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_raw_caption();

  // string text = 4;
  void clear_text();
  const std::string& text() const;
  void set_text(const std::string& value);
  void set_text(std::string&& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  std::string* mutable_text();
  std::string* release_text();
  void set_allocated_text(std::string* text);

  // .NDArray tokenized_caption = 1;
  bool has_tokenized_caption() const;
  void clear_tokenized_caption();
  const ::NDArray& tokenized_caption() const;
  ::NDArray* release_tokenized_caption();
  ::NDArray* mutable_tokenized_caption();
  void set_allocated_tokenized_caption(::NDArray* tokenized_caption);

  // @@protoc_insertion_point(class_scope:Caption)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag > tag_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> raw_caption_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  ::NDArray* tokenized_caption_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fcaption_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Caption

// .NDArray tokenized_caption = 1;
inline bool Caption::has_tokenized_caption() const {
  return this != internal_default_instance() && tokenized_caption_ != nullptr;
}
inline const ::NDArray& Caption::tokenized_caption() const {
  const ::NDArray* p = tokenized_caption_;
  // @@protoc_insertion_point(field_get:Caption.tokenized_caption)
  return p != nullptr ? *p : *reinterpret_cast<const ::NDArray*>(
      &::_NDArray_default_instance_);
}
inline ::NDArray* Caption::release_tokenized_caption() {
  // @@protoc_insertion_point(field_release:Caption.tokenized_caption)
  
  ::NDArray* temp = tokenized_caption_;
  tokenized_caption_ = nullptr;
  return temp;
}
inline ::NDArray* Caption::mutable_tokenized_caption() {
  
  if (tokenized_caption_ == nullptr) {
    auto* p = CreateMaybeMessage<::NDArray>(GetArenaNoVirtual());
    tokenized_caption_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Caption.tokenized_caption)
  return tokenized_caption_;
}
inline void Caption::set_allocated_tokenized_caption(::NDArray* tokenized_caption) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(tokenized_caption_);
  }
  if (tokenized_caption) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      tokenized_caption = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tokenized_caption, submessage_arena);
    }
    
  } else {
    
  }
  tokenized_caption_ = tokenized_caption;
  // @@protoc_insertion_point(field_set_allocated:Caption.tokenized_caption)
}

// repeated .Tag tag = 2;
inline int Caption::tag_size() const {
  return tag_.size();
}
inline ::Tag* Caption::mutable_tag(int index) {
  // @@protoc_insertion_point(field_mutable:Caption.tag)
  return tag_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >*
Caption::mutable_tag() {
  // @@protoc_insertion_point(field_mutable_list:Caption.tag)
  return &tag_;
}
inline const ::Tag& Caption::tag(int index) const {
  // @@protoc_insertion_point(field_get:Caption.tag)
  return tag_.Get(index);
}
inline ::Tag* Caption::add_tag() {
  // @@protoc_insertion_point(field_add:Caption.tag)
  return tag_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >&
Caption::tag() const {
  // @@protoc_insertion_point(field_list:Caption.tag)
  return tag_;
}

// repeated string raw_caption = 3;
inline int Caption::raw_caption_size() const {
  return raw_caption_.size();
}
inline void Caption::clear_raw_caption() {
  raw_caption_.Clear();
}
inline const std::string& Caption::raw_caption(int index) const {
  // @@protoc_insertion_point(field_get:Caption.raw_caption)
  return raw_caption_.Get(index);
}
inline std::string* Caption::mutable_raw_caption(int index) {
  // @@protoc_insertion_point(field_mutable:Caption.raw_caption)
  return raw_caption_.Mutable(index);
}
inline void Caption::set_raw_caption(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:Caption.raw_caption)
  raw_caption_.Mutable(index)->assign(value);
}
inline void Caption::set_raw_caption(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:Caption.raw_caption)
  raw_caption_.Mutable(index)->assign(std::move(value));
}
inline void Caption::set_raw_caption(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  raw_caption_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Caption.raw_caption)
}
inline void Caption::set_raw_caption(int index, const char* value, size_t size) {
  raw_caption_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Caption.raw_caption)
}
inline std::string* Caption::add_raw_caption() {
  // @@protoc_insertion_point(field_add_mutable:Caption.raw_caption)
  return raw_caption_.Add();
}
inline void Caption::add_raw_caption(const std::string& value) {
  raw_caption_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Caption.raw_caption)
}
inline void Caption::add_raw_caption(std::string&& value) {
  raw_caption_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Caption.raw_caption)
}
inline void Caption::add_raw_caption(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  raw_caption_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Caption.raw_caption)
}
inline void Caption::add_raw_caption(const char* value, size_t size) {
  raw_caption_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Caption.raw_caption)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Caption::raw_caption() const {
  // @@protoc_insertion_point(field_list:Caption.raw_caption)
  return raw_caption_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Caption::mutable_raw_caption() {
  // @@protoc_insertion_point(field_mutable_list:Caption.raw_caption)
  return &raw_caption_;
}

// string text = 4;
inline void Caption::clear_text() {
  text_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Caption::text() const {
  // @@protoc_insertion_point(field_get:Caption.text)
  return text_.GetNoArena();
}
inline void Caption::set_text(const std::string& value) {
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Caption.text)
}
inline void Caption::set_text(std::string&& value) {
  
  text_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Caption.text)
}
inline void Caption::set_text(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Caption.text)
}
inline void Caption::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Caption.text)
}
inline std::string* Caption::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:Caption.text)
  return text_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Caption::release_text() {
  // @@protoc_insertion_point(field_release:Caption.text)
  
  return text_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Caption::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:Caption.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcaption_2eproto
