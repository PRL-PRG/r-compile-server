package org.prlprg.fir.variable;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrettyPrintWriter;
import org.prlprg.primitive.Names;
import org.prlprg.util.Strings;

public sealed interface Variable permits NamedVariable, Register {
  String name();

  // TODO: intern
  static Register register(String name) {
    if (!Strings.isValidJavaIdentifierOrKeyword(name)) {
      throw new IllegalArgumentException(
          "Illegal register name (registers must be valid Java identifiers and start with 'r' to be parsable): "
              + name);
    }
    if (!name.startsWith("r")) {
      throw new IllegalArgumentException("Register must start with 'r': " + name);
    }

    return new Register(name);
  }

  // TODO: intern
  static NamedVariable named(String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal named variable name (named variables must not be empty nor start with 'r'): " + name);
    }
    if (name.startsWith("r")) {
      throw new IllegalArgumentException("Named variable must not start with 'r': " + name);
    }

    // ???: Abstract with the code in `Function.java` or change identifier parser and constructor
    var nameQuotedIfNecessary = Strings.isValidJavaIdentifierOrKeyword(name) || name.startsWith("`") ? name :
        PrettyPrintWriter.use(w -> w.writeQuoted('`', name));
    return new NamedVariable(nameQuotedIfNecessary);
  }

  @ParseMethod
  private static Variable parse(Parser p) {
    var s = p.scanner();

    var ident = s.nextCharIs('`') ? Names.read(s, false) : s.readJavaIdentifierOrKeyword();
    return ident.startsWith("r") ? register(ident) : named(ident);
  }
}
