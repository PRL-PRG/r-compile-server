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
    var s = p.scanner();

    var reg = p.parse(Register.class);
    s.assertAndSkip(':');
    var type = p.parse(Type.class);

    return new Parameter(reg, type);
  }
}
