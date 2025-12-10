package org.prlprg.gen2c;

import com.google.common.collect.ImmutableList;
import java.io.PrintWriter;
import java.util.List;

public final class CExternFunction {
  private final CFunctionSignature signature;

  CExternFunction(String returnType, String name, List<String> parameters) {
    signature = new CFunctionSignature(returnType, name, ImmutableList.copyOf(parameters));
  }

  void writeTo(PrintWriter pw) {
    pw.print("extern ");
    signature.writeTo(pw);
    pw.println(';');
  }
}
