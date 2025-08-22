package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.fir.feedback.Feedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.util.Lists;
import org.prlprg.util.OptionalFunction;
import org.prlprg.util.Streams;

/// Optimization pass that replaces every dispatch and static callee with a better one.
///
/// Specifically, for each dispatch and static call:
/// - Looks up the best version of the called function that accepts with the arguments' static
///   types [Function#guess(Signature)].
/// - If such a version exists, check if the function has a better version that can be called if
///   an argument has a more specific runtime type, *and* that type was recorded enough times.
///   - If so, convert into a dispatch call with the guessed (not better) version's signature.
///   - If not, convert into a static call to the guessed version.
public record OptimizeCallee(OptionalFunction<Abstraction, Feedback> getFeedback, int threshold)
    implements Optimization {
  @Override
  public void run(Function function, Abstraction version) {
    version
        .streamScopes()
        .forEach(
            abstraction -> {
              var feedback = getFeedback.apply(abstraction);
              if (feedback == null) {
                return;
              }

              new OnAbstraction(abstraction, feedback).run();
            });
  }

  private class OnAbstraction {
    final Abstraction scope;
    final Feedback feedback;

    OnAbstraction(Abstraction scope, Feedback feedback) {
      this.scope = scope;
      this.feedback = feedback;
    }

    void run() {
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var oldStmt = bb.statements().get(i);
                    var newStmt = run(oldStmt);
                    if (newStmt != null) {
                      bb.replaceStatementAt(i, newStmt);
                    }
                  }
                }
              });
    }

    @Nullable Statement run(Statement statement) {
      if (!(statement.expression() instanceof Call call)) {
        return null;
      }

      var newCallee =
          switch (call.callee()) {
            case DispatchCallee(var function, var signature) ->
                run(call.callArguments(), function, signature);
            case StaticCallee(var function, var version) ->
                run(call.callArguments(), function, version.signature());
            default -> null;
          };
      if (newCallee == null) {
        return null;
      }

      return new Statement(statement.assignee(), new Call(newCallee, call.callArguments()));
    }

    @Nullable Callee run(
        List<Argument> callArguments, Function callFunction, @Nullable Signature oldSignature) {
      // Get static types of the call arguments.
      if (callArguments.stream().anyMatch(arg -> scope.typeOf(arg) == null)) {
        // An argument is malformed.
        return null;
      }
      var argumentTypes = Lists.mapLazy(callArguments, scope::typeOf);

      // Create best signature that can be called with these argument types.
      var bestSignature =
          new Signature(
              ImmutableList.copyOf(argumentTypes),
              oldSignature == null ? Type.ANY_VALUE : oldSignature.returnType(),
              oldSignature == null ? Effects.ANY : oldSignature.effects());
      if (bestSignature.equals(oldSignature)) {
        // No improvement.
        return null;
      }

      // Look up best version that can be called with this signature.
      var bestVersion = callFunction.guess(bestSignature);
      if (bestVersion == null) {
        // No version, so can't improve.
        return null;
      }

      // Check if there are better versions that can be called with recorded runtime types.
      var isBestAtRuntime =
          callFunction.versionsSorted().headSet(bestVersion).stream()
              .noneMatch(
                  better -> {
                    var betterSignature = better.signature();
                    return betterSignature.hasNarrowerParameters(bestSignature)
                        && Streams.zip(
                                betterSignature.parameterTypes().stream(),
                                callArguments.stream(),
                                (parameterType, argument) ->
                                    switch (argument) {
                                      case Constant(var constant) ->
                                          Type.of(constant).isSubtypeOf(parameterType);
                                      case Read(var _), Use(var _) -> {
                                        var register = Objects.requireNonNull(argument.variable());
                                        yield feedback
                                            .type(register)
                                            .streamHits(threshold, parameterType)
                                            .findAny()
                                            .isPresent();
                                      }
                                    })
                            .allMatch(b -> b);
                  });
      if (isBestAtRuntime) {
        return new StaticCallee(callFunction, bestVersion);
      }

      // Improve best signature: keep the better precondition from `argumentTypes`, but add
      // the postcondition from `bestVersion`.
      var bestSignature1 =
          new Signature(
              ImmutableList.copyOf(argumentTypes),
              bestVersion.signature().returnType(),
              bestVersion.signature().effects());

      return new DispatchCallee(callFunction, bestSignature1);
    }
  }
}
