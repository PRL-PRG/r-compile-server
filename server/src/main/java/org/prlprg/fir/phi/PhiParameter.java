package org.prlprg.fir.phi;

import org.prlprg.fir.instruction.Expression;
import org.prlprg.fir.instruction.Read;
import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public record PhiParameter(Register variable, Type type) {
  /// The parameter as an expression.
  public Expression asExpression() {
    return new Read(variable);
  }

  @Override
  public String toString() {
    return variable + ":" + type;
  }

  @ParseMethod
  private static PhiParameter parse(Parser p) {
    var s = p.scanner();

    var reg = p.parse(Register.class);
    s.assertAndSkip(':');
    var type = p.parse(Type.class);

    return new PhiParameter(reg, type);
  }
}
