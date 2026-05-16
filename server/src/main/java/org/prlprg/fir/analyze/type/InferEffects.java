package org.prlprg.fir.analyze.type;

import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
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
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;

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

  /// Ignores effects of a static call to the CFG's scope.
  ///
  /// TODO: this is hacky, solution for mutual recursion
  public Effects ofNonRecursive(CFG cfg) {
    return cfg.bbs().stream()
        .flatMap(bb -> bb.instructions().stream())
        .filter(
            i ->
                !(i instanceof Statement s
                    && s.expression() instanceof Call c
                    && c.callee() instanceof StaticFnCallee sc
                    && sc.exactVersion() == cfg.scope()))
        .map(this::of)
        .reduce(Effects::union)
        .orElse(Effects.NONE);
  }

  public Effects of(Instruction instruction) {
    return switch (instruction) {
      case Statement(_, _, var expression) -> of(expression);
      case Jump jump -> of(jump);
    };
  }

  public Effects of(Expression expression) {
    return switch (expression) {
      case Aea _, Assume _ -> Effects.NONE;
      case Call call ->
          switch (call.callee()) {
            case StaticFnCallee(_, _, _, var signature) -> signature.effects();
            case DynamicCallee _ -> Effects.REFLECT;
          };
      case Cast _ -> Effects.IMPURE;
      case Closure _, Dup _ -> Effects.NONE;
      case Force(_, var value) -> {
        var type = inferType.of(value);
        yield type == null
            ? Effects.NONE
            : type.concreteness() == Concreteness.MAYBE
                ? Effects.REFLECT
                : type.promisity().effects();
      }
      // Local function lookup can force
      case Load(var loadType, _) -> loadType == LoadType.LOCAL_FUN ? Effects.REFLECT : Effects.NONE;
      case MkVector _ -> Effects.NONE;
      case MkEnv _ -> Effects.IMPURE;
      case Noop _ -> Effects.NONE;
      case PopEnv _ -> Effects.IMPURE;
      case Promise _ -> Effects.NONE;
      case ReflectiveLoad _, ReflectiveStore _ -> Effects.REFLECT;
      case Store _ -> Effects.IMPURE;
      case SubscriptRead _ -> Effects.NONE;
      case SubscriptWrite _ -> Effects.IMPURE;
    };
  }

  public Effects of(Jump jump) {
    return switch (jump) {
      case Checkpoint _, Goto _, If _, Return _, Unreachable _ -> Effects.NONE;
      case Raise _ -> Effects.IMPURE;
      case Deopt _ -> Effects.REFLECT;
    };
  }
}
