package org.prlprg.rshruntime;

import org.prlprg.sexp.BCodeSXP;

record FeedbackOrigin(BCodeSXP code, int offset) {

  @Override
  public String toString() {
    return code + "+" + offset;
  }
}
