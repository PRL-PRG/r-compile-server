package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterators;
import com.google.common.collect.UnmodifiableIterator;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nonnull;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

/** Generic vector SEXP = vector which contains SEXPs. */
public sealed interface VecSXP extends VectorSXP<SEXP> {
  @Override
  default SEXPType type() {
    return SEXPType.VEC;
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return VecSXP.class;
  }

  @Override
  VecSXP withAttributes(Attributes attributes);
}

final class VecSXPImpl implements VecSXP {
  private final List<SEXP> data;
  private final Attributes attributes;

  VecSXPImpl(ImmutableList<SEXP> data, Attributes attributes) {
    this.data = new ArrayList<>(data);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<SEXP> iterator() {
    return data.iterator();
  }

  @Override
  public SEXP get(int i) {
    return data.get(i);
  }

  @Override
  public void set(int i, SEXP value) {
    data.set(i, value);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public VecSXP withAttributes(Attributes attributes) {
    return SEXPs.vec(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Class for representing a scalar SEXP of a primitive type with no attributes. */
@Immutable
abstract class ScalarSXPImpl<T> {
  final T data;

  protected ScalarSXPImpl(T data) {
    this.data = data;
  }

  public UnmodifiableIterator<T> iterator() {
    return Iterators.forArray(data);
  }

  public T get(int i) {
    if (i != 0) {
      throw new IndexOutOfBoundsException();
    }
    return data;
  }

  public void set(int i, T value) {
    throw new UnsupportedOperationException("Cannot modify scalar SEXP");
  }

  public int size() {
    return 1;
  }

  public @Nonnull Attributes attributes() {
    return Attributes.NONE;
  }

  // @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof ScalarSXPImpl<?> that)) return false;
    return Objects.equals(data, that.data);
  }

  // @Override
  public int hashCode() {
    return Objects.hash(data);
  }

  // @Override
  public String toString() {
    return Printer.toString(this);
  }
}

/** Class for representing a scalar SEXP of a primitive type with no attributes. */
@Immutable
abstract class EmptyVectorSXPImpl<T> {
  protected EmptyVectorSXPImpl() {}

  // @Override
  public UnmodifiableIterator<T> iterator() {
    return Iterators.forArray();
  }

  // @Override
  public T get(int i) {
    throw new IndexOutOfBoundsException();
  }

  // @Override
  public void set(int i, T value) {
    throw new IndexOutOfBoundsException("Cannot set element in empty vector");
  }

  // @Override
  public int size() {
    return 0;
  }

  // @Override
  public @Nonnull Attributes attributes() {
    return Attributes.NONE;
  }

  // @Override
  public String toString() {
    return Printer.toString(this);
  }
}
