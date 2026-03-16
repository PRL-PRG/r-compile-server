package org.prlprg.fir.analyze.resolve;

import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.generic.AbstractInterpretation;
import org.prlprg.fir.analyze.resolve.OriginAnalysis.State;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
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
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Streams;

/// Computes each variable's **origin**: the earliest known register or constant that it was
/// assigned.
///
/// Named variable's origins are different at different locations. Register origins are the same
/// throughout all locations.
///
/// Only named variable origins can be `null`, as every register's origin is at least itself.
/// However:
/// - If a register is assigned a constant (e.g. `a = 42`), the constant is it's origin.
/// - If a register is assigned another register (e.g. `b = a`), that register's origin becomes
///   its origin (this is transitive, e.g. in `b = a; c = b`, `c`'s origin is `a`).
/// - If a register is assigned a [Load] whose named variable has an origin, that becomes its
///   origin.
/// - TODO: If a register is assigned a call that can be constant-folded, its origin is the
///   computed constant.
public final class OriginAnalysis extends AbstractInterpretation<State> implements Analysis {
  private final DefUses defUses;
  private final InferType inferType;
  private final InferEffects inferEffects;
  private final Map<Register, Argument> registerOrigins = new HashMap<>();

  /// Creates and runs the analysis.
  public OriginAnalysis(Abstraction scope) {
    this(scope, new DefUses(scope), new InferType(scope), new InferEffects(scope));
  }

  /// Creates and runs the analysis.
  @AnalysisConstructor
  public OriginAnalysis(
      Abstraction scope, DefUses defUses, InferType inferType, InferEffects inferEffects) {
    super(scope);
    this.defUses = defUses;
    this.inferType = inferType;
    this.inferEffects = inferEffects;

    run(new State());
  }

  @Override
  protected AbstractInterpretation<State>.OnCfg mkOnCfg(CFG cfg) {
    return new OnCfg(cfg);
  }

  /// Gets the origins of all registers.
  public @UnmodifiableView Map<Register, Argument> registerOrigins() {
    return Collections.unmodifiableMap(registerOrigins);
  }

  /// Gets the origin of a register.
  public Argument get(Register register) {
    if (!scope.contains(register)) {
      throw new IllegalArgumentException("Register " + register + " is not in scope");
    }
    return registerOrigins.containsKey(register)
        ? registerOrigins.get(register)
        : new Read(register);
  }

  /// If the argument is a [Read] or [Consume], looks up its origin.
  public Argument resolve(Argument arg) {
    return switch (arg) {
      case Constant _ -> arg;
      case Read(var register) -> get(register);
      // Note that `a = <const>; ...; use a` and `b = use a; ...; use b` are invalid IR, since
      // they use a register multiple times, so after `:` can be anything.
      case Consume(var register) ->
          resolve(get(register)) instanceof Read(var r) ? new Consume(r) : arg;
    };
  }

  /// If the argument is a [Read] or [Consume], looks up the expression it's assigned to.
  public @Nullable Expression resolveExpression(Argument arg) {
    return definitionExpression(resolve(arg));
  }

  /// Same as [#resolveExpression(Argument)] but skips finding the argument's origin.
  private @Nullable Expression definitionExpression(Argument origin) {
    if (!(origin instanceof Read(var originReg))) {
      return null;
    }

    var def = defUses.definition(originReg);
    if (def == null || !(def.inInnermostCfg().instruction() instanceof Statement(_, _, var expr))) {
      return null;
    }

    return expr;
  }

  /// Gets the origin of a named variable at a specific location.
  public @Nullable Argument get(BB bb, int instructionIndex, NamedVariable variable) {
    var state = at(bb, instructionIndex);
    return state.variableOrigins.get(variable);
  }

