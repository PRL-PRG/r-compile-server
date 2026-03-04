package org.prlprg.fir.ir.cfg.iterator;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Deopt;

/// Reverse-depth-first iterator over a [CFG]'s basic blocks.
///
/// It supports [java.util.Iterator#remove()]. It supports concurrent modification, and only
/// queues elements when [#next()] or [#remove()] is called.
public final class BbReverseDfs extends Abstract<List<BB>> {
  /// An [Iterable] that yields [BbReverseDfs].
  public static Iterable<BB> bbReverseDfs(CFG cfg) {
    return () -> new BbReverseDfs(cfg);
  }

  /// An [Iterable] that yields [BbReverseDfs], starting with all non-deopt exits.
  public static Iterable<BB> bbReverseDfsNoDeopts(CFG cfg) {
    return () ->
        new BbReverseDfs(cfg.exits().stream().filter(bb -> !(bb.jump() instanceof Deopt)).toList());
  }

  /// An [Iterable] that yields [BbReverseDfs].
  public static Iterable<BB> bbReverseDfs(BB bb) {
    return () -> new BbReverseDfs(bb);
  }

  public BbReverseDfs(CFG cfg) {
    super(new ArrayList<>(), cfg.exits());
  }

  public BbReverseDfs(Collection<BB> bbs) {
    super(new ArrayList<>(), bbs);
  }

  public BbReverseDfs(BB bb) {
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
