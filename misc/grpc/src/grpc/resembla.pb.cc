// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resembla.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "resembla.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace resembla {
namespace server {
class ResemblaRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ResemblaRequest> {
} _ResemblaRequest_default_instance_;
class ResemblaResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ResemblaResponse> {
} _ResemblaResponse_default_instance_;

namespace protobuf_resembla_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResemblaRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResemblaRequest, query_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResemblaResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResemblaResponse, text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResemblaResponse, score_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(ResemblaRequest)},
  { 5, -1, sizeof(ResemblaResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ResemblaRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ResemblaResponse_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "resembla.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _ResemblaRequest_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _ResemblaResponse_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ResemblaRequest_default_instance_.DefaultConstruct();
  _ResemblaResponse_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\016resembla.proto\022\017resembla.server\" \n\017Res"
      "emblaRequest\022\r\n\005query\030\001 \001(\t\"/\n\020ResemblaR"
      "esponse\022\014\n\004text\030\001 \001(\t\022\r\n\005score\030\003 \001(\0022b\n\017"
      "ResemblaService\022O\n\004find\022 .resembla.serve"
      "r.ResemblaRequest\032!.resembla.server.Rese"
      "mblaResponse\"\0000\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "resembla.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_resembla_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResemblaRequest::kQueryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResemblaRequest::ResemblaRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_resembla_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:resembla.server.ResemblaRequest)
}
ResemblaRequest::ResemblaRequest(const ResemblaRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.query().size() > 0) {
    query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_);
  }
  // @@protoc_insertion_point(copy_constructor:resembla.server.ResemblaRequest)
}

void ResemblaRequest::SharedCtor() {
  query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

ResemblaRequest::~ResemblaRequest() {
  // @@protoc_insertion_point(destructor:resembla.server.ResemblaRequest)
  SharedDtor();
}

void ResemblaRequest::SharedDtor() {
  query_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResemblaRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResemblaRequest::descriptor() {
  protobuf_resembla_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resembla_2eproto::file_level_metadata[0].descriptor;
}

const ResemblaRequest& ResemblaRequest::default_instance() {
  protobuf_resembla_2eproto::InitDefaults();
  return *internal_default_instance();
}

ResemblaRequest* ResemblaRequest::New(::google::protobuf::Arena* arena) const {
  ResemblaRequest* n = new ResemblaRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ResemblaRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:resembla.server.ResemblaRequest)
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ResemblaRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:resembla.server.ResemblaRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string query = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_query()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->query().data(), this->query().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "resembla.server.ResemblaRequest.query"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:resembla.server.ResemblaRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:resembla.server.ResemblaRequest)
  return false;
#undef DO_
}

void ResemblaRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:resembla.server.ResemblaRequest)
  // string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "resembla.server.ResemblaRequest.query");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query(), output);
  }

  // @@protoc_insertion_point(serialize_end:resembla.server.ResemblaRequest)
}

::google::protobuf::uint8* ResemblaRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:resembla.server.ResemblaRequest)
  // string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "resembla.server.ResemblaRequest.query");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:resembla.server.ResemblaRequest)
  return target;
}

size_t ResemblaRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resembla.server.ResemblaRequest)
  size_t total_size = 0;

  // string query = 1;
  if (this->query().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->query());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResemblaRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:resembla.server.ResemblaRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ResemblaRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResemblaRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:resembla.server.ResemblaRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:resembla.server.ResemblaRequest)
    MergeFrom(*source);
  }
}

void ResemblaRequest::MergeFrom(const ResemblaRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resembla.server.ResemblaRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.query().size() > 0) {

    query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_);
  }
}

void ResemblaRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:resembla.server.ResemblaRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResemblaRequest::CopyFrom(const ResemblaRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resembla.server.ResemblaRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResemblaRequest::IsInitialized() const {
  return true;
}

void ResemblaRequest::Swap(ResemblaRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResemblaRequest::InternalSwap(ResemblaRequest* other) {
  query_.Swap(&other->query_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ResemblaRequest::GetMetadata() const {
  protobuf_resembla_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resembla_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ResemblaRequest

// string query = 1;
void ResemblaRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ResemblaRequest::query() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaRequest.query)
  return query_.GetNoArena();
}
void ResemblaRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaRequest.query)
}
#if LANG_CXX11
void ResemblaRequest::set_query(::std::string&& value) {
  
  query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaRequest.query)
}
#endif
void ResemblaRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaRequest.query)
}
void ResemblaRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaRequest.query)
}
::std::string* ResemblaRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ResemblaRequest::release_query() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResemblaRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaRequest.query)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResemblaResponse::kTextFieldNumber;
const int ResemblaResponse::kScoreFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResemblaResponse::ResemblaResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_resembla_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:resembla.server.ResemblaResponse)
}
ResemblaResponse::ResemblaResponse(const ResemblaResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.text().size() > 0) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  score_ = from.score_;
  // @@protoc_insertion_point(copy_constructor:resembla.server.ResemblaResponse)
}

