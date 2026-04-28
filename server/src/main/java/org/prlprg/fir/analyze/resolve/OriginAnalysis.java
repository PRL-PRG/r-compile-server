package org.prlprg.fir.analyze.resolve;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;
import java.util.TreeSet;
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
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
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
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.SEXPs;
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
///
/// Named variables live on a stack of environments, pushed by [MkEnv] and popped by [PopEnv].
/// A local store writes the topmost environment; a local load reads from the highest environment
/// in which the variable is present, falling through to the parent if the topmost may or may
/// not have it. A super load/store works the same way, but starts from the highest non-topmost
/// environment. An environment that has been "tainted" by reflection has all of its variables'
/// origins forgotten and may have any other variable present with unknown origin.
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

  /// Gets the origin of a named variable after a specific location.
  ///
  /// `null` iff the variable's origin can't be uniquely determined: either some reaching path
  /// has unknown origin, or there are multiple possible origins.
  public @Nullable Argument get(BB bb, int instructionIndex, NamedVariable variable) {
    return uniqueOrNull(loadFromTop(at(bb, instructionIndex), variable));
  }

  /// Gets all statically-known origins of a named variable after a specific location.
  ///
  /// This is empty iff the variable's origin is unknown on at least one reaching path.
  public @UnmodifiableView Set<Argument> getKnown(
      BB bb, int instructionIndex, NamedVariable variable) {
    var origins = loadFromTop(at(bb, instructionIndex), variable);
    return origins == null ? Set.of() : Set.copyOf(origins);
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

  /// Resolves a load of `variable` against the env stack starting from the topmost frame.
  private static @Nullable Set<Argument> loadFromTop(State state, NamedVariable variable) {
    return loadFromStack(state.envs, variable, state.envs.size() - 1);
  }

  /// Resolves a "super" load of `variable`, which starts from the highest non-topmost frame.
  private static @Nullable Set<Argument> loadFromSuper(State state, NamedVariable variable) {
    return loadFromStack(state.envs, variable, state.envs.size() - 2);
  }

  /// Walks the env stack downward starting at `frameIdx` and returns all possible load origins.
  ///
  /// `null` indicates at least one reaching path has unknown origin (e.g. the variable falls off
  /// the bottom of the stack into the global env, or the relevant frame is tainted).
  private static @Nullable Set<Argument> loadFromStack(
      List<EnvFrame> envs, NamedVariable variable, int frameIdx) {
    if (frameIdx < 0) {
      // Beyond the local stack: outer (global/closure) env, which we don't track.
      return null;
    }
    var frame = envs.get(frameIdx);
    var info = frame.variables.get(variable);

    // A definitely-present variable with known origins resolves at this frame regardless of taint.
    if (info != null && !info.mayBeAbsent && !info.origins.isEmpty()) {
      return Set.copyOf(info.origins);
    }

    if (frame.tainted) {
      // Reflection may have placed the variable here with an unknown value, so we can't fall
      // through to the parent.
      return null;
    }

    if (info == null) {
      // Definitely not in this frame; look at the parent.
      return loadFromStack(envs, variable, frameIdx - 1);
    }

    if (info.origins.isEmpty()) {
      // Present but with unknown origin (defensive; not normally produced).
      return null;
    }

    // Variable may or may not be in this frame: union the local origins with the parent's.
    var parent = loadFromStack(envs, variable, frameIdx - 1);
    if (parent == null) {
      return null;
    }
    var result = new LinkedHashSet<Argument>();
    result.addAll(info.origins);
    result.addAll(parent);
    return result;
  }

  private static @Nullable Argument uniqueOrNull(@Nullable Set<Argument> origins) {
    if (origins == null || origins.size() != 1) {
      return null;
    }
    return origins.iterator().next();
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
          var o = resolve(value);
          switch (storeType) {
            case LOCAL_VAR -> localStore(state(), variable, o);
            case SUPER_VAR -> superStore(state(), variable, o);
          }
          yield o;
        }
        case Load(var loadType, var variable) -> {
          Set<Argument> origins;
          switch (loadType) {
            case LOCAL_VAR, LOCAL_FUN -> origins = loadFromTop(state(), variable);
            case SUPER_VAR -> origins = loadFromSuper(state(), variable);
            default -> {
              // Currently not tracking non-local lookups.
              yield null;
            }
          }
          var loadOrigin = uniqueOrNull(origins);
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
            taintAllEnvs();
            yield null;
          }
        }
        // We must run promises because `AbstractInterpretation` doesn't.
        case Promise(_, _, var code) -> {
          runSubAnalysis(code, state()::merge);
          yield null;
        }
        case Call(var callee, var arguments) -> {
          var constantFolded = tryConstantFold(callee, arguments);
          if (constantFolded != null) {
            yield constantFolded;
          }

          if (inferEffects.of(expr).reflect()) {
            taintAllEnvs();
          }
          yield null;
        }
        case MkEnv _ -> {
          state().envs.add(new EnvFrame());
          yield null;
        }
        case PopEnv _ -> {
          if (!state().envs.isEmpty()) {
            state().envs.removeLast();
          }
          yield null;
        }
        case Closure _,
            Dup _,
            MkVector _,
            Noop _,
            ReflectiveLoad _,
            ReflectiveStore _,
            SubscriptRead _,
            SubscriptWrite _ -> {
          if (inferEffects.of(expr).reflect()) {
            taintAllEnvs();
          }
          yield null;
        }
      };
    }

    private void localStore(State state, NamedVariable variable, Argument value) {
      if (state.envs.isEmpty()) {
        // No local environment to store to (would write to the global env).
        return;
      }
      state.envs.getLast().variables.put(variable, VariableInfo.of(value));
    }

    /// Writes a super-store: targets the highest non-topmost frame in which the variable is
    /// present.
    ///
    /// In a frame where the variable may-or-may-not be present, the store may write here or fall
    /// through to a deeper frame, so we union the new value into the local origins (still
    /// may-be-absent) and continue searching.
    private void superStore(State state, NamedVariable variable, Argument value) {
      for (int i = state.envs.size() - 2; i >= 0; i--) {
        var frame = state.envs.get(i);
        if (frame.tainted) {
          // We don't know what the super-store actually targets.
          return;
        }
        var info = frame.variables.get(variable);
        if (info == null) {
          continue;
        }
        if (!info.mayBeAbsent) {
          frame.variables.put(variable, VariableInfo.of(value));
          return;
        }
        var updated = info.copy();
        updated.origins.add(value);
        frame.variables.put(variable, updated);
      }
      // Fell through to the global env (not tracked).
    }

    private @Nullable Argument tryConstantFold(Callee callee, List<Argument> arguments) {
      if (!(callee instanceof StaticFnCallee(var isDispatch, var functionRef, var _))
          || isDispatch) {
        return null;
      }
      var function = functionRef.get();
      if (function.owner() != BUILTINS && function.owner() != INTRINSICS) {
        return null;
      }

      return switch (function.name().name()) {
        case "checkFun" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          var argType = inferType.of(arg);
          yield argType == null || !argType.isSubtypeOf(Type.CLOSURE) ? null : arg;
        }
        case "checkMissing" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          var argType = inferType.of(arg);
          yield argType == null || Type.MISSING.isSubtypeOf(argType) ? null : arg;
        }
        case "naToFalse" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          if (!(arg instanceof Constant(var value))) {
            yield null;
          }
          yield (value instanceof Value.Sexp(var sexp) && sexp.asScalarLogical().isPresent())
              ? new Constant(new Value.Bool(sexp.asScalarLogical().get() == Logical.TRUE))
              : (value instanceof Value.Lgl(var lgl))
                  ? new Constant(new Value.Bool(lgl == Logical.TRUE))
                  : null;
        }
        case "box" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          if (!(arg instanceof Constant(var value))) {
            yield null;
          }
          yield switch (value) {
            case Value.Lgl(var l) -> new Constant(SEXPs.logical(l));
            case Value.Int(var i) -> new Constant(SEXPs.integer(i));
            case Value.Real(var r) -> new Constant(SEXPs.real(r));
            case Value.Str(var s) -> new Constant(SEXPs.string(s));
            default -> null;
          };
        }
        case "unbox" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          if (!(arg instanceof Constant(var value) && value instanceof Value.Sexp(var sexp))) {
            yield null;
          }
          if (sexp.asScalarLogical().isPresent()) {
            yield new Constant(new Value.Lgl(sexp.asScalarLogical().get()));
          } else if (sexp.asScalarInteger().isPresent()) {
            yield new Constant(new Value.Int(sexp.asScalarInteger().get()));
          } else if (sexp.asScalarReal().isPresent()) {
            yield new Constant(new Value.Real(sexp.asScalarReal().get()));
          } else if (sexp.asScalarString().isPresent()) {
            yield new Constant(new Value.Str(sexp.asScalarString().get()));
          } else {
            yield null;
          }
        }
        default -> null;
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

    private void put(Register register, @Nullable Argument origin) {
      if (origin == null) {
        registerOrigins.remove(register);
      } else {
        registerOrigins.put(register, origin);
      }
      state().registerOrigins.put(register, Optional.ofNullable(origin));
    }

    private void taintAllEnvs() {
      for (var env : state().envs) {
        env.taint();
      }
    }
  }

  public static final class State implements AbstractInterpretation.State<State> {
    // Register origins are global, but `State` must store them, so that states with different
    // register origins aren't equal, so that we re-run blocks whose register origin
    // dependencies changed.
    final Map<Register, Optional<Argument>> registerOrigins = new LinkedHashMap<>();
    // The stack of local environments; the last entry is the topmost (innermost).
    final List<EnvFrame> envs = new ArrayList<>();

    @Override
    public State copy() {
      var copy = new State();
      copy.registerOrigins.putAll(registerOrigins);
      for (var env : envs) {
        copy.envs.add(env.copy());
      }
      return copy;
    }

    @Override
    public void merge(State other) {
      // Merge register origins: unify possible origins.
      // - `null` = 0 possibilities
      // - `Optional.empty()` = infinite possibilities
      // - `Optional.of(arg)` = 1 possibility, `arg`
      for (var entry : registerOrigins.entrySet()) {
        var variable = entry.getKey();
        var origin = entry.getValue();
        var otherOrigin = other.registerOrigins.remove(variable);
        //noinspection OptionalAssignedToNull
        if (otherOrigin != null && !origin.equals(otherOrigin)) {
          entry.setValue(Optional.empty());
        }
      }
      registerOrigins.putAll(other.registerOrigins);

      // Merge env stacks. Well-formed IR balances mkenv/popenv, so the depths should match.
      // If they don't, the stack is ambiguous; we collapse to the shorter depth and taint the
      // surviving frames.
      var depthMismatch = envs.size() != other.envs.size();
      var commonDepth = Math.min(envs.size(), other.envs.size());
      while (envs.size() > commonDepth) {
        envs.removeLast();
      }
      for (int i = 0; i < commonDepth; i++) {
        envs.get(i).merge(other.envs.get(i));
      }
      if (depthMismatch) {
        for (var env : envs) {
          env.taint();
        }
      }
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (getClass() != o.getClass()) return false;
      State that = (State) o;
      return Objects.equals(registerOrigins, that.registerOrigins)
          && Objects.equals(envs, that.envs);
    }

    @Override
    public int hashCode() {
      return Objects.hash(registerOrigins, envs);
    }
  }

  /// A single environment frame on the env stack.
  static final class EnvFrame {
    final Map<NamedVariable, VariableInfo> variables = new LinkedHashMap<>();
    /// Set when reflection has run while this frame was on the stack: the previously-known
    /// variables are forgotten, and arbitrary other variables may now be present here.
    boolean tainted = false;

    EnvFrame copy() {
      var copy = new EnvFrame();
      copy.tainted = tainted;
      for (var e : variables.entrySet()) {
        copy.variables.put(e.getKey(), e.getValue().copy());
      }
      return copy;
    }

    void merge(EnvFrame other) {
      if (tainted || other.tainted) {
        // Tainted on either side means we can't trust the contents of this frame.
        taint();
        return;
      }
      // Vars in this but not in other: the other path didn't store them, so they may be absent.
      for (var e : variables.entrySet()) {
        if (!other.variables.containsKey(e.getKey())) {
          e.getValue().mayBeAbsent = true;
        }
      }
      // Vars in other.
      for (var e : other.variables.entrySet()) {
        var info = variables.get(e.getKey());
        if (info == null) {
          var copy = e.getValue().copy();
          copy.mayBeAbsent = true;
          variables.put(e.getKey(), copy);
        } else {
          info.merge(e.getValue());
        }
      }
    }

    void taint() {
      tainted = true;
      variables.clear();
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (!(o instanceof EnvFrame other)) return false;
      return tainted == other.tainted && variables.equals(other.variables);
    }

    @Override
    public int hashCode() {
      return Objects.hash(variables, tainted);
    }
  }

  /// Per-variable information stored in an [EnvFrame].
  static final class VariableInfo {
    static VariableInfo of(Argument origin) {
      var info = new VariableInfo();
      info.origins.add(origin);
      return info;
    }

    final TreeSet<Argument> origins = new TreeSet<>(Comparator.comparing(Argument::toString));
    /// True iff on at least one reaching path the variable was not stored in this frame.
    boolean mayBeAbsent = false;

    VariableInfo copy() {
      var copy = new VariableInfo();
      copy.origins.addAll(origins);
      copy.mayBeAbsent = mayBeAbsent;
      return copy;
    }

    void merge(VariableInfo other) {
      origins.addAll(other.origins);
      mayBeAbsent |= other.mayBeAbsent;
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (!(o instanceof VariableInfo other)) return false;
      return mayBeAbsent == other.mayBeAbsent && origins.equals(other.origins);
    }

    @Override
    public int hashCode() {
      return Objects.hash(origins, mayBeAbsent);
    }
  }

  /// `null` iff unknown.
  private record ReturnOrigin(@Nullable Argument inner) {
    ReturnOrigin merge(@Nullable ReturnOrigin other) {
      return other == null || Objects.equals(inner, other.inner) ? this : new ReturnOrigin(null);
    }
  }
}
