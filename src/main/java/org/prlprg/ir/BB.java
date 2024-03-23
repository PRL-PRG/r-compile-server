package org.prlprg.ir;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.SequencedCollection;
import java.util.SequencedSet;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.util.SmallSet;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
public final class BB implements Iterable<InstrOrPhi> {
  private final CFG parent;
  private final BBId id;
  private final List<BB> predecessors = new ArrayList<>(4);
  // These are ordered to ensure deterministic traversal
  private final SequencedSet<Phi<?>> phis = new LinkedHashSet<>();
  private final List<Stmt> stmts = new ArrayList<>();
  private @Nullable Jump jump = null;

  BB(CFG parent, String name) {
    this.parent = parent;
    this.id = new BBIdImpl(parent.nextBBId(name));
  }

  /** CFG containing this block. */
  public CFG cfg() {
    return parent;
  }

  /** Uniquely identifies this block within {@link #cfg()}. */
  public BBId id() {
    return id;
  }

  /**
   * (A view of) the basic block's children: phis, statements, and jump.
   *
   * <p>Be aware that mutating the block will affect this iterator the same way it would be affected
   * while iterating {@link #stmts()}, or will affect the jump before it's reached.
   */
  public @UnmodifiableView Iterator<InstrOrPhi> iterator() {
    return new Iterator<>() {
      private int i = 0;
      private final Iterator<Phi<?>> phis = BB.this.phis.iterator();
      private final Iterator<Stmt> stmts = BB.this.stmts.iterator();

      @Override
      public boolean hasNext() {
        return i < 3;
      }

      @Override
      public InstrOrPhi next() {
        if (i == 0) {
          if (phis.hasNext()) {
            return phis.next();
          }
          i++;
        }
        if (i == 1) {
          if (stmts.hasNext()) {
            return stmts.next();
          }
          i++;
        }
        if (i == 2) {
          if (jump != null) {
            i++;
            return jump;
          }
        }
        throw new NoSuchElementException();
      }

      @Override
      public void remove() {
        switch (i) {
          case 0 -> phis.remove();
          case 1 -> stmts.remove();
          case 2 -> setJump(null);
          default -> throw new IllegalStateException();
        }
      }
    };
  }

  /** #phis + #instrs + (jump ? 1 : 0) */
  public int size() {
    return phis.size() + stmts.size() + (jump == null ? 0 : 1);
  }

  /**
   * Returns (a view of) the BBs whose jumps point to this.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  public @UnmodifiableView SequencedCollection<BB> predecessors() {
    return Collections.unmodifiableSequencedCollection(predecessors);
  }

  /** Whether this block has a single predecessor. */
  public boolean hasSinglePredecessor() {
    return predecessors.size() == 1;
  }

  /** If this block has exactly one predecessor, returns it, otherwise {@code null}. */
  public @Nullable BB onlyPredecessor() {
    return hasSinglePredecessor() ? predecessors.getFirst() : null;
  }

  /** Returns (a view of) the statements in this BB. */
  public @UnmodifiableView List<Stmt> stmts() {
    return Collections.unmodifiableList(stmts);
  }

  /**
   * Returns the statement at the given index in this BB.
   *
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  public Stmt stmt(int index) {
    return stmts.get(index);
  }

  /**
   * Returns the index of the given statement in this BB.
   *
   * @throws NoSuchElementException If the statement isn't in this BB.
   */
  public int indexOf(Stmt stmt) {
    int index = stmts.indexOf(stmt);
    if (index == -1) {
      throw new NoSuchElementException("Not in " + id() + ": " + stmt);
    }
    return index;
  }

  /** Returns this BB's jump. */
  public @Nullable Jump jump() {
    return jump;
  }

