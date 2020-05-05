// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/color_result.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcolor_5fresult_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcolor_5fresult_2eproto

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
#include "proto/utils/request_meta.pb.h"
#include "proto/clarifai/api/utils/extensions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fcolor_5fresult_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2futils_2fcolor_5fresult_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fcolor_5fresult_2eproto;
class Color;
class ColorDefaultTypeInternal;
extern ColorDefaultTypeInternal _Color_default_instance_;
class ColorResult;
class ColorResultDefaultTypeInternal;
extern ColorResultDefaultTypeInternal _ColorResult_default_instance_;
class W3C;
class W3CDefaultTypeInternal;
extern W3CDefaultTypeInternal _W3C_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Color* Arena::CreateMaybeMessage<::Color>(Arena*);
template<> ::ColorResult* Arena::CreateMaybeMessage<::ColorResult>(Arena*);
template<> ::W3C* Arena::CreateMaybeMessage<::W3C>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class W3C :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:W3C) */ {
 public:
  W3C();
  virtual ~W3C();

  W3C(const W3C& from);
  W3C(W3C&& from) noexcept
    : W3C() {
    *this = ::std::move(from);
  }

  inline W3C& operator=(const W3C& from) {
    CopyFrom(from);
    return *this;
  }
  inline W3C& operator=(W3C&& from) noexcept {
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
  static const W3C& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const W3C* internal_default_instance() {
    return reinterpret_cast<const W3C*>(
               &_W3C_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(W3C& a, W3C& b) {
    a.Swap(&b);
  }
  inline void Swap(W3C* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline W3C* New() const final {
    return CreateMaybeMessage<W3C>(nullptr);
  }

  W3C* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<W3C>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const W3C& from);
  void MergeFrom(const W3C& from);
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
  void InternalSwap(W3C* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "W3C";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto);
    return ::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHexFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  // string hex = 1;
  void clear_hex();
  const std::string& hex() const;
  void set_hex(const std::string& value);
  void set_hex(std::string&& value);
  void set_hex(const char* value);
  void set_hex(const char* value, size_t size);
  std::string* mutable_hex();
  std::string* release_hex();
  void set_allocated_hex(std::string* hex);
  private:
  const std::string& _internal_hex() const;
  void _internal_set_hex(const std::string& value);
  std::string* _internal_mutable_hex();
  public:

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:W3C)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hex_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fcolor_5fresult_2eproto;
};
// -------------------------------------------------------------------

class Color :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Color) */ {
 public:
  Color();
  virtual ~Color();

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
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
  static const Color& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Color* New() const final {
    return CreateMaybeMessage<Color>(nullptr);
  }

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Color& from);
  void MergeFrom(const Color& from);
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
  void InternalSwap(Color* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Color";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto);
    return ::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRawHexFieldNumber = 1,
    kW3CFieldNumber = 22,
    kDensityFieldNumber = 3,
  };
  // string raw_hex = 1;
  void clear_raw_hex();
  const std::string& raw_hex() const;
  void set_raw_hex(const std::string& value);
  void set_raw_hex(std::string&& value);
  void set_raw_hex(const char* value);
  void set_raw_hex(const char* value, size_t size);
  std::string* mutable_raw_hex();
  std::string* release_raw_hex();
  void set_allocated_raw_hex(std::string* raw_hex);
  private:
  const std::string& _internal_raw_hex() const;
  void _internal_set_raw_hex(const std::string& value);
  std::string* _internal_mutable_raw_hex();
  public:

  // .W3C w3c = 22;
  bool has_w3c() const;
  private:
  bool _internal_has_w3c() const;
  public:
  void clear_w3c();
  const ::W3C& w3c() const;
  ::W3C* release_w3c();
  ::W3C* mutable_w3c();
  void set_allocated_w3c(::W3C* w3c);
  private:
  const ::W3C& _internal_w3c() const;
  ::W3C* _internal_mutable_w3c();
  public:

  // float density = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_density();
  float density() const;
  void set_density(float value);
  private:
  float _internal_density() const;
  void _internal_set_density(float value);
  public:

  // @@protoc_insertion_point(class_scope:Color)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr raw_hex_;
  ::W3C* w3c_;
  float density_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fcolor_5fresult_2eproto;
};
// -------------------------------------------------------------------

class ColorResult :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ColorResult) */ {
 public:
  ColorResult();
  virtual ~ColorResult();

  ColorResult(const ColorResult& from);
  ColorResult(ColorResult&& from) noexcept
    : ColorResult() {
    *this = ::std::move(from);
  }

