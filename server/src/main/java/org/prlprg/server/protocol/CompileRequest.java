// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

package org.prlprg.server.protocol;

/** Protobuf type {@code rsh.server.protocol.CompileRequest} */
public final class CompileRequest extends com.google.protobuf.GeneratedMessageV3
    implements
    // @@protoc_insertion_point(message_implements:rsh.server.protocol.CompileRequest)
    CompileRequestOrBuilder {
  private static final long serialVersionUID = 0L;

  // Use CompileRequest.newBuilder() to construct.
  private CompileRequest(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }

  private CompileRequest() {
    name_ = "";
    closure_ = com.google.protobuf.ByteString.EMPTY;
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(UnusedPrivateParameter unused) {
    return new CompileRequest();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet getUnknownFields() {
    return this.unknownFields;
  }

  private CompileRequest(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 18:
            {
              java.lang.String s = input.readStringRequireUtf8();

              name_ = s;
              break;
            }
          case 26:
            {
              closure_ = input.readBytes();
              break;
            }
          case 32:
            {
              bcOptimization_ = input.readUInt32();
              break;
            }
          case 40:
            {
              ccOptimization_ = input.readUInt32();
              break;
            }
          default:
            {
              if (!parseUnknownField(input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }

  public static final com.google.protobuf.Descriptors.Descriptor getDescriptor() {
    return org.prlprg.server.protocol.Protocol
        .internal_static_rsh_server_protocol_CompileRequest_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return org.prlprg.server.protocol.Protocol
        .internal_static_rsh_server_protocol_CompileRequest_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            org.prlprg.server.protocol.CompileRequest.class,
            org.prlprg.server.protocol.CompileRequest.Builder.class);
  }

  public static final int NAME_FIELD_NUMBER = 2;
  private volatile java.lang.Object name_;

  /**
   * <code>string name = 2;</code>
   *
   * @return The name.
   */
  @java.lang.Override
  public java.lang.String getName() {
    java.lang.Object ref = name_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      name_ = s;
      return s;
    }
  }

  /**
   * <code>string name = 2;</code>
   *
   * @return The bytes for name.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString getNameBytes() {
    java.lang.Object ref = name_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b =
          com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
      name_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int CLOSURE_FIELD_NUMBER = 3;
  private com.google.protobuf.ByteString closure_;

  /**
   *
   *
   * <pre>
   * the closure to be compiled as CLOSXP
   * </pre>
   *
   * <code>bytes closure = 3;</code>
   *
   * @return The closure.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString getClosure() {
    return closure_;
  }

  public static final int BC_OPTIMIZATION_FIELD_NUMBER = 4;
  private int bcOptimization_;

  /**
   * <code>uint32 bc_optimization = 4;</code>
   *
   * @return The bcOptimization.
   */
  @java.lang.Override
  public int getBcOptimization() {
    return bcOptimization_;
  }

  public static final int CC_OPTIMIZATION_FIELD_NUMBER = 5;
  private int ccOptimization_;

  /**
   * <code>uint32 cc_optimization = 5;</code>
   *
   * @return The ccOptimization.
   */
  @java.lang.Override
  public int getCcOptimization() {
    return ccOptimization_;
  }

  private byte memoizedIsInitialized = -1;

  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output) throws java.io.IOException {
    if (!getNameBytes().isEmpty()) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 2, name_);
    }
    if (!closure_.isEmpty()) {
      output.writeBytes(3, closure_);
    }
    if (bcOptimization_ != 0) {
      output.writeUInt32(4, bcOptimization_);
    }
    if (ccOptimization_ != 0) {
      output.writeUInt32(5, ccOptimization_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (!getNameBytes().isEmpty()) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, name_);
    }
    if (!closure_.isEmpty()) {
      size += com.google.protobuf.CodedOutputStream.computeBytesSize(3, closure_);
    }
    if (bcOptimization_ != 0) {
      size += com.google.protobuf.CodedOutputStream.computeUInt32Size(4, bcOptimization_);
    }
    if (ccOptimization_ != 0) {
      size += com.google.protobuf.CodedOutputStream.computeUInt32Size(5, ccOptimization_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
      return true;
    }
    if (!(obj instanceof org.prlprg.server.protocol.CompileRequest)) {
      return super.equals(obj);
    }
    org.prlprg.server.protocol.CompileRequest other =
        (org.prlprg.server.protocol.CompileRequest) obj;

    if (!getName().equals(other.getName())) return false;
    if (!getClosure().equals(other.getClosure())) return false;
    if (getBcOptimization() != other.getBcOptimization()) return false;
    if (getCcOptimization() != other.getCcOptimization()) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + NAME_FIELD_NUMBER;
    hash = (53 * hash) + getName().hashCode();
    hash = (37 * hash) + CLOSURE_FIELD_NUMBER;
    hash = (53 * hash) + getClosure().hashCode();
    hash = (37 * hash) + BC_OPTIMIZATION_FIELD_NUMBER;
    hash = (53 * hash) + getBcOptimization();
    hash = (37 * hash) + CC_OPTIMIZATION_FIELD_NUMBER;
    hash = (53 * hash) + getCcOptimization();
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      java.nio.ByteBuffer data, com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      byte[] data, com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseWithIOException(PARSER, input);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      java.io.InputStream input, com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseWithIOException(
        PARSER, input, extensionRegistry);
  }

  public static org.prlprg.server.protocol.CompileRequest parseDelimitedFrom(
      java.io.InputStream input) throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseDelimitedWithIOException(PARSER, input);
  }

  public static org.prlprg.server.protocol.CompileRequest parseDelimitedFrom(
      java.io.InputStream input, com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseDelimitedWithIOException(
        PARSER, input, extensionRegistry);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      com.google.protobuf.CodedInputStream input) throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseWithIOException(PARSER, input);
  }

  public static org.prlprg.server.protocol.CompileRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3.parseWithIOException(
        PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() {
    return newBuilder();
  }

  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }

  public static Builder newBuilder(org.prlprg.server.protocol.CompileRequest prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }

  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }

  /** Protobuf type {@code rsh.server.protocol.CompileRequest} */
  public static final class Builder extends com.google.protobuf.GeneratedMessageV3.Builder<Builder>
      implements
      // @@protoc_insertion_point(builder_implements:rsh.server.protocol.CompileRequest)
      org.prlprg.server.protocol.CompileRequestOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor getDescriptor() {
      return org.prlprg.server.protocol.Protocol
          .internal_static_rsh_server_protocol_CompileRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.prlprg.server.protocol.Protocol
          .internal_static_rsh_server_protocol_CompileRequest_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.prlprg.server.protocol.CompileRequest.class,
              org.prlprg.server.protocol.CompileRequest.Builder.class);
    }

    // Construct using org.prlprg.server.protocol.CompileRequest.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }

    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders) {}
    }

    @java.lang.Override
    public Builder clear() {
      super.clear();
      name_ = "";

      closure_ = com.google.protobuf.ByteString.EMPTY;

      bcOptimization_ = 0;

      ccOptimization_ = 0;

      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
      return org.prlprg.server.protocol.Protocol
          .internal_static_rsh_server_protocol_CompileRequest_descriptor;
    }

    @java.lang.Override
    public org.prlprg.server.protocol.CompileRequest getDefaultInstanceForType() {
      return org.prlprg.server.protocol.CompileRequest.getDefaultInstance();
    }

    @java.lang.Override
    public org.prlprg.server.protocol.CompileRequest build() {
      org.prlprg.server.protocol.CompileRequest result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public org.prlprg.server.protocol.CompileRequest buildPartial() {
      org.prlprg.server.protocol.CompileRequest result =
          new org.prlprg.server.protocol.CompileRequest(this);
      result.name_ = name_;
      result.closure_ = closure_;
      result.bcOptimization_ = bcOptimization_;
      result.ccOptimization_ = ccOptimization_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }

    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field, java.lang.Object value) {
      return super.setField(field, value);
    }

    @java.lang.Override
    public Builder clearField(com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }

    @java.lang.Override
    public Builder clearOneof(com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }

    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field, int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }

    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field, java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }

    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof org.prlprg.server.protocol.CompileRequest) {
        return mergeFrom((org.prlprg.server.protocol.CompileRequest) other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(org.prlprg.server.protocol.CompileRequest other) {
      if (other == org.prlprg.server.protocol.CompileRequest.getDefaultInstance()) return this;
      if (!other.getName().isEmpty()) {
        name_ = other.name_;
        onChanged();
      }
      if (other.getClosure() != com.google.protobuf.ByteString.EMPTY) {
        setClosure(other.getClosure());
      }
      if (other.getBcOptimization() != 0) {
        setBcOptimization(other.getBcOptimization());
      }
      if (other.getCcOptimization() != 0) {
        setCcOptimization(other.getCcOptimization());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      org.prlprg.server.protocol.CompileRequest parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (org.prlprg.server.protocol.CompileRequest) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private java.lang.Object name_ = "";

    /**
     * <code>string name = 2;</code>
     *
     * @return The name.
     */
    public java.lang.String getName() {
      java.lang.Object ref = name_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        name_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }

    /**
     * <code>string name = 2;</code>
     *
     * @return The bytes for name.
     */
    public com.google.protobuf.ByteString getNameBytes() {
      java.lang.Object ref = name_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b =
            com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
        name_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    /**
     * <code>string name = 2;</code>
     *
     * @param value The name to set.
     * @return This builder for chaining.
     */
    public Builder setName(java.lang.String value) {
      if (value == null) {
        throw new NullPointerException();
      }

      name_ = value;
      onChanged();
      return this;
    }

    /**
     * <code>string name = 2;</code>
     *
     * @return This builder for chaining.
     */
    public Builder clearName() {

      name_ = getDefaultInstance().getName();
      onChanged();
      return this;
    }

    /**
     * <code>string name = 2;</code>
     *
     * @param value The bytes for name to set.
     * @return This builder for chaining.
     */
    public Builder setNameBytes(com.google.protobuf.ByteString value) {
      if (value == null) {
        throw new NullPointerException();
      }
      checkByteStringIsUtf8(value);

      name_ = value;
      onChanged();
      return this;
    }

    private com.google.protobuf.ByteString closure_ = com.google.protobuf.ByteString.EMPTY;

    /**
     *
     *
     * <pre>
     * the closure to be compiled as CLOSXP
     * </pre>
     *
     * <code>bytes closure = 3;</code>
     *
     * @return The closure.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getClosure() {
      return closure_;
    }

    /**
     *
     *
     * <pre>
     * the closure to be compiled as CLOSXP
     * </pre>
     *
     * <code>bytes closure = 3;</code>
     *
     * @param value The closure to set.
     * @return This builder for chaining.
     */
    public Builder setClosure(com.google.protobuf.ByteString value) {
      if (value == null) {
        throw new NullPointerException();
      }

      closure_ = value;
      onChanged();
      return this;
    }

    /**
     *
     *
     * <pre>
     * the closure to be compiled as CLOSXP
     * </pre>
     *
     * <code>bytes closure = 3;</code>
     *
     * @return This builder for chaining.
     */
    public Builder clearClosure() {

      closure_ = getDefaultInstance().getClosure();
      onChanged();
      return this;
    }

    private int bcOptimization_;

    /**
     * <code>uint32 bc_optimization = 4;</code>
     *
     * @return The bcOptimization.
     */
    @java.lang.Override
    public int getBcOptimization() {
      return bcOptimization_;
    }

    /**
     * <code>uint32 bc_optimization = 4;</code>
     *
     * @param value The bcOptimization to set.
     * @return This builder for chaining.
     */
    public Builder setBcOptimization(int value) {

      bcOptimization_ = value;
      onChanged();
      return this;
    }

    /**
     * <code>uint32 bc_optimization = 4;</code>
     *
     * @return This builder for chaining.
     */
    public Builder clearBcOptimization() {

      bcOptimization_ = 0;
      onChanged();
      return this;
    }

    private int ccOptimization_;

    /**
     * <code>uint32 cc_optimization = 5;</code>
     *
     * @return The ccOptimization.
     */
    @java.lang.Override
    public int getCcOptimization() {
      return ccOptimization_;
    }

    /**
     * <code>uint32 cc_optimization = 5;</code>
     *
     * @param value The ccOptimization to set.
     * @return This builder for chaining.
     */
    public Builder setCcOptimization(int value) {

      ccOptimization_ = value;
      onChanged();
      return this;
    }

    /**
     * <code>uint32 cc_optimization = 5;</code>
     *
     * @return This builder for chaining.
     */
    public Builder clearCcOptimization() {

      ccOptimization_ = 0;
      onChanged();
      return this;
    }

    @java.lang.Override
    public final Builder setUnknownFields(final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }

    // @@protoc_insertion_point(builder_scope:rsh.server.protocol.CompileRequest)
  }

  // @@protoc_insertion_point(class_scope:rsh.server.protocol.CompileRequest)
  private static final org.prlprg.server.protocol.CompileRequest DEFAULT_INSTANCE;

  static {
    DEFAULT_INSTANCE = new org.prlprg.server.protocol.CompileRequest();
  }

  public static org.prlprg.server.protocol.CompileRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<CompileRequest> PARSER =
      new com.google.protobuf.AbstractParser<CompileRequest>() {
        @java.lang.Override
        public CompileRequest parsePartialFrom(
            com.google.protobuf.CodedInputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
          return new CompileRequest(input, extensionRegistry);
        }
      };

  public static com.google.protobuf.Parser<CompileRequest> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<CompileRequest> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public org.prlprg.server.protocol.CompileRequest getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }
}