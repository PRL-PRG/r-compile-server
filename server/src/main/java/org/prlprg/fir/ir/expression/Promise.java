package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import java.util.stream.Collectors;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Promise(Type valueType, Effects effects, CFG code) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("prom<");
    p.print(valueType);
    w.write(' ');
    p.print(effects);
    w.write(">{\n");
    p.print(code);
    w.write("\n}");
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    throw new UnsupportedOperationException(
        "Promise must be special-cased.\nTo get arguments of instructions in the promise's body, use `argumentsInCode()`");
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    throw new UnsupportedOperationException(
        "Promise must be special-cased.\nTo transform arguments of instructions in the promise's body, iterate over the CFG.");
  }

  public @UnmodifiableView Collection<Argument> argumentsInCode() {
    return code.bbs().stream()
        .flatMap(bb -> bb.instructions().stream())
        .flatMap(
            i ->
                (i instanceof Statement s && s.expression() instanceof Promise p
                        ? p.argumentsInCode()
                        : i.arguments())
                    .stream())
        .collect(Collectors.toSet());
  }
}
