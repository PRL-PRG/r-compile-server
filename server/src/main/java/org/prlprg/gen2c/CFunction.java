package org.prlprg.gen2c;

import com.google.common.collect.ImmutableList;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public final class CFunction {
  private final CFunctionSignature signature;
  private final List<CCode> sections = new ArrayList<>();

  CFunction(String returnType, String name, List<String> parameters) {
    signature = new CFunctionSignature(returnType, name, ImmutableList.copyOf(parameters));
  }

  public CCode add() {
    var s = new CCode();
    sections.add(s);
    return s;
  }

  public CCode insertAbove(CCode sec) {
    var i = sections.indexOf(sec);
    if (i == -1) {
      throw new IllegalArgumentException("Section " + sec + " does not exist in fun " + this);
    }
    var s = new CCode();
    sections.add(i, s);
    return s;
  }

  void writeForwardDeclaration(PrintWriter pw) {
    signature.writeTo(pw);
    pw.println(';');
  }

  void writeDefinition(PrintWriter pw) {
    signature.writeTo(pw);
    pw.println(" {");
    for (int i = 0; i < sections.size(); i++) {
      sections.get(i).writeTo(pw);
      if (i < sections.size() - 1) {
        pw.println();
      }
    }
    pw.println("}");
  }
}
