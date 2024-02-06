package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;
import java.util.PrimitiveIterator;
import javax.annotation.concurrent.Immutable;

/** Integer vector SEXP. */
@Immutable
public sealed interface IntSXP extends VectorSXP<Integer>
    permits EmptyIntSXPImpl, IntSXPImpl, SimpleIntSXP {
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
}
