package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Complex;

/** Complex vector SEXP. */
@Immutable
public sealed interface ComplexSXP extends VectorSXP<Complex>
    permits ComplexSXPImpl, EmptyComplexSXPImpl, SimpleComplexSXP {
  @Override
  default SEXPType type() {
    return SEXPType.CPLX;
  }

  @Override
  ComplexSXP withAttributes(Attributes attributes);
}

/** Complex vector which doesn't fit any of the more specific subclasses. */
record ComplexSXPImpl(ImmutableList<Complex> data, @Override Attributes attributes)
    implements ComplexSXP {
  @Override
  public UnmodifiableIterator<Complex> iterator() {
    return data.iterator();
  }

  @Override
  public Complex get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public String toString() {
    return VectorSXPs.toString(this, data().stream());
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return new ComplexSXPImpl(data, attributes);
  }
}

/** Empty complex vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyComplexSXPImpl extends EmptyVectorSXPImpl<Complex> implements ComplexSXP {
  static final EmptyComplexSXPImpl INSTANCE = new EmptyComplexSXPImpl();

  private EmptyComplexSXPImpl() {
    super();
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return SEXPs.complex(ImmutableList.of(), attributes);
  }
}
