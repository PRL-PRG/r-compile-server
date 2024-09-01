package org.prlprg.bc2c;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

public class CFunction {
  private final String returnType;
  private final String name;
  private final String parameters;
  private final List<CCode> sections = new ArrayList<>();

  CFunction(String returnType, String name, String parameters) {
    this.returnType = returnType;
    this.name = name;
    this.parameters = parameters;
  }

  public CCode add() {
    var s = new CCode();
    sections.add(s);
    return s;
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);
    pw.format("%s {", getDeclaration());
    pw.println();
    for (int i = 0; i < sections.size(); i++) {
      sections.get(i).writeTo(w);
      if (i < sections.size() - 1) {
        pw.println();
      }
    }
    pw.println("}");
    pw.flush();
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

  public String getDeclaration() {
    return String.format("%s %s(%s)", returnType, name, parameters);
  }
}
