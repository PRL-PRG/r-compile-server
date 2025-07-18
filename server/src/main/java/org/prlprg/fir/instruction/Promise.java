package org.prlprg.fir.instruction;

import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.CFG;
import org.prlprg.fir.type.Effects;
import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Variable;
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
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return code.bbs().stream()
        .flatMap(
            bb -> Streams.concat(bb.statements().stream(), bb.jump().immediateChildren().stream()))
        .toList();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
