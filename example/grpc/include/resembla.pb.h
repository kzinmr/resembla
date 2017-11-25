// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resembla.proto

#ifndef PROTOBUF_resembla_2eproto__INCLUDED
#define PROTOBUF_resembla_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace resembla {
namespace server {
class ResemblaOnDemandRequest;
class ResemblaOnDemandRequestDefaultTypeInternal;
extern ResemblaOnDemandRequestDefaultTypeInternal _ResemblaOnDemandRequest_default_instance_;
class ResemblaRequest;
class ResemblaRequestDefaultTypeInternal;
extern ResemblaRequestDefaultTypeInternal _ResemblaRequest_default_instance_;
class ResemblaResponse;
class ResemblaResponseDefaultTypeInternal;
extern ResemblaResponseDefaultTypeInternal _ResemblaResponse_default_instance_;
class ResemblaResponse_Result;
class ResemblaResponse_ResultDefaultTypeInternal;
extern ResemblaResponse_ResultDefaultTypeInternal _ResemblaResponse_Result_default_instance_;
}  // namespace server
}  // namespace resembla

namespace resembla {
namespace server {

namespace protobuf_resembla_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_resembla_2eproto

// ===================================================================

class ResemblaRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:resembla.server.ResemblaRequest) */ {
 public:
  ResemblaRequest();
  virtual ~ResemblaRequest();

  ResemblaRequest(const ResemblaRequest& from);

  inline ResemblaRequest& operator=(const ResemblaRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResemblaRequest& default_instance();

  static inline const ResemblaRequest* internal_default_instance() {
    return reinterpret_cast<const ResemblaRequest*>(
               &_ResemblaRequest_default_instance_);
  }

  void Swap(ResemblaRequest* other);

  // implements Message ----------------------------------------------

  inline ResemblaRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ResemblaRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResemblaRequest& from);
  void MergeFrom(const ResemblaRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResemblaRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string query = 1;
  void clear_query();
  static const int kQueryFieldNumber = 1;
  const ::std::string& query() const;
  void set_query(const ::std::string& value);
  #if LANG_CXX11
  void set_query(::std::string&& value);
  #endif
  void set_query(const char* value);
  void set_query(const char* value, size_t size);
  ::std::string* mutable_query();
  ::std::string* release_query();
  void set_allocated_query(::std::string* query);

  // @@protoc_insertion_point(class_scope:resembla.server.ResemblaRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr query_;
  mutable int _cached_size_;
  friend struct  protobuf_resembla_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResemblaOnDemandRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:resembla.server.ResemblaOnDemandRequest) */ {
 public:
  ResemblaOnDemandRequest();
  virtual ~ResemblaOnDemandRequest();

  ResemblaOnDemandRequest(const ResemblaOnDemandRequest& from);

  inline ResemblaOnDemandRequest& operator=(const ResemblaOnDemandRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResemblaOnDemandRequest& default_instance();

  static inline const ResemblaOnDemandRequest* internal_default_instance() {
    return reinterpret_cast<const ResemblaOnDemandRequest*>(
               &_ResemblaOnDemandRequest_default_instance_);
  }

  void Swap(ResemblaOnDemandRequest* other);

  // implements Message ----------------------------------------------

  inline ResemblaOnDemandRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ResemblaOnDemandRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResemblaOnDemandRequest& from);
  void MergeFrom(const ResemblaOnDemandRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResemblaOnDemandRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string candidates = 2;
  int candidates_size() const;
  void clear_candidates();
  static const int kCandidatesFieldNumber = 2;
  const ::std::string& candidates(int index) const;
  ::std::string* mutable_candidates(int index);
  void set_candidates(int index, const ::std::string& value);
  void set_candidates(int index, const char* value);
  void set_candidates(int index, const char* value, size_t size);
  ::std::string* add_candidates();
  void add_candidates(const ::std::string& value);
  void add_candidates(const char* value);
  void add_candidates(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& candidates() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_candidates();

  // string query = 1;
  void clear_query();
  static const int kQueryFieldNumber = 1;
  const ::std::string& query() const;
  void set_query(const ::std::string& value);
  #if LANG_CXX11
  void set_query(::std::string&& value);
  #endif
  void set_query(const char* value);
  void set_query(const char* value, size_t size);
  ::std::string* mutable_query();
  ::std::string* release_query();
  void set_allocated_query(::std::string* query);

  // @@protoc_insertion_point(class_scope:resembla.server.ResemblaOnDemandRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> candidates_;
  ::google::protobuf::internal::ArenaStringPtr query_;
  mutable int _cached_size_;
  friend struct  protobuf_resembla_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResemblaResponse_Result : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:resembla.server.ResemblaResponse.Result) */ {
 public:
  ResemblaResponse_Result();
  virtual ~ResemblaResponse_Result();

  ResemblaResponse_Result(const ResemblaResponse_Result& from);

  inline ResemblaResponse_Result& operator=(const ResemblaResponse_Result& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResemblaResponse_Result& default_instance();

  static inline const ResemblaResponse_Result* internal_default_instance() {
    return reinterpret_cast<const ResemblaResponse_Result*>(
               &_ResemblaResponse_Result_default_instance_);
  }

  void Swap(ResemblaResponse_Result* other);

  // implements Message ----------------------------------------------

  inline ResemblaResponse_Result* New() const PROTOBUF_FINAL { return New(NULL); }

  ResemblaResponse_Result* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResemblaResponse_Result& from);
  void MergeFrom(const ResemblaResponse_Result& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResemblaResponse_Result* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string text = 2;
  void clear_text();
  static const int kTextFieldNumber = 2;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // float score = 3;
  void clear_score();
  static const int kScoreFieldNumber = 3;
  float score() const;
  void set_score(float value);

  // @@protoc_insertion_point(class_scope:resembla.server.ResemblaResponse.Result)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::int32 id_;
  float score_;
  mutable int _cached_size_;
  friend struct  protobuf_resembla_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResemblaResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:resembla.server.ResemblaResponse) */ {
 public:
  ResemblaResponse();
  virtual ~ResemblaResponse();

  ResemblaResponse(const ResemblaResponse& from);

  inline ResemblaResponse& operator=(const ResemblaResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResemblaResponse& default_instance();

  static inline const ResemblaResponse* internal_default_instance() {
    return reinterpret_cast<const ResemblaResponse*>(
               &_ResemblaResponse_default_instance_);
  }

  void Swap(ResemblaResponse* other);

  // implements Message ----------------------------------------------

  inline ResemblaResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  ResemblaResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResemblaResponse& from);
  void MergeFrom(const ResemblaResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResemblaResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef ResemblaResponse_Result Result;

  // accessors -------------------------------------------------------

  // repeated .resembla.server.ResemblaResponse.Result results = 1;
  int results_size() const;
  void clear_results();
  static const int kResultsFieldNumber = 1;
  const ::resembla::server::ResemblaResponse_Result& results(int index) const;
  ::resembla::server::ResemblaResponse_Result* mutable_results(int index);
  ::resembla::server::ResemblaResponse_Result* add_results();
  ::google::protobuf::RepeatedPtrField< ::resembla::server::ResemblaResponse_Result >*
      mutable_results();
  const ::google::protobuf::RepeatedPtrField< ::resembla::server::ResemblaResponse_Result >&
      results() const;

  // @@protoc_insertion_point(class_scope:resembla.server.ResemblaResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::resembla::server::ResemblaResponse_Result > results_;
  mutable int _cached_size_;
  friend struct  protobuf_resembla_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResemblaRequest

// string query = 1;
inline void ResemblaRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResemblaRequest::query() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaRequest.query)
  return query_.GetNoArena();
}
inline void ResemblaRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaRequest.query)
}
#if LANG_CXX11
inline void ResemblaRequest::set_query(::std::string&& value) {
  
  query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaRequest.query)
}
#endif
inline void ResemblaRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaRequest.query)
}
inline void ResemblaRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaRequest.query)
}
inline ::std::string* ResemblaRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResemblaRequest::release_query() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResemblaRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaRequest.query)
}

// -------------------------------------------------------------------

// ResemblaOnDemandRequest

// string query = 1;
inline void ResemblaOnDemandRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResemblaOnDemandRequest::query() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaOnDemandRequest.query)
  return query_.GetNoArena();
}
inline void ResemblaOnDemandRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaOnDemandRequest.query)
}
#if LANG_CXX11
inline void ResemblaOnDemandRequest::set_query(::std::string&& value) {
  
  query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaOnDemandRequest.query)
}
#endif
inline void ResemblaOnDemandRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaOnDemandRequest.query)
}
inline void ResemblaOnDemandRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaOnDemandRequest.query)
}
inline ::std::string* ResemblaOnDemandRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaOnDemandRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResemblaOnDemandRequest::release_query() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaOnDemandRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResemblaOnDemandRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaOnDemandRequest.query)
}

// repeated string candidates = 2;
inline int ResemblaOnDemandRequest::candidates_size() const {
  return candidates_.size();
}
inline void ResemblaOnDemandRequest::clear_candidates() {
  candidates_.Clear();
}
inline const ::std::string& ResemblaOnDemandRequest::candidates(int index) const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaOnDemandRequest.candidates)
  return candidates_.Get(index);
}
inline ::std::string* ResemblaOnDemandRequest::mutable_candidates(int index) {
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaOnDemandRequest.candidates)
  return candidates_.Mutable(index);
}
inline void ResemblaOnDemandRequest::set_candidates(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaOnDemandRequest.candidates)
  candidates_.Mutable(index)->assign(value);
}
inline void ResemblaOnDemandRequest::set_candidates(int index, const char* value) {
  candidates_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaOnDemandRequest.candidates)
}
inline void ResemblaOnDemandRequest::set_candidates(int index, const char* value, size_t size) {
  candidates_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaOnDemandRequest.candidates)
}
inline ::std::string* ResemblaOnDemandRequest::add_candidates() {
  // @@protoc_insertion_point(field_add_mutable:resembla.server.ResemblaOnDemandRequest.candidates)
  return candidates_.Add();
}
inline void ResemblaOnDemandRequest::add_candidates(const ::std::string& value) {
  candidates_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:resembla.server.ResemblaOnDemandRequest.candidates)
}
inline void ResemblaOnDemandRequest::add_candidates(const char* value) {
  candidates_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:resembla.server.ResemblaOnDemandRequest.candidates)
}
inline void ResemblaOnDemandRequest::add_candidates(const char* value, size_t size) {
  candidates_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:resembla.server.ResemblaOnDemandRequest.candidates)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ResemblaOnDemandRequest::candidates() const {
  // @@protoc_insertion_point(field_list:resembla.server.ResemblaOnDemandRequest.candidates)
  return candidates_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ResemblaOnDemandRequest::mutable_candidates() {
  // @@protoc_insertion_point(field_mutable_list:resembla.server.ResemblaOnDemandRequest.candidates)
  return &candidates_;
}

// -------------------------------------------------------------------

// ResemblaResponse_Result

// int32 id = 1;
inline void ResemblaResponse_Result::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 ResemblaResponse_Result::id() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.Result.id)
  return id_;
}
inline void ResemblaResponse_Result::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.Result.id)
}

// string text = 2;
inline void ResemblaResponse_Result::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResemblaResponse_Result::text() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.Result.text)
  return text_.GetNoArena();
}
inline void ResemblaResponse_Result::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.Result.text)
}
#if LANG_CXX11
inline void ResemblaResponse_Result::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaResponse.Result.text)
}
#endif
inline void ResemblaResponse_Result::set_text(const char* value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaResponse.Result.text)
}
inline void ResemblaResponse_Result::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaResponse.Result.text)
}
inline ::std::string* ResemblaResponse_Result::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaResponse.Result.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResemblaResponse_Result::release_text() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaResponse.Result.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResemblaResponse_Result::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaResponse.Result.text)
}

// float score = 3;
inline void ResemblaResponse_Result::clear_score() {
  score_ = 0;
}
inline float ResemblaResponse_Result::score() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.Result.score)
  return score_;
}
inline void ResemblaResponse_Result::set_score(float value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.Result.score)
}

// -------------------------------------------------------------------

// ResemblaResponse

// repeated .resembla.server.ResemblaResponse.Result results = 1;
inline int ResemblaResponse::results_size() const {
  return results_.size();
}
inline void ResemblaResponse::clear_results() {
  results_.Clear();
}
inline const ::resembla::server::ResemblaResponse_Result& ResemblaResponse::results(int index) const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.results)
  return results_.Get(index);
}
inline ::resembla::server::ResemblaResponse_Result* ResemblaResponse::mutable_results(int index) {
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaResponse.results)
  return results_.Mutable(index);
}
inline ::resembla::server::ResemblaResponse_Result* ResemblaResponse::add_results() {
  // @@protoc_insertion_point(field_add:resembla.server.ResemblaResponse.results)
  return results_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::resembla::server::ResemblaResponse_Result >*
ResemblaResponse::mutable_results() {
  // @@protoc_insertion_point(field_mutable_list:resembla.server.ResemblaResponse.results)
  return &results_;
}
inline const ::google::protobuf::RepeatedPtrField< ::resembla::server::ResemblaResponse_Result >&
ResemblaResponse::results() const {
  // @@protoc_insertion_point(field_list:resembla.server.ResemblaResponse.results)
  return results_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace server
}  // namespace resembla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_resembla_2eproto__INCLUDED