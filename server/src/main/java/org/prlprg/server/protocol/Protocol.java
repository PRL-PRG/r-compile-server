// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

package org.prlprg.server.protocol;

public final class Protocol {
  private Protocol() {}

  public static void registerAllExtensions(com.google.protobuf.ExtensionRegistryLite registry) {}

  public static void registerAllExtensions(com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions((com.google.protobuf.ExtensionRegistryLite) registry);
  }

  static final com.google.protobuf.Descriptors.Descriptor
      internal_static_rsh_server_protocol_Request_descriptor;
  static final com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_rsh_server_protocol_Request_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
      internal_static_rsh_server_protocol_HandshakeRequest_descriptor;
  static final com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_rsh_server_protocol_HandshakeRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
      internal_static_rsh_server_protocol_CompileRequest_descriptor;
  static final com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_rsh_server_protocol_CompileRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
      internal_static_rsh_server_protocol_CompiledFunction_descriptor;
  static final com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_rsh_server_protocol_CompiledFunction_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
      internal_static_rsh_server_protocol_CompileResponse_descriptor;
  static final com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_rsh_server_protocol_CompileResponse_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor getDescriptor() {
    return descriptor;
  }

  private static com.google.protobuf.Descriptors.FileDescriptor descriptor;

  static {
    java.lang.String[] descriptorData = {
      "\n\016protocol.proto\022\023rsh.server.protocol\"\210\001"
          + "\n\007Request\022:\n\thandshake\030\001 \001(\0132%.rsh.serve"
          + "r.protocol.HandshakeRequestH\000\0226\n\007compile"
          + "\030\002 \001(\0132#.rsh.server.protocol.CompileRequ"
          + "estH\000B\t\n\007payload\"^\n\020HandshakeRequest\022\023\n\013"
          + "Rsh_version\030\001 \001(\t\022\021\n\tR_version\030\002 \001(\t\022\020\n\010"
          + "platform\030\003 \001(\t\022\020\n\010packages\030\004 \003(\t\"a\n\016Comp"
          + "ileRequest\022\014\n\004name\030\002 \001(\t\022\017\n\007closure\030\003 \001("
          + "\014\022\027\n\017bc_optimization\030\004 \001(\r\022\027\n\017cc_optimiz"
          + "ation\030\005 \001(\r\"H\n\020CompiledFunction\022\014\n\004name\030"
          + "\002 \001(\t\022\023\n\013native_code\030\003 \001(\014\022\021\n\tconstants\030"
          + "\004 \001(\014\"e\n\017CompileResponse\022\021\n\007failure\030\002 \001("
          + "\tH\000\0227\n\006result\030\003 \001(\0132%.rsh.server.protoco"
          + "l.CompiledFunctionH\000B\006\n\004dataB\036\n\032org.prlp"
          + "rg.server.protocolP\001b\006proto3"
    };
    descriptor =
        com.google.protobuf.Descriptors.FileDescriptor.internalBuildGeneratedFileFrom(
            descriptorData, new com.google.protobuf.Descriptors.FileDescriptor[] {});
    internal_static_rsh_server_protocol_Request_descriptor =
        getDescriptor().getMessageTypes().get(0);
    internal_static_rsh_server_protocol_Request_fieldAccessorTable =
        new com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
            internal_static_rsh_server_protocol_Request_descriptor,
            new java.lang.String[] {
              "Handshake", "Compile", "Payload",
            });
    internal_static_rsh_server_protocol_HandshakeRequest_descriptor =
        getDescriptor().getMessageTypes().get(1);
    internal_static_rsh_server_protocol_HandshakeRequest_fieldAccessorTable =
        new com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
            internal_static_rsh_server_protocol_HandshakeRequest_descriptor,
            new java.lang.String[] {
              "RshVersion", "RVersion", "Platform", "Packages",
            });
    internal_static_rsh_server_protocol_CompileRequest_descriptor =
        getDescriptor().getMessageTypes().get(2);
    internal_static_rsh_server_protocol_CompileRequest_fieldAccessorTable =
        new com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
            internal_static_rsh_server_protocol_CompileRequest_descriptor,
            new java.lang.String[] {
              "Name", "Closure", "BcOptimization", "CcOptimization",
            });
    internal_static_rsh_server_protocol_CompiledFunction_descriptor =
        getDescriptor().getMessageTypes().get(3);
    internal_static_rsh_server_protocol_CompiledFunction_fieldAccessorTable =
        new com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
            internal_static_rsh_server_protocol_CompiledFunction_descriptor,
            new java.lang.String[] {
              "Name", "NativeCode", "Constants",
            });
    internal_static_rsh_server_protocol_CompileResponse_descriptor =
        getDescriptor().getMessageTypes().get(4);
    internal_static_rsh_server_protocol_CompileResponse_fieldAccessorTable =
        new com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
            internal_static_rsh_server_protocol_CompileResponse_descriptor,
            new java.lang.String[] {
              "Failure", "Result", "Data",
            });
  }

  // @@protoc_insertion_point(outer_class_scope)
}