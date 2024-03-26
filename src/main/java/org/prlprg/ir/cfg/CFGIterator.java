package org.prlprg.ir.cfg;

import java.util.ArrayDeque;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Set;
import java.util.function.Predicate;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;

/**
 * Iterate every {@link BB} in a {@link CFG} in some order.
 *
 * <p>Iterating a CFG while it's getting modified is possible. Newly-inserted blocks won't be
 * iterated, and removed blocks that haven't yet been iterated will be skipped.
 */
public abstract sealed class CFGIterator implements Iterator<BB> {
  protected final CFG cfg;
  protected final HashSet<BBId> remainingBBIds;
  protected final ArrayDeque<BB> worklist = new ArrayDeque<>();
  protected @Nullable BB current;

  /** Create a new iterator, starting with the entry basic block. */
  protected CFGIterator(CFG cfg) {
    this.cfg = cfg;
    remainingBBIds = new HashSet<>(cfg.bbIds());
  }

  /**
   * Returns the next element (see {@link #next()}), except applies the predicate and if it returns
   * {@code false}, will skip the nodes the next would add to the worklist (note that another node
   * may add them to the worklist later, so any node in particular may only be delayed).
   */
  public abstract BB next(Predicate<BB> predicate);

  /**
   * Iterates the remaining elements, except the consumer also returns a boolean that indicates
   * whether to delay or skip subsequent nodes in the same way as {@link #next(Predicate)}.
   */
  public void forEachRemaining1(Predicate<BB> consumer) {
    while (hasNext()) {
      next(consumer);
    }
  }

  @Override
  public boolean hasNext() {
    return !worklist.isEmpty();
  }

  @Override
  public BB next() {
    return next(bb -> true);
  }

  @Override
  public void remove() {
    if (current == null) {
      throw new IllegalStateException();
    }
    cfg.remove(current);
  }

  /**
   * (A view of) blocks that haven't been iterated.
   *
   * <p>This includes blocks yet to be iterated, and block that will never be iterated (e.g. blocks
   * not connected to the entry in a forward iterator).
   */
  @UnmodifiableView
  public Set<BBId> remainingBBIds() {
    return Collections.unmodifiableSet(remainingBBIds);
  }

