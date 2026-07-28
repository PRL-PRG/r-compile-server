package org.prlprg.fir.ir.cfg.iterator;

import java.util.Collection;
import java.util.HashSet;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.BB;

abstract class Abstract<Queue extends Collection<BB>> implements BBIterator {
  protected final Queue next;
  protected final Set<BB> visited = new HashSet<>();
  private @Nullable BB last;
  private boolean mustPushNext = false;

  protected Abstract(Queue next, Collection<BB> initial) {
    this.next = next;
    this.next.addAll(initial);
    visited.addAll(initial);
  }

  @Override
  public boolean hasNext() {
    if (mustPushNext) {
      assert last != null;
      pushNext(last);
      mustPushNext = false;
    }

    return !next.isEmpty();
  }

  @Override
  public BB next() {
    if (mustPushNext) {
      assert last != null;
      pushNext(last);
    }

    if (next.isEmpty()) {
      throw new IllegalStateException("No more elements");
    }

    last = pop();
    mustPushNext = true;
    return last;
  }

  @Override
  public void prune() {
    last = null;
    mustPushNext = false;
  }

  @Override
  public void remove() {
    if (last == null) {
      throw new IllegalStateException("`next()` has not been called yet");
    }

    if (mustPushNext) {
      pushNext(last);
      mustPushNext = false;
    }
    last.owner().removeBB(last);
    last = null;
  }

  protected abstract void pushNext(BB last);

  protected abstract BB pop();
}
