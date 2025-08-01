package org.prlprg.fir.ir.position;

import com.google.common.collect.ImmutableMap;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.CFG;

/// Location of an [Instruction] within an [Abstraction][org.prlprg.fir.ir.abstraction.Abstraction].
public record ScopePosition(ImmutableMap<CFG, CfgPosition> inCfg, CfgPosition inInnermostCfg) {
  public ScopePosition(Iterable<CfgPosition> parents, CfgPosition innermost) {
    var inCfgBuilder = ImmutableMap.<CFG, CfgPosition>builder();
    for (var parent : parents) {
      inCfgBuilder.put(parent.bb().owner(), parent);
    }
    inCfgBuilder.put(innermost.bb().owner(), innermost);

    this(inCfgBuilder.build(), innermost);
  }

  public @Nullable CfgPosition inCfg(CFG cfg) {
    return inCfg.get(cfg);
  }

  public CFG innermostCfg() {
    return inInnermostCfg.cfg();
  }
}
