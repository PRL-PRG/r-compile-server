package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

public final class RAnyType implements RType {
  RAnyType() {}

  @Override
  public @Nullable SEXP exactValue() {
    return null;
  }

  @Override
  public BaseRType base() {
    return new BaseRType.Any();
  }

  @Override
  public AttributesType attributes() {
    return AttributesTypes.UNKNOWN;
  }

  @Override
  public MaybeNat referenceCount() {
    return MaybeNat.UNKNOWN;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return other instanceof RAnyType;
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return true;
  }

  @Override
  public RType union(RType other) {
    return this;
  }

  @Override
  public RType intersection(RType other) {
    return other;
  }

  @Override
  public String toString() {
    return "⊤";
  }
}
