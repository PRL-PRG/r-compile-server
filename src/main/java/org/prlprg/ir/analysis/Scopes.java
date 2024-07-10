package org.prlprg.ir.analysis;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.analysis.AbstractInterpretation.AnalysisDebugLevel;
import org.prlprg.ir.analysis.abstractNode.AbstractEnv;
import org.prlprg.ir.analysis.abstractNode.AbstractEnvHierarchy;
import org.prlprg.ir.analysis.abstractNode.AbstractLoad;
import org.prlprg.ir.analysis.abstractNode.AbstractNode;
import org.prlprg.ir.analysis.abstractNode.AbstractRValue;
import org.prlprg.ir.analysis.abstractNode.AbstractResult;
import org.prlprg.ir.analysis.abstractNode.AbstractResult2;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.JumpData.Deopt;
import org.prlprg.ir.cfg.JumpData.Return;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.RValueStmt;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.cfg.StmtData.CallSafeBuiltin;
import org.prlprg.ir.cfg.StmtData.Call_;
import org.prlprg.ir.cfg.StmtData.CastType;
import org.prlprg.ir.cfg.StmtData.ChkFun;
import org.prlprg.ir.cfg.StmtData.ExpandDots;
import org.prlprg.ir.cfg.StmtData.Force;
import org.prlprg.ir.cfg.StmtData.IsMissing;
import org.prlprg.ir.cfg.StmtData.LdArg;
import org.prlprg.ir.cfg.StmtData.LdDots;
import org.prlprg.ir.cfg.StmtData.LdEnclosEnv;
import org.prlprg.ir.cfg.StmtData.LdFun;
import org.prlprg.ir.cfg.StmtData.LdVar;
import org.prlprg.ir.cfg.StmtData.LdVarSuper;
import org.prlprg.ir.cfg.StmtData.MaterializeEnv;
import org.prlprg.ir.cfg.StmtData.MkCls;
import org.prlprg.ir.cfg.StmtData.MkEnv;
import org.prlprg.ir.cfg.StmtData.MkProm;
import org.prlprg.ir.cfg.StmtData.StVar;
import org.prlprg.ir.cfg.StmtData.StVarSuper;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.ClosureVersion.CallContext.ArgAssumption;
import org.prlprg.ir.closure.ClosureVersion.CallContext.ArgsAssumption;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.PrintWhitespace;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.Pair;

/**
 * Heavyweight scope analysis (from PIR).
 *
 * <p>This analysis soundly traces all stores (e.g. {@link StVar}) and gives a static approximation
 * for all loads (e.g. {@link LdVar}).
 */
@Immutable
public class Scopes {

  /**
   * Configure the "strength" of the scope analysis.
   *
   * <p>More strength = more precision, but more time and memory.
   *
   * <p>TODO: Make configurable via environment variables.
   */
  public record Config(
      int maxDepth,
      int maxSize,
      int maxPromSize,
      int maxResults,
      int maxNumSubAnalyses,
      AnalysisDebugLevel debugLevel) {
    /** The default config, if no environment variables are set. */
    public static final Config DEFAULT =
        new Config(2, 120, 14, 800, 10, AnalysisDebugLevel.INSTRUCTION);
  }

  // State
  private static class State implements AbstractNode<State> {
    private final AbstractEnvHierarchy envs = new AbstractEnvHierarchy();
    private final AbstractRValue returnValue = new AbstractRValue();
    private final Map<MkProm, AbstractRValue> forcedPromises = new HashMap<>();
    private boolean mayUseReflection = false;

