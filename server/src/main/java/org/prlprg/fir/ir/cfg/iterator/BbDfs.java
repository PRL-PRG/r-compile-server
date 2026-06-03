package org.prlprg.fir.ir.cfg.iterator;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Depth-first iterator over a [CFG]'s basic blocks.
///
/// It supports [java.util.Iterator#remove()]. It supports concurrent modification, and only
/// queues elements when [#next()] or [#remove()] is called.
public final class BbDfs extends Abstract<List<BB>> {
  /// An [Iterable] that yields [BbDfs].
  public static Iterable<BB> bbDfs(CFG cfg) {
    return () -> new BbDfs(cfg);
  }

  /// An [Iterable] that yields [BbDfs].
  public static Iterable<BB> bbDfs(BB bb) {
    return () -> new BbDfs(bb);
  }

  public BbDfs(CFG cfg) {
    super(new ArrayList<>(), List.of(cfg.entry()));
  }

  public BbDfs(BB bb) {
    super(new ArrayList<>(), List.of(bb));
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