  /**
   * Returns (a view of) the BBs this one's jump points to.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  public @UnmodifiableView SequencedCollection<BB> successors() {
    return jump == null ? List.of() : Collections.unmodifiableSequencedCollection(jump.targets());
  }

  /**
   * Add an empty φ node for nodes of the given class to this BB and return it. The {@link Phi}
   * should implement the necessary superclass so that it's acceptable to replace a node of this
   * class with this φ.
   *
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  public <N extends Node> Phi<N> addPhi(Class<N> nodeClass, BB firstIncomingBB, N firstInput) {
    var phi = Phi.forClass(nodeClass, cfg(), firstIncomingBB, firstInput);
    phis.add(phi);
    return phi;
  }

  /**
   * Insert a statement in this BB immediately before the given statement.
   *
   * @param name A name of the statement, or an empty string. This is useful for debugging and error
   *     messages.
   * @param args The statement's arguments (data).
   * @return The inserted statement.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public <I extends Stmt> I insertBefore(String name, Stmt.Data<I> args, Stmt before) {
    int index = stmts.indexOf(before);
    if (index == -1) {
      throw new IllegalArgumentException("Before not in " + this + ": " + before);
    }
    var stmt = args.make(cfg(), name);
    stmts.add(index, stmt);
    return stmt;
  }

  /**
   * Insert a statement in this BB immediately before the given statement.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data). * @return The inserted statement.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public <I extends Stmt> I insertAfter(String name, Stmt.Data<I> args, Stmt after) {
    int index = stmts.indexOf(after);
    if (index == -1) {
      throw new IllegalArgumentException("After not in " + this + ": " + after);
    }
    var stmt = args.make(cfg(), name);
    stmts.add(index + 1, stmt);
    return stmt;
  }

  /**
   * Insert a statement at the start of this BB, after the φ nodes.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data).
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I prepend(String name, Stmt.Data<I> args) {
    var stmt = args.make(cfg(), name);
    stmts.addFirst(stmt);
    return stmt;
  }

  /**
   * Insert a statement at the end of this BB.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data).
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I append(String name, Stmt.Data<I> args) {
    var stmt = args.make(cfg(), name);
    stmts.add(stmt);
    return stmt;
  }

  /**
   * Add a jump to this BB.
   *
   * @param name A small name for the jump, or an empty string. This is useful for debugging and
   *     error messages.
   * @param args The jump's arguments (data).
   * @return The added jump.
   * @throws IllegalArgumentException If it already has one.
   */
  public <I extends Jump> I add(String name, Jump.Data<I> args) {
    if (this.jump != null) {
      throw new IllegalStateException(this + " already has a jump");
    }
    var jump = args.make(cfg(), name);
    setJump(jump);
    return jump;
  }

  /**
   * Create a new instruction with {@code newArgs} and replace all occurrences of {@code oldInstr}
   * with it.
   *
   * @param newName A small name for the new instruction, or an empty string, or {@code null} to
   *     take the old instruction's name. This is useful for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @return The newly-created instruction, or {@code oldInstr} if replacement can be done without
   *     by mutating it.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @throws IllegalArgumentException if {@code newArgs} is an incompatible type.
   */
  public <I extends Instr> I replace(I oldInstr, @Nullable String newName, Instr.Data<I> newArgs) {
    if (oldInstr.cfg() != cfg()) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in CFG: " + oldInstr + " not in:\n" + cfg());
    }
    switch (oldInstr) {
      case Stmt stmt when !stmts.contains(stmt) ->
          throw new IllegalArgumentException(
              "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
      case Jump jump1 when jump != jump1 ->
          throw new IllegalArgumentException(
              "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
      default -> {}
    }

    I newInstr;
    if (oldInstr.canReplaceDataWith(newArgs)) {
      var wasEmpty = false;
      if (oldInstr instanceof Jump j) {
        for (var succ : j.targets()) {
          succ.predecessors.remove(this);
        }
        wasEmpty = j.targets().isEmpty();
      }
      oldInstr.replaceData(newArgs);
      if (oldInstr instanceof Jump j) {
        for (var succ : j.targets()) {
          succ.predecessors.add(this);
        }

        var isEmpty = j.targets().isEmpty();
        if (!wasEmpty && isEmpty) {
          cfg().markExit(this);
        } else if (wasEmpty && !isEmpty) {
          cfg().unmarkExit(this);
        }
      }
      return oldInstr;
    } else {
      newInstr = newArgs.make(cfg(), newName == null ? oldInstr.id().name() : newName);
      switch (newInstr) {
        case Stmt s -> {
          assert oldInstr instanceof Stmt;
          stmts.set(stmts.indexOf((Stmt) oldInstr), s);
        }
        case Jump j -> setJump(j);
      }
      cfg().untrack(oldInstr);
      var oldRets = oldInstr.returns();
      var newRets = newInstr.returns();
      assert oldRets.size() == newRets.size()
          : "instruction being replaced with one that has a different number of return values";
    }
    return newInstr;
  }

  // TODO make sure that other functions to replace nodes update their occurrences (probably just
  // call CFG.replace),
  //  and functions to remove nodes either throw an error if there are occurrences, or we handle
  // those later.
  //  (including removed auxillary nodes, not just instructions)

  /**
   * Remove the given instructions. Other instructions may still reference them, but these
   * references must go away before {@link CFG#verify()}.
   *
   * @throws IllegalArgumentException if any aren't in this BB.
   */
  public void remove(InstrOrPhi... instrs) {
    remove(Arrays.stream(instrs));
  }

  /**
   * Remove the given instructions. Other instructions may still reference them, but these
   * references must go away before {@link CFG#verify()}.
   *
   * @throws IllegalArgumentException if any aren't in this BB.
   */
  public void remove(Collection<InstrOrPhi> instrs) {
    remove(instrs.stream());
  }

  /**
   * Remove the given instructions. Other instructions may still reference them, but these
   * references must go away before {@link CFG#verify()}.
   *
   * @throws IllegalArgumentException if any aren't in this BB.
   */
  public void remove(Stream<InstrOrPhi> instrs) {
    remove(instrs.collect(Collectors.toUnmodifiableSet()));
  }

  /**
   * Remove the given instructions. Other instructions may still reference them, but these
   * references must go away before {@link CFG#verify()}.
   *
   * @throws IllegalArgumentException if any aren't in this BB.
   */
  public void remove(Set<InstrOrPhi> instrs) {
    var removed = new SmallSet<InstrOrPhi>(instrs.size());

    var phis = this.phis.iterator();
    while (phis.hasNext()) {
      var instr = phis.next();
      if (instrs.contains(instr)) {
        phis.remove();
        removed.add(instr);
      }
    }
    var stmts = this.stmts.listIterator();
    while (stmts.hasNext()) {
      var instr = stmts.next();
      if (instrs.contains(instr)) {
        stmts.remove();
        removed.add(instr);
      }
    }
    if (jump != null && instrs.contains(jump)) {
      setJump(null);
      removed.add(jump);
    }

    for (var instr : removed) {
      cfg().untrack(instr);
    }
    if (removed.size() != instrs.size()) {
      throw new IllegalArgumentException(
          "Not all instructions were removed:"
              + instrs.stream()
                  .filter(i -> !removed.contains(i))
                  .map(i -> "\n- " + i)
                  .collect(Collectors.joining()));
    }
  }

  /** Try to remove any of the given instructions which are present, and return those removed. */
  public Set<InstrOrPhi> tryOnlyRemove(Set<InstrOrPhi> instrs1) {
    var removed = new SmallSet<InstrOrPhi>(Math.min(instrs1.size(), 8));
    var phis = this.phis.iterator();
    while (phis.hasNext()) {
      var instr = phis.next();
      if (instrs1.contains(instr)) {
        phis.remove();
        removed.add(instr);
      }
    }
    var stmts = this.stmts.listIterator();
    while (stmts.hasNext()) {
      var instr = stmts.next();
      if (instrs1.contains(instr)) {
        stmts.remove();
        removed.add(instr);
      }
    }
    if (jump != null && instrs1.contains(jump)) {
      setJump(null);
      removed.add(jump);
    }
    return removed;
  }

  /** Replace the node in the arguments of every argument-containing node in this BB. */
  void replaceInArgs(Node oldNode, Node newNode) {
    assert oldNode.cfg() == cfg() && newNode.cfg() == cfg();
    for (var phi : phis) {
      phi.replace(oldNode, newNode);
    }
    for (var stmt : stmts) {
      stmt.replace(oldNode, newNode);
    }
    if (jump != null) {
      jump.replace(oldNode, newNode);
    }
  }

  /**
   * @throws IllegalArgumentException If the node is in any of the arguments.
   */
  void checkNotInArgs(Node node) {
    if (phis.stream().anyMatch(phi -> phi.containsInput(node))) {
      throw new IllegalArgumentException("Node in φ inputs: " + node);
    }
    if (stmts.stream().anyMatch(stmt -> stmt.args().contains(node))) {
      throw new IllegalArgumentException("Node in stmt inputs: " + node);
    }
    if (jump != null && jump.args().contains(node)) {
      throw new IllegalArgumentException("Node in jump inputs: " + node);
    }
  }

  /** Set jump and update successors. */
  private void setJump(@Nullable Jump jump) {
    if (jump == this.jump) {
      return;
    }
    if (this.jump != null) {
      for (var succ : this.jump.targets()) {
        succ.predecessors.remove(this);
      }
    }
    this.jump = jump;
    if (jump != null) {
      for (var succ : jump.targets()) {
        succ.predecessors.add(this);
      }
    }

    var wasExit = this.jump == null || this.jump.targets().isEmpty();
    var isExit = jump == null || jump.targets().isEmpty();
    if (!wasExit && isExit) {
      cfg().markExit(this);
    } else if (wasExit && !isExit) {
      cfg().unmarkExit(this);
    }
  }
}
