package org.prlprg.ir.analysis.scope;

import java.util.HashMap;
import java.util.Map;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StmtData.MkProm;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.PrintWhitespace;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.NotImplementedError;

/**
 * Abstract state (abstract interpretation "context" that exists between every {@link Instr}) for
 * scope analysis.
 */
public class ScopeAnalysisState implements AbstractNode<ScopeAnalysisState> {
  private final AbstractEnvHierarchy envs = new AbstractEnvHierarchy();
  private final AbstractRValue returnValue = new AbstractRValue();
  private final Map<MkProm, AbstractRValue> forcedPromises = new HashMap<>();
  private boolean mayUseReflection = false;

  AbstractEnvHierarchy envs() {
    return envs;
  }

  AbstractRValue returnValue() {
    return returnValue;
  }

  Map<MkProm, AbstractRValue> forcedPromises() {
    return forcedPromises;
  }

  boolean mayUseReflection() {
    return mayUseReflection;
  }

  void setMayUseReflection(boolean mayUseReflection) {
    this.mayUseReflection = mayUseReflection;
  }

  public boolean didEnvEscape(@IsEnv RValue env) {
    return !envs.contains(env) || envs.at(env).isLeaked();
  }

  @Override
  public AbstractResult merge(ScopeAnalysisState other) {
    var res = AbstractResult.NONE;

    if (!mayUseReflection && other.mayUseReflection) {
      mayUseReflection = true;
      res = res.union(AbstractResult.LOST_PRECISION);
    }
    if (!returnValue.isUnknown() && other.returnValue.isUnknown()) {
      returnValue.taint();
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    for (var e : forcedPromises.entrySet()) {
      var mkProm = e.getKey();
      var myForcedPromise = e.getValue();
      var otherForcePromise = other.forcedPromises.get(mkProm);

      if (!myForcedPromise.isUnknown()) {
        if (otherForcePromise == null) {
          myForcedPromise.taint();
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

  @Override
  public ScopeAnalysisState clone() {
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
