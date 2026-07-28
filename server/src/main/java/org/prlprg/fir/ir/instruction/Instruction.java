package org.prlprg.fir.ir.instruction;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;

/// A FIŘ instruction: either a [Statement] or a [Jump] (wraps a [JumpExpression]).
///
/// Instructions own their arguments and track def-use links. Each argument slot is addressed by a
/// [Use]`(this, index)`, and the value an instruction defines (if any) tracks its consumers in
/// [#uses]. Instructions also form an intrusive doubly-linked list within their [BB][
/// org.prlprg.fir.ir.cfg.BB], so an instruction knows its own position.
public abstract sealed class Instruction permits Statement, Jump {
  private Comments comments;

  // This instruction's arguments (the values it uses), in the canonical flat order.
  private final ArrayList<Argument> args = new ArrayList<>();
  // Consumers of the value this instruction defines (only non-empty for an assigned [Statement]).
  private final Set<Use> uses = new LinkedHashSet<>();

  // Intrusive list links. Both null iff this instruction is standalone (not in a BB).
  private @Nullable Instruction next;
  private @Nullable Instruction prev;

  protected Instruction(Comments comments, List<Argument> args) {
    this.comments = comments;
    for (var i = 0; i < args.size(); i++) {
      var arg = args.get(i);
      this.args.add(arg);
      arg.addUse(new Use(this, i));
    }
  }

  public Comments comments() {
    return comments;
  }

  public void setComments(Comments comments) {
    this.comments = comments;
  }

  // --- Arguments ------------------------------------------------------------------------------

  @UnmodifiableView
  public List<Argument> args() {
    return Collections.unmodifiableList(args);
  }

  public Argument arg(int index) {
    return args.get(index);
  }

  public int argCount() {
    return args.size();
  }

  /// Replace the argument at `index`, updating def-use links on the old and new argument.
  public void setArg(int index, Argument newArg) {
    var use = new Use(this, index);
    args.get(index).removeUse(use);
    args.set(index, newArg);
    newArg.addUse(use);
  }

  /// Replace each argument with the result of applying `transformer`, in place.
  public void mapArguments(Function<Argument, Argument> transformer) {
    for (var i = 0; i < args.size(); i++) {
      setArg(i, transformer.apply(args.get(i)));
    }
  }

  /// Insert an argument at `index`, shifting later arguments' [Use]s up by one.
  ///
  /// Changing arity is O(arguments after `index`) because later uses must be re-indexed.
  protected void insertArg(int index, Argument newArg) {
    for (var j = args.size() - 1; j >= index; j--) {
      var arg = args.get(j);
      arg.removeUse(new Use(this, j));
      arg.addUse(new Use(this, j + 1));
    }
    args.add(index, newArg);
    newArg.addUse(new Use(this, index));
  }

  /// Replace the entire argument list, updating def-use links for all removed and added arguments.
  protected void resetArgs(List<Argument> newArgs) {
    for (var i = 0; i < args.size(); i++) {
      args.get(i).removeUse(new Use(this, i));
    }
    args.clear();
    for (var i = 0; i < newArgs.size(); i++) {
      var arg = newArgs.get(i);
      args.add(arg);
      arg.addUse(new Use(this, i));
    }
  }

  /// Remove and return the argument at `index`, shifting later arguments' [Use]s down by one.
  protected Argument removeArg(int index) {
    var removed = args.get(index);
    removed.removeUse(new Use(this, index));
    args.remove(index);
    for (var j = index; j < args.size(); j++) {
      var arg = args.get(j);
      arg.removeUse(new Use(this, j + 1));
      arg.addUse(new Use(this, j));
    }
    return removed;
  }

  // --- Uses (consumers of this instruction's result) ------------------------------------------

  @UnmodifiableView
  public Set<Use> uses() {
    return Collections.unmodifiableSet(uses);
  }

  public void addUse(Use use) {
    uses.add(use);
  }

  public void removeUse(Use use) {
    uses.remove(use);
  }

  public int useCount() {
    return uses.size();
  }

  // --- Intrusive list -------------------------------------------------------------------------

  /// True iff this instruction isn't currently in a [BB][org.prlprg.fir.ir.cfg.BB].
  public boolean isStandalone() {
    return next == null;
  }

