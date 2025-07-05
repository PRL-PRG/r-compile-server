package org.prlprg.fir.binding;

import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public record Parameter(@Override Register variable, @Override Type type) implements Binding {
  @Override
  public String toString() {
    return variable + ":" + type;
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
