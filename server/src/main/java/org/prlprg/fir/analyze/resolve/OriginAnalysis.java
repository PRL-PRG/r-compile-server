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
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
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
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
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
            case LOCAL_VAR -> state().store(variable, o);
            case SUPER_VAR -> state().superStore(variable, o);
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
        case Aea(var arg) -> resolve(arg);
        case Cast(var value, var type) -> {
          var valueOrigin = resolve(value);
          // Only see through the cast if it's guaranteed to succeed.
          // Otherwise, we'll get a type error substituting,
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
                // Otherwise, we'll get a type error substituting,
                // and a deopt iff the instruction gets rearranged before the assumption
                // and the assumption fails.
                var valueType = inferType.of(valueOrigin);
                yield valueType == null || !valueType.isSubtypeOf(type) ? null : valueOrigin;
              }
              case AssumeConstant _, AssumeFunction _, AssumeLoadFun _, AssumeLoadVar _ -> null;
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
            state().taintEnvs();
            yield null;
          }
        }
        case Promise(_, _, var code) -> {
          // We must explicitly run promises because `AbstractInterpretation` doesn't.
          runSubAnalysis(code, state()::merge);
          // The promise itself isn't a constant (nor `code`'s return origin)
          yield null;
        }
        case Call(var callee, var arguments) -> {
          var constantFolded = tryConstantFold(callee, arguments);
          if (constantFolded != null) {
            yield constantFolded;
          }

          if (inferEffects.of(expr).reflect()) {
            state().taintEnvs();
          }
          yield null;
        }
        case MkEnv _ -> {
          state().mkEnv();
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
          if (inferEffects.of(expr).reflect()) {
            state().taintEnvs();
          }
          yield null;
        }
      };
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
        // TODO: test the following
        case "c" -> {
          if (arguments.size() != 1) yield null;
          var dotsExpr = resolveExpression(arguments.getFirst());
          if (!(dotsExpr instanceof MkVector(var dotsKind, var namedElements))) yield null;
          if (!(dotsKind instanceof Kind.Dots)) yield null;

          if (namedElements.isEmpty()) yield new Constant(SEXPs.NULL);

          // Only support unnamed primitive SEXP elements
          var sexps = new ArrayList<SEXP>(namedElements.size());
          for (var ne : namedElements) {
            if (ne.name() != null) yield null;
            var elemArg = resolve(ne.argument());
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
  }

  public final class State implements AbstractInterpretation.State<State> {
    /// Register origins are global, but `State` must store them, so that states with different
    /// register origins aren't equal, so that we re-run blocks whose register origin
    /// dependencies changed.
    private final Map<Register, Optional<Argument>> registerOrigins = new LinkedHashMap<>();
    /// The stack of local environments; the last entry is the topmost (innermost).
    private final List<EnvFrame> envs = new ArrayList<>();

    private void mkEnv() {
      envs.add(new EnvFrame());
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

    private void taintEnvs() {
      for (var env : envs) {
        env.taint();
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
      if (envs.size() == other.envs.size()) {
        for (int i = 0; i < envs.size(); i++) {
          envs.get(i).merge(other.envs.get(i));
        }
      } else {
        while (envs.size() > other.envs.size()) {
          envs.removeLast();
        }
        taintEnvs();
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

  /// A single environment frame in a state's environment stack.
  static final class EnvFrame {
    final Map<NamedVariable, VariableInfo> variables = new LinkedHashMap<>();
    /// Set when reflection has run while this frame was on the stack: the previously-known
    /// variables are forgotten, and arbitrary other variables may now be present here.
    boolean tainted = false;

    void taint() {
      tainted = true;
      variables.clear();
    }

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
        // Result = tainted
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
}
