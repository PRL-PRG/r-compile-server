package org.prlprg.fir.analyze.cfg;

import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Forward must-dataflow analysis that computes which `AssumeLoadFun` assumptions are "active"
/// (have been established and not invalidated) at each basic block entry.
///
/// An `AssumeLoadFun(v, f)` is active at a point if, on every path from the CFG entry to that
/// point, there is an earlier `AssumeLoadFun(v, f)` with no intervening reflective instruction or
/// `Store`/`SuperStore` to `v`.
///
/// Used by {@link org.prlprg.fir.opt.specialize.ElideRedundantAssumeLoadFun} to remove redundant
/// assumptions.
public final class ActiveAssumeLoadFunAnalysis implements CfgAnalysis {
  private final Map<BB, Set<Key>> bbEntryActive;
  private final InferEffects inferEffects;

  public record Key(NamedVariable variable, Function function) {}

  @AnalysisConstructor
  public ActiveAssumeLoadFunAnalysis(CFG cfg) {
    inferEffects = new InferEffects(cfg.scope());
    bbEntryActive = compute(cfg);
  }

  /// Returns `true` if the `AssumeLoadFun(variable, function)` at `(bb, index)` is redundant
  /// because an identical assumption is already active at that point.
  public boolean isRedundant(BB bb, int index, NamedVariable variable, Function function) {
    var active = new HashSet<>(bbEntryActive.getOrDefault(bb, Set.of()));
    // Replay transfer through statements [0, index) to get the active set just before `index`.
    for (var i = 0; i < index; i++) {
      transfer(bb.statements().get(i).expression(), active);
    }
    return active.contains(new Key(variable, function));
  }

  private Map<BB, Set<Key>> compute(CFG cfg) {
    Map<BB, Set<Key>> bbEntry = new HashMap<>();
    bbEntry.put(cfg.entry(), new HashSet<>());

    var worklist = new ArrayDeque<BB>();
    worklist.add(cfg.entry());

    while (!worklist.isEmpty()) {
      var bb = worklist.poll();
      var active = new HashSet<>(bbEntry.get(bb));

      // Transfer through all statements in the block.
      for (var stmt : bb.statements()) {
        transfer(stmt.expression(), active);
      }

      // Propagate to successors.
      for (var succ : bb.successors()) {
        var old = bbEntry.get(succ);
        if (old == null) {
          // First time reaching this block.
          bbEntry.put(succ, new HashSet<>(active));
          worklist.add(succ);
        } else {
          // Merge: intersection.
          if (old.retainAll(active)) {
            worklist.add(succ);
          }
        }
      }
    }

    return bbEntry;
  }

  private void transfer(org.prlprg.fir.ir.expression.Expression expression, Set<Key> active) {
    // Reflective expressions invalidate all assumptions.
    if (inferEffects.of(expression).reflect()) {
      active.clear();
      return;
    }

    switch (expression) {
      case AssumeLoadFun a -> active.add(new Key(a.variable(), a.function()));
      case Store(var variable, var _) -> active.removeIf(k -> k.variable().equals(variable));
      case SuperStore(var variable, var _) -> active.removeIf(k -> k.variable().equals(variable));
      default -> {}
    }
  }
}
