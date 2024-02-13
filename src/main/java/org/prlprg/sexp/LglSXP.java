package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Logical;

/** Logical vector SEXP. */
@Immutable
public sealed interface LglSXP extends VectorSXP<Logical>
    permits EmptyLglSXPImpl, LglSXPImpl, SimpleLglSXP {
  @Override
  default SEXPType type() {
    return SEXPType.LGL;
  }

  @Override
  Attributes attributes();

  @Override
  LglSXP withAttributes(Attributes attributes);
}

/** Logical vector which doesn't fit any of the more specific subclasses. */
record LglSXPImpl(ImmutableList<Logical> data, @Override Attributes attributes) implements LglSXP {
  @Override
  public UnmodifiableIterator<Logical> iterator() {
    return data.iterator();
  }

  @Override
  public Logical get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public String toString() {
    return VectorSXPs.toString(this, data.stream());
  }

  @Override
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(data, attributes);
  }
}

/** Empty logical vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyLglSXPImpl extends EmptyVectorSXPImpl<Logical> implements LglSXP {
  static final EmptyLglSXPImpl INSTANCE = new EmptyLglSXPImpl();

  private EmptyLglSXPImpl() {
    super();
  }

  @Override
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(ImmutableList.of(), attributes);
  }
}
