package org.prlprg.sexp;

public final class PromSXP implements SEXP {
  private final SEXP expr;
  private final SEXP val;
  private final EnvSXP env;

  public PromSXP(SEXP expr, SEXP val, EnvSXP env) {
    this.expr = expr;
    this.val = val;
    this.env = env;
  }

  public SEXP getExpr() {
    return expr;
  }

  public SEXP getVal() {
    return val;
  }

  public EnvSXP getEnv() {
    return env;
  }

  /** Whether the promise will run code when forced. Otherwise, its value is already computed. */
  public boolean isLazy() {
    return val == SEXPs.UNBOUND_VALUE;
  }

  @Override
  public SEXPType type() {
    return SEXPType.PROM;
  }
}
