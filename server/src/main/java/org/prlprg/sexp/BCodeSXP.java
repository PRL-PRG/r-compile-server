package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;
import org.prlprg.bc.Bc;
import org.prlprg.parseprint.Printer;

/** GNU-R compiled code SEXP, such as a promise or closure body. */
@Immutable
public sealed interface BCodeSXP extends SEXP {

  /** The typed compiled code. */
  Bc bc();

  @Override
  default SEXPType type() {
    return SEXPType.BCODE;
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return BCodeSXP.class;
  }
}

record BCodeSXPImpl(Bc bc) implements BCodeSXP {
  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
