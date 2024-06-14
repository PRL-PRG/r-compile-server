package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Logical;

/** Logical vector SEXP. */
@Immutable
public sealed interface LglSXP extends PrimVectorSXP<Logical>
    permits EmptyLglSXPImpl, LglSXPImpl, ScalarLglSXP {
  @Override
  default SEXPType type() {
    return SEXPType.LGL;
  }

  @Override
  default boolean hasNaOrNaN() {
    for (var logical : this) {
      if (logical == Logical.NA) {
        return true;
      }
    }
    return false;
  }

  @Override
  LglSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return LglSXP.class;
  }
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
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(data, attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Simple scalar logical = logical vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
final class ScalarLglSXP extends ScalarSXPImpl<Logical> implements LglSXP {
  static final ScalarLglSXP TRUE = new ScalarLglSXP(Logical.TRUE);
  static final ScalarLglSXP FALSE = new ScalarLglSXP(Logical.FALSE);
  static final ScalarLglSXP NA = new ScalarLglSXP(Logical.NA);

  private ScalarLglSXP(Logical data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Logical value() {
    return data;
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
