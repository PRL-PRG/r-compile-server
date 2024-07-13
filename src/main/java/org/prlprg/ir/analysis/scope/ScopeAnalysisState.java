package org.prlprg.ir.analysis.scope;

import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;
import org.prlprg.ir.cfg.ISexp;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.StmtData.MkProm;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.PrintWhitespace;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.UnreachableError;

/**
 * Abstract state (abstract interpretation "context" that exists between every {@link Instr}) for
 * scope analysis.
 */
public class ScopeAnalysisState implements AbstractNode<ScopeAnalysisState> {
  private final AbstractEnvHierarchy envs;
  private final AbstractISexp returnValue;
  private final Map<MkProm, AbstractISexp> forcedPromises;
  private boolean mayUseReflection;

  /** Create an "empty" state: no envs, returns nothing, no forced promises, and no reflection. */
  ScopeAnalysisState() {
    envs = new AbstractEnvHierarchy();
    returnValue = new AbstractISexp();
    forcedPromises = new HashMap<>();
    mayUseReflection = false;
  }

  /** Copy constructor, but exposed via {@link AbstractNode#copy()}. */
  private ScopeAnalysisState(ScopeAnalysisState copy) {
    this.envs = copy.envs.copy();
    this.returnValue = copy.returnValue.copy();
    this.forcedPromises =
        copy.forcedPromises.entrySet().stream()
            .collect(
                Collectors.toMap(
                    Map.Entry::getKey,
                    e -> e.getValue().copy(),
                    (_, _) -> {
                      throw new UnreachableError();
                    },
                    HashMap::new));
    this.mayUseReflection = copy.mayUseReflection;
  }

  AbstractEnvHierarchy envs() {
    return envs;
  }

  AbstractISexp returnValue() {
    return returnValue;
  }

  Map<MkProm, AbstractISexp> forcedPromises() {
    return forcedPromises;
  }

  public boolean mayUseReflection() {
    return mayUseReflection;
  }

  void setMayUseReflection(boolean mayUseReflection) {
    this.mayUseReflection = mayUseReflection;
  }

  public boolean didEnvEscape(@IsEnv ISexp env) {
    return !envs.contains(env) || envs.at(env).isLeaked();
  }

  @Override
  public AbstractResult merge(ScopeAnalysisState other) {
    var res = AbstractResult.NONE;

    // Merge `envs`.
    res = res.union(envs.merge(other.envs));

    // Merge `forcedPromises`.
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
      for (var mkProm : other.forcedPromises.keySet()) {
        forcedPromises.putIfAbsent(mkProm, AbstractISexp.UNKNOWN);
      }
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    // Merge `mayUseReflection`.
    if (!mayUseReflection && other.mayUseReflection) {
      mayUseReflection = true;
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    // Merge `returnValue`.
    if (!returnValue.isUnknown() && other.returnValue.isUnknown()) {
      returnValue.taint();
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    return res;
  }

  @Override
  public ScopeAnalysisState copy() {
    return new ScopeAnalysisState(this);
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
