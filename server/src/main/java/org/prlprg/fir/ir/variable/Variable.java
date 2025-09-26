package org.prlprg.fir.ir.variable;

import java.util.HashMap;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Strings;

@Immutable
public sealed interface Variable permits NamedVariable, Register {
  String name();

  static Register register(String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal variable name (variables must not be empty): " + name);
    }

    synchronized (InternedVariables.registers) {
      return InternedVariables.registers.computeIfAbsent(name, Register::new);
    }
  }

  static NamedVariable named(String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal variable name (variables must not be empty): " + name);
    }

    synchronized (InternedVariables.named) {
      return InternedVariables.named.computeIfAbsent(name, NamedVariable::new);
    }
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!Strings.isIdentifierOrKeyword(name())) {
      w.writeQuoted('`', name());
    } else {
      w.write(name());
    }
  }
}

class InternedVariables {
  static final HashMap<String, Register> registers = new HashMap<>();
  static final HashMap<String, NamedVariable> named = new HashMap<>();

  static {
    // We must intern static variables here or we'll get a `ConcurrentModificationException`
    // the first time we try to construct a variable of their class.
    named.put("...", NamedVariable.DOTS);
  }
}
