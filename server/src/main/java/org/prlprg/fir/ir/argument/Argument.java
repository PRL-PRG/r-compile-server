package org.prlprg.fir.ir.argument;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.instruction.FirParseContext;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;
import org.prlprg.util.Characters;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
@Immutable
public sealed interface Argument permits Constant, Consume, Read {
  @Nullable Register variable();

  /// Register this argument's occurrence as a [Use] of its register. No-op for [Constant].
  void addUse(Use use);

  /// Un-register this argument's occurrence as a [Use] of its register. No-op for [Constant].
  void removeUse(Use use);

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
      // A register use: resolve by name through the context, so a legacy `r = <arg>` forwarding
      // binding inlines to (a copy of) its argument rather than a register read.
      var name = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
      return ((FirParseContext) p.context()).resolveUse(name, s);
    }

    throw s.fail("expected value, register, or `consume`");
  }
}
