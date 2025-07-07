package org.prlprg.fir.variable;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;

public sealed interface Variable permits NamedVariable, Register {
  String name();

  @ParseMethod
  private static Variable parse(Parser p) {
    var s = p.scanner();

    var ident = s.nextCharIs('`') ? Names.read(s, false) : s.readJavaIdentifierOrKeyword();
    return ident.startsWith("r") ? new Register(ident) : new NamedVariable(ident);
  }
}
