package org.prlprg.sexp;

import com.google.common.primitives.ImmutableDoubleArray;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;

/** Real vector SEXP. */
@Immutable
public sealed interface RealSXP extends NumericSXP<Double>
    permits EmptyRealSXPImpl, RealSXPImpl, SimpleRealSXP {
  @Override
  default SEXPType type() {
    return SEXPType.REAL;
  }

  @Override
  Attributes attributes();

  @Override
  RealSXP withAttributes(Attributes attributes);
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
  public int[] asInts() {
    var ints = new int[data.length()];
    for (int i = 0; i < data.length(); i++) {
      ints[i] = (int) data.get(i);
    }
    return ints;
  }

  @Override
  public int asInt() {
    return (int) data.get(0);
  }

  @Override
  public double[] asReals() {
    return data().toArray();
  }

  @Override
  public double asReal() {
    return data.get(0);
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
  public int[] asInts() {
    return new int[0];
  }

  @Override
  public int asInt() {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }

  @Override
  public double[] asReals() {
    return new double[0];
  }

  @Override
  public double asReal() {
    throw new ArrayIndexOutOfBoundsException("Empty real vector");
  }
}
