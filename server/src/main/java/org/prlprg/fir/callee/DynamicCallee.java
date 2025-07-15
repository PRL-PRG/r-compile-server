package org.prlprg.fir.callee;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record DynamicCallee(NamedVariable variable, ImmutableList<String> argumentNames)
    implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("dyn<");
    p.print(variable);
    if (!argumentNames.isEmpty()) {
      p.printAsList("[", "]", argumentNames);
    }
    w.write('>');
  }
}