    @Override
    public AbstractResult merge(State other) {
      var res = AbstractResult.NONE;

      if (!mayUseReflection && other.mayUseReflection) {
        mayUseReflection = true;
        res = res.union(AbstractResult.LOST_PRECISION);
      }
      if (!returnValue.isUnknown() && other.returnValue.isUnknown()) {
        returnValue.setToUnknown();
        res = res.union(AbstractResult.LOST_PRECISION);
      }

      for (var e : forcedPromises.entrySet()) {
        var mkProm = e.getKey();
        var myForcedPromise = e.getValue();
        var otherForcePromise = other.forcedPromises.get(mkProm);

        if (!myForcedPromise.isUnknown()) {
          if (otherForcePromise == null) {
            myForcedPromise.setToUnknown();
            res = res.union(AbstractResult.LOST_PRECISION);
          } else {
            res = res.union(myForcedPromise.merge(otherForcePromise));
          }
        }
      }

      if (forcedPromises.size() < other.forcedPromises.size()) {
        for (var e : other.forcedPromises.entrySet()) {
          var mkProm = e.getKey();
          var myForcedPromise = forcedPromises.get(mkProm);
          var otherForcedPromise = e.getValue();

          if (myForcedPromise == null) {
            forcedPromises.put(mkProm, AbstractRValue.UNKNOWN);
          }
        }

        res = res.union(AbstractResult.LOST_PRECISION);
      }

      return res.union(envs.merge(other.envs));
    }

    public boolean didEnvEscape(@IsEnv RValue env) {
      return !envs.isKnown(env) || envs.at(env).isLeaked();
    }

    @Override
    public State clone() {
      // TODO
      throw new NotImplementedError();
    }

    // region serialization and deserialization
    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("AState(");
      w.runIndented(
          () -> {
            w.write('\n');
            p.print(envs);

            w.write(",\nforcedPromises = ");
            p.printAsMap(forcedPromises, PrintWhitespace.NEWLINES);

            w.write(",\nreturn = ");
            p.print(returnValue);

            if (mayUseReflection) {
              w.write(",\nmayUseReflection");
            }
          });
      w.write(')');
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
    // endregion serialization and deserialization
  }

  // Config
  private final Config config;

  // Sub-analyses
  private final Map<Instr, SubAnalysis> subAnalyses = new HashMap<>();

  // Results
  private final Map<Instr, AbstractLoad> results = new HashMap<>();
  private final Map<Instr, AbstractRValue> returnValues = new HashMap<>();
  private boolean changed = false;

  /** Computes scopes in the given closure. */
  public Scopes(ClosureVersion closureVersion, Config config) {
    this.config = config;

    new SubAnalysis(closureVersion, List.of(), new State(), 0);
  }

  private class SubAnalysis extends AbstractInterpretation<State> {
    private final List<RValue> args;
    private final @IsEnv RValue staticClosureEnv;
    private final int depth;
    private final boolean canDeopt;

    /** Create a sub-analysis to run on the given closure version. */
    private SubAnalysis(
        ClosureVersion closureVersion, List<RValue> args, State initial, int depth) {
      this(
          closureVersion,
          closureVersion.body(),
          args,
          closureVersion.closure().env(),
          initial,
          depth);
    }

    /** Create a sub-analysis to run on the given promise. */
    private SubAnalysis(ClosureVersion outerVersion, Promise promise, State initial, int depth) {
      this(outerVersion, promise.body(), List.of(), promise.env(), initial, depth);
    }

    /** Create a sub-analysis to run. */
    private SubAnalysis(
        ClosureVersion innermostVersion,
        CFG cfg,
        List<RValue> args,
        @IsEnv RValue staticClosureEnv,
        State initial,
        int depth) {
      super(config.debugLevel, Direction.FORWARD, innermostVersion, cfg, initial);
      this.args = args;
      this.staticClosureEnv = staticClosureEnv;
      this.depth = depth;
      canDeopt = cfg.canDeopt();
    }

    @Override
    protected AbstractResult2 compute(State state, BB instrBB, int instrIdx, Instr instr) {
      return doCompute(state, instrBB, instrIdx, instr, true);
    }

    @Override
    protected AbstractResult2 apply(State state, BB instrBB, int instrIdx, Instr instr) {
      return doCompute(state, instrBB, instrIdx, instr, false);
    }

    @Override
    protected boolean globallyChanged() {
      return changed;
    }

