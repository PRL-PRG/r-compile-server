package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;

/// Makes a static call use a version that's equivalent except that it *owns* some of its vector
/// parameters, by `dup`ping those arguments into owned registers and `consume`ing them (so they're
/// fresh, which is what an owned parameter takes).
///
/// A version that owns a vector can mutate it instead of copying it, which is usually a better
/// trade than the copy this inserts: the `dup` is often removed afterwards, because the argument is
/// itself an owned vector that isn't used again (see [ConsumeDeadDup] and [ElideConsumedDup]).
public record CallOwnedVersion() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;
    for (var cfg : scope.streamCfgs().toList()) {
      for (var bb : cfg.bbs()) {
        // Copy, because `run` inserts the `dup`s into `bb`.
        for (var statement : List.copyOf(bb.statements())) {
          changed |= run(scope, statement);
        }
      }
    }
    return changed;
  }

  private boolean run(Abstraction scope, Statement statement) {
    if (!(statement.expression() instanceof Call(StaticFnCallee callee))) {
      return false;
    }
    var calleeFun = callee.function();
    var version = callee.exactVersion();
    if (version == null) {
      // Dynamic or dispatch call: we don't know which version runs.
      return false;
    }
    var owned = ownedVersion(calleeFun, version);
    if (owned == null) {
      return false;
    }
    // Otherwise the call would still dispatch to another version, and this would keep inserting
    // `dup`s without ever reaching a fixpoint.
    if (calleeFun.guess(owned.signature()) != owned) {
      return false;
    }

    // Collect the arguments to `dup` (those whose parameter became owned and that aren't already
    // fresh), bailing out if any of them can't be, so this either applies fully or not at all.
    var parameterTypes = version.signature().parameterTypes();
    if (statement.argCount() != parameterTypes.size() + 1) {
      // Malformed call, don't touch it.
      return false;
    }
    var ownedParameterTypes = owned.signature().parameterTypes();
    var toDup = new ArrayList<Integer>();
    for (var i = 0; i < parameterTypes.size(); i++) {
      if (ownedParameterTypes.get(i).ownership() == parameterTypes.get(i).ownership()) {
        continue;
      }

      // The call's arguments follow the callee's own argument (index 0).
      var argumentType = scope.typeOf(statement.arg(i + 1));
      if (argumentType.ownership() == Ownership.FRESH) {
        // Already fresh, so it can be passed to the owned parameter as-is.
        continue;
      }
      if (!isOwnableVector(argumentType)) {
        return false;
      }
      toDup.add(i + 1);
    }

    for (var argIndex : toDup) {
      var argument = statement.arg(argIndex);
      var argumentVariable = argument.variable();
      var dup = new Statement(new Dup(), List.of(argument));
      var duplicate =
          dup.setAssignee(
              scope.freshName(
                  argumentVariable == null ? Register.DEFAULT_NAME : argumentVariable.name()),
              scope.typeOf(argument).withOwnership(Ownership.OWNED));
      dup.insertBefore(statement);
      statement.setArg(argIndex, new Consume(duplicate));
    }
    statement.setExpression(new Call(new StaticFnCallee(calleeFun, false, owned.signature())));
    return true;
  }

  /// The best version of `function` that's equivalent to `version` except that it owns more of its
  /// vector parameters, or `null` if there is none.
  private static @Nullable Abstraction ownedVersion(Function function, Abstraction version) {
    return function.versions().stream()
        .filter(other -> other != version && isOwnedVariantOf(other, version))
        .findFirst()
        .orElse(null);
  }

  /// Whether `owned` has the same parameters as `version` except that at least one vector parameter
  /// is owned where `version`'s isn't, and its effects and return are no worse.
  private static boolean isOwnedVariantOf(Abstraction owned, Abstraction version) {
    var ownedSignature = owned.signature();
    var signature = version.signature();
    if (ownedSignature.parameterTypes().size() != signature.parameterTypes().size()
        || !ownedSignature.hasNarrowerPostconditions(signature)) {
      return false;
    }

    var anyOwned = false;
    for (var i = 0; i < signature.parameterTypes().size(); i++) {
      var parameterType = signature.parameterTypes().get(i);
      var ownedParameterType = ownedSignature.parameterTypes().get(i);
      if (ownedParameterType.equals(parameterType)) {
        continue;
      }
      if (parameterType.ownership() != Ownership.OWNED
          && isOwnableVector(parameterType)
          && ownedParameterType.equals(parameterType.withOwnership(Ownership.OWNED))) {
        anyOwned = true;
        continue;
      }
      return false;
    }
    return anyOwned;
  }

  private static boolean isOwnableVector(Type type) {
    return type.isValue() && type.kind().isWellFormedWithOwnership();
  }
}
