package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

public final class RNothingType implements RType {
  RNothingType() {}

  @Override
  public @Nullable SEXP exactValue() {
    return null;
  }

  @Override
  public @Nullable BaseRType base() {
    return null;
  }

  @Override
  public @Nullable AttributesType attributes() {
    return null;
  }

  @Override
  public MaybeNat referenceCount() {
    return MaybeNat.of(0);
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return other instanceof RNothingType;
  }

  @Override
  public RType union(RType other) {
    return other;
  }

  @Override
  public RType intersection(RType other) {
    return this;
  }

  @Override
  public String toString() {
    return "⊥";
  }
}
