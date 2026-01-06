package org.prlprg.gen2c;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import java.io.*;
import org.jspecify.annotations.*;

record CFunctionSignature(String returnType, String name, ImmutableList<String> parameters) {
  void writeTo(PrintWriter pw) {
    pw.printf("%s %s(%s)", returnType, name, Joiner.on(", ").join(parameters));
  }

  @Override
  public String toString() {
    var w = new StringWriter();
    writeTo(new PrintWriter(w));
    return w.toString();
  }
}
