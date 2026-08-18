package org.prlprg.fir.ir.properties;

public class FunctionUserProperties {
  private boolean strict = false;
  private boolean liteSpecial = false;

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
}
