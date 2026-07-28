package org.prlprg.fir.ir.instruction;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Throw an exception (`args[0]`), exiting all compiled code (catching exceptions = reflection).
///
/// The behavior throws [org.prlprg.fir.interpret.InterpretException] in an interpreter and
/// `Rf_error` in the C backend.
public record Raise() implements JumpExpression {
  @Override
  @UnmodifiableView
  public List<BBRef> targetRefs() {
    return List.of();
  }

  @Override
  @UnmodifiableView
  public List<Target> targets(List<Argument> args) {
    return List.of();
  }

  @Override
  public Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args) {
    return new Mapped(this, args);
  }
}
