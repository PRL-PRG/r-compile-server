package org.prlprg.fir.analyze.resolve;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.IdentityHashMap;
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
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
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
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.Maybe;
import org.prlprg.util.Streams;

/// Computes each variable's **origin**: the earliest known register or constant that it was
/// assigned.
///
/// Named variable origins are different at different locations. Register origins are the same
/// throughout all locations (SSA).
///
/// Named variables may have multiple possible origins or `null` (undefined). Every register has
/// one origin, which in the worst case is itself.
///
/// Register rules:
/// - If a register is assigned a constant (`a = 42`), the constant is its origin.
/// - If a register is assigned another register (`b = a`), that register's origin becomes its
///   origin (this is transitive; in `b = a; c = b`, `c`'s origin is `a`).
/// - If a register is assigned a (local or super) load whose named variable has a single origin
///   at the position, that becomes its origin.
/// - If a register is assigned a call that can be constant-folded, its origin is the computed
///   constant.
/// - Otherwise, its origin is itself.
///
/// Named variables live on a stack of environments, pushed by [MkEnv] and popped by [PopEnv].
/// Named variable rules:
/// - A local store writes the topmost environment.
/// - A local load reads from the highest environment in which the variable is present, falling
///   through to the parent if the topmost may or may not have it.
/// - A super load/store works the same way, but starts from the highest non-topmost environment.
/// - A reflective instruction "taints" every environment; any lookup that reaches a tainted
///   environment is ambiguous. Static environments are always tainted.
public final class OriginAnalysis extends AbstractInterpretation<State> implements Analysis {
  private final InferType inferType;
  private final InferEffects inferEffects;
  private final Map<Register, Argument> registerOrigins = new HashMap<>();

  /// Creates and runs the analysis.
  public OriginAnalysis(Abstraction scope) {
    this(scope, new InferType(scope), new InferEffects(scope));
  }

