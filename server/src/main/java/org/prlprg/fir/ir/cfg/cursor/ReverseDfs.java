package org.prlprg.fir.ir.cfg.cursor;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Reverse-depth-first iterator over a [CFG]'s basic blocks.
///
/// It supports [Iterator#remove()].
public class ReverseDfs implements Iterator<BB> {
  private final List<BB> stack = new ArrayList<>();
  private final Set<BB> visited = new HashSet<>();
  private @Nullable BB last;

  /// An [Iterable] that yields [ReverseDfs].
  public static Iterable<BB> reverseDfs(CFG cfg) {
    return () -> new ReverseDfs(cfg);
  }

  public ReverseDfs(CFG cfg) {
    stack.addAll(cfg.exits());
    visited.addAll(stack);
  }

  @Override
  public boolean hasNext() {
    return !stack.isEmpty();
  }

  @Override
  public BB next() {
    if (stack.isEmpty()) {
      throw new IllegalStateException("No more elements");
    }
    last = stack.removeLast();

    for (var predecessor : last.predecessors()) {
      if (visited.add(predecessor)) {
        stack.add(predecessor);
      }
    }

    return last;
  }

  @Override
  public void remove() {
    if (last == null) {
      throw new IllegalStateException("`next()` has not been called yet");
    }

    last.owner().removeBB(last);
  }
}
