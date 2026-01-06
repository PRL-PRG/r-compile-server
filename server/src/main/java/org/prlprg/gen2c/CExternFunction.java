package org.prlprg.gen2c;

import com.google.common.collect.ImmutableList;
import java.io.*;
import java.util.List;

final class CExternFunction {
  private final CFunctionSignature signature;

  CExternFunction(String returnType, String name, List<String> parameters) {
    signature = new CFunctionSignature(returnType, name, ImmutableList.copyOf(parameters));
  }

  void writeTo(PrintWriter pw) {
    pw.print("extern ");
    signature.writeTo(pw);
    pw.println(';');
  }

  @Override
  public String toString() {
    var w = new StringWriter();
    writeTo(new PrintWriter(w));
    return w.toString();
  }
}
