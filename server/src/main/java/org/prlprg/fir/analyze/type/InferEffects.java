package org.prlprg.fir.analyze.type;

import java.util.Set;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
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
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.session.GNURSession;

/// Infer the effects of [CFG]s, [Instruction]s, and [Statement]s.
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
      case Statement s -> of(s);
      case Jump jump -> of(jump);
    };
  }

  public Effects of(Statement statement) {
    return switch (statement.expression()) {
      case Assume _ -> Effects.NONE;
      case Call call ->
          switch (call.callee()) {
            case StaticFnCallee(_, _, var signature) -> signature.effects();
            case FallbackCallee(var signature) -> signature.effects();
            case DynamicCallee _ -> Effects.REFLECT;
          };
      case Cast _ -> Effects.IMPURE;
      case Closure _, Dup _ -> Effects.NONE;
      case Force(var isMaybe) -> {
        var type = inferType.of(statement.arg(0));
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
      // Reading out of range is `NA` in one and an error in the other (see `SubscriptRead`).
      case SubscriptRead(var outOfRangeIsNa) -> outOfRangeIsNa ? Effects.NONE : Effects.IMPURE;
      case SubscriptWrite _ -> Effects.IMPURE;
    };
  }

  /// Whether `statement` can warn or raise an error, which [#of(Statement)] doesn't say for a
  /// statement without effects. Code that runs where GNU-R wouldn't run it, or not where GNU-R
  /// would, must not.
  ///
  /// So can a call of a `@signals` builtin version, a call of a module function (whose body this
  /// doesn't look into), a `force` of a promise whose body can or isn't known, and a load of a
  /// variable that may be unbound ("object 'x' not found"; [org.prlprg.fir.opt.Cleanup] removes
  /// an unused load whose value [org.prlprg.fir.analyze.resolve.OriginAnalysis] knows).
  ///
  /// An [Assume] can't: a failed assumption deoptimizes.
  public boolean maySignal(Statement statement) {
    return of(statement) != Effects.NONE
        || switch (statement.expression()) {
          case Call(StaticFnCallee callee) -> {
            var owner = callee.function().owner();
            var version = callee.exactVersion();
            yield (owner != GlobalModules.BUILTINS
                    && owner != GlobalModules.BASE
                    && owner != GlobalModules.INTRINSICS)
                || version == null
                || version.signals();
          }
          case Call _ -> true;
          case Force _ ->
              !(statement.arg(0).variable() instanceof AssigneeOf promise
                  && promise.statement().expression() instanceof Promise(_, _, var code, _, _)
                  && !maySignal(code));
          case Load(var loadType, _) -> loadType != LoadType.BASE_FUN;
          default -> false;
        };
  }

  /// Whether some instruction of `cfg` can warn or raise an error (see [#maySignal(Statement)]).
  public boolean maySignal(CFG cfg) {
    return cfg.bbs().stream()
        .anyMatch(
            bb ->
                of(bb.jump()) != Effects.NONE
                    || bb.statements().stream().anyMatch(this::maySignal));
  }

  /// Whether `statement` is a call of `setVisible` or `setInvisible`.
  public static boolean writesVisibility(Statement statement) {
    return statement.expression() instanceof Call(StaticFnCallee callee)
        && callee.function().owner() == GlobalModules.INTRINSICS
        && VISIBILITY_INTRINSICS.contains(callee.function().name().name());
  }

  private static final Set<String> VISIBILITY_INTRINSICS = Set.of("setVisible", "setInvisible");

  /// Whether `statement` sets GNU-R's `R_Visible` on every path, also after later passes: a
  /// visibility write, or a call of a module function, whose every `return` writes it (and inlining
  /// copies the writes). A call of a builtin can become inline code that doesn't write it.
  public static boolean overwritesVisibility(Statement statement) {
    return writesVisibility(statement)
        || switch (statement.expression()) {
          case Call(StaticFnCallee callee) -> {
            var owner = callee.function().owner();
            yield owner != GlobalModules.BUILTINS
                && owner != GlobalModules.BASE
                && owner != GlobalModules.INTRINSICS;
          }
          case Call(FallbackCallee _) -> true;
          default -> false;
        };
  }

  /// Whether `statement` may set GNU-R's `R_Visible` off: `setInvisible`, a `force`, or a call
  /// other than an intrinsic or a builtin that sets it on (`PRIMPRINT` 0).
  public static boolean maySetInvisible(Statement statement) {
    return switch (statement.expression()) {
      case Force _ -> true;
      case Call(StaticFnCallee callee) -> {
        var function = callee.function();
        var name = function.name().name();
        var entry = GNURSession.readFunTab().get(name);
        yield function.owner() == GlobalModules.INTRINSICS
            ? name.equals("setInvisible")
            : function.owner() != GlobalModules.BUILTINS
                || entry == null
                || entry.visibility() != 0;
      }
      case Call _ -> true;
      default -> false;
    };
  }

  public Effects of(Jump jump) {
    return switch (jump.expression()) {
      case Checkpoint _, Goto _, If _, Return _, Unreachable _ -> Effects.NONE;
      case Raise _ -> Effects.IMPURE;
      case Deopt _ -> Effects.REFLECT;
    };
  }
}
