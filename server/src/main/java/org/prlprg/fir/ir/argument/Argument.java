package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Characters;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
public sealed interface Argument permits Constant, Read, Use {
  record ParseContext(Abstraction scope) {}

  @ParseMethod
  private static Argument parse(Parser p, ParseContext ctx) {
    var scope = ctx.scope;
    var p1 = p.withContext(new Variable.ParseContext(scope));

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
      var variable = p1.parse(Variable.class);
      if (!(variable instanceof Register register)) {
        throw s.fail(scope.contains(variable) ? "can't use named variable" : "unbound register");
      }

      return new Use(register);
    } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
      var variable = p1.parse(Variable.class);
      if (!(variable instanceof Register register)) {
        throw s.fail(
            scope.contains(variable)
                ? "load (reading a named variable) must be its own statement.\nEx: instead of `f(x)`, write `r = x; f(r)`"
                : "unbound register");
      }

      return new Read(register);
    }

    throw s.fail("unknown expression");
  }
}