void ResemblaResponse::SharedCtor() {
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_ = 0;
  _cached_size_ = 0;
}

ResemblaResponse::~ResemblaResponse() {
  // @@protoc_insertion_point(destructor:resembla.server.ResemblaResponse)
  SharedDtor();
}

void ResemblaResponse::SharedDtor() {
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResemblaResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResemblaResponse::descriptor() {
  protobuf_resembla_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resembla_2eproto::file_level_metadata[1].descriptor;
}

const ResemblaResponse& ResemblaResponse::default_instance() {
  protobuf_resembla_2eproto::InitDefaults();
  return *internal_default_instance();
}

ResemblaResponse* ResemblaResponse::New(::google::protobuf::Arena* arena) const {
  ResemblaResponse* n = new ResemblaResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ResemblaResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:resembla.server.ResemblaResponse)
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_ = 0;
}

bool ResemblaResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:resembla.server.ResemblaResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string text = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "resembla.server.ResemblaResponse.text"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float score = 3;
      case 3: {
        if (tag == 29u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &score_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:resembla.server.ResemblaResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:resembla.server.ResemblaResponse)
  return false;
#undef DO_
}

void ResemblaResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:resembla.server.ResemblaResponse)
  // string text = 1;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "resembla.server.ResemblaResponse.text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  // float score = 3;
  if (this->score() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->score(), output);
  }

  // @@protoc_insertion_point(serialize_end:resembla.server.ResemblaResponse)
}

::google::protobuf::uint8* ResemblaResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:resembla.server.ResemblaResponse)
  // string text = 1;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "resembla.server.ResemblaResponse.text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  // float score = 3;
  if (this->score() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->score(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:resembla.server.ResemblaResponse)
  return target;
}

size_t ResemblaResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resembla.server.ResemblaResponse)
  size_t total_size = 0;

  // string text = 1;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->text());
  }

  // float score = 3;
  if (this->score() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResemblaResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:resembla.server.ResemblaResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ResemblaResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResemblaResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:resembla.server.ResemblaResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:resembla.server.ResemblaResponse)
    MergeFrom(*source);
  }
}

void ResemblaResponse::MergeFrom(const ResemblaResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resembla.server.ResemblaResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.text().size() > 0) {

    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.score() != 0) {
    set_score(from.score());
  }
}

void ResemblaResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:resembla.server.ResemblaResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResemblaResponse::CopyFrom(const ResemblaResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resembla.server.ResemblaResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResemblaResponse::IsInitialized() const {
  return true;
}

void ResemblaResponse::Swap(ResemblaResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResemblaResponse::InternalSwap(ResemblaResponse* other) {
  text_.Swap(&other->text_);
  std::swap(score_, other->score_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ResemblaResponse::GetMetadata() const {
  protobuf_resembla_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resembla_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ResemblaResponse

// string text = 1;
void ResemblaResponse::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ResemblaResponse::text() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.text)
  return text_.GetNoArena();
}
void ResemblaResponse::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.text)
}
#if LANG_CXX11
void ResemblaResponse::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:resembla.server.ResemblaResponse.text)
}
#endif
void ResemblaResponse::set_text(const char* value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:resembla.server.ResemblaResponse.text)
}
void ResemblaResponse::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:resembla.server.ResemblaResponse.text)
}
::std::string* ResemblaResponse::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:resembla.server.ResemblaResponse.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ResemblaResponse::release_text() {
  // @@protoc_insertion_point(field_release:resembla.server.ResemblaResponse.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResemblaResponse::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:resembla.server.ResemblaResponse.text)
}

// float score = 3;
void ResemblaResponse::clear_score() {
  score_ = 0;
}
float ResemblaResponse::score() const {
  // @@protoc_insertion_point(field_get:resembla.server.ResemblaResponse.score)
  return score_;
}
void ResemblaResponse::set_score(float value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:resembla.server.ResemblaResponse.score)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace server
}  // namespace resembla

// @@protoc_insertion_point(global_scope)
