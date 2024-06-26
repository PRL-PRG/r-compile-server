package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.SequencedCollection;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;

interface BBQuery extends Iterable<InstrOrPhi> {
  // region access
  // region parent and self
  /** CFG containing this block. */
  CFG cfg();

  /** Uniquely identifies this block within {@link #cfg()}. */
  BBId id();

  // endregion

  // region predecessors and successors (access)
  /** Returns (a view of) the BBs whose jumps point to this. */
  @UnmodifiableView
  Collection<BB> predecessors();

  /** Whether this block has a single predecessor. */
  default boolean hasSinglePredecessor() {
    return predecessors().size() == 1;
  }

  /** If this block has exactly one predecessor, returns it, otherwise {@code null}. */
  default @Nullable BB onlyPredecessor() {
    return hasSinglePredecessor() ? predecessors().iterator().next() : null;
  }

  /**
   * Returns (a view of) the BBs this one's jump points to.
   *
   * <p>These are in the same order as the jump's {@linkplain Jump#targets() targets}, which is the
   * same order as they are in its {@linkplain Jump#data() data} ({@link JumpData} record).
   */
  @UnmodifiableView
  SequencedCollection<BB> successors();

  /** Whether this block has a single successor. */
  default boolean hasSingleSuccessor() {
    return successors().size() == 1;
  }

  /** If this block has exactly one successor, returns it, otherwise {@code null}. */
  default @Nullable BB onlySuccessor() {
    return hasSingleSuccessor() ? successors().getFirst() : null;
  }

  // endregion

  // region count, iterate, and access nodes
  /** Whether the block has no phis, statements, or jump. */
  boolean isEmpty();

  /**
   * {@code #phis + #instrs == #phis + #stmts + (jump ? 1 : 0)}
   *
   * <p>This doesn't include descendants (i.e. auxiliary nodes AKA nodes from instructions with
   * multiple return values).
   */
  int numChildren();

  /** #stmts + (jump ? 1 : 0) */
  int numInstrs();

  /**
   * Stream the basic block's children: phis, statements, and jump.
   *
   * @see #iterator()
   */
  Stream<InstrOrPhi> stream();

  /**
   * The basic block's children: phis, statements, and jump.
   *
   * <p>The iterator supports removing the current element.
   *
   * <p>Be aware that mutating the block will affect this iterator the same way it would be affected
   * while iterating {@link #stmts()}, or will affect the jump before it's reached.
   *
   * @see #stream()
   */
  Iterator<InstrOrPhi> iterator();

  /**
   * The basic block's instructions: statements and jump.
   *
   * <p>The iterator supports removing the current element.
   *
   * <p>Be aware that mutating the block will affect this iterator the same way it would be affected
   * while iterating {@link #stmts()}, or will affect the jump before it's reached.
   */
  Iterable<Instr> instrs();

  /** Returns whether this BB contains the given instruction or phi. */
  boolean contains(InstrOrPhi instr);

  /**
   * Returns (a view of) the phis in this BB.
   *
   * <p>These are in the same order as they are inserted.
   *
   * @see #iterPhis()
   */
  @UnmodifiableView
  Collection<Phi<?>> phis();

  /** Iterate the phis in this BB, with an iterator that can remove them. */
  Iterator<Phi<?>> iterPhis();

  /** Returns (a view of) the statements in this BB. */
  @UnmodifiableView
  List<Stmt> stmts();

  /**
   * Returns the statement at the given index in this BB.
   *
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  Stmt stmt(int index);

  /**
   * Returns a readonly sublist of statements from {@code fromIndex} to {@code toIndex} (exclusive).
   *
   * <p>Be careful to copy this before calling {@link BB#removeAllAt(int, int)}, otherwise this view
   * will be undefined.
   *
   * @throws IllegalArgumentException If {@code fromIndex} is greater than {@code toIndex}.
   * @throws IndexOutOfBoundsException If {@code fromIndex} or {@code toIndex} are out of range.
   */
  @UnmodifiableView
  List<Stmt> stmts(int fromIndex, int toIndex);

  /**
   * Returns the index of the given statement in this BB.
   *
   * @throws NoSuchElementException If the statement isn't in this BB.
   */
  int indexOf(Stmt stmt);

  /** Returns this BB's jump, or {@code null} if unset. */
  @Nullable Jump jump();
  // endregion
  // endregion
}
