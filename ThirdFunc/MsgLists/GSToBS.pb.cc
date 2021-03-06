// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GSToBS.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GSToBS.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace GSToBS {

namespace {

const ::google::protobuf::Descriptor* AskRegister_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AskRegister_reflection_ = NULL;
const ::google::protobuf::Descriptor* ReportAllClientInf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ReportAllClientInf_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_GSToBS_2eproto() {
  protobuf_AddDesc_GSToBS_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "GSToBS.proto");
  GOOGLE_CHECK(file != NULL);
  AskRegister_descriptor_ = file->message_type(0);
  static const int AskRegister_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AskRegister, mgsid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AskRegister, gsid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AskRegister, listenport_),
  };
  AskRegister_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AskRegister_descriptor_,
      AskRegister::default_instance_,
      AskRegister_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AskRegister, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AskRegister, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AskRegister));
  ReportAllClientInf_descriptor_ = file->message_type(1);
  static const int ReportAllClientInf_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportAllClientInf, msgid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportAllClientInf, tokenlist_size_),
  };
  ReportAllClientInf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ReportAllClientInf_descriptor_,
      ReportAllClientInf::default_instance_,
      ReportAllClientInf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportAllClientInf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportAllClientInf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ReportAllClientInf));
  MsgID_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_GSToBS_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AskRegister_descriptor_, &AskRegister::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ReportAllClientInf_descriptor_, &ReportAllClientInf::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_GSToBS_2eproto() {
  delete AskRegister::default_instance_;
  delete AskRegister_reflection_;
  delete ReportAllClientInf::default_instance_;
  delete ReportAllClientInf_reflection_;
}

void protobuf_AddDesc_GSToBS_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014GSToBS.proto\022\006GSToBS\"i\n\013AskRegister\0228\n"
    "\005mgsid\030\001 \001(\0162\r.GSToBS.MsgID:\032eMsgToBSFro"
    "mGS_AskRegister\022\014\n\004gsid\030\002 \001(\005\022\022\n\nlistenp"
    "ort\030\003 \001(\005\"n\n\022ReportAllClientInf\022@\n\005msgid"
    "\030\001 \001(\0162\r.GSToBS.MsgID:\"eMsgToBSFromGS_Re"
    "portAllClientInfo\022\026\n\016tokenlist_size\030\002 \001("
    "\r*\264\001\n\005MsgID\022\032\n\024eMsgToBSFromGS_Begin\020\200\200\002\022"
    " \n\032eMsgToBSFromGS_AskRegister\020\201\200\002\022(\n\"eMs"
    "gToBSFromGS_ReportAllClientInfo\020\202\200\002\022)\n#e"
    "MsgToBSFromGS_OneUserLoginTokenRet\020\203\200\002\022\030"
    "\n\022eMsgToBSFromGS_End\020\240\200\002", 424);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GSToBS.proto", &protobuf_RegisterTypes);
  AskRegister::default_instance_ = new AskRegister();
  ReportAllClientInf::default_instance_ = new ReportAllClientInf();
  AskRegister::default_instance_->InitAsDefaultInstance();
  ReportAllClientInf::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GSToBS_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GSToBS_2eproto {
  StaticDescriptorInitializer_GSToBS_2eproto() {
    protobuf_AddDesc_GSToBS_2eproto();
  }
} static_descriptor_initializer_GSToBS_2eproto_;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgID_descriptor_;
}
bool MsgID_IsValid(int value) {
  switch(value) {
    case 32768:
    case 32769:
    case 32770:
    case 32771:
    case 32800:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int AskRegister::kMgsidFieldNumber;
const int AskRegister::kGsidFieldNumber;
const int AskRegister::kListenportFieldNumber;
#endif  // !_MSC_VER

AskRegister::AskRegister()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:GSToBS.AskRegister)
}

void AskRegister::InitAsDefaultInstance() {
}

AskRegister::AskRegister(const AskRegister& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:GSToBS.AskRegister)
}

void AskRegister::SharedCtor() {
  _cached_size_ = 0;
  mgsid_ = 32769;
  gsid_ = 0;
  listenport_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AskRegister::~AskRegister() {
  // @@protoc_insertion_point(destructor:GSToBS.AskRegister)
  SharedDtor();
}

void AskRegister::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AskRegister::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AskRegister::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AskRegister_descriptor_;
}

const AskRegister& AskRegister::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GSToBS_2eproto();
  return *default_instance_;
}

AskRegister* AskRegister::default_instance_ = NULL;

AskRegister* AskRegister::New() const {
  return new AskRegister;
}

void AskRegister::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<AskRegister*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(gsid_, listenport_);
    mgsid_ = 32769;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AskRegister::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GSToBS.AskRegister)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .GSToBS.MsgID mgsid = 1 [default = eMsgToBSFromGS_AskRegister];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::GSToBS::MsgID_IsValid(value)) {
            set_mgsid(static_cast< ::GSToBS::MsgID >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_gsid;
        break;
      }

      // optional int32 gsid = 2;
      case 2: {
        if (tag == 16) {
         parse_gsid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gsid_)));
          set_has_gsid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_listenport;
        break;
      }

      // optional int32 listenport = 3;
      case 3: {
        if (tag == 24) {
         parse_listenport:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &listenport_)));
          set_has_listenport();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GSToBS.AskRegister)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GSToBS.AskRegister)
  return false;
#undef DO_
}

