package org.prlprg.service;

import com.google.protobuf.ByteString;

public record NativeClosure(String name, ByteString code, ByteString constantPool, String sourceCode) {
}
