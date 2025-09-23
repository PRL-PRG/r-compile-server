package org.prlprg.fir.ir.callee;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record DynamicCallee(
    Argument actualCallee, ImmutableList<OptionalNamedVariable> callArgumentNames)
    implements Callee {
  public DynamicCallee(Argument actualCallee) {
    this(actualCallee, ImmutableList.of());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("dyn ");
    p.print(actualCallee);
    if (callArgumentNames.stream().anyMatch(OptionalNamedVariable::isPresent)) {
      p.printAsList("[", "]", callArgumentNames);
    }
  }
}
