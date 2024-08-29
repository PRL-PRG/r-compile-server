package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.sexp.AttributesType;
import org.prlprg.ir.type.sexp.RPromiseType;
import org.prlprg.ir.type.sexp.RSexpType;
import org.prlprg.ir.type.sexp.RValueType;

public final class RNothingType implements RSexpType {
  @SuppressWarnings("ConstantValue")
  RNothingType() {
    assert NOTHING == null || NOTHING == this
        : "`RType#NOTHING` should be the only `RNothingType` instance";
  }

  @Override
  public @Nullable Class<? extends org.prlprg.sexp.SEXP> clazz() {
    return null;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return other == NOTHING;
  }

  @Override
  public RType unionOf(RType other) {
    return other;
  }

  @Override
  public RNothingType intersectionOf(RType other) {
    return this;
  }

  @Override
  public RValueType value() {
    return RValueType.NOTHING;
  }

  @Override
  public AttributesType attributes() {
    return AttributesType.BOTTOM;
  }

  @Nullable @Override
  public RPromiseType promise() {
    return null;
  }

  @Nullable @Override
  public Maybe isMissing() {
    return null;
  }
}
