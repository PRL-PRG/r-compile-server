package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.opt.specialize.Unbox.boxCall;
import static org.prlprg.fir.opt.specialize.Unbox.canUnbox;
import static org.prlprg.fir.opt.specialize.Unbox.unboxCall;
import static org.prlprg.fir.opt.specialize.Unbox.unboxed;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;

/// Unboxes phi parameters of type `v1(X)` into scalar `X` phis.
///
/// For each phi parameter `i` of type `v1(X)`:
/// - Creates a new register `i1` of type `X`, which replaces `i` in the BB's phi parameter list.
/// - Inserts `i = box< X --> v1(X) >(i1)` at the start of the BB (so `i` still has the original
///   `v1(X)` type for its existing users).
/// - In each predecessor, for every [Target] pointing to this BB, inserts
///   `arg_to_i1 = unbox< v1(X) --> X >(arg_to_i)` immediately before the jump and replaces
///   the phi argument at the given position (formerly `arg_to_i`) with `arg_to_i1`.
public final class UnboxPhi implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    boolean[] changed = {false};
    scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .forEach(bb -> changed[0] |= run(scope, bb));
    return changed[0];
  }

  private boolean run(Abstraction scope, BB bb) {
    var changed = false;

    // Iterate phi parameters; a phi at a given index may be replaced with a new register
    // at the same index, so indexing stays valid.
    var numPhis = bb.phiParameters().size();
    for (var phiIndex = 0; phiIndex < numPhis; phiIndex++) {
      var phi = bb.phiParameters().get(phiIndex);
      var phiType = scope.typeOf(phi);
      if (phiType == null || !canUnbox(phiType)) {
        continue;
      }

      var unboxedType = unboxed(phiType);
      var scalar = scope.addLocal(phi.name(), unboxedType);

      // Replace the phi parameter in the block with the new scalar register.
      bb.replaceParameterAt(phiIndex, scalar);

      // Re-box at the entry of the block so `phi` (still typed `v1(X)`) has the original value.
      bb.insertStatement(0, new Statement(phi, boxCall(new Read(scalar), phiType)));

      // Rewrite each predecessor: unbox the incoming phi argument before its jump.
      for (var pred : List.copyOf(bb.predecessors())) {
        rewritePredecessor(scope, bb, pred, phiIndex);
      }

      changed = true;
    }

    return changed;
  }

  private void rewritePredecessor(Abstraction scope, BB targetBb, BB pred, int phiIndex) {
    var argToUnboxReg = new LinkedHashMap<Argument, Register>();
    var oldJump = pred.jump();

    var newJump =
        oldJump.mapTargets(
            target -> {
              if (target.bb() != targetBb) {
                return target;
              }
              var oldArg = target.phiArgs().get(phiIndex);
              var argType = scope.typeOf(oldArg);
              assert argType != null && canUnbox(argType);
              var unboxedReg =
                  argToUnboxReg.computeIfAbsent(
                      oldArg,
                      a -> {
                        var name =
                            a.variable() == null ? Register.DEFAULT_NAME : a.variable().name();
                        var reg = scope.addLocal(name, unboxed(argType));
                        pred.insertStatement(
                            pred.statements().size(), new Statement(reg, unboxCall(a, argType)));
                        return reg;
                      });
              var newArgs = new ArrayList<>(target.phiArgs());
              newArgs.set(phiIndex, new Read(unboxedReg));
              return new Target(target.bb(), ImmutableList.copyOf(newArgs));
            });

    pred.setJump(newJump);
  }
}
