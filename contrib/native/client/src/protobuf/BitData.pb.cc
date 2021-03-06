// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BitData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BitData.pb.h"

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

namespace exec {
namespace bit {
namespace data {

namespace {

const ::google::protobuf::Descriptor* BitClientHandshake_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BitClientHandshake_reflection_ = NULL;
const ::google::protobuf::Descriptor* BitServerHandshake_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BitServerHandshake_reflection_ = NULL;
const ::google::protobuf::Descriptor* FragmentRecordBatch_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FragmentRecordBatch_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* RpcType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_BitData_2eproto() {
  protobuf_AddDesc_BitData_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BitData.proto");
  GOOGLE_CHECK(file != NULL);
  BitClientHandshake_descriptor_ = file->message_type(0);
  static const int BitClientHandshake_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitClientHandshake, rpc_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitClientHandshake, channel_),
  };
  BitClientHandshake_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BitClientHandshake_descriptor_,
      BitClientHandshake::default_instance_,
      BitClientHandshake_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitClientHandshake, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitClientHandshake, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BitClientHandshake));
  BitServerHandshake_descriptor_ = file->message_type(1);
  static const int BitServerHandshake_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitServerHandshake, rpc_version_),
  };
  BitServerHandshake_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BitServerHandshake_descriptor_,
      BitServerHandshake::default_instance_,
      BitServerHandshake_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitServerHandshake, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BitServerHandshake, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BitServerHandshake));
  FragmentRecordBatch_descriptor_ = file->message_type(2);
  static const int FragmentRecordBatch_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, query_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, receiving_major_fragment_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, receiving_minor_fragment_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, sending_major_fragment_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, sending_minor_fragment_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, def_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, islastbatch_),
  };
  FragmentRecordBatch_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FragmentRecordBatch_descriptor_,
      FragmentRecordBatch::default_instance_,
      FragmentRecordBatch_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FragmentRecordBatch, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FragmentRecordBatch));
  RpcType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BitData_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BitClientHandshake_descriptor_, &BitClientHandshake::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BitServerHandshake_descriptor_, &BitServerHandshake::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FragmentRecordBatch_descriptor_, &FragmentRecordBatch::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BitData_2eproto() {
  delete BitClientHandshake::default_instance_;
  delete BitClientHandshake_reflection_;
  delete BitServerHandshake::default_instance_;
  delete BitServerHandshake_reflection_;
  delete FragmentRecordBatch::default_instance_;
  delete FragmentRecordBatch_reflection_;
}

void protobuf_AddDesc_BitData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::exec::bit::protobuf_AddDesc_ExecutionProtos_2eproto();
  ::exec::protobuf_AddDesc_Coordination_2eproto();
  ::exec::shared::protobuf_AddDesc_UserBitShared_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rBitData.proto\022\rexec.bit.data\032\025Executio"
    "nProtos.proto\032\022Coordination.proto\032\023UserB"
    "itShared.proto\"]\n\022BitClientHandshake\022\023\n\013"
    "rpc_version\030\001 \001(\005\0222\n\007channel\030\002 \001(\0162\027.exe"
    "c.shared.RpcChannel:\010BIT_DATA\")\n\022BitServ"
    "erHandshake\022\023\n\013rpc_version\030\001 \001(\005\"\214\002\n\023Fra"
    "gmentRecordBatch\022&\n\010query_id\030\001 \001(\0132\024.exe"
    "c.shared.QueryId\022#\n\033receiving_major_frag"
    "ment_id\030\002 \001(\005\022#\n\033receiving_minor_fragmen"
    "t_id\030\003 \003(\005\022!\n\031sending_major_fragment_id\030"
    "\004 \001(\005\022!\n\031sending_minor_fragment_id\030\005 \001(\005"
    "\022(\n\003def\030\006 \001(\0132\033.exec.shared.RecordBatchD"
    "ef\022\023\n\013isLastBatch\030\007 \001(\010*D\n\007RpcType\022\r\n\tHA"
    "NDSHAKE\020\000\022\007\n\003ACK\020\001\022\013\n\007GOODBYE\020\002\022\024\n\020REQ_R"
    "ECORD_BATCH\020\003B(\n\033org.apache.drill.exec.p"
    "rotoB\007BitDataH\001", 615);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BitData.proto", &protobuf_RegisterTypes);
  BitClientHandshake::default_instance_ = new BitClientHandshake();
  BitServerHandshake::default_instance_ = new BitServerHandshake();
  FragmentRecordBatch::default_instance_ = new FragmentRecordBatch();
  BitClientHandshake::default_instance_->InitAsDefaultInstance();
  BitServerHandshake::default_instance_->InitAsDefaultInstance();
  FragmentRecordBatch::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BitData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BitData_2eproto {
  StaticDescriptorInitializer_BitData_2eproto() {
    protobuf_AddDesc_BitData_2eproto();
  }
} static_descriptor_initializer_BitData_2eproto_;
const ::google::protobuf::EnumDescriptor* RpcType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcType_descriptor_;
}
bool RpcType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int BitClientHandshake::kRpcVersionFieldNumber;
const int BitClientHandshake::kChannelFieldNumber;
#endif  // !_MSC_VER

