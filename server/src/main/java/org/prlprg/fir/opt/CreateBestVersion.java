package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.jspecify.annotations.NonNull;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.opt.specialize.OptimizeCallee;

/// If there's a call whose best guaranteed version
/// ([Function#guess(org.prlprg.fir.ir.type.Signature)]) does not exactly match its arguments'
/// static types, copy that version into a new one and narrow the parameter types to match
public record CreateBestVersion(int versionLimit) implements Optimization {
  @Override
  public boolean run(ModuleFeedback feedback, Function function) {
    // Copy `version` because we may modify it.
    var changed = false;
    for (var version : List.copyOf(function.versions())) {
      changed |= run(feedback, version);
    }
    return changed;
  }

  private boolean run(ModuleFeedback feedback, Abstraction version) {
    var calls =
        version
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .map(Statement::expression)
            .filter(e -> e instanceof Call)
            .map(Call.class::cast);
    boolean[] changed = {false};
    calls.forEach(call -> changed[0] |= run(feedback, version, call));
    return changed[0];
  }

  private boolean run(ModuleFeedback feedback, Abstraction scope, Call call) {
    if (!(call.callee() instanceof StaticFnCallee callee)) {
      return false;
    }
    var calleeFun = callee.function();
    if (calleeFun.versions().size() >= versionLimit) {
      return false;
    }

    var callArguments = call.callArguments();
    var argumentTypes =
        callArguments.stream().map(scope::typeOf).collect(ImmutableList.toImmutableList());
    if (argumentTypes.contains(null)) {
      return false;
    }
    @SuppressWarnings("RedundantCast")
    var argumentTypes1 = (ImmutableList<@NonNull Type>) argumentTypes;

    var bestSignature = OptimizeCallee.bestSignature(callee, argumentTypes1);
    var bestVersion = calleeFun.guess(bestSignature);
    if (bestVersion == null) {
      // Invalid, there should always be a possible version
      return false;
    }
    if (bestVersion.isStub() || bestVersion.signature().parameterTypes().equals(argumentTypes)) {
      return false;
    }

    // Create a new version with the exact parameter types
    SpeculateDispatch.copyVersionWithNewParameterTypes(
        feedback, calleeFun, bestVersion, argumentTypes1);
    return true;
  }
}
