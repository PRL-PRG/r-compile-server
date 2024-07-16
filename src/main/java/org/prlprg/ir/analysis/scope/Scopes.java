package org.prlprg.ir.analysis.scope;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.ISexp;
import org.prlprg.ir.cfg.ISexpStmt;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.JumpData.Deopt;
import org.prlprg.ir.cfg.JumpData.Return;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.cfg.StmtData.CallSafeBuiltin;
import org.prlprg.ir.cfg.StmtData.CastType;
import org.prlprg.ir.cfg.StmtData.ChkFun;
import org.prlprg.ir.cfg.StmtData.ExpandDots;
import org.prlprg.ir.cfg.StmtData.Force;
import org.prlprg.ir.cfg.StmtData.IsMissing;
import org.prlprg.ir.cfg.StmtData.LdArg;
import org.prlprg.ir.cfg.StmtData.LdDots;
import org.prlprg.ir.cfg.StmtData.LdFun;
import org.prlprg.ir.cfg.StmtData.LdVar;
import org.prlprg.ir.cfg.StmtData.LdVarSuper;
import org.prlprg.ir.cfg.StmtData.MkCls;
import org.prlprg.ir.cfg.StmtData.MkEnv;
import org.prlprg.ir.cfg.StmtData.MkProm;
import org.prlprg.ir.cfg.StmtData.StVar;
import org.prlprg.ir.cfg.StmtData.StVarSuper;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;

/**
 * Heavyweight scope analysis (from PIR).
 *
 * <p>This analysis soundly traces all stores (e.g. {@link StVar}) and gives a static approximation
 * for all loads (e.g. {@link LdVar}).
 */
@Immutable
public class Scopes {
  // Config
  private final ScopeAnalysisConfig config;

  // Sub-analyses
  private final Map<Instr, SubAnalysis> subAnalyses = new HashMap<>();

  // Results
  private final Map<Instr, AbstractLoad> results = new HashMap<>();
  private final Map<Instr, AbstractISexp> returnValues = new HashMap<>();
  private final SubAnalysis rootSubAnalysis;
  private final ScopeAnalysisState finalState;
  private boolean changed = false;

  /**
   * Computes scopes in the given closure.
   *
   * <p>The analysis runs on construction. The rest of {@link Scopes}'s public API exposes the
   * results.
   */
  public Scopes(ClosureVersion closureVersion) {
    this.config = ScopeAnalysisConfig.DEFAULT;

    rootSubAnalysis = new SubAnalysis(closureVersion, List.of(), new ScopeAnalysisState(), 0);
    finalState = rootSubAnalysis.atCfgExit();
  }

  // region get results
  public boolean mayUseReflection() {
    return finalState.mayUseReflection();
  }

  public ScopeAnalysisState atEntry(BB bb) {
    return rootSubAnalysis.atEntry(bb);
  }

  public ScopeAnalysisState atExit(BB bb) {
    return rootSubAnalysis.atExit(bb);
  }

  public ScopeAnalysisState beforeInstruction(BB bb, int instrIdx) {
    return rootSubAnalysis.beforeInstruction(bb, instrIdx);
  }

  public ScopeAnalysisState afterInstruction(BB bb, int instrIdx) {
    return rootSubAnalysis.afterInstruction(bb, instrIdx);
  }

  // endregion get results

  private class SubAnalysis extends AbstractInterpretation<ScopeAnalysisState> {
    private final List<ISexp> args;
    private final @IsEnv ISexp staticClosureEnv;
    private final int depth;
    private final boolean canDeopt;

    /** Create a sub-analysis to run on the given closure version. */
    private SubAnalysis(
        ClosureVersion closureVersion, List<ISexp> args, ScopeAnalysisState initial, int depth) {
      this(
          closureVersion,
          false,
          closureVersion.body(),
          args,
          closureVersion.closure().env(),
          initial,
          depth);
    }

    /** Create a sub-analysis to run on the given promise. */
    private SubAnalysis(
        ClosureVersion outerVersion, Promise promise, ScopeAnalysisState initial, int depth) {
      this(outerVersion, true, promise.body(), List.of(), promise.env(), initial, depth);
    }

