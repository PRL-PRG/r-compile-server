package org.prlprg.fir.opt;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;

/// Makes a `return` of an owned vector `consume` it, so the returned value is fresh.
///
/// Nothing runs after a `return`, so moving the vector out instead of sharing it is always sound,
/// and it's what lets [org.prlprg.fir.opt.specialize.ImproveSignatures] declare a fresh return
/// type: a fresh return is what the caller needs to pass the result straight into an owned
/// parameter ([CallOwnedVersion]) without `dup`ping it first.
public record ConsumeReturn() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;
    for (var cfg : scope.streamCfgs().toList()) {
      for (var exit : cfg.exits()) {
        var jump = exit.jump();
        if (!(jump.expression() instanceof Return)
            || !(jump.arg(0) instanceof Read(var value))
            || !isMovableFrom(scope, cfg, value)) {
          continue;
        }

        jump.setArg(0, new Consume(value));
        changed = true;
      }
    }
    return changed;
  }

  /// Whether `value` is an owned vector this CFG can move out: no promise captures it (a captured
  /// register can't be `consume`d, and the capture may outlive this `return`).
  private static boolean isMovableFrom(Abstraction scope, CFG cfg, Register value) {
    var type = scope.typeOf(value);
    return type.ownership() == Ownership.OWNED
        && type.isValue()
        && type.kind().isWellFormedWithOwnership()
        && value.uses().stream()
            .allMatch(
                use -> {
                  var useBb = use.instruction().parentBB();
                  return useBb != null && useBb.owner() == cfg;
                });
  }
}
