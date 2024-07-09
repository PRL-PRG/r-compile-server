package org.prlprg.ir.analysis;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.analysis.abstractNode.AbstractEnv;
import org.prlprg.ir.analysis.abstractNode.AbstractEnvHierarchy;
import org.prlprg.ir.analysis.abstractNode.AbstractLoad;
import org.prlprg.ir.analysis.abstractNode.AbstractNode;
import org.prlprg.ir.analysis.abstractNode.AbstractRValue;
import org.prlprg.ir.analysis.abstractNode.AbstractRValue.ValueOrigin;
import org.prlprg.ir.analysis.abstractNode.AbstractResult;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Call;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.JumpData;
import org.prlprg.ir.cfg.JumpData.Deopt;
import org.prlprg.ir.cfg.JumpData.Return;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.RValueStmt;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.cfg.StmtData.CallSafeBuiltin;
import org.prlprg.ir.cfg.StmtData.Call_;
import org.prlprg.ir.cfg.StmtData.CastType;
import org.prlprg.ir.cfg.StmtData.ChkFun;
import org.prlprg.ir.cfg.StmtData.Force;
import org.prlprg.ir.cfg.StmtData.IsMissing;
import org.prlprg.ir.cfg.StmtData.LdDots;
import org.prlprg.ir.cfg.StmtData.LdEnclosEnv;
import org.prlprg.ir.cfg.StmtData.LdFun;
import org.prlprg.ir.cfg.StmtData.LdVar;
import org.prlprg.ir.cfg.StmtData.LdVarSuper;
import org.prlprg.ir.cfg.StmtData.MaterializeEnv;
import org.prlprg.ir.cfg.StmtData.MkEnv;
import org.prlprg.ir.cfg.StmtData.MkProm;
import org.prlprg.ir.cfg.StmtData.StVar;
import org.prlprg.ir.cfg.StmtData.StVarSuper;
import org.prlprg.ir.effect.REffect;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.PrintWhitespace;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;

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
      int maxDepth, int maxSize, int maxPromSize, int maxResults, int maxSubAnalysis) {
    /** The default config, if no environment variables are set. */
    public static final Config DEFAULT = new Config(2, 120, 14, 800, 10);
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

    // region serialization and deserialization
    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("AState(");
      w.runIndented(() -> {
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
  }

  // Config
  private final Config config;

  // Results
  private final Map<Instr, AbstractLoad> results = new HashMap<>();
  private final Map<Instr, AbstractRValue> returnValues = new HashMap<>();
  private boolean changed = false;


  /** Computes scopes in the given CFG. */
  public Scopes(CFG cfg, Config config) {
    this.config = config;

    new SubAnalysis(cfg, false, List.of(), StaticEnv.NOT_CLOSED, new State(), 0);
  }

  private class SubAnalysis {
    private final CFG cfg;
    private final boolean isInPromise;
    private final List<RValue> args;
    private final @IsEnv RValue staticClosureEnv;
    private final State state;
    private final int depth;
    private final boolean canDeopt;

    /** Run a sub-analysis.
     *
     * <p>This is a class and constructor, not a function, only so that we can implicitly pass
     * around the class's fields.
     */
    private SubAnalysis(
        CFG cfg,
        boolean isInPromise,
        List<RValue> args,
        @IsEnv RValue staticClosureEnv,
        State state,
        int depth) {
      this.cfg = cfg;
      this.isInPromise = isInPromise;
      this.args = args;
      this.staticClosureEnv = staticClosureEnv;
      this.state = state;
      this.depth = depth;
      canDeopt = cfg.canDeopt();
    }

    private AbstractResult doCompute(State state, Instr instr, boolean updateGlobalState) {
      var handled = false;
      var res = AbstractResult.NONE;

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
          res = res.union(AbstractResult.UPDATED);
        }
        case Deopt _ -> {
          if (canDeopt) {
            state.returnValue.setToUnknown();
            state.mayUseReflection = true;
            res = AbstractResult.TAINTED;
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
          res = res.union(AbstractResult.UPDATED);
        }
        case MaterializeEnv mat -> state.envs.addAlias((RValueStmt) instr, mat.env());
        case LdEnclosEnv _ -> {
          if (staticClosureEnv == StaticEnv.NOT_CLOSED) {
            state.envs.at((RValueStmt)instr).leak();
            res = AbstractResult.TAINTED;
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
          storeResult(instr, load);
          if (!load.result().isUnknown()) {
            // We statically know the closure.
            handled = true;
          } else if (load.env() != AbstractEnv.UNKNOWN_PARENT) {
            // If our analysis give us an environment approximation for the `LdFun`, then we can at
            // least contain the tainted environments.
            var env = state.envs.at(load.env());
            state.envs.leak(load.env());
            env.setToUnknown();
            res = AbstractResult.TAINTED;
            handled = true;
          }
        }
        case LdVar ld -> {
          var load = load(state, ld.name(), ld.env());
          storeResult(instr, load);
        }
        case LdVarSuper ld -> {
          var load = loadSuper(state, ld.name(), ld.env());
          storeResult(instr, load);
        }
        case StVar st -> {
          state.envs.at(st.env()).set(st.name(), st.value(), instr, depth);
          handled = true;
          res = res.union(AbstractResult.UPDATED);
        }
        case StVarSuper st -> {
          var superEnv = state.envs.at(st.env()).parentEnv();
          if (superEnv != AbstractEnv.UNKNOWN_PARENT) {
            var binding = state.envs.lookupSuper(st.env(), st.name());
            if (!binding.result().isUnknown()) {
              state.envs.at(superEnv).set(st.name(), st.value(), instr, depth);
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
          // TODO
        }
        case Call_ call -> {
          // TODO
        }
      }

      if (switch (instr.data()) {
        case CallSafeBuiltin _, ChkFun _, CastType _, Force _ -> false;
        default -> true
      }) {
        for (var arg : instr.args()) {
          // TODO
        }
      }

      if (!handled) {
        // TODO
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
     * If it can materialize, it returns the abstract environment entries.
     */
    private @Nullable Map<RegSymSXP, AbstractRValue> tryMaterializeEnv(State state,
        @IsEnv RValue env) {
      // TODO
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
