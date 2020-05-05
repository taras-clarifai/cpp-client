// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/evaluation/detection.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fdetection_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fdetection_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fevaluation_2fdetection_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fevaluation_2fdetection_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fevaluation_2fdetection_2eproto;
class DetectionEvalResult;
class DetectionEvalResultDefaultTypeInternal;
extern DetectionEvalResultDefaultTypeInternal _DetectionEvalResult_default_instance_;
class DetectionEvalSubset;
class DetectionEvalSubsetDefaultTypeInternal;
extern DetectionEvalSubsetDefaultTypeInternal _DetectionEvalSubset_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::DetectionEvalResult* Arena::CreateMaybeMessage<::DetectionEvalResult>(Arena*);
template<> ::DetectionEvalSubset* Arena::CreateMaybeMessage<::DetectionEvalSubset>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class DetectionEvalResult :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DetectionEvalResult) */ {
 public:
  DetectionEvalResult();
  virtual ~DetectionEvalResult();

  DetectionEvalResult(const DetectionEvalResult& from);
  DetectionEvalResult(DetectionEvalResult&& from) noexcept
    : DetectionEvalResult() {
    *this = ::std::move(from);
  }

  inline DetectionEvalResult& operator=(const DetectionEvalResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline DetectionEvalResult& operator=(DetectionEvalResult&& from) noexcept {
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
  static const DetectionEvalResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionEvalResult* internal_default_instance() {
    return reinterpret_cast<const DetectionEvalResult*>(
               &_DetectionEvalResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DetectionEvalResult& a, DetectionEvalResult& b) {
    a.Swap(&b);
  }
  inline void Swap(DetectionEvalResult* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DetectionEvalResult* New() const final {
    return CreateMaybeMessage<DetectionEvalResult>(nullptr);
  }

  DetectionEvalResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DetectionEvalResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DetectionEvalResult& from);
  void MergeFrom(const DetectionEvalResult& from);
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
  void InternalSwap(DetectionEvalResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DetectionEvalResult";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fevaluation_2fdetection_2eproto);
    return ::descriptor_table_proto_2fevaluation_2fdetection_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSubsetsFieldNumber = 3,
    kMeanAveragePrecisionIou50FieldNumber = 1,
    kMeanAveragePrecisionIouRangeFieldNumber = 2,
  };
  // repeated .DetectionEvalSubset subsets = 3;
  int subsets_size() const;
  void clear_subsets();
  ::DetectionEvalSubset* mutable_subsets(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DetectionEvalSubset >*
      mutable_subsets();
  const ::DetectionEvalSubset& subsets(int index) const;
  ::DetectionEvalSubset* add_subsets();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DetectionEvalSubset >&
      subsets() const;

  // double mean_average_precision_iou_50 = 1;
  void clear_mean_average_precision_iou_50();
  double mean_average_precision_iou_50() const;
  void set_mean_average_precision_iou_50(double value);

  // double mean_average_precision_iou_range = 2;
  void clear_mean_average_precision_iou_range();
  double mean_average_precision_iou_range() const;
  void set_mean_average_precision_iou_range(double value);

  // @@protoc_insertion_point(class_scope:DetectionEvalResult)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DetectionEvalSubset > subsets_;
  double mean_average_precision_iou_50_;
  double mean_average_precision_iou_range_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fevaluation_2fdetection_2eproto;
};
// -------------------------------------------------------------------

class DetectionEvalSubset :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DetectionEvalSubset) */ {
 public:
  DetectionEvalSubset();
  virtual ~DetectionEvalSubset();

  DetectionEvalSubset(const DetectionEvalSubset& from);
  DetectionEvalSubset(DetectionEvalSubset&& from) noexcept
    : DetectionEvalSubset() {
    *this = ::std::move(from);
  }

  inline DetectionEvalSubset& operator=(const DetectionEvalSubset& from) {
    CopyFrom(from);
    return *this;
  }
  inline DetectionEvalSubset& operator=(DetectionEvalSubset&& from) noexcept {
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
  static const DetectionEvalSubset& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionEvalSubset* internal_default_instance() {
    return reinterpret_cast<const DetectionEvalSubset*>(
               &_DetectionEvalSubset_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DetectionEvalSubset& a, DetectionEvalSubset& b) {
    a.Swap(&b);
  }
  inline void Swap(DetectionEvalSubset* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DetectionEvalSubset* New() const final {
    return CreateMaybeMessage<DetectionEvalSubset>(nullptr);
  }

  DetectionEvalSubset* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DetectionEvalSubset>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DetectionEvalSubset& from);
  void MergeFrom(const DetectionEvalSubset& from);
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
  void InternalSwap(DetectionEvalSubset* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DetectionEvalSubset";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fevaluation_2fdetection_2eproto);
    return ::descriptor_table_proto_2fevaluation_2fdetection_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScoreThresholdsFieldNumber = 11,
    kPrecisionFieldNumber = 12,
    kRecallFieldNumber = 13,
    kTpRateFieldNumber = 14,
    kFpRatePerImageFieldNumber = 15,
    kFpRatePerObjectFieldNumber = 16,
    kAreaRangeNameFieldNumber = 2,
    kConceptNameFieldNumber = 6,
    kConceptIdFieldNumber = 7,
    kAreaMinFieldNumber = 3,
    kAreaMaxFieldNumber = 4,
    kMeanAveragePrecisionFieldNumber = 9,
    kClassAveragePrecisionFieldNumber = 10,
    kIouFieldNumber = 8,
    kNumGtBoxesFieldNumber = 17,
  };
  // repeated float score_thresholds = 11;
  int score_thresholds_size() const;
  void clear_score_thresholds();
  float score_thresholds(int index) const;
  void set_score_thresholds(int index, float value);
  void add_score_thresholds(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      score_thresholds() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_score_thresholds();

  // repeated float precision = 12;
  int precision_size() const;
  void clear_precision();
  float precision(int index) const;
  void set_precision(int index, float value);
  void add_precision(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      precision() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_precision();

  // repeated float recall = 13;
  int recall_size() const;
  void clear_recall();
  float recall(int index) const;
  void set_recall(int index, float value);
  void add_recall(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      recall() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_recall();

  // repeated float tp_rate = 14;
  int tp_rate_size() const;
  void clear_tp_rate();
  float tp_rate(int index) const;
  void set_tp_rate(int index, float value);
  void add_tp_rate(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      tp_rate() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_tp_rate();

  // repeated float fp_rate_per_image = 15;
  int fp_rate_per_image_size() const;
  void clear_fp_rate_per_image();
  float fp_rate_per_image(int index) const;
  void set_fp_rate_per_image(int index, float value);
  void add_fp_rate_per_image(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      fp_rate_per_image() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_fp_rate_per_image();

  // repeated float fp_rate_per_object = 16;
  int fp_rate_per_object_size() const;
  void clear_fp_rate_per_object();
  float fp_rate_per_object(int index) const;
  void set_fp_rate_per_object(int index, float value);
  void add_fp_rate_per_object(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      fp_rate_per_object() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_fp_rate_per_object();

  // string area_range_name = 2;
  void clear_area_range_name();
  const std::string& area_range_name() const;
  void set_area_range_name(const std::string& value);
  void set_area_range_name(std::string&& value);
  void set_area_range_name(const char* value);
  void set_area_range_name(const char* value, size_t size);
  std::string* mutable_area_range_name();
  std::string* release_area_range_name();
  void set_allocated_area_range_name(std::string* area_range_name);

  // string concept_name = 6;
  void clear_concept_name();
  const std::string& concept_name() const;
  void set_concept_name(const std::string& value);
  void set_concept_name(std::string&& value);
  void set_concept_name(const char* value);
  void set_concept_name(const char* value, size_t size);
  std::string* mutable_concept_name();
  std::string* release_concept_name();
  void set_allocated_concept_name(std::string* concept_name);

  // string concept_id = 7;
  void clear_concept_id();
  const std::string& concept_id() const;
  void set_concept_id(const std::string& value);
  void set_concept_id(std::string&& value);
  void set_concept_id(const char* value);
  void set_concept_id(const char* value, size_t size);
  std::string* mutable_concept_id();
  std::string* release_concept_id();
  void set_allocated_concept_id(std::string* concept_id);

  // double area_min = 3;
  void clear_area_min();
  double area_min() const;
  void set_area_min(double value);

  // double area_max = 4;
  void clear_area_max();
  double area_max() const;
  void set_area_max(double value);

  // double mean_average_precision = 9;
  void clear_mean_average_precision();
  double mean_average_precision() const;
  void set_mean_average_precision(double value);

  // double class_average_precision = 10;
  void clear_class_average_precision();
  double class_average_precision() const;
  void set_class_average_precision(double value);

  // float iou = 8;
  void clear_iou();
  float iou() const;
  void set_iou(float value);

  // int64 num_gt_boxes = 17;
  void clear_num_gt_boxes();
  ::PROTOBUF_NAMESPACE_ID::int64 num_gt_boxes() const;
  void set_num_gt_boxes(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:DetectionEvalSubset)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > score_thresholds_;
  mutable std::atomic<int> _score_thresholds_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > precision_;
  mutable std::atomic<int> _precision_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > recall_;
  mutable std::atomic<int> _recall_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > tp_rate_;
  mutable std::atomic<int> _tp_rate_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > fp_rate_per_image_;
  mutable std::atomic<int> _fp_rate_per_image_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > fp_rate_per_object_;
  mutable std::atomic<int> _fp_rate_per_object_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr area_range_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr concept_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr concept_id_;
  double area_min_;
  double area_max_;
  double mean_average_precision_;
  double class_average_precision_;
  float iou_;
  ::PROTOBUF_NAMESPACE_ID::int64 num_gt_boxes_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fevaluation_2fdetection_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DetectionEvalResult

// double mean_average_precision_iou_50 = 1;
inline void DetectionEvalResult::clear_mean_average_precision_iou_50() {
  mean_average_precision_iou_50_ = 0;
}
inline double DetectionEvalResult::mean_average_precision_iou_50() const {
  // @@protoc_insertion_point(field_get:DetectionEvalResult.mean_average_precision_iou_50)
  return mean_average_precision_iou_50_;
}
inline void DetectionEvalResult::set_mean_average_precision_iou_50(double value) {
  
  mean_average_precision_iou_50_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalResult.mean_average_precision_iou_50)
}

// double mean_average_precision_iou_range = 2;
inline void DetectionEvalResult::clear_mean_average_precision_iou_range() {
  mean_average_precision_iou_range_ = 0;
}
inline double DetectionEvalResult::mean_average_precision_iou_range() const {
  // @@protoc_insertion_point(field_get:DetectionEvalResult.mean_average_precision_iou_range)
  return mean_average_precision_iou_range_;
}
inline void DetectionEvalResult::set_mean_average_precision_iou_range(double value) {
  
  mean_average_precision_iou_range_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalResult.mean_average_precision_iou_range)
}

// repeated .DetectionEvalSubset subsets = 3;
inline int DetectionEvalResult::subsets_size() const {
  return subsets_.size();
}
inline void DetectionEvalResult::clear_subsets() {
  subsets_.Clear();
}
inline ::DetectionEvalSubset* DetectionEvalResult::mutable_subsets(int index) {
  // @@protoc_insertion_point(field_mutable:DetectionEvalResult.subsets)
  return subsets_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DetectionEvalSubset >*
DetectionEvalResult::mutable_subsets() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalResult.subsets)
  return &subsets_;
}
inline const ::DetectionEvalSubset& DetectionEvalResult::subsets(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalResult.subsets)
  return subsets_.Get(index);
}
inline ::DetectionEvalSubset* DetectionEvalResult::add_subsets() {
  // @@protoc_insertion_point(field_add:DetectionEvalResult.subsets)
  return subsets_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DetectionEvalSubset >&
DetectionEvalResult::subsets() const {
  // @@protoc_insertion_point(field_list:DetectionEvalResult.subsets)
  return subsets_;
}

// -------------------------------------------------------------------

// DetectionEvalSubset

// string area_range_name = 2;
inline void DetectionEvalSubset::clear_area_range_name() {
  area_range_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DetectionEvalSubset::area_range_name() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.area_range_name)
  return area_range_name_.GetNoArena();
}
inline void DetectionEvalSubset::set_area_range_name(const std::string& value) {
  
  area_range_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.area_range_name)
}
inline void DetectionEvalSubset::set_area_range_name(std::string&& value) {
  
  area_range_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DetectionEvalSubset.area_range_name)
}
inline void DetectionEvalSubset::set_area_range_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  area_range_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DetectionEvalSubset.area_range_name)
}
inline void DetectionEvalSubset::set_area_range_name(const char* value, size_t size) {
  
  area_range_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DetectionEvalSubset.area_range_name)
}
inline std::string* DetectionEvalSubset::mutable_area_range_name() {
  
  // @@protoc_insertion_point(field_mutable:DetectionEvalSubset.area_range_name)
  return area_range_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DetectionEvalSubset::release_area_range_name() {
  // @@protoc_insertion_point(field_release:DetectionEvalSubset.area_range_name)
  
  return area_range_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionEvalSubset::set_allocated_area_range_name(std::string* area_range_name) {
  if (area_range_name != nullptr) {
    
  } else {
    
  }
  area_range_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), area_range_name);
  // @@protoc_insertion_point(field_set_allocated:DetectionEvalSubset.area_range_name)
}

// double area_min = 3;
inline void DetectionEvalSubset::clear_area_min() {
  area_min_ = 0;
}
inline double DetectionEvalSubset::area_min() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.area_min)
  return area_min_;
}
inline void DetectionEvalSubset::set_area_min(double value) {
  
  area_min_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.area_min)
}