    /** Create a sub-analysis to run. */
    private SubAnalysis(
        ClosureVersion innermostVersion,
        boolean isPromise,
        CFG cfg,
        List<ISexp> args,
        @IsEnv ISexp staticClosureEnv,
        ScopeAnalysisState initial,
        int depth) {
      super(config.debugLevel(), Direction.FORWARD, innermostVersion, isPromise, cfg, initial);
      this.args = args;
      this.staticClosureEnv = staticClosureEnv;
      this.depth = depth;
      canDeopt = cfg.canDeopt();
    }

    @Override
    protected AbstractResult compute(
        ScopeAnalysisState state, BB instrBB, int instrIdx, Instr instr) {
      var handled = false;
      var res = AbstractResult.NONE;

      if (instr.effects().contains(REffect.TriggerDeopt)) {
        var fs = instr.frameState();
        while (fs != null) {
          var fsEnv = fs.frameStateEnv();
          if (!(fsEnv instanceof Instr i) || !(i.data() instanceof MkEnv mk) || !mk.isStub()) {
            state.envs().leak(fsEnv);
          }
          fs = fs.inlinedNext();
        }
      }

      switch (instr.data()) {
        case Return ret -> {
          var lookup = ret.value() instanceof Instr i ? lookup(i) : null;
          state
              .returnValue()
              .merge(
                  lookup == null ? new AbstractISexp(ret.value(), instr, depth) : lookup.result());
          res = res.union(AbstractResult.UPDATED);
        }
        case Deopt _ -> {
          if (canDeopt) {
            state.returnValue().taint();
            state.setMayUseReflection(true);
            res = AbstractResult.TAINTED;
          }
        }
        case MkEnv mk -> {
          var env = state.envs().at((ISexpStmt) instr);
          env.setParentEnv(
              mk.parent() == StaticEnv.NOT_CLOSED && staticClosureEnv != StaticEnv.NOT_CLOSED
                  ? staticClosureEnv
                  : mk.parent());
          for (var localVar : mk.localVars()) {
            env.set(localVar.name(), localVar.value(), instr, depth);
          }
          handled = true;
          res = res.union(AbstractResult.UPDATED);
        }
        case LdFun ld -> {
          // `loadFun` has collateral forcing if we touch intermediate envs. But if we statically
          // find the closure to load, then there is no issue and we don't do anything.
          var load = loadFun(state, ld.name(), ld.env());
          storeResult(instr, load);
          if (!load.result().isUnknown()) {
            // We statically know the closure.
            handled = true;
          } else if (load.env() != StaticEnv.NOT_CLOSED) {
            // If our analysis give us an environment approximation for the `LdFun`, then we can at
            // least contain the tainted environments.
            var env = state.envs().at(load.env());
            state.envs().leak(load.env());
            env.taint();
            res = AbstractResult.TAINTED;
            handled = true;
          }
        }
        case LdVar ld -> storeResult(instr, load(state, ld.name(), ld.env()));
        case LdVarSuper ld -> storeResult(instr, loadSuper(state, ld.name(), ld.env()));
        case StVar st -> {
          state.envs().at(st.env()).set(st.name(), st.value(), instr, depth);
          handled = true;
          res = res.union(AbstractResult.UPDATED);
        }
        case StVarSuper st -> {
          var superEnv = state.envs().at(st.env()).parentEnv();
          if (superEnv != StaticEnv.NOT_CLOSED) {
            var binding = state.envs().lookupSuper(st.env(), st.name());
            if (!binding.result().isUnknown()) {
              state.envs().at(superEnv).set(st.name(), st.value(), instr, depth);
              handled = true;
              res = res.union(AbstractResult.UPDATED);
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
            if (arg.type().isPromise() == Maybe.NO) {
              updateReturnValue(instr, new AbstractISexp(arg, instr, depth));
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
                    && instrBB.stmts().contains(s)
                    && instrBB.stmts().indexOf(s) < instrIdx
                    && IntStream.range(instrBB.stmts().indexOf(s), instrIdx)
                        .mapToObj(instrBB.stmts()::get)
                        .noneMatch(
                            between ->
                                between.effects().contains(REffect.WritesEnvArg)
                                    || between.effects().contains(REffect.Reflection));
            var lookup =
                isAdjacent ? lookup(state, (Stmt) arg) : arg instanceof Instr i ? lookup(i) : null;
            if (lookup != null) {
              var lookupRes = lookup.result();
              var singleOrigin = lookupRes.singleOrigin();
              if (lookupRes.type().isLazy() == Maybe.NO) {
                updateReturnValue(
                    instr,
                    lookupRes.type().isPromise() == Maybe.NO ? lookupRes : AbstractISexp.UNKNOWN);
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
                f.env() instanceof ISexpStmt s && s.data() instanceof MkEnv mk ? mk : null;
            if (arg instanceof Instr i && i.data() instanceof MkProm concretePromise) {
              var found = state.forcedPromises().get(concretePromise);
              if (found == null) {
                if (depth < config.maxDepth()
                    && !reachedFixedPoint()
                    && f.isStrict() == YesOrMaybe.YES
                    && !state.envs().areAllUnknown()
                    && concretePromise.promise().body().numNodes() < config.maxPromSize()) {
                  // We are certain that we do force something here. Let's peek through the
                  // argument and see if we find a promise. If so, we will analyze it.
                  var promAnalysis = subAnalyses.get(instr);
                  var subState = state.copy();
                  subState.setMayUseReflection(false);
                  if (promAnalysis == null && subAnalyses.size() < config.maxNumSubAnalyses()) {
                    promAnalysis =
                        new SubAnalysis(
                            innermostVersion, concretePromise.promise(), state, depth + 1);
                    subAnalyses.put(instr, promAnalysis);
                  } else if (promAnalysis != null) {
                    promAnalysis.rerun(state);
                  }

                  if (promAnalysis != null) {
                    state.merge(promAnalysis.atCfgExit());
                    updateReturnValue(instr, promAnalysis.returnValue());
                    res =
                        res.union(
                                state
                                    .forcedPromises()
                                    .get(concretePromise)
                                    .merge(promAnalysis.returnValue()))
                            .union(AbstractResult.UPDATED);
                    handled = true;
                  }
                }
              } else if (!found.isUnknown()) {
                updateReturnValue(instr, found);
                handled = true;
              }

              if (!handled) {
                state.envs().at(concretePromise.promise().env()).taint();
                res = res.union(state.envs().taintLeaked());
                updateReturnValue(instr, AbstractISexp.UNKNOWN);
                handled = true;
              }
            } else if (arg instanceof Instr i && i.data() instanceof LdArg ldArg) {
              if (innermostVersion
                  .callContext()
                  .requires(ldArg.index(), ArgAssumption.IS_NON_REFLECTIVE)) {
                res = res.union(state.envs().taintLeaked());
                updateReturnValue(instr, AbstractISexp.UNKNOWN);
                handled = true;
              }
            } else if (concreteEnv != null && concreteEnv.isStub()) {
              // Forcing using a stub should deopt if local vars are modified.
              res = res.union(state.envs().taintLeaked());
              updateReturnValue(instr, AbstractISexp.UNKNOWN);
              handled = true;
            }
          }

          if (!handled) {
            res = AbstractResult.TAINTED;
            updateReturnValue(instr, AbstractISexp.UNKNOWN);
          }
        }
        case StmtData.Call<?> call -> {
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
              updateReturnValue(instr, AbstractISexp.UNKNOWN);
            } else if (!reachedFixedPoint()
                && depth != config.maxDepth()
                && concreteClosure.body().numNodes() <= config.maxSize()
                && !state.envs().areAllUnknown()) {
              // While analyzing the callee we have to assume the caller's environment leaked.
              // Because the callee can always access it reflectively. If when the callee returns
              // the env was not tainted, it can be un-leaked again.
              var ienv = instr.env();
              var myEnvWasLeaked = ienv != null && state.envs().at(ienv).isLeaked();

              var closureAnalysis = subAnalyses.get(instr);
              var subState = state.copy();
              if (ienv != null) {
                state.envs().at(ienv).leak();
              }
              if (closureAnalysis == null && subAnalyses.size() < config.maxNumSubAnalyses()) {
                closureAnalysis =
                    new SubAnalysis(concreteClosure, call.args(), subState, depth + 1);
                subAnalyses.put(instr, closureAnalysis);
              } else if (closureAnalysis != null) {
                closureAnalysis.rerun(subState);
              }

              if (closureAnalysis != null) {
                if (ienv != null) {
                  var closureEnv = closureAnalysis.envs().at(ienv);
                  if (!myEnvWasLeaked && !closureEnv.isUnknown()) {
                    closureEnv.unleak();
                  }
                }

                state.merge(closureAnalysis.atCfgExit());
                updateReturnValue(instr, closureAnalysis.returnValue());
                res = res.union(AbstractResult.UPDATED);
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
              state.setMayUseReflection(true);
            }
            res = AbstractResult.TAINTED;
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

          ISexp leak = null;
          if (arg instanceof Instr i && i.data() instanceof MkProm p) {
            leak = p.promise().env();
          } else if (arg instanceof Instr i && i.data() instanceof MkCls c) {
            leak = c.closure().env();
          } else if (!(instr instanceof ISexp v && v.isEnv() == Maybe.YES)
              && (arg instanceof ISexp v && v.isEnv() == Maybe.YES)) {
            leak = (ISexp) arg;
          }

          if (leak != null && leak != StaticEnv.ELIDED) {
            if (instr instanceof ISexpStmt instrAsISexpStmt && instr.data() instanceof MkEnv) {
              state.envs().addDependency(instrAsISexpStmt, leak);
            } else if (instr.data() instanceof StVar st) {
              state.envs().addDependency(st.env(), leak);
            } else if (instr.data() instanceof StVarSuper st) {
              var ld = state.envs().lookupSuper(st.env(), st.name());
              state.envs().addDependency(ld.env(), leak);
            } else {
              state.envs().leak(leak);
            }
            res = res.union(AbstractResult.UPDATED);
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
                        if (!(arg instanceof ISexp varg)) {
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
              state.envs().leak(Objects.requireNonNull(instr.env()));
              res = res.union(AbstractResult.UPDATED);
            }

            // If an instruction does arbitrary changes to the environment, we need to consider it
            // tainted.
            if (instr.effects().contains(REffect.WritesEnvArg)) {
              state.envs().taintLeaked();
              if (!isEnvStub) {
                state.envs().at(Objects.requireNonNull(instr.env())).taint();
              }
              res = AbstractResult.TAINTED;
            }
          }
        }

        if (instr.effects().contains(REffect.Reflection)) {
          state.setMayUseReflection(true);
          res = res.union(AbstractResult.LOST_PRECISION);
        }
      }

      return res;
    }

    private void storeResult(Instr instr, AbstractLoad load) {
      if (!results.containsKey(instr) && results.size() >= config.maxResults()) {
        return;
      }

      var oldLoad = results.put(instr, load);
      if (!changed) {
        changed = !load.equals(oldLoad);
      }
    }

    private void updateReturnValue(Instr instr, AbstractISexp returnValue) {
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
    private @Nullable AbstractLoad lookup(ScopeAnalysisState state, Instr instr) {
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
    private @Nullable Map<RegSymSXP, Pair<AbstractISexp, Boolean>> tryMaterializeEnv(
        ScopeAnalysisState state, @IsEnv ISexp env) {
      var resultIfKnown = new HashMap<RegSymSXP, Pair<AbstractISexp, Boolean>>();

      var envState = state.envs().at(env);
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

    private AbstractLoad load(ScopeAnalysisState state, RegSymSXP name, @IsEnv ISexp env) {
      return tryToImprove(state.envs().lookup(env, name));
    }

    private AbstractLoad loadFun(ScopeAnalysisState state, RegSymSXP name, @IsEnv ISexp env) {
      return tryToImprove(state.envs().lookupFun(env, name));
    }

    private AbstractLoad loadSuper(ScopeAnalysisState state, RegSymSXP name, @IsEnv ISexp env) {
      return tryToImprove(state.envs().lookupSuper(env, name));
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

    private AbstractEnvHierarchy envs() {
      return atCfgExit().envs();
    }

    private AbstractISexp returnValue() {
      return atCfgExit().returnValue();
    }
  }
}