  /// Gets the origin of the return value.
  ///
  /// `null` iff there are no returns, a return has unknown origin, or the return origins are
  /// different.
  public @Nullable Argument getReturn() {
    var mainCfg = scope.cfg();
    if (mainCfg == null) {
      // Stub
      return null;
    }

    return ((OnCfg) onCfg(mainCfg)).returnOrigin();
  }

  private class OnCfg extends AbstractInterpretation<State>.OnCfg {
    private @Nullable ReturnOrigin returnOrigin = null;

    OnCfg(CFG cfg) {
      super(cfg);
    }

    /// `null` iff there are no returns, a return has unknown origin, or the return origins are
    /// different.
    @Nullable Argument returnOrigin() {
      return returnOrigin == null ? null : returnOrigin.inner;
    }

    @Override
    protected void run(Statement statement) {
      var expr = statement.expression();
      var assignee = statement.assignee();

      var origin = run(expr);

      if (assignee != null) {
        put(assignee, origin);
      }
    }

    private @Nullable Argument run(Expression expr) {
      return switch (expr) {
        case Store(var storeType, var variable, var value) -> {
          if (storeType != StoreType.LOCAL_VAR) {
            // Currently not tracking non-local store (not even in local parent environments)
            yield null;
          }

          var o = resolve(value);
          put(variable, o);
          yield o;
        }
        case Load(var loadType, var variable) -> {
          if (loadType != LoadType.LOCAL_VAR && loadType != LoadType.LOCAL_FUN) {
            // Currently not tracking non-local load (not even in local parent environments)
            yield null;
          }
          var loadOrigin = get(variable);
          if (loadOrigin == null) {
            yield null;
          }
          if (loadType == LoadType.LOCAL_FUN) {
            var loadOriginType = inferType.of(loadOrigin);
            if (loadOriginType == null || !loadOriginType.isSubtypeOf(Type.CLOSURE)) {
              // Lookup (maybe) goes through (maybe-)non-function into parent
              yield null;
            }
          }
          yield loadOrigin;
        }
        case Aea(var arg) -> resolve(arg);
        case Cast(var value, var type) -> {
          var valueOrigin = resolve(value);
          // Only see through the cast if it's guaranteed to succeed.
          // Otherwise we'll get a type error substituting,
          // and a runtime error iff the instruction gets rearranged before the cast
          // and the cast would fail.
          var valueType = inferType.of(valueOrigin);
          yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
        }
        case Assume(var assumption) ->
            switch (assumption) {
              case AssumeType(var value, var type) -> {
                var valueOrigin = resolve(value);
                // Only see through the assumption if it's guaranteed to succeed.
                // Otherwise we'll get a type error substituting,
                // and a deopt iff the instruction gets rearranged before the assumption
                // and the assumption fails.
                var valueType = inferType.of(valueOrigin);
                yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
              }
              case AssumeConstant _, AssumeFunction _, AssumeLoadFun _ -> null;
            };
        case Force(var isMaybe, var value) -> {
          var forceeOrigin = resolve(value);
          var forceeType = inferType.of(forceeOrigin);
          if (definitionExpression(forceeOrigin) instanceof Promise(_, _, var code)) {
            // We're forcing this promise, so run it's sub-analysis and return the return.
            var subAnalysis = (OnCfg) onCfg(code);
            subAnalysis.run(state());
            yield subAnalysis.returnOrigin();
          } else if (isMaybe && forceeType != null && forceeType.isValue()) {
            // We're maybe-forcing a value, so just return it.
            yield forceeOrigin;
          } else {
            // We're forcing an unknown thing.
            // We can't keep named variable origins:
            // even if its type has no reflection, it may be a local promise, which may mutate them.
            clearNamedVariables();
            yield null;
          }
        }
        // We must run promises because `AbstractInterpretation` doesn't.
        case Promise(_, _, var code) -> {
          runSubAnalysis(code, state()::merge);
          yield null;
        }
        // TODO: Constant-fold some calls.
        case Call _,
            Closure _,
            Dup _,
            MkVector _,
            MkEnv _,
            Noop _,
            PopEnv _,
            ReflectiveLoad _,
            ReflectiveStore _,
            SubscriptRead _,
            SubscriptWrite _ -> {
          if (inferEffects.of(expr).reflect()) {
            clearNamedVariables();
          }
          yield null;
        }
      };
    }

