package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
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
  default Class<? extends SEXP> getCanonicalType() {
    return ExprSXP.class;
  }
}

record ExprSXPImpl(ImmutableList<SEXP> data, @Override Attributes attributes) implements ExprSXP {
  @Override
  public UnmodifiableIterator<SEXP> iterator() {
    return data.iterator();
  }

  @Override
  public SEXP get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public ExprSXP withAttributes(Attributes attributes) {
    return SEXPs.expr(data, attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
