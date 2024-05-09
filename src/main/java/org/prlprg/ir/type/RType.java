package org.prlprg.ir.type;

import java.util.Objects;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.type.BaseRType.Promise;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;

/**
 * {@link RValue} type; a runtime value's ({@link SEXP})'s type, with information relevant to
 * perform optimizations (e.g. compile unboxed representations if scalar). Not to be confused with
 * {@link SEXPType}.
 *
 * <p>It consists of an {@link RValueType} which is the type of of the inner value (e.g. function),
 * an {@link RPromiseType} which determines whether or not the inner value is wrapped in a promise
 * and whether or not said promise is lazy, and a {@link Troolean} which determines whether the
 * value is maybe missing (irregardless if it's in a promise, because a promise containing the
 * missing value is semantically equivalent to the missing value itself). The added layer of {@link
 * RType} over {@link RValueType} prevents trying to access value type properties of a maybe-promise
 * or maybe-missing type. "Nothing" is a special case which has {@code null} {@link RValueType} and
 * {@link RPromiseType}. "Any" has a generic {@link RValueType} and "maybe lazy, maybe promise
 * wrapped" {@link RPromiseType}.
 *
 * <p>See {@link RTypes} for all globals and constructors.
 */
@Immutable
public final class RType implements BoundedLattice<RType> {
  /**
   * The type of the value possibly within a promise and assuming it's not missing. {@code null} if
   * this is the missing value or nothing type.
   */
  private final @Nullable RValueType inner;

  /**
   * Whether this is maybe or definitely a promise, and if so, laziness and potentially exact
   * promise value {@code null} if this is the nothing type.
   */
  private final @Nullable RPromiseType promise;

  /**
   * Whether the value itself may be or is missing. {@code null} if this is the nothing type.
   *
   * <p>Note that the value may be a promise. The missing value inside a promise is semantically
   * identical to the regular missing value, because `chk_missing` forces it.
   */
  private final @Nullable Troolean missing;

  // region `RType` specific methods
  /**
   * Whether this is maybe or definitely a promise, and if so, laziness and potentially exact
   * promise value. {@code null} if this is the nothing type.
   */
  public @Nullable PromiseRType promise() {
    return promise == null ? null : promise.promiseType();
  }

  /**
   * Whether the value itself may be or is missing. {@code null} if this is the nothing type.
   *
   * <p>Note that the value may be a promise. The missing value inside a promise is semantically
   * identical to the regular missing value, because `chk_missing` forces it.
   */
  public @Nullable Troolean missing() {
    return missing;
  }

