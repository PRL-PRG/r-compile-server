package org.prlprg.service;

import com.google.protobuf.ByteString;

public record NativeClosure(ByteString code, String name, ByteString constantPool) {}
