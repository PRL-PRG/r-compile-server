package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * The type of a possibly-missing, possibly-partly-known value; {@link RAnyType} is a
 * partially-missing type where even if the type isn't missing we still don't have other useful
 * information. If we have specific information on a value if it's not missing, but don't know that
 * it's not missing, the value will have this type.
 */
public sealed interface RMissingOrType extends RType {
  @Override
  @Nullable BaseRType base();

  @Override
  @Nullable AttributesType attributes();

  /** The type assuming it's not missing. */
  RType notMissing();
}

record RMissingOrTypeImpl(@Override RType notMissing) implements RMissingOrType {
  public RMissingOrTypeImpl {
    assert !(notMissing instanceof RAnyType) : "Represent missingOr(any) via any";
    assert !(notMissing instanceof RMissingOrType)
        : "Represent missingOr(missingOr(...)) via missingOr(...)";
  }

  @Nullable @Override
  public SEXP exactValue() {
    return notMissing instanceof RNothingType ? SEXPs.MISSING_ARG : null;
  }

  @Override
  public BaseRType base() {
    return notMissing instanceof RNothingType ? new BaseRType.Symbol() : new BaseRType.Any();
  }

  @Override
  public AttributesType attributes() {
    var innerAttributes = notMissing.attributes();
    return innerAttributes == null
        ? AttributesTypes.NONE
        : innerAttributes.union(AttributesType.NONE);
  }

  @Override
  public MaybeNat referenceCount() {
    return MaybeNat.UNKNOWN;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return switch (other) {
      case RAnyType ignored -> true;
      case RMissingOrType o -> notMissing.isSubsetOf(o.notMissing());
      default -> false;
    };
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return switch (other) {
      case RAnyType ignored -> false;
      case RNothingType ignored -> true;
      case RMissingOrType o -> notMissing.isSupersetOf(o.notMissing());
      default -> notMissing.isSupersetOf(other);
    };
  }

  @Override
  public RType union(RType other) {
    return switch (other) {
      case RNothingType ignored -> this;
      case RAnyType ignored -> other;
      case RMissingOrType o -> RTypes.missingOr(notMissing.union(o.notMissing()));
      default -> RTypes.missingOr(notMissing.union(other));
    };
  }

  @Nonnull
  @Override
  public RType intersection(RType other) {
    return switch (other) {
      case RAnyType ignored -> this;
      case RNothingType ignored -> other;
      case RMissingOrType o -> new RMissingOrTypeImpl(notMissing.intersection(o.notMissing()));
      default -> notMissing.intersection(other);
    };
  }
}
