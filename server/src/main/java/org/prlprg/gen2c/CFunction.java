package org.prlprg.gen2c;

import com.google.common.collect.ImmutableList;
import java.io.*;
import java.util.ArrayList;
import java.util.List;

public final class CFunction {
  private final CUnit unit;

  private final CFunctionSignature signature;
  private final List<CCode> sections = new ArrayList<>();

  CFunction(CUnit unit, String returnType, String name, List<String> parameters) {
    this.unit = unit;
    signature = new CFunctionSignature(returnType, name, ImmutableList.copyOf(parameters));
  }

  public CUnit unit() {
    return unit;
  }

  public String name() {
    return signature.name();
  }

  public CCode add() {
    var s = new CCode();
    sections.add(s);
    return s;
  }

  /// Prepends
  ///
  /// Try to use `add` instead, because this is more expensive
  public CCode addFirst() {
    var s = new CCode();
    sections.addFirst(s);
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

  /// Print only this function's definition.
  ///
  /// Mainly useful for IDE inspection. When sending data to the compile client,
  /// use `unit.toString(List.of(this, newDependencies...))` (already-existing dependencies will
  /// be forward-declared).
  @Override
  public String toString() {
    var w = new StringWriter();
    writeDefinition(new PrintWriter(w));
    return w.toString();
  }
}
