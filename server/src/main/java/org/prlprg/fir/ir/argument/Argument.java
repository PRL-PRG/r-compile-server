package org.prlprg.fir.ir.argument;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Characters;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
@Immutable
public sealed interface Argument permits Constant, Read, Use {
  @Nullable Register variable();

  @ParseMethod
  private static Argument parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharsAre("NULL")
        || s.nextCharsAre("TRUE")
        || s.nextCharsAre("FALSE")
        || s.nextCharsAre("NA_")
        || s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('-')
        || s.nextCharIs('\"')
        || s.nextCharIs('<')) {
      var value = p.parse(SEXP.class);
      return new Constant(value);
    } else if (s.trySkip("use ")) {
      var register = p.parse(Register.class);
      return new Use(register);
    } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
      var register = p.parse(Register.class);
      return new Read(register);
    }

    throw s.fail("expected SEXP, register, or 'use'");
  }
}
