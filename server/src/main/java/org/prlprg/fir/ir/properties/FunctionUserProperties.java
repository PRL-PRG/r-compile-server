package org.prlprg.fir.ir.properties;

public class FunctionUserProperties {
  private boolean strict = false;
  private boolean liteSpecial = false;
  private boolean readsContext = false;
  private boolean needsContext = false;

  public boolean strict() {
    return strict;
  }

  public void setStrict(boolean strict) {
    this.strict = strict;
  }

  /// Whether the function is a "lite special": it may be called with literal AST as arguments, but
  /// a non-reflective version takes them evaluated, like a builtin.
  public boolean liteSpecial() {
    return liteSpecial;
  }

  public void setLiteSpecial(boolean liteSpecial) {
    this.liteSpecial = liteSpecial;
  }

  /// Whether the function (a builtin) reads the closure context of its caller, e.g. `UseMethod`
  /// or `sys.function`.
  public boolean readsContext() {
    return readsContext;
  }

  public void setReadsContext(boolean readsContext) {
    this.readsContext = readsContext;
  }

  /// Whether a call of the function must run inside a GNU-R closure context for the callee's
  /// frame, because the function calls a [#readsContext()] function. Such calls go through
  /// `Rf_applyClosure`, so they can only call versions that a call from R can.
  public boolean needsContext() {
    return needsContext;
  }

  public void setNeedsContext(boolean needsContext) {
    this.needsContext = needsContext;
  }
}
