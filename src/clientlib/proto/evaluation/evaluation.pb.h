// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/evaluation/evaluation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fevaluation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fevaluation_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/predictor/predictor_metrics.pb.h"
#include "proto/evaluation/classification.pb.h"
#include "proto/evaluation/detection.pb.h"
#include "proto/evaluation/ocr.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fevaluation_2fevaluation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fevaluation_2fevaluation_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fevaluation_2fevaluation_2eproto;
class EvaluationResult;
class EvaluationResultDefaultTypeInternal;
extern EvaluationResultDefaultTypeInternal _EvaluationResult_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::EvaluationResult* Arena::CreateMaybeMessage<::EvaluationResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum EvaluationResult_Kind : int {
  EvaluationResult_Kind_INVALID = 0,
  EvaluationResult_Kind_CLASSIFICATION = 1,
  EvaluationResult_Kind_DETECTION = 2,
  EvaluationResult_Kind_OCR = 3,
  EvaluationResult_Kind_EvaluationResult_Kind_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EvaluationResult_Kind_EvaluationResult_Kind_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EvaluationResult_Kind_IsValid(int value);
constexpr EvaluationResult_Kind EvaluationResult_Kind_Kind_MIN = EvaluationResult_Kind_INVALID;
constexpr EvaluationResult_Kind EvaluationResult_Kind_Kind_MAX = EvaluationResult_Kind_OCR;
constexpr int EvaluationResult_Kind_Kind_ARRAYSIZE = EvaluationResult_Kind_Kind_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EvaluationResult_Kind_descriptor();
template<typename T>
inline const std::string& EvaluationResult_Kind_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EvaluationResult_Kind>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EvaluationResult_Kind_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EvaluationResult_Kind_descriptor(), enum_t_value);
}
inline bool EvaluationResult_Kind_Parse(
    const std::string& name, EvaluationResult_Kind* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EvaluationResult_Kind>(
    EvaluationResult_Kind_descriptor(), name, value);
}
// ===================================================================

class EvaluationResult :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:EvaluationResult) */ {
 public:
  EvaluationResult();
  virtual ~EvaluationResult();

  EvaluationResult(const EvaluationResult& from);
  EvaluationResult(EvaluationResult&& from) noexcept
    : EvaluationResult() {
    *this = ::std::move(from);
  }