void AskRegister::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GSToBS.AskRegister)
  // optional .GSToBS.MsgID mgsid = 1 [default = eMsgToBSFromGS_AskRegister];
  if (has_mgsid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->mgsid(), output);
  }

  // optional int32 gsid = 2;
  if (has_gsid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->gsid(), output);
  }

  // optional int32 listenport = 3;
  if (has_listenport()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->listenport(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GSToBS.AskRegister)
}

::google::protobuf::uint8* AskRegister::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:GSToBS.AskRegister)
  // optional .GSToBS.MsgID mgsid = 1 [default = eMsgToBSFromGS_AskRegister];
  if (has_mgsid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->mgsid(), target);
  }

  // optional int32 gsid = 2;
  if (has_gsid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->gsid(), target);
  }

  // optional int32 listenport = 3;
  if (has_listenport()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->listenport(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GSToBS.AskRegister)
  return target;
}

int AskRegister::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .GSToBS.MsgID mgsid = 1 [default = eMsgToBSFromGS_AskRegister];
    if (has_mgsid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->mgsid());
    }

    // optional int32 gsid = 2;
    if (has_gsid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gsid());
    }

    // optional int32 listenport = 3;
    if (has_listenport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->listenport());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AskRegister::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AskRegister* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AskRegister*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AskRegister::MergeFrom(const AskRegister& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_mgsid()) {
      set_mgsid(from.mgsid());
    }
    if (from.has_gsid()) {
      set_gsid(from.gsid());
    }
    if (from.has_listenport()) {
      set_listenport(from.listenport());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AskRegister::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AskRegister::CopyFrom(const AskRegister& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AskRegister::IsInitialized() const {

  return true;
}

void AskRegister::Swap(AskRegister* other) {
  if (other != this) {
    std::swap(mgsid_, other->mgsid_);
    std::swap(gsid_, other->gsid_);
    std::swap(listenport_, other->listenport_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AskRegister::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AskRegister_descriptor_;
  metadata.reflection = AskRegister_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ReportAllClientInf::kMsgidFieldNumber;
const int ReportAllClientInf::kTokenlistSizeFieldNumber;
#endif  // !_MSC_VER

ReportAllClientInf::ReportAllClientInf()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:GSToBS.ReportAllClientInf)
}

void ReportAllClientInf::InitAsDefaultInstance() {
}

ReportAllClientInf::ReportAllClientInf(const ReportAllClientInf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:GSToBS.ReportAllClientInf)
}

void ReportAllClientInf::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 32770;
  tokenlist_size_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ReportAllClientInf::~ReportAllClientInf() {
  // @@protoc_insertion_point(destructor:GSToBS.ReportAllClientInf)
  SharedDtor();
}

void ReportAllClientInf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ReportAllClientInf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReportAllClientInf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReportAllClientInf_descriptor_;
}

const ReportAllClientInf& ReportAllClientInf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GSToBS_2eproto();
  return *default_instance_;
}

ReportAllClientInf* ReportAllClientInf::default_instance_ = NULL;

ReportAllClientInf* ReportAllClientInf::New() const {
  return new ReportAllClientInf;
}

void ReportAllClientInf::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    msgid_ = 32770;
    tokenlist_size_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ReportAllClientInf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GSToBS.ReportAllClientInf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .GSToBS.MsgID msgid = 1 [default = eMsgToBSFromGS_ReportAllClientInfo];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::GSToBS::MsgID_IsValid(value)) {
            set_msgid(static_cast< ::GSToBS::MsgID >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_tokenlist_size;
        break;
      }

      // optional uint32 tokenlist_size = 2;
      case 2: {
        if (tag == 16) {
         parse_tokenlist_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tokenlist_size_)));
          set_has_tokenlist_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GSToBS.ReportAllClientInf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GSToBS.ReportAllClientInf)
  return false;
#undef DO_
}

void ReportAllClientInf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GSToBS.ReportAllClientInf)
  // optional .GSToBS.MsgID msgid = 1 [default = eMsgToBSFromGS_ReportAllClientInfo];
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // optional uint32 tokenlist_size = 2;
  if (has_tokenlist_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->tokenlist_size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GSToBS.ReportAllClientInf)
}

::google::protobuf::uint8* ReportAllClientInf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:GSToBS.ReportAllClientInf)
  // optional .GSToBS.MsgID msgid = 1 [default = eMsgToBSFromGS_ReportAllClientInfo];
  if (has_msgid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->msgid(), target);
  }

  // optional uint32 tokenlist_size = 2;
  if (has_tokenlist_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->tokenlist_size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GSToBS.ReportAllClientInf)
  return target;
}

int ReportAllClientInf::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .GSToBS.MsgID msgid = 1 [default = eMsgToBSFromGS_ReportAllClientInfo];
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // optional uint32 tokenlist_size = 2;
    if (has_tokenlist_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->tokenlist_size());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReportAllClientInf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ReportAllClientInf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ReportAllClientInf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ReportAllClientInf::MergeFrom(const ReportAllClientInf& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_tokenlist_size()) {
      set_tokenlist_size(from.tokenlist_size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ReportAllClientInf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportAllClientInf::CopyFrom(const ReportAllClientInf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportAllClientInf::IsInitialized() const {

  return true;
}

void ReportAllClientInf::Swap(ReportAllClientInf* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(tokenlist_size_, other->tokenlist_size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ReportAllClientInf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ReportAllClientInf_descriptor_;
  metadata.reflection = ReportAllClientInf_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GSToBS

// @@protoc_insertion_point(global_scope)
