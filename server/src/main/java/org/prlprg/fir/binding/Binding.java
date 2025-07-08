package org.prlprg.fir.binding;

import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public sealed interface Binding permits Local, Parameter {
  Variable variable();

  Type type();

  @PrintMethod
  private void print(Printer p) {
    p.print(variable());
    p.writer().write(":");
    p.print(type());
  }
}