// double area_max = 4;
inline void DetectionEvalSubset::clear_area_max() {
  area_max_ = 0;
}
inline double DetectionEvalSubset::area_max() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.area_max)
  return area_max_;
}
inline void DetectionEvalSubset::set_area_max(double value) {
  
  area_max_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.area_max)
}

// string concept_name = 6;
inline void DetectionEvalSubset::clear_concept_name() {
  concept_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DetectionEvalSubset::concept_name() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.concept_name)
  return concept_name_.GetNoArena();
}
inline void DetectionEvalSubset::set_concept_name(const std::string& value) {
  
  concept_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.concept_name)
}
inline void DetectionEvalSubset::set_concept_name(std::string&& value) {
  
  concept_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DetectionEvalSubset.concept_name)
}
inline void DetectionEvalSubset::set_concept_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  concept_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DetectionEvalSubset.concept_name)
}
inline void DetectionEvalSubset::set_concept_name(const char* value, size_t size) {
  
  concept_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DetectionEvalSubset.concept_name)
}
inline std::string* DetectionEvalSubset::mutable_concept_name() {
  
  // @@protoc_insertion_point(field_mutable:DetectionEvalSubset.concept_name)
  return concept_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DetectionEvalSubset::release_concept_name() {
  // @@protoc_insertion_point(field_release:DetectionEvalSubset.concept_name)
  
  return concept_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionEvalSubset::set_allocated_concept_name(std::string* concept_name) {
  if (concept_name != nullptr) {
    
  } else {
    
  }
  concept_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), concept_name);
  // @@protoc_insertion_point(field_set_allocated:DetectionEvalSubset.concept_name)
}

