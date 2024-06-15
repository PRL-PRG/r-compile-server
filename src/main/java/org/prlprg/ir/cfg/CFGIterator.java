package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
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
import org.prlprg.ir.analysis.DomTree;
import org.prlprg.util.Collections2;

/**
 * Iterate every {@link BB} in a {@link CFG} in some order.
 *
 * <p>Iterating a CFG while it's getting modified is possible. Newly-inserted blocks won't be
 * iterated, and removed blocks that haven't yet been iterated will be skipped.
 */
@SuppressFBWarnings({"EI_EXPOSE_REP", "EI_EXPOSE_REP2"})
public abstract sealed class CFGIterator implements Iterator<BB> {
  protected final CFG cfg;
  private final HashSet<BBId> remainingBBIds;
  private final ArrayDeque<BB> worklist = new ArrayDeque<>();
  protected @Nullable BB current;

  // region constructors
  /** Create a new iterator, starting with the given block. */
  protected CFGIterator(CFG cfg, BB start) {
    this(cfg);
    if (start.cfg() != cfg) {
      throw new IllegalArgumentException("The start block to iterate is not in the CFG");
    }
    addLast(start);
  }

  /** Create a new iterator, starting with the given blocks. */
  protected CFGIterator(CFG cfg, Collection<BB> starts) {
    this(cfg);
    if (starts.stream().anyMatch(s -> s.cfg() != cfg)) {
      throw new IllegalArgumentException("A start block to iterate is not in the CFG");
    }
    if (Collections2.hasDuplicates(starts)) {
      throw new IllegalArgumentException("Duplicate start blocks to iterate");
    }
    addAllLast(starts);
  }

  /** Create a new iterator, starting with the given blocks. */
  protected CFGIterator(CFG cfg, Stream<BB> starts) {
    this(cfg);
    addAllLast(starts);
    if (worklist.stream().anyMatch(s -> s.cfg() != cfg)) {
      throw new IllegalArgumentException("A start block to iterate is not in the CFG");
    }
    if (Collections2.hasDuplicates(worklist)) {
      throw new IllegalArgumentException("Duplicate start blocks to iterate");
    }
  }

  /**
   * Create a new iterator.
   *
   * <p>Initially no blocks are in the worklist, so they must be added or it will iterate nothing.
   */
  private CFGIterator(CFG cfg) {
    this.cfg = cfg;
    remainingBBIds = new HashSet<>(cfg.bbIds());
  }

  // endregion constructors

  // region additional public methods
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

  // endregion additional public methods

  // region `Iterator` methods
  @Override
  public boolean hasNext() {
    return !worklist.isEmpty();
  }

  @Override
  public BB next() {
    return next(_ -> true);
  }

  @Override
  public void remove() {
    if (current == null) {
      throw new IllegalStateException();
    }
    cfg.remove(current);
  }

  // endregion `Iterator` methods

  // region protected and private methods to access `worklist` and `remainingBbIds`
  protected void addLast(BB bb) {
    worklist.addLast(bb);
    remainingBBIds.remove(bb.id());
  }

  private void addAllLast(Collection<BB> bbs) {
    worklist.addAll(bbs);
    bbs.forEach(bb -> remainingBBIds.remove(bb.id()));
  }

  private void addAllLast(Stream<BB> bbs) {
    bbs.forEach(this::addLast);
  }

  protected BB removeFirst() {
    return worklist.removeFirst();
  }

  protected BB removeLast() {
    return worklist.removeLast();
  }

  /** Whether the given block hasn't been added to the worklist (or iterated). */
  protected boolean isRemaining(BB bb) {
    return remainingBBIds.contains(bb.id());
  }

  // endregion protected and private methods to access `worklist` and `remainingBbIds`

  /** Forward breadth-first iterator. */
  public static final class Bfs extends CFGIterator {
    /** Iterate nodes starting at the entry. */
    public Bfs(CFG cfg) {
      super(cfg, cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Bfs(CFG cfg, BB start) {
      super(cfg, start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
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
      current = removeFirst();
      if (predicate.test(current)) {
        for (var succ : current.successors()) {
          if (isRemaining(succ)) {
            addLast(succ);
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
      super(cfg, cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Dfs(CFG cfg, BB start) {
      super(cfg, start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
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
      current = removeLast();
      if (predicate.test(current)) {
        for (var succ : current.successors()) {
          if (isRemaining(succ)) {
            addLast(succ);
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
      super(cfg, cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseBfs(CFG cfg, BB start) {
      super(cfg, start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
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
      current = removeFirst();
      if (predicate.test(current)) {
        for (var succ : current.predecessors()) {
          if (isRemaining(succ)) {
            addLast(succ);
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
      super(cfg, cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseDfs(CFG cfg, BB start) {
      super(cfg, start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
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
      current = removeLast();
      if (predicate.test(current)) {
        for (var succ : current.predecessors()) {
          if (isRemaining(succ)) {
            addLast(succ);
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
      super(tree.cfg(), tree.root());
      this.tree = tree;
    }

    /** Iterate nodes starting at the given block. */
    public DomTreeBfs(DomTree tree, BB root) {
      super(tree.cfg(), root);
      this.tree = tree;
    }

    /** Iterate nodes starting at the given blocks. */
    public DomTreeBfs(DomTree tree, Collection<BB> roots) {
      super(tree.cfg(), roots);
      this.tree = tree;
    }

    /** Iterate nodes starting at the given blocks. */
    public DomTreeBfs(DomTree tree, Stream<BB> roots) {
      super(tree.cfg(), roots);
      this.tree = tree;
    }

    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      current = removeFirst();
      if (predicate.test(current)) {
        for (var succ : tree.idominees(current)) {
          if (isRemaining(succ)) {
            addLast(succ);
          }
        }
      }
      return current;
    }
  }
}
