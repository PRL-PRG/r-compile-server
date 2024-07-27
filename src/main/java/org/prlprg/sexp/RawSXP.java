package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

/** Raw (byte) vector SEXP. */
@Immutable
public sealed interface RawSXP extends PrimVectorSXP<Byte>
    permits EmptyRawSXPImpl, RawSXPImpl, ScalarRawSXP {
  @Override
  default SEXPType type() {
    return SEXPType.RAW;
  }

  @Override
  default boolean hasNaOrNaN() {
    // Raw vectors can't have `NA`, it gets coerced to 0 with a warning.
    return false;
  }

  @Override
  RawSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return RawSXP.class;
  }
}

/** Raw (byte) vector which doesn't fit any of the more specific subclasses. */
record RawSXPImpl(ImmutableList<Byte> data, @Override Attributes attributes) implements RawSXP {
  @Override
  public UnmodifiableIterator<Byte> iterator() {
    return data.iterator();
  }

  @Override
  public Byte get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(data, attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Empty byte vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyRawSXPImpl extends EmptyVectorSXPImpl<Byte> implements RawSXP {
  static final EmptyRawSXPImpl INSTANCE = new EmptyRawSXPImpl();

  private EmptyRawSXPImpl() {
    super();
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(ImmutableList.of(), attributes);
  }
}