// string concept_id = 7;
inline void DetectionEvalSubset::clear_concept_id() {
  concept_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DetectionEvalSubset::concept_id() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.concept_id)
  return concept_id_.GetNoArena();
}
inline void DetectionEvalSubset::set_concept_id(const std::string& value) {
  
  concept_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.concept_id)
}
inline void DetectionEvalSubset::set_concept_id(std::string&& value) {
  
  concept_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DetectionEvalSubset.concept_id)
}
inline void DetectionEvalSubset::set_concept_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  concept_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DetectionEvalSubset.concept_id)
}
inline void DetectionEvalSubset::set_concept_id(const char* value, size_t size) {
  
  concept_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DetectionEvalSubset.concept_id)
}
inline std::string* DetectionEvalSubset::mutable_concept_id() {
  
  // @@protoc_insertion_point(field_mutable:DetectionEvalSubset.concept_id)
  return concept_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DetectionEvalSubset::release_concept_id() {
  // @@protoc_insertion_point(field_release:DetectionEvalSubset.concept_id)
  
  return concept_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionEvalSubset::set_allocated_concept_id(std::string* concept_id) {
  if (concept_id != nullptr) {
    
  } else {
    
  }
  concept_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), concept_id);
  // @@protoc_insertion_point(field_set_allocated:DetectionEvalSubset.concept_id)
}