  inline ColorResult& operator=(const ColorResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline ColorResult& operator=(ColorResult&& from) noexcept {
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
  static const ColorResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ColorResult* internal_default_instance() {
    return reinterpret_cast<const ColorResult*>(
               &_ColorResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ColorResult& a, ColorResult& b) {
    a.Swap(&b);
  }
  inline void Swap(ColorResult* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ColorResult* New() const final {
    return CreateMaybeMessage<ColorResult>(nullptr);
  }

  ColorResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ColorResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ColorResult& from);
  void MergeFrom(const ColorResult& from);
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
  void InternalSwap(ColorResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ColorResult";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto);
    return ::descriptor_table_proto_2futils_2fcolor_5fresult_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kColorsFieldNumber = 2,
    kStatusFieldNumber = 1,
  };
  // repeated .Color colors = 2;
  int colors_size() const;
  private:
  int _internal_colors_size() const;
  public:
  void clear_colors();
  ::Color* mutable_colors(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Color >*
      mutable_colors();
  private:
  const ::Color& _internal_colors(int index) const;
  ::Color* _internal_add_colors();
  public:
  const ::Color& colors(int index) const;
  ::Color* add_colors();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Color >&
      colors() const;

  // .ResponseStatus status = 1;
  bool has_status() const;
  private:
  bool _internal_has_status() const;
  public:
  void clear_status();
  const ::ResponseStatus& status() const;
  ::ResponseStatus* release_status();
  ::ResponseStatus* mutable_status();
  void set_allocated_status(::ResponseStatus* status);
  private:
  const ::ResponseStatus& _internal_status() const;
  ::ResponseStatus* _internal_mutable_status();
  public:

  // @@protoc_insertion_point(class_scope:ColorResult)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Color > colors_;
  ::ResponseStatus* status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fcolor_5fresult_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// W3C

// string hex = 1;
inline void W3C::clear_hex() {
  hex_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& W3C::hex() const {
  // @@protoc_insertion_point(field_get:W3C.hex)
  return _internal_hex();
}
inline void W3C::set_hex(const std::string& value) {
  _internal_set_hex(value);
  // @@protoc_insertion_point(field_set:W3C.hex)
}
inline std::string* W3C::mutable_hex() {
  // @@protoc_insertion_point(field_mutable:W3C.hex)
  return _internal_mutable_hex();
}
inline const std::string& W3C::_internal_hex() const {
  return hex_.GetNoArena();
}
inline void W3C::_internal_set_hex(const std::string& value) {
  
  hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void W3C::set_hex(std::string&& value) {
  
  hex_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:W3C.hex)
}
inline void W3C::set_hex(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:W3C.hex)
}
inline void W3C::set_hex(const char* value, size_t size) {
  
  hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:W3C.hex)
}
inline std::string* W3C::_internal_mutable_hex() {
  
  return hex_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* W3C::release_hex() {
  // @@protoc_insertion_point(field_release:W3C.hex)
  
  return hex_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void W3C::set_allocated_hex(std::string* hex) {
  if (hex != nullptr) {
    
  } else {
    
  }
  hex_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hex);
  // @@protoc_insertion_point(field_set_allocated:W3C.hex)
}

// string name = 2;
inline void W3C::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& W3C::name() const {
  // @@protoc_insertion_point(field_get:W3C.name)
  return _internal_name();
}
inline void W3C::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:W3C.name)
}
inline std::string* W3C::mutable_name() {
  // @@protoc_insertion_point(field_mutable:W3C.name)
  return _internal_mutable_name();
}
inline const std::string& W3C::_internal_name() const {
  return name_.GetNoArena();
}
inline void W3C::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void W3C::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:W3C.name)
}
inline void W3C::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:W3C.name)
}
inline void W3C::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:W3C.name)
}
inline std::string* W3C::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* W3C::release_name() {
  // @@protoc_insertion_point(field_release:W3C.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void W3C::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:W3C.name)
}

// -------------------------------------------------------------------

// Color

// string raw_hex = 1;
inline void Color::clear_raw_hex() {
  raw_hex_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Color::raw_hex() const {
  // @@protoc_insertion_point(field_get:Color.raw_hex)
  return _internal_raw_hex();
}
inline void Color::set_raw_hex(const std::string& value) {
  _internal_set_raw_hex(value);
  // @@protoc_insertion_point(field_set:Color.raw_hex)
}
inline std::string* Color::mutable_raw_hex() {
  // @@protoc_insertion_point(field_mutable:Color.raw_hex)
  return _internal_mutable_raw_hex();
}
inline const std::string& Color::_internal_raw_hex() const {
  return raw_hex_.GetNoArena();
}
inline void Color::_internal_set_raw_hex(const std::string& value) {
  
  raw_hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Color::set_raw_hex(std::string&& value) {
  
  raw_hex_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Color.raw_hex)
}
inline void Color::set_raw_hex(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  raw_hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Color.raw_hex)
}
inline void Color::set_raw_hex(const char* value, size_t size) {
  
  raw_hex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Color.raw_hex)
}
inline std::string* Color::_internal_mutable_raw_hex() {
  
  return raw_hex_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Color::release_raw_hex() {
  // @@protoc_insertion_point(field_release:Color.raw_hex)
  
  return raw_hex_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Color::set_allocated_raw_hex(std::string* raw_hex) {
  if (raw_hex != nullptr) {
    
  } else {
    
  }
  raw_hex_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), raw_hex);
  // @@protoc_insertion_point(field_set_allocated:Color.raw_hex)
}

