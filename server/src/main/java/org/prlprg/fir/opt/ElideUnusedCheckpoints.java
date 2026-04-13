package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.module.Function;

/// Removes checkpoint jumps whose success BB has no [Assume] statements.
///
/// When no assumptions need to be checked, the checkpoint is useless: we inline the success BB's
/// statements and jump into the block containing the checkpoint, and remove the deopt BB.
///
/// Preconditions for removal: the success BB has no phi parameters and no other predecessors
/// (besides the checkpoint block itself).
public record ElideUnusedCheckpoints() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    boolean[] changed = {false};

    scope
        .streamCfgs()
        .forEach(
            cfg -> {
              // Reverse DFS because we delete BBs and merge successors.
              for (var bb : bbReverseDfsNoDeopts(cfg)) {
                if (!(bb.jump() instanceof Checkpoint checkpoint)) {
                  continue;
                }

                var successBb = checkpoint.success().bb();

                // Check that the success BB has no assumptions.
                boolean hasAssume =
                    successBb.statements().stream().anyMatch(s -> s.expression() instanceof Assume);
                if (hasAssume) {
                  continue;
                }

                // The success BB must have no phi parameters and only one predecessor (this
                // block). Otherwise, the CFG is malformed.
                if (!successBb.phiParameters().isEmpty() || successBb.predecessors().size() != 1) {
                  continue;
                }

                // Inline the success BB: append its statements and adopt its jump.
                bb.appendStatements(successBb.statements());
                bb.setJump(successBb.jump());

                // Remove the now-orphaned success BB.
                cfg.removeBB(successBb);

                // Remove the deopt BB if it has no remaining predecessors.
                var deoptBb = checkpoint.deopt().bb();
                if (deoptBb.predecessors().isEmpty()) {
                  cfg.removeBB(deoptBb);
                }

                changed[0] = true;
              }
            });

    return changed[0];
  }
}
