package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
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
  LglSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return LglSXP.class;
  }
}

/** Logical vector which doesn't fit any of the more specific subclasses. */
final class LglSXPImpl implements LglSXP {
  private final Logical[] data;
  private final Attributes attributes;

  LglSXPImpl(Logical[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<Logical> iterator() {
    return Arrays.stream(data).iterator();
  }

  @Override
  public Logical get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, Logical value) {
    data[i] = value;
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(data, attributes);
  }

  @Override
  public LglSXP copy() {
    return new LglSXPImpl(data, attributes);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof LglSXPImpl that)) {
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

  @Override
  public LglSXP copy() {
    return new ScalarLglSXP(data);
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

  @Override
  public LglSXP copy() {
    return this;
  }
}
