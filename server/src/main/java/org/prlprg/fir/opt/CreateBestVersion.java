package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.util.Lists;
import org.prlprg.util.Streams;

/// If there's a call whose best guaranteed version
/// ([Function#guess(org.prlprg.fir.ir.type.Signature)]) does not exactly match its arguments'
/// static types, copy that version into a new one and narrow the parameter types to match
public final class CreateBestVersion extends AbstractionOptimization {
  private final int versionLimit;

  public CreateBestVersion(int versionLimit) {
    this.versionLimit = versionLimit;
  }

  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction version) {
    var callStatements =
        version
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .filter(s -> s.expression() instanceof Call)
            .toList();
    boolean[] changed = {false};
    callStatements.forEach(stmt -> changed[0] |= run(topLevel, feedback, version, stmt));
    return changed[0];
  }

  private boolean run(
      Optimization topLevel, AbstractionFeedback feedback, Abstraction scope, Statement statement) {
    if (!(statement.expression() instanceof Call call)
        || !(call.callee() instanceof StaticFnCallee callee)) {
      // We can't optimize dynamic calls
      return false;
    }
    var calleeFun = callee.function();
    if (calleeFun.versions().size() >= versionLimit) {
      // To many versions, don't create a new one
      return false;
    }

    // Call arguments follow the callee's own argument (index 0).
    var callArguments = statement.args().subList(1, statement.argCount());
    if (callArguments.stream().anyMatch(a -> scope.typeOf(a) == null)) {
      // Invalid, null type
      return false;
    }
    // A read of an owned register only lends it, so it can only be passed as borrowed.
    var argumentTypes =
        ImmutableList.copyOf(
            Lists.mapStrict(
                callArguments,
                a -> {
                  var type = Objects.requireNonNull(scope.typeOf(a));
                  return type.ownership() == Ownership.OWNED
                      ? type.withOwnership(Ownership.BORROWED)
                      : type;
                }));

    var bestSignature = OptimizeCallee.bestSignature(callee, argumentTypes);
    var bestVersion = calleeFun.guess(bestSignature);
    if (bestVersion == null) {
      // Invalid, there should always be a possible version
      return false;
    }
    // A parameter can't be fresh, so a fresh argument's parameter keeps its ownership. Making it
    // owned is `CreateOwnedParameterVersion`'s job.
    var parameterTypes =
        Streams.zip(
                argumentTypes.stream(),
                bestVersion.signature().parameterTypes().stream(),
                (argumentType, parameterType) ->
                    argumentType.ownership() == Ownership.FRESH
                        ? argumentType.withOwnership(parameterType.ownership())
                        : argumentType)
            .collect(ImmutableList.toImmutableList());
    if (bestVersion.isStub() || bestVersion.signature().parameterTypes().equals(parameterTypes)) {
      // Stub or already best parameter types = we can't further optimize the version
      return false;
    }

    // Create a new version with the exact parameter types
    LazyCopy.create(topLevel, this, feedback.module(), calleeFun, bestVersion, parameterTypes);
    return true;
  }
}
