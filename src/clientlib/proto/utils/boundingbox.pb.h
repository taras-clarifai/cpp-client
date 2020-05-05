// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/boundingbox.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fboundingbox_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fboundingbox_2eproto

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
#include "proto/utils/embedding.pb.h"
#include "proto/utils/tag.pb.h"
#include "proto/clarifai/api/utils/extensions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fboundingbox_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2futils_2fboundingbox_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fboundingbox_2eproto;
class BoundingBox;
class BoundingBoxDefaultTypeInternal;
extern BoundingBoxDefaultTypeInternal _BoundingBox_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::BoundingBox* Arena::CreateMaybeMessage<::BoundingBox>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class BoundingBox :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:BoundingBox) */ {
 public:
  BoundingBox();
  virtual ~BoundingBox();

  BoundingBox(const BoundingBox& from);
  BoundingBox(BoundingBox&& from) noexcept
    : BoundingBox() {
    *this = ::std::move(from);
  }

  inline BoundingBox& operator=(const BoundingBox& from) {
    CopyFrom(from);
    return *this;
  }
  inline BoundingBox& operator=(BoundingBox&& from) noexcept {
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
  static const BoundingBox& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BoundingBox* internal_default_instance() {
    return reinterpret_cast<const BoundingBox*>(
               &_BoundingBox_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BoundingBox& a, BoundingBox& b) {
    a.Swap(&b);
  }
  inline void Swap(BoundingBox* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BoundingBox* New() const final {
    return CreateMaybeMessage<BoundingBox>(nullptr);
  }

  BoundingBox* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BoundingBox>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BoundingBox& from);
  void MergeFrom(const BoundingBox& from);
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
  void InternalSwap(BoundingBox* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "BoundingBox";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fboundingbox_2eproto);
    return ::descriptor_table_proto_2futils_2fboundingbox_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTagFieldNumber = 1,
    kEmbeddingFieldNumber = 8,
    kTopRowFieldNumber = 3,
    kLeftColFieldNumber = 4,
    kBottomRowFieldNumber = 5,
    kRightColFieldNumber = 6,
    kIsPositiveFieldNumber = 7,
  };
  // repeated .Tag tag = 1;
  int tag_size() const;
  void clear_tag();
  ::Tag* mutable_tag(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >*
      mutable_tag();
  const ::Tag& tag(int index) const;
  ::Tag* add_tag();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >&
      tag() const;

  // repeated .Embedding embedding = 8;
  int embedding_size() const;
  void clear_embedding();
  ::Embedding* mutable_embedding(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Embedding >*
      mutable_embedding();
  const ::Embedding& embedding(int index) const;
  ::Embedding* add_embedding();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Embedding >&
      embedding() const;

  // float top_row = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_top_row();
  float top_row() const;
  void set_top_row(float value);

  // float left_col = 4 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_left_col();
  float left_col() const;
  void set_left_col(float value);

  // float bottom_row = 5 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_bottom_row();
  float bottom_row() const;
  void set_bottom_row(float value);

  // float right_col = 6 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_right_col();
  float right_col() const;
  void set_right_col(float value);

  // bool is_positive = 7;
  void clear_is_positive();
  bool is_positive() const;
  void set_is_positive(bool value);

  // @@protoc_insertion_point(class_scope:BoundingBox)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag > tag_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Embedding > embedding_;
  float top_row_;
  float left_col_;
  float bottom_row_;
  float right_col_;
  bool is_positive_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fboundingbox_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BoundingBox

// repeated .Tag tag = 1;
inline int BoundingBox::tag_size() const {
  return tag_.size();
}
inline ::Tag* BoundingBox::mutable_tag(int index) {
  // @@protoc_insertion_point(field_mutable:BoundingBox.tag)
  return tag_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >*
BoundingBox::mutable_tag() {
  // @@protoc_insertion_point(field_mutable_list:BoundingBox.tag)
  return &tag_;
}
inline const ::Tag& BoundingBox::tag(int index) const {
  // @@protoc_insertion_point(field_get:BoundingBox.tag)
  return tag_.Get(index);
}
inline ::Tag* BoundingBox::add_tag() {
  // @@protoc_insertion_point(field_add:BoundingBox.tag)
  return tag_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Tag >&
BoundingBox::tag() const {
  // @@protoc_insertion_point(field_list:BoundingBox.tag)
  return tag_;
}

// float top_row = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void BoundingBox::clear_top_row() {
  top_row_ = 0;
}
inline float BoundingBox::top_row() const {
  // @@protoc_insertion_point(field_get:BoundingBox.top_row)
  return top_row_;
}
inline void BoundingBox::set_top_row(float value) {
  
  top_row_ = value;
  // @@protoc_insertion_point(field_set:BoundingBox.top_row)
}

// float left_col = 4 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void BoundingBox::clear_left_col() {
  left_col_ = 0;
}
inline float BoundingBox::left_col() const {
  // @@protoc_insertion_point(field_get:BoundingBox.left_col)
  return left_col_;
}
inline void BoundingBox::set_left_col(float value) {
  
  left_col_ = value;
  // @@protoc_insertion_point(field_set:BoundingBox.left_col)
}

// float bottom_row = 5 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void BoundingBox::clear_bottom_row() {
  bottom_row_ = 0;
}
inline float BoundingBox::bottom_row() const {
  // @@protoc_insertion_point(field_get:BoundingBox.bottom_row)
  return bottom_row_;
}
inline void BoundingBox::set_bottom_row(float value) {
  
  bottom_row_ = value;
  // @@protoc_insertion_point(field_set:BoundingBox.bottom_row)
}

// float right_col = 6 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void BoundingBox::clear_right_col() {
  right_col_ = 0;
}
inline float BoundingBox::right_col() const {
  // @@protoc_insertion_point(field_get:BoundingBox.right_col)
  return right_col_;
}
inline void BoundingBox::set_right_col(float value) {
  
  right_col_ = value;
  // @@protoc_insertion_point(field_set:BoundingBox.right_col)
}

// bool is_positive = 7;
inline void BoundingBox::clear_is_positive() {
  is_positive_ = false;
}
inline bool BoundingBox::is_positive() const {
  // @@protoc_insertion_point(field_get:BoundingBox.is_positive)
  return is_positive_;
}
inline void BoundingBox::set_is_positive(bool value) {
  
  is_positive_ = value;
  // @@protoc_insertion_point(field_set:BoundingBox.is_positive)
}

// repeated .Embedding embedding = 8;
inline int BoundingBox::embedding_size() const {
  return embedding_.size();
}
inline ::Embedding* BoundingBox::mutable_embedding(int index) {
  // @@protoc_insertion_point(field_mutable:BoundingBox.embedding)
  return embedding_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Embedding >*
BoundingBox::mutable_embedding() {
  // @@protoc_insertion_point(field_mutable_list:BoundingBox.embedding)
  return &embedding_;
}
inline const ::Embedding& BoundingBox::embedding(int index) const {
  // @@protoc_insertion_point(field_get:BoundingBox.embedding)
  return embedding_.Get(index);
}
inline ::Embedding* BoundingBox::add_embedding() {
  // @@protoc_insertion_point(field_add:BoundingBox.embedding)
  return embedding_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Embedding >&
BoundingBox::embedding() const {
  // @@protoc_insertion_point(field_list:BoundingBox.embedding)
  return embedding_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fboundingbox_2eproto
