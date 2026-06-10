package org.prlprg.sexp;

import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

/**
 * R expression vector.
 *
 * <p>Immutable because we assume it can't contain environments or any other mutable SEXPs.
 */
@Immutable
public sealed interface ExprSXP extends VectorSXP<SEXP> {
  @Override
  default SEXPType type() {
    return SEXPType.EXPR;
  }

  @Override
  ExprSXP withAttributes(Attributes attributes);

  @Override
  ExprSXP copy();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return ExprSXP.class;
  }
}

final class ExprSXPImpl implements ExprSXP {
  private final SEXP[] data;
  private final Attributes attributes;

  ExprSXPImpl(SEXP[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public Iterator<SEXP> iterator() {
    return Arrays.stream(data).iterator();
  }

  @Override
  public SEXP get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, SEXP value) {
    data[i] = value;
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public ExprSXP withAttributes(Attributes attributes) {
    return SEXPs.expr(data, attributes);
  }

  @Override
  public ExprSXP copy() {
    return new ExprSXPImpl(data, attributes);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof ExprSXPImpl that)) {
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
