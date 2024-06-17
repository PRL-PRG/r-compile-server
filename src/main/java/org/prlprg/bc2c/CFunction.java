package org.prlprg.bc2c;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

public class CFunction {
  private final String name;
  private final List<CCode> sections = new ArrayList<>();

  CFunction(String name) {
    this.name = name;
  }

  public CCode add() {
    var s = new CCode();
    sections.add(s);
    return s;
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);
    pw.format("SEXP %s(SEXP %s) {", name, BC2CCompiler.NAME_ENV);
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
}