    private AbstractResult2 doCompute(
        State state, BB instrBb, int instrIdx, Instr instr, boolean updateGlobalState) {
      var handled = false;
      var res = new AbstractResult2();

      if (instr.effects().contains(REffect.TriggerDeopt)) {
        var fs = instr.frameState();
        while (fs != null) {
          var fsEnv = fs.frameStateEnv();
          if (!(fsEnv instanceof Instr i) || !(i.data() instanceof MkEnv mk) || !mk.isStub()) {
            state.envs.leak(fsEnv);
            break;
          }
          fs = fs.inlinedNext();
        }
      }

      switch (instr.data()) {
        case Return ret -> {
          var lookup = ret.value() instanceof Instr i ? lookup(i) : null;
          state.returnValue.merge(
              lookup == null ? new AbstractRValue(ret.value(), instr, depth) : lookup.result());
          res.update();
        }
        case Deopt _ -> {
          if (canDeopt) {
            state.returnValue.setToUnknown();
            state.mayUseReflection = true;
            res.taint();
          }
        }
        case MkEnv mk -> {
          var env = state.envs.at((RValueStmt) instr);
          env.setParentEnv(
              mk.parent() == StaticEnv.NOT_CLOSED && staticClosureEnv != StaticEnv.NOT_CLOSED
                  ? staticClosureEnv
                  : mk.parent());
          for (var localVar : mk.localVars()) {
            env.set(localVar.name(), localVar.value(), instr, depth);
          }
          handled = true;
          res.update();
        }
        case MaterializeEnv mat -> state.envs.addAlias((RValueStmt) instr, mat.env());
        case LdEnclosEnv _ -> {
          if (staticClosureEnv == StaticEnv.NOT_CLOSED) {
            state.envs.at((RValueStmt) instr).leak();
            res.taint();
          } else {
            // `LdEnclosEnv` happens inside promises and refers back to the caller environment, i.e.
            // the instruction that created the promise.
            var alias = state.envs.dealias((RValueStmt) instr);
            assert alias == instr || alias == staticClosureEnv;
            if (alias == instr) {
              state.envs.addAlias((RValueStmt) instr, staticClosureEnv);
            }
          }
        }
        case LdFun ld -> {
          // `loadFun` has collateral forcing if we touch intermediate envs. But if we statically
          // find the closure to load, then there is no issue and we don't do anything.
          var load = loadFun(state, ld.name(), ld.env());
          if (updateGlobalState) {
            storeResult(instr, load);
          }
          if (!load.result().isUnknown()) {
            // We statically know the closure.
            handled = true;
          } else if (load.env() != AbstractEnv.UNKNOWN_PARENT) {
            // If our analysis give us an environment approximation for the `LdFun`, then we can at
            // least contain the tainted environments.
            var env = state.envs.at(load.env());
            state.envs.leak(load.env());
            env.setToUnknown();
            res.taint();
            handled = true;
          }
        }
        case LdVar ld -> {
          var load = load(state, ld.name(), ld.env());
          if (updateGlobalState) {
            storeResult(instr, load);
          }
        }
        case LdVarSuper ld -> {
          var load = loadSuper(state, ld.name(), ld.env());
          if (updateGlobalState) {
            storeResult(instr, load);
          }
        }
        case StVar st -> {
          state.envs.at(st.env()).set(st.name(), st.value(), instr, depth);
          handled = true;
          res.update();
        }
        case StVarSuper st -> {
          var superEnv = state.envs.at(st.env()).parentEnv();
          if (superEnv != AbstractEnv.UNKNOWN_PARENT) {
            var binding = state.envs.lookupSuper(st.env(), st.name());
            if (!binding.result().isUnknown()) {
              state.envs.at(superEnv).set(st.name(), st.value(), instr, depth);
              handled = true;
              res.update();
            }
          }
        }
        case IsMissing m -> {
          var load = load(state, m.varName(), m.env());
          if (!load.result().isUnknown()) {
            handled = true;
          }
        }
        case StmtData.Force f -> {
          var arg = f.promise();

          // If it's a non lazy thing, we do not need to bother.
          if (arg.type().isLazy() == Maybe.NO) {
            if (updateGlobalState && arg.type().isPromise() == Maybe.NO) {
              updateReturnValue(instr, new AbstractRValue(arg, instr, depth));
            }
            handled = true;
          }

          // Often we have `x = LdVar(...); y = Force(x)`. Since `LdVar` does not change the
          // environment, the state at `Force` is usable to query the result of the `LdVar`. This
          // generalizes to any `x = ...; ...; y = Force(x)`, where nothing in `...` writes to the
          // env.
          if (!handled) {
            var isAdjacent =
                arg instanceof Stmt s
                    && instrBb.stmts().contains(s)
                    && instrBb.stmts().indexOf(s) < instrIdx
                    && IntStream.range(instrBb.stmts().indexOf(s), instrIdx)
                        .mapToObj(instrBb.stmts()::get)
                        .noneMatch(
                            between ->
                                between.effects().contains(REffect.WritesEnvArg)
                                    || between.effects().contains(REffect.Reflection));
            var lookup =
                isAdjacent ? lookup(state, (Stmt) arg) : arg instanceof Instr i ? lookup(i) : null;
            if (lookup != null) {
              var lookupRes = lookup.result();
              var singleOrigin = lookupRes.singleOrigin();
              if (updateGlobalState && lookupRes.type().isLazy() == Maybe.NO) {
                updateReturnValue(
                    instr,
                    lookupRes.type().isPromise() == Maybe.NO ? lookupRes : AbstractRValue.UNKNOWN);
                handled = true;
              } else if (singleOrigin != null) {
                arg = singleOrigin.value();
              }
            }
          }

          // Forcing an argument can only affect local envs by reflection.
          // Hence, only leaked envs can be affected
          if (!handled) {
            var concreteEnv =
                f.env() instanceof RValueStmt s && s.data() instanceof MkEnv mk ? mk : null;
            if (arg instanceof Instr i && i.data() instanceof MkProm concretePromise) {
              var found = state.forcedPromises.get(concretePromise);
              if (found == null) {
                if (depth < config.maxDepth
                    && !reachedFixedPoint()
                    && f.isStrict() == YesOrMaybe.YES
                    && !state.envs.areAllUnknown()
                    && concretePromise.promise().body().numNodes() < config.maxPromSize) {
                  // We are certain that we do force something here. Let's peek through the
                  // argument and see if we find a promise. If so, we will analyze it.
                  var promAnalysis = subAnalyses.get(instr);
                  if (promAnalysis == null && subAnalyses.size() < config.maxNumSubAnalyses) {
                    promAnalysis =
                        new SubAnalysis(
                            innermostVersion, concretePromise.promise(), state, depth + 1);
                    subAnalyses.put(instr, promAnalysis);
                  } else if (promAnalysis != null) {
                    promAnalysis.setInitialState(state);
                  }

                  if (promAnalysis != null) {
                    promAnalysis.onInitialState(subState -> subState.mayUseReflection = false);

                    var subResult = promAnalysis.run();

                    state.merge(subResult);
                    if (updateGlobalState) {
                      updateReturnValue(instr, subResult.returnValue);
                    }
                    res.merge(
                        state.forcedPromises.get(concretePromise).merge(subResult.returnValue));
                    res.update();
                    res.setKeepSnapshot();
                    handled = true;
                  }
                }
              } else if (!found.isUnknown()) {
                if (updateGlobalState) {
                  updateReturnValue(instr, found);
                }
                handled = true;
              }

              if (!handled) {
                state.envs.at(concretePromise.promise().env()).setToUnknown();
                res.merge(state.envs.taintLeaked());
                if (updateGlobalState) {
                  updateReturnValue(instr, AbstractRValue.UNKNOWN);
                }
                handled = true;
              }
            } else if (arg instanceof Instr i && i.data() instanceof LdArg ldArg) {
              if (innermostVersion
                  .callContext()
                  .requires(ldArg.index(), ArgAssumption.IS_NON_REFLECTIVE)) {
                res.merge(state.envs.taintLeaked());
                if (updateGlobalState) {
                  updateReturnValue(instr, AbstractRValue.UNKNOWN);
                }
                handled = true;
              }
            } else if (concreteEnv != null && concreteEnv.isStub()) {
              // Forcing using a stub should deopt if local vars are modified.
              res.merge(state.envs.taintLeaked());
              if (updateGlobalState) {
                updateReturnValue(instr, AbstractRValue.UNKNOWN);
              }
              handled = true;
            }
          }

          if (!handled) {
            res.taint();
            if (updateGlobalState) {
              updateReturnValue(instr, AbstractRValue.UNKNOWN);
            }
          }
        }
        case Call_<?> call -> {
          var fun = call.fun();
          var hasDots =
              call.args().stream()
                  .anyMatch(a -> a instanceof Instr i && i.data() instanceof ExpandDots);
          var hasExplicitNames = call.explicitNames() != null;
          if (fun instanceof Instr i) {
            var improvedFun = lookup(i);
            var improvedFun1 = improvedFun == null ? null : improvedFun.result().singleOrigin();
            if (improvedFun1 != null) {
              fun = improvedFun1.value();
            }
          }
          if (fun instanceof Instr i && i.data() instanceof MkCls c) {
            fun = c.closure().getVersion(call.context());
          }

          // Do inter-procedural analysis if we have a static closure (and no dots argument or
          // explicit names, because those are too difficult to handle to be worth it).
          if (!hasDots && !hasExplicitNames && fun instanceof ClosureVersion concreteClosure) {
            if (depth == 0 && concreteClosure == innermostVersion) {
              // At depth 0 we are sure that no contextual information is considered when computing
              // the analysis. Thus whatever is the result of this functions analysis, a recursive
              // call to itself cannot excert more behaviors.
              handled = true;
              res.setNeedRecursion();
              if (updateGlobalState) {
                updateReturnValue(instr, AbstractRValue.UNKNOWN);
              }
            } else if (!reachedFixedPoint()
                && depth != config.maxDepth
                && concreteClosure.body().numNodes() <= config.maxSize
                && !state.envs.areAllUnknown()) {
              // While analyzing the callee we have to assume the caller's environment leaked.
              // Because the callee can always access it reflectively. If when the callee returns
              // the env was not tainted, it can be un-leaked again.
              var ienv = instr.env();
              var myEnvWasLeaked = ienv != null && state.envs.at(ienv).isLeaked();

              var closureAnalysis = subAnalyses.get(instr);
              if (closureAnalysis == null && subAnalyses.size() < config.maxNumSubAnalyses) {
                closureAnalysis = new SubAnalysis(concreteClosure, call.args(), state, depth + 1);
                subAnalyses.put(instr, closureAnalysis);
              } else if (closureAnalysis != null) {
                closureAnalysis.setInitialState(state);
              }

              if (closureAnalysis != null) {
                if (ienv != null) {
                  closureAnalysis.onInitialState(subState -> subState.envs.at(ienv).leak());
                }

                var subResult = closureAnalysis.run();

                if (ienv != null) {
                  var myEnv = subResult.envs.at(ienv);
                  if (!myEnvWasLeaked && myEnv.isUnknown()) {
                    myEnv.unleak();
                  }
                }

                state.merge(subResult);
                if (updateGlobalState) {
                  updateReturnValue(instr, subResult.returnValue);
                }
                res.update();
                res.setKeepSnapshot();
                handled = true;
              }
            }
          }

          if (fun instanceof BuiltinId builtin) {
            var isGuaranteedSafe =
                call instanceof CallSafeBuiltin
                    || (builtin.isNonObject()
                        && call.args().stream()
                            .noneMatch(
                                arg -> {
                                  var lookupArg = arg instanceof Instr i ? lookup(i) : null;
                                  var type =
                                      lookupArg == null ? arg.type() : lookupArg.result().type();
                                  return type.isObject() != Maybe.NO
                                      || type.isExpandedDots() != Maybe.NO;
                                }));

            if (isGuaranteedSafe) {
              handled = true;
            }
          }

          if (!handled) {
            if (!(fun instanceof BuiltinId builtin) || !builtin.canSafelyBeInlined()) {
              state.mayUseReflection = true;
            }
            res.taint();
          }
        }
        default -> {}
      }

      if (switch (instr.data()) {
        case CallSafeBuiltin _, ChkFun _, CastType _, Force _ -> false;
        default -> true;
      }) {
        for (var arg : instr.args()) {
          // The env arg has special treatment below since it can only be leaked by instructions
          // with the `LeaksEnvArg` effect.
          if (arg == instr.env()) {
            continue;
          }

          RValue leak = null;
          if (arg instanceof Instr i && i.data() instanceof MkProm p) {
            leak = p.promise().env();
          } else if (arg instanceof Instr i && i.data() instanceof MkCls c) {
            leak = c.closure().env();
          } else if (!(instr instanceof RValue v && v.isEnv() == Maybe.YES)
              && (arg instanceof RValue v && v.isEnv() == Maybe.YES)) {
            leak = (RValue) arg;
          }

          if (leak != null && leak != StaticEnv.ELIDED) {
            if (instr instanceof RValueStmt instrAsRValueStmt && instr.data() instanceof MkEnv) {
              state.envs.addDependency(instrAsRValueStmt, leak);
            } else if (instr.data() instanceof StVar st) {
              state.envs.addDependency(st.env(), leak);
            } else if (instr.data() instanceof StVarSuper st) {
              var ld = state.envs.lookupSuper(st.env(), st.name());
              state.envs.addDependency(ld.env(), leak);
            } else {
              state.envs.leak(leak);
            }
            res.update();
          }
        }
      }

      if (!handled) {
        var ienv = instr.env();
        if (ienv != null) {
          // Already exclude the case where an operation needs an env only for object arguments, but
          // we know that none of the args are objects.
          var envIsNeeded =
              instr.args().stream()
                  .anyMatch(
                      arg -> {
                        if (!(arg instanceof RValue varg)) {
                          return false;
                        }

                        var lookupArg = varg instanceof Instr i ? lookup(i) : null;
                        var type = lookupArg == null ? varg.type() : lookupArg.result().type();
                        return type.isObject() != Maybe.NO || type.isExpandedDots() != Maybe.NO;
                      });

          if (envIsNeeded) {
            var isEnvStub =
                instr.env() instanceof Instr i && i.data() instanceof MkEnv mk && mk.isStub();

            if (!isEnvStub && instr.effects().contains(REffect.LeaksEnvArg)) {
              state.envs.leak(Objects.requireNonNull(instr.env()));
              res.update();
            }

            // If an instruction does arbitrary changes to the environment, we need to consider it
            // tainted.
            if (instr.effects().contains(REffect.WritesEnvArg)) {
              state.envs.taintLeaked();
              if (!isEnvStub) {
                state.envs.at(Objects.requireNonNull(instr.env())).setToUnknown();
              }
              res.taint();
            }
          }
        }

        if (instr.effects().contains(REffect.Reflection)) {
          state.mayUseReflection = true;
          res.losePrecision();
        }
      }

      return res;
    }

