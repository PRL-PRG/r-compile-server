package org.prlprg.fir.opt;

import java.util.LinkedHashSet;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness.EnvRange;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.iterator.InstructionDfs;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;

/// Removes unnecessary environments: those whose range contains no [Store] (nor super-store)
/// nor reflective instructions (ignoring deopt branches).
public record ElideEnv() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var cfg = scope.cfg();
    if (cfg == null) {
      return false;
    }

    var liveness = new EnvironmentLiveness(scope);
    var inferEffects = new InferEffects(scope);
    var changed = false;

    for (var range : liveness.allEnvs()) {
      if (range.mk().bb().jump() instanceof Deopt) {
        continue;
      }
      var result = analyze(range, inferEffects);
      if (!result.canElide) {
        continue;
      }
      elide(range, result.deoptBBs);
      changed = true;
    }

    return changed;
  }

  private record AnalysisResult(boolean canElide, Set<BB> deoptBBs) {}

  private AnalysisResult analyze(EnvRange range, InferEffects inferEffects) {
    var mkPos = range.mk();
    var popPoss = range.pops();
    var deoptBBs = new LinkedHashSet<BB>();

    var dfs = new InstructionDfs(mkPos.bb(), mkPos.instructionIndex());

    while (dfs.hasNext()) {
      var instruction = dfs.next();
      var bb = dfs.bb();
      var idx = dfs.instructionIndex();

      // Check if we entered a deopt branch.
      // If so, remember and prune (don't iterate past it)
      // (prune means we won't iterate another instruction in the branch,
      //  so checking that we're *in* a deopt branch is equivalent)
      if (bb.jump() instanceof Deopt) {
        deoptBBs.add(bb);
        dfs.prune();
        continue;
      }

      // If this is a pop position, prune (don't iterate past it)
      if (popPoss.contains(new CfgPosition(bb, idx))) {
        dfs.prune();
        continue;
      }

      // Check if this instruction requires an environment
      if (instruction instanceof Statement(var _, var _, var expr)
          && (expr instanceof Store || inferEffects.of(expr).reflect())) {
        return new AnalysisResult(false, Set.of());
      }
    }

    return new AnalysisResult(true, deoptBBs);
  }

  private static void elide(EnvRange range, Set<BB> deoptBBs) {
    // Replace mk and pops with NOOP
    range.mk().replaceWith(new Noop());
    for (var pop : range.pops()) {
      pop.replaceWith(new Noop());
    }

    // Prepend MkEnv to deopt branches
    for (var bb : deoptBBs) {
      bb.insertStatement(0, new Statement(new MkEnv()));
    }
  }
}