// float iou = 8;
inline void DetectionEvalSubset::clear_iou() {
  iou_ = 0;
}
inline float DetectionEvalSubset::iou() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.iou)
  return iou_;
}
inline void DetectionEvalSubset::set_iou(float value) {
  
  iou_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.iou)
}

// double mean_average_precision = 9;
inline void DetectionEvalSubset::clear_mean_average_precision() {
  mean_average_precision_ = 0;
}
inline double DetectionEvalSubset::mean_average_precision() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.mean_average_precision)
  return mean_average_precision_;
}
inline void DetectionEvalSubset::set_mean_average_precision(double value) {
  
  mean_average_precision_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.mean_average_precision)
}

// double class_average_precision = 10;
inline void DetectionEvalSubset::clear_class_average_precision() {
  class_average_precision_ = 0;
}
inline double DetectionEvalSubset::class_average_precision() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.class_average_precision)
  return class_average_precision_;
}
inline void DetectionEvalSubset::set_class_average_precision(double value) {
  
  class_average_precision_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.class_average_precision)
}

// repeated float score_thresholds = 11;
inline int DetectionEvalSubset::score_thresholds_size() const {
  return score_thresholds_.size();
}
inline void DetectionEvalSubset::clear_score_thresholds() {
  score_thresholds_.Clear();
}
inline float DetectionEvalSubset::score_thresholds(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.score_thresholds)
  return score_thresholds_.Get(index);
}
inline void DetectionEvalSubset::set_score_thresholds(int index, float value) {
  score_thresholds_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.score_thresholds)
}
inline void DetectionEvalSubset::add_score_thresholds(float value) {
  score_thresholds_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.score_thresholds)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::score_thresholds() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.score_thresholds)
  return score_thresholds_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_score_thresholds() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.score_thresholds)
  return &score_thresholds_;
}

