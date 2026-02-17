package org.prlprg.fir.opt;

import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeLoadFun;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;

/// Merge a [LoadFun] with [Env#LOCAL] and an [AssumeFunction] into an [AssumeLoadFun].
///
/// Looks for: checkpoint1 → success BB with (assumptions*, LoadFun(LOCAL), ..., checkpoint2) →
/// success BB with (assumptions*, AssumeFunction targeting LoadFun's register).
///
/// Then inserts an [AssumeLoadFun] before checkpoint1 and deletes the LoadFun and AssumeFunction.
public record MergeAssumeLoadFun() implements AbstractionOptimization {
  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;

    for (var cfg : scope.streamCfgs().toList()) {
      // Need DefUses to check that the LoadFun register is only used by the AssumeFunction.
      var defUses = new DefUses(scope);

      // Restart iteration after each change since BB/statement indices shift.
      boolean madeChange;
      do {
        madeChange = false;

        for (var bb : cfg.bbs()) {
          if (!(bb.jump() instanceof Checkpoint firstCheckpoint)) {
            continue;
          }

          var firstSuccessBb = firstCheckpoint.success().bb();
          var match = findMatch(firstSuccessBb, defUses);
          if (match == null) {
            continue;
          }

          // Insert AssumeLoadFun before the first checkpoint (at end of preceding BB).
          var mergedAssume = new AssumeLoadFun(match.loadFunVariable, match.function);
          bb.appendStatement(new Statement(mergedAssume));

          // Delete LoadFun from first success BB.
          // Delete AssumeFunction from second success BB.
          // Delete AssumeFunction first if it's in the same BB to keep indices valid.
          if (match.secondSuccessBb == firstSuccessBb) {
            // Both in same BB (shouldn't happen with two checkpoints, but be safe).
            if (match.assumeFunctionIndex > match.loadFunIndex) {
              match.secondSuccessBb.removeStatementAt(match.assumeFunctionIndex);
              firstSuccessBb.removeStatementAt(match.loadFunIndex);
            } else {
              firstSuccessBb.removeStatementAt(match.loadFunIndex);
              match.secondSuccessBb.removeStatementAt(match.assumeFunctionIndex);
            }
          } else {
            match.secondSuccessBb.removeStatementAt(match.assumeFunctionIndex);
            firstSuccessBb.removeStatementAt(match.loadFunIndex);
          }

          // Remove unused registers from scope.
          if (match.loadFunRegister != null) {
            scope.removeLocal(match.loadFunRegister);
          }
          if (match.assumeFunctionRegister != null) {
            scope.removeLocal(match.assumeFunctionRegister);
          }

          // Recompute DefUses since we changed the CFG.
          defUses = new DefUses(scope);
          madeChange = true;
          changed = true;
          break; // Restart the BB loop.
        }
      } while (madeChange);
    }

    return changed;
  }

  private record Match(
      int loadFunIndex,
      Register loadFunRegister,
      LoadFun.Env loadFunEnv,
      BB secondSuccessBb,
      int assumeFunctionIndex,
      Register assumeFunctionRegister,
      org.prlprg.fir.ir.variable.NamedVariable loadFunVariable,
      org.prlprg.fir.ir.module.Function function) {}

  /// Find a LoadFun(LOCAL) followed by a checkpoint whose success has an AssumeFunction targeting
  /// the LoadFun's register.
  private Match findMatch(BB firstSuccessBb, DefUses defUses) {
    // Find LoadFun(LOCAL) after zero-or-more assumptions.
    int loadFunIndex = -1;
    Register loadFunRegister = null;
    LoadFun loadFun = null;

    for (int i = 0; i < firstSuccessBb.statements().size(); i++) {
      var stmt = firstSuccessBb.statements().get(i);
      if (stmt.expression() instanceof Assume) {
        continue;
      }
      if (stmt.expression() instanceof LoadFun lf && lf.env() == Env.LOCAL) {
        loadFunIndex = i;
        loadFunRegister = stmt.assignee();
        loadFun = lf;
      }
      break;
    }

    if (loadFun == null || loadFunRegister == null) {
      return null;
    }

    // The rest of firstSuccessBb after LoadFun must end with a checkpoint.
    if (!(firstSuccessBb.jump() instanceof Checkpoint secondCheckpoint)) {
      return null;
    }

    var secondSuccessBb = secondCheckpoint.success().bb();

    // Find AssumeFunction targeting LoadFun's register after zero-or-more assumptions.
    int assumeFunctionIndex = -1;
    Register assumeFunctionRegister = null;
    AssumeFunction assumeFunction = null;

    for (int i = 0; i < secondSuccessBb.statements().size(); i++) {
      var stmt = secondSuccessBb.statements().get(i);
      if (!(stmt.expression() instanceof Assume)) {
        break;
      }
      if (stmt.expression() instanceof AssumeFunction af
          && af.target() instanceof Read read
          && read.variable().equals(loadFunRegister)) {
        assumeFunctionIndex = i;
        assumeFunctionRegister = stmt.assignee();
        assumeFunction = af;
        break;
      }
    }

    if (assumeFunction == null) {
      return null;
    }

    // Check that the LoadFun register is only used by the AssumeFunction.
    var uses = defUses.uses(loadFunRegister);
    if (uses.size() != 1) {
      return null;
    }

    return new Match(
        loadFunIndex,
        loadFunRegister,
        loadFun.env(),
        secondSuccessBb,
        assumeFunctionIndex,
        assumeFunctionRegister,
        loadFun.variable(),
        assumeFunction.function());
  }
}
