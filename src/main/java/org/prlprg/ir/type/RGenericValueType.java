package org.prlprg.ir.type;

import java.util.Objects;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * An {@link RType} which isn't guaranteed to be a:
 *
 * <ul>
 *   <li>closure
 *   <li>primitive vector
 *   <li>missing value
 * </ul>
 *
 * Note that the {@link RType} may be one of these, we just don't know.
 */
record RGenericValueType(
    @Override @Nullable SEXP exactValue,
    @Override BaseRType.NotPromise base,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override NoOrMaybe isMissing)
    implements RValueType {
  private static final Logger COMMON_LOG = Logger.getLogger(RValueType.class.getName());

  public RGenericValueType {
    // Some sanity checks, since we have parallel representations
    // (though we don't check for SEXPs that need specific types, because those create generic types
    //  to reuse the subset/union/intersection code)
    assert exactValue == null
        || base instanceof BaseRType.AnyList && exactValue instanceof ListSXP
        || base.sexpType() == exactValue.type();
  }

  /**
   * Returns the most precise type this SEXP is an instance of, <b>unless</b> it can be an instance
   * of a specific {@link RValueType} (that is, the most precise type {@link RGenericValueType} is
   * capable of holding).
   *
   * @throws IllegalArgumentException if {@code value} is a promise.
   */
  static RGenericValueType exact(SEXP value) {
    if (!(BaseRType.of(value.type()) instanceof BaseRType.NotPromise base)) {
      throw new IllegalArgumentException(
          "Value is a promise, should be represented in RPromiseType: " + value);
    }
    // Some sanity checks, since we have parallel representations
    assert !(base instanceof BaseRType.Closure) : "should be RClosureTypeImpl";
    assert !(base instanceof BaseRType.Vector(var elem) && elem.isPrimitive() == Troolean.YES)
        : "should be RPrimVecTypeImpl";
    assert value != SEXPs.MISSING_ARG : "should be RMissingOrTypeImpl";
    return new RGenericValueType(
        value, base, AttributesTypes.exact(value.attributes()), MaybeNat.UNKNOWN, NoOrMaybe.NO);
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return commonIsSubset(this, other);
  }

  static boolean commonIsSubset(RValueType self, RValueType other) {
    if (other.exactValue() != null) {
      return self.exactValue() != null && self.exactValue().equals(other.exactValue());
    }
    return self.base().isSubsetOf(other.base())
        && self.attributes().isSubsetOf(other.attributes())
        && self.referenceCount().isSubsetOf(other.referenceCount());
  }

  @Override
  public RValueType union(RValueType other) {
    return commonUnion(this, other);
  }

  static RValueType commonUnion(RValueType self, RValueType other) {
    if (Objects.equals(self.exactValue(), other.exactValue())) {
      return self;
    }

    return new RGenericValueType(
        null,
        self.base().union(other.base()),
        self.attributes().union(other.attributes()),
        self.referenceCount().union(other.referenceCount()),
        self.isMissing().union(other.isMissing()));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    return commonIntersection(this, other);
  }

  static @Nullable RValueType commonIntersection(RValueType self, RValueType other) {
    // Handles this case in child classes
    if (!(self instanceof RGenericValueType)
        && !(other instanceof RGenericValueType)
        && self.getClass() != other.getClass()) {
      return null;
    }

    if (Objects.equals(self.exactValue(), other.exactValue())) {
      return self;
    } else if (self.exactValue() != null && other.exactValue() != null) {
      COMMON_LOG.warning(
          "Intersection of two different exact values, can this happen? "
              + self.exactValue()
              + " and "
              + other.exactValue());
      return null;
    }
    var mergedExactValue = self.exactValue() != null ? self.exactValue() : other.exactValue();
    var mergedBase = self.base().intersection(other.base());
    if (mergedBase == null) {
      return null;
    }
    var mergedAttributes = self.attributes().intersection(other.attributes());
    if (mergedAttributes == null) {
      return null;
    }
    var mergedReferenceCount = self.referenceCount().intersection(other.referenceCount());
    if (mergedReferenceCount == null) {
      return null;
    }
    var mergedIsMissing = self.isMissing().intersection(other.isMissing());

    return new RGenericValueType(
        mergedExactValue, mergedBase, mergedAttributes, mergedReferenceCount, mergedIsMissing);
  }

  @Override
  public String toString() {
    var sb = commonToStringStart(this);
    if (!base.equals(BaseRType.ANY)) {
      sb.append(base);
    }
    return sb.toString();
  }

  static StringBuilder commonToStringStart(RValueType self) {
    var sb = new StringBuilder();
    if (!self.attributes().equals(AttributesTypes.UNKNOWN)) {
      sb.append("[").append(self.attributes()).append("]");
    }
    if (!self.referenceCount().equals(MaybeNat.UNKNOWN)) {
      sb.append("{").append(self.referenceCount()).append("}");
    }
    return sb;
  }
}
