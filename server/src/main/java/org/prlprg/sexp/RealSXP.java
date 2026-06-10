package org.prlprg.sexp;

import com.google.common.math.DoubleMath;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

/** Real vector SEXP. */
@Immutable
public sealed interface RealSXP extends NumericSXP<Double>
    permits EmptyRealSXPImpl, RealSXPImpl, ScalarRealSXP {
  double DOUBLE_CMP_DELTA = 0.000001d;

  /**
   * The data contained in this vector. Note that if it's an empty or scalar, those aren't actually
   * backed by an array, so this gets created and returns every access.
   */
  double[] data();

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
  RealSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return RealSXP.class;
  }
}

/** Real vector which doesn't fit any of the more specific subclasses. */
record RealSXPImpl(double[] data, Attributes attributes) implements RealSXP {
  RealSXPImpl(double[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Iterator<Double> iterator() {
    return Arrays.stream(data).iterator();
  }

  @Override
  public Double get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, Double value) {
    data[i] = value;
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    return SEXPs.real(data, attributes);
  }

  @Override
  public RealSXP copy() {
    return new RealSXPImpl(data, attributes);
  }

  @Override
  public int asInt(int index) {
    return (int) data[index];
  }

  @Override
  public double asReal(int index) {
    return data[index];
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (!(o instanceof RealSXPImpl(var data1, var attributes1))) {
      return false;
    }
    if (data.length != data1.length) {
      return false;
    }
    for (int i = 0; i < data.length; i++) {
      if (!DoubleMath.fuzzyEquals(data[i], data1[i], DOUBLE_CMP_DELTA)) {
        return false;
      }
    }
    return Objects.equals(attributes, attributes1);
  }

  @Override
  public int hashCode() {
    // Can't hash `data` because approximates are equal.
    return Objects.hash(attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
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
  public double[] data() {
    return new double[] {data};
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

  @Override
  public RealSXP copy() {
    return new ScalarRealSXP(data);
  }
}

/** Empty real vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyRealSXPImpl extends EmptyVectorSXPImpl<Double> implements RealSXP {
  static final EmptyRealSXPImpl INSTANCE = new EmptyRealSXPImpl();

  private EmptyRealSXPImpl() {
    super();
  }

  @Override
  public double[] data() {
    return new double[0];
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    return SEXPs.real(new double[0], attributes);
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }

  @Override
  public RealSXP copy() {
    return this;
  }
}
