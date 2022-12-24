// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lwesample.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_lwesample_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_lwesample_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021010 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_lwesample_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_lwesample_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_lwesample_2eproto;
namespace lwePb {
class LweSample;
struct LweSampleDefaultTypeInternal;
extern LweSampleDefaultTypeInternal _LweSample_default_instance_;
}  // namespace lwePb
PROTOBUF_NAMESPACE_OPEN
template<> ::lwePb::LweSample* Arena::CreateMaybeMessage<::lwePb::LweSample>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace lwePb {

// ===================================================================

class LweSample final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:lwePb.LweSample) */ {
 public:
  inline LweSample() : LweSample(nullptr) {}
  ~LweSample() override;
  explicit PROTOBUF_CONSTEXPR LweSample(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LweSample(const LweSample& from);
  LweSample(LweSample&& from) noexcept
    : LweSample() {
    *this = ::std::move(from);
  }

  inline LweSample& operator=(const LweSample& from) {
    CopyFrom(from);
    return *this;
  }
  inline LweSample& operator=(LweSample&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const LweSample& default_instance() {
    return *internal_default_instance();
  }
  static inline const LweSample* internal_default_instance() {
    return reinterpret_cast<const LweSample*>(
               &_LweSample_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LweSample& a, LweSample& b) {
    a.Swap(&b);
  }
  inline void Swap(LweSample* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LweSample* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LweSample* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LweSample>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LweSample& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LweSample& from) {
    LweSample::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LweSample* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "lwePb.LweSample";
  }
  protected:
  explicit LweSample(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kCurrentVarianceFieldNumber = 3,
    kBFieldNumber = 2,
  };
  // repeated int32 a = 1;
  int a_size() const;
  private:
  int _internal_a_size() const;
  public:
  void clear_a();
  private:
  int32_t _internal_a(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_a() const;
  void _internal_add_a(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_a();
  public:
  int32_t a(int index) const;
  void set_a(int index, int32_t value);
  void add_a(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      a() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_a();

  // double current_variance = 3;
  void clear_current_variance();
  double current_variance() const;
  void set_current_variance(double value);
  private:
  double _internal_current_variance() const;
  void _internal_set_current_variance(double value);
  public:

  // int32 b = 2;
  void clear_b();
  int32_t b() const;
  void set_b(int32_t value);
  private:
  int32_t _internal_b() const;
  void _internal_set_b(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:lwePb.LweSample)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > a_;
    mutable std::atomic<int> _a_cached_byte_size_;
    double current_variance_;
    int32_t b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_lwesample_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LweSample

// repeated int32 a = 1;
inline int LweSample::_internal_a_size() const {
  return _impl_.a_.size();
}
inline int LweSample::a_size() const {
  return _internal_a_size();
}
inline void LweSample::clear_a() {
  _impl_.a_.Clear();
}
inline int32_t LweSample::_internal_a(int index) const {
  return _impl_.a_.Get(index);
}
inline int32_t LweSample::a(int index) const {
  // @@protoc_insertion_point(field_get:lwePb.LweSample.a)
  return _internal_a(index);
}
inline void LweSample::set_a(int index, int32_t value) {
  _impl_.a_.Set(index, value);
  // @@protoc_insertion_point(field_set:lwePb.LweSample.a)
}
inline void LweSample::_internal_add_a(int32_t value) {
  _impl_.a_.Add(value);
}
inline void LweSample::add_a(int32_t value) {
  _internal_add_a(value);
  // @@protoc_insertion_point(field_add:lwePb.LweSample.a)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
LweSample::_internal_a() const {
  return _impl_.a_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
LweSample::a() const {
  // @@protoc_insertion_point(field_list:lwePb.LweSample.a)
  return _internal_a();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
LweSample::_internal_mutable_a() {
  return &_impl_.a_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
LweSample::mutable_a() {
  // @@protoc_insertion_point(field_mutable_list:lwePb.LweSample.a)
  return _internal_mutable_a();
}

// int32 b = 2;
inline void LweSample::clear_b() {
  _impl_.b_ = 0;
}
inline int32_t LweSample::_internal_b() const {
  return _impl_.b_;
}
inline int32_t LweSample::b() const {
  // @@protoc_insertion_point(field_get:lwePb.LweSample.b)
  return _internal_b();
}
inline void LweSample::_internal_set_b(int32_t value) {
  
  _impl_.b_ = value;
}
inline void LweSample::set_b(int32_t value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:lwePb.LweSample.b)
}

// double current_variance = 3;
inline void LweSample::clear_current_variance() {
  _impl_.current_variance_ = 0;
}
inline double LweSample::_internal_current_variance() const {
  return _impl_.current_variance_;
}
inline double LweSample::current_variance() const {
  // @@protoc_insertion_point(field_get:lwePb.LweSample.current_variance)
  return _internal_current_variance();
}
inline void LweSample::_internal_set_current_variance(double value) {
  
  _impl_.current_variance_ = value;
}
inline void LweSample::set_current_variance(double value) {
  _internal_set_current_variance(value);
  // @@protoc_insertion_point(field_set:lwePb.LweSample.current_variance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace lwePb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_lwesample_2eproto
