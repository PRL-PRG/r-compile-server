package org.prlprg.ir.type;

import org.prlprg.sexp.SEXPType;

public final class RStrType extends RPrimVectorType implements RStrOrRegSymType {
  public static final RStrType ANY = new RStrType();

  @Override
  public SEXPType sexpType() {
    return SEXPType.STR;
  }
}
