package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Logical;

@Immutable
public sealed interface LglSXP extends VectorSXP<Logical> {
  @Override
  default SEXPType type() {
    return SEXPType.LGL;
  }

  @Override
  Attributes attributes();

  @Override
  LglSXP withAttributes(Attributes attributes);
}

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

final class SimpleLglSXPImpl extends SimpleScalarSXPImpl<Logical> implements LglSXP {
  static final SimpleLglSXPImpl TRUE = new SimpleLglSXPImpl(Logical.TRUE);
  static final SimpleLglSXPImpl FALSE = new SimpleLglSXPImpl(Logical.FALSE);
  static final SimpleLglSXPImpl NA = new SimpleLglSXPImpl(Logical.NA);

  private SimpleLglSXPImpl(Logical data) {
    super(data);
  }

  @Override
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(data, attributes);
  }
}

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
