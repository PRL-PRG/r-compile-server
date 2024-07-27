package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Complex;

/** Complex vector SEXP. */
@Immutable
public sealed interface ComplexSXP extends NumericSXP<Complex>
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
  public int asInt(int index) {
    return (int) data.get(index).real();
  }

  @Override
  public double asReal(int index) {
    return data.get(index).real();
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return new ComplexSXPImpl(data, attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Empty complex vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyComplexSXPImpl extends EmptyVectorSXPImpl<Complex> implements ComplexSXP {
  static final EmptyComplexSXPImpl INSTANCE = new EmptyComplexSXPImpl();

  private EmptyComplexSXPImpl() {
    super();
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty complex vector");
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty complex vector");
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return SEXPs.complex(ImmutableList.of(), attributes);
  }
}
