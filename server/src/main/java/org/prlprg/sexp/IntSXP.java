package org.prlprg.sexp;

import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;

/** Integer vector SEXP. */
@Immutable
public sealed interface IntSXP extends NumericSXP<Integer>
    permits EmptyIntSXPImpl, IntSXPImpl, ScalarIntSXP {
  /**
   * The data contained in this vector. Note that if it's an empty or scalar, those aren't actually
   * backed by an array, so this gets created and returns every access.
   */
  int[] data();

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
  IntSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return IntSXP.class;
  }
}

/** Int vector which doesn't fit any of the more specific subclasses. */
record IntSXPImpl(int[] data, Attributes attributes) implements IntSXP {
  IntSXPImpl(int[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Iterator<Integer> iterator() {
    return Arrays.stream(data).iterator();
  }

  @Override
  public Integer get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, Integer value) {
    data[i] = value;
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(data, attributes);
  }

  @Override
  public IntSXP copy() {
    return new IntSXPImpl(data, attributes);
  }

  @Override
  public int asInt(int index) {
    return data[index];
  }

  @Override
  public double asReal(int index) {
    return data[index];
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof IntSXPImpl(var data1, var attributes1))) {
      return false;
    }
    return Arrays.equals(data, data1) && Objects.equals(attributes, attributes1);
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
  public int[] data() {
    return new int[] {data};
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

  @Override
  public IntSXP copy() {
    return new ScalarIntSXP(data);
  }
}

/** Empty int vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyIntSXPImpl extends EmptyVectorSXPImpl<Integer> implements IntSXP {
  static final EmptyIntSXPImpl INSTANCE = new EmptyIntSXPImpl();

  private EmptyIntSXPImpl() {
    super();
  }

  @Override
  public int[] data() {
    return new int[0];
  }

  @Override
  public IntSXP withAttributes(Attributes attributes) {
    return SEXPs.integer(new int[0], attributes);
  }

  @Override
  public int asInt(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }

  @Override
  public double asReal(int index) {
    throw new ArrayIndexOutOfBoundsException("Empty int vector");
  }

  @Override
  public IntSXP copy() {
    return this;
  }
}
