// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/frame.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fframe_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fframe_2eproto

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
#include "proto/utils/image.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fframe_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2futils_2fframe_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fframe_2eproto;
class Frame;
class FrameDefaultTypeInternal;
extern FrameDefaultTypeInternal _Frame_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Frame* Arena::CreateMaybeMessage<::Frame>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Frame :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Frame) */ {
 public:
  Frame();
  virtual ~Frame();

  Frame(const Frame& from);
  Frame(Frame&& from) noexcept
    : Frame() {
    *this = ::std::move(from);
  }

  inline Frame& operator=(const Frame& from) {
    CopyFrom(from);
    return *this;
  }
  inline Frame& operator=(Frame&& from) noexcept {
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
  static const Frame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Frame* internal_default_instance() {
    return reinterpret_cast<const Frame*>(
               &_Frame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Frame& a, Frame& b) {
    a.Swap(&b);
  }
  inline void Swap(Frame* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Frame* New() const final {
    return CreateMaybeMessage<Frame>(nullptr);
  }

  Frame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Frame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Frame& from);
  void MergeFrom(const Frame& from);
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
  void InternalSwap(Frame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Frame";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fframe_2eproto);
    return ::descriptor_table_proto_2futils_2fframe_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kImageFieldNumber = 2,
    kTimestampFieldNumber = 1000,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // .Image image = 2;
  bool has_image() const;
  void clear_image();
  const ::Image& image() const;
  ::Image* release_image();
  ::Image* mutable_image();
  void set_allocated_image(::Image* image);

  // int32 timestamp = 1000;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int32 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:Frame)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::Image* image_;
  ::PROTOBUF_NAMESPACE_ID::int32 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fframe_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Frame

// string name = 1;
inline void Frame::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Frame::name() const {
  // @@protoc_insertion_point(field_get:Frame.name)
  return name_.GetNoArena();
}
inline void Frame::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Frame.name)
}
inline void Frame::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Frame.name)
}
inline void Frame::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Frame.name)
}
inline void Frame::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Frame.name)
}
inline std::string* Frame::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Frame.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Frame::release_name() {
  // @@protoc_insertion_point(field_release:Frame.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Frame::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Frame.name)
}

// .Image image = 2;
inline bool Frame::has_image() const {
  return this != internal_default_instance() && image_ != nullptr;
}
inline const ::Image& Frame::image() const {
  const ::Image* p = image_;
  // @@protoc_insertion_point(field_get:Frame.image)
  return p != nullptr ? *p : *reinterpret_cast<const ::Image*>(
      &::_Image_default_instance_);
}
inline ::Image* Frame::release_image() {
  // @@protoc_insertion_point(field_release:Frame.image)
  
  ::Image* temp = image_;
  image_ = nullptr;
  return temp;
}
inline ::Image* Frame::mutable_image() {
  
  if (image_ == nullptr) {
    auto* p = CreateMaybeMessage<::Image>(GetArenaNoVirtual());
    image_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Frame.image)
  return image_;
}
inline void Frame::set_allocated_image(::Image* image) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(image_);
  }
  if (image) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      image = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, image, submessage_arena);
    }
    
  } else {
    
  }
  image_ = image;
  // @@protoc_insertion_point(field_set_allocated:Frame.image)
}

// int32 timestamp = 1000;
inline void Frame::clear_timestamp() {
  timestamp_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame::timestamp() const {
  // @@protoc_insertion_point(field_get:Frame.timestamp)
  return timestamp_;
}
inline void Frame::set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:Frame.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fframe_2eproto