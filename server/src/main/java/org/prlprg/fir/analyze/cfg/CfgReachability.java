package org.prlprg.fir.analyze.cfg;

import static org.prlprg.fir.ir.cfg.iterator.Dfs.dfs;
import static org.prlprg.fir.ir.cfg.iterator.ReverseDfs.reverseDfs;

import com.google.common.collect.Streams;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.position.CfgPosition;

/// Computes reachable blocks in a control-flow graph.
/// Similar to [CfgDominatorTree], except it computes reachable blocks instead of dominator blocks.
public final class CfgReachability implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, Set<BB>> mayPrecede = new HashMap<>();
  private final Map<BB, Set<BB>> maySucceed = new HashMap<>();

  @AnalysisConstructor
  public CfgReachability(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get all blocks that the given block is reachable from (including the block itself).
  public @Unmodifiable Set<BB> mayPrecede(BB reached) {
    if (reached.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(Objects.requireNonNull(mayPrecede.get(reached)));
  }

  /// Get all blocks reachable from the given block (including the block itself).
  public @Unmodifiable Set<BB> maySucceed(BB reached) {
    if (reached.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(Objects.requireNonNull(maySucceed.get(reached)));
  }

  /// Check if a trace that reaches `source` may reach `target` after.
  public boolean isReachable(CfgPosition source, CfgPosition target) {
    return isReachable(
        source.bb(), source.instructionIndex(), target.bb(), target.instructionIndex());
  }

  /// Check if a trace that reaches `source` may reach `target` after.
  public boolean isReachable(BB sourceBb, int sourceIndex, BB targetBb, int targetIndex) {
    return sourceBb == targetBb ? sourceIndex <= targetIndex : isReachable(sourceBb, targetBb);
  }

/// Check if a trace that reaches `source` may reach `target` after.
public boolean isReachable(BB source, BB target) {
    assert mayPrecede(source).contains(target) == maySucceed(target).contains(source);
    return maySucceed(source).contains(target);
  }

  private void run() {
    for (var bb : cfg.bbs()) {
      mayPrecede.put(bb, Streams.stream(reverseDfs(bb)).collect(Collectors.toSet()));
      maySucceed.put(bb, Streams.stream(dfs(bb)).collect(Collectors.toSet()));
    }
  }
}
