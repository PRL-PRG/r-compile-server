package org.prlprg.fir.analyze.resolve;

import java.util.Comparator;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness.EnvRange;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;

/// Analysis that returns the top environment range at a position, or `null`
public final class TopEnvironmentLiveness implements Analysis {
  private final EnvironmentLiveness envLiveness;
  private final DominatorTree domTree;

  @AnalysisConstructor
  public TopEnvironmentLiveness(
      Abstraction ignored, EnvironmentLiveness envLiveness, DominatorTree domTree) {
    this.envLiveness = envLiveness;
    this.domTree = domTree;
  }

  /// Returns the top environment range at `bb`/`instructionIndex`, or `null` if there's none.
  public EnvironmentLiveness.@Nullable EnvRange topEnvAt(BB bb, int instructionIndex) {
    return envLiveness.envsAt(bb, instructionIndex).stream()
        .min(Comparator.comparing(EnvRange::mk, domTree.cfg(bb.owner()).positionComparator()))
        .orElse(null);
  }
}
