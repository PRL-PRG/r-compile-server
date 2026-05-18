package org.prlprg.fir.ir.instruction;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Throw an exception, exiting all compiled code (catching exceptions = reflection)
///
/// The behavior throws [org.prlprg.fir.interpret.InterpretException] in an interpreter and
/// `Rf_error` in the C backend
public record Raise(Comments comments, Argument value) implements Jump {
  public Raise(Argument value) {
    this(new Comments(), value);
  }

  public Raise(String message) {
    this(new Constant(new Value.Str(message)));
  }

  @Override
  public @UnmodifiableView List<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView List<BB> targetBBs() {
    return List.of();
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of(value);
  }

  @Override
  public Jump mapArguments(Function<Argument, Argument> transformer) {
    return new Raise(comments, transformer.apply(value));
  }

  @Override
  public Jump mapTargets(Function<Target, Target> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(comments);
    p.writer().write("raise ");
    p.print(value);
  }
}
