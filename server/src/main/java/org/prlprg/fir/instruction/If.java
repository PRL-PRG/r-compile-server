package org.prlprg.fir.instruction;

import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.phi.Target;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record If(Expression cond, Target ifTrue, Target ifFalse) implements Jump {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("if ");
    p.print(cond);
    w.write(" then ");
    p.print(ifTrue);
    w.write(" else ");
    p.print(ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(ifTrue, ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return Streams.concat(Stream.of(cond), ifTrue.phiArgs().stream(), ifFalse.phiArgs().stream())
        .toList();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
