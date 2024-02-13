package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Complex;

/** Complex vector SEXP. */
@Immutable
public sealed interface ComplexSXP extends PrimVectorSXP<Complex>
    permits ComplexSXPImpl, EmptyComplexSXPImpl, ScalarComplexSXP {
  @Override
  default SEXPType type() {
    return SEXPType.CPLX;
  }

  @Override
  default boolean hasNaOrNaN() {
    for (var complex : this) {
      if (complex.isNaOrNaN()) {
        return true;
      }
    }
    return false;
  }

  @Override
  ComplexSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return ComplexSXP.class;
  }
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

final class ScalarComplexSXP extends ScalarSXPImpl<Complex> implements ComplexSXP {
  ScalarComplexSXP(Complex data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Complex value() {
    return data;
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return SEXPs.complex(data, attributes);
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
