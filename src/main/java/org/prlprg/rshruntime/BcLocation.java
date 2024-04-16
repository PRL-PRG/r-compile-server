package org.prlprg.rshruntime;

import org.prlprg.sexp.BCodeSXP;

public record BcLocation(BCodeSXP code, int offset) {
  @Override
  public String toString() {
    return code + "+" + offset;
  }
}
