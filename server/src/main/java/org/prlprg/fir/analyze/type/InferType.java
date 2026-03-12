package org.prlprg.fir.analyze.type;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Infer the [Type] of [CFG]s and [Expression]s.
///
/// This analysis is **on-demand**: it only infers when called the type of the argument, and
/// remains accurate if the code changes (except previous return values are invalidated when
/// their argument changes).
public final class InferType implements Analysis {
  private final Abstraction scope;

  @AnalysisConstructor
  public InferType(Abstraction scope) {
    this.scope = scope;
  }

  public @Nullable Type of(CFG cfg) {
    Type result = null;
    for (var bb : cfg.bbs()) {
      if (bb.jump() instanceof Return(_, var value)) {
        result = Type.union(result, of(value));
      }
    }
    return result;
  }

  public @Nullable Type of(Expression expression) {
    return switch (expression) {
      case Aea(var value) -> of(value);
      case Assume(var assumption) ->
          switch (assumption) {
            case AssumeType(_, var type) -> type;
            case AssumeConstant _, AssumeFunction _, AssumeLoadFun _ -> null;
          };
      case Call call ->
          switch (call.callee()) {
            case StaticFnCallee(_, _, var signature) -> signature.returnType();
            case DynamicCallee _ -> Type.ANY_VALUE;
          };
      case Cast(_, var castType) -> castType;
      case Closure _ -> Type.CLOSURE;
      case Dup(var value) -> {
        var type = of(value);
        yield type == null ? null : type.withOwnership(Ownership.FRESH);
      }
      case Force(var isMaybe, var value) -> {
        var type = of(value);
        yield type == null || (!isMaybe && !type.isPromise())
            ? null
            : type.concreteness() == Concreteness.MAYBE
                ? Type.ANY_VALUE
                : type.withPromisity(Promisity.VALUE);
      }
      case Load(var loadType, var variable) ->
          switch (loadType) {
            case LOCAL_VAR -> of(variable);
            case SUPER_VAR -> Type.ANY;
            case LOCAL_FUN, GLOBAL_FUN, BASE_FUN -> Type.CLOSURE;
          };
      case MkVector(var kind, _) ->
          new Type(
              kind,
              Promisity.VALUE,
              kind.isWellFormedWithOwnership() ? Ownership.FRESH : Ownership.SHARED,
              Concreteness.DEFINITE);
      case MkEnv _, PopEnv _ -> Type.ANY;
      case Promise(var valueType, var effects, _) -> Type.promise(valueType, effects);
      case ReflectiveLoad _ -> Type.ANY;
      case ReflectiveStore _, Store _ -> null;
      case SubscriptRead(var target, _) -> {
        var targetType = of(target);
        yield targetType != null && targetType.kind() instanceof PrimitiveVector(var kind)
            ? Type.primitiveScalar(kind)
            : null;
      }
      case SubscriptWrite _ -> null;
    };
  }

  public @Nullable Type of(Argument argument) {
    return scope.typeOf(argument);
  }

  public @Nullable Type of(Register variable) {
    return scope.typeOf(variable);
  }

  public Type of(NamedVariable variable) {
    return scope.typeOf(variable);
  }
}
