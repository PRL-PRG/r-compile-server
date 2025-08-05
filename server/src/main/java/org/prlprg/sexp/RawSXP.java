package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
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
final class RawSXPImpl implements RawSXP {
  private final List<Byte> data;
  private final Attributes attributes;

  RawSXPImpl(ImmutableList<Byte> data, Attributes attributes) {
    this.data = new ArrayList<>(data);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<Byte> iterator() {
    return data.iterator();
  }

  @Override
  public Byte get(int i) {
    return data.get(i);
  }

  @Override
  public void set(int i, Byte value) {
    data.set(i, value);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Simple scalar byte = raw (byte) vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
final class ScalarRawSXP extends ScalarSXPImpl<Byte> implements RawSXP {
  ScalarRawSXP(byte data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Byte value() {
    return data;
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(data, attributes);
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
