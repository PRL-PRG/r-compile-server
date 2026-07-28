package org.prlprg.fir.opt;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.expression.Assume;
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
/// Then inserts an `AssumeLoadFun`/`AssumeLoadVar` after checkpoint1, deletes the `Load` and
/// `AssumeFunction`/`AssumeConstant`, and replaces `Load` uses with the assumed value.
///
/// Note that it does *not* combine `Load(LOCAL_FUN)` with `AssumeConstant`, nor `Load(LOCAL_VAR)`
/// with `AssumeFunction`.
public record MergeAssumeLoadVar() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    boolean[] changed = {false};
    var substs = new Substituter(scope);

    scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .forEach(
            bb -> {
              // Find `checkpoint1`...
              if (!(bb.jump().expression() instanceof Checkpoint checkpoint1)) {
                return;
              }

              // ...followed by zero-or-more assumptions, then `Load(LOCAL_FUN)` or
              // `Load(LOCAL_VAR)`...
              var bb1 = checkpoint1.success().get();
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
              if (loadAssignee == null
                  || !(bb1.jump().expression() instanceof Checkpoint checkpoint2)) {
                return;
              }
              var bb2 = checkpoint2.success().get();

              // ...followed by zero-or-more assumptions, then `AssumeFunction`/`AssumeConstant`
              // targeting `Load`'s register (only `AssumeFunction` for `LOCAL_FUN`, only
              // `AssumeConstant` for `LOCAL_VAR`). The target is the assume statement's argument.
              Statement matchedAssume = null;
              Assumption mergedAssumption = null;
              for (var assumeStmt : bb2.statements()) {
                if (!(assumeStmt.expression() instanceof Assume(var assumption))) {
                  continue;
                }
                if (loadType == LoadType.LOCAL_FUN
                    && assumption instanceof AssumeFunction(var functionRef)
                    && assumeStmt.arg(0) instanceof Read(var assumeTarget)
                    && assumeTarget.equals(loadAssignee)) {
                  matchedAssume = assumeStmt;
                  mergedAssumption = new AssumeLoadFun(loadVariable, functionRef);
                  break;
                }
                if (loadType == LoadType.LOCAL_VAR
                    && assumption instanceof AssumeConstant(var constant)
                    && assumeStmt.arg(0) instanceof Read(var assumeTarget)
                    && assumeTarget.equals(loadAssignee)) {
                  matchedAssume = assumeStmt;
                  mergedAssumption = new AssumeLoadVar(loadVariable, constant);
                  break;
                }
              }
              if (matchedAssume == null) {
                return;
              }

              // Build the merged assume (no target argument: load-based assumptions read by name).
              var mergedStmt = new Statement(new Assume(mergedAssumption), List.of());
              Argument loadReplacement;
              if (loadType == LoadType.LOCAL_FUN) {
                // `AssumeLoadFun` produces the loaded function; carry over the old assume's result.
                if (matchedAssume.assignee() != null) {
                  var mergedAssignee =
                      mergedStmt.setAssignee(
                          matchedAssume.assignee().name(), matchedAssume.assignee().type());
                  matchedAssume.assignee().substUsesWith(new Read(mergedAssignee));
                  loadReplacement = new Read(mergedAssignee);
                } else {
                  loadReplacement = Constant.ELIDED_CLOSURE;
                }
              } else {
                // `AssumeLoadVar` produces no value; the load resolves to the constant.
                loadReplacement = new Constant(((AssumeLoadVar) mergedAssumption).constant());
              }

              // Substitute load uses with the assumed value (stage while the `Load` is still in the
              // CFG so the substituter accepts its register).
              substs.stage(loadAssignee, loadReplacement);

              // Delete the old `AssumeFunction`/`AssumeConstant`, then replace the `Load` with the
              // merged assume (effectively moving it after `checkpoint1`).
              matchedAssume.remove();
              bb1.statements().get(loadIndex).replaceWith(mergedStmt);

              changed[0] = true;
            });

    return changed[0];
  }
}
