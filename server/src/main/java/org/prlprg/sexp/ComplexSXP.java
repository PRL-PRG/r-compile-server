package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;
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
  ComplexSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return ComplexSXP.class;
  }
}

/** Complex vector which doesn't fit any of the more specific subclasses. */
final class ComplexSXPImpl implements ComplexSXP {
  private final List<Complex> data;
  private final Attributes attributes;

  ComplexSXPImpl(ImmutableList<Complex> data, Attributes attributes) {
    this.data = new ArrayList<>(data);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<Complex> iterator() {
    return data.iterator();
  }

  @Override
  public Complex get(int i) {
    return data.get(i);
  }

  @Override
  public void set(int i, Complex value) {
    data.set(i, value);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public ComplexSXP withAttributes(Attributes attributes) {
    return new ComplexSXPImpl(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public ComplexSXP copy() {
    return new ComplexSXPImpl(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
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

  @Override
  public ComplexSXP copy() {
    return new ScalarComplexSXP(data);
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

  @Override
  public ComplexSXP copy() {
    return this;
  }
}
