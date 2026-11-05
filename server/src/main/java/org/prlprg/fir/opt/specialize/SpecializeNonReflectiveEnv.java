package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.sexp.RegSymSXP;

/// Optimization that marks [MkEnv]s as [MkEnvType#NON_REFLECTIVE] when feedback indicates their
/// environments were never reflectively accessed.
///
/// `threshold` is the minimum number of recorded calls for the absence of a reflective access to
/// be trusted: this speculation isn't guarded by a checkpoint (a wrong speculation crashes at
/// runtime instead of deoptimizing), so we only speculate on versions that were profiled enough.
///
/// Feedback doesn't see into an opaque callee: a dynamic callee, or a GNU-R base closure. Such a
/// callee may call `missing` on a promise of a symbol, and GNU-R then reads the symbol's binding
/// in the promise's environment (a reflective access). So an environment whose version passes a
/// promise of a symbol to an opaque callee is never marked.
public record SpecializeNonReflectiveEnv(int threshold) implements SpecializeOptimization {
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
    if (!(statement.expression() instanceof MkEnv(var type)) || type != MkEnvType.REGULAR) {
      return Result.UNCHANGED;
    }

    // Only specialize if we have feedback that specifies this env wasn't reflectively accessed.
    // Without enough recorded calls, the absence of a reflective access isn't reliable.
    if (feedback.numCalls() < threshold || feedback.reflectiveEnvs.contains(statement)) {
      return Result.UNCHANGED;
    }

    if (scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(b -> b.statements().stream())
        .anyMatch(SpecializeNonReflectiveEnv::passesSymbolPromiseToOpaqueCallee)) {
      return Result.UNCHANGED;
    }

    return new Result.SetExpression(new MkEnv(MkEnvType.NON_REFLECTIVE));
  }

  private static boolean passesSymbolPromiseToOpaqueCallee(Statement statement) {
    return statement.expression() instanceof Call(var callee)
        && isOpaque(callee)
        && statement.args().stream()
            .skip(1)
            .anyMatch(SpecializeNonReflectiveEnv::isOrHasSymbolPromise);
  }

  private static boolean isOpaque(Callee callee) {
    return switch (callee) {
      case DynamicCallee _ -> true;
      case StaticFnCallee c -> GlobalModules.isBaseClosure(c.function());
      default -> false;
    };
  }

  /// Whether `arg` is a promise of a symbol, or a vector (e.g. `...`) with one.
  private static boolean isOrHasSymbolPromise(Argument arg) {
    if (!(arg.variable() instanceof AssigneeOf assignee)) {
      return false;
    }
    var definition = assignee.statement();
    return switch (definition.expression()) {
      case Promise promise -> promise.expr() instanceof RegSymSXP;
      case MkVector _ ->
          definition.args().stream().anyMatch(SpecializeNonReflectiveEnv::isOrHasSymbolPromise);
      default -> false;
    };
  }
}
