// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: routes.proto

#include "routes.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace rsh {
namespace protocol {
}  // namespace protocol
}  // namespace rsh
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_routes_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_routes_2eproto = nullptr;
const uint32_t TableStruct_routes_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_routes_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014routes.proto\022\014rsh.protocol\032\016messages.p"
  "roto2\233\001\n\016CompileService\022H\n\007Compile\022\034.rsh"
  ".protocol.CompileRequest\032\035.rsh.protocol."
  "CompileResponse\"\000\022\?\n\004Init\022\031.rsh.protocol"
  ".InitRequest\032\032.rsh.protocol.InitResponse"
  "\"\0002\253\002\n\013FactService\022C\n\nGetContext\022\034.rsh.p"
  "rotocol.ContextRequest\032\025.rsh.protocol.Co"
  "ntext\"\000\022N\n\017GetTypeFeedback\022\035.rsh.protoco"
  "l.FeedbackRequest\032\032.rsh.protocol.TypeFee"
  "dback\"\000\022\?\n\tGetValues\022\032.rsh.protocol.Valu"
  "eRequest\032\024.rsh.protocol.Values\"\000\022F\n\013GetF"
  "unction\022\035.rsh.protocol.FunctionRequest\032\026"
  ".rsh.protocol.Function\"\000B\023\n\021org.prlprg.s"
  "erverb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_routes_2eproto_deps[1] = {
  &::descriptor_table_messages_2eproto,
};
static ::_pbi::once_flag descriptor_table_routes_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_routes_2eproto = {
    false, false, 533, descriptor_table_protodef_routes_2eproto,
    "routes.proto",
    &descriptor_table_routes_2eproto_once, descriptor_table_routes_2eproto_deps, 1, 0,
    schemas, file_default_instances, TableStruct_routes_2eproto::offsets,
    nullptr, file_level_enum_descriptors_routes_2eproto,
    file_level_service_descriptors_routes_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_routes_2eproto_getter() {
  return &descriptor_table_routes_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_routes_2eproto(&descriptor_table_routes_2eproto);
namespace rsh {
namespace protocol {

// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
}  // namespace rsh
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>