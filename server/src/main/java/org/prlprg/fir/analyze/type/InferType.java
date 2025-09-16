package org.prlprg.fir.analyze.type;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.AssumeConstant;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeType;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
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
      if (bb.jump() instanceof Return(var value)) {
        result = Type.union(result, of(value));
      }
    }
    return result;
  }

  public @Nullable Type of(Expression expression) {
    return switch (expression) {
      case Aea(var value) -> of(value);
      case AssumeType(var _, var type) -> type;
      case AssumeConstant(var _, var _), AssumeFunction _ -> Type.ANY_VALUE;
      case Call call ->
          switch (call.callee()) {
            case StaticCallee(var _, var version) -> version.returnType();
            case DispatchCallee(var function, var signature) ->
                signature == null ? function.baseline().returnType() : signature.returnType();
            case DynamicCallee(var _, var _) -> Type.ANY_VALUE;
            case InlineCallee(var inlinee) -> inlinee.returnType();
          };
      case Cast(var _, var castType) -> castType;
      case Closure _ -> Type.CLOSURE;
      case Dup(var value) -> {
        var type = of(value);
        yield type == null ? null : type.withOwnership(Ownership.FRESH);
      }
      case Force(var value) -> {
        var type = of(value);
        yield type == null || !(type.kind() instanceof Kind.Promise(var innerTy, var _))
            ? null
            : innerTy;
      }
      case Load(var variable) -> of(variable);
      case LoadFun(var _, var _) -> Type.CLOSURE;
      case MaybeForce(var value) -> {
        var type = of(value);
        yield type == null
            ? null
            : switch (type.kind()) {
              case Kind.Promise(var innerTy, var _) -> innerTy;
              case Kind.Any() -> Type.ANY_VALUE;
              default -> type;
            };
      }
      case MkVector(var kind, var _) -> new Type(kind, Ownership.FRESH, Concreteness.DEFINITE);
      case MkEnv(), PopEnv() -> Type.ANY;
      case Placeholder() -> null;
      case Promise(var valueType, var effects, var _) -> Type.promise(valueType, effects);
      case ReflectiveLoad(var _, var _) -> Type.ANY;
      case ReflectiveStore(var _, var _, var value) -> {
        var valueType = of(value);
        yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
      }
      case Store(var variable, var _) -> of(variable);
      case SubscriptRead(var target, var _) -> {
        var targetType = of(target);
        yield targetType != null && targetType.kind() instanceof PrimitiveVector(var kind)
            ? Type.primitiveScalar(kind)
            : null;
      }
      case SubscriptWrite(var _, var _, var value) -> {
        var valueType = of(value);
        yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
      }
      case SuperLoad(var _) -> Type.ANY;
      case SuperStore(var _, var value) -> {
        var valueType = of(value);
        yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
      }
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
