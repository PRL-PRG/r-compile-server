package org.prlprg.ir.type;

import java.util.Objects;
import java.util.logging.Logger;
import javax.annotation.Nullable;
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
record RGenericSexpType(
    @Override @Nullable SEXP exactValue,
    @Override BaseRType base,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount)
    implements RSexpType {
  private static final Logger COMMON_LOG = Logger.getLogger(RSexpType.class.getName());

  public RGenericSexpType {
    // Some sanity checks, since we have parallel representations
    assert exactValue == null || base.sexpType() == exactValue.type();
    assert !(base instanceof BaseRType.Closure) : "should be RClosureTypeImpl";
    assert !(base instanceof BaseRType.Vector(var elem) && elem.isPrimitive() == Troolean.YES)
        : "should be RPrimVecTypeImpl";
    assert exactValue != SEXPs.MISSING_ARG : "should be RMissingOrTypeImpl";
  }

  /**
   * Returns the most precise type this SEXP is an instance of, <b>unless</b> it can be an instance
   * of a specific {@link RSexpType} (that is, the most precise type {@link RGenericSexpType} is
   * capable of holding).
   */
  static RGenericSexpType exact(SEXP value) {
    return new RGenericSexpType(
        value,
        BaseRType.of(value.type()),
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN);
  }

  @Override
  public boolean isSubsetOf(RSexpType other) {
    return commonIsSubset(this, other);
  }

  static boolean commonIsSubset(RSexpType self, RSexpType other) {
    if (other.exactValue() != null) {
      return self.exactValue() != null && self.exactValue().equals(other.exactValue());
    }
    return self.base().isSubsetOf(other.base())
        && self.attributes().isSubsetOf(other.attributes())
        && self.referenceCount().isSubsetOf(other.referenceCount());
  }

  @Override
  public RSexpType union(RSexpType other) {
    return commonUnion(this, other);
  }

  static RSexpType commonUnion(RSexpType self, RSexpType other) {
    if (Objects.equals(self.exactValue(), other.exactValue())) {
      return self;
    }

    return new RGenericSexpType(
        null,
        self.base().union(other.base()),
        self.attributes().union(other.attributes()),
        self.referenceCount().union(other.referenceCount()));
  }

  @Override
  public @Nullable RSexpType intersection(RSexpType other) {
    return commonIntersection(this, other);
  }

  static @Nullable RSexpType commonIntersection(RSexpType self, RSexpType other) {
    // Handles this case in child classes
    if (!(self instanceof RGenericSexpType)
        && !(other instanceof RGenericSexpType)
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

    return new RGenericSexpType(
        mergedExactValue, mergedBase, mergedAttributes, mergedReferenceCount);
  }

  @Override
  public String toString() {
    var sb = commonToStringStart(this);
    if (!base.equals(BaseRType.ANY)) {
      sb.append(base);
    }
    return sb.toString();
  }

  static StringBuilder commonToStringStart(RSexpType self) {
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
