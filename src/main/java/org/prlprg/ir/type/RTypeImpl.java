package org.prlprg.ir.type;

import java.util.Objects;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

record RTypeImpl(
    @Override @Nullable SEXP exactValue,
    @Override RBaseType base,
    @Override @Nullable RClosureType closure,
    @Override RTypeFlags flags)
    implements RType {
  private static final Logger LOG = Logger.getLogger(RTypeImpl.class.getName());

  public RTypeImpl {
    // Some sanity checks, since we have parallel representations
    assert closure == null || base instanceof RBaseType.Closure;
    assert exactValue == null || base.sexpType() == exactValue.type();
    assert !(exactValue instanceof CloSXP) || closure != null;
    assert exactValue != SEXPs.MISSING_ARG || flags.isMissing() == NoOrMaybe.MAYBE;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return switch (other) {
      case RTypeNothing ignored -> false;
      case RTypeAny ignored -> true;
      case RTypeImpl o -> {
        if (o.exactValue != null) {
          yield exactValue != null && exactValue.equals(o.exactValue);
        }
        yield base.isSubsetOf(o.base)
            && (o.closure == null || (closure != null && closure.isSubsetOf(o.closure)))
            && flags.isSubsetOf(o.flags);
      }
    };
  }

  @Override
  public RType union(RType other) {
    return switch (other) {
      case RTypeNothing ignored -> this;
      case RTypeAny ignored -> other;
      case RTypeImpl o ->
          new RTypeImpl(
              Objects.equals(exactValue, o.exactValue) ? exactValue : null,
              base.union(o.base),
              closure == null || o.closure == null ? null : closure.union(o.closure),
              flags.union(o.flags));
    };
  }

  @Override
  public RType intersection(RType other) {
    return switch (other) {
      case RTypeNothing ignored -> other;
      case RTypeAny ignored -> this;
      case RTypeImpl o -> {
        if (exactValue != null && o.exactValue != null && !exactValue.equals(o.exactValue)) {
          // This is what it should return in theory, but in practice I can't think of any case
          // where this happens.
          LOG.warning(
              "Intersection of two RTypes with different exact values: " + this + " and " + o);
          yield RTypes.NOTHING;
        }
        var exactValue = exactValue() != null ? exactValue() : o.exactValue;
        var base = base().intersection(o.base);
        if (base == null) {
          yield RTypes.NOTHING;
        }
        var closure =
            closure() == null
                ? o.closure
                : o.closure == null ? closure() : closure().intersection(o.closure);
        var flags = flags().intersection(o.flags);
        yield new RTypeImpl(exactValue, base, closure, flags);
      }
    };
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

final class RTypeNothing implements RType {
  @Override
  public @Nullable SEXP exactValue() {
    return null;
  }

  @Override
  public @Nullable RBaseType base() {
    return null;
  }

  @Override
  public @Nullable RClosureType closure() {
    return null;
  }

  @Override
  public RTypeFlags flags() {
    return RTypeFlags.BOTTOM;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return other.base() == null;
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
    return "⊥";
  }
}

final class RTypeAny implements RType {
  @Override
  public @Nullable SEXP exactValue() {
    return null;
  }

  @Override
  public RBaseType base() {
    return new RBaseType.Any();
  }

  @Override
  public @Nullable RClosureType closure() {
    return null;
  }

  @Override
  public RTypeFlags flags() {
    return RTypeFlags.TOP;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return Objects.equals(other.base(), new RBaseType.Any());
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
    return "⊤";
  }
}
