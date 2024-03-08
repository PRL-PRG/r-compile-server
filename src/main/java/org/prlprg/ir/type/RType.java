package org.prlprg.ir.type;

import com.google.common.collect.ImmutableSet;
import java.util.Objects;
import java.util.Optional;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.node.RValue;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;

/**
 * {@link RValue} type; a runtime value's ({@link SEXP})'s type, with information relevant to
 * perform optimizations (e.g. compile unboxed representations if scalar). Not to be confused with
 * {@link SEXPType}.
 *
 * <p>It consists of a union of {@link RValueType}s, which correspond to possible more-specific
 * types the value may be an instance of, with specific accessors (e.g. closure params and return);
 * as well as an {@link RPromiseType} containing information if this is promise-wrapped or lazy. The
 * added layer of {@link RType} over {@link RValueType} makes it so this can represent unions of
 * very different types without becoming too general (e.g. if an argument is something or the
 * missing value; or if it's a function or NULL); as well as represent types that are (maybe or
 * definitely) wrapped in promises without losing the information about the forced type. To prevent
 * blowup, if there are too many possible {@link RValueType} members in a union operation, this will
 * merge all into a single generic {@link RValueType} that has no specific accessors. "Any" and "any
 * value" are also represented by a generic {@link RValueType}, while "Nothing" is represented by an
 * empty union.
 *
 * <p>See {@link RTypes} for all globals and constructors.
 */
@Immutable
public final class RType implements BoundedLattice<RType> {
  /** Maximum number of {@link RValueType} before we revert to a single generic one. */
  private static final int MAX_TYPES = 4;

  /** Individual {@link RValueType}s, the value may be an instance of any of them. */
  private final ImmutableSet<RValueType> sexpTypes;

  /**
   * Whether this is a promise, and if so, promise information. {@code null} if the nothing value.
   */
  private final @Nullable RPromiseType promise;

  // region `RType` specific methods
  /**
   * Whether the value with this type is wrapped in a promise, and if so, whether it's lazy. Returns
   * {@code null} iff this is the nothing type.
   */
  public @Nullable PromiseRType promise() {
    return promise == null ? null : promise.promiseType();
  }

  /**
   * If this type is maybe or definitely a lazy promise, returns the non-lazy equivalent. Otherwise
   * returns itself (including if this is the nothing type).
   */
  public RType strict() {
    return promise == null || promise.isLazy() == Troolean.NO
        ? this
        : new RType(sexpTypes, promise.strict());
  }

  /**
   * If this type is maybe or definitely a promise, returns the inner value type. Otherwise returns
   * itself (including if this is the nothing type).
   */
  public RType forced() {
    return promise == null || promise instanceof RPromiseType.Value
        ? this
        : new RType(sexpTypes, RPromiseType.VALUE);
  }

  /**
   * Returns the same value type but with different promise wrapping. Returns itself if itself is
   * the nothing type.
   */
  RType promiseWrapped(RPromiseType promise) {
    return this.promise == null || this.promise.equals(promise)
        ? this
        : new RType(sexpTypes, promise);
  }

  /**
   * Whether this is the nothing type, which means an instance will never exist, and any code which
   * would produce an instance actually either crashes, hangs, or otherwise diverts control flow.
   */
  public boolean isNothing() {
    return sexpTypes.isEmpty();
  }

  /** Whether this is the any type, which means it's completely unconstrained. */
  public boolean isAny() {
    return equals(RTypes.ANY);
  }

  // endregion

  // This contains all the accessors in RSexpType, and accessors to return the specific RSexpType
  // instances. All are implemented very straightforward: the common RSexpType accessors simply
  // return the union of every `sexpType`'s value, and the instance projections return the instance
  // iff it's the only `sexpType` in the union, otherwise `null`.

  // region common `RSexpType` accessors
  /** If this is a constant, the exact value. */
  public @Nullable SEXP exactValue() {
    if (promise != null && !(promise instanceof RPromiseType.Value)) {
      return promise.exactValue();
    }

    SEXP exactValue = null;
    for (var sexpType : sexpTypes) {
      if (sexpType.exactValue() == null) {
        return null;
      } else if (exactValue != null) {
        throw new AssertionError(
            "Multiple variants in RType with exact values; should either be one variant (if the exact values are equal) or nothing");
      }
      exactValue = sexpType.exactValue();
      assert exactValue != SEXPs.MISSING_ARG || projection(RMissingType.class) != null;
    }
    return exactValue;
  }

