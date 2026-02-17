package org.prlprg.fir.opt;

import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeLoadFun;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Merge a [LoadFun] with [Env#LOCAL] and an [AssumeFunction] into an [AssumeLoadFun].
///
/// Looks for: checkpoint1 → success BB with (assumptions*, `LoadFun(LOCAL)`, ..., checkpoint2)
/// → success BB with (assumptions*, `AssumeFunction` targeting `LoadFun`'s register).
///
/// Then inserts an `AssumeLoadFun` after checkpoint1, replaces the `LoadFun` with [Closure],
/// and deletes the `AssumeFunction`.
///
/// It also does cleanup (removes the `LoadFun` instead of replacing if the only use was the
/// `AssumeFunction`, and actually deletes the `AssumeFunction` instead of replacing with a
/// no-op), because this is typically the last optimization in a sequence; otherwise, either the
/// sequence would often run an extra iteration because the cleanup would trigger, or (if the
/// sequence doesn't rerun, e.g. because it ran out of fuel) we'd have unoptimized, ugly final
/// code.
public record MergeAssumeLoadFun() implements AbstractionOptimization {
  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    boolean[] changed = {false};
    var defUses = new DefUses(scope);

    scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .forEach(
            bb -> {
              // Find `checkpoint1`...
              if (!(bb.jump() instanceof Checkpoint checkpoint1)) {
                return;
              }

              // ...followed by zero-or-more assumptions, then `LoadFun(LOCAL)`...
              var bb1 = checkpoint1.success().bb();
              int loadFunIndex = -1;
              Register loadFunAssignee = null;
              NamedVariable loadFunVariable = null;
              for (int i = 0; i < bb1.statements().size(); i++) {
                var stmt = bb1.statements().get(i);
                if (stmt.expression() instanceof Assume) {
                  continue;
                } else if (stmt.expression() instanceof LoadFun(var variable, var env)
                    && env == Env.LOCAL) {
                  loadFunIndex = i;
                  loadFunAssignee = stmt.assignee();
                  loadFunVariable = variable;
                  break;
                }

                // Encountered non-assume, non-LoadFun(LOCAL)
                return;
              }

              // ...followed by a checkpoint...
              if (loadFunIndex != bb1.statements().size() - 1
                  || !(bb1.jump() instanceof Checkpoint checkpoint2)) {
                return;
              }
              var bb2 = checkpoint2.success().bb();

              // ...followed by zero-or-more assumptions,
              // then `AssumeFunction` targeting `LoadFun`'s register
              int assumeFunctionIndex = -1;
              Function assumedFunction = null;
              for (int i = 0; i < bb2.statements().size(); i++) {
                var stmt = bb2.statements().get(i);
                if (stmt.expression() instanceof AssumeFunction af
                    && af.target() instanceof Read(var assumeFunctionTarget)
                    && assumeFunctionTarget.equals(loadFunAssignee)) {
                  assumeFunctionIndex = i;
                  assumedFunction = af.function();
                  break;
                }
              }
              if (assumeFunctionIndex == -1) {
                return;
              }

              var mergedAssume = new AssumeLoadFun(loadFunVariable, assumedFunction);
              if (defUses.uses(loadFunAssignee).size() == 1) {
                // Effectively insert `AssumeLoadFun` after `checkpoint1` and delete `LoadFun`,
                // by replacing `LoadFun` (first non-assume) with `AssumeLoadFun` (last assume)
                bb1.replaceStatementAt(loadFunIndex, new Statement(mergedAssume));

                // Remove now unused register from scope
                scope.removeLocal(loadFunAssignee);
              } else {
                // Insert `AssumeLoadFun` after `checkpoint1`
                bb1.insertStatement(loadFunIndex, new Statement(mergedAssume));

                // Replace `LoadFun` with `Closure`
                bb1.replaceStatementAt(
                    loadFunIndex + 1, new Statement(new Closure(assumedFunction)));
              }

              // Delete `AssumeFunction` from second success BB
              bb2.removeStatementAt(assumeFunctionIndex);

              // We don't need to recompute `DefUses` or otherwise change iteration, because
              // none of the above modifications affect how we use `DefUses` or our other operations
              changed[0] = true;
            });

    return changed[0];
  }
}
