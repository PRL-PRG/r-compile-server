package org.prlprg.fir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record MkVector(ImmutableList<Expression> elements) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.printAsList("[", "]", elements);
  }

  @Override
  public ImmutableList<Expression> immediateChildren() {
    return elements;
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
