package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
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
import org.prlprg.ir.cfg.Stmt.Data;
import org.prlprg.util.Pair;
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

  // region parent and self
  /** CFG containing this block. */
  public CFG cfg() {
    return parent;
  }

  /** Uniquely identifies this block within {@link #cfg()}. */
  public BBId id() {
    return id;
  }

  // endregion

  // region predecessors and successors
  /**
   * Returns (a view of) the BBs whose jumps point to this.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  public @UnmodifiableView Collection<BB> predecessors() {
    return Collections.unmodifiableCollection(predecessors);
  }

  /**
   * Returns (a view of) the BBs this one's jump points to.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  public @UnmodifiableView SequencedCollection<BB> successors() {
    return jump == null ? List.of() : Collections.unmodifiableSequencedCollection(jump.targets());
  }

  // endregion

  // region count, iterate, and access nodes
  /** #phis + #instrs + (jump ? 1 : 0) */
  public int size() {
    return phis.size() + stmts.size() + (jump == null ? 0 : 1);
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

  /** Whether this block has a single predecessor. */
  public boolean hasSinglePredecessor() {
    return predecessors.size() == 1;
  }

  /** If this block has exactly one predecessor, returns it, otherwise {@code null}. */
  public @Nullable BB onlyPredecessor() {
    return hasSinglePredecessor() ? predecessors.getFirst() : null;
  }

  /**
   * Returns (a view of) the phis in this BB.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  public @UnmodifiableView Collection<Phi<?>> phis() {
    return Collections.unmodifiableCollection(phis);
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

  /** Returns this BB's jump, or {@code null} if unset. */
  public @Nullable Jump jump() {
    return jump;
  }

  // endregion

  // region mutate nodes
  // region add nodes
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
   * Insert statements in this BB immediately before the given statement.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #insertBefore(String,
   *     Data, Stmt)}.
   * @return The inserted statements.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public <I extends Stmt> ImmutableList<I> insertBefore(
      Stream<Pair<String, Data<I>>> namesAndArgs, Stmt before) {
    int index = stmts.indexOf(before);
    if (index == -1) {
      throw new IllegalArgumentException("Before not in " + this + ": " + before);
    }
    var stmts =
        namesAndArgs
            .map(nameAndArg -> nameAndArg.second().make(cfg(), nameAndArg.first()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(index, stmts);
    return stmts;
  }

  /**
   * Insert statements in this BB immediately before the given statement.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #insertBefore(String,
   *     Data, Stmt)}.
   * @return The inserted statements.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public <I extends Stmt> ImmutableList<I> insertBefore(
      List<Pair<String, Data<I>>> namesAndArgs, Stmt before) {
    return insertBefore(namesAndArgs.stream(), before);
  }

  /**
   * Insert a statement in this BB immediately after the given statement.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data). * @return The inserted statement.
   * @throws IllegalArgumentException If the after statement wasn't found.
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
   * Insert statements in this BB immediately after the given statement.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #insertAfter(String,
   *     Data, Stmt)}.
   * @return The inserted statements.
   * @throws IllegalArgumentException If the after statement wasn't found.
   */
  public <I extends Stmt> ImmutableList<I> insertAfter(
      Stream<Pair<String, Data<I>>> namesAndArgs, Stmt after) {
    int index = stmts.indexOf(after);
    if (index == -1) {
      throw new IllegalArgumentException("After not in " + this + ": " + after);
    }
    var stmts =
        namesAndArgs
            .map(nameAndArg -> nameAndArg.second().make(cfg(), nameAndArg.first()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(index + 1, stmts);
    return stmts;
  }

  /**
   * Insert statements in this BB immediately after the given statement.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #insertAfter(String,
   *     Data, Stmt)}.
   * @return The inserted statements.
   * @throws IllegalArgumentException If the after statement wasn't found.
   */
  public <I extends Stmt> ImmutableList<I> insertAfter(
      List<Pair<String, Data<I>>> namesAndArgs, Stmt after) {
    return insertAfter(namesAndArgs.stream(), after);
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
   * Insert statements at the start of this BB, after the φ nodes.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #prepend(String,
   *     Data)}.
   * @return Ths inserted statement.
   */
  public <I extends Stmt> ImmutableList<I> prepend(
      Stream<Pair<String, Stmt.Data<I>>> namesAndArgs) {
    var stmts =
        namesAndArgs
            .map(nameAndArg -> nameAndArg.second().make(cfg(), nameAndArg.first()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(0, stmts);
    return stmts;
  }

  /**
   * Insert statements at the start of this BB, after the φ nodes.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #prepend(String,
   *     Data)}.
   * @return Ths inserted statement.
   */
  public <I extends Stmt> ImmutableList<I> prepend(List<Pair<String, Stmt.Data<I>>> namesAndArgs) {
    return prepend(namesAndArgs.stream());
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
   * Insert statements at the end of this BB.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #append(String, Data)}.
   * @return Ths inserted statement.
   */
  public <I extends Stmt> ImmutableList<I> append(Stream<Pair<String, Stmt.Data<I>>> namesAndArgs) {
    var stmts =
        namesAndArgs
            .map(nameAndArg -> nameAndArg.second().make(cfg(), nameAndArg.first()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(stmts);
    return stmts;
  }

  /**
   * Insert statements at the end of this BB.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #append(String, Data)}.
   * @return Ths inserted statement.
   */
  public <I extends Stmt> ImmutableList<I> append(List<Pair<String, Stmt.Data<I>>> namesAndArgs) {
    return append(namesAndArgs.stream());
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
  public <I extends Jump> I addJump(String name, Jump.Data<I> args) {
    if (this.jump != null) {
      throw new IllegalStateException(this + " already has a jump");
    }
    var jump = args.make(cfg(), name);
    setJump(jump);
    return jump;
  }

  // endregion

  // region replace nodes
  /**
   * Replace the data within {@code oldInstr} with {@code newArgs} and update accordingly. This is
   * equivalent to removing {@code oldInstr} and inserting a new instruction with {@code newArgs} in
   * its place, then replacing {@code oldInstr}'s return values in arguments with those from the new
   * instruction. However, it has a much lower time complexity (O(1) without checks).
   *
   * @param newName A small name for the new instruction, an empty string, or {@code null} to take
   *     the old instruction's name (empty string makes the new instruction unnamed). This is useful
   *     for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @throws IllegalArgumentException if {@code newArgs} is an incompatible type. Specifically, it
   *     must produce contain the same # of values as {@code oldInstr}. If not, you must call {@link
   *     BB#replaceNoSubst(InstrOrPhi, String, Instr.Data)}, and be aware that those won't replace
   *     the instruction's return values in arguments (those must either not exist or be replaced
   *     manually).
   */
  public <I extends Instr> void subst(I instr, @Nullable String newName, Instr.Data<I> newArgs) {
    if (instr.cfg() != cfg()) {
      throw new IllegalArgumentException(
          "Replace instr not in CFG: " + instr + " not in:\n" + cfg());
    }
    switch (instr) {
      case Stmt stmt when !stmts.contains(stmt) ->
          throw new IllegalArgumentException(
              "Replace instr not in BB: " + instr + " not in:\n" + this);
      case Jump jump1 when jump != jump1 ->
          throw new IllegalArgumentException(
              "Replace instr not in BB: " + instr + " not in:\n" + this);
      default -> {}
    }

    if (newName == null) {
      newName = instr.id().name();
    }

    if (!instr.canReplaceDataWith(newArgs)) {
      throw new IllegalArgumentException(
          "Incompatible data for replacement: " + instr + " -> " + newArgs);
    }

    var wasEmpty = false;
    var wasDifferentName = !newName.equals(instr.id().name());
    if (instr instanceof Jump j) {
      for (var succ : j.targets()) {
        succ.predecessors.remove(this);
      }
      wasEmpty = j.targets().isEmpty();
    }
    if (wasDifferentName) {
      cfg().untrack(instr);
    }

    instr.unsafeReplaceData(newName, newArgs);

    if (wasDifferentName) {
      cfg().track(instr);
    }
    if (instr instanceof Jump j) {
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
  }

  /**
   * Create a new instruction with {@code newArgs} and replace {@code oldInstrOrPhi} with it. If
   * {@code oldInstrOrPhi} is a phi, the new instruction will be inserted at the beginning of the
   * block.
   *
   * <p><i>This won't replace any return values of {@code oldInstr}.</i> Use {@link #subst(Instr,
   * String, Instr.Data)} to do that if both instructions have the same # of return values,
   * otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new instruction, an empty string, or {@code null} to take
   *     the old instruction's name (empty string makes the new instruction unnamed). This is useful
   *     for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   */
  public void replaceNoSubst(
      InstrOrPhi oldInstrOrPhi, @Nullable String newName, Instr.Data<?> newArgs) {
    // TODO
  }

  // TODO make sure that other functions to replace nodes update their occurrences (probably just
  // call CFG.replace),
  //  and functions to remove nodes either throw an error if there are occurrences, or we handle
  // those later.
  //  (including removed auxillary nodes, not just instructions)

  // region remove nodes
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
    if (instrs.size() > 1) {
      // Micro-optimization: we create a new list so that we have O(n) instead of O(n*removed)
      // time complexity.
      var stmts = new ArrayList<Stmt>(this.stmts.size());
      for (var stmt : this.stmts) {
        if (!instrs.contains(stmt)) {
          stmts.add(stmt);
        } else {
          removed.add(stmt);
        }
      }
      this.stmts.clear();
      this.stmts.addAll(stmts);
    } else {
      var stmts = this.stmts.listIterator();
      while (stmts.hasNext()) {
        var instr = stmts.next();
        if (instrs.contains(instr)) {
          stmts.set(new Stmts.Placeholder.NoOp().make(parent, "removed#" + instr.id().name()));
          removed.add(instr);
        }
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

  // endregion
  // endregion

  // region cfg methods
  void cleanupStmts() {
    var stmts = new ArrayList<Stmt>(this.stmts.size());
    for (var stmt : this.stmts) {
      if (stmt.data() instanceof Stmts.Placeholder.NoOp) {
        continue;
      }
      stmts.add(stmt);
    }
    this.stmts.clear();
    this.stmts.addAll(stmts);
  }

  // endregion

  // region shared private methods
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
  // endregion
}
