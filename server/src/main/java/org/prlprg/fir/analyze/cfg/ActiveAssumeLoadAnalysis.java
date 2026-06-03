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
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Forward must-dataflow analysis that computes which `AssumeLoadFun`/`AssumeLoadVar` assumptions
/// are "active" (have been established and not invalidated) at each basic block entry.
///
/// An `AssumeLoadFun(v, f)` (resp. `AssumeLoadVar(v, c)`) is active at a point if, on every path
/// from the CFG entry to that point, there is an earlier identical assumption with no intervening
/// reflective instruction or `Store`/`SuperStore` to `v`.
///
/// Used by {@link org.prlprg.fir.opt.specialize.ElideRedundantAssumeLoad} to remove redundant
/// assumptions.
public final class ActiveAssumeLoadAnalysis implements CfgAnalysis {
  private final Map<BB, Set<Key>> bbEntryActive;
  private final InferEffects inferEffects;

  /// `value` is a `Function` for `AssumeLoadFun` and an `org.prlprg.fir.ir.value.Value` for
  /// `AssumeLoadVar`.
  public record Key(NamedVariable variable, Object value) {}

  @AnalysisConstructor
  public ActiveAssumeLoadAnalysis(CFG cfg) {
    inferEffects = new InferEffects(cfg.scope());
    bbEntryActive = compute(cfg);
  }

  /// Returns `true` if the assumption at `(bb, index)` with the given `(variable, value)` key is
  /// redundant because an identical assumption is already active at that point.
  public boolean isRedundant(BB bb, int index, NamedVariable variable, Object value) {
    var active = new HashSet<>(bbEntryActive.getOrDefault(bb, Set.of()));
    // Replay transfer through statements [0, index) to get the active set just before `index`.
    for (var i = 0; i < index; i++) {
      transfer(bb.statements().get(i).expression(), active);
    }
    return active.contains(new Key(variable, value));
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

  private void transfer(Expression expression, Set<Key> active) {
    // Reflective expressions invalidate all assumptions.
    if (inferEffects.of(expression).reflect()) {
      active.clear();
      return;
    }

    switch (expression) {
      case Assume(var assumption) -> {
        switch (assumption) {
          case AssumeLoadFun(var variable, var functionRef) ->
              active.add(new Key(variable, functionRef.get()));
          case AssumeLoadVar(var variable, var constant) -> active.add(new Key(variable, constant));
          default -> {}
        }
      }
      case Store(_, var variable, var _) -> active.removeIf(k -> k.variable().equals(variable));
      default -> {}
    }
  }
}