  /**
   * If this type is maybe or definitely a lazy promise, returns the non-lazy equivalent. Otherwise
   * returns itself (including if this is the nothing type).
   */
  public RType strict() {
    return promise == null || promise.isLazy() == Troolean.NO
        ? this
        : new RType(inner, promise.strict(), missing);
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  public RType notStrict() {
    return promise == null || promise.isLazy() != Troolean.NO
        ? this
        : new RType(inner, promise.notStrict(), missing);
  }

  /**
   * If this type is maybe or definitely a promise, returns the inner value type. Otherwise returns
   * itself (including if this is the nothing type).
   */
  public RType forced() {
    return promise == null || promise.isPromise() == Troolean.NO
        ? this
        : new RType(inner, RPromiseType.VALUE, missing);
  }

  /**
   * If this type is a value, returns a maybe-strict-promise. Otherwise returns itself (including if
   * this is the nothing type).
   */
  public RType promiseWrapped() {
    return promise == null || promise.isPromise() != Troolean.NO
        ? this
        : new RType(inner, RPromiseType.STRICT_PROMISE, missing);
  }

  /**
   * Returns the same value type but with different promise wrapping. Returns itself if itself is
   * the nothing type.
   */
  RType promiseWrapped(RPromiseType promise) {
    return this.promise == null || this.promise.equals(promise)
        ? this
        : new RType(inner, promise, missing);
  }

  /** If the type is maybe or definitely missing, returns the non-missing equivalent. */
  public RType notMissing() {
    return missing == null || missing == Troolean.NO
        ? this
        : new RType(inner, promise, Troolean.NO);
  }

  /** Returns the maybe-missing equivalent of this type. */
  public RType maybeMissing() {
    return missing == null || missing == Troolean.MAYBE
        ? this
        : new RType(inner, promise, Troolean.MAYBE);
  }

  /**
   * Whether this is the nothing type, which means an instance will never exist, and any code which
   * would produce an instance actually either crashes, hangs, or otherwise diverts control flow.
   */
  public boolean isNothing() {
    return missing == null;
  }

  /** Whether this is the any type, which means it's completely unconstrained. */
  public boolean isAny() {
    return equals(RTypes.ANY);
  }

  // region helpers
  /** Is the type a lazy promise? Returns {@code null} if it's the nothing type. */
  public @Nullable Troolean isLazy() {
    return promise == null ? null : promise.isLazy();
  }

  // endregion
  // endregion

  // This contains all the accessors in RValueType, and accessors to return the specific RValueType
  // instances. All are implemented very straightforward: the common RValueType accessors check for:
  // - Nothing
  // - Definitely missing or promise (may further branch on which one)
  // - Maybe missing or promise (may further branch on which one or both)
  // - Inner value
  //
  // The instance projections return `value` iff it's an instance of the projected type, `promise`
  // is definitely not a promise, and `missing` is `NO`, otherwise `null`.

  // region common `RSexpType` accessors
  /** If this is a constant, the exact value. */
  public @Nullable SEXP exactValue() {
    if (promise == null || missing == null) { // Nothing
      return null;
    } else if (inner == null || promise.isPromise() == Troolean.YES) { // Definitely...
      return inner == null ? SEXPs.MISSING_ARG : promise.exactValue();
    } else if (missing == Troolean.MAYBE || promise.isPromise() == Troolean.MAYBE) { // Maybe...
      return null;
    } else { // Inner value
      return inner.exactValue();
    }
  }

  /**
   * The base type of the value (e.g. is it a symbol? Builtin?).
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable BaseRType base() {
    if (promise == null || missing == null) { // Nothing
      return null;
    } else if (inner == null || promise.isPromise() == Troolean.YES) { // Definitely...
      return inner == null
          ? BaseRType.SYMBOL
          : new Promise(
              YesOrMaybe.of(promise.isLazy()),
              missing == Troolean.MAYBE ? inner.base().union(BaseRType.SYMBOL) : inner.base());
    } else if (missing == Troolean.MAYBE || promise.isPromise() == Troolean.MAYBE) { // Maybe...
      // ANY is the only type that can represent both promise or not-promise
      return promise.isPromise() == Troolean.MAYBE
          ? BaseRType.ANY
          : inner.base().union(BaseRType.SYMBOL);
    } else { // Inner value
      return inner.base();
    }
  }

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dim}, ...), and if they are
   * exact values.
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable AttributesType attributes() {
    if (promise == null || missing == null) { // Nothing
      return null;
    } else if (inner == null || promise.isPromise() == Troolean.YES) { // Definitely...
      return AttributesTypes.NONE;
    } else if (missing == Troolean.MAYBE || promise.isPromise() == Troolean.MAYBE) { // Maybe...
      return inner.attributes().union(AttributesTypes.NONE);
    } else { // Inner value
      return inner.attributes();
    }
  }

  /**
   * If there's 0, 1, n, or unknown references to this value.
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable MaybeNat referenceCount() {
    if (promise == null || missing == null) { // Nothing
      return null;
    } else if (inner == null || promise.isPromise() == Troolean.YES) { // Definitely...
      return MaybeNat.UNKNOWN;
    } else if (missing == Troolean.MAYBE || promise.isPromise() == Troolean.MAYBE) { // Maybe...
      return MaybeNat.UNKNOWN;
    } else { // Inner value
      return inner.referenceCount();
    }
  }

  // region helpers
  /** Returns whether instances are R objects, or {@code null} if this is the nothing type. */
  public @Nullable Troolean isObject() {
    return attributes() == null ? null : attributes().isObject();
  }

  // endregion
  // endregion

  // region specific `RValueType` projections
  /**
   * If this is guaranteed to be a function (not promise wrapped or missing), returns
   * function-specific data, otherwise {@code null}.
   */
  public @Nullable RFunctionType function() {
    return projection(RFunctionType.class);
  }

  /**
   * If this is guaranteed to be a primitive (not promise wrapped or missing) vector, returns
   * primitive-vector-specific data, otherwise {@code null}.
   */
  public @Nullable RPrimVecType primVec() {
    return projection(RPrimVecType.class);
  }

  /**
   * If {@code value} is an instance of the class, {@code promise} is definitely a value, and {@code
   * missing} is NO, returns {@code value}, otherwise returns {@code null}.
   */
  private <T extends RValueType> @Nullable T projection(Class<T> clazz) {
    return promise != null
            && promise.isPromise() == Troolean.NO
            && missing == Troolean.NO
            && clazz.isInstance(inner)
        ? clazz.cast(inner)
        : null;
  }

  // endregion

  // The lattice operations are even more boilerplate-y

  // region lattice operations
  @Override
  public boolean isSubsetOf(RType other) {
    return Lattice.isSubset(inner, other.inner)
        && Lattice.isSubset(promise, other.promise)
        && Lattice.isSubset(missing, other.missing);
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return Lattice.isSuperset(inner, other.inner)
        && Lattice.isSuperset(promise, other.promise)
        && Lattice.isSuperset(missing, other.missing);
  }

  @Override
  public @Nonnull RType intersection(RType other) {
    var value = Lattice.intersection(this.inner, other.inner);
    var promise = Lattice.intersection(this.promise, other.promise);
    var missing = Lattice.intersection(this.missing, other.missing);
    return (value == null && missing != Troolean.YES) || promise == null || missing == null
        ? RTypes.NOTHING
        : new RType(value, promise, missing);
  }

  @Override
  public RType union(RType other) {
    var value = Lattice.union(this.inner, other.inner);
    var promise = Lattice.union(this.promise, other.promise);
    var missing = Lattice.union(this.missing, other.missing);
    return promise == null || missing == null ? RTypes.NOTHING : new RType(value, promise, missing);
  }

  // endregion

  // region `equals`, `hashCode`, `toString`
  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof RType rType)) return false;
    return Objects.equals(inner, rType.inner)
        && Objects.equals(promise, rType.promise)
        && Objects.equals(missing, rType.missing);
  }

  @Override
  public int hashCode() {
    return Objects.hash(inner, promise, missing);
  }

  @Override
  public String toString() {
    return promise == null || missing == null
        ? "⊥"
        : isAny()
            ? "⊤"
            : ""
                + promise
                + switch (Objects.requireNonNull(missing)) {
                  case YES -> "miss";
                  case MAYBE -> "miss|" + inner;
                  case NO -> inner;
                };
  }

  // endregion

  /** Constructs the nothing type. Use {@link RTypes .NOTHING} instead. */
  RType() {
    this(null, null, (Troolean) null);
  }

  /** Constructs a type that isn't nothing. */
  RType(RValueType inner, RPromiseType promise, NoOrMaybe missing) {
    this(inner, promise, Troolean.of(missing));
  }

  /** Constructs a type that is nothing iff the arguments are all {@code null}. */
  RType(@Nullable RValueType inner, @Nullable RPromiseType promise, @Nullable Troolean missing) {
    if ((promise == null) != (missing == null)) {
      throw new IllegalArgumentException(
          "If and only if `promise` is null, `missing` must be null (this is the nothing type)");
    }
    if (inner != null && promise == null) {
      throw new IllegalArgumentException(
          "If both `promise` and `missing` are null, `inner` must also be null (this is the nothing type)");
    }
    if ((inner == null) != (missing == null || missing == Troolean.YES)) {
      throw new IllegalArgumentException(
          "If and only if `inner` is null, `missing` must be null (this is the nothing type) or YES (this is the missing type)");
    }
    this.inner = inner;
    this.promise = promise;
    this.missing = missing;
  }
}