BitClientHandshake::BitClientHandshake()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BitClientHandshake::InitAsDefaultInstance() {
}

BitClientHandshake::BitClientHandshake(const BitClientHandshake& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BitClientHandshake::SharedCtor() {
  _cached_size_ = 0;
  rpc_version_ = 0;
  channel_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BitClientHandshake::~BitClientHandshake() {
  SharedDtor();
}

void BitClientHandshake::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BitClientHandshake::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BitClientHandshake::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BitClientHandshake_descriptor_;
}

const BitClientHandshake& BitClientHandshake::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BitData_2eproto();
  return *default_instance_;
}

BitClientHandshake* BitClientHandshake::default_instance_ = NULL;

BitClientHandshake* BitClientHandshake::New() const {
  return new BitClientHandshake;
}

void BitClientHandshake::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    rpc_version_ = 0;
    channel_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BitClientHandshake::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 rpc_version = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rpc_version_)));
          set_has_rpc_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_channel;
        break;
      }

      // optional .exec.shared.RpcChannel channel = 2 [default = BIT_DATA];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_channel:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::exec::shared::RpcChannel_IsValid(value)) {
            set_channel(static_cast< ::exec::shared::RpcChannel >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BitClientHandshake::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 rpc_version = 1;
  if (has_rpc_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->rpc_version(), output);
  }

  // optional .exec.shared.RpcChannel channel = 2 [default = BIT_DATA];
  if (has_channel()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->channel(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BitClientHandshake::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 rpc_version = 1;
  if (has_rpc_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->rpc_version(), target);
  }

  // optional .exec.shared.RpcChannel channel = 2 [default = BIT_DATA];
  if (has_channel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->channel(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BitClientHandshake::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 rpc_version = 1;
    if (has_rpc_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rpc_version());
    }

    // optional .exec.shared.RpcChannel channel = 2 [default = BIT_DATA];
    if (has_channel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->channel());
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

void BitClientHandshake::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BitClientHandshake* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BitClientHandshake*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BitClientHandshake::MergeFrom(const BitClientHandshake& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rpc_version()) {
      set_rpc_version(from.rpc_version());
    }
    if (from.has_channel()) {
      set_channel(from.channel());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BitClientHandshake::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BitClientHandshake::CopyFrom(const BitClientHandshake& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BitClientHandshake::IsInitialized() const {

  return true;
}

void BitClientHandshake::Swap(BitClientHandshake* other) {
  if (other != this) {
    std::swap(rpc_version_, other->rpc_version_);
    std::swap(channel_, other->channel_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BitClientHandshake::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BitClientHandshake_descriptor_;
  metadata.reflection = BitClientHandshake_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BitServerHandshake::kRpcVersionFieldNumber;
#endif  // !_MSC_VER

BitServerHandshake::BitServerHandshake()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BitServerHandshake::InitAsDefaultInstance() {
}

BitServerHandshake::BitServerHandshake(const BitServerHandshake& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BitServerHandshake::SharedCtor() {
  _cached_size_ = 0;
  rpc_version_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BitServerHandshake::~BitServerHandshake() {
  SharedDtor();
}

void BitServerHandshake::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BitServerHandshake::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BitServerHandshake::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BitServerHandshake_descriptor_;
}

const BitServerHandshake& BitServerHandshake::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BitData_2eproto();
  return *default_instance_;
}

BitServerHandshake* BitServerHandshake::default_instance_ = NULL;

BitServerHandshake* BitServerHandshake::New() const {
  return new BitServerHandshake;
}

void BitServerHandshake::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    rpc_version_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BitServerHandshake::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 rpc_version = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rpc_version_)));
          set_has_rpc_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BitServerHandshake::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 rpc_version = 1;
  if (has_rpc_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->rpc_version(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BitServerHandshake::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 rpc_version = 1;
  if (has_rpc_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->rpc_version(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BitServerHandshake::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 rpc_version = 1;
    if (has_rpc_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rpc_version());
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

void BitServerHandshake::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BitServerHandshake* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BitServerHandshake*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BitServerHandshake::MergeFrom(const BitServerHandshake& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rpc_version()) {
      set_rpc_version(from.rpc_version());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BitServerHandshake::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BitServerHandshake::CopyFrom(const BitServerHandshake& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BitServerHandshake::IsInitialized() const {

  return true;
}

void BitServerHandshake::Swap(BitServerHandshake* other) {
  if (other != this) {
    std::swap(rpc_version_, other->rpc_version_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BitServerHandshake::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BitServerHandshake_descriptor_;
  metadata.reflection = BitServerHandshake_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FragmentRecordBatch::kQueryIdFieldNumber;
const int FragmentRecordBatch::kReceivingMajorFragmentIdFieldNumber;
const int FragmentRecordBatch::kReceivingMinorFragmentIdFieldNumber;
const int FragmentRecordBatch::kSendingMajorFragmentIdFieldNumber;
const int FragmentRecordBatch::kSendingMinorFragmentIdFieldNumber;
const int FragmentRecordBatch::kDefFieldNumber;
const int FragmentRecordBatch::kIsLastBatchFieldNumber;
#endif  // !_MSC_VER

FragmentRecordBatch::FragmentRecordBatch()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FragmentRecordBatch::InitAsDefaultInstance() {
  query_id_ = const_cast< ::exec::shared::QueryId*>(&::exec::shared::QueryId::default_instance());
  def_ = const_cast< ::exec::shared::RecordBatchDef*>(&::exec::shared::RecordBatchDef::default_instance());
}

FragmentRecordBatch::FragmentRecordBatch(const FragmentRecordBatch& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FragmentRecordBatch::SharedCtor() {
  _cached_size_ = 0;
  query_id_ = NULL;
  receiving_major_fragment_id_ = 0;
  sending_major_fragment_id_ = 0;
  sending_minor_fragment_id_ = 0;
  def_ = NULL;
  islastbatch_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FragmentRecordBatch::~FragmentRecordBatch() {
  SharedDtor();
}

void FragmentRecordBatch::SharedDtor() {
  if (this != default_instance_) {
    delete query_id_;
    delete def_;
  }
}

void FragmentRecordBatch::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FragmentRecordBatch::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FragmentRecordBatch_descriptor_;
}

const FragmentRecordBatch& FragmentRecordBatch::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BitData_2eproto();
  return *default_instance_;
}

FragmentRecordBatch* FragmentRecordBatch::default_instance_ = NULL;

FragmentRecordBatch* FragmentRecordBatch::New() const {
  return new FragmentRecordBatch;
}

void FragmentRecordBatch::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_query_id()) {
      if (query_id_ != NULL) query_id_->::exec::shared::QueryId::Clear();
    }
    receiving_major_fragment_id_ = 0;
    sending_major_fragment_id_ = 0;
    sending_minor_fragment_id_ = 0;
    if (has_def()) {
      if (def_ != NULL) def_->::exec::shared::RecordBatchDef::Clear();
    }
    islastbatch_ = false;
  }
  receiving_minor_fragment_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FragmentRecordBatch::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .exec.shared.QueryId query_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_query_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_receiving_major_fragment_id;
        break;
      }

      // optional int32 receiving_major_fragment_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_receiving_major_fragment_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &receiving_major_fragment_id_)));
          set_has_receiving_major_fragment_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_receiving_minor_fragment_id;
        break;
      }

      // repeated int32 receiving_minor_fragment_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_receiving_minor_fragment_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_receiving_minor_fragment_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_receiving_minor_fragment_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_receiving_minor_fragment_id;
        if (input->ExpectTag(32)) goto parse_sending_major_fragment_id;
        break;
      }

      // optional int32 sending_major_fragment_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sending_major_fragment_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sending_major_fragment_id_)));
          set_has_sending_major_fragment_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_sending_minor_fragment_id;
        break;
      }

      // optional int32 sending_minor_fragment_id = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sending_minor_fragment_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sending_minor_fragment_id_)));
          set_has_sending_minor_fragment_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_def;
        break;
      }

      // optional .exec.shared.RecordBatchDef def = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_def:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_def()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_isLastBatch;
        break;
      }

      // optional bool isLastBatch = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isLastBatch:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &islastbatch_)));
          set_has_islastbatch();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void FragmentRecordBatch::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .exec.shared.QueryId query_id = 1;
  if (has_query_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->query_id(), output);
  }

  // optional int32 receiving_major_fragment_id = 2;
  if (has_receiving_major_fragment_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->receiving_major_fragment_id(), output);
  }

  // repeated int32 receiving_minor_fragment_id = 3;
  for (int i = 0; i < this->receiving_minor_fragment_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->receiving_minor_fragment_id(i), output);
  }

  // optional int32 sending_major_fragment_id = 4;
  if (has_sending_major_fragment_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->sending_major_fragment_id(), output);
  }

  // optional int32 sending_minor_fragment_id = 5;
  if (has_sending_minor_fragment_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->sending_minor_fragment_id(), output);
  }

  // optional .exec.shared.RecordBatchDef def = 6;
  if (has_def()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->def(), output);
  }

  // optional bool isLastBatch = 7;
  if (has_islastbatch()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->islastbatch(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FragmentRecordBatch::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .exec.shared.QueryId query_id = 1;
  if (has_query_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->query_id(), target);
  }

  // optional int32 receiving_major_fragment_id = 2;
  if (has_receiving_major_fragment_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->receiving_major_fragment_id(), target);
  }

  // repeated int32 receiving_minor_fragment_id = 3;
  for (int i = 0; i < this->receiving_minor_fragment_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->receiving_minor_fragment_id(i), target);
  }

  // optional int32 sending_major_fragment_id = 4;
  if (has_sending_major_fragment_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->sending_major_fragment_id(), target);
  }

  // optional int32 sending_minor_fragment_id = 5;
  if (has_sending_minor_fragment_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->sending_minor_fragment_id(), target);
  }

  // optional .exec.shared.RecordBatchDef def = 6;
  if (has_def()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->def(), target);
  }

  // optional bool isLastBatch = 7;
  if (has_islastbatch()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->islastbatch(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FragmentRecordBatch::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .exec.shared.QueryId query_id = 1;
    if (has_query_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->query_id());
    }

    // optional int32 receiving_major_fragment_id = 2;
    if (has_receiving_major_fragment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->receiving_major_fragment_id());
    }

    // optional int32 sending_major_fragment_id = 4;
    if (has_sending_major_fragment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sending_major_fragment_id());
    }

    // optional int32 sending_minor_fragment_id = 5;
    if (has_sending_minor_fragment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sending_minor_fragment_id());
    }

    // optional .exec.shared.RecordBatchDef def = 6;
    if (has_def()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->def());
    }

    // optional bool isLastBatch = 7;
    if (has_islastbatch()) {
      total_size += 1 + 1;
    }

  }
  // repeated int32 receiving_minor_fragment_id = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->receiving_minor_fragment_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->receiving_minor_fragment_id(i));
    }
    total_size += 1 * this->receiving_minor_fragment_id_size() + data_size;
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