    private void storeResult(Instr instr, AbstractLoad load) {
      if (!results.containsKey(instr) && results.size() >= config.maxResults) {
        return;
      }

      var oldLoad = results.put(instr, load);
      if (!changed) {
        changed = !load.equals(oldLoad);
      }
    }

    private void updateReturnValue(Instr instr, AbstractRValue returnValue) {
      var oldReturn = returnValues.get(instr);
      if (oldReturn == null) {
        returnValues.put(instr, returnValue);
        changed = true;
      } else if (oldReturn.merge(returnValue) != AbstractResult.NONE) {
        changed = true;
      }
    }

    /**
     * Lookup what the analysis knows about the result of executing instruction {@code instr}. This
     * recursively queries all available resources, such as binding structure, inter-procedural
     * return values, function arguments and so on.
     */
    private @Nullable AbstractLoad lookup(Instr instr) {
      // Recur on inter-procedural args.
      if (instr.data() instanceof StmtData.LdArg ld) {
        if (ld.index() < args.size()) {
          var arg = args.get(ld.index());
          return arg instanceof Instr i ? lookup(i) : null;
        }
      }

      if (returnValues.containsKey(instr) && !returnValues.get(instr).isUnknown()) {
        // If this is a call instruction or force we might have some result value from the
        // inter-procedural analysis. Since `returnValues` and the "cache" are indexed by SSA
        // variables, they are always valid, even if `state` does not correspond with the position
        // of `instr`.
        return tryToImprove(new AbstractLoad(returnValues.get(instr)));
      } else if (results.containsKey(instr) && !results.get(instr).result().isUnknown()) {
        return tryToImprove(results.get(instr));
      } else {
        return null;
      }
    }

