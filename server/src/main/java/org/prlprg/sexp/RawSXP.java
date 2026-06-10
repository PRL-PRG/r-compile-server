package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
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
  RawSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return RawSXP.class;
  }
}

/** Raw (byte) vector which doesn't fit any of the more specific subclasses. */
final class RawSXPImpl implements RawSXP {
  private final byte[] data;
  private final Attributes attributes;

  RawSXPImpl(byte[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<Byte> iterator() {
    // For whatever reason, there's no `Arrays#stream` for byte arrays,
    return new Iterator<>() {
      private int index = 0;

      @Override
      public boolean hasNext() {
        return index < data.length;
      }

      @Override
      public Byte next() {
        return data[index++];
      }
    };
  }

  @Override
  public Byte get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, Byte value) {
    data[i] = value;
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(data, attributes);
  }

  @Override
  public RawSXP copy() {
    return new RawSXPImpl(data, attributes);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof RawSXPImpl that)) {
      return false;
    }
    return Arrays.equals(data, that.data) && Objects.equals(attributes, that.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(Arrays.hashCode(data), attributes);
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

  @Override
  public RawSXP copy() {
    return new ScalarRawSXP(data);
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

  @Override
  public RawSXP copy() {
    return this;
  }
}
