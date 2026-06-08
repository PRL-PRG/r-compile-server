package org.prlprg.fir.ir.argument;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.Characters;
import org.prlprg.util.Strings;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
@Immutable
public sealed interface Argument extends Comparable<Argument> permits Constant, Consume, Read {
  @Nullable Register variable();

  @Override
  default int compareTo(Argument other) {
    int kindCmp = kindOrder(this) - kindOrder(other);
    if (kindCmp != 0) return kindCmp;
    return switch (this) {
      case Constant(var v) -> v.compareTo(((Constant) other).value());
      case Read(var r) ->
          Strings.naturalComparator().compare(r.name(), ((Read) other).variable().name());
      case Consume(var r) ->
          Strings.naturalComparator().compare(r.name(), ((Consume) other).variable().name());
    };
  }

  private static int kindOrder(Argument a) {
    return switch (a) {
      case Constant _ -> 0;
      case Read _ -> 1;
      case Consume _ -> 2;
    };
  }

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
