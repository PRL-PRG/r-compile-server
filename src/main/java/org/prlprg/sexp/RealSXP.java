package org.prlprg.sexp;

import com.google.common.math.DoubleMath;
import com.google.common.primitives.ImmutableDoubleArray;
import java.util.Objects;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;

/** Real vector SEXP. */
@Immutable
public sealed interface RealSXP extends NumericSXP<Double>
    permits EmptyRealSXPImpl, RealSXPImpl, ScalarRealSXP {
  double DOUBLE_CMP_DELTA = 0.000001d;

  @Override
  default SEXPType type() {
    return SEXPType.REAL;
  }

  @Override
  default boolean hasNaOrNaN() {
    for (var real : this) {
      if (Double.isNaN(real)) {
        return true;
      }
    }
    return false;
  }

  @Override
  RealSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return RealSXP.class;
  }
}

/** Real vector which doesn't fit any of the more specific subclasses. */
record RealSXPImpl(ImmutableDoubleArray data, @Override Attributes attributes) implements RealSXP {
  @Override
  public PrimitiveIterator.OfDouble iterator() {
    return data.stream().iterator();
  }

  @Override
  public Double get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.length();
  }

  @Override
  public String toString() {
    return VectorSXPs.toString(this, data().stream());
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    return SEXPs.real(data, attributes);
  }

  @Override
  public int asInt(int index) {
    return (int) data.get(index);
  }

  @Override
  public double asReal(int index) {
    return data.get(index);
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (o == null || getClass() != o.getClass()) return false;
    var that = (RealSXPImpl) o;
    var data2 = that.data;
    if (data.length() != data2.length()) {
      return false;
    }
    for (int i = 0; i < data.length(); i++) {
      if (!DoubleMath.fuzzyEquals(data.get(i), data2.get(i), DOUBLE_CMP_DELTA)) {
        return false;
      }
    }
    return Objects.equals(attributes, that.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, attributes);
  }
}

/** Simple scalar real = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
final class ScalarRealSXP extends ScalarSXPImpl<Double> implements RealSXP {
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
    if (o == null || getClass() != o.getClass()) return false;
    var that = (ScalarRealSXP) o;
    return DoubleMath.fuzzyEquals(data, that.data, DOUBLE_CMP_DELTA);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data);
  }
}

/** Empty real vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyRealSXPImpl extends EmptyVectorSXPImpl<Double> implements RealSXP {
  static final EmptyRealSXPImpl INSTANCE = new EmptyRealSXPImpl();

  private EmptyRealSXPImpl() {
    super();
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    return SEXPs.real(ImmutableDoubleArray.of(), attributes);
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }
}
