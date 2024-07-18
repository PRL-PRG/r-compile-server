package org.prlprg.ir.type;

import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;

/**
 * An {@link RValueType} for a runtime value which isn't guaranteed to be a:
 *
 * <ul>
 *   <li>closure
 *   <li>primitive vector
 *   <li>something else more specific
 * </ul>
 *
 * Note that the instance may be one of these, we just don't know.
 */
record RGenericValueType(
    @Override @Nullable SEXP exactValue,
    @Override BaseRType.NotPromise base,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount)
    implements RValueType {
  private static final Logger COMMON_LOG = Logger.getLogger(RValueType.class.getName());
  // Disabled in property tests where we generate weird cases
  static boolean ENABLE_WEIRD_CASE_LOGS = true;

  /** Called in the initializer of all {@link RValueType}s. */
  static void commonSanityChecks(RValueType self) {
    assert self.exactValue() == null
            || self.base() instanceof BaseRType.AnyList && self.exactValue() instanceof ListSXP
            || self.base().sexpType() == self.exactValue().type()
        : "RValueType has exact value but not exact base type: " + self;
  }

  public RGenericValueType {
    commonSanityChecks(this);
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
    return new RGenericValueType(
        value, base, AttributesTypes.exact(value.attributes()), MaybeNat.UNKNOWN);
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return genericIsSubset(this, other);
  }

  static boolean genericIsSubset(RValueType self, RValueType other) {
    if (other.exactValue() != null) {
      return self.exactValue() != null && self.exactValue().equals(other.exactValue());
    }
    return self.base().isSubsetOf(other.base())
        && self.attributes().isSubsetOf(other.attributes())
        && self.referenceCount().isSubsetOf(other.referenceCount());
  }

  @Override
  public RValueType union(RValueType other) {
    return genericUnion(this, other);
  }

  static RValueType genericUnion(RValueType self, RValueType other) {
    if (self.exactValue() != null && self.exactValue().equals(other.exactValue())) {
      return self;
    }

    return new RGenericValueType(
        null,
        self.base().union(other.base()),
        self.attributes().union(other.attributes()),
        self.referenceCount().union(other.referenceCount()));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    // If `other` is a specific type, the intersection will be, so we need to call the other's
    // method (or implement every subtype case here; calling the other method is easier).
    return other instanceof RGenericValueType
        ? genericIntersection(this, other)
        : other.intersection(this);
  }

  static @Nullable RValueType genericIntersection(RValueType self, RValueType other) {
    // Handles this case in child classes
    if (!(self instanceof RGenericValueType)
        && !(other instanceof RGenericValueType)
        && self.getClass() != other.getClass()) {
      return null;
    }

    if (self.exactValue() != null && self.exactValue().equals(other.exactValue())) {
      return self;
    } else if (self.exactValue() != null && other.exactValue() != null) {
      if (ENABLE_WEIRD_CASE_LOGS) {
        COMMON_LOG.warning(
            "Intersection of two different exact values, can this happen? "
                + self.exactValue()
                + " and "
                + other.exactValue());
      }
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

    return new RGenericValueType(
        mergedExactValue, mergedBase, mergedAttributes, mergedReferenceCount);
  }

  @Override
  public String toString() {
    var sb = commonToStringStart(this);
    if (exactValue != null) {
      return sb.toString();
    }
    if (!base.equals(BaseRType.ANY)) {
      sb.append(base);
    }
    return sb.toString();
  }

  static StringBuilder commonToStringStart(RValueType self) {
    var sb = new StringBuilder();
    if (!self.referenceCount().equals(MaybeNat.UNKNOWN)) {
      sb.append("#").append(self.referenceCount());
    }
    if (self.exactValue() != null) {
      sb.append("{").append(self.exactValue()).append("}");
    } else if (!self.attributes().equals(AttributesTypes.UNKNOWN)) {
      sb.append("[").append(self.attributes()).append("]");
    }
    return sb;
  }
}
