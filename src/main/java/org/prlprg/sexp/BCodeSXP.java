package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;
import org.prlprg.bc.Bc;

/** GNU-R compiled code SEXP, such as a promise or closure body. */
@Immutable
public sealed interface BCodeSXP extends SEXP {

  /**
   * The typed compiled code.
   *
   * <p>TODO will be refactored so BCodeSXP stores raw data and can generate this, the method will
   * be named something like {@code getBc()} or {@code generateBc()} to make it clear that this is a
   * more expensive operation than a virtual getter.
   */
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
    return SEXPs.toString(this, bc());
  }
}
