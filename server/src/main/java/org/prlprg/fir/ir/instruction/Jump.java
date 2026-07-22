package org.prlprg.fir.ir.instruction;

import java.util.ArrayList;
import java.util.List;
import java.util.function.BiFunction;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// The [Instruction] that terminates a [BB]: wraps a [JumpExpression] and holds the
/// condition/phi/stack arguments. A jump is the anchor of its block's intrusive instruction list.
public final class Jump extends Instruction {
  private JumpExpression expression;
  // Backlink, set when this becomes a BB's terminator.
  private @Nullable BB parentBB;

  public Jump(Comments comments, JumpExpression expression, List<Argument> args) {
    super(comments, args);
    this.expression = expression;
  }

  public Jump(JumpExpression expression, List<Argument> args) {
    this(new Comments(), expression, args);
  }

  public Jump(JumpExpression expression) {
    this(new Comments(), expression, List.of());
  }

  public JumpExpression expression() {
    return expression;
  }

  /// Replace the terminator operation while keeping the arguments. The new expression must use the
  /// same argument layout (caller's responsibility).
  public void setExpression(JumpExpression expression) {
    this.expression = expression;
  }

  @Override
  public @Nullable BB parentBB() {
    return parentBB;
  }

  /// Managed by [BB] when this jump becomes (or stops being) its terminator.
  public void setParentBB(@Nullable BB parentBB) {
    this.parentBB = parentBB;
  }

  /// Install this standalone jump as the sole anchor of `bb`'s (initially empty) instruction list:
  /// it becomes the terminator and circularly links to itself.
  public void installAsAnchor(BB bb) {
    if (!isStandalone()) {
      throw new IllegalStateException("Jump is already in a CFG");
    }
    setParentBB(bb);
    setNext(this);
    setPrev(this);
  }

  /// Jumps are replaced via [BB#setJump], not removed.
  @Override
  public void remove() {
    throw new UnsupportedOperationException("A Jump is replaced via BB#setJump, not removed");
  }

  /// Jumps are replaced via [BB#setJump], not detached.
  @Override
  public void detach() {
    throw new UnsupportedOperationException("A Jump is replaced via BB#setJump, not detached");
  }

  @UnmodifiableView
  public List<Target> targets() {
    return expression.targets(args());
  }

  @UnmodifiableView
  public List<BB> targetBBs() {
    return expression.targetBBs();
  }

  /// Apply `transformer` to each [Target], updating both the target block refs and their phi
  /// arguments (and the corresponding def-use links).
  public void mapTargets(Function<Target, Target> transformer) {
    // Snapshot args: `resetArgs` clears the backing list before reading the new one.
    var mapped = expression.mapTargets(transformer, List.copyOf(args()));
    expression = mapped.expression();
    resetArgs(mapped.args());
  }

  /// A standalone copy with arguments mapped through `copyArguments` (index, oldArg) -> newArg.
  public Jump copy(BiFunction<Integer, Argument, Argument> copyArguments) {
    var newArgs = new ArrayList<Argument>(argCount());
    for (var i = 0; i < argCount(); i++) {
      newArgs.add(copyArguments.apply(i, arg(i)));
    }
    return new Jump(comments(), expression, newArgs);
  }

  @Override
  public void replaceWith(Instruction newInst) {
    if (!(newInst instanceof Jump)) {
      throw new IllegalArgumentException("A Jump can only be replaced with a Jump");
    }
    super.replaceWith(newInst);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(comments());
    IrText.printJump(p, this);
  }
}