// .W3C w3c = 22;
inline bool Color::_internal_has_w3c() const {
  return this != internal_default_instance() && w3c_ != nullptr;
}
inline bool Color::has_w3c() const {
  return _internal_has_w3c();
}
inline void Color::clear_w3c() {
  if (GetArenaNoVirtual() == nullptr && w3c_ != nullptr) {
    delete w3c_;
  }
  w3c_ = nullptr;
}
inline const ::W3C& Color::_internal_w3c() const {
  const ::W3C* p = w3c_;
  return p != nullptr ? *p : *reinterpret_cast<const ::W3C*>(
      &::_W3C_default_instance_);
}
inline const ::W3C& Color::w3c() const {
  // @@protoc_insertion_point(field_get:Color.w3c)
  return _internal_w3c();
}
inline ::W3C* Color::release_w3c() {
  // @@protoc_insertion_point(field_release:Color.w3c)
  
  ::W3C* temp = w3c_;
  w3c_ = nullptr;
  return temp;
}
inline ::W3C* Color::_internal_mutable_w3c() {
  
  if (w3c_ == nullptr) {
    auto* p = CreateMaybeMessage<::W3C>(GetArenaNoVirtual());
    w3c_ = p;
  }
  return w3c_;
}
inline ::W3C* Color::mutable_w3c() {
  // @@protoc_insertion_point(field_mutable:Color.w3c)
  return _internal_mutable_w3c();
}
inline void Color::set_allocated_w3c(::W3C* w3c) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete w3c_;
  }
  if (w3c) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      w3c = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, w3c, submessage_arena);
    }
    
  } else {
    
  }
  w3c_ = w3c;
  // @@protoc_insertion_point(field_set_allocated:Color.w3c)
}

// float density = 3 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void Color::clear_density() {
  density_ = 0;
}
inline float Color::_internal_density() const {
  return density_;
}
inline float Color::density() const {
  // @@protoc_insertion_point(field_get:Color.density)
  return _internal_density();
}
inline void Color::_internal_set_density(float value) {
  
  density_ = value;
}
inline void Color::set_density(float value) {
  _internal_set_density(value);
  // @@protoc_insertion_point(field_set:Color.density)
}

// -------------------------------------------------------------------

// ColorResult

// .ResponseStatus status = 1;
inline bool ColorResult::_internal_has_status() const {
  return this != internal_default_instance() && status_ != nullptr;
}
inline bool ColorResult::has_status() const {
  return _internal_has_status();
}
inline const ::ResponseStatus& ColorResult::_internal_status() const {
  const ::ResponseStatus* p = status_;
  return p != nullptr ? *p : *reinterpret_cast<const ::ResponseStatus*>(
      &::_ResponseStatus_default_instance_);
}
inline const ::ResponseStatus& ColorResult::status() const {
  // @@protoc_insertion_point(field_get:ColorResult.status)
  return _internal_status();
}
inline ::ResponseStatus* ColorResult::release_status() {
  // @@protoc_insertion_point(field_release:ColorResult.status)
  
  ::ResponseStatus* temp = status_;
  status_ = nullptr;
  return temp;
}
inline ::ResponseStatus* ColorResult::_internal_mutable_status() {
  
  if (status_ == nullptr) {
    auto* p = CreateMaybeMessage<::ResponseStatus>(GetArenaNoVirtual());
    status_ = p;
  }
  return status_;
}
inline ::ResponseStatus* ColorResult::mutable_status() {
  // @@protoc_insertion_point(field_mutable:ColorResult.status)
  return _internal_mutable_status();
}
inline void ColorResult::set_allocated_status(::ResponseStatus* status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  if (status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    
  } else {
    
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:ColorResult.status)
}

// repeated .Color colors = 2;
inline int ColorResult::_internal_colors_size() const {
  return colors_.size();
}
inline int ColorResult::colors_size() const {
  return _internal_colors_size();
}
inline void ColorResult::clear_colors() {
  colors_.Clear();
}
inline ::Color* ColorResult::mutable_colors(int index) {
  // @@protoc_insertion_point(field_mutable:ColorResult.colors)
  return colors_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Color >*
ColorResult::mutable_colors() {
  // @@protoc_insertion_point(field_mutable_list:ColorResult.colors)
  return &colors_;
}
inline const ::Color& ColorResult::_internal_colors(int index) const {
  return colors_.Get(index);
}
inline const ::Color& ColorResult::colors(int index) const {
  // @@protoc_insertion_point(field_get:ColorResult.colors)
  return _internal_colors(index);
}
inline ::Color* ColorResult::_internal_add_colors() {
  return colors_.Add();
}
inline ::Color* ColorResult::add_colors() {
  // @@protoc_insertion_point(field_add:ColorResult.colors)
  return _internal_add_colors();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Color >&
ColorResult::colors() const {
  // @@protoc_insertion_point(field_list:ColorResult.colors)
  return colors_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fcolor_5fresult_2eproto
