package org.prlprg.fir.ir.cfg.iterator;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Reverse-depth-first iterator over a [CFG]'s basic blocks.
///
/// It supports [java.util.Iterator#remove()]. It supports concurrent modification, and only
/// queues elements when [#next()] or [#remove()] is called.
public class ReverseDfs extends Abstract<List<BB>> {
  /// An [Iterable] that yields [ReverseDfs].
  public static Iterable<BB> reverseDfs(CFG cfg) {
    return () -> new ReverseDfs(cfg);
  }

  /// An [Iterable] that yields [ReverseDfs].
  public static Iterable<BB> reverseDfs(BB bb) {
    return () -> new ReverseDfs(bb);
  }

  public ReverseDfs(CFG cfg) {
    super(new ArrayList<>(), cfg.exits());
  }

  public ReverseDfs(BB bb) {
    super(new ArrayList<>(), List.of(bb));
  }

  @Override
  protected void pushNext(BB last) {
    for (var predecessor : last.predecessors()) {
      if (visited.add(predecessor)) {
        next.add(predecessor);
      }
    }
  }

  @Override
  protected BB pop() {
    return next.removeLast();
  }
}
