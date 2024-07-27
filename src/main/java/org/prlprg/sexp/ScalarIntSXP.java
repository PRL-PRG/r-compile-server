package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray; /** Simple scalar integer = int vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
public final class ScalarIntSXP extends ScalarSXPImpl<Integer> implements IntSXP {
  ScalarIntSXP(int data) {
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
  public String[] coerceToStrings() {
    return new String[] {String.valueOf(data)};
  }

  @Override
  public int asInt(int index) {
    if (index == 0) {
      return data;
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }

  @Override
  public double asReal(int index) {
    if (index == 0) {
      return data.doubleValue();
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }
}
