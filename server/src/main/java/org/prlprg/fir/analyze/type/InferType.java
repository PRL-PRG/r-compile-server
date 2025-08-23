package org.prlprg.fir.analyze.type;

import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptLoad;
import org.prlprg.fir.ir.expression.SubscriptStore;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Infer the [Type] of [CFG]s and [Expression]s.
public final class InferType {
  private final Abstraction scope;

  public InferType(Abstraction scope) {
    this.scope = scope;
  }

  public @Nullable Type of(CFG cfg) {
    Type result = null;
    for (var bb : cfg.bbs()) {
      switch (bb.jump()) {
        case Return(var value) -> result = Type.union(result, of(value));
        case Goto(var _), If(var _, var _, var _), Unreachable() -> {}
      }
    }
    return result;
  }

  public @Nullable Type of(Expression expression) {
    return switch (expression) {
      case Aea(var value) -> of(value);
      case Call call ->
          switch (call.callee()) {
            case StaticCallee(var _, var version) -> version.returnType();
            case DispatchCallee(var function, var signature) ->
                signature == null ? function.guaranteedReturnType() : signature.returnType();
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
        yield type == null || !(type.kind() instanceof Kind.Promise(var innerTy, var _))
            ? null
            : innerTy;
      }
      case MkVector(var _) -> Type.primitiveVector(PrimitiveKind.INTEGER, Ownership.FRESH);
      case Placeholder() -> null;
      case Promise(var innerType, var effects, var _) -> Type.promise(innerType, effects);
      case ReflectiveLoad(var _, var _) -> Type.ANY;
      case ReflectiveStore(var _, var _, var value) -> {
        var valueType = of(value);
        yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
      }
      case Store(var variable, var _) -> of(variable);
      case SubscriptLoad(var target, var _) -> {
        var targetType = of(target);
        yield targetType != null && targetType.kind() instanceof PrimitiveVector(var kind)
            ? Type.primitiveScalar(kind)
            : null;
      }
      case SubscriptStore(var _, var _, var value) -> {
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
