package org.prlprg.fir.ir.instruction;

import java.util.ArrayList;
import java.util.List;
import java.util.function.BiFunction;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An [Instruction] that evaluates an [Expression], optionally assigning the result to a register
/// ([#assignee]).
public final class Statement extends Instruction {
  private Expression expression;
  private @Nullable AssigneeOf assignee;

  public Statement(Comments comments, Expression expression, List<Argument> args) {
    super(comments, args);
    this.expression = expression;
  }

  public Statement(Expression expression, List<Argument> args) {
    this(new Comments(), expression, args);
  }

  public Statement(Expression expression) {
    this(new Comments(), expression, List.of());
  }

  public Expression expression() {
    return expression;
  }

  /// Replace the operation while keeping the arguments and assignee. The new expression must use
  /// the same argument layout (caller's responsibility).
  public void setExpression(Expression expression) {
    this.expression = expression;
  }

  /// The register this statement's result is assigned to, or `null` if the result is discarded.
  public @Nullable AssigneeOf assignee() {
    return assignee;
  }

  /// Give this statement's result a register named `name` of declared `type`, and return it.
  public AssigneeOf setAssignee(String name, Type type) {
    assignee = new AssigneeOf(this, name, type);
    reserveAssigneeName();
    return assignee;
  }

  public void clearAssignee() {
    assignee = null;
  }

  /// Reserve the [#assignee]'s name in the enclosing [Abstraction][
  /// org.prlprg.fir.ir.abstraction.Abstraction], if this statement is in a CFG and has an assignee.
  ///
  /// A statement is usually given its assignee while still standalone and only later spliced into a
  /// block, so this runs on both events; whichever happens second is the one that reserves.
  private void reserveAssigneeName() {
    var bb = parentBB();
    if (assignee != null && bb != null) {
      bb.owner().scope().reserveName(assignee.name());
    }
  }

  // --- Positioning ----------------------------------------------------------------------------

  /// Splice this (standalone) statement immediately before `point`, which must be in a CFG.
  public void insertBefore(Instruction point) {
    if (!isStandalone()) {
      throw new IllegalStateException("Statement already in a CFG; remove or copy it first");
    }
    var pPrev = point.prev();
    setPrev(pPrev);
    setNext(point);
    pPrev.setNext(this);
    point.setPrev(this);
    reserveAssigneeName();
  }

  /// Splice this (standalone) statement immediately after `point`, which must be in a CFG.
  public void insertAfter(Instruction point) {
    if (!isStandalone()) {
      throw new IllegalStateException("Statement already in a CFG; remove or copy it first");
    }
    var pNext = point.next();
    setNext(pNext);
    setPrev(point);
    pNext.setPrev(this);
    point.setNext(this);
    reserveAssigneeName();
  }

  /// A standalone copy with arguments mapped through `copyArguments` (index, oldArg) -> newArg.
  /// If this has an assignee, the copy gets a fresh assignee with the same name and type.
  public Statement copy(BiFunction<Integer, Argument, Argument> copyArguments) {
    var newArgs = new ArrayList<Argument>(argCount());
    for (var i = 0; i < argCount(); i++) {
      newArgs.add(copyArguments.apply(i, arg(i)));
    }
    var copy = new Statement(comments(), expression, newArgs);
    if (assignee != null) {
      copy.setAssignee(assignee.name(), assignee.type());
    }
    return copy;
  }

  @Override
  public void replaceWith(Instruction newInst) {
    if (!(newInst instanceof Statement newStatement)) {
      throw new IllegalArgumentException("A Statement can only be replaced with a Statement");
    }
    super.replaceWith(newInst);
    newStatement.reserveAssigneeName();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  /// A statement can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(statement)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }
}
