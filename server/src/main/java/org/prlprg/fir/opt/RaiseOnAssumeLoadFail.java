package org.prlprg.fir.opt;

import java.util.List;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.util.Strings;

/// Replaces deopts guarded by load-assumption-only checkpoints with a [Raise].
///
/// Only applies to abstractions in functions whose `userProperties().strict()` is set. For
/// every [Checkpoint] whose success BB has at least one assumption and whose assumptions are
/// all [AssumeLoadVar] or [AssumeLoadFun] (i.e. variable/function lookups), if the deopt BB
/// ends in a [Deopt] jump, this removes all other instructions in that BB and replaces the
/// [Deopt] with a [Raise] reporting the assumed variables.
public record RaiseOnAssumeLoadFail() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    if (function == null || !function.userProperties().strict()) {
      return false;
    }

    boolean[] changed = {false};

    abstraction
        .streamCfgs()
        .forEach(
            cfg -> {
              // Copy because we mutate BBs (their jumps and statements) while iterating.
              for (var bb : List.copyOf(cfg.bbs())) {
                if (!(bb.jump() instanceof Checkpoint checkpoint)) {
                  continue;
                }

                var assumptions =
                    checkpoint.success().bb().statements().stream()
                        .filter(s -> s.expression() instanceof Assume)
                        .map(s -> ((Assume) s.expression()).assumption())
                        .toList();
                if (assumptions.isEmpty()
                    || !assumptions.stream()
                        .allMatch(a -> a instanceof AssumeLoadVar || a instanceof AssumeLoadFun)) {
                  continue;
                }

                var deoptBb = checkpoint.deopt().bb();
                if (!(deoptBb.jump() instanceof Deopt)) {
                  continue;
                }

                Stream<NamedVariable> vars =
                    assumptions.stream().map(RaiseOnAssumeLoadFail::variableOf);

                deoptBb.clearStatements();
                deoptBb.setJump(
                    new Raise(
                        "Variable assumption(s) failed: " + vars.collect(Strings.joining(", "))));
                changed[0] = true;
              }
            });

    return changed[0];
  }

  private static NamedVariable variableOf(Assumption assumption) {
    return switch (assumption) {
      case AssumeLoadVar v -> v.variable();
      case AssumeLoadFun f -> f.variable();
      default -> throw new IllegalStateException("not a load assumption: " + assumption);
    };
  }
}
