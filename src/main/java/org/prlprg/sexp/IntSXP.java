package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Constants;

/** Integer vector SEXP. */
@Immutable
public sealed interface IntSXP extends NumericSXP<Integer>
    permits EmptyIntSXPImpl, IntSXPImpl, ScalarIntSXP {
  /**
   * The data contained in this vector. Note that if it's an empty or scalar, those aren't actually
   * backed by an {@link ImmutableIntArray}, so this gets created and returns every access.
   */
  ImmutableIntArray data();

  @Override
  default SEXPType type() {
    return SEXPType.INT;
  }

  @Override
  default boolean hasNaOrNaN() {
    for (var integer : this) {
      if (integer == Constants.NA_INT) {
        return true;
      }
    }
    return false;
  }

  @Override
  IntSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return IntSXP.class;
  }
}

/** Int vector which doesn't fit any of the more specific subclasses. */
record IntSXPImpl(@Override ImmutableIntArray data, @Override Attributes attributes)
    implements IntSXP {
  @Override
  public PrimitiveIterator.OfInt iterator() {
    return data.stream().iterator();
  }

  @Override
  public Integer get(int i) {
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
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(data, attributes);
  }

  @Override
  public int asInt(int index) {
    return data.get(index);
  }

  @Override
  public double asReal(int index) {
    return get(index);
  }
}

/** Simple scalar integer = int vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
final class ScalarIntSXP extends ScalarSXPImpl<Integer> implements IntSXP {
  ScalarIntSXP(int data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public int value() {
    return data;
  }

  @Override
  public ImmutableIntArray data() {
    return ImmutableIntArray.of(data);
  }

  @Override
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(data, attributes);
  }

  @Override
  public String[] coerceToStrings() {
    return new String[] {String.valueOf(data)};
  }

  @Override
  public int asInt(int index) {
    if (index == 0) {
      return data;
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }

  @Override
  public double asReal(int index) {
    if (index == 0) {
      return data.doubleValue();
    } else {
      throw new ArrayIndexOutOfBoundsException("Index out of bounds: " + index);
    }
  }
}

/** Empty int vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyIntSXPImpl extends EmptyVectorSXPImpl<Integer> implements IntSXP {
  static final EmptyIntSXPImpl INSTANCE = new EmptyIntSXPImpl();

  private EmptyIntSXPImpl() {
    super();
  }

  @Override
  public ImmutableIntArray data() {
    return ImmutableIntArray.of();
  }

  @Override
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(ImmutableIntArray.of(), attributes);
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }
}
