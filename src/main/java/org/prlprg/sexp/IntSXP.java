package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;

/** Integer vector SEXP. */
@Immutable
public sealed interface IntSXP extends NumericSXP<Integer>
    permits EmptyIntSXPImpl, IntSXPImpl, SimpleIntSXP {
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
  IntSXP withAttributes(Attributes attributes);
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
  public int[] asInts() {
    return data.toArray();
  }

  @Override
  public int asInt(int index) {
    return data.get(index);
  }

  @Override
  public double[] asReals() {
    var dbls = new double[data.length()];
    for (int i = 0; i < dbls.length; i++) {
      dbls[i] = data.get(i);
    }
    return dbls;
  }

  @Override
  public double asReal(int index) {
    return get(index);
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
  public int[] asInts() {
    return new int[0];
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }

  @Override
  public double[] asReals() {
    return new double[0];
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }
}
