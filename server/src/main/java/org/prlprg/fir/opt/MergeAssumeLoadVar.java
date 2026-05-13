package org.prlprg.fir.opt;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Merge a [Load] with [LoadType#LOCAL_FUN] and an [AssumeFunction] into an [AssumeLoadFun], or a
/// [Load] with [LoadType#LOCAL_VAR] and an [AssumeConstant] into an [AssumeLoadVar].
///
/// Looks for: checkpoint1 → success BB with (assumptions*, `Load(LOCAL_FUN/LOCAL_VAR, ...)`, ...,
/// checkpoint2) → success BB with (assumptions*, `AssumeFunction`/`AssumeConstant` targeting
/// `Load`'s register).
///
/// Then inserts an `AssumeLoadFun`/`AssumeLoadVar` after checkpoint1, replaces the `Load` with
/// [Closure]/the constant, and deletes the `AssumeFunction`/`AssumeConstant`.
///
/// Note that it does *not* combine `Load(LOCAL_FUN)` with `AssumeConstant`, nor `Load(LOCAL_VAR)`
/// with `AssumeFunction`.
///
/// It also does cleanup (removes the `Load` instead of replacing if the only use was the
/// assumption, and actually deletes the assumption instead of replacing with a no-op), because this
/// is typically the last optimization in a sequence; otherwise, either the sequence would often run
/// an extra iteration because the cleanup would trigger, or (if the sequence doesn't rerun, e.g.
/// because it ran out of fuel) we'd have unoptimized, ugly final code.
public record MergeAssumeLoadVar() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
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

              // ...followed by zero-or-more assumptions, then `Load(LOCAL_FUN)` or
              // `Load(LOCAL_VAR)`...
              var bb1 = checkpoint1.success().bb();
              int loadIndex = -1;
              Register loadAssignee = null;
              NamedVariable loadVariable = null;
              LoadType loadType = null;
              for (int i = 0; i < bb1.statements().size(); i++) {
                var stmt = bb1.statements().get(i);
                if (stmt.expression() instanceof Assume) {
                  continue;
                } else if (stmt.assignee() != null
                    && stmt.expression() instanceof Load(var type, var variable)
                    && (type == LoadType.LOCAL_FUN || type == LoadType.LOCAL_VAR)) {
                  loadIndex = i;
                  loadAssignee = stmt.assignee();
                  loadVariable = variable;
                  loadType = type;
                  break;
                }

                // Encountered non-assume, non-Load(LOCAL_FUN/LOCAL_VAR)
                return;
              }

              // ...followed by a checkpoint...
              if (loadAssignee == null || !(bb1.jump() instanceof Checkpoint checkpoint2)) {
                return;
              }
              var bb2 = checkpoint2.success().bb();

              // ...followed by zero-or-more assumptions, then `AssumeFunction`/`AssumeConstant`
              // targeting `Load`'s register (only `AssumeFunction` for `LOCAL_FUN`, only
              // `AssumeConstant` for `LOCAL_VAR`)
              int assumeIndex = -1;
              Assumption mergedAssumption = null;
              Expression loadReplacement = null;
              for (int i = 0; i < bb2.statements().size(); i++) {
                if (!(bb2.statements().get(i).expression() instanceof Assume(var assumption))) {
                  continue;
                }
                if (loadType == LoadType.LOCAL_FUN
                    && assumption instanceof AssumeFunction(var target, var functionRef)
                    && target instanceof Read(var assumeTarget)
                    && assumeTarget.equals(loadAssignee)) {
                  assumeIndex = i;
                  mergedAssumption = new AssumeLoadFun(loadVariable, functionRef);
                  loadReplacement = new Closure(true, functionRef);
                  break;
                }
                if (loadType == LoadType.LOCAL_VAR
                    && assumption instanceof AssumeConstant(var target, var constant)
                    && target instanceof Read(var assumeTarget)
                    && assumeTarget.equals(loadAssignee)) {
                  assumeIndex = i;
                  mergedAssumption = new AssumeLoadVar(loadVariable, constant);
                  loadReplacement = new Aea(new Constant(constant));
                  break;
                }
              }
              if (assumeIndex == -1) {
                return;
              }

              var mergedAssume = new Statement(new Assume(mergedAssumption));
              if (defUses.uses(loadAssignee).size() == 1) {
                // Effectively insert the merged assume after `checkpoint1` and delete `Load`,
                // by replacing `Load` (first non-assume) with the merged assume (last assume)
                bb1.replaceStatementAt(loadIndex, mergedAssume);

                // Remove now unused register from scope
                scope.removeLocal(loadAssignee);
              } else {
                // Insert the merged assume after `checkpoint1`
                bb1.insertStatement(loadIndex, mergedAssume);

                // Replace `Load` with `Closure`/the constant
                bb1.replaceStatementAt(loadIndex + 1, new Statement(loadReplacement));
              }

              // Delete `AssumeFunction`/`AssumeConstant` from second success BB
              bb2.removeStatementAt(assumeIndex);

              // We don't need to recompute `DefUses` or otherwise change iteration, because
              // none of the above modifications affect how we use `DefUses` or our other operations
              changed[0] = true;
            });

    return changed[0];
  }
}
