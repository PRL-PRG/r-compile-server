package org.prlprg.fir.ir.binding;

import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

public record Local(@Override Variable variable, @Override Type type) implements Binding {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private static Local parse(Parser p) {
    return Bindings.parse(p, Local::new);
  }
}
