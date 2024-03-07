package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SpecialSymSXP;

/** A singleton type whose only instance is the missing value. */
final class RMissingType implements RSexpType {
  static final RMissingType INSTANCE = new RMissingType();

  @Override
  public SpecialSymSXP exactValue() {
    return SEXPs.MISSING_ARG;
  }

  @Override
  public BaseRType base() {
    return BaseRType.SYMBOL;
  }

  @Override
  public AttributesType attributes() {
    return AttributesTypes.NONE;
  }

  @Override
  public MaybeNat referenceCount() {
    return MaybeNat.UNKNOWN;
  }

  @Override
  public boolean isSubsetOf(RSexpType other) {
    return this == other;
  }

  @Override
  public RSexpType union(RSexpType other) {
    return this == other ? this : RGenericSexpType.commonUnion(this, other);
  }

  @Override
  public @Nullable RSexpType intersection(RSexpType other) {
    return this == other ? this : null;
  }

  @Override
  public String toString() {
    return "miss";
  }

  private RMissingType() {}
}
