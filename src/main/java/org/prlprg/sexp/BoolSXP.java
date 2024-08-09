package org.prlprg.sexp;

import org.prlprg.primitive.Logical; /** Boolean = {@code TRUE} or {@code FALSE}.
 * 
 * <p>Logical vector of size 1 with no ALTREP, ATTRIB, or OBJECT, and not {@code NA}. */
public final class BoolSXP extends ScalarLglSXP {
  static final BoolSXP TRUE = new BoolSXP(Logical.TRUE);
  static final BoolSXP FALSE = new BoolSXP(Logical.FALSE);

  private BoolSXP(Logical data) {
    super(data);
    assert data != Logical.NA;
  }

  /** {@link #value()} as a boolean instead of a logical. */
  public boolean bool() {
    return data == Logical.TRUE;
  }
}