  /** Forward breadth-first iterator. */
  public static final class Bfs extends CFGIterator {
    /** Iterate nodes starting at the entry. */
    public Bfs(CFG cfg) {
      super(cfg);
      worklist.add(cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Bfs(CFG cfg, BB start) {
      super(cfg);
      if (start.cfg() != cfg) {
        throw new IllegalArgumentException("The start block to iterate is not in the CFG");
      }
      worklist.add(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Collection<BB> starts) {
      super(cfg);
      if (starts.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
      worklist.addAll(starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Stream<BB> starts) {
      super(cfg);
      starts.forEach(worklist::add);
      if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
    }

    /**
     * Returns the next element (see {@link #next()}), except applies the predicate and if it
     * returns {@code false}, will skip the next's successors (note that if another node has the
     * same node as a successor and returns true, it will be iterated later).
     */
    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeFirst();
      remainingBBIds.remove(current.id());
      if (predicate.test(current)) {
        for (var succ : current.successors()) {
          if (remainingBBIds.contains(succ.id())) {
            worklist.addLast(succ);
          }
        }
      }
      return current;
    }
  }

  /** Forward depth-first iterator. */
  public static final class Dfs extends CFGIterator {
    /** Iterate nodes starting at the entry. */
    public Dfs(CFG cfg) {
      super(cfg);
      worklist.add(cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Dfs(CFG cfg, BB start) {
      super(cfg);
      if (start.cfg() != cfg) {
        throw new IllegalArgumentException("The start block to iterate is not in the CFG");
      }
      worklist.add(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Collection<BB> starts) {
      super(cfg);
      if (starts.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
      worklist.addAll(starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Stream<BB> starts) {
      super(cfg);
      starts.forEach(worklist::add);
      if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
    }

    /**
     * Returns the next element (see {@link #next()}), except applies the predicate and if it
     * returns {@code false}, will skip the next's successors (note that if another node has the
     * same node as a successor and returns true, it will be iterated later).
     */
    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeLast();
      if (predicate.test(current)) {
        remainingBBIds.remove(current.id());
        for (var succ : current.successors()) {
          if (remainingBBIds.contains(succ.id())) {
            worklist.addLast(succ);
          }
        }
      }
      return current;
    }
  }

  /** Reverse breadth-first iterator. */
  public static final class ReverseBfs extends CFGIterator {
    /** Iterate nodes starting at the exits. */
    public ReverseBfs(CFG cfg) {
      super(cfg);
      worklist.addAll(cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseBfs(CFG cfg, BB start) {
      super(cfg);
      if (start.cfg() != cfg) {
        throw new IllegalArgumentException("The start block to iterate is not in the CFG");
      }
      worklist.add(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Collection<BB> starts) {
      super(cfg);
      if (starts.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
      worklist.addAll(starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Stream<BB> starts) {
      super(cfg);
      starts.forEach(worklist::add);
      if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
    }

    /**
     * Returns the next element (see {@link #next()}), except applies the predicate and if it
     * returns {@code false}, will skip the next's predecessors (note that if another node has the
     * same node as a predecessor and returns true, it will be iterated later).
     */
    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeFirst();
      remainingBBIds.remove(current.id());
      if (predicate.test(current)) {
        for (var succ : current.predecessors()) {
          if (remainingBBIds.contains(succ.id())) {
            worklist.addLast(succ);
          }
        }
      }
      return current;
    }
  }

  /** Reverse depth-first iterator. */
  public static final class ReverseDfs extends CFGIterator {
    /** Iterate nodes starting at the exits. */
    public ReverseDfs(CFG cfg) {
      super(cfg);
      worklist.addAll(cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseDfs(CFG cfg, BB start) {
      super(cfg);
      if (start.cfg() != cfg) {
        throw new IllegalArgumentException("The start block to iterate is not in the CFG");
      }
      worklist.add(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Collection<BB> starts) {
      super(cfg);
      if (starts.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
      worklist.addAll(starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Stream<BB> starts) {
      super(cfg);
      starts.forEach(worklist::add);
      if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("A start block to iterate is not in the CFG");
      }
    }

    /**
     * Returns the next element (see {@link #next()}), except applies the predicate and if it
     * returns {@code false}, will skip the next's successors (note that if another node has the
     * same node as a successor and returns true, it will be iterated later).
     */
    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeLast();
      if (predicate.test(current)) {
        remainingBBIds.remove(current.id());
        for (var succ : current.predecessors()) {
          if (remainingBBIds.contains(succ.id())) {
            worklist.addLast(succ);
          }
        }
      }
      return current;
    }
  }

  /** Dominator tree (breadth-first) iterator. */
  public static final class DomTreeBfs extends CFGIterator {
    private final DomTree tree;

    /** Iterate nodes starting at the root of the dominator tree. */
    public DomTreeBfs(DomTree tree) {
      this(tree, tree.root());
    }

    /** Iterate nodes starting at the given block. */
    public DomTreeBfs(DomTree tree, BB root) {
      super(tree.cfg());
      this.tree = tree;
      if (root.cfg() != cfg) {
        throw new IllegalArgumentException("The root must belong to the CFG");
      }
      worklist.add(root);
    }

    /** Iterate nodes starting at the given blocks. */
    public DomTreeBfs(DomTree tree, Collection<BB> roots) {
      super(tree.cfg());
      this.tree = tree;
      if (roots.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("All roots must belong to the CFG");
      }
      worklist.addAll(roots);
    }

    /** Iterate nodes starting at the given blocks. */
    public DomTreeBfs(DomTree tree, Stream<BB> roots) {
      super(tree.cfg());
      this.tree = tree;
      roots.forEach(worklist::add);
      if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
        throw new IllegalArgumentException("All roots must belong to the CFG");
      }
    }

    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = worklist.removeFirst();
      remainingBBIds.remove(current.id());
      if (predicate.test(current)) {
        for (var succ : tree.idominees(current)) {
          if (remainingBBIds.contains(succ.id())) {
            worklist.addLast(succ);
          }
        }
      }
      return current;
    }
  }
}
