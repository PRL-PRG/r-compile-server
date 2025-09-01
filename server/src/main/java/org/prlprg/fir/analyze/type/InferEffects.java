package org.prlprg.fir.analyze.type;

import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
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
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;

/// Infer the effects of [CFG]s, [Instruction]s, and [Expression]s.
///
/// This analysis is **on-demand**: it only infers when called the type of the argument, and
/// remains accurate if the code changes (except previous return values are invalidated when
/// their argument changes).
public final class InferEffects implements Analysis {
  private final InferType inferType;

  @AnalysisConstructor
  public InferEffects(Abstraction scope) {
    inferType = new InferType(scope);
  }

  public Effects of(CFG cfg) {
    return cfg.bbs().stream()
        .flatMap(bb -> bb.instructions().stream())
        .map(this::of)
        .reduce(Effects::union)
        .orElse(Effects.NONE);
  }

  public Effects of(Instruction instruction) {
    return switch (instruction) {
      case Statement(var _, var expression) -> of(expression);
      case Jump _ -> Effects.NONE;
    };
  }

  public Effects of(Expression expression) {
    return switch (expression) {
      case Aea(var _) -> Effects.NONE;
      case Call call ->
          switch (call.callee()) {
            case StaticCallee(var _, var version) -> version.effects();
            case DispatchCallee(var function, var signature) ->
                signature == null ? function.guaranteedEffects() : signature.effects();
            case DynamicCallee(var _, var _) -> Effects.ANY;
            case InlineCallee(var inlinee) -> inlinee.effects();
          };
      case Cast(var _, var _), Closure _, Dup(var _) -> Effects.NONE;
      case Force(var value) -> {
        var type = inferType.of(value);
        yield type == null || !(type.kind() instanceof Kind.Promise(var _, var innerEffects))
            ? Effects.NONE
            : innerEffects;
      }
      case Load(var _) -> Effects.NONE;
        // Function lookup can force.
      case LoadFun(var _, var _) -> Effects.ANY;
      case MaybeForce(var value) -> {
        var type = inferType.of(value);
        yield type == null || !(type.kind() instanceof Kind.Promise(var _, var innerEffects))
            ? Effects.NONE
            : innerEffects;
      }
      case MkVector(var _), Placeholder(), Promise(var _, var _, var _) -> Effects.NONE;
      case ReflectiveLoad(var _, var _), ReflectiveStore(var _, var _, var _) -> Effects.ANY;
      case Store(var _, var _),
              SubscriptRead(var _, var _),
              SubscriptWrite(var _, var _, var _),
              SuperLoad(var _),
              SuperStore(var _, var _) ->
          Effects.NONE;
    };
  }
}
