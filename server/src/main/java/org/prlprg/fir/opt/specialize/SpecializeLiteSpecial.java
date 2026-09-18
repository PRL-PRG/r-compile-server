package org.prlprg.fir.opt.specialize;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;

/// Optimization that makes a call to a [lite
/// special][org.prlprg.fir.ir.properties.FunctionUserProperties#liteSpecial()] take the *values* of
/// its symbol arguments, so it can dispatch to a version that isn't the baseline.
///
/// A lite special is passed literal AST: `x[i]` passes the symbols `x` and `i`, and only the
/// reflective baseline understands them — it evaluates them in the caller's environment, like
/// GNU-R's `do_subset`. Every other version takes the values that evaluation would produce, like a
/// builtin's arguments. So when we can tell what evaluating each symbol produces, and the resulting
/// types dispatch to a better version, we evaluate them here instead and call that version.
///
/// Evaluating a symbol is a load and, if the binding holds a promise, a force. The load is never
/// actually inserted: a named variable's declared type is never definite (see
/// [org.prlprg.fir.check.TypeAndEffectChecker]), so a load's own type can't dispatch to anything
/// better than the baseline; the only case worth rewriting is the one where the load resolves (via
/// [OriginAnalysis]) to the register or constant the variable was assigned, which is what
/// [ResolveLoad] would replace the load with anyway. The forces are inserted in the order the
/// arguments are passed, because forcing can have effects.
public record SpecializeLiteSpecial() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
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
    if (!(statement.expression() instanceof Call(StaticFnCallee callee))
        || !callee.function().userProperties().liteSpecial()) {
      return Result.UNCHANGED;
    }
    var function = callee.function();
    // Only the baseline takes unevaluated arguments, so a call to any other version already passes
    // values, and evaluating them again would be wrong.
    if (callee.exactVersion() != function.baseline()) {
      return Result.UNCHANGED;
    }
    var signature = callee.signature();
    if (statement.argCount() != signature.parameterTypes().size() + 1) {
      // Malformed call, don't touch it.
      return Result.UNCHANGED;
    }

    // The call's arguments follow the callee's own argument (index 0). Evaluating only *some* of
    // the symbols isn't an option: the baseline is the only version that takes one, so either every
    // argument ends up evaluated or the call stays as it is.
    var evaluations = new @Nullable Evaluation[statement.argCount()];
    var parameterTypes = ImmutableList.<Type>builderWithExpectedSize(statement.argCount() - 1);
    var anySymbol = false;
    for (var i = 1; i < statement.argCount(); i++) {
      var symbol = symbolIn(statement.arg(i));
      if (symbol == null) {
        parameterTypes.add(passedType(scope.typeOf(statement.arg(i))));
        continue;
      }
      anySymbol = true;

      // The origin *before* this statement: the call is reflective, so running it taints every
      // named variable's origin.
      var origin = analyses.get(OriginAnalysis.class).get(bb, index - 1, Variable.named(symbol));
      // A `consume`d origin is dead, so the value is only reachable through the variable (the same
      // case `ResolveLoad` gives up on).
      if (origin == null || origin instanceof Consume) {
        return Result.UNCHANGED;
      }
      var evaluation = Evaluation.of(origin, scope.typeOf(origin));
      if (evaluation == null) {
        return Result.UNCHANGED;
      }
      evaluations[i] = evaluation;
      parameterTypes.add(passedType(evaluation.valueType()));
    }
    if (!anySymbol) {
      return Result.UNCHANGED;
    }
    var newParameterTypes = parameterTypes.build();

    // Keep the call's postcondition, so the dispatched version is one this call site can already
    // handle, then adopt that version's own (better) postcondition.
    var version =
        function.guess(
            new Signature(newParameterTypes, signature.returnType(), signature.effects()));
    if (version == null || version == function.baseline()) {
      return Result.UNCHANGED;
    }
    var newSignature =
        new Signature(
            newParameterTypes, version.signature().returnType(), version.signature().effects());

    var newArgs = new ArrayList<>(statement.args());
    var forces = new ArrayList<PendingForce>(statement.argCount());
    for (var i = 1; i < statement.argCount(); i++) {
      var evaluation = evaluations[i];
      if (evaluation != null) {
        newArgs.set(i, evaluation.asArgument(scope, forces));
      }
    }
    if (!forces.isEmpty()) {
      // Prepend the forces before the (rewritten) call, but only after the other specializations,
      // because inserting invalidates the analyses they share. They all go before the same
      // instruction, so they stay in argument order.
      defer.stage(
          () -> {
            var call = bb.statements().get(index);
            for (var force : forces) {
              force.commitBefore(call);
            }
          });
    }
    return new Result.Replace(new Call(new StaticFnCallee(function, false, newSignature)), newArgs);
  }

  /// A [Force] to insert before the rewritten call, and the promise it forces.
  ///
  /// The promise is only put in place by [#commitBefore]: until then the statement isn't in a CFG,
  /// and a use pointing at an instruction that isn't confuses every walk of a register's uses.
  private record PendingForce(Statement statement, Argument promise) {
    void commitBefore(Statement call) {
      statement.setArg(0, promise);
      statement.insertBefore(call);
    }
  }

  /// How to evaluate one symbol argument: [#origin] is what the symbol's variable holds, and
  /// [#valueType] is the type of the value evaluating it produces, which is [#origin]'s own type
  /// unless it's a promise that must be [#forced].
  private record Evaluation(Argument origin, Type valueType, boolean forced) {
    /// How to evaluate a symbol whose variable holds `origin` of `originType`, or `null` if we
    /// can't tell what value that produces.
    static @Nullable Evaluation of(Argument origin, Type originType) {
      if (originType.isValue()) {
        return new Evaluation(origin, originType, false);
      }
      if (originType.isPromise()) {
        return new Evaluation(origin, originType.withPromisity(Promisity.VALUE), true);
      }
      // A maybe-promise forces to an unknown value type, which can't dispatch to a better version.
      return null;
    }

    /// The evaluated value as a call argument, appending the [Force] that computes it (if there is
    /// one) to `forces`.
    Argument asArgument(Abstraction scope, List<PendingForce> forces) {
      if (!forced) {
        return origin;
      }

      var force = new Statement(new Force(false), List.of(PLACEHOLDER));
      forces.add(new PendingForce(force, origin));
      return new Read(force.setAssignee(scope.freshName("val"), valueType));
    }
  }

  /// Stands in for a [PendingForce]'s promise until it's committed.
  private static final Constant PLACEHOLDER = Constant.ELIDED_CLOSURE;

  /// The symbol `argument` is, or `null` if it isn't one.
  ///
  /// `...` is excluded: it's a symbol, but evaluating it doesn't load a variable's value.
  private static @Nullable String symbolIn(Argument argument) {
    return argument instanceof Constant(Value.Sexp(RegSymSXP symbol))
            && !symbol.equals(SEXPs.DOTS_SYMBOL)
        ? symbol.name()
        : null;
  }

  /// `type` as a parameter type the argument satisfies: an owned argument isn't fresh, so it can
  /// only be passed to a borrowed parameter.
  private static Type passedType(Type type) {
    return type.ownership() == Ownership.OWNED ? type.withOwnership(Ownership.BORROWED) : type;
  }
}
