package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness.EnvRange;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.iterator.InstructionDfs;

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
  public Result run(
      BB bb,
      int index,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(statement.expression() instanceof MkEnv(var type)) || type == MkEnvType.ELIDED) {
      return Result.UNCHANGED;
    }

    // Can't elide an environment created right before a deopt.
    if (bb.jump().expression() instanceof Deopt) {
      return Result.UNCHANGED;
    }

    var range = analyses.get(EnvironmentLiveness.class).rangeAt(statement);
    if (range == null) {
      return Result.UNCHANGED;
    }

    // A non-reflective environment is guaranteed (by feedback, via [SpecializeNonReflectiveEnv]) to
    // never be reflectively accessed, so reflective instructions in its range provably don't touch
    // it and don't prevent eliding it. A regular environment may still be reflectively accessed.
    var ignoreReflection = type == MkEnvType.NON_REFLECTIVE;

    if (!canElide(range, analyses.get(InferEffects.class), ignoreReflection)) {
      return Result.UNCHANGED;
    }

    return new Result.SetExpression(new MkEnv(MkEnvType.ELIDED));
  }

  private static boolean canElide(
      EnvRange range, InferEffects inferEffects, boolean ignoreReflection) {
    var mkPos = range.mk();
    var popPoss = range.pops();

    var dfs = new InstructionDfs(mkPos.parentBB(), mkPos.indexInBB());

    while (dfs.hasNext()) {
      var instruction = dfs.next();
      var bb = dfs.bb();

      // Entered a deopt branch: the deopt re-creates the environment on demand, so prune and
      // ignore (prune means we won't iterate another instruction in the branch, so checking that
      // we're *in* a deopt branch is equivalent).
      if (bb.jump().expression() instanceof Deopt) {
        dfs.prune();
        continue;
      }

      // Reached the end of the environment's range, so prune (don't iterate past it).
      if (instruction instanceof Statement s && popPoss.contains(s)) {
        dfs.prune();
        continue;
      }

      // Check if this instruction requires a materialized environment. Any store (local or super)
      // needs it: a local store binds in the environment, and a super-store starts its search from
      // the environment's parent, so both observe whether the environment is materialized.
      if (instruction instanceof Statement stmt
          && (stmt.expression() instanceof Store
              || (!ignoreReflection && inferEffects.of(stmt).reflect()))) {
        return false;
      }

      // A promise created here captures this environment and runs its body in it whenever it's
      // forced -- which the DFS doesn't walk into, and which may not even happen within the range.
      // So a promise that stores has to block elision just like a store here would.
      if (instruction instanceof Statement stmt
          && stmt.expression() instanceof Promise(_, _, var code, _)
          && needsMaterializedEnv(code, inferEffects, ignoreReflection)) {
        return false;
      }
    }

    return true;
  }

  /// Whether running `code` would observe whether the enclosing environment is materialized, i.e.
  /// it stores into it (or reflects on it), directly or from a promise of its own.
  private static boolean needsMaterializedEnv(
      CFG code, InferEffects inferEffects, boolean ignoreReflection) {
    return code.bbs().stream()
        .flatMap(bb -> bb.statements().stream())
        .anyMatch(
            stmt ->
                switch (stmt.expression()) {
                  case Store _ -> true;
                  case Promise(_, _, var nested, _) ->
                      needsMaterializedEnv(nested, inferEffects, ignoreReflection);
                  // `MkEnv` shadows this environment for the rest of the promise, but stores
                  // before it (and super-stores after) still reach here, so don't try to be
                  // clever -- the check above already covers them.
                  default -> !ignoreReflection && inferEffects.of(stmt).reflect();
                });
  }
}