    /**
     * Tries {@link #lookup(Instr)}, but if it returns {@code null}, assumes the state at the given
     * instruction is the given state to further try resolving.
     */
    private @Nullable AbstractLoad lookup(State state, Instr instr) {
      var known = lookup(instr);
      if (known != null) {
        return known;
      }

      // IMPORTANT: Dead store elimination relies on us handling all possible loads here.

      // If this is a `LdVar` (or `LdDots`), we perform an abstract environment `lookup` and if
      // possible recurse on the result/
      if (instr.data() instanceof LdVar ldVar) {
        return load(state, ldVar.name(), ldVar.env());
      } else if (instr.data() instanceof LdDots ldDots) {
        return load(state, SEXPs.DOTS_SYMBOL, ldDots.env());
      }

      // Likewise, if this is a `LdFun`, we perform an abstract environment `lookupFun` and if
      // possible recurse on the result. (`lookupFun` is slightly different than `lookup` because R
      // semantics specify that it ignores non-functions).
      if (instr.data() instanceof StmtData.LdFun ldFun) {
        return loadFun(state, ldFun.name(), ldFun.env());
      }

      // Lastly, if this is a `LdVarSuper`, we perform an abstract environment `lookupSuper` and if
      // possible recurse on the result.
      if (instr.data() instanceof LdVarSuper ldSuper) {
        return loadSuper(state, ldSuper.name(), ldSuper.env());
      }

      return null;
    }