  /**
   * The base type of the value (e.g. is it a symbol? Builtin?).
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable BaseRType base() {
    BaseRType.NotPromise base = null;
    for (var sexpType : sexpTypes) {
      base = base == null ? sexpType.base() : (BaseRType.NotPromise) base.union(sexpType.base());
    }

    // Only true if this is the nothing type. Either conditional applies the other, but both make
    // IntelliJ not report nullability errors on subsequent lines
    if (base == null || promise == null) {
      return base;
    }
    return switch (promise.isPromise()) {
      case YES -> new BaseRType.Promise(YesOrMaybe.of(promise.isLazy()), base);
        // ANY is the only type that can represent both promise or not-promise
      case MAYBE -> BaseRType.ANY;
      case NO -> base;
    };
  }

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dim}, ...), and if they are
   * exact values.
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable AttributesType attributes() {
    AttributesType attributes = null;
    for (var sexpType : sexpTypes) {
      attributes =
          attributes == null ? sexpType.attributes() : attributes.union(sexpType.attributes());
    }

    // Only true if this is the nothing type. Either conditional applies the other, but both make
    // IntelliJ not report nullability errors on subsequent lines
    if (attributes == null || promise == null) {
      return attributes;
    }
    return switch (promise.isPromise()) {
      case YES -> AttributesTypes.NONE;
      case MAYBE -> attributes.union(AttributesTypes.NONE);
      case NO -> attributes;
    };
  }

  /**
   * If there's 0, 1, n, or unknown references to this value.
   *
   * <p>Returns {@code null} if this is the nothing type.
   */
  public @Nullable MaybeNat referenceCount() {
    MaybeNat referenceCount = null;
    for (var sexpType : sexpTypes) {
      referenceCount =
          referenceCount == null
              ? sexpType.referenceCount()
              : referenceCount.union(sexpType.referenceCount());
    }

    // Only true if this is the nothing type. Either conditional applies the other, but both make
    // IntelliJ not report nullability errors on subsequent lines
    if (referenceCount == null || promise == null) {
      return null;
    }
    return switch (promise.isPromise()) {
      case YES -> promise.referenceCount();
      case MAYBE -> referenceCount.union(promise.referenceCount());
      case NO -> referenceCount;
    };
  }

  /** Returns whether this is {@code R_MissingVal}, or {@code null} if this is the nothing type. */
  public @Nullable Troolean isMissing() {
    if (projection(RMissingType.class) != null) {
      return Troolean.YES;
    }

    NoOrMaybe isMissing = null;
    for (var sexpType : sexpTypes) {
      isMissing = isMissing == null ? sexpType.isMissing() : isMissing.union(sexpType.isMissing());
    }

    // Only true if this is the nothing type. Either conditional applies the other, but both make
    // IntelliJ not report nullability errors on subsequent lines
    if (isMissing == null || promise == null) {
      return null;
    }
    return switch (promise.isPromise()) {
      case YES -> Troolean.NO;
      case MAYBE, NO -> Troolean.of(isMissing);
    };
  }

  // endregion

  // region specific `RSexpType` projections
  /**
   * If this is guaranteed to be a closure, returns {@link RFunctionType}, otherwise {@code null}.
   */
  public @Nullable RFunctionType function() {
    return projection(RFunctionType.class);
  }

  /**
   * If this is guaranteed to be a primitive vector, returns {@link RPrimVecType}, otherwise {@code
   * null}.
   */
  public @Nullable RPrimVecType primVec() {
    return projection(RPrimVecType.class);
  }

  /**
   * If {@code T} is the only {@link RValueType} in the union, returns it, otherwise {@code null}.
   */
  private <T extends RValueType> @Nullable T projection(Class<T> clazz) {
    return promise == null && onlySexpType() != null && clazz.isInstance(onlySexpType())
        ? clazz.cast(onlySexpType())
        : null;
  }

  // endregion

  // region `instance` and other helper methods
  /**
   * If {@code T} is any of the {@link RValueType}s in the union, returns it, otherwise {@code
   * null}.
   */
  private <T extends RValueType> @Nullable T instance(Class<T> clazz) {
    return sexpTypes.stream().filter(clazz::isInstance).map(clazz::cast).findAny().orElse(null);
  }

  /** If the union contains a generic {@link RValueType}, returns it, otherwise {@code null}. */
  private @Nullable RValueType genericInstance() {
    return instance(RGenericValueType.class);
  }

  private @Nullable RValueType onlySexpType() {
    return sexpTypes.size() == 1 ? sexpTypes.iterator().next() : null;
  }

  // endregion

  // The lattice operations are less boilerplate but still mostly straightforward; we check
  // `RSexpType`s of the same kind against one another, or

  // region lattice operations
  @Override
  public boolean isSubsetOf(RType other) {
    // We could fastcase `isNothing()` and `isAny()`, but we don't need to.
    // (At least they are disabled now to ensure this algorithm works in tests).

    // This checks for other.isNothing(),
    // and ensures that if `other` has a specific `RSexpType` that we don't,
    // as long as the other `RSexpType`s are subsets we're a strict subset
    // (e.g. `clos' | vec' < clos | vec | missing`, `clos' | other' < clos | vec | other`).
    if (sexpTypes.size() > other.sexpTypes.size()) {
      return false;
    }

    var myGenericInstance = genericInstance();
    var otherGenericInstance = other.genericInstance();
    if ((myGenericInstance != null && otherGenericInstance == null)
        || (myGenericInstance != null && !myGenericInstance.isSubsetOf(otherGenericInstance))) {
      return false;
    }

    for (var clazz : RValueType.SPECIFIC_TYPES) {
      var myInstance = instance(clazz);
      if (myInstance == null) {
        continue;
      }
      var otherInstance = other.instance(clazz);
      if ((otherInstance == null && otherGenericInstance == null)
          || (otherInstance == null && !myInstance.isSubsetOf(otherGenericInstance))
          || (otherInstance != null && !myInstance.isSubsetOf(otherInstance))) {
        return false;
      }
    }

    return Lattice.isSubset(promise, other.promise);
  }

