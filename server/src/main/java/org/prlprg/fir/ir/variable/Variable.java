package org.prlprg.fir.ir.variable;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.Strings;

public sealed interface Variable permits NamedVariable, Register {
  String name();

  // TODO: intern
  static Register register(String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal variable name (variables must not be empty): " + name);
    }

    return new Register(name);
  }

  // TODO: intern
  static NamedVariable named(String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal variable name (variables must not be empty): " + name);
    }

    return new NamedVariable(name);
  }

  record ParseContext(Abstraction scope) {}

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!Strings.isValidJavaIdentifierOrKeyword(name())) {
      w.writeQuoted('`', name());
    } else {
      w.write(name());
    }
  }

  @ParseMethod
  private static Variable parse(Parser p, ParseContext ctx) {
    var scope = ctx.scope;
    var s = p.scanner();

    var name = s.nextCharIs('`') ? Names.read(s, true) : s.readJavaIdentifierOrKeyword();
    var paramOrLocal = scope.lookup(name);
    // If `paramOrLocal` is `null`, the variable is in a parent scope, and only named variables are
    // in parent scopes.
    return paramOrLocal == null ? Variable.named(name) : paramOrLocal;
  }
}