  inline EvaluationResult& operator=(const EvaluationResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline EvaluationResult& operator=(EvaluationResult&& from) noexcept {
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
  static const EvaluationResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EvaluationResult* internal_default_instance() {
    return reinterpret_cast<const EvaluationResult*>(
               &_EvaluationResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EvaluationResult& a, EvaluationResult& b) {
    a.Swap(&b);
  }
  inline void Swap(EvaluationResult* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline EvaluationResult* New() const final {
    return CreateMaybeMessage<EvaluationResult>(nullptr);
  }

  EvaluationResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EvaluationResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EvaluationResult& from);
  void MergeFrom(const EvaluationResult& from);
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
  void InternalSwap(EvaluationResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "EvaluationResult";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fevaluation_2fevaluation_2eproto);
    return ::descriptor_table_proto_2fevaluation_2fevaluation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef EvaluationResult_Kind Kind;
  static constexpr Kind INVALID =
    EvaluationResult_Kind_INVALID;
  static constexpr Kind CLASSIFICATION =
    EvaluationResult_Kind_CLASSIFICATION;
  static constexpr Kind DETECTION =
    EvaluationResult_Kind_DETECTION;
  static constexpr Kind OCR =
    EvaluationResult_Kind_OCR;
  static inline bool Kind_IsValid(int value) {
    return EvaluationResult_Kind_IsValid(value);
  }
  static constexpr Kind Kind_MIN =
    EvaluationResult_Kind_Kind_MIN;
  static constexpr Kind Kind_MAX =
    EvaluationResult_Kind_Kind_MAX;
  static constexpr int Kind_ARRAYSIZE =
    EvaluationResult_Kind_Kind_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Kind_descriptor() {
    return EvaluationResult_Kind_descriptor();
  }
  template<typename T>
  static inline const std::string& Kind_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Kind>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Kind_Name.");
    return EvaluationResult_Kind_Name(enum_t_value);
  }
  static inline bool Kind_Parse(const std::string& name,
      Kind* value) {
    return EvaluationResult_Kind_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kEidFieldNumber = 1,
    kEvalDatasetNameFieldNumber = 4,
    kEvalDatasetSplitFieldNumber = 5,
    kCreatedAtFieldNumber = 6,
    kClassificationFieldNumber = 11,
    kDetectionFieldNumber = 12,
    kOcrFieldNumber = 13,
    kEvalMetricsFieldNumber = 14,
    kTrainingEpochFieldNumber = 2,
    kTrainingStepFieldNumber = 3,
    kKindFieldNumber = 10,
  };
  // string eid = 1;
  void clear_eid();
  const std::string& eid() const;
  void set_eid(const std::string& value);
  void set_eid(std::string&& value);
  void set_eid(const char* value);
  void set_eid(const char* value, size_t size);
  std::string* mutable_eid();
  std::string* release_eid();
  void set_allocated_eid(std::string* eid);
  private:
  const std::string& _internal_eid() const;
  void _internal_set_eid(const std::string& value);
  std::string* _internal_mutable_eid();
  public:

  // string eval_dataset_name = 4;
  void clear_eval_dataset_name();
  const std::string& eval_dataset_name() const;
  void set_eval_dataset_name(const std::string& value);
  void set_eval_dataset_name(std::string&& value);
  void set_eval_dataset_name(const char* value);
  void set_eval_dataset_name(const char* value, size_t size);
  std::string* mutable_eval_dataset_name();
  std::string* release_eval_dataset_name();
  void set_allocated_eval_dataset_name(std::string* eval_dataset_name);
  private:
  const std::string& _internal_eval_dataset_name() const;
  void _internal_set_eval_dataset_name(const std::string& value);
  std::string* _internal_mutable_eval_dataset_name();
  public:

  // string eval_dataset_split = 5;
  void clear_eval_dataset_split();
  const std::string& eval_dataset_split() const;
  void set_eval_dataset_split(const std::string& value);
  void set_eval_dataset_split(std::string&& value);
  void set_eval_dataset_split(const char* value);
  void set_eval_dataset_split(const char* value, size_t size);
  std::string* mutable_eval_dataset_split();
  std::string* release_eval_dataset_split();
  void set_allocated_eval_dataset_split(std::string* eval_dataset_split);
  private:
  const std::string& _internal_eval_dataset_split() const;
  void _internal_set_eval_dataset_split(const std::string& value);
  std::string* _internal_mutable_eval_dataset_split();
  public:

  // .google.protobuf.Timestamp created_at = 6;
  bool has_created_at() const;
  private:
  bool _internal_has_created_at() const;
  public:
  void clear_created_at();
  const PROTOBUF_NAMESPACE_ID::Timestamp& created_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_created_at();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_created_at();
  void set_allocated_created_at(PROTOBUF_NAMESPACE_ID::Timestamp* created_at);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_created_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_created_at();
  public:

  // .ClassificationEvalResult classification = 11;
  bool has_classification() const;
  private:
  bool _internal_has_classification() const;
  public:
  void clear_classification();
  const ::ClassificationEvalResult& classification() const;
  ::ClassificationEvalResult* release_classification();
  ::ClassificationEvalResult* mutable_classification();
  void set_allocated_classification(::ClassificationEvalResult* classification);
  private:
  const ::ClassificationEvalResult& _internal_classification() const;
  ::ClassificationEvalResult* _internal_mutable_classification();
  public:

  // .DetectionEvalResult detection = 12;
  bool has_detection() const;
  private:
  bool _internal_has_detection() const;
  public:
  void clear_detection();
  const ::DetectionEvalResult& detection() const;
  ::DetectionEvalResult* release_detection();
  ::DetectionEvalResult* mutable_detection();
  void set_allocated_detection(::DetectionEvalResult* detection);
  private:
  const ::DetectionEvalResult& _internal_detection() const;
  ::DetectionEvalResult* _internal_mutable_detection();
  public:

  // .OCREvalResult ocr = 13;
  bool has_ocr() const;
  private:
  bool _internal_has_ocr() const;
  public:
  void clear_ocr();
  const ::OCREvalResult& ocr() const;
  ::OCREvalResult* release_ocr();
  ::OCREvalResult* mutable_ocr();
  void set_allocated_ocr(::OCREvalResult* ocr);
  private:
  const ::OCREvalResult& _internal_ocr() const;
  ::OCREvalResult* _internal_mutable_ocr();
  public:

  // .MulticlassMetrics eval_metrics = 14;
  bool has_eval_metrics() const;
  private:
  bool _internal_has_eval_metrics() const;
  public:
  void clear_eval_metrics();
  const ::MulticlassMetrics& eval_metrics() const;
  ::MulticlassMetrics* release_eval_metrics();
  ::MulticlassMetrics* mutable_eval_metrics();
  void set_allocated_eval_metrics(::MulticlassMetrics* eval_metrics);
  private:
  const ::MulticlassMetrics& _internal_eval_metrics() const;
  ::MulticlassMetrics* _internal_mutable_eval_metrics();
  public:

  // int64 training_epoch = 2;
  void clear_training_epoch();
  ::PROTOBUF_NAMESPACE_ID::int64 training_epoch() const;
  void set_training_epoch(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_training_epoch() const;
  void _internal_set_training_epoch(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 training_step = 3;
  void clear_training_step();
  ::PROTOBUF_NAMESPACE_ID::int64 training_step() const;
  void set_training_step(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_training_step() const;
  void _internal_set_training_step(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // .EvaluationResult.Kind kind = 10;
  void clear_kind();
  ::EvaluationResult_Kind kind() const;
  void set_kind(::EvaluationResult_Kind value);
  private:
  ::EvaluationResult_Kind _internal_kind() const;
  void _internal_set_kind(::EvaluationResult_Kind value);
  public:

  // @@protoc_insertion_point(class_scope:EvaluationResult)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr eid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr eval_dataset_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr eval_dataset_split_;
  PROTOBUF_NAMESPACE_ID::Timestamp* created_at_;
  ::ClassificationEvalResult* classification_;
  ::DetectionEvalResult* detection_;
  ::OCREvalResult* ocr_;
  ::MulticlassMetrics* eval_metrics_;
  ::PROTOBUF_NAMESPACE_ID::int64 training_epoch_;
  ::PROTOBUF_NAMESPACE_ID::int64 training_step_;
  int kind_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fevaluation_2fevaluation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EvaluationResult

// string eid = 1;
inline void EvaluationResult::clear_eid() {
  eid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EvaluationResult::eid() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.eid)
  return _internal_eid();
}
inline void EvaluationResult::set_eid(const std::string& value) {
  _internal_set_eid(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.eid)
}
inline std::string* EvaluationResult::mutable_eid() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.eid)
  return _internal_mutable_eid();
}
inline const std::string& EvaluationResult::_internal_eid() const {
  return eid_.GetNoArena();
}
inline void EvaluationResult::_internal_set_eid(const std::string& value) {
  
  eid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void EvaluationResult::set_eid(std::string&& value) {
  
  eid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:EvaluationResult.eid)
}
inline void EvaluationResult::set_eid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  eid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:EvaluationResult.eid)
}
inline void EvaluationResult::set_eid(const char* value, size_t size) {
  
  eid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:EvaluationResult.eid)
}
inline std::string* EvaluationResult::_internal_mutable_eid() {
  
  return eid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EvaluationResult::release_eid() {
  // @@protoc_insertion_point(field_release:EvaluationResult.eid)
  
  return eid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EvaluationResult::set_allocated_eid(std::string* eid) {
  if (eid != nullptr) {
    
  } else {
    
  }
  eid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), eid);
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.eid)
}

