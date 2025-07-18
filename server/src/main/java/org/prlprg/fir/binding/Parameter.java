package org.prlprg.fir.binding;

import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

public record Parameter(@Override Register variable, @Override Type type) implements Binding {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private static Parameter parse(Parser p) {
    return Bindings.parse(
        p,
        (var, type) -> {
          if (!(var instanceof Register reg)) {
            throw p.scanner().fail("parameters must be registers");
          }
          return new Parameter(reg, type);
        });
  }
}
