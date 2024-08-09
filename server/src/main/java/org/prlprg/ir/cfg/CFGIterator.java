package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayDeque;
import java.util.Collection;
import java.util.Collections;
import java.util.ConcurrentModificationException;
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
public abstract class CFGIterator implements Iterator<BB> {
  protected final CFG cfg;
  private final HashSet<BBId> remainingBBIds;
  private final ArrayDeque<BB> worklist = new ArrayDeque<>();
  protected @Nullable BB current;

  // region constructors
  /** Create a new iterator, starting with the given block. */
  protected CFGIterator(BB start) {
    this(start.cfg());
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
   *
   * <p>Note that the predicate may not be called when this method is called. For {@linkplain
   * Forward forward iterators}, the predicate for <i>this</i> returned block is called when the
   * <i>next</i> block is returned by this method or {@link #next()}, or when {@link #hasNext()} or
   * {@link #remove()} are called, whichever comes first.
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
    while (true) {
      if (worklist.isEmpty()) {
        return false;
      }
      // Remove BBs that were added to the worklist, but then we removed them from the CFG.
      // ???: Will this cause performance issues? Especially when we iterate not removing BBs.
      var next = getNext();
      if (next.cfg().contains(next.id())) {
        return true;
      } else {
        worklist.removeFirst();
      }
    }
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
    current = null;
  }

  // endregion `Iterator` methods

  // region protected and private methods to access `worklist` and `remainingBbIds`
  /** e.g. {@link BB#successors()}, but not always (e.g. in {@link DomTreeBfs}). */
  protected abstract Iterable<BB> getNext(BB bb);

  /** {@link #removeFirst()} if breadth-first, {@link #removeLast()} if depth-first. */
  protected abstract BB removeNext();

  /** {@link #getFirst()} if breadth-first, {@link #getLast()} if depth-first. */
  protected abstract BB getNext();

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

  protected BB getFirst() {
    return worklist.getFirst();
  }

  protected BB getLast() {
    return worklist.getLast();
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

  /**
   * Forward iterator (iterates successors, though not necessarily all of them).
   *
   * <p>If you merge the currently-iterated block with its successor ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged block's successor(s) (but not the
   * merged block again). If you remove the current block using {@link #remove()}, it will still
   * iterate its successors, but removing via {@link CFG#remove(BB)} will throw {@link
   * java.util.ConcurrentModificationException}.
   */
  public abstract static class Forward extends CFGIterator {
    private @Nullable Predicate<BB> nextPredicate;

    /** Iterate nodes starting at the entry. */
    protected Forward(CFG cfg) {
      super(cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    protected Forward(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    protected Forward(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    protected Forward(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
    }

    @Override
    public BB next(Predicate<BB> predicate) {
      if (!hasNext()) {
        throw new NoSuchElementException();
      }
      // `addNext` was called in `hasNext`.
      // It's *before* `current = removeFirst()` in case `current` gets merged with its successor
      // (then we will queue the merged block's successors, whereas if after we'd queue nothing).
      current = removeNext();
      nextPredicate = predicate;
      return current;
    }

    @Override
    public boolean hasNext() {
      addNext();
      return super.hasNext();
    }

    @Override
    public void remove() {
      addNext();
      super.remove();
    }

    private void addNext() {
      if (current != null && nextPredicate != null && nextPredicate.test(current)) {
        if (!current.cfg().contains(current.id())) {
          throw new ConcurrentModificationException(
              "`next` or `hasNext` called on forward CFG iterator whose current item was removed, and not through `Iterator.remove`. This isn't allowed.");
        }
        for (var succ : getNext(current)) {
          if (isRemaining(succ)) {
            addLast(succ);
          }
        }
      }
      // Ensure `addNext` isn't called again if we called `hasNext`.
      nextPredicate = null;
    }
  }

  /**
   * Reverse iterator (iterates predecessors, though not necessarily all of them).
   *
   * <p>If you merge the current block's only predecessor with it ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged predecessor.
   */
  public abstract static class Reverse extends CFGIterator {
    /** Iterate nodes starting at the exits. */
    protected Reverse(CFG cfg) {
      super(cfg, cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    protected Reverse(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    protected Reverse(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    protected Reverse(CFG cfg, Stream<BB> starts) {
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
      // This is *after* `current = removeFirst()` in case `current` gets merged with its
      // predecessor
      // (then we will queue the merged predecessor, whereas if after we'd queue nothing).
      addNext(predicate);
      return current;
    }

    private void addNext(Predicate<BB> predicate) {
      assert current != null;
      if (predicate.test(current)) {
        for (var succ : getNext(current)) {
          if (isRemaining(succ)) {
            addLast(succ);
          }
        }
      }
    }

    /** e.g. {@link BB#predecessors()}, but not always (e.g. in {@code PostDomTreeBfs}). */
    protected abstract Iterable<BB> getNext(BB bb);

    /** {@link #removeFirst()} if breadth-first, {@link #removeLast()} if depth-first. */
    protected abstract BB removeNext();
  }

  /**
   * Forward breadth-first iterator.
   *
   * <p>If you merge the currently-iterated block with its successor ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged block's successor(s) (but not the
   * merged block again). If you remove the current block using {@link #remove()}, it will still
   * iterate its successors, but removing via {@link CFG#remove(BB)} will throw {@link
   * java.util.ConcurrentModificationException}.
   */
  public static final class Bfs extends Forward {
    /** Iterate nodes starting at the entry. */
    public Bfs(CFG cfg) {
      super(cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Bfs(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Bfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
    }

    @Override
    protected Iterable<BB> getNext(BB bb) {
      return bb.successors();
    }

    @Override
    protected BB getNext() {
      return getFirst();
    }

    @Override
    protected BB removeNext() {
      return removeFirst();
    }
  }

  /**
   * Forward depth-first iterator.
   *
   * <p>If you merge the currently-iterated block with its successor ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged block's successor(s) (but not the
   * merged block again). If you remove the current block using {@link #remove()}, it will still
   * iterate its successors, but removing via {@link CFG#remove(BB)} will throw {@link
   * java.util.ConcurrentModificationException}.
   */
  public static final class Dfs extends Forward {
    /** Iterate nodes starting at the entry. */
    public Dfs(CFG cfg) {
      super(cfg.entry());
    }

    /** Iterate nodes starting at the given block. */
    public Dfs(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public Dfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
    }

    @Override
    protected Iterable<BB> getNext(BB bb) {
      return bb.successors();
    }

    @Override
    protected BB getNext() {
      return getLast();
    }

    @Override
    protected BB removeNext() {
      return removeLast();
    }
  }

  /**
   * Reverse breadth-first iterator.
   *
   * <p>If you merge the current block's only predecessor with it ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged predecessor.
   */
  public static final class ReverseBfs extends Reverse {
    /** Iterate nodes starting at the exits. */
    public ReverseBfs(CFG cfg) {
      super(cfg, cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseBfs(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseBfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
    }

    @Override
    protected Iterable<BB> getNext(BB bb) {
      return bb.predecessors();
    }

    @Override
    protected BB getNext() {
      return getFirst();
    }

    @Override
    protected BB removeNext() {
      return removeFirst();
    }
  }

  /**
   * Reverse depth-first iterator.
   *
   * <p>If you merge the current block's only predecessor with it ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged predecessor.
   */
  public static final class ReverseDfs extends Reverse {
    /** Iterate nodes starting at the exits. */
    public ReverseDfs(CFG cfg) {
      super(cfg, cfg.exits());
    }

    /** Iterate nodes starting at the given block. */
    public ReverseDfs(BB start) {
      super(start);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Collection<BB> starts) {
      super(cfg, starts);
    }

    /** Iterate nodes starting at the given blocks. */
    public ReverseDfs(CFG cfg, Stream<BB> starts) {
      super(cfg, starts);
    }

    @Override
    protected Iterable<BB> getNext(BB bb) {
      return bb.predecessors();
    }

    @Override
    protected BB getNext() {
      return getLast();
    }

    @Override
    protected BB removeNext() {
      return removeLast();
    }
  }

  /**
   * Dominator tree (breadth-first) iterator.
   *
   * <p>If you merge the currently-iterated block with its successor ({@link
   * BB#mergeWithSuccessor(BB)}), it will iterate the merged block's successor(s) (but not the
   * merged block again). If you remove the current block using {@link #remove()}, it will still
   * iterate its successors, but removing via {@link CFG#remove(BB)} will throw {@link
   * java.util.ConcurrentModificationException}.
   */
  public static final class DomTreeBfs extends Forward {
    private final DomTree tree;

    /** Iterate nodes starting at the root of the dominator tree. */
    public DomTreeBfs(DomTree tree) {
      super(tree.root());
      this.tree = tree;
    }

    /** Iterate nodes starting at the given block. */
    public DomTreeBfs(DomTree tree, BB root) {
      super(root);
      if (tree.cfg() != root.cfg()) {
        throw new IllegalArgumentException(
            "The given dominator tree is for a different CFG than the given root block");
      }
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
    protected Iterable<BB> getNext(BB bb) {
      return tree.idominees(bb);
    }

    @Override
    protected BB getNext() {
      return getLast();
    }

    @Override
    protected BB removeNext() {
      return removeLast();
    }
  }
}
