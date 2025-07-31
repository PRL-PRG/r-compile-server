package org.prlprg.fir.ir.expression;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.CFG;
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
    w.write(">{");
    w.runIndented(
        () -> {
          w.write('\n');
          p.print(code);
        });
    w.write("\n}");
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return code.bbs().stream()
        .flatMap(bb -> bb.instructions().stream())
        .flatMap(i -> i.arguments().stream())
        .toList();
  }
}
