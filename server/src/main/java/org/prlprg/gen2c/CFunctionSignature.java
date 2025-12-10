package org.prlprg.gen2c;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import java.io.PrintWriter;

record CFunctionSignature(String returnType, String name, ImmutableList<String> parameters) {
  void writeTo(PrintWriter pw) {
    pw.printf("%s %s(%s)", returnType, name, Joiner.on(", ").join(parameters));
  }
}
