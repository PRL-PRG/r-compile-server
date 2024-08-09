package org.prlprg.sexp;

import org.prlprg.primitive.Complex;

public final class ScalarComplexSXP extends ScalarSXPImpl<Complex> implements ComplexSXP {
  ScalarComplexSXP(Complex data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Complex value() {
    return data;
  }

  @Override
  public int asInt(int index) {
    return (int) data.real();
  }

  @Override
  public double asReal(int index) {
    return data.real();
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return SEXPs.complex(data, attributes);
  }
}
