// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cpu_softirq.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cpu_5fsoftirq_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cpu_5fsoftirq_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cpu_5fsoftirq_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cpu_5fsoftirq_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cpu_5fsoftirq_2eproto;
namespace monitor {
namespace proto {
class SoftIrq;
class SoftIrqDefaultTypeInternal;
extern SoftIrqDefaultTypeInternal _SoftIrq_default_instance_;
}  // namespace proto
}  // namespace monitor
PROTOBUF_NAMESPACE_OPEN
template<> ::monitor::proto::SoftIrq* Arena::CreateMaybeMessage<::monitor::proto::SoftIrq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace monitor {
namespace proto {

// ===================================================================

class SoftIrq PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:monitor.proto.SoftIrq) */ {
 public:
  inline SoftIrq() : SoftIrq(nullptr) {}
  virtual ~SoftIrq();

  SoftIrq(const SoftIrq& from);
  SoftIrq(SoftIrq&& from) noexcept
    : SoftIrq() {
    *this = ::std::move(from);
  }

  inline SoftIrq& operator=(const SoftIrq& from) {
    CopyFrom(from);
    return *this;
  }
  inline SoftIrq& operator=(SoftIrq&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const SoftIrq& default_instance();

  static inline const SoftIrq* internal_default_instance() {
    return reinterpret_cast<const SoftIrq*>(
               &_SoftIrq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SoftIrq& a, SoftIrq& b) {
    a.Swap(&b);
  }
  inline void Swap(SoftIrq* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SoftIrq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SoftIrq* New() const final {
    return CreateMaybeMessage<SoftIrq>(nullptr);
  }

  SoftIrq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SoftIrq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SoftIrq& from);
  void MergeFrom(const SoftIrq& from);
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
  void InternalSwap(SoftIrq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "monitor.proto.SoftIrq";
  }
  protected:
  explicit SoftIrq(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cpu_5fsoftirq_2eproto);
    return ::descriptor_table_cpu_5fsoftirq_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCpuFieldNumber = 1,
    kHiFieldNumber = 2,
    kTimerFieldNumber = 3,
    kNetTxFieldNumber = 4,
    kNetRxFieldNumber = 5,
    kBlockFieldNumber = 6,
    kIrqPollFieldNumber = 7,
    kTaskletFieldNumber = 8,
    kSchedFieldNumber = 9,
    kHrtimerFieldNumber = 10,
    kRcuFieldNumber = 11,
  };
  // string cpu = 1;
  void clear_cpu();
  const std::string& cpu() const;
  void set_cpu(const std::string& value);
  void set_cpu(std::string&& value);
  void set_cpu(const char* value);
  void set_cpu(const char* value, size_t size);
  std::string* mutable_cpu();
  std::string* release_cpu();
  void set_allocated_cpu(std::string* cpu);
  private:
  const std::string& _internal_cpu() const;
  void _internal_set_cpu(const std::string& value);
  std::string* _internal_mutable_cpu();
  public:

  // float hi = 2;
  void clear_hi();
  float hi() const;
  void set_hi(float value);
  private:
  float _internal_hi() const;
  void _internal_set_hi(float value);
  public:

  // float timer = 3;
  void clear_timer();
  float timer() const;
  void set_timer(float value);
  private:
  float _internal_timer() const;
  void _internal_set_timer(float value);
  public:

  // float net_tx = 4;
  void clear_net_tx();
  float net_tx() const;
  void set_net_tx(float value);
  private:
  float _internal_net_tx() const;
  void _internal_set_net_tx(float value);
  public:

  // float net_rx = 5;
  void clear_net_rx();
  float net_rx() const;
  void set_net_rx(float value);
  private:
  float _internal_net_rx() const;
  void _internal_set_net_rx(float value);
  public:

  // float block = 6;
  void clear_block();
  float block() const;
  void set_block(float value);
  private:
  float _internal_block() const;
  void _internal_set_block(float value);
  public:

  // float irq_poll = 7;
  void clear_irq_poll();
  float irq_poll() const;
  void set_irq_poll(float value);
  private:
  float _internal_irq_poll() const;
  void _internal_set_irq_poll(float value);
  public:

  // float tasklet = 8;
  void clear_tasklet();
  float tasklet() const;
  void set_tasklet(float value);
  private:
  float _internal_tasklet() const;
  void _internal_set_tasklet(float value);
  public:

  // float sched = 9;
  void clear_sched();
  float sched() const;
  void set_sched(float value);
  private:
  float _internal_sched() const;
  void _internal_set_sched(float value);
  public:

  // float hrtimer = 10;
  void clear_hrtimer();
  float hrtimer() const;
  void set_hrtimer(float value);
  private:
  float _internal_hrtimer() const;
  void _internal_set_hrtimer(float value);
  public:

  // float rcu = 11;
  void clear_rcu();
  float rcu() const;
  void set_rcu(float value);
  private:
  float _internal_rcu() const;
  void _internal_set_rcu(float value);
  public:

  // @@protoc_insertion_point(class_scope:monitor.proto.SoftIrq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr cpu_;
  float hi_;
  float timer_;
  float net_tx_;
  float net_rx_;
  float block_;
  float irq_poll_;
  float tasklet_;
  float sched_;
  float hrtimer_;
  float rcu_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cpu_5fsoftirq_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SoftIrq

// string cpu = 1;
inline void SoftIrq::clear_cpu() {
  cpu_.ClearToEmpty();
}
inline const std::string& SoftIrq::cpu() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.cpu)
  return _internal_cpu();
}
inline void SoftIrq::set_cpu(const std::string& value) {
  _internal_set_cpu(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.cpu)
}
inline std::string* SoftIrq::mutable_cpu() {
  // @@protoc_insertion_point(field_mutable:monitor.proto.SoftIrq.cpu)
  return _internal_mutable_cpu();
}
inline const std::string& SoftIrq::_internal_cpu() const {
  return cpu_.Get();
}
inline void SoftIrq::_internal_set_cpu(const std::string& value) {
  
  cpu_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SoftIrq::set_cpu(std::string&& value) {
  
  cpu_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:monitor.proto.SoftIrq.cpu)
}
inline void SoftIrq::set_cpu(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  cpu_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:monitor.proto.SoftIrq.cpu)
}
inline void SoftIrq::set_cpu(const char* value,
    size_t size) {
  
  cpu_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:monitor.proto.SoftIrq.cpu)
}
inline std::string* SoftIrq::_internal_mutable_cpu() {
  
  return cpu_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SoftIrq::release_cpu() {
  // @@protoc_insertion_point(field_release:monitor.proto.SoftIrq.cpu)
  return cpu_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SoftIrq::set_allocated_cpu(std::string* cpu) {
  if (cpu != nullptr) {
    
  } else {
    
  }
  cpu_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), cpu,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:monitor.proto.SoftIrq.cpu)
}