    /**
     * If it has enough information about the given environment at the given state, it returns its
     * abstract entries, along with a boolean indicating whether each entry is initially set to
     * {@linkplain SEXPs#MISSING_ARG missing}.
     *
     * <p>Otherwise, if the environment at the state is too ambiguous, it returns {@code null}.
     */
    private @Nullable Map<RegSymSXP, Pair<AbstractRValue, Boolean>> tryMaterializeEnv(
        State state, @IsEnv RValue env) {
      var resultIfKnown = new HashMap<RegSymSXP, Pair<AbstractRValue, Boolean>>();

      var envState = state.envs.at(env);
      for (var e : envState.entries().entrySet()) {
        var name = e.getKey();
        var value = e.getValue();

        if (value.isUnknown()) {
          return null;
        }

        var isInitiallyMissing = Maybe.NO;
        var skipsStArg = NoOrMaybe.NO;
        for (var origin : value.origins()) {
          var originInstr = origin.origin();
          if (originInstr != null) {
            switch (originInstr.data()) {
              case MkEnv mk -> {
                for (var localVar : mk.localVars()) {
                  if (localVar.name().equals(name)) {
                    if (localVar.isMissing()) {
                      isInitiallyMissing = Maybe.YES;
                    } else if (!innermostVersion
                        .callContext()
                        .requires(ArgsAssumption.NO_EXPLICITLY_MISSING_ARGUMENTS)) {
                      isInitiallyMissing = Maybe.MAYBE;
                    }
                  }
                }
              }
              case StVar st -> {
                if (st.isArg()) {
                  skipsStArg = NoOrMaybe.MAYBE;
                }
              }
              default -> skipsStArg = NoOrMaybe.MAYBE;
            }
          }
        }

        // Ambiguous, we don't know if missing is set or not
        if (isInitiallyMissing == Maybe.MAYBE || skipsStArg == NoOrMaybe.MAYBE) {
          return null;
        }

        resultIfKnown.put(name, Pair.of(value, isInitiallyMissing == Maybe.YES));
      }

      return resultIfKnown;
    }

    private AbstractLoad load(State state, RegSymSXP name, @IsEnv RValue env) {
      return tryToImprove(state.envs.lookup(env, name));
    }

    private AbstractLoad loadFun(State state, RegSymSXP name, @IsEnv RValue env) {
      return tryToImprove(state.envs.lookupFun(env, name));
    }

    private AbstractLoad loadSuper(State state, RegSymSXP name, @IsEnv RValue env) {
      return tryToImprove(state.envs.lookupSuper(env, name));
    }

    /**
     * If we know that {@code known}'s origin an instruction, we can lookup the instruction to find
     * <i>its</i> origin (recursively). Otherwise we return the load as-is.
     */
    private AbstractLoad tryToImprove(AbstractLoad known) {
      var singleOrigin = known.result().singleOrigin();
      if (singleOrigin != null && singleOrigin.value() instanceof Instr singleInstrOrigin) {
        var improvement = lookup(singleInstrOrigin);
        if (improvement != null) {
          return improvement;
        }
      }
      return known;
    }
  }
}