  public Instruction next() {
    if (next == null) {
      throw new IllegalStateException("Instruction is standalone");
    }
    return next;
  }

  public Instruction prev() {
    if (prev == null) {
      throw new IllegalStateException("Instruction is standalone");
    }
    return prev;
  }

  /// The [BB] this instruction belongs to, or `null` if standalone. Found by walking the intrusive
  /// list to the terminator [Jump]; overridden in [Jump] to return its backlink directly.
  public @Nullable BB parentBB() {
    if (isStandalone()) {
      return null;
    }
    var i = this;
    while (!(i instanceof Jump)) {
      i = i.next();
    }
    return i.parentBB();
  }

  /// This instruction's index within its [BB]: a [Statement] at position `i` returns `i`, and the
  /// terminator [Jump] returns the number of statements. (This matches the addressing used by
  /// dominance/reachability queries, where a phi group is index `-1`.)
  ///
  /// @throws IllegalStateException If standalone.
  public int indexInBB() {
    var bb = parentBB();
    if (bb == null) {
      throw new IllegalStateException("Instruction not in a CFG");
    }
    // Walk from the block's first instruction (the anchor jump's successor) counting statements
    // until we reach this instruction. Reaching the jump (this, if this is the jump) yields the
    // statement count.
    var i = 0;
    for (var instr = bb.jump().next(); instr != this; instr = instr.next()) {
      i++;
    }
    return i;
  }

  // Package-private link mutators, used by subclasses and BB.
  void setNext(@Nullable Instruction next) {
    this.next = next;
  }

  void setPrev(@Nullable Instruction prev) {
    this.prev = prev;
  }

  /// Unlink this instruction from its list and drop all its def-use links, destroying it.
  ///
  /// @throws IllegalStateException If standalone, or if its result still has uses.
  public void remove() {
    if (isStandalone()) {
      throw new IllegalStateException("Instruction not in a CFG");
    }
    if (useCount() != 0) {
      throw new IllegalStateException("Instruction cannot be removed while its result has uses");
    }

    for (var i = 0; i < args.size(); i++) {
      args.get(i).removeUse(new Use(this, i));
    }

    next.setPrev(prev);
    prev.setNext(next);
    next = null;
    prev = null;
  }

  /// Move this instruction to immediately before `point`, preserving all def-use links (the
  /// arguments don't change, only the position). `point` must be in a CFG.
  public void moveBefore(Instruction point) {
    if (point == this) {
      return;
    }
    // Unlink from the current position without touching def-use links.
    if (next != null) {
      next.setPrev(prev);
      prev.setNext(next);
    }
    var pPrev = point.prev();
    prev = pPrev;
    next = point;
    pPrev.setNext(this);
    point.setPrev(this);
  }

  /// Unlink this instruction from its list and drop its argument uses, *without* requiring that its
  /// own result be unused. A low-level escape hatch for bulk operations (e.g. clearing a block);
  /// prefer [#remove].
  public void detach() {
    if (isStandalone()) {
      throw new IllegalStateException("Instruction not in a CFG");
    }
    next.setPrev(prev);
    prev.setNext(next);
    next = null;
    prev = null;
    for (var i = 0; i < args.size(); i++) {
      args.get(i).removeUse(new Use(this, i));
    }
  }

  /// Splice `newInst` into this instruction's position, then destroy this instruction.
  ///
  /// @throws IllegalStateException If this is standalone or `newInst` is not standalone.
  public void replaceWith(Instruction newInst) {
    if (isStandalone()) {
      throw new IllegalStateException("Instruction not in a CFG");
    }
    if (!newInst.isStandalone()) {
      throw new IllegalArgumentException(
          "New instruction is already in a CFG; remove or copy it first");
    }

    if (next == this) {
      // Self-loop: this is the sole anchor of an otherwise-empty block.
      newInst.setNext(newInst);
      newInst.setPrev(newInst);
    } else {
      newInst.setNext(next);
      newInst.setPrev(prev);
      next.setPrev(newInst);
      prev.setNext(newInst);
    }
    next = null;
    prev = null;

    for (var i = 0; i < args.size(); i++) {
      args.get(i).removeUse(new Use(this, i));
    }
  }
}
