package org.prlprg.ir;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.ir.node.*;
import org.prlprg.util.SmallSet;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
public class BB {
  private final CFG parent;
  private final Set<Phi> phis = new SmallSet<>(4);
  private final List<Stmt> stmts = new ArrayList<>();
  private final Set<BB> predecessors = new SmallSet<>(4);
  private @Nullable Jump jump = null;

  BB(CFG parent) {
    this.parent = parent;
  }

  /** CFG containing this block. */
  public CFG cfg() {
    return parent;
  }

  /**
   * Add an empty φ node for nodes of the given class to this BB and return it. The {@link Phi}
   * should implement the necessary superclass so that it's acceptable to replace a node of this
   * class with this φ.
   *
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  public Phi addPhi(Class<?> nodeClass) {
    var phi = Phi.forClass(nodeClass, cfg());
    phis.add(phi);
    return phi;
  }

  /**
   * Insert a statement in this BB immediately before the given statement.
   *
   * @return The inserted statement.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public Stmt insertBefore(Stmt.Data<?> stmtData, Stmt before) {
    int index = stmts.indexOf(before);
    if (index == -1) {
      throw new IllegalArgumentException("Before not in " + this + ": " + before);
    }
    var stmt = stmtData.make(cfg());
    stmts.add(index, stmt);
    return stmt;
  }

  /**
   * Insert a statement in this BB immediately before the given statement.
   *
   * @return The inserted statement.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public Stmt insertAfter(Stmt.Data<?> stmtData, Stmt after) {
    int index = stmts.indexOf(after);
    if (index == -1) {
      throw new IllegalArgumentException("After not in " + this + ": " + after);
    }
    var stmt = stmtData.make(cfg());
    stmts.add(index + 1, stmt);
    return stmt;
  }

  /**
   * Insert a statement at the start of this BB, after the φ nodes.
   *
   * @return Ths inserted statement.
   */
  public Stmt prepend(Stmt.Data<?> stmtData) {
    var stmt = stmtData.make(cfg());
    stmts.addFirst(stmt);
    return stmt;
  }

  /**
   * Insert a statement at the end of this BB.
   *
   * @return Ths inserted statement.
   */
  public Stmt append(Stmt.Data<?> stmtData) {
    var stmt = stmtData.make(cfg());
    stmts.add(stmt);
    return stmt;
  }

  /**
   * Add a jump to this BB.
   *
   * @return The added jump.
   * @throws IllegalArgumentException If it already has one.
   */
  public Jump add(Jump.Data<?> jumpData) {
    if (this.jump != null) {
      throw new IllegalStateException(this + " already has a jump");
    }
    var jump = jumpData.make(cfg());
    setJump(jump);
    return jump;
  }

  /**
   * Create a new instruction with {@code newData} and replace all occurences of {@code oldInstr}
   * with it.
   *
   * @return The newly-created instruction, or {@code oldInstr} if it's equivalent to what would
   *     replace it.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @throws IllegalArgumentException if {@code newData} is an incompatible type.
   */
  public <I extends Instr> I replace(I oldInstr, Instr.Data<I> newData) {
    // All this does differently than CFG#replace is enforce that `oldInstr` is in this specific
    // `BB`.
    if (oldInstr.cfg() != cfg()) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in CFG: " + oldInstr + " not in:\n" + cfg());
    }
    if (oldInstr instanceof Phi && !phis.contains(oldInstr)) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
    }
    if (oldInstr instanceof Stmt && !stmts.contains(oldInstr)) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
    }
    if (oldInstr instanceof Jump && jump != oldInstr) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
    }

    return cfg().replace(oldInstr, newData);
  }

  // TODO make sure that other functions to replace nodes update their occurrences (probably just
  // call CFG.replace),
  //  and functions to remove nodes either throw an error if there are occurrences, or we handle
  // those later.
  //  (including removed auxillary nodes, not just instructions)

  /**
   * Try to replace the instruction if present and return if we done so. Also replace it in
   * arguments.
   */
  boolean tryReplaceAndReplaceInArgs(Instr oldInstr, Instr newInstr) {
    assert oldInstr.cfg() == cfg() && newInstr.cfg() == cfg();
    if (oldInstr instanceof Phi) {
      throw new UnsupportedOperationException(
          "In " + this + ", tried to replace a phi (can this happen? If so we must implement)");
    }
    if (newInstr instanceof Phi) {
      throw new UnsupportedOperationException(
          "In "
              + this
              + ", tried to replace an instruction with a phi (can this happen? If so we must implement)");
    }

    var replaced = false;
    var stmts = this.stmts.listIterator();
    while (stmts.hasNext()) {
      var instr = stmts.next();
      if (instr.equals(oldInstr)) {
        if (!(newInstr instanceof Stmt s)) {
          throw new IllegalArgumentException(
              "In " + this + ", tried to replace a statement with a non-statement: " + newInstr);
        }
        stmts.set(s);
        assert !replaced : "In " + this + ", replaced multiple times: " + oldInstr;
        replaced = true;
      } else {
        instr.replace(oldInstr, newInstr);
      }
    }
    if (jump != null) {
      if (jump.equals(oldInstr)) {
        if (!(newInstr instanceof Jump j)) {
          throw new IllegalArgumentException(
              "In " + this + ", tried to replace a jump with a non-jump: " + newInstr);
        }
        setJump(j);
        assert !replaced : "In " + this + ", replaced multiple times: " + oldInstr;
        replaced = true;
      } else {
        jump.replace(oldInstr, newInstr);
      }
    }
    return replaced;
  }

  /** Set jump and update successors. */
  private void setJump(Jump jump) {
    if (this.jump != null) {
      for (var succ : this.jump.targets()) {
        succ.predecessors.remove(this);
      }
    }
    this.jump = jump;
    for (var succ : jump.targets()) {
      succ.predecessors.add(this);
    }
  }
}
