package org.prlprg.fir.ir.variable;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

public final class NamedVariable implements Variable {
  public static final NamedVariable DOTS = Variable.named("...");

  private final String name;

  public static NamedVariable ddNum(int index) {
    return Variable.named(".." + index);
  }

  NamedVariable(String name) {
    this.name = name;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (NamedVariable) obj;
    return Objects.equals(this.name, that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name);
  }

  @ParseMethod
  private static NamedVariable parse(Parser p) {
    var s = p.scanner();

    var ident = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
    return Variable.named(ident);
  }
}