  /// Creates and runs the analysis.
  @AnalysisConstructor
  public OriginAnalysis(Abstraction scope, InferType inferType, InferEffects inferEffects) {
    super(scope);
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

  /// Gets the origin of an argument.
  ///
  /// - [Read] = looks up its origin
  /// - [Consume] = looks up its origin, which is always [Read] in valid code, and wraps in
  ///   [Consume]
  /// - [Constant] = returns itself
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

  /// Iff the argument is a [Read] or [Consume], looks up the expression it's assigned to.
  ///
  /// e.g. in `a = v(I)[1, 2, 3]; b = a`, `resolveExpression(a)` and `resolveExpression(b)`
  /// return `v(I)[1, 2, 3]`.
  public @Nullable Expression resolveExpression(Argument arg) {
    return definitionExpression(resolve(arg));
  }

  /// Same as [#resolveExpression(Argument)], but skips finding the argument's origin.
  ///
  /// e.g. in `a = v(I)[1, 2, 3]; b = a`, `definitionExpression(a)` returns `v(I)[1, 2, 3]`, and
  /// `definitionExpression(b)` returns `a`.
  private @Nullable Expression definitionExpression(Argument origin) {
    var statement = definitionStatement(origin);
    return statement == null ? null : statement.expression();
  }

  /// Iff the argument is a [Read] or [Consume], looks up the [Statement] it's assigned to (whose
  /// arguments are the operation's operands).
  public @Nullable Statement resolveStatement(Argument arg) {
    return definitionStatement(resolve(arg));
  }

  private @Nullable Statement definitionStatement(Argument origin) {
    if (!(origin instanceof Read(var originReg))) {
      return null;
    }
    // A register's defining statement is intrinsic in the def-use model.
    return originReg instanceof AssigneeOf ao ? ao.statement() : null;
  }

  /// Gets the origin of a named variable after a specific location.
  ///
  /// `null` iff the variable's origin can't be uniquely determined: either there are multiple
  /// possible origins, or it's completely unknown.
  public @Nullable Argument get(BB bb, int instructionIndex, NamedVariable variable) {
    return uniqueOrNull(at(bb, instructionIndex).load(variable));
  }

  /// Gets the possible origins of a named variable after a specific location.
  ///
  /// This is empty iff the variable's origin is completely unknown (infinite set).
  public @UnmodifiableView Set<Argument> getPossible(
      BB bb, int instructionIndex, NamedVariable variable) {
    var origins = at(bb, instructionIndex).load(variable);
    return origins == null ? Set.of() : Set.copyOf(origins);
  }

  /// Returns true iff any local environment at this location is tainted or may define any of
  /// `variables`
  ///
  /// This ignores the untracked static environment below the local environment stack
  public boolean anyMayBeLocal(BB bb, int instructionIndex, Collection<NamedVariable> variables) {
    return at(bb, instructionIndex).mayContainAny(variables);
  }

  /// Gets the origin of the return value.
  ///
  /// `null` iff there are no returns, a return has unknown origin, or the possible return
  /// origins are different.
  public @Nullable Argument getReturn() {
    var mainCfg = scope.cfg();
    if (mainCfg == null) {
      // Stub
      return null;
    }

    return ((OnCfg) onCfg(mainCfg)).returnOrigin();
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
      var assignee = statement.assignee();
      var origin = computeOrigin(statement);
      if (assignee != null) {
        put(assignee, origin);
        trackAssigneePromise(assignee, statement);
      }
    }

    /// Tracks whether `assignee` holds a known promise, in `State#registerPromises`.
    ///
    /// A register holds a known promise iff it was assigned a [Promise] expression, copied from
    /// another register that held one (through a value-preserving cast or type-assumption), or
    /// loaded from a variable that held one. Anything else (including a [Force], whose result is
    // the
    /// forced *value*) clears the entry.
    private void trackAssigneePromise(Register assignee, Statement statement) {
      switch (statement.expression()) {
        case Promise promise -> state().registerPromises.put(assignee, new PromiseOrigin(promise));
        // A cast or type-assumption is value-preserving, so it propagates the promise (if any).
        case Cast _ -> copyArgPromise(statement.arg(0), assignee);
        case Assume(AssumeType _) -> copyArgPromise(statement.arg(0), assignee);
        case Load(var loadType, var variable) -> {
          var po =
              switch (loadType) {
                case LOCAL_VAR -> state().loadPromiseFrom(variable, state().envs.size() - 1);
                case SUPER_VAR -> state().loadPromiseFrom(variable, state().envs.size() - 2);
                case LOCAL_FUN, GLOBAL_FUN, BASE_FUN -> null;
              };
          if (po == null) {
            state().registerPromises.remove(assignee);
          } else {
            state().registerPromises.put(assignee, po);
          }
        }
        default -> state().registerPromises.remove(assignee);
      }
    }

    private void copyArgPromise(Argument from, Register to) {
      var po = promiseOf(from);
      if (po == null) {
        state().registerPromises.remove(to);
      } else {
        state().registerPromises.put(to, po);
      }
    }

    private @Nullable Argument computeOrigin(Statement statement) {
      var args = statement.args();
      return switch (statement.expression()) {
        case Store(var storeType, var variable) -> {
          var o = resolve(args.get(0));
          var po = promiseOf(args.get(0));
          switch (storeType) {
            case LOCAL_VAR -> {
              state().store(variable, o);
              state().storePromise(variable, po);
            }
            case SUPER_VAR -> {
              state().superStore(variable, o);
              // A super-store may write the global (untracked) env, so we can't track where the
              // promise lives; conservatively leak it (it may be forced from anywhere later).
              if (po != null) {
                state().leakedPromises.add(po);
              }
            }
          }
          yield null;
        }
        case Load(var loadType, var variable) -> {
          // Java is dumb:
          // replacing `case GLOBAL_FUN, BASE_FUN` with `default` removes the need for `= null`
          Set<Argument> origins = null;
          switch (loadType) {
            case LOCAL_VAR -> origins = state().load(variable);
            case LOCAL_FUN -> origins = state().loadFun(variable);
            case SUPER_VAR -> origins = state().superLoad(variable);
            case GLOBAL_FUN, BASE_FUN -> {
              // Must actually be looked up
              yield null;
            }
          }
          yield uniqueOrNull(origins);
        }
        case Cast(var type) -> {
          var valueOrigin = resolve(args.get(0));
          // Only see through the cast if it's guaranteed to succeed.
          // Otherwise, we'll get a type error substituting,
          // and a runtime error iff the instruction gets rearranged before the cast
          // and the cast would fail.
          var valueType = inferType.of(valueOrigin);
          yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
        }
        case Assume(var assumption) ->
            switch (assumption) {
              case AssumeType(var type) -> {
                var valueOrigin = resolve(args.get(0));

                // Only see through the assumption if it's guaranteed to succeed.
                // Otherwise, we'll get a type error substituting,
                // and a deopt iff the instruction gets rearranged before the assumption
                // and the assumption fails
                var valueType = inferType.of(valueOrigin);
                yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
              }
              case AssumeFunction(var functionRef) -> {
                var targetOrigin = resolve(args.get(0));

                // Again, only see through the assumption if it's guaranteed to succeed
                var targetOriginExpr = definitionExpression(targetOrigin);
                yield targetOriginExpr instanceof Closure(_, var originFucntionRef)
                        && originFucntionRef.get().equals(functionRef.get())
                    ? targetOrigin
                    : null;
              }
              case AssumeLoadFun(var variable, var functionRef) -> {
                var targetOrigins = state().loadFun(variable);
                // We don't support multiple origins for an *expression* or *register*
                if (targetOrigins == null || targetOrigins.size() != 1) {
                  yield null;
                }
                var targetOrigin = targetOrigins.iterator().next();

                // Again, only see through the assumption if it's guaranteed to succeed
                var targetOriginExpr = definitionExpression(targetOrigin);
                yield targetOriginExpr instanceof Closure(_, var originFucntionRef)
                        && originFucntionRef.get().equals(functionRef.get())
                    ? targetOrigin
                    : null;
              }
              case AssumeConstant _, AssumeLoadVar _ -> null;
            };
        case Force(var isMaybe) -> {
          var value = args.get(0);
          var po = promiseOf(value);
          if (po != null) {
            // Forcing a known promise: run its body and apply its effects (see `force`).
            // Even a "maybe force" does a full force when it encounters a promise;
            // "maybe" means something different in both contexts:
            // - `isMaybe` means `value` may or may not be a promise
            // - `maybeForce` means the argument (which must be a promise according to Java
            //   types) may or may not be forced
            force(po);
            yield po.value;
          }

          var forceeOrigin = resolve(value);
          var forceeType = inferType.of(forceeOrigin);
          if (isMaybe && forceeType != null && forceeType.isValue()) {
            // We're maybe-forcing a value, so just return it.
            yield forceeOrigin;
          }

          // We're forcing an unknown thing. It may be one of the leaked promises (which we then
          // maybe-force), and (even if not, it may be reflective, so) taint named-variable origins.
          maybeForceLeaked();
          state().taintViaReflection();
          yield null;
        }
        // Creating a promise doesn't run its body; that happens when it's forced. The promise is
        // tracked in `State#registerPromises` (see `trackAssigneePromise`).
        case Promise _ -> null;
        case Call(var callee) -> {
          var closureOrCalleeArg = args.get(0);
          var callArgs = args.subList(1, args.size());
          var constantFolded = tryConstantFold(callee, closureOrCalleeArg, callArgs);
          if (constantFolded != null) {
            yield constantFolded;
          }

          // Promise arguments. A *strict* parameter is definitely forced in the callee before
          // reflection. A *non-strict* promise argument may escape and be forced at an unknown
          // point (maybe forced in this call, but it's superseded because it may be force in
          // *any* future call)
          var strictnesses =
              callee instanceof StaticFnCallee(_, _, var signature)
                  ? signature.parameterStrictnesses()
                  : null;
          for (var i = 0; i < callArgs.size(); i++) {
            var po = promiseOf(callArgs.get(i));
            if (po == null) {
              continue;
            }
            if (strictnesses != null && i < strictnesses.length() && strictnesses.get(i)) {
              force(po);
            } else {
              // We'll maybe-force leaked promises after the loop
              state().leakedPromises.add(po);
            }
          }

          if (inferEffects.of(statement).reflect()
              || (callee instanceof StaticFnCallee
                  && !closureOrCalleeArg.equals(Constant.ELIDED_CLOSURE))) {
            state().taintViaReflection();
          }

          // Any call may force any leaked promise, at an unknown point (hence after the taint).
          maybeForceLeaked();
          yield null;
        }
        case MkEnv(var type) -> {
          state().mkEnv(type == MkEnvType.REGULAR);
          yield null;
        }
        case PopEnv _ -> {
          state().popEnv();
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
          // A promise passed to any of these may end up stored somewhere we don't track (a closure
          // capture, a vector element, a reflective store, ...), so it leaks.
          leakPromiseArgs(statement);
          if (inferEffects.of(statement).reflect()) {
            state().taintViaReflection();
          }
          yield null;
        }
      };
    }

    /// Leaks any argument of `statement` that is a known promise (see `State#leakedPromises`).
    private void leakPromiseArgs(Statement statement) {
      for (var arg : statement.args()) {
        var po = promiseOf(arg);
        if (po != null) {
          state().leakedPromises.add(po);
        }
      }
    }

    /// The promise an argument holds, or `null` if it isn't a known promise register.
    private @Nullable PromiseOrigin promiseOf(Argument arg) {
      return arg.variable() != null ? state().registerPromises.get(arg.variable()) : null;
    }

    /// Maybe-forces every leaked promise (they may be forced at an unknown point).
    private void maybeForceLeaked() {
      for (var po : new ArrayList<>(state().leakedPromises)) {
        maybeForce(po);
      }
    }

    /// Definitely forces `po`: runs its body and applies its effects.
    ///
    /// If `po` was definitely not yet forced, its body runs for the first time here, so its stores
    /// are definite and *replace* the current bindings. Otherwise it may have already run, so we
    /// *merge* (its earlier effect must be kept).
    private void force(PromiseOrigin po) {
      if (po.forced != Maybe.YES) {
        var replace = po.forced == Maybe.NO;
        runPromiseBody(po, replace);
        po.forced = Maybe.YES;
      }
    }

    /// Maybe-forces `po`: it may or may not run here, so its body's effects are *merged*.
    private void maybeForce(PromiseOrigin po) {
      if (po.forced != Maybe.NO) {
        // Already (maybe-)forced: its body's effects were already merged into this state. Running
        // it again would only repeat the same merge, and since promise bodies can (via a force of
        // an unknown value) trigger `maybeForceLeaked`, which maybe-forces sibling leaked promises,
        // re-running maybe-forced promises would mutually re-trigger each other and never
        // terminate. The outer CFG worklist re-runs from a fresh state when bindings actually
        // change, so we don't lose soundness by not re-running here.
        return;
      }
      runPromiseBody(po, false);
      po.forced = Maybe.MAYBE;
    }

    /// Runs `po.promise`'s body sub-analysis with the current state, then either replaces the
    // current
    /// environment bindings with the result (the body definitely ran) or merges them (it may have).
    /// Sets `po.value` to the return origin.
    private void runPromiseBody(PromiseOrigin po, boolean replace) {
      var subAnalysis = (OnCfg) onCfg(po.promise.code());

      if (subAnalysis.isRunning()) {
        // The promise's body is already being analyzed higher on the stack, so forcing it here is a
        // recursive force (a "promise already under evaluation" runtime error). Re-entering would
        // corrupt the in-progress analysis (the shared `OnCfg` reuses its state/cursor and nulls
        // its state on exit), so bail out and conservatively treat the forced value as unknown.
        return;
      }

      subAnalysis.run(state());

      var returnState = subAnalysis.returnState();
      if (returnState != null) {
        if (replace) {
          state().replaceWith(returnState);
        } else {
          state().merge(returnState);
        }
      }
      po.value = subAnalysis.returnOrigin();
    }

    private @Nullable Argument tryConstantFold(
        Callee callee, Argument closureOrCalleeArg, List<Argument> arguments) {
      if (!(callee instanceof StaticFnCallee(var functionRef, var isDispatch, _))
          || isDispatch
          || !closureOrCalleeArg.equals(Constant.ELIDED_CLOSURE)) {
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
        case "c" -> {
          if (arguments.size() != 1) yield null;
          var dotsStmt = resolveStatement(arguments.getFirst());
          if (dotsStmt == null
              || !(dotsStmt.expression() instanceof MkVector(var dotsKind, var elementNames)))
            yield null;
          if (!(dotsKind instanceof Kind.Dots)) yield null;

          if (elementNames.isEmpty()) yield new Constant(SEXPs.NULL);

          // Only support unnamed primitive SEXP elements. The element values are the MkVector
          // statement's arguments, parallel to `elementNames`.
          var sexps = new ArrayList<SEXP>(elementNames.size());
          for (var i = 0; i < elementNames.size(); i++) {
            if (elementNames.get(i) != null) yield null;
            var elemArg = resolve(dotsStmt.arg(i));
            if (!(elemArg instanceof Constant(Value.Sexp(var elemSexp)))) yield null;
            if (!(elemSexp instanceof LglSXP
                || elemSexp instanceof IntSXP
                || elemSexp instanceof RealSXP
                || elemSexp instanceof StrSXP)) yield null;
            sexps.add(elemSexp);
          }

          // Determine widest type: 0=lgl, 1=int, 2=real, 3=str
          int widest = 0;
          for (var s : sexps) {
            int w =
                s instanceof LglSXP ? 0 : s instanceof IntSXP ? 1 : s instanceof RealSXP ? 2 : 3;
            if (w > widest) widest = w;
          }

          // Count total elements
          int total = 0;
          for (var s : sexps) total += ((ListOrVectorSXP<?>) s).size();

          yield new Constant(
              switch (widest) {
                case 0 -> {
                  var res = new Logical[total];
                  int i = 0;
                  for (var s : sexps) {
                    var l = (LglSXP) s;
                    for (int j = 0; j < l.size(); j++) res[i++] = l.get(j);
                  }
                  yield SEXPs.logical(res);
                }
                case 1 -> {
                  var res = new int[total];
                  int i = 0;
                  for (var s : sexps) {
                    switch (s) {
                      case LglSXP l -> {
                        for (int j = 0; j < l.size(); j++) res[i++] = l.get(j).toInt();
                      }
                      case IntSXP iv -> {
                        for (int j = 0; j < iv.size(); j++) res[i++] = iv.get(j);
                      }
                      default -> throw new AssertionError();
                    }
                  }
                  yield SEXPs.integer(res);
                }
                case 2 -> {
                  var res = new double[total];
                  int i = 0;
                  for (var s : sexps) {
                    switch (s) {
                      case LglSXP l -> {
                        for (int j = 0; j < l.size(); j++) res[i++] = l.get(j).toInt();
                      }
                      case IntSXP iv -> {
                        for (int j = 0; j < iv.size(); j++) res[i++] = iv.get(j);
                      }
                      case RealSXP rv -> {
                        for (int j = 0; j < rv.size(); j++) res[i++] = rv.get(j);
                      }
                      default -> throw new AssertionError();
                    }
                  }
                  yield SEXPs.real(res);
                }
                default -> {
                  var res = new String[total];
                  int i = 0;
                  for (var s : sexps) {
                    switch (s) {
                      case LglSXP l -> {
                        for (int j = 0; j < l.size(); j++) res[i++] = l.get(j).toString();
                      }
                      case IntSXP iv -> {
                        for (int j = 0; j < iv.size(); j++) res[i++] = String.valueOf(iv.get(j));
                      }
                      case RealSXP rv -> {
                        for (int j = 0; j < rv.size(); j++) res[i++] = String.valueOf(rv.get(j));
                      }
                      case StrSXP sv -> {
                        for (int j = 0; j < sv.size(); j++) res[i++] = sv.get(j);
                      }
                      default -> throw new AssertionError();
                    }
                  }
                  yield SEXPs.string(res);
                }
              });
        }
        case "[", "[[" -> {
          if (arguments.size() != 4) yield null;
          var vectorArg = resolve(arguments.get(0));
          var idxArg = resolve(arguments.get(1));

          if (!(vectorArg instanceof Constant(Value.Sexp(var vSexp))
              && vSexp instanceof ListOrVectorSXP<?> vector)) yield null;

          int idx;
          if (idxArg instanceof Constant(Value.Int(var i))) {
            idx = i;
          } else if (idxArg instanceof Constant(Value.Sexp(var iSexp))
              && iSexp instanceof IntSXP iVec
              && iVec.size() == 1) {
            idx = iVec.get(0);
          } else {
            yield null;
          }

          if (idx < 1 || idx > vector.size()) yield null;

          Value elementValue =
              switch (vector) {
                case LglSXP l -> new Value.Lgl(l.get(idx - 1));
                case IntSXP iv -> new Value.Int(iv.get(idx - 1));
                case RealSXP rv -> new Value.Real(rv.get(idx - 1));
                case StrSXP sv -> new Value.Str(sv.get(idx - 1));
                default -> null;
              };

          yield elementValue == null ? null : new Constant(elementValue);
        }
        case "[<-" -> {
          if (arguments.size() != 4) yield null;
          var vectorArg = resolve(arguments.get(0));
          var idxArg = resolve(arguments.get(1));
          var valueArg = resolve(arguments.get(2));

          if (!(vectorArg instanceof Constant(Value.Sexp(var vSexp))
              && vSexp instanceof ListOrVectorSXP<?> vector)) yield null;

          int idx;
          if (idxArg instanceof Constant(Value.Int(var i))) {
            idx = i;
          } else if (idxArg instanceof Constant(Value.Sexp(var iSexp))
              && iSexp instanceof IntSXP iVec
              && iVec.size() == 1) {
            idx = iVec.get(0);
          } else {
            yield null;
          }

          if (idx < 1 || idx > vector.size()) yield null;

          var copied = vector.copy();
          boolean stored =
              switch (copied) {
                case LglSXP l -> {
                  if (!(valueArg instanceof Constant(Value.Lgl(var v)))) yield false;
                  l.set(idx - 1, v);
                  yield true;
                }
                case IntSXP iv -> {
                  if (!(valueArg instanceof Constant(Value.Int(var v)))) yield false;
                  iv.set(idx - 1, v);
                  yield true;
                }
                case RealSXP rv -> {
                  if (!(valueArg instanceof Constant(Value.Real(var v)))) yield false;
                  rv.set(idx - 1, v);
                  yield true;
                }
                case StrSXP sv -> {
                  if (!(valueArg instanceof Constant(Value.Str(var v)))) yield false;
                  sv.set(idx - 1, v);
                  yield true;
                }
                default -> false;
              };

          yield stored ? new Constant(copied) : null;
        }
        case "[[<-" -> {
          if (arguments.size() != 3) yield null;
          var vectorArg = resolve(arguments.get(0));
          var idxArg = resolve(arguments.get(1));
          var valueArg = resolve(arguments.get(2));

          if (!(vectorArg instanceof Constant(Value.Sexp(var vSexp))
              && vSexp instanceof ListOrVectorSXP<?> vector)) yield null;

          int idx;
          if (idxArg instanceof Constant(Value.Int(var i))) {
            idx = i;
          } else if (idxArg instanceof Constant(Value.Sexp(var iSexp))
              && iSexp instanceof IntSXP iVec
              && iVec.size() == 1) {
            idx = iVec.get(0);
          } else {
            yield null;
          }

          if (idx < 1 || idx > vector.size()) yield null;

          var copied = vector.copy();
          boolean stored =
              switch (copied) {
                case LglSXP l -> {
                  if (!(valueArg instanceof Constant(Value.Lgl(var v)))) yield false;
                  l.set(idx - 1, v);
                  yield true;
                }
                case IntSXP iv -> {
                  if (!(valueArg instanceof Constant(Value.Int(var v)))) yield false;
                  iv.set(idx - 1, v);
                  yield true;
                }
                case RealSXP rv -> {
                  if (!(valueArg instanceof Constant(Value.Real(var v)))) yield false;
                  rv.set(idx - 1, v);
                  yield true;
                }
                case StrSXP sv -> {
                  if (!(valueArg instanceof Constant(Value.Str(var v)))) yield false;
                  sv.set(idx - 1, v);
                  yield true;
                }
                default -> false;
              };

          yield stored ? new Constant(copied) : null;
        }
        default -> null;
      };
    }

    @Override
    protected void run(Jump jump) {
      if (jump.expression() instanceof Return) {
        returnOrigin = new ReturnOrigin(jump.arg(0)).merge(returnOrigin);
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
  }

  public final class State implements AbstractInterpretation.State<State> {
    /// Register origins are global, but `State` must store them, so that states with different
    /// register origins aren't equal, so that we re-run blocks whose register origin
    /// dependencies changed.
    private final Map<Register, Optional<Argument>> registerOrigins = new LinkedHashMap<>();
    /// The stack of local environments; the last entry is the topmost (innermost).
    private final List<EnvFrame> envs = new ArrayList<>();
    /// Registers known to hold a specific promise (assigned a [Promise], or copied/loaded from
    /// one).
    private final Map<Register, PromiseOrigin> registerPromises = new LinkedHashMap<>();
    /// Promises that may have escaped into an unknown register or variable (passed non-strictly to
    /// a call, super-/reflectively-stored, captured, ...). They're maybe-forced within any call and
    /// any force of an unknown promise, since we can no longer tell when they're forced.
    private final Set<PromiseOrigin> leakedPromises = new LinkedHashSet<>();

    private void mkEnv(boolean reflectivelyAccessible) {
      envs.add(new EnvFrame(reflectivelyAccessible));
    }

    private void popEnv() {
      if (!envs.isEmpty()) {
        envs.removeLast();
      }
    }

    /// Resolves a load of `variable` against the env stack starting from the topmost frame.
    private @Nullable Set<Argument> load(NamedVariable variable) {
      return loadFrom(variable, envs.size() - 1);
    }

    /// Resolves a "super" load of `variable`, which starts from the highest non-topmost frame.
    private @Nullable Set<Argument> superLoad(NamedVariable variable) {
      return loadFrom(variable, envs.size() - 2);
    }

    /// Walks the env stack downward starting at `frameIdx` and returns all possible load origins.
    ///
    /// `null` indicates at least one reaching path has unknown origin (e.g. the variable falls off
    /// the bottom of the stack into the global env, or the relevant frame is tainted).
    private @Nullable Set<Argument> loadFrom(NamedVariable variable, int frameIdx) {
      var candidates = new LinkedHashSet<Argument>();

      for (; frameIdx >= 0; frameIdx--) {
        var frame = envs.get(frameIdx);

        if (frame.tainted) {
          // Tainted env = completely unknown (infinite candidates)
          return null;
        }

        var info = frame.variables.get(variable);

        if (info != null) {
          candidates.addAll(info.origins);
        }

        if (info != null && !info.mayBeAbsent) {
          // Stop looking through parents
          return candidates;
        }
      }

      // Static env = tainted = completely unknown (infinite candidates)
      return null;
    }

    /// Function lookup: same as [#load(NamedVariable)], but treats non-functions as absent
    /// (and maybe-functions as maybe absent). Additionally, handles maybe-reflective-forces
    private @Nullable Set<Argument> loadFun(NamedVariable variable) {
      var candidates = new LinkedHashSet<Argument>();

      for (int frameIdx = envs.size() - 1; frameIdx >= 0; frameIdx--) {
        var frame = envs.get(frameIdx);

        if (frame.tainted) {
          // Tainted env = completely unknown (infinite candidates)
          return null;
        }

        var info = frame.variables.get(variable);

        var mayBeAbsent = info == null || info.mayBeAbsent;
        if (info != null) {
          for (var origin : info.origins) {
            var originType = inferType.of(origin);

            // Taint iff maybe a reflective force
            if (originType != null && originType.promisity().effects().reflect()) {
              return null;
            }

            // Only add if maybe-closure, set `mayBeAbsent` if maybe-not-closure
            if (originType != null
                && Type.CLOSURE.isSubtypeOf(originType.withPromisity(Promisity.ANY))) {
              candidates.add(origin);
            }
            if (originType != null
                && !originType.isSubtypeOf(Type.CLOSURE.withPromisity(Promisity.ANY))) {
              mayBeAbsent = true;
            }
          }
        }

        if (!mayBeAbsent) {
          // Stop looking through parents
          return candidates;
        }
      }

      // Static env = tainted = completely unknown (infinite candidates)
      return null;
    }

    private void store(NamedVariable variable, Argument value) {
      if (envs.isEmpty()) {
        // Stores in the untracked static env.
        return;
      }
      envs.getLast().variables.put(variable, VariableInfo.of(value));
    }

    /// Stores in the highest non-topmost frame where the variable is present.
    ///
    /// In a frame where the variable may-or-may-not be present, the store may write here or
    /// fall through to a deeper frame, so we union the new value into the local origins (still
    /// maybe-absent) and continue searching.
    private void superStore(NamedVariable variable, Argument value) {
      var isAmbiguous = false;
      for (int frameIdx = envs.size() - 2; frameIdx >= 0; frameIdx--) {
        var frame = envs.get(frameIdx);
        if (frame.tainted) {
          // May store to tainted, maybe-store in super
          isAmbiguous = true;
          continue;
        }

        var info = frame.variables.get(variable);

        if (info == null) {
          // Definitely not present, (if ambiguous, maybe-)store in super
          continue;
        }

        if (!info.mayBeAbsent) {
          // Definitely present, (if ambiguous, maybe-)store here
          if (!isAmbiguous) {
            info.origins.clear();
          }
          info.origins.add(value);
          return;
        }

        // Maybe present, maybe-store here and maybe-store in super
        info.origins.add(value);
        isAmbiguous = true;
      }

      // Fell through to the global env (not tracked).
    }

    /// The promise `variable` definitely holds, walking the env stack from `frameIdx` like
    /// [#loadFrom], or `null` if it isn't a uniquely-known promise. Any promise the variable
    /// *might* (but not definitely uniquely) hold is leaked, since the loaded register can't track
    /// it.
    private @Nullable PromiseOrigin loadPromiseFrom(NamedVariable variable, int frameIdx) {
      var ambiguous = false;
      var maybe = new ArrayList<PromiseOrigin>();
      for (; frameIdx >= 0; frameIdx--) {
        var frame = envs.get(frameIdx);
        if (frame.tainted) {
          // ambiguous = true; (unused)
          break;
        }
        var info = frame.variables.get(variable);
        if (info == null) {
          continue;
        }
        var po = frame.variablePromises.get(variable);
        if (!info.mayBeAbsent) {
          // Definitely present in this frame.
          if (!ambiguous /* && maybe.isEmpty() (always true) */) {
            return po; // unique (`null` => definitely a non-promise)
          }
          if (po != null) {
            maybe.add(po);
          }
          break;
        }
        // Maybe present here, maybe falls through to a parent: ambiguous.
        ambiguous = true;
        if (po != null) {
          maybe.add(po);
        }
      }
      // Ambiguous or fell off the bottom: can't track, so leak any candidate(s).
      leakedPromises.addAll(maybe);
      return null;
    }

    /// Records (or, if `po` is `null`, clears) the promise a local store wrote to `variable`.
    ///
    /// Mirrors [#store]: writes the topmost frame.
    private void storePromise(NamedVariable variable, @Nullable PromiseOrigin po) {
      if (envs.isEmpty()) {
        // Stored in the untracked static env; if it's a promise, it escaped.
        if (po != null) {
          leakedPromises.add(po);
        }
        return;
      }
      if (po == null) {
        envs.getLast().variablePromises.remove(variable);
      } else {
        envs.getLast().variablePromises.put(variable, po);
      }
    }

    private void taintViaReflection() {
      for (var env : envs) {
        if (env.reflectivelyAccessible) {
          env.taint();
        }
      }
    }

    private boolean mayContainAny(Collection<NamedVariable> variables) {
      if (variables.isEmpty()) {
        return false;
      }
      for (var env : envs) {
        if (env.tainted || variables.stream().anyMatch(env.variables::containsKey)) {
          return true;
        }
      }
      return false;
    }

    @Override
    public State copy() {
      var copy = new State();
      copy.registerOrigins.putAll(registerOrigins);
      var poMap = new IdentityHashMap<PromiseOrigin, PromiseOrigin>();
      registerPromises.forEach((r, po) -> copy.registerPromises.put(r, po.copyVia(poMap)));
      for (var po : leakedPromises) {
        copy.leakedPromises.add(po.copyVia(poMap));
      }
      for (var env : envs) {
        copy.envs.add(env.copy(poMap));
      }
      return copy;
    }

    /// Replaces the state with `other`
    private void replaceWith(State other) {
      registerOrigins.clear();
      registerOrigins.putAll(other.registerOrigins);

      var poMap = new IdentityHashMap<PromiseOrigin, PromiseOrigin>();
      envs.clear();
      for (var env : other.envs) {
        envs.add(env.copy(poMap));
      }

      registerPromises.clear();
      registerPromises.putAll(other.registerPromises);

      leakedPromises.clear();
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

      var canonical = canonicalPromises();

      mergeVariablePromises(registerPromises, other.registerPromises, leakedPromises, canonical);

      // A promise leaked on either path is leaked.
      for (var po : other.leakedPromises) {
        leakedPromises.add(incorporate(po, canonical));
      }

      // Merge env stacks. Well-formed IR balances mkenv/popenv, so the depths should match.
      // If they don't, the stack is ambiguous; we collapse to the shorter depth and taint the
      // surviving frames (leaking any promises we forget).
      if (envs.size() == other.envs.size()) {
        for (int i = 0; i < envs.size(); i++) {
          envs.get(i).merge(other.envs.get(i), canonical, leakedPromises);
        }
      } else {
        while (envs.size() > other.envs.size()) {
          var dropped = envs.removeLast();
          leakedPromises.addAll(dropped.variablePromises.values());
        }
        for (var env : other.envs) {
          for (var po : env.variablePromises.values()) {
            leakedPromises.add(incorporate(po, canonical));
          }
        }
        taintViaReflection();
      }
    }

    /// Builds a `promise -> origin` map of this state's promises, used to canonicalize promises
    /// incorporated from another state during [#merge] (keeping one [PromiseOrigin] per promise).
    private Map<Promise, PromiseOrigin> canonicalPromises() {
      // Keyed by promise *identity* (structural equality of a promise recurses through its entire
      // body CFG, which is expensive and can overflow the stack; see `PromiseOrigin#equals`).
      var canonical = new IdentityHashMap<Promise, PromiseOrigin>();
      registerPromises.values().forEach(po -> canonical.putIfAbsent(po.promise, po));
      leakedPromises.forEach(po -> canonical.putIfAbsent(po.promise, po));
      for (var env : envs) {
        env.variablePromises.values().forEach(po -> canonical.putIfAbsent(po.promise, po));
      }
      return canonical;
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (getClass() != o.getClass()) return false;
      State that = (State) o;
      return Objects.equals(registerOrigins, that.registerOrigins)
          && Objects.equals(envs, that.envs)
          && Objects.equals(registerPromises, that.registerPromises)
          && Objects.equals(leakedPromises, that.leakedPromises);
    }

    @Override
    public int hashCode() {
      return Objects.hash(registerOrigins, envs, registerPromises, leakedPromises);
    }
  }

  /// Merge register or named variable promises
  ///
  /// A variable register holds a known promise only if both states agree it holds the *same*
  /// promise (then merge how-forced). Otherwise it's ambiguous, so any promise it might hold
  /// leaks and we stop tracking it.
  private static <Var> void mergeVariablePromises(
      Map<Var, PromiseOrigin> variablePromises,
      Map<Var, PromiseOrigin> otherVariablePromises,
      Set<PromiseOrigin> leakedPromises,
      Map<Promise, PromiseOrigin> canonical) {
    var registers = new LinkedHashSet<>(variablePromises.keySet());
    registers.addAll(otherVariablePromises.keySet());
    for (var r : registers) {
      var a = variablePromises.get(r);
      var b = otherVariablePromises.get(r);
      if (a != null && b != null && a.promise == b.promise) {
        a.forced = a.forced.union(b.forced);
      } else {
        if (a != null) {
          leakedPromises.add(a);
        }
        if (b != null) {
          leakedPromises.add(incorporate(b, canonical));
        }
        variablePromises.remove(r);
      }
    }
  }

  /// Returns the canonical [PromiseOrigin] for `other`'s promise in `canonical` (merging the
  /// how-forced status), creating one if absent. Used to fold a promise from another state into
  /// the one being merged into, keeping a single [PromiseOrigin] per promise.
  private static PromiseOrigin incorporate(
      PromiseOrigin other, Map<Promise, PromiseOrigin> canonical) {
    var existing = canonical.get(other.promise);
    if (existing != null) {
      existing.forced = existing.forced.union(other.forced);
      return existing;
    }
    var fresh = other.copy();
    canonical.put(other.promise, fresh);
    return fresh;
  }

  /// A single environment frame in a state's environment stack.
  static final class EnvFrame {
    final Map<NamedVariable, VariableInfo> variables = new LinkedHashMap<>();
    /// Variables known to hold a specific promise (a subset of the keys of [#variables]).
    final Map<NamedVariable, PromiseOrigin> variablePromises = new LinkedHashMap<>();
    /// Whether the environment is tainted by reflection
    boolean reflectivelyAccessible;
    /// Set when reflection has run while this frame was on the stack: the previously-known
    /// variables are forgotten, and arbitrary other variables may now be present here.
    boolean tainted = false;

    EnvFrame(boolean reflectivelyAccessible) {
      this.reflectivelyAccessible = reflectivelyAccessible;
    }

    void taint() {
      tainted = true;
      variables.clear();
      variablePromises.clear();
    }

    EnvFrame copy(IdentityHashMap<PromiseOrigin, PromiseOrigin> poMap) {
      var copy = new EnvFrame(reflectivelyAccessible);
      copy.tainted = tainted;
      for (var e : variables.entrySet()) {
        copy.variables.put(e.getKey(), e.getValue().copy());
      }
      for (var e : variablePromises.entrySet()) {
        copy.variablePromises.put(e.getKey(), e.getValue().copyVia(poMap));
      }
      return copy;
    }

    void merge(
        EnvFrame other, Map<Promise, PromiseOrigin> canonical, Set<PromiseOrigin> leakedPromises) {
      reflectivelyAccessible &= other.reflectivelyAccessible;
      if (tainted || other.tainted) {
        // Result = tainted; leak the promises both frames forget.
        leakedPromises.addAll(variablePromises.values());
        for (var po : other.variablePromises.values()) {
          leakedPromises.add(incorporate(po, canonical));
        }
        taint();
        return;
      }
      // Vars in this but not in other: the other path didn't store them, so they may be absent.
      for (var e : variables.entrySet()) {
        if (!other.variables.containsKey(e.getKey())) {
          e.getValue().mayBeAbsent = true;
        }
      }
      // Add and merge vars in other.
      for (var e : other.variables.entrySet()) {
        var info = variables.get(e.getKey());
        if (info == null) {
          // In other but no in this, so may be absent.
          var copy = e.getValue().copy();
          copy.mayBeAbsent = true;
          variables.put(e.getKey(), copy);
        } else {
          info.merge(e.getValue());
        }
      }
      mergeVariablePromises(variablePromises, other.variablePromises, leakedPromises, canonical);
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (!(o instanceof EnvFrame other)) return false;
      return tainted == other.tainted
          && variables.equals(other.variables)
          && variablePromises.equals(other.variablePromises);
    }

    @Override
    public int hashCode() {
      return Objects.hash(variables, variablePromises, tainted);
    }
  }

  /// A single named variable in an [EnvFrame] in a [State].
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

  /// A promise known to be held by a register, variable, or leaked, with how-far it's been forced.
  ///
  /// One instance is created per [Promise] expression and shared (within a state) between all the
  /// registers/variables that hold it, so forcing it via any of them updates them all. [#forced]
  /// over-approximates whether the promise's body has run by a given point: [Maybe#NO] (definitely
  /// not yet), [Maybe#MAYBE] (maybe), or [Maybe#YES] (definitely, so it's now a value).
  static final class PromiseOrigin {
    final Promise promise;
    Maybe forced;
    /// Forced value, or `null` if pending
    @Nullable Argument value;

    PromiseOrigin(Promise promise) {
      this(promise, Maybe.NO, null);
    }

    PromiseOrigin(Promise promise, Maybe forced, @Nullable Argument value) {
      this.promise = promise;
      this.forced = forced;
      this.value = value;
    }

    PromiseOrigin copy() {
      return new PromiseOrigin(promise, forced, value);
    }

    /// Copies via `poMap`, so references shared within a state stay shared in the copy.
    PromiseOrigin copyVia(IdentityHashMap<PromiseOrigin, PromiseOrigin> poMap) {
      return poMap.computeIfAbsent(this, PromiseOrigin::copy);
    }

    // A promise is identified by *identity*: one [Promise] expression in the IR corresponds to one
    // logical promise, and copies of a [PromiseOrigin] keep the same [#promise] reference (see
    // [#copyVia]). Structural equality would recurse through the whole body CFG, which is expensive
    // and can overflow the stack (e.g. deeply nested promises), so we never use it here.
    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (!(o instanceof PromiseOrigin other)) return false;
      return promise == other.promise && forced == other.forced && value == other.value;
    }

    @Override
    public int hashCode() {
      return System.identityHashCode(promise) * 31 + Objects.hash(forced, value);
    }
  }
}
