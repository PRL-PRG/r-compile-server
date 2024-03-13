package org.prlprg.ir;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.node.Instr;
import org.prlprg.ir.node.InstrOrPhi;
import org.prlprg.ir.node.Jump;
import org.prlprg.ir.node.Node;
import org.prlprg.ir.node.Phi;
import org.prlprg.ir.node.Stmt;
import org.prlprg.util.SmallSet;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
public final class BB {
  private final CFG parent;
  private final BBId id;
  private final Set<BB> predecessors = new SmallSet<>(4);
  private final Set<Phi> phis = new SmallSet<>(4);
  private final List<Stmt> stmts = new ArrayList<>();
  private @Nullable Jump jump = null;

  BB(CFG parent, String desc) {
    this.parent = parent;
    this.id = new BBIdImpl(parent.nextBbId(desc));
  }

  BB(CFG parent) {
    this(parent, "");
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
   * Add an empty φ node for nodes of the given class to this BB and return it. The {@link Phi}
   * should implement the necessary superclass so that it's acceptable to replace a node of this
   * class with this φ.
   *
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  public Phi addPhi(Class<? extends Node> nodeClass) {
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
  public <I extends Stmt> I insertBefore(Stmt.Data<I> args, Stmt before) {
    int index = stmts.indexOf(before);
    if (index == -1) {
      throw new IllegalArgumentException("Before not in " + this + ": " + before);
    }
    var stmt = args.make(cfg());
    stmts.add(index, stmt);
    return stmt;
  }

  /**
   * Insert a statement in this BB immediately before the given statement.
   *
   * @return The inserted statement.
   * @throws IllegalArgumentException If the before statement wasn't found.
   */
  public <I extends Stmt> I insertAfter(Stmt.Data<I> args, Stmt after) {
    int index = stmts.indexOf(after);
    if (index == -1) {
      throw new IllegalArgumentException("After not in " + this + ": " + after);
    }
    var stmt = args.make(cfg());
    stmts.add(index + 1, stmt);
    return stmt;
  }

  /**
   * Insert a statement at the start of this BB, after the φ nodes.
   *
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I prepend(Stmt.Data<I> args) {
    var stmt = args.make(cfg());
    stmts.addFirst(stmt);
    return stmt;
  }

  /**
   * Insert a statement at the end of this BB.
   *
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I append(Stmt.Data<I> args) {
    var stmt = args.make(cfg());
    stmts.add(stmt);
    return stmt;
  }

  /**
   * Add a jump to this BB.
   *
   * @return The added jump.
   * @throws IllegalArgumentException If it already has one.
   */
  public <I extends Jump> I add(Jump.Data<I> args) {
    if (this.jump != null) {
      throw new IllegalStateException(this + " already has a jump");
    }
    var jump = args.make(cfg());
    setJump(jump);
    return jump;
  }

  /**
   * Create a new instruction with {@code newArgs} and replace all occurrences of {@code oldInstr}
   * with it.
   *
   * @return The newly-created instruction, or {@code oldInstr} if replacement can be done without
   *         by mutating it.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @throws IllegalArgumentException if {@code newArgs} is an incompatible type.
   */
  public <I extends Instr> I replace(I oldInstr, Instr.Data<I> newArgs) {
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
      if (oldInstr instanceof Jump j) {
        for (var succ : j.targets()) {
          succ.predecessors.remove(this);
        }
      }
      oldInstr.replaceData(newArgs);
      if (oldInstr instanceof Jump j) {
        for (var succ : j.targets()) {
          succ.predecessors.add(this);
        }
      }
      return oldInstr;
    } else {
      newInstr = newArgs.make(cfg());
      switch (newInstr) {
        case Stmt s -> {
          assert oldInstr instanceof Stmt;
          stmts.set(stmts.indexOf((Stmt)oldInstr), s);
        }
        case Jump j -> setJump(j);
      }
      cfg().untrack(oldInstr);
      var oldRets = oldInstr.returns();
      var newRets = newInstr.returns();
      assert oldRets.size() == newRets.size() : "instruction being replaced with one that has a different number of return values";
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
      throw new IllegalArgumentException("Not all instructions were removed:" + instrs.stream().filter(i -> !removed.contains(i)).map(i -> "\n- " + i).collect(
          Collectors.joining()));
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
  }
}
