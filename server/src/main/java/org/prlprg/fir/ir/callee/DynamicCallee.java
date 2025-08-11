package org.prlprg.fir.ir.callee;

import com.google.common.collect.ImmutableList;
import java.util.function.Predicate;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record DynamicCallee(Register variable, ImmutableList<String> argumentNames)
    implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("dyn ");
    p.print(variable);
    if (argumentNames.stream().anyMatch(Predicate.not(String::isEmpty))) {
      p.printAsList("[", "]", argumentNames);
    }
  }
}
