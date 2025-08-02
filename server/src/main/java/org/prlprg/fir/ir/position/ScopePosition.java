package org.prlprg.fir.ir.position;

import java.util.LinkedHashMap;
import java.util.SequencedMap;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Location of an [Instruction][org.prlprg.fir.ir.instruction.Instruction] within an
/// [Abstraction][org.prlprg.fir.ir.abstraction.Abstraction].
public class ScopePosition {
  private final SequencedMap<CFG, CfgPosition> inCfgs = new LinkedHashMap<>();
  private final CfgPosition inInnermostCfg;

  public ScopePosition(Iterable<CfgPosition> parents, CfgPosition innermost) {
    for (var parent : parents) {
      inCfgs.put(parent.bb().owner(), parent);
    }
    inCfgs.put(innermost.bb().owner(), innermost);

    inInnermostCfg = innermost;
  }

  public @Nullable CfgPosition inCfg(CFG cfg) {
    return inCfgs.get(cfg);
  }

  public CfgPosition inInnermostCfg() {
    return inInnermostCfg;
  }

  public CFG innermostCfg() {
    return inInnermostCfg.cfg();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.printSeparated("--------------------\n", inCfgs.values());
  }
}
