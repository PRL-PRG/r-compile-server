package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

public record MkVector(Kind kind, ImmutableList<NamedArgument> elements) implements Expression {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return Lists.mapLazy(elements, NamedArgument::argument);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(kind);
    p.printAsList("[", "]", elements);
  }
}
