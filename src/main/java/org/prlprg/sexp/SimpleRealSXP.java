package org.prlprg.sexp;

/** Simple scalar real = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
public final class SimpleRealSXP extends SimpleScalarSXPImpl<Double> implements RealSXP {
  SimpleRealSXP(double data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public double value() {
    return data;
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    return SEXPs.real(data, attributes);
  }

  @Override
  public int[] asInts() {
    return new int[] {data.intValue()};
  }

  @Override
  public int asInt() {
    return data.intValue();
  }

  @Override
  public double[] asReals() {
    return new double[] {data};
  }

  @Override
  public double asReal() {
    return data;
  }

  @Override
  public String toString() {
    // FIXME: This is fairly arbitrary, but it works with log2 constant folding which otherwise
    // differs
    //  from GNU-R in the last digit.
    //  Proper solution would be not to use simple text diff in tests, but actually compare the
    // values.
    return String.format("%.13f", data);
  }
}
