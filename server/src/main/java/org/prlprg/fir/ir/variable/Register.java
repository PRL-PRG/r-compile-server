package org.prlprg.fir.ir.variable;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

public final class Register implements Variable {
  public static final String DEFAULT_PREFIX = "r";

  /// Returns a [Register] which resembles `name` but syntactically valid.
  public static Register resemblance(String name) {
    var base = name.equals("...") ? "ddd" : name.replaceAll("[^a-zA-Z0-9_]", "_");
    if ((base.charAt(0) >= '0' && base.charAt(0) <= '9') || base.equals("_")) {
      base = "_" + base;
    }
    return Variable.register(base);
  }

  private final String name;

  Register(String name) {
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
    var that = (Register) obj;
    return Objects.equals(this.name, that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name);
  }

  @ParseMethod
  private static Register parse(Parser p) {
    var ident = p.scanner().readIdentifierOrKeyword();
    return Variable.register(ident);
  }
}