// repeated float precision = 12;
inline int DetectionEvalSubset::precision_size() const {
  return precision_.size();
}
inline void DetectionEvalSubset::clear_precision() {
  precision_.Clear();
}
inline float DetectionEvalSubset::precision(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.precision)
  return precision_.Get(index);
}
inline void DetectionEvalSubset::set_precision(int index, float value) {
  precision_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.precision)
}
inline void DetectionEvalSubset::add_precision(float value) {
  precision_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.precision)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::precision() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.precision)
  return precision_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_precision() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.precision)
  return &precision_;
}

// repeated float recall = 13;
inline int DetectionEvalSubset::recall_size() const {
  return recall_.size();
}
inline void DetectionEvalSubset::clear_recall() {
  recall_.Clear();
}
inline float DetectionEvalSubset::recall(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.recall)
  return recall_.Get(index);
}
inline void DetectionEvalSubset::set_recall(int index, float value) {
  recall_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.recall)
}
inline void DetectionEvalSubset::add_recall(float value) {
  recall_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.recall)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::recall() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.recall)
  return recall_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_recall() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.recall)
  return &recall_;
}

// repeated float tp_rate = 14;
inline int DetectionEvalSubset::tp_rate_size() const {
  return tp_rate_.size();
}
inline void DetectionEvalSubset::clear_tp_rate() {
  tp_rate_.Clear();
}
inline float DetectionEvalSubset::tp_rate(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.tp_rate)
  return tp_rate_.Get(index);
}
inline void DetectionEvalSubset::set_tp_rate(int index, float value) {
  tp_rate_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.tp_rate)
}
inline void DetectionEvalSubset::add_tp_rate(float value) {
  tp_rate_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.tp_rate)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::tp_rate() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.tp_rate)
  return tp_rate_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_tp_rate() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.tp_rate)
  return &tp_rate_;
}

