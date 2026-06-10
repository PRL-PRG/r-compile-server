package org.prlprg.fir.ir.cfg.iterator;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Depth-first iterator over a [CFG]'s basic blocks.
///
/// It supports [java.util.Iterator#remove()]. It supports concurrent modification, and only
/// queues elements when [#next()] or [#remove()] is called.
public class Dfs extends Abstract<List<BB>> {
  /// An [Iterable] that yields [Dfs].
  public static Iterable<BB> dfs(CFG cfg) {
    return () -> new Dfs(cfg);
  }

  public Dfs(CFG cfg) {
    super(new ArrayList<>(), List.of(cfg.entry()));
  }

  @Override
  protected void pushNext(BB last) {
    for (var successor : last.successors()) {
      if (visited.add(successor)) {
        next.add(successor);
      }
    }
  }

  @Override
  protected BB pop() {
    return next.removeLast();
  }
}