// float hi = 2;
inline void SoftIrq::clear_hi() {
  hi_ = 0;
}
inline float SoftIrq::_internal_hi() const {
  return hi_;
}
inline float SoftIrq::hi() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.hi)
  return _internal_hi();
}
inline void SoftIrq::_internal_set_hi(float value) {
  
  hi_ = value;
}
inline void SoftIrq::set_hi(float value) {
  _internal_set_hi(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.hi)
}

// float timer = 3;
inline void SoftIrq::clear_timer() {
  timer_ = 0;
}
inline float SoftIrq::_internal_timer() const {
  return timer_;
}
inline float SoftIrq::timer() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.timer)
  return _internal_timer();
}
inline void SoftIrq::_internal_set_timer(float value) {
  
  timer_ = value;
}
inline void SoftIrq::set_timer(float value) {
  _internal_set_timer(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.timer)
}

// float net_tx = 4;
inline void SoftIrq::clear_net_tx() {
  net_tx_ = 0;
}
inline float SoftIrq::_internal_net_tx() const {
  return net_tx_;
}
inline float SoftIrq::net_tx() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.net_tx)
  return _internal_net_tx();
}
inline void SoftIrq::_internal_set_net_tx(float value) {
  
  net_tx_ = value;
}
inline void SoftIrq::set_net_tx(float value) {
  _internal_set_net_tx(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.net_tx)
}

