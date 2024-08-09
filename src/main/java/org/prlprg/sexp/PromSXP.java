package org.prlprg.sexp;

import javax.annotation.Nullable;
import org.prlprg.parseprint.Printer;

public record PromSXP(SEXP expr, SEXP val, EnvSXP env) implements SEXP {
  public PromSXP {
    if (val instanceof PromSXP) {
      throw new IllegalArgumentException("Promises cannot be nested");
    }
  }

  /** Returns the value if evaluated, otherwise {@code null}. */
  public @Nullable SEXP boundVal() {
    return val == SEXPs.UNBOUND_VALUE ? null : val;
  }

  /**
   * Whether the promise will run code when forced. Otherwise, its value is already computed.
   *
   * <p>This is the opposite of {@link #isEvaluated()}.
   */
  public boolean isLazy() {
    return val == SEXPs.UNBOUND_VALUE;
  }

  /**
   * Whether the promise's value is already computed.
   *
   * <p>This is the opposite of {@link #isLazy()}.
   */
  public boolean isEvaluated() {
    return val != SEXPs.UNBOUND_VALUE;
  }

  @Override
  public SEXPType type() {
    return SEXPType.PROM;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return PromSXP.class;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
