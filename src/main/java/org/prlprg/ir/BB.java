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
  public <I extends Stmt> I insertBefore(Stmt.Data<I> stmtData, Stmt before) {
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
  public <I extends Stmt> I insertAfter(Stmt.Data<I> stmtData, Stmt after) {
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
  public <I extends Stmt> I prepend(Stmt.Data<I> stmtData) {
    var stmt = stmtData.make(cfg());
    stmts.addFirst(stmt);
    return stmt;
  }

  /**
   * Insert a statement at the end of this BB.
   *
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I append(Stmt.Data<I> stmtData) {
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
  public <I extends Jump> I add(Jump.Data<I> jumpData) {
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
    return switch (oldInstr) {
      case Phi phi when !phis.contains(phi) ->
          throw new IllegalArgumentException(
              "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
      case Stmt stmt when !stmts.contains(stmt) ->
          throw new IllegalArgumentException(
              "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
      case Jump jump1 when jump != jump1 ->
          throw new IllegalArgumentException(
              "Replace oldInstr not in BB: " + oldInstr + " not in:\n" + this);
      default -> cfg().replace(oldInstr, newData);
    };
  }

  // TODO make sure that other functions to replace nodes update their occurrences (probably just
  // call CFG.replace),
  //  and functions to remove nodes either throw an error if there are occurrences, or we handle
  // those later.
  //  (including removed auxillary nodes, not just instructions)

  /**
   * Try to replace the instruction if present and return if we done so. Doesn't replace it in
   * arguments.
   */
  boolean tryOnlyReplace(Instr oldInstr, Instr newInstr) {
    assert oldInstr.cfg() == cfg() && newInstr.cfg() == cfg();

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
      }
    }
    return replaced;
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
  }
}
