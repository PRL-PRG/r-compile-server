package org.prlprg.ir.type;

import java.util.Objects;
import java.util.logging.Logger;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * An {@link RType} which isn't:
 *
 * <ul>
 *   <li>any (no known useful information)
 *   <li>nothing
 *   <li>known closure
 *   <li>known primitive vector
 *   <li>missing or not-any (possibly missing or {@link ROtherType})
 */
public sealed interface ROtherType extends RType {
  @Override
  @Nonnull
  BaseRType base();

  @Override
  @Nonnull
  AttributesType attributes();
}

record ROtherTypeImpl(
    @Override @Nullable SEXP exactValue,
    @Override BaseRType base,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount)
    implements ROtherType {
  private static final Logger LOG = Logger.getLogger(ROtherTypeImpl.class.getName());

  public ROtherTypeImpl {
    // Some sanity checks, since we have parallel representations
    assert exactValue == null || base.sexpType() == exactValue.type();
    assert !(base instanceof BaseRType.Closure) : "should be RClosureTypeImpl";
    assert !(base instanceof BaseRType.Vector(var elem) && elem.isPrimitive() == Troolean.YES)
        : "should be RPrimVecTypeImpl";
    assert exactValue != SEXPs.MISSING_ARG : "should be RMissingOrTypeImpl";
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return switch (other) {
      case RAnyType ignored -> true;
      case ROtherTypeImpl o -> {
        if (o.exactValue != null) {
          yield exactValue != null && exactValue.equals(o.exactValue);
        }
        yield base.isSubsetOf(o.base)
            && attributes.isSubsetOf(o.attributes)
            && referenceCount.isSubsetOf(o.referenceCount);
      }
      default -> false;
    };
  }

  @Override
  public RType union(RType other) {
    switch (other) {
      case RAnyType ignored -> {
        return RTypes.NOTHING;
      }
      case RNothingType ignored -> {
        return this;
      }
      case RMissingOrType o -> {
        return RTypes.missingOr(union(o.notMissing()));
      }
      default -> {}
    }
    if (Objects.equals(other.exactValue(), exactValue())) {
      return this;
    }

    return new ROtherTypeImpl(
        exactValue(),
        base().union(other.base()),
        attributes().union(other.attributes()),
        referenceCount().union(other.referenceCount()));
  }

  @Override
  public RType intersection(RType other) {
    // TODO: refactor this as well as other code
    switch (other) {
      case RAnyType ignored -> {
        return this;
      }
      case RNothingType ignored -> {
        return RTypes.NOTHING;
      }
      case RMissingOrType o -> {
        return RTypes.missingOr(intersection(o.notMissing()));
      }
      default -> {}
    }
    if (Objects.equals(other.exactValue(), exactValue())) {
      return this;
    } else if (other.exactValue() != null && exactValue() != null) {
      return RTypes.NOTHING;
    }
    var mergedAttributes = attributes().intersection(other.attributes());
    if (mergedAttributes == null) {
      return RTypes.NOTHING;
    }
    var mergedReferenceCount = referenceCount().intersection(other.referenceCount());
    if (mergedReferenceCount == null) {
      return RTypes.NOTHING;
    }

    return new ROtherTypeImpl(
        exactValue(), base().union(other.base()), mergedAttributes, mergedReferenceCount);
  }

  @Override
  public boolean equals(Object obj) {
    if (!(obj instanceof RType r)) {
      return false;
    }
    return isSubsetOf(r) && r.isSubsetOf(this);
  }

  @Override
  public int hashCode() {
    // Too complicated to generate a decent hash where equals implies hashCode.equals
    return 0;
  }

  @Override
  public String toString() {
    if (exactValue != null) {
      return exactValue.toString();
    }
    return "" + flags + (closure != null ? closure : base);
  }
}
