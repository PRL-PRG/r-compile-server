package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
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
  private final List<SEXP> data;
  private final Attributes attributes;

  ExprSXPImpl(ImmutableList<SEXP> data, Attributes attributes) {
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
  public ExprSXP withAttributes(Attributes attributes) {
    return SEXPs.expr(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public ExprSXP copy() {
    return new ExprSXPImpl(ImmutableList.copyOf(data), attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
