// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/utils/geo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fgeo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fgeo_2eproto

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
#include "proto/clarifai/api/utils/extensions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2futils_2fgeo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2futils_2fgeo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2futils_2fgeo_2eproto;
class Geo;
class GeoDefaultTypeInternal;
extern GeoDefaultTypeInternal _Geo_default_instance_;
class GeoPoint;
class GeoPointDefaultTypeInternal;
extern GeoPointDefaultTypeInternal _GeoPoint_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Geo* Arena::CreateMaybeMessage<::Geo>(Arena*);
template<> ::GeoPoint* Arena::CreateMaybeMessage<::GeoPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class GeoPoint :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GeoPoint) */ {
 public:
  GeoPoint();
  virtual ~GeoPoint();

  GeoPoint(const GeoPoint& from);
  GeoPoint(GeoPoint&& from) noexcept
    : GeoPoint() {
    *this = ::std::move(from);
  }

  inline GeoPoint& operator=(const GeoPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline GeoPoint& operator=(GeoPoint&& from) noexcept {
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
  static const GeoPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GeoPoint* internal_default_instance() {
    return reinterpret_cast<const GeoPoint*>(
               &_GeoPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GeoPoint& a, GeoPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(GeoPoint* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GeoPoint* New() const final {
    return CreateMaybeMessage<GeoPoint>(nullptr);
  }

  GeoPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GeoPoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GeoPoint& from);
  void MergeFrom(const GeoPoint& from);
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
  void InternalSwap(GeoPoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GeoPoint";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fgeo_2eproto);
    return ::descriptor_table_proto_2futils_2fgeo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLongitudeFieldNumber = 1,
    kLatitudeFieldNumber = 2,
  };
  // float longitude = 1 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_longitude();
  float longitude() const;
  void set_longitude(float value);

  // float latitude = 2 [(.clarifai.api.utils.cl_show_if_empty) = true];
  void clear_latitude();
  float latitude() const;
  void set_latitude(float value);

  // @@protoc_insertion_point(class_scope:GeoPoint)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float longitude_;
  float latitude_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fgeo_2eproto;
};
// -------------------------------------------------------------------

class Geo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Geo) */ {
 public:
  Geo();
  virtual ~Geo();

  Geo(const Geo& from);
  Geo(Geo&& from) noexcept
    : Geo() {
    *this = ::std::move(from);
  }

  inline Geo& operator=(const Geo& from) {
    CopyFrom(from);
    return *this;
  }
  inline Geo& operator=(Geo&& from) noexcept {
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
  static const Geo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Geo* internal_default_instance() {
    return reinterpret_cast<const Geo*>(
               &_Geo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Geo& a, Geo& b) {
    a.Swap(&b);
  }
  inline void Swap(Geo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Geo* New() const final {
    return CreateMaybeMessage<Geo>(nullptr);
  }

  Geo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Geo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Geo& from);
  void MergeFrom(const Geo& from);
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
  void InternalSwap(Geo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Geo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2futils_2fgeo_2eproto);
    return ::descriptor_table_proto_2futils_2fgeo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGeoPointFieldNumber = 1,
  };
  // .GeoPoint geo_point = 1;
  bool has_geo_point() const;
  void clear_geo_point();
  const ::GeoPoint& geo_point() const;
  ::GeoPoint* release_geo_point();
  ::GeoPoint* mutable_geo_point();
  void set_allocated_geo_point(::GeoPoint* geo_point);

  // @@protoc_insertion_point(class_scope:Geo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::GeoPoint* geo_point_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2futils_2fgeo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GeoPoint

// float longitude = 1 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void GeoPoint::clear_longitude() {
  longitude_ = 0;
}
inline float GeoPoint::longitude() const {
  // @@protoc_insertion_point(field_get:GeoPoint.longitude)
  return longitude_;
}
inline void GeoPoint::set_longitude(float value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:GeoPoint.longitude)
}

// float latitude = 2 [(.clarifai.api.utils.cl_show_if_empty) = true];
inline void GeoPoint::clear_latitude() {
  latitude_ = 0;
}
inline float GeoPoint::latitude() const {
  // @@protoc_insertion_point(field_get:GeoPoint.latitude)
  return latitude_;
}
inline void GeoPoint::set_latitude(float value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:GeoPoint.latitude)
}

// -------------------------------------------------------------------

// Geo

// .GeoPoint geo_point = 1;
inline bool Geo::has_geo_point() const {
  return this != internal_default_instance() && geo_point_ != nullptr;
}
inline void Geo::clear_geo_point() {
  if (GetArenaNoVirtual() == nullptr && geo_point_ != nullptr) {
    delete geo_point_;
  }
  geo_point_ = nullptr;
}
inline const ::GeoPoint& Geo::geo_point() const {
  const ::GeoPoint* p = geo_point_;
  // @@protoc_insertion_point(field_get:Geo.geo_point)
  return p != nullptr ? *p : *reinterpret_cast<const ::GeoPoint*>(
      &::_GeoPoint_default_instance_);
}
inline ::GeoPoint* Geo::release_geo_point() {
  // @@protoc_insertion_point(field_release:Geo.geo_point)
  
  ::GeoPoint* temp = geo_point_;
  geo_point_ = nullptr;
  return temp;
}
inline ::GeoPoint* Geo::mutable_geo_point() {
  
  if (geo_point_ == nullptr) {
    auto* p = CreateMaybeMessage<::GeoPoint>(GetArenaNoVirtual());
    geo_point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Geo.geo_point)
  return geo_point_;
}
inline void Geo::set_allocated_geo_point(::GeoPoint* geo_point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete geo_point_;
  }
  if (geo_point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      geo_point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, geo_point, submessage_arena);
    }
    
  } else {
    
  }
  geo_point_ = geo_point;
  // @@protoc_insertion_point(field_set_allocated:Geo.geo_point)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2futils_2fgeo_2eproto