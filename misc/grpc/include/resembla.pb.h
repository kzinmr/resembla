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
class ResemblaRequest;
class ResemblaRequestDefaultTypeInternal;
extern ResemblaRequestDefaultTypeInternal _ResemblaRequest_default_instance_;
class ResemblaResponse;
class ResemblaResponseDefaultTypeInternal;
extern ResemblaResponseDefaultTypeInternal _ResemblaResponse_default_instance_;
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

  // accessors -------------------------------------------------------

  // string text = 1;
  void clear_text();
  static const int kTextFieldNumber = 1;
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

  // float score = 3;
  void clear_score();
  static const int kScoreFieldNumber = 3;
  float score() const;
  void set_score(float value);

  // @@protoc_insertion_point(class_scope:resembla.server.ResemblaResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  float score_;
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

// ResemblaResponse

// string text = 1;
inline void ResemblaResponse::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResemblaResponse::text() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.text)
  return text_.GetNoArena();
}
inline void ResemblaResponse::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.text)
}
#if LANG_CXX11
inline void ResemblaResponse::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaResponse.text)
}
#endif
inline void ResemblaResponse::set_text(const char* value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaResponse.text)
}
inline void ResemblaResponse::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaResponse.text)
}
inline ::std::string* ResemblaResponse::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaResponse.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResemblaResponse::release_text() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaResponse.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResemblaResponse::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaResponse.text)
}

// float score = 3;
inline void ResemblaResponse::clear_score() {
  score_ = 0;
}
inline float ResemblaResponse::score() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.score)
  return score_;
}
inline void ResemblaResponse::set_score(float value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.score)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace server
}  // namespace resembla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_resembla_2eproto__INCLUDED
