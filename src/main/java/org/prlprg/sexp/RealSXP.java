package org.prlprg.sexp;

import com.google.common.primitives.ImmutableDoubleArray;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;

/** Real vector SEXP. */
@Immutable
public sealed interface RealSXP extends VectorSXP<Double>
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
}