// int64 training_epoch = 2;
inline void EvaluationResult::clear_training_epoch() {
  training_epoch_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 EvaluationResult::_internal_training_epoch() const {
  return training_epoch_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 EvaluationResult::training_epoch() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.training_epoch)
  return _internal_training_epoch();
}
inline void EvaluationResult::_internal_set_training_epoch(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  training_epoch_ = value;
}
inline void EvaluationResult::set_training_epoch(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_training_epoch(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.training_epoch)
}

// int64 training_step = 3;
inline void EvaluationResult::clear_training_step() {
  training_step_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 EvaluationResult::_internal_training_step() const {
  return training_step_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 EvaluationResult::training_step() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.training_step)
  return _internal_training_step();
}
inline void EvaluationResult::_internal_set_training_step(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  training_step_ = value;
}
inline void EvaluationResult::set_training_step(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_training_step(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.training_step)
}

// string eval_dataset_name = 4;
inline void EvaluationResult::clear_eval_dataset_name() {
  eval_dataset_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EvaluationResult::eval_dataset_name() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.eval_dataset_name)
  return _internal_eval_dataset_name();
}
inline void EvaluationResult::set_eval_dataset_name(const std::string& value) {
  _internal_set_eval_dataset_name(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.eval_dataset_name)
}
inline std::string* EvaluationResult::mutable_eval_dataset_name() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.eval_dataset_name)
  return _internal_mutable_eval_dataset_name();
}
inline const std::string& EvaluationResult::_internal_eval_dataset_name() const {
  return eval_dataset_name_.GetNoArena();
}
inline void EvaluationResult::_internal_set_eval_dataset_name(const std::string& value) {
  
  eval_dataset_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void EvaluationResult::set_eval_dataset_name(std::string&& value) {
  
  eval_dataset_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:EvaluationResult.eval_dataset_name)
}
inline void EvaluationResult::set_eval_dataset_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  eval_dataset_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:EvaluationResult.eval_dataset_name)
}
inline void EvaluationResult::set_eval_dataset_name(const char* value, size_t size) {
  
  eval_dataset_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:EvaluationResult.eval_dataset_name)
}
inline std::string* EvaluationResult::_internal_mutable_eval_dataset_name() {
  
  return eval_dataset_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EvaluationResult::release_eval_dataset_name() {
  // @@protoc_insertion_point(field_release:EvaluationResult.eval_dataset_name)
  
  return eval_dataset_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EvaluationResult::set_allocated_eval_dataset_name(std::string* eval_dataset_name) {
  if (eval_dataset_name != nullptr) {
    
  } else {
    
  }
  eval_dataset_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), eval_dataset_name);
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.eval_dataset_name)
}

