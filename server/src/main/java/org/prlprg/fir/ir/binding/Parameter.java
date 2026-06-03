package org.prlprg.fir.ir.binding;

import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

public record Parameter(@Override Register variable, @Override Type type, boolean strict)
    implements Binding {
  public Parameter(Register variable, Type type) {
    this(variable, type, false);
  }

  public Parameter {
    if (type.isValue() && strict) {
      throw new IllegalArgumentException("Value parameter can't be strict: " + this);
    }
  }

  public Parameter withStrict(boolean strict) {
    return new Parameter(variable, type, strict);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private static Parameter parse(Parser p) {
    return Bindings.parse(
        p,
        (var, type) -> {
          var s = p.scanner();

          if (!(var instanceof Register reg)) {
            throw s.fail("parameters must be registers");
          }

          var strict = s.trySkip("@!");

          return new Parameter(reg, type, strict);
        });
  }
}
