package org.prlprg.ir;

import java.util.ArrayDeque;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Set;
import javax.annotation.Nullable;

/** Iterate every {@link BB} in a {@link CFG} in some order. */
abstract sealed class CfgIterator implements Iterator<BB> {
  protected final CFG cfg;
  protected final HashSet<BBId> remainingBBIds;
  protected final ArrayDeque<BB> worklist = new ArrayDeque<>();
  protected @Nullable BB current;

  /** Create a new iterator, starting with the entry basic block. */
  protected CfgIterator(CFG cfg) {
    this.cfg = cfg;
    remainingBBIds = new HashSet<>(cfg.bbIds());
  }

  @Override
  public boolean hasNext() {
    return !worklist.isEmpty();
  }

  @Override
  public void remove() {
    if (current == null) {
      throw new IllegalStateException();
    }
    cfg.remove(current);
  }

  /** (A view of) blocks yet to be iterated. */
  Set<BBId> remainingBBIds() {
    return Collections.unmodifiableSet(remainingBBIds);
  }

  /** Forward breadth-first iterator. */
  static final class Bfs extends CfgIterator {
    Bfs(CFG cfg) {
      super(cfg);
      worklist.add(cfg.entry());
    }

    @Override
    public BB next() {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeFirst();
      remainingBBIds.remove(current.id());
      for (var succ : current.successors()) {
        if (remainingBBIds.contains(succ.id())) {
          worklist.addLast(succ);
        }
      }
      return current;
    }
  }

  /** Forward depth-first iterator. */
  static final class Dfs extends CfgIterator {
    Dfs(CFG cfg) {
      super(cfg);
      worklist.add(cfg.entry());
    }

    @Override
    public BB next() {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeLast();
      remainingBBIds.remove(current.id());
      for (var succ : current.successors()) {
        if (remainingBBIds.contains(succ.id())) {
          worklist.addLast(succ);
        }
      }
      return current;
    }
  }

  /** Reverse breadth-first iterator. */
  static final class ReverseBfs extends CfgIterator {
    ReverseBfs(CFG cfg) {
      super(cfg);
      worklist.addAll(cfg.exits());
    }

    @Override
    public BB next() {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeFirst();
      remainingBBIds.remove(current.id());
      for (var succ : current.predecessors()) {
        if (remainingBBIds.contains(succ.id())) {
          worklist.addLast(succ);
        }
      }
      return current;
    }
  }

  /** Reverse depth-first iterator. */
  static final class ReverseDfs extends CfgIterator {
    ReverseDfs(CFG cfg) {
      super(cfg);
      worklist.addAll(cfg.exits());
    }

    @Override
    public BB next() {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeLast();
      remainingBBIds.remove(current.id());
      for (var succ : current.predecessors()) {
        if (remainingBBIds.contains(succ.id())) {
          worklist.addLast(succ);
        }
      }
      return current;
    }
  }
}
