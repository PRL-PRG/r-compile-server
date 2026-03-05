package org.prlprg.fir.ir.variable;

import com.google.common.collect.ImmutableMap;
import java.util.Map;
import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Strings;

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
        || (base.charAt(0) >= 'A' && base.charAt(0) <= 'Z')
        || base.equals("_")) {
      base = "_" + base;
    }
    return Variable.register(base);
  }

  public static boolean isValid(String name) {
    return Strings.isIdentifierOrKeyword(name) && !(name.charAt(0) >= 'A' && name.charAt(0) <= 'Z');
  }

  private final String name;

  Register(String name) {
    if (!isValid(name)) {
      throw new IllegalArgumentException(
          "Illegal register name (must be a non-uppercase identifier): " + name);
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
    var s = p.scanner();

    var ident = s.readIdentifierOrKeyword();
    if (ident.charAt(0) >= 'A' && ident.charAt(0) <= 'Z') {
      throw s.fail("Illegal register name (must not start with an uppercase letter): " + ident);
    }

    return Variable.register(ident);
  }
}
