package org.prlprg.fir.ir.variable;

import com.google.common.collect.ImmutableMap;
import java.util.Map;
import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

public final class Register implements Variable {
  public static final String DEFAULT_NAME = "r";

  private static final ImmutableMap<String, String> BUILTIN_RESEMBLANCES =
      ImmutableMap.ofEntries(
          Map.entry("...", "ddd"),
          Map.entry("+", "plus"),
          Map.entry("-", "minus"),
          Map.entry("*", "mul"),
          Map.entry("/", "div"),
          Map.entry("^", "pow"),
          Map.entry("%", "mod"),
          Map.entry("!", "not"),
          Map.entry("~", "tilde"),
          Map.entry("?", "question"),
          Map.entry("&&", "and"),
          Map.entry("||", "or"),
          Map.entry("==", "eq"),
          Map.entry("!=", "neq"),
          Map.entry("<", "lt"),
          Map.entry(">", "gt"),
          Map.entry("<=", "le"),
          Map.entry(">=", "ge"),
          Map.entry(":", "colon"),
          Map.entry("<-", "assign"),
          Map.entry("<<-", "superassign"),
          Map.entry("[", "extract1"),
          Map.entry("[[", "extract2"),
          Map.entry("[<-", "subassign1"),
          Map.entry("[[<-", "subassign2"),
          Map.entry("$", "dollar"),
          Map.entry("$<-", "dollarassign"),
          Map.entry("@", "at"));

  /// Returns a [Register] which resembles `name` but syntactically valid.
  public static Register resemblance(String name) {
    var builtin = BUILTIN_RESEMBLANCES.get(name);
    if (builtin != null) {
      return Variable.register(builtin);
    }

    var base = name.replaceAll("[^a-zA-Z0-9_]", "_");
    if ((base.charAt(0) >= '0' && base.charAt(0) <= '9')
        || base.equals("_")
        || base.startsWith("TRUE")
        || base.startsWith("FALSE")
        || base.startsWith("NA_")) {
      base = "_" + base;
    }
    return Variable.register(base);
  }

  private final String name;

  Register(String name) {
    if (name.startsWith("TRUE") || name.startsWith("FALSE") || name.startsWith("NA_")) {
      throw new IllegalArgumentException("Illegal register name: " + name);
    }
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