// float net_rx = 5;
inline void SoftIrq::clear_net_rx() {
  net_rx_ = 0;
}
inline float SoftIrq::_internal_net_rx() const {
  return net_rx_;
}
inline float SoftIrq::net_rx() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.net_rx)
  return _internal_net_rx();
}
inline void SoftIrq::_internal_set_net_rx(float value) {
  
  net_rx_ = value;
}
inline void SoftIrq::set_net_rx(float value) {
  _internal_set_net_rx(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.net_rx)
}

// float block = 6;
inline void SoftIrq::clear_block() {
  block_ = 0;
}
inline float SoftIrq::_internal_block() const {
  return block_;
}
inline float SoftIrq::block() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.block)
  return _internal_block();
}
inline void SoftIrq::_internal_set_block(float value) {
  
  block_ = value;
}
inline void SoftIrq::set_block(float value) {
  _internal_set_block(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.block)
}

// float irq_poll = 7;
inline void SoftIrq::clear_irq_poll() {
  irq_poll_ = 0;
}
inline float SoftIrq::_internal_irq_poll() const {
  return irq_poll_;
}
inline float SoftIrq::irq_poll() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.irq_poll)
  return _internal_irq_poll();
}
inline void SoftIrq::_internal_set_irq_poll(float value) {
  
  irq_poll_ = value;
}
inline void SoftIrq::set_irq_poll(float value) {
  _internal_set_irq_poll(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.irq_poll)
}

// float tasklet = 8;
inline void SoftIrq::clear_tasklet() {
  tasklet_ = 0;
}
inline float SoftIrq::_internal_tasklet() const {
  return tasklet_;
}
inline float SoftIrq::tasklet() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.tasklet)
  return _internal_tasklet();
}
inline void SoftIrq::_internal_set_tasklet(float value) {
  
  tasklet_ = value;
}
inline void SoftIrq::set_tasklet(float value) {
  _internal_set_tasklet(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.tasklet)
}

// float sched = 9;
inline void SoftIrq::clear_sched() {
  sched_ = 0;
}
inline float SoftIrq::_internal_sched() const {
  return sched_;
}
inline float SoftIrq::sched() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.sched)
  return _internal_sched();
}
inline void SoftIrq::_internal_set_sched(float value) {
  
  sched_ = value;
}
inline void SoftIrq::set_sched(float value) {
  _internal_set_sched(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.sched)
}

// float hrtimer = 10;
inline void SoftIrq::clear_hrtimer() {
  hrtimer_ = 0;
}
inline float SoftIrq::_internal_hrtimer() const {
  return hrtimer_;
}
inline float SoftIrq::hrtimer() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.hrtimer)
  return _internal_hrtimer();
}
inline void SoftIrq::_internal_set_hrtimer(float value) {
  
  hrtimer_ = value;
}
inline void SoftIrq::set_hrtimer(float value) {
  _internal_set_hrtimer(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.hrtimer)
}

// float rcu = 11;
inline void SoftIrq::clear_rcu() {
  rcu_ = 0;
}
inline float SoftIrq::_internal_rcu() const {
  return rcu_;
}
inline float SoftIrq::rcu() const {
  // @@protoc_insertion_point(field_get:monitor.proto.SoftIrq.rcu)
  return _internal_rcu();
}
inline void SoftIrq::_internal_set_rcu(float value) {
  
  rcu_ = value;
}
inline void SoftIrq::set_rcu(float value) {
  _internal_set_rcu(value);
  // @@protoc_insertion_point(field_set:monitor.proto.SoftIrq.rcu)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace monitor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cpu_5fsoftirq_2eproto
