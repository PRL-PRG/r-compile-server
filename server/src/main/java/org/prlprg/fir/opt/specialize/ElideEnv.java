package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness.EnvRange;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.iterator.InstructionDfs;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// Marks unnecessary environments as [MkEnvType#ELIDED]: those whose range contains no [Store]
/// (nor super-store) nor reflective instructions (ignoring deopt branches).
///
/// An elided environment isn't materialized; deopt branches re-create it on demand, so unlike a
/// regular environment its [PopEnv][org.prlprg.fir.ir.expression.PopEnv] stays in place.
public record ElideEnv() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(EnvironmentLiveness.class, InferEffects.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof MkEnv(var type)) || type == MkEnvType.ELIDED) {
      return expression;
    }

    // Can't elide an environment created right before a deopt.
    if (bb.jump() instanceof Deopt) {
      return expression;
    }

    var range = analyses.get(EnvironmentLiveness.class).rangeAt(new CfgPosition(bb, index));
    if (range == null) {
      return expression;
    }

    // A non-reflective environment is guaranteed (by feedback, via [SpecializeNonReflectiveEnv]) to
    // never be reflectively accessed, so reflective instructions in its range provably don't touch
    // it and don't prevent eliding it. A regular environment may still be reflectively accessed.
    var ignoreReflection = type == MkEnvType.NON_REFLECTIVE;

    if (!canElide(range, analyses.get(InferEffects.class), ignoreReflection)) {
      return expression;
    }

    return new MkEnv(MkEnvType.ELIDED);
  }

  private static boolean canElide(
      EnvRange range, InferEffects inferEffects, boolean ignoreReflection) {
    var mkPos = range.mk();
    var popPoss = range.pops();

    var dfs = new InstructionDfs(mkPos.bb(), mkPos.instructionIndex());

    while (dfs.hasNext()) {
      var instruction = dfs.next();
      var bb = dfs.bb();
      var idx = dfs.instructionIndex();

      // Entered a deopt branch: the deopt re-creates the environment on demand, so prune and
      // ignore (prune means we won't iterate another instruction in the branch, so checking that
      // we're *in* a deopt branch is equivalent).
      if (bb.jump() instanceof Deopt) {
        dfs.prune();
        continue;
      }

      // Reached the end of the environment's range, so prune (don't iterate past it).
      if (popPoss.contains(new CfgPosition(bb, idx))) {
        dfs.prune();
        continue;
      }

      // Check if this instruction requires a materialized environment.
      if (instruction instanceof Statement(var _, var _, var expr)
          && (expr instanceof Store || (!ignoreReflection && inferEffects.of(expr).reflect()))) {
        return false;
      }
    }

    return true;
  }
}