// string eval_dataset_split = 5;
inline void EvaluationResult::clear_eval_dataset_split() {
  eval_dataset_split_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EvaluationResult::eval_dataset_split() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.eval_dataset_split)
  return _internal_eval_dataset_split();
}
inline void EvaluationResult::set_eval_dataset_split(const std::string& value) {
  _internal_set_eval_dataset_split(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.eval_dataset_split)
}
inline std::string* EvaluationResult::mutable_eval_dataset_split() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.eval_dataset_split)
  return _internal_mutable_eval_dataset_split();
}
inline const std::string& EvaluationResult::_internal_eval_dataset_split() const {
  return eval_dataset_split_.GetNoArena();
}
inline void EvaluationResult::_internal_set_eval_dataset_split(const std::string& value) {
  
  eval_dataset_split_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void EvaluationResult::set_eval_dataset_split(std::string&& value) {
  
  eval_dataset_split_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:EvaluationResult.eval_dataset_split)
}
inline void EvaluationResult::set_eval_dataset_split(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  eval_dataset_split_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:EvaluationResult.eval_dataset_split)
}
inline void EvaluationResult::set_eval_dataset_split(const char* value, size_t size) {
  
  eval_dataset_split_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:EvaluationResult.eval_dataset_split)
}
inline std::string* EvaluationResult::_internal_mutable_eval_dataset_split() {
  
  return eval_dataset_split_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EvaluationResult::release_eval_dataset_split() {
  // @@protoc_insertion_point(field_release:EvaluationResult.eval_dataset_split)
  
  return eval_dataset_split_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EvaluationResult::set_allocated_eval_dataset_split(std::string* eval_dataset_split) {
  if (eval_dataset_split != nullptr) {
    
  } else {
    
  }
  eval_dataset_split_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), eval_dataset_split);
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.eval_dataset_split)
}