  @Override
  public @Nonnull RType intersection(RType other) {
    // We could fastcase `isNothing()` and `isAny()`, but we don't need to.
    // (At least they are disabled now to ensure this algorithm works in tests).

    var resultTypes = ImmutableSet.<RValueType>builderWithExpectedSize(MAX_TYPES);

    var myGenericInstance = genericInstance();
    var otherGenericInstance = other.genericInstance();
    if ((myGenericInstance != null && otherGenericInstance != null)) {
      Optional.ofNullable(myGenericInstance.intersection(otherGenericInstance))
          .ifPresent(resultTypes::add);
    }

    for (var clazz : RValueType.SPECIFIC_TYPES) {
      var myInstance = instance(clazz);
      var otherInstance = other.instance(clazz);
      var myInstanceOrMaybeGeneric =
          myInstance != null ? myInstance : otherGenericInstance == null ? myGenericInstance : null;
      var otherInstanceOrMaybeGeneric =
          otherInstance != null
              ? otherInstance
              : myGenericInstance == null ? otherGenericInstance : null;
      if (myInstanceOrMaybeGeneric != null && otherInstanceOrMaybeGeneric != null) {
        Optional.ofNullable(myInstanceOrMaybeGeneric.intersection(otherInstanceOrMaybeGeneric))
            .ifPresent(resultTypes::add);
      }
    }

    var resultPromise = Lattice.intersection(promise, other.promise);
    return resultPromise == null ? RTypes.NOTHING : new RType(resultTypes.build(), resultPromise);
  }

  @Override
  public RType union(RType other) {
    // We could fastcase `isNothing()` and `isAny()`, but we don't need to.
    // (At least they are disabled now to ensure this algorithm works in tests).

    var resultTypes = ImmutableSet.<RValueType>builderWithExpectedSize(MAX_TYPES);

    var myGenericInstance = genericInstance();
    var otherGenericInstance = other.genericInstance();
    if (myGenericInstance != null || otherGenericInstance != null) {
      var mergedGenericInstance =
          myGenericInstance == null
              ? otherGenericInstance
              : otherGenericInstance == null
                  ? myGenericInstance
                  : myGenericInstance.union(otherGenericInstance);
      resultTypes.add(mergedGenericInstance);
    }

    for (var clazz : RValueType.SPECIFIC_TYPES) {
      var myInstance = instance(clazz);
      var otherInstance = other.instance(clazz);
      if (myInstance != null && otherInstance != null) {
        var mergedInstance = myInstance.union(otherInstance);
        resultTypes.add(mergedInstance);
      }
      if (myInstance != null && otherInstance == null) {
        resultTypes.add(myInstance);
      }
      if (myInstance == null && otherInstance != null) {
        resultTypes.add(otherInstance);
      }
    }

    var resultPromise = Lattice.union(promise, other.promise);

    var resultTypes1 = resultTypes.build();
    if (resultTypes1.size() > MAX_TYPES) {
      var fallback = ImmutableSet.of(resultTypes1.stream().reduce(RValueType::union).get());
      return new RType(fallback, resultPromise);
    }
    return new RType(resultTypes1, resultPromise);
  }

  // endregion

  // region `equals`, `hashCode`, `toString`
  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof RType rType)) return false;
    return Objects.equals(sexpTypes, rType.sexpTypes);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(sexpTypes);
  }

  @Override
  public String toString() {
    return (promise == null ? "" : promise)
        + (sexpTypes.isEmpty()
            ? "⊥"
            : Objects.equals(onlySexpType(), RTypes.ANY.onlySexpType())
                ? "⊤"
                : onlySexpType() != null
                    ? onlySexpType().toString()
                    : "("
                        + sexpTypes.stream()
                            .map(Object::toString)
                            .reduce((a, b) -> a + " | " + b)
                            .get()
                        + ")");
  }

  // endregion

  RType(ImmutableSet<RValueType> sexpTypes, @Nullable RPromiseType promise) {
    if (sexpTypes.size() > MAX_TYPES) {
      throw new IllegalArgumentException("Too many RSexpTypes violates invariant");
    }
    if (sexpTypes.stream().map(Object::getClass).distinct().count() < sexpTypes.size()) {
      throw new IllegalArgumentException("Multiple RSexpTypes of same class violates invariant");
    }
    if (promise == null && !sexpTypes.isEmpty()) {
      throw new IllegalArgumentException("PromiseRType must be non-null if there are RSexpTypes");
    }

    this.sexpTypes = sexpTypes;
    this.promise = promise;
  }
}
