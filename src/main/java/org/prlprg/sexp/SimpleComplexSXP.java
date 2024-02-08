package org.prlprg.sexp;

import org.prlprg.primitive.Complex;

/** Simple scalar complex = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
public final class SimpleComplexSXP extends SimpleScalarSXPImpl<Complex> implements ComplexSXP {
  SimpleComplexSXP(Complex data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Complex value() {
    return data;
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return SEXPs.complex(data, attributes);
  }
}
