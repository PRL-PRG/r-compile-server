package org.prlprg.fir.opt;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.Liveness;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;

/// Makes a `dup` of an owned vector that isn't used afterwards `consume` it, which is a move
/// instead of a copy (nothing can observe the difference, because nothing reads the vector again).
///
/// [ElideConsumedDup] then removes the `dup` entirely whenever it can.
public record ConsumeDeadDup() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;
    for (var cfg : scope.streamCfgs().toList()) {
      // Replacing a `read` with a `consume` doesn't change *which* registers each instruction uses,
      // so the liveness computed here stays valid for the whole CFG.
      Liveness liveness = null;

      for (var bb : cfg.bbs()) {
        for (var index = 0; index < bb.statements().size(); index++) {
          var statement = bb.statements().get(index);
          if (!(statement.expression() instanceof Dup)
              || !(statement.arg(0) instanceof Read(var vector))
              || !isMovableFrom(scope, cfg, vector)) {
            continue;
          }

          if (liveness == null) {
            liveness = new Liveness(cfg);
          }
          if (!liveness.isKilled(vector, bb, index)) {
            continue;
          }

          statement.setArg(0, new Consume(vector));
          changed = true;
        }
      }
    }
    return changed;
  }

  /// Whether `vector` is an owned vector that this CFG's [Liveness] fully describes, i.e. it's
  /// defined here and no promise captures it (a captured register can't be `consume`d, and its
  /// capture may outlive the point liveness reports as its last use).
  private static boolean isMovableFrom(Abstraction scope, CFG cfg, Register vector) {
    var type = scope.typeOf(vector);
    return type.ownership() == Ownership.OWNED
        && type.isValue()
        && type.kind().isWellFormedWithOwnership()
        && vector.definingCfg() == cfg
        && vector.uses().stream()
            .allMatch(
                use -> {
                  var useBb = use.instruction().parentBB();
                  return useBb != null && useBb.owner() == cfg;
                });
  }
}
