package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;

/** Simple scalar integer = int vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
public final class SimpleIntSXP extends SimpleScalarSXPImpl<Integer> implements IntSXP {
  SimpleIntSXP(int data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public int value() {
    return data;
  }

  @Override
  public ImmutableIntArray data() {
    return ImmutableIntArray.of(data);
  }

  @Override
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(data, attributes);
  }

  @Override
  public int[] asInts() {
    return new int[] {data};
  }

  @Override
  public int asInt() {
    return data;
  }

  @Override
  public double[] asReals() {
    return new double[] {data.doubleValue()};
  }

  @Override
  public double asReal() {
    return data.doubleValue();
  }
}
