package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SpecialSymSXP;

/** A singleton type whose only instance is the missing value. */
final class RMissingType implements RValueType {
  static final RMissingType INSTANCE = new RMissingType();

  @Override
  public SpecialSymSXP exactValue() {
    return SEXPs.MISSING_ARG;
  }

  @Override
  public BaseRType.NotPromise base() {
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
  public NoOrMaybe isMissing() {
    return NoOrMaybe.MAYBE;
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return RGenericValueType.commonIsSubset(this, other);
  }

  /** If true, in {@link RType#union(RType)} this should merge with the other type. */
  boolean shouldMergeWithGeneric(RGenericValueType other) {
    return RGenericValueType.commonIsSubset(this, other, false);
  }

  @Override
  public RValueType union(RValueType other) {
    return this == other ? this : RGenericValueType.commonUnion(this, other);
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    return other.isMissing() == NoOrMaybe.MAYBE ? this : null;
  }

  @Override
  public String toString() {
    return "miss";
  }

  private RMissingType() {
    RGenericValueType.commonSanityChecks(this);
  }
}
