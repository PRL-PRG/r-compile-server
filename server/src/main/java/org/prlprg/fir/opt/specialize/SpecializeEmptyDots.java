package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BASE;
import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.ArrayList;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.sexp.SEXPs;

/// Optimization that passes an empty `...` to a builtin as the missing value instead of an empty
/// `dots` vector.
///
/// The two are the same argument: R itself binds `...` to `R_MissingArg` when there's nothing in it
/// (which is why reading it back needs the "missing means empty" fixup in `fir2c`'s
/// dispatch-from-R). But only `miss` is *statically* empty: it's a subtype of `dots` and not the
/// reverse, so a call passing `dots[]` can only ever reach the version taking `dots`, which for a
/// builtin is the generic reflective one. Passing `<missing>` is what lets [OptimizeCallee] reach
/// the versions declared with `reg ddd:miss`, e.g. `[<-`'s.
///
/// Only rewritten where some version of the callee declares that parameter `miss`, which is the
/// builtin's own statement that the argument may be absent -- `c()`'s empty `...` is an empty
/// vector, and `c(<missing>)` is an error. And only for builtins and intrinsics: a FIŘ version
/// compiled from an R closure reads its `...` back out of the environment, where the empty `dots`
/// vector is the representation its body expects.
public record SpecializeEmptyDots() implements SpecializeOptimization {
  private static final Constant MISSING = new Constant(SEXPs.MISSING_ARG);

  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
    if (!(statement.expression() instanceof Call(StaticFnCallee callee))) {
      return Result.UNCHANGED;
    }
    var owner = callee.function().owner();
    if (owner != BUILTINS && owner != BASE && owner != INTRINSICS) {
      return Result.UNCHANGED;
    }

    // The call's arguments follow the callee's own argument (index 0).
    var newArgs = new ArrayList<>(statement.args());
    var changed = false;
    for (var i = 1; i < newArgs.size(); i++) {
      if (isEmptyDots(newArgs.get(i)) && takesMissing(callee.function(), i - 1)) {
        newArgs.set(i, MISSING);
        changed = true;
      }
    }
    if (!changed) {
      return Result.UNCHANGED;
    }

    // The now-unused `dots[]` is a pure statement, so `Cleanup` removes it.
    return new Result.Replace(statement.expression(), newArgs);
  }

  /// Whether some version of `function` declares its `parameterIndex`-th parameter `miss`.
  private static boolean takesMissing(Function function, int parameterIndex) {
    return function.versions().stream()
        .map(Abstraction::signature)
        .anyMatch(
            signature ->
                parameterIndex < signature.parameterTypes().size()
                    && signature.parameterTypes().get(parameterIndex).equals(Type.MISSING));
  }

  private static boolean isEmptyDots(Argument argument) {
    return argument instanceof Read(AssigneeOf assignee)
        && assignee.statement().expression() instanceof MkVector(Kind.Dots _, _)
        && assignee.statement().argCount() == 0;
  }
}
