package org.prlprg.ir.cfg.builder;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.SequencedSet;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.BBId;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.ControlFlow;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InstrOrPhi;
import org.prlprg.ir.cfg.Jump;
import org.prlprg.ir.cfg.Phi;
import org.prlprg.ir.cfg.Stmt;

public interface BBQuery extends Iterable<InstrOrPhi> {
  // region access
  // region cfg and self
  /** CFG containing this block. */
  CFG cfg();

  /** Uniquely identifies this block within {@link #cfg()}. */
  BBId id();

  // endregion cfg and self

  // region predecessors and successors (access)
  /** Returns (a view of) the BBs whose jumps point to this. */
  @UnmodifiableView
  Collection<BB> predecessors();

  /** Whether the BB is the {@linkplain CFG}'s entry, i.e. has no successors. */
  default boolean isEntry() {
    assert predecessors().isEmpty() || (this != cfg().entry())
        : "BB has predecessors but is its CFG's entry";
    assert !predecessors().isEmpty() || (this == cfg().entry())
        : "BB has no predecessors but isn't its CFG's entry";
    return predecessors().isEmpty();
  }

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
   * <p>This is the same as calling {@link #jump()}{@link Jump#targets() .targets()}, except will
   * return an empty set if there's no jump.
   */
  @UnmodifiableView
  SequencedSet<BB> successors();

  /** Whether the BB is an exit, i.e. has no successors. */
  default boolean isExit() {
    assert successors().isEmpty() || !cfg().exits().contains((BB) this)
        : "BB has no successors but isn't an exit according to its CFG";
    assert !successors().isEmpty() || cfg().exits().contains((BB) this)
        : "BB has successors but is an exit according to its CFG";
    return successors().isEmpty();
  }

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
   * Stream basic block's instructions: statements and jump.
   *
   * <p>Be aware that mutating the block will affect this iterator the same way it would be affected
   * while iterating {@link #stmts()}, or will affect the jump before it's reached.
   *
   * @see #instrs()
   */
  Stream<Instr> streamInstrs();

  /**
   * The basic block's instructions: statements and jump.
   *
   * <p>The iterator supports removing the current element.
   *
   * <p>Be aware that mutating the block will affect this iterator the same way it would be affected
   * while iterating {@link #stmts()}, or will affect the jump before it's reached.
   *
   * @see #streamInstrs()
   */
  Iterable<Instr> instrs();

  /**
   * The basic block's instructions, iterated in reverse order: jump and reversed statements.
   *
   * <p>The iterator supports removing the current element.
   *
   * <p>Be aware that mutating the block will affect the jump before it's reached, or will affect
   * this iterator the same way it would be affected while iterating {@link #stmts()}.
   *
   * @see #streamInstrs()
   */
  Iterable<Instr> revInstrs();

  /** Returns whether this BB contains the given instruction or phi. */
  boolean contains(InstrOrPhi instr);

  /**
   * Returns the instruction at the given index in this BB.
   *
   * <p>That is, the statement at the index, unless the index is {@link #stmts() stmts().size()} and
   * this BB has a jump, in which case it's the jump.
   *
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  default Instr instr(int index) {
    if (index > numInstrs()) {
      throw new IndexOutOfBoundsException("Index: " + index + ", Size: " + numInstrs());
    }
    return index < stmts().size() ? stmt(index) : Objects.requireNonNull(jump());
  }

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

  /** Returns the {@link #jump()}'s {@link Jump#controlFlow()} if non-null. */
  default @Nullable ControlFlow controlFlow() {
    var jump = jump();
    return jump == null ? null : jump.controlFlow();
  }
  // endregion
  // endregion
}