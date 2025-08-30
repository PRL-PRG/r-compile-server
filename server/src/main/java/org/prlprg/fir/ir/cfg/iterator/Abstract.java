package org.prlprg.fir.ir.cfg.iterator;

import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.BB;

/// Abstract iterator over a [CFG]'s basic blocks.
///
/// It supports [Iterator#remove()]. It only queues elements when [#next()] or [#remove()] is
// called.
abstract class Abstract<Queue extends Collection<BB>> implements Iterator<BB> {
  protected final Queue next;
  protected final Set<BB> visited = new HashSet<>();
  private @Nullable BB last;

  protected Abstract(Queue next, Collection<BB> initial) {
    this.next = next;
    this.next.addAll(initial);
    visited.addAll(initial);
  }

  @Override
  public boolean hasNext() {
    return !next.isEmpty();
  }

  @Override
  public BB next() {
    if (last != null) {
      pushNext(last);
    }

    if (next.isEmpty()) {
      throw new IllegalStateException("No more elements");
    }

    last = pop();
    return last;
  }

  @Override
  public void remove() {
    if (last == null) {
      throw new IllegalStateException("`next()` has not been called yet");
    }

    pushNext(last);
    last.owner().removeBB(last);
    last = null;
  }

  protected abstract void pushNext(BB last);

  protected abstract BB pop();
}