// repeated float fp_rate_per_image = 15;
inline int DetectionEvalSubset::fp_rate_per_image_size() const {
  return fp_rate_per_image_.size();
}
inline void DetectionEvalSubset::clear_fp_rate_per_image() {
  fp_rate_per_image_.Clear();
}
inline float DetectionEvalSubset::fp_rate_per_image(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.fp_rate_per_image)
  return fp_rate_per_image_.Get(index);
}
inline void DetectionEvalSubset::set_fp_rate_per_image(int index, float value) {
  fp_rate_per_image_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.fp_rate_per_image)
}
inline void DetectionEvalSubset::add_fp_rate_per_image(float value) {
  fp_rate_per_image_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.fp_rate_per_image)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::fp_rate_per_image() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.fp_rate_per_image)
  return fp_rate_per_image_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_fp_rate_per_image() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.fp_rate_per_image)
  return &fp_rate_per_image_;
}

// repeated float fp_rate_per_object = 16;
inline int DetectionEvalSubset::fp_rate_per_object_size() const {
  return fp_rate_per_object_.size();
}
inline void DetectionEvalSubset::clear_fp_rate_per_object() {
  fp_rate_per_object_.Clear();
}
inline float DetectionEvalSubset::fp_rate_per_object(int index) const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.fp_rate_per_object)
  return fp_rate_per_object_.Get(index);
}
inline void DetectionEvalSubset::set_fp_rate_per_object(int index, float value) {
  fp_rate_per_object_.Set(index, value);
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.fp_rate_per_object)
}
inline void DetectionEvalSubset::add_fp_rate_per_object(float value) {
  fp_rate_per_object_.Add(value);
  // @@protoc_insertion_point(field_add:DetectionEvalSubset.fp_rate_per_object)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DetectionEvalSubset::fp_rate_per_object() const {
  // @@protoc_insertion_point(field_list:DetectionEvalSubset.fp_rate_per_object)
  return fp_rate_per_object_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DetectionEvalSubset::mutable_fp_rate_per_object() {
  // @@protoc_insertion_point(field_mutable_list:DetectionEvalSubset.fp_rate_per_object)
  return &fp_rate_per_object_;
}

// int64 num_gt_boxes = 17;
inline void DetectionEvalSubset::clear_num_gt_boxes() {
  num_gt_boxes_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 DetectionEvalSubset::num_gt_boxes() const {
  // @@protoc_insertion_point(field_get:DetectionEvalSubset.num_gt_boxes)
  return num_gt_boxes_;
}
inline void DetectionEvalSubset::set_num_gt_boxes(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  num_gt_boxes_ = value;
  // @@protoc_insertion_point(field_set:DetectionEvalSubset.num_gt_boxes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fdetection_2eproto
