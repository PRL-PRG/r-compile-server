package org.prlprg.sexp;

import com.google.common.math.DoubleMath;

/** Simple scalar real = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
public final class ScalarRealSXP extends ScalarSXPImpl<Double> implements RealSXP {
  ScalarRealSXP(double data) {
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
  public int asInt(int index) {
    if (index == 0) {
      return data.intValue();
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }

  @Override
  public double asReal(int index) {
    if (index == 0) {
      return data;
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof ScalarRealSXP that)) return false;
    return DoubleMath.fuzzyEquals(data, that.data, DOUBLE_CMP_DELTA);
  }

  @Override
  public int hashCode() {
    return Double.hashCode(data);
  }
}