// .google.protobuf.Timestamp created_at = 6;
inline bool EvaluationResult::_internal_has_created_at() const {
  return this != internal_default_instance() && created_at_ != nullptr;
}
inline bool EvaluationResult::has_created_at() const {
  return _internal_has_created_at();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& EvaluationResult::_internal_created_at() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = created_at_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& EvaluationResult::created_at() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.created_at)
  return _internal_created_at();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* EvaluationResult::release_created_at() {
  // @@protoc_insertion_point(field_release:EvaluationResult.created_at)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = created_at_;
  created_at_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* EvaluationResult::_internal_mutable_created_at() {
  
  if (created_at_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    created_at_ = p;
  }
  return created_at_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* EvaluationResult::mutable_created_at() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.created_at)
  return _internal_mutable_created_at();
}
inline void EvaluationResult::set_allocated_created_at(PROTOBUF_NAMESPACE_ID::Timestamp* created_at) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(created_at_);
  }
  if (created_at) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(created_at)->GetArena();
    if (message_arena != submessage_arena) {
      created_at = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, created_at, submessage_arena);
    }
    
  } else {
    
  }
  created_at_ = created_at;
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.created_at)
}

// .EvaluationResult.Kind kind = 10;
inline void EvaluationResult::clear_kind() {
  kind_ = 0;
}
inline ::EvaluationResult_Kind EvaluationResult::_internal_kind() const {
  return static_cast< ::EvaluationResult_Kind >(kind_);
}
inline ::EvaluationResult_Kind EvaluationResult::kind() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.kind)
  return _internal_kind();
}
inline void EvaluationResult::_internal_set_kind(::EvaluationResult_Kind value) {
  
  kind_ = value;
}
inline void EvaluationResult::set_kind(::EvaluationResult_Kind value) {
  _internal_set_kind(value);
  // @@protoc_insertion_point(field_set:EvaluationResult.kind)
}

// .ClassificationEvalResult classification = 11;
inline bool EvaluationResult::_internal_has_classification() const {
  return this != internal_default_instance() && classification_ != nullptr;
}
inline bool EvaluationResult::has_classification() const {
  return _internal_has_classification();
}
inline const ::ClassificationEvalResult& EvaluationResult::_internal_classification() const {
  const ::ClassificationEvalResult* p = classification_;
  return p != nullptr ? *p : *reinterpret_cast<const ::ClassificationEvalResult*>(
      &::_ClassificationEvalResult_default_instance_);
}
inline const ::ClassificationEvalResult& EvaluationResult::classification() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.classification)
  return _internal_classification();
}
inline ::ClassificationEvalResult* EvaluationResult::release_classification() {
  // @@protoc_insertion_point(field_release:EvaluationResult.classification)
  
  ::ClassificationEvalResult* temp = classification_;
  classification_ = nullptr;
  return temp;
}
inline ::ClassificationEvalResult* EvaluationResult::_internal_mutable_classification() {
  
  if (classification_ == nullptr) {
    auto* p = CreateMaybeMessage<::ClassificationEvalResult>(GetArenaNoVirtual());
    classification_ = p;
  }
  return classification_;
}
inline ::ClassificationEvalResult* EvaluationResult::mutable_classification() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.classification)
  return _internal_mutable_classification();
}
inline void EvaluationResult::set_allocated_classification(::ClassificationEvalResult* classification) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(classification_);
  }
  if (classification) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      classification = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, classification, submessage_arena);
    }
    
  } else {
    
  }
  classification_ = classification;
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.classification)
}

// .DetectionEvalResult detection = 12;
inline bool EvaluationResult::_internal_has_detection() const {
  return this != internal_default_instance() && detection_ != nullptr;
}
inline bool EvaluationResult::has_detection() const {
  return _internal_has_detection();
}
inline const ::DetectionEvalResult& EvaluationResult::_internal_detection() const {
  const ::DetectionEvalResult* p = detection_;
  return p != nullptr ? *p : *reinterpret_cast<const ::DetectionEvalResult*>(
      &::_DetectionEvalResult_default_instance_);
}
inline const ::DetectionEvalResult& EvaluationResult::detection() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.detection)
  return _internal_detection();
}
inline ::DetectionEvalResult* EvaluationResult::release_detection() {
  // @@protoc_insertion_point(field_release:EvaluationResult.detection)
  
  ::DetectionEvalResult* temp = detection_;
  detection_ = nullptr;
  return temp;
}
inline ::DetectionEvalResult* EvaluationResult::_internal_mutable_detection() {
  
  if (detection_ == nullptr) {
    auto* p = CreateMaybeMessage<::DetectionEvalResult>(GetArenaNoVirtual());
    detection_ = p;
  }
  return detection_;
}
inline ::DetectionEvalResult* EvaluationResult::mutable_detection() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.detection)
  return _internal_mutable_detection();
}
inline void EvaluationResult::set_allocated_detection(::DetectionEvalResult* detection) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection_);
  }
  if (detection) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      detection = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, detection, submessage_arena);
    }
    
  } else {
    
  }
  detection_ = detection;
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.detection)
}