void FragmentRecordBatch::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FragmentRecordBatch* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FragmentRecordBatch*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FragmentRecordBatch::MergeFrom(const FragmentRecordBatch& from) {
  GOOGLE_CHECK_NE(&from, this);
  receiving_minor_fragment_id_.MergeFrom(from.receiving_minor_fragment_id_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_query_id()) {
      mutable_query_id()->::exec::shared::QueryId::MergeFrom(from.query_id());
    }
    if (from.has_receiving_major_fragment_id()) {
      set_receiving_major_fragment_id(from.receiving_major_fragment_id());
    }
    if (from.has_sending_major_fragment_id()) {
      set_sending_major_fragment_id(from.sending_major_fragment_id());
    }
    if (from.has_sending_minor_fragment_id()) {
      set_sending_minor_fragment_id(from.sending_minor_fragment_id());
    }
    if (from.has_def()) {
      mutable_def()->::exec::shared::RecordBatchDef::MergeFrom(from.def());
    }
    if (from.has_islastbatch()) {
      set_islastbatch(from.islastbatch());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FragmentRecordBatch::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FragmentRecordBatch::CopyFrom(const FragmentRecordBatch& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FragmentRecordBatch::IsInitialized() const {

  return true;
}

void FragmentRecordBatch::Swap(FragmentRecordBatch* other) {
  if (other != this) {
    std::swap(query_id_, other->query_id_);
    std::swap(receiving_major_fragment_id_, other->receiving_major_fragment_id_);
    receiving_minor_fragment_id_.Swap(&other->receiving_minor_fragment_id_);
    std::swap(sending_major_fragment_id_, other->sending_major_fragment_id_);
    std::swap(sending_minor_fragment_id_, other->sending_minor_fragment_id_);
    std::swap(def_, other->def_);
    std::swap(islastbatch_, other->islastbatch_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FragmentRecordBatch::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FragmentRecordBatch_descriptor_;
  metadata.reflection = FragmentRecordBatch_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace bit
}  // namespace exec

// @@protoc_insertion_point(global_scope)
