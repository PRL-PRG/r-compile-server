package org.prlprg.sexp;

import com.google.common.math.DoubleMath;
import com.google.common.primitives.ImmutableDoubleArray;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

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
  RealSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return RealSXP.class;
  }
}

/** Real vector which doesn't fit any of the more specific subclasses. */
final class RealSXPImpl implements RealSXP {
  private final List<Double> data;
  private final Attributes attributes;

  RealSXPImpl(ImmutableDoubleArray data, Attributes attributes) {
    this.data = new ArrayList<>();
    for (int i = 0; i < data.length(); i++) {
      this.data.add(data.get(i));
    }
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<Double> iterator() {
    return data.iterator();
  }

  @Override
  public Double get(int i) {
    return data.get(i);
  }

  @Override
  public void set(int i, Double value) {
    data.set(i, value);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public RealSXP withAttributes(Attributes attributes) {
    var builder = ImmutableDoubleArray.builder();
    for (var value : data) {
      builder.add(value);
    }
    return SEXPs.real(builder.build(), attributes);
  }

  @Override
  public RealSXP copy() {
    var builder = ImmutableDoubleArray.builder();
    for (var value : data) {
      builder.add(value);
    }
    return new RealSXPImpl(builder.build(), attributes);
  }

  @Override
  public int asInt(int index) {
    return data.get(index).intValue();
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
    if (data.size() != data2.size()) {
      return false;
    }
    for (int i = 0; i < data.size(); i++) {
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

  @Override
  public RealSXP copy() {
    return this;
  }
}
