package org.prlprg.fir.ir.argument;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.Characters;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
@Immutable
public sealed interface Argument permits Constant, Consume, Read {
  @Nullable Register variable();

  @ParseMethod
  private static Argument parse(Parser p) {
    var s = p.scanner();

    if (Value.peek(p)) {
      var value = p.parse(Value.class);
      return new Constant(value);
    } else if (s.trySkip("consume ")) {
      var register = p.parse(Register.class);
      return new Consume(register);
    } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
      var register = p.parse(Register.class);
      return new Read(register);
    }

    throw s.fail("expected value, register, or `consume`");
  }
}
