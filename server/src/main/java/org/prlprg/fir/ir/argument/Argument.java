package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
public sealed interface Argument permits Constant, Read, Use {
  record ParseContext(Abstraction scope) {}

  @ParseMethod
  private static Argument parse(Parser p, ParseContext ctx) {
    var s = p.scanner();

    if (s.nextCharsAre("NULL")
        || s.nextCharsAre("TRUE")
        || s.nextCharsAre("FALSE")
        || s.nextCharsAre("NA_")
        || s.nextCharsAre("NaN")
        || s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('-')
        || s.nextCharIs('\"')
        || s.nextCharIs('<')) {
      var value = p.parse(SEXP.class);
      return new Constant(value);
    } else if (s.trySkip("use ")) {
      var variable = p.parse(Register.class);
      return new Use(variable);
    } else if (s.nextCharSatisfies(c -> c == '`' || Character.isJavaIdentifierStart(c))) {
      var variable = p.parse(Register.class);
      return new Read(variable);
    }

    throw s.fail("unknown expression");
  }
}