// .OCREvalResult ocr = 13;
inline bool EvaluationResult::_internal_has_ocr() const {
  return this != internal_default_instance() && ocr_ != nullptr;
}
inline bool EvaluationResult::has_ocr() const {
  return _internal_has_ocr();
}
inline const ::OCREvalResult& EvaluationResult::_internal_ocr() const {
  const ::OCREvalResult* p = ocr_;
  return p != nullptr ? *p : *reinterpret_cast<const ::OCREvalResult*>(
      &::_OCREvalResult_default_instance_);
}
inline const ::OCREvalResult& EvaluationResult::ocr() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.ocr)
  return _internal_ocr();
}
inline ::OCREvalResult* EvaluationResult::release_ocr() {
  // @@protoc_insertion_point(field_release:EvaluationResult.ocr)
  
  ::OCREvalResult* temp = ocr_;
  ocr_ = nullptr;
  return temp;
}
inline ::OCREvalResult* EvaluationResult::_internal_mutable_ocr() {
  
  if (ocr_ == nullptr) {
    auto* p = CreateMaybeMessage<::OCREvalResult>(GetArenaNoVirtual());
    ocr_ = p;
  }
  return ocr_;
}
inline ::OCREvalResult* EvaluationResult::mutable_ocr() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.ocr)
  return _internal_mutable_ocr();
}
inline void EvaluationResult::set_allocated_ocr(::OCREvalResult* ocr) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ocr_);
  }
  if (ocr) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ocr = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ocr, submessage_arena);
    }
    
  } else {
    
  }
  ocr_ = ocr;
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.ocr)
}

// .MulticlassMetrics eval_metrics = 14;
inline bool EvaluationResult::_internal_has_eval_metrics() const {
  return this != internal_default_instance() && eval_metrics_ != nullptr;
}
inline bool EvaluationResult::has_eval_metrics() const {
  return _internal_has_eval_metrics();
}
inline const ::MulticlassMetrics& EvaluationResult::_internal_eval_metrics() const {
  const ::MulticlassMetrics* p = eval_metrics_;
  return p != nullptr ? *p : *reinterpret_cast<const ::MulticlassMetrics*>(
      &::_MulticlassMetrics_default_instance_);
}
inline const ::MulticlassMetrics& EvaluationResult::eval_metrics() const {
  // @@protoc_insertion_point(field_get:EvaluationResult.eval_metrics)
  return _internal_eval_metrics();
}
inline ::MulticlassMetrics* EvaluationResult::release_eval_metrics() {
  // @@protoc_insertion_point(field_release:EvaluationResult.eval_metrics)
  
  ::MulticlassMetrics* temp = eval_metrics_;
  eval_metrics_ = nullptr;
  return temp;
}
inline ::MulticlassMetrics* EvaluationResult::_internal_mutable_eval_metrics() {
  
  if (eval_metrics_ == nullptr) {
    auto* p = CreateMaybeMessage<::MulticlassMetrics>(GetArenaNoVirtual());
    eval_metrics_ = p;
  }
  return eval_metrics_;
}
inline ::MulticlassMetrics* EvaluationResult::mutable_eval_metrics() {
  // @@protoc_insertion_point(field_mutable:EvaluationResult.eval_metrics)
  return _internal_mutable_eval_metrics();
}
inline void EvaluationResult::set_allocated_eval_metrics(::MulticlassMetrics* eval_metrics) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(eval_metrics_);
  }
  if (eval_metrics) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      eval_metrics = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, eval_metrics, submessage_arena);
    }
    
  } else {
    
  }
  eval_metrics_ = eval_metrics;
  // @@protoc_insertion_point(field_set_allocated:EvaluationResult.eval_metrics)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::EvaluationResult_Kind> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EvaluationResult_Kind>() {
  return ::EvaluationResult_Kind_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fevaluation_2fevaluation_2eproto
