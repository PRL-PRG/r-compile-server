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
import java.util.function.Consumer;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
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
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.RMath;
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
/// - A forced promise's body runs without the environments pushed after the promise was created.
/// - A reflective instruction "taints" every environment; any lookup that reaches a tainted
///   environment is ambiguous. Static environments are always tainted.
public final class OriginAnalysis extends AbstractInterpretation<State> implements Analysis {
  /// Intrinsics that only compare their argument with the missing argument.
  private static final @Unmodifiable Set<String> INSPECTING_INTRINSICS =
      Set.of("checkMissing", "missing");

  private final InferType inferType;
  private final InferEffects inferEffects;
  private final Map<Register, Argument> registerOrigins = new HashMap<>();
  private @Nullable Set<Promise> promisesOnlyForcedInFrame = null;
  /// The number of environments where each analyzed [Promise] is created, by identity.
  private final Map<Promise, Integer> promiseEnvDepths = new IdentityHashMap<>();

  /// The [State#bodyParts] of each [CFG], while the constructor runs the analysis (the IR may
  /// change after it).
  private Map<CFG, List<BodyPart>> bodyParts = new HashMap<>();

  private static final Map<CFG, List<BodyPart>> NO_BODY_PARTS = Map.of();

  /// The count of [CFG]s whose statements [State#bodyParts] scanned (for tests).
  int bodyScans = 0;

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
    bodyParts = NO_BODY_PARTS;
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
    var state = atOrNull(bb, instructionIndex);
    return state == null ? null : uniqueOrNull(state.load(variable));
  }

  /// Gets the possible origins of a named variable after a specific location.
  ///
  /// This is empty iff the variable's origin is completely unknown (infinite set).
  public @UnmodifiableView Set<Argument> getPossible(
      BB bb, int instructionIndex, NamedVariable variable) {
    var state = atOrNull(bb, instructionIndex);
    var origins = state == null ? null : state.load(variable);
    return origins == null ? Set.of() : Set.copyOf(origins);
  }

  /// Returns true iff any local environment at this location is tainted or may define any of
  /// `variables`
  ///
  /// This ignores the untracked static environment below the local environment stack
  public boolean anyMayBeLocal(BB bb, int instructionIndex, Collection<NamedVariable> variables) {
    var state = atOrNull(bb, instructionIndex);
    // Unanalyzed means unknown, and the conservative unknown here is "yes, it may be".
    return state == null || state.mayContainAny(variables);
  }

  /// Gets the origin of the return value.
  ///
  /// `null` iff there are no returns, a return has unknown origin, or the possible return
  /// origins are different.
  public @Nullable Argument getReturn() {
    if (scope.isStub()) {
      return null;
    }

    return ((OnCfg) onCfg(scope.body())).returnOrigin();
  }

  /// Whether each use of the promise is a force or a strict argument in the CFG that creates it,
  /// so its body can only run in that frame (if it's forced before it escapes, it doesn't run
  /// again).
  private boolean isOnlyForcedInFrame(Promise promise) {
    if (promisesOnlyForcedInFrame == null) {
      promisesOnlyForcedInFrame = Collections.newSetFromMap(new IdentityHashMap<>());
      scope
          .streamCfgs()
          .flatMap(cfg -> cfg.bbs().stream().flatMap(bb -> bb.statements().stream()))
          .filter(
              s ->
                  s.expression() instanceof Promise
                      && (s.assignee() == null || isOnlyForcedIn(s.assignee(), s.parentBB())))
          .forEach(s -> promisesOnlyForcedInFrame.add((Promise) s.expression()));
    }
    return promisesOnlyForcedInFrame.contains(promise);
  }

  private static boolean isOnlyForcedIn(Register register, @Nullable BB definingBb) {
    return definingBb != null
        && register.uses().stream()
            .allMatch(
                use ->
                    use.instruction() instanceof Statement s
                        && s.parentBB() != null
                        && s.parentBB().owner() == definingBb.owner()
                        && switch (s.expression()) {
                          case Force _ -> true;
                          case Cast _, Assume(AssumeType _) ->
                              s.assignee() == null || isOnlyForcedIn(s.assignee(), definingBb);
                          case Call(StaticFnCallee(var fn, _, var signature)) ->
                              (fn.get().owner() == INTRINSICS
                                      && INSPECTING_INTRINSICS.contains(fn.get().name().name()))
                                  || (use.index() > 0
                                      && use.index() <= signature.parameterStrictnesses().length()
                                      && signature.parameterStrictnesses().get(use.index() - 1));
                          default -> false;
                        });
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
      runCapturingClosures(statement);
      if (assignee != null) {
        put(assignee, origin);
        trackAssigneePromise(assignee, statement);
      }
    }

    /// A closure that captures an environment may store (`<<-`) into each of its variables when
    /// it runs. It runs in a call that gets it (as the callee or an argument), or in any call or
    /// force after it escapes.
    private void runCapturingClosures(Statement statement) {
      var expression = statement.expression();
      var args = statement.args();
      var passed =
          switch (expression) {
            case Call _ -> args.subList(1, args.size());
            case Store(var storeType, _) when storeType == StoreType.SUPER_VAR -> args;
            case ReflectiveStore _, MkVector _, SubscriptWrite _ -> args;
            default -> List.<Argument>of();
          };
      var escapes = passed.stream().anyMatch(this::mayBeClosure);
      if ((expression instanceof Call || expression instanceof Force)
          && inferEffects.of(statement).impure()) {
        state()
            .runCapturingClosures(
                expression instanceof Call
                    && (escapes || !args.getFirst().equals(Constant.ELIDED_CLOSURE)));
      }
      if (escapes) {
        state().envs.forEach(env -> env.closureEscaped |= env.captured);
      }
    }

    private boolean mayBeClosure(Argument argument) {
      var type = inferType.of(resolve(argument));
      return type == null || Type.CLOSURE.isSubtypeOf(type.withPromisity(Promisity.ANY));
    }

    /// Tracks whether `assignee` holds a known promise, in `State#registerPromises`.
    ///
    /// A register holds a known promise iff it was assigned a [Promise] expression, copied from
    /// another register that held one (through a value-preserving cast or type-assumption), or
    /// loaded from a variable that held one. Anything else (including a [Force], whose result is
    /// the forced *value*) clears the entry.
    private void trackAssigneePromise(Register assignee, Statement statement) {
      switch (statement.expression()) {
        case Promise promise -> {
          promiseEnvDepths.put(promise, state().envs.size());
          state()
              .registerPromises
              .put(assignee, new PromiseOrigin(promise, Maybe.NO, null, state().present()));
        }
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
          var o = resolve(args.getFirst());
          var po = promiseOf(args.getFirst());
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
          var valueOrigin = resolve(args.getFirst());
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
                var valueOrigin = resolve(args.getFirst());

                // Only see through the assumption if it's guaranteed to succeed.
                // Otherwise, we'll get a type error substituting,
                // and a deopt iff the instruction gets rearranged before the assumption
                // and the assumption fails
                var valueType = inferType.of(valueOrigin);
                yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
              }
              case AssumeFunction(var functionRef) -> {
                var targetOrigin = resolve(args.getFirst());

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
          var value = args.getFirst();
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
          maybeForceLeaked(statement);
          state().taintViaReflection();
          yield null;
        }
        // Creating a promise doesn't run its body; that happens when it's forced. The promise is
        // tracked in `State#registerPromises` (see `trackAssigneePromise`).
        case Promise _ -> null;
        case Call(var callee) -> {
          var closureOrCalleeArg = args.getFirst();
          var callArgs = args.subList(1, args.size());
          var constantFolded = tryConstantFold(callee, closureOrCalleeArg, callArgs);
          if (constantFolded != null) {
            yield constantFolded;
          }
          // These intrinsics only compare their argument with the missing argument: they don't
          // force a promise argument, and it doesn't escape.
          if (callee instanceof StaticFnCallee(var fn, _, _)
              && fn.get().owner() == INTRINSICS
              && INSPECTING_INTRINSICS.contains(fn.get().name().name())) {
            yield null;
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

          // The call may force any leaked promise it has the effects to force, at an unknown point
          // (hence after the taint).
          maybeForceLeaked(statement);
          yield null;
        }
        case MkEnv(var type) -> {
          state().mkEnv(statement, type == MkEnvType.REGULAR);
          yield null;
        }
        case PopEnv _ -> {
          // A leaked promise may be forced after the environment is gone, and then reads its last
          // bindings. The body's effects come after this code, so the state stays.
          for (var po : state().leakedPromises) {
            var body = (OnCfg) onCfg(po.promise.code());
            if (po.forced != Maybe.YES && !isOnlyForcedInFrame(po.promise) && !body.isRunning()) {
              var entry = state().copy();
              entry.assumePresent(po.present);
              body.run(entry);
            }
          }
          state().popEnv();
          yield null;
        }
        case Closure(var isStatic, _) when !isStatic -> {
          // The closure captures the environments, so the promises of their variables leak.
          for (var env : state().envs) {
            state().leakedPromises.addAll(env.variablePromises.values());
            env.captured = true;
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

    /// Maybe-forces every leaked promise that `statement` could actually force (they may be forced
    /// at an unknown point).
    ///
    /// Forcing a promise runs its body, so the force is at least as effectful as the body: an
    /// effect-free statement can't run a body that stores or reflects, and an impure one can't run
    /// a reflective body. Filtering by this keeps a pure instruction in the middle of a loop (an
    /// unboxing, an arithmetic builtin, ...) from clobbering the origins of every variable an
    /// escaped promise could have written.
    private void maybeForceLeaked(Statement statement) {
      var effects = inferEffects.of(statement);
      for (var po : new ArrayList<>(state().leakedPromises)) {
        if (po.promise.effects().isSubsetOf(effects)) {
          maybeForce(po);
        }
      }
    }

    /// Definitely forces `po`: runs its body and applies its effects.
    ///
    /// If `po` was definitely not yet forced, its body runs for the first time here, so its stores
    /// are definite and *replace* the current bindings. Otherwise it may have already run, so we
    /// *merge* (its earlier effect must be kept).
    ///
    /// The replaced state has the origins of the body's return state, which don't tell which
    /// origin of `po.promise` stands for `po`, so they all become maybe-forced.
    private void force(PromiseOrigin po) {
      if (po.forced != Maybe.YES) {
        var replace = po.forced == Maybe.NO;
        if (!runPromiseBody(po, replace)) {
          return;
        }
        po.forced = Maybe.YES;
        if (replace) {
          state()
              .promises()
              .filter(o -> o.promise == po.promise && o.forced == Maybe.NO)
              .forEach(o -> o.forced = Maybe.MAYBE);
        }
      }
    }

    /// Maybe-forces `po`: it may or may not run here, so its body's effects are *merged*.
    ///
    /// A maybe-forced `po` still runs its body with the current state. `po` may stand for a
    /// fresh promise that [#incorporate] merged with an earlier loop iteration's instance of the
    /// same [Promise], which is then not forced, and its body would read the current bindings.
    /// The body's own [OnCfg] doesn't re-run when this state adds nothing, and [#runPromiseBody]
    /// doesn't re-enter a body that's running (see [State#mayRunBody]), so this terminates.
    private void maybeForce(PromiseOrigin po) {
      if (po.forced == Maybe.YES) {
        return;
      }
      runPromiseBody(po, false);
      po.forced = Maybe.MAYBE;
    }

    /// Runs `po.promise`'s body sub-analysis with the current state, then either replaces the
    /// current environment bindings with the result (the body definitely ran) or merges them
    /// (it may have). Sets `po.value` to the return origin.
    ///
    /// Returns `false` iff the body's analysis is already running.
    private boolean runPromiseBody(PromiseOrigin po, boolean replace) {
      var subAnalysis = (OnCfg) onCfg(po.promise.code());

      if (subAnalysis.isRunning()) {
        // The body's analysis is higher on the stack, but `po` can be another instance of the
        // promise (e.g. one of an earlier loop iteration that leaked). Re-entering would corrupt
        // the analysis in progress (the shared `OnCfg` reuses its state and cursor).
        state().mayRunBody(po.promise);
        po.value = null;
        return false;
      }

      // The body runs in the environment where the promise is created, not in the environments
      // that an inlined callee pushed after it.
      var depth = promiseEnvDepths.get(po.promise);
      var envs = state().envs;
      var pushed =
          depth == null || depth >= envs.size()
              ? List.<EnvFrame>of()
              : List.copyOf(envs.subList(depth, envs.size()));
      envs.subList(envs.size() - pushed.size(), envs.size()).clear();

      subAnalysis.run(state());

      var returnState = subAnalysis.returnState();
      if (returnState != null) {
        // The return state also has the body's runs at other forces and at `popenv`, where a
        // variable may be absent. The body can't remove a binding, so a variable that is present
        // here stays.
        var present = state().present();
        if (replace) {
          state().replaceWith(returnState);
        } else {
          state().merge(returnState);
        }
        state().assumePresent(present);
      }
      state().envs.addAll(pushed);
      if (!pushed.isEmpty() && po.promise.effects().reflect()) {
        state().taintViaReflection();
      }
      po.value = subAnalysis.returnOrigin();
      return true;
    }

    /// `naToFalse(x)` is true only for `TRUE`; `naToTrue(x)` is true for everything but `FALSE`.
    private static Value.Bool logicalToBool(Logical logical, boolean naIsTrue) {
      return new Value.Bool(naIsTrue ? logical != Logical.FALSE : logical == Logical.TRUE);
    }

    private static boolean mayNameVariable(Kind kind) {
      return switch (kind) {
        // Symbols only have kind `AnySexp`.
        case Kind.AnySexp() -> true;
        case Kind.PrimitiveVector(var _, var primitive) -> primitive == PrimitiveKind.STRING;
        case Kind.PrimitiveScalar(var primitive) -> primitive == PrimitiveKind.STRING;
        default -> false;
      };
    }

    private static boolean isMissing(Argument argument) {
      return argument instanceof Constant(Value.Sexp(var sexp)) && sexp == SEXPs.MISSING_ARG;
    }

    private static @Nullable Constant box(Value value) {
      return switch (value) {
        case Value.Lgl(var l) -> new Constant(SEXPs.logical(l));
        case Value.Int(var i) -> new Constant(SEXPs.integer(i));
        case Value.Real(var r) -> new Constant(SEXPs.real(r));
        case Value.Str(var s) -> new Constant(SEXPs.string(s));
        default -> null;
      };
    }

    private @Nullable Argument tryConstantFold(
        Callee callee, Argument closureOrCalleeArg, List<Argument> arguments) {
      if (!(callee instanceof StaticFnCallee(var functionRef, var isDispatch, var signature))
          || isDispatch
          || !closureOrCalleeArg.equals(Constant.ELIDED_CLOSURE)) {
        return null;
      }
      var function = functionRef.get();
      if (function.owner() != BUILTINS && function.owner() != INTRINSICS) {
        return null;
      }

      var name = function.name().name();
      return switch (name) {
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
        case "missing" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var argType = inferType.of(resolve(arguments.getFirst()));
          // The `--> B` version is `x == R_MissingArg` (no force). The `--> v(L)` version is
          // GNU-R's `missing`, which reads the binding of a symbol or string `x`, so it only folds
          // when `x` can't be either.
          var returnsBool = signature.returnType().kind() instanceof Kind.Boolean;
          if (argType == null || (!returnsBool && mayNameVariable(argType.kind()))) {
            yield null;
          }
          boolean isMissing;
          if (argType.kind() instanceof Kind.Missing && argType.isValue()) {
            isMissing = true;
          } else if (argType.isPromise() || !Type.MISSING.kind().isSubtypeOf(argType.kind())) {
            isMissing = false;
          } else {
            yield null;
          }

          // `missing` has a `--> B` version and a `--> v(L)` one.
          yield new Constant(
              signature.returnType().kind() instanceof Kind.Boolean
                  ? new Value.Bool(isMissing)
                  : new Value.Sexp(SEXPs.logical(isMissing)));
        }
        case "naToFalse", "naToTrue" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          var arg = resolve(arguments.getFirst());
          if (!(arg instanceof Constant(var value))) {
            yield null;
          }
          // `naToFalse` is true only for `TRUE`; `naToTrue` is true for everything but `FALSE`.
          var na = name.equals("naToTrue");
          yield (value instanceof Value.Sexp(var sexp) && sexp.asScalarLogical().isPresent())
              ? new Constant(logicalToBool(sexp.asScalarLogical().get(), na))
              : (value instanceof Value.Lgl(var lgl)) ? new Constant(logicalToBool(lgl, na)) : null;
        }
        case "box" -> {
          if (arguments.size() != 1) {
            yield null;
          }
          yield resolve(arguments.getFirst()) instanceof Constant(var value) ? box(value) : null;
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
            if (elementNames.get(i).isPresent()) yield null;
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

          // R formats reals differently than Java, so don't fold them into strings.
          if (widest == 3 && sexps.stream().anyMatch(s -> s instanceof RealSXP)) yield null;

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
                        for (int j = 0; j < l.size(); j++)
                          res[i++] = RMath.fromInt(l.get(j).toInt());
                      }
                      case IntSXP iv -> {
                        for (int j = 0; j < iv.size(); j++) res[i++] = RMath.fromInt(iv.get(j));
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
                        for (int j = 0; j < l.size(); j++)
                          res[i++] =
                              l.get(j) == Logical.NA ? Constants.NA_STRING : l.get(j).toString();
                      }
                      case IntSXP iv -> {
                        for (int j = 0; j < iv.size(); j++)
                          res[i++] =
                              iv.get(j) == Constants.NA_INT
                                  ? Constants.NA_STRING
                                  : String.valueOf(iv.get(j));
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
          // A `...` subscript is a matrix column.
          if (arguments.size() != 4 || !isMissing(resolve(arguments.get(2)))) yield null;
          var vectorArg = resolve(arguments.get(0));
          var idxArg = resolve(arguments.get(1));

          if (!(vectorArg instanceof Constant(Value.Sexp(var vSexp))
                  && vSexp instanceof ListOrVectorSXP<?> vector)
              // `[` keeps the element's name.
              || (name.equals("[") && !vector.names().isEmpty())) yield null;

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

          // A version that returns a SEXP (`v1(R)`) gets the element boxed.
          yield elementValue == null
              ? null
              : signature.returnType().kind() instanceof Kind.PrimitiveScalar
                  ? new Constant(elementValue)
                  : box(elementValue);
        }
        case "[<-", "[[<-" -> {
          // A `...` subscript is a matrix column.
          if (arguments.size() != 4 || !isMissing(resolve(arguments.get(3)))) yield null;
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
    ///
    /// Copies share it, so that a copy, and a merge or comparison of related states, doesn't walk
    /// every register.
    private SharedChunkMap<Register, Optional<Argument>> registerOrigins = new SharedChunkMap<>();
    /// The stack of local environments; the last entry is the topmost (innermost).
    private final List<EnvFrame> envs = new ArrayList<>();
    /// Registers known to hold a specific promise (assigned a [Promise], or copied/loaded from
    /// one).
    private final Map<Register, PromiseOrigin> registerPromises = new LinkedHashMap<>();
    /// Promises that may have escaped into an unknown register or variable (passed non-strictly to
    /// a call, super-/reflectively-stored, captured, ...). They're maybe-forced within any call and
    /// any force of an unknown promise, since we can no longer tell when they're forced.
    private final Set<PromiseOrigin> leakedPromises = new LinkedHashSet<>();

    private void mkEnv(Statement mkEnv, boolean reflectivelyAccessible) {
      envs.add(new EnvFrame(mkEnv, reflectivelyAccessible));
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

        if (info != null && info.unknown) {
          return null;
        }
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

        if (info != null && info.unknown) {
          return null;
        }
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
            info.unknown = false;
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

    /// Applies the effects that a run of `promise`'s body may have, without its analysis.
    ///
    /// The body may force each leaked promise, and each promise that it reads from a register or
    /// variable, so these become maybe-forced and leaked, and their bodies may run too. Each
    /// variable that one of these bodies stores may then hold anything, and each promise that
    /// they create leaks.
    private void mayRunBody(Promise promise) {
      var effects = promise.effects();
      var seen = Collections.newSetFromMap(new IdentityHashMap<Object, Boolean>());
      var reached = new ArrayList<PromiseOrigin>();
      var cfgs = new ArrayList<CFG>(List.of(promise.code()));
      Consumer<@Nullable PromiseOrigin> reach =
          po -> {
            if (po != null && po.promise.effects().isSubsetOf(effects) && seen.add(po)) {
              reached.add(po);
              cfgs.add(po.promise.code());
            }
          };
      leakedPromises.forEach(reach);

      var stored = new LinkedHashSet<NamedVariable>();
      for (var i = 0; i < cfgs.size(); i++) {
        if (!seen.add(cfgs.get(i))) {
          continue;
        }
        for (var part : bodyParts(cfgs.get(i))) {
          switch (part) {
            case BodyPart.Stored(var variable) -> stored.add(variable);
            case BodyPart.Loaded(var variable) ->
                envs.forEach(env -> reach.accept(env.variablePromises.get(variable)));
            case BodyPart.Created(var created) ->
                leakedPromises.add(new PromiseOrigin(created, Maybe.MAYBE, null));
            case BodyPart.Used(var register) -> reach.accept(registerPromises.get(register));
          }
        }
      }

      for (var po : reached) {
        if (po.forced == Maybe.NO) {
          po.forced = Maybe.MAYBE;
        }
        leakedPromises.add(po);
      }
      for (var variable : stored) {
        for (var env : envs) {
          var po = env.variablePromises.remove(variable);
          if (po != null) {
            leakedPromises.add(po);
          }
          var info = env.variables.get(variable);
          if (info == null && env == envs.getLast()) {
            info = new VariableInfo();
            info.mayBeAbsent = true;
            env.variables.put(variable, info);
          }
          if (info != null) {
            info.origins.clear();
            info.unknown = true;
          }
        }
      }
      if (effects.reflect()) {
        taintViaReflection();
      }
    }

    /// The stores, loads, promises and register arguments of the statements in `root` and the
    /// promises in it, in order and without repeats (a repeat has no effect in [#mayRunBody]).
    private List<BodyPart> bodyParts(CFG root) {
      var cached = bodyParts.get(root);
      if (cached != null) {
        return cached;
      }
      bodyScans++;
      var parts = new LinkedHashSet<BodyPart>();
      Abstraction.streamCfgs(root)
          .flatMap(cfg -> cfg.bbs().stream())
          .flatMap(bb -> bb.statements().stream())
          .forEach(
              statement -> {
                switch (statement.expression()) {
                  case Store(_, var variable) -> parts.add(new BodyPart.Stored(variable));
                  case Load(_, var variable) -> parts.add(new BodyPart.Loaded(variable));
                  case Promise created -> parts.add(new BodyPart.Created(created));
                  default -> {}
                }
                for (var arg : statement.args()) {
                  if (arg.variable() instanceof Register r) {
                    parts.add(new BodyPart.Used(r));
                  }
                }
              });
      var result = List.copyOf(parts);
      if (bodyParts != NO_BODY_PARTS) {
        bodyParts.put(root, result);
      }
      return result;
    }

    /// The variables that are definitely in each environment, by the statement that creates it.
    private Map<Statement, Set<NamedVariable>> present() {
      var present = new LinkedHashMap<Statement, Set<NamedVariable>>();
      for (var env : envs) {
        var variables = new LinkedHashSet<NamedVariable>();
        env.variables.forEach(
            (variable, info) -> {
              if (!info.mayBeAbsent) {
                variables.add(variable);
              }
            });
        present.merge(
            env.mkEnv,
            variables,
            (a, b) -> {
              a.retainAll(b);
              return a;
            });
      }
      return present;
    }

    /// Marks the variables of `present` as definitely in their environments.
    private void assumePresent(Map<Statement, Set<NamedVariable>> present) {
      for (var env : envs) {
        for (var variable : present.getOrDefault(env.mkEnv, Set.of())) {
          var info = env.variables.get(variable);
          if (info != null) {
            info.mayBeAbsent = false;
          }
        }
      }
    }

    /// Each variable of an environment that a closure captures may hold anything after the
    /// closure runs, which it may if it's `called` here or escaped.
    private void runCapturingClosures(boolean called) {
      for (var env : envs) {
        if (env.captured && (called || env.closureEscaped)) {
          leakedPromises.addAll(env.variablePromises.values());
          env.variablePromises.clear();
          for (var info : env.variables.values()) {
            info.origins.clear();
            info.unknown = true;
          }
        }
      }
    }

    private void taintViaReflection() {
      for (var env : envs) {
        if (env.reflectivelyAccessible) {
          // Reflection can take a promise out of a variable and force it later.
          leakedPromises.addAll(env.variablePromises.values());
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
      copy.registerOrigins = registerOrigins.copy();
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

    /// Replaces the state with a copy of `other`
    private void replaceWith(State other) {
      var copy = other.copy();
      registerOrigins = copy.registerOrigins;
      envs.clear();
      envs.addAll(copy.envs);
      registerPromises.clear();
      registerPromises.putAll(copy.registerPromises);
      leakedPromises.clear();
      leakedPromises.addAll(copy.leakedPromises);
    }

    @Override
    public void merge(State other) {
      // Merge register origins: unify possible origins.
      // - `null` = 0 possibilities
      // - `Optional.empty()` = infinite possibilities
      // - `Optional.of(arg)` = 1 possibility, `arg`
      registerOrigins.join(other.registerOrigins, Optional.empty());

      var canonical = canonicalPromises();

      mergeVariablePromises(registerPromises, other.registerPromises, leakedPromises, canonical);

      // A promise leaked on either path is leaked.
      for (var po : other.leakedPromises) {
        leakedPromises.add(incorporate(po, canonical));
      }

      // Merge env stacks. Well-formed IR balances mkenv/popenv, so the depths should match.
      // If they don't (a promise body runs where different environments are pushed), the stack is
      // ambiguous; we collapse to the shorter depth, merging the frames from the bottom, and taint
      // the surviving frames (leaking any promises we forget).
      while (envs.size() > other.envs.size()) {
        var dropped = envs.removeLast();
        leakedPromises.addAll(dropped.variablePromises.values());
      }
      for (var i = 0; i < other.envs.size(); i++) {
        if (i < envs.size()) {
          envs.get(i).merge(other.envs.get(i), canonical, leakedPromises);
        } else {
          for (var po : other.envs.get(i).variablePromises.values()) {
            leakedPromises.add(incorporate(po, canonical));
          }
        }
      }
      if (envs.size() != other.envs.size()) {
        taintViaReflection();
      }
    }

    /// Builds a `promise -> origin` map of this state's promises, used to canonicalize promises
    /// incorporated from another state during [#merge] (keeping one [PromiseOrigin] per promise).
    private Map<Promise, PromiseOrigin> canonicalPromises() {
      // Keyed by promise *identity* (structural equality of a promise recurses through its entire
      // body CFG, which is expensive and can overflow the stack; see `PromiseOrigin#equals`).
      var canonical = new IdentityHashMap<Promise, PromiseOrigin>();
      promises().forEach(po -> canonical.putIfAbsent(po.promise, po));
      return canonical;
    }

    /// The promises of the registers, the leaked promises, then the promises of the variables.
    private Stream<PromiseOrigin> promises() {
      return Stream.of(
              registerPromises.values().stream(),
              leakedPromises.stream(),
              envs.stream().flatMap(env -> env.variablePromises.values().stream()))
          .flatMap(s -> s);
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
        a.merge(b);
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
      existing.merge(other);
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
    /// The [MkEnv] statement that creates the environment.
    final Statement mkEnv;
    /// Whether the environment is tainted by reflection
    boolean reflectivelyAccessible;
    /// Whether a closure captures the environment.
    boolean captured = false;
    /// Whether such a closure may be held outside the environment.
    boolean closureEscaped = false;
    /// Set when reflection has run while this frame was on the stack: the previously-known
    /// variables are forgotten, and arbitrary other variables may now be present here.
    boolean tainted = false;

    EnvFrame(Statement mkEnv, boolean reflectivelyAccessible) {
      this.mkEnv = mkEnv;
      this.reflectivelyAccessible = reflectivelyAccessible;
    }

    void taint() {
      tainted = true;
      variables.clear();
      variablePromises.clear();
    }

    EnvFrame copy(IdentityHashMap<PromiseOrigin, PromiseOrigin> poMap) {
      var copy = new EnvFrame(mkEnv, reflectivelyAccessible);
      copy.tainted = tainted;
      copy.captured = captured;
      copy.closureEscaped = closureEscaped;
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
      captured |= other.captured;
      closureEscaped |= other.closureEscaped;
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
          && captured == other.captured
          && closureEscaped == other.closureEscaped
          && variables.equals(other.variables)
          && variablePromises.equals(other.variablePromises);
    }

    @Override
    public int hashCode() {
      return Objects.hash(variables, variablePromises, tainted, captured, closureEscaped);
    }
  }

  /// A single named variable in an [EnvFrame] in a [State].
  static final class VariableInfo {
    static VariableInfo of(Argument origin) {
      var info = new VariableInfo();
      info.origins.add(origin);
      return info;
    }

    /// Ordered by the printed argument. A [Read] prints as its register's name, which is much
    /// cheaper to get than the printer's output.
    final TreeSet<Argument> origins =
        new TreeSet<>(
            Comparator.comparing(a -> a instanceof Read(var r) ? r.name() : a.toString()));
    /// True iff on at least one reaching path the variable was not stored in this frame.
    boolean mayBeAbsent = false;
    /// True iff the variable may hold anything, besides [#origins] (see [State#mayRunBody]).
    boolean unknown = false;

    VariableInfo copy() {
      var copy = new VariableInfo();
      copy.origins.addAll(origins);
      copy.mayBeAbsent = mayBeAbsent;
      copy.unknown = unknown;
      return copy;
    }

    void merge(VariableInfo other) {
      origins.addAll(other.origins);
      mayBeAbsent |= other.mayBeAbsent;
      unknown |= other.unknown;
    }

    @Override
    public boolean equals(Object o) {
      if (this == o) return true;
      if (!(o instanceof VariableInfo other)) return false;
      return mayBeAbsent == other.mayBeAbsent
          && unknown == other.unknown
          && origins.equals(other.origins);
    }

    @Override
    public int hashCode() {
      return Objects.hash(origins, mayBeAbsent, unknown);
    }
  }

  /// A part of a statement that [State#mayRunBody] reads.
  private sealed interface BodyPart {
    record Stored(NamedVariable variable) implements BodyPart {}

    record Loaded(NamedVariable variable) implements BodyPart {}

    /// Equal iff the promise is the same object (see [PromiseOrigin#equals]).
    record Created(Promise promise) implements BodyPart {
      @Override
      public boolean equals(Object o) {
        return o instanceof Created(var other) && promise == other;
      }

      @Override
      public int hashCode() {
        return System.identityHashCode(promise);
      }
    }

    record Used(Register register) implements BodyPart {}
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

    /// The variables that are definitely in each environment (by the statement that creates it)
    /// when the promise is created. They stay there while the environment exists, because only
    /// reflection removes a variable, and it taints the environment.
    ///
    /// Never mutated, so copies share it.
    Map<Statement, Set<NamedVariable>> present;

    PromiseOrigin(Promise promise) {
      this(promise, Maybe.NO, null);
    }

    PromiseOrigin(Promise promise, Maybe forced, @Nullable Argument value) {
      this(promise, forced, value, Map.of());
    }

    PromiseOrigin(
        Promise promise,
        Maybe forced,
        @Nullable Argument value,
        Map<Statement, Set<NamedVariable>> present) {
      this.promise = promise;
      this.forced = forced;
      this.value = value;
      this.present = present;
    }

    PromiseOrigin copy() {
      return new PromiseOrigin(promise, forced, value, present);
    }

    /// Makes this origin stand for `other` too.
    void merge(PromiseOrigin other) {
      forced = forced.union(other.forced);
      if (present.equals(other.present)) {
        return;
      }
      var merged = new LinkedHashMap<Statement, Set<NamedVariable>>();
      present.forEach(
          (mkEnv, variables) -> {
            var otherVariables = other.present.get(mkEnv);
            if (otherVariables != null) {
              var both = new LinkedHashSet<>(variables);
              both.retainAll(otherVariables);
              merged.put(mkEnv, both);
            }
          });
      present = merged;
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
      return promise == other.promise
          && forced == other.forced
          && value == other.value
          && present.equals(other.present);
    }

    /// Only the immutable [#promise], because the other fields change while the object is in
    /// a state's [LinkedHashSet].
    @Override
    public int hashCode() {
      return System.identityHashCode(promise);
    }
  }
}