    @Override
    protected void run(Jump jump) {
      if (jump instanceof Return(_, var value)) {
        returnOrigin = new ReturnOrigin(value).merge(returnOrigin);
      }

      // Recompute BB phis from here, not `runEntry`,
      // because we may run a predecessor after a block,
      // then merge an equal state into the block,
      // not running `runEntry` except before we've resolved the predecessor's block arguments.
      for (var targetBb : jump.targetBBs()) {
        recomputePhis(targetBb);
      }
    }

    private void recomputePhis(BB bb) {
      // If all arguments to a phi parameter share the same origin, that is its origin.
      // Otherwise, it's the phi itself.
      for (var i = 0; i < bb.phiParameters().size(); i++) {
        var phi = bb.phiParameters().get(i);
        var arguments = bb.phiArguments(i);

        var sharedOrigin =
            arguments.stream()
                .flatMap(Collection::stream)
                .map(OriginAnalysis.this::resolve)
                .collect(Streams.uniqueOrEmpty())
                .orElse(null);

        put(phi, sharedOrigin);
      }
    }

    private @Nullable Argument get(NamedVariable variable) {
      return state().variableOrigins.get(variable);
    }

    private void put(Register register, @Nullable Argument argument) {
      if (argument == null) {
        registerOrigins.remove(register);
        state().registerOrigins.remove(register);
      } else {
        registerOrigins.put(register, argument);
        state().registerOrigins.put(register, argument);
      }
    }

    private void put(NamedVariable variable, @Nullable Argument argument) {
      if (argument == null) {
        state().variableOrigins.remove(variable);
      } else {
        state().variableOrigins.put(variable, argument);
      }
    }

    private void clearNamedVariables() {
      state().variableOrigins.clear();
    }
  }

  public static final class State implements AbstractInterpretation.State<State> {
    // Register origins are global, but `State` must store then, so that states with different
    // register origins aren't equal, so that we re-run blocks whose register origin
    // dependencies changed.
    final Map<Register, Argument> registerOrigins = new LinkedHashMap<>();
    final Map<NamedVariable, Argument> variableOrigins = new LinkedHashMap<>();

    @Override
    public State copy() {
      var copy = new State();
      copy.registerOrigins.putAll(registerOrigins);
      copy.variableOrigins.putAll(variableOrigins);
      return copy;
    }

    @Override
    public void merge(State other) {
      // Merge origins = keep only those that are present in both and equal
      mergeOrigins(registerOrigins, other.registerOrigins);
      mergeOrigins(variableOrigins, other.variableOrigins);
    }

    private static <T> void mergeOrigins(Map<T, Argument> origins, Map<T, Argument> otherOrigins) {
      for (var iterator = origins.entrySet().iterator(); iterator.hasNext(); ) {
        var entry = iterator.next();
        var variable = entry.getKey();
        var origin = entry.getValue();
        var otherOrigin = otherOrigins.get(variable);
        if (!origin.equals(otherOrigin)) {
          iterator.remove();
        }
      }
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (o == null || getClass() != o.getClass()) return false;
      State that = (State) o;
      return Objects.equals(registerOrigins, that.registerOrigins)
          && Objects.equals(variableOrigins, that.variableOrigins);
    }

    @Override
    public int hashCode() {
      return Objects.hash(registerOrigins, variableOrigins);
    }
  }

  /// `null` iff unknown.
  private record ReturnOrigin(@Nullable Argument inner) {
    ReturnOrigin merge(@Nullable ReturnOrigin other) {
      return other == null || Objects.equals(inner, other.inner) ? this : new ReturnOrigin(null);
    }
  }
}
