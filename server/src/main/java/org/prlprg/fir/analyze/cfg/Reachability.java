package org.prlprg.fir.analyze.cfg;

import static org.prlprg.fir.ir.cfg.iterator.ReverseDfs.reverseDfs;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.position.CfgPosition;

/// Computes reachable blocks in a control-flow graph.
/// Similar to `DominatorTree`, except it computes reachable blocks instead of dominator blocks.
public final class Reachability implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, Set<BB>> reachableFrom = new HashMap<>();

  @AnalysisConstructor
  public Reachability(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get all blocks reachable from the given block (including the block itself).
  public Set<BB> reachable(BB from) {
    if (from.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Objects.requireNonNull(reachableFrom.get(from));
  }

  /// Check if the target position is reachable from the source position.
  public boolean isReachable(CfgPosition source, CfgPosition target) {
    return isReachable(
        source.bb(), source.instructionIndex(), target.bb(), target.instructionIndex());
  }

  /// Check if the target position is reachable from the source position.
  public boolean isReachable(BB sourceBb, int sourceIndex, BB targetBb, int targetIndex) {
    return sourceBb == targetBb ? sourceIndex <= targetIndex : isReachable(sourceBb, targetBb);
  }

  /// Check if the target block is reachable from the source block.
  public boolean isReachable(BB source, BB target) {
    return reachable(source).contains(target);
  }

  private void run() {
    for (var bb : reverseDfs(cfg)) {
      reachableFrom.put(
          bb,
          bb.successors().stream()
              .flatMap(s -> reachableFrom.get(s).stream())
              .collect(Collectors.toSet()));
    }
  }
}
