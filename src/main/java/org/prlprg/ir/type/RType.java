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

/**
 * {@link RValue} type; a runtime value's ({@link SEXP})'s type, with information relevant to
 * perform optimizations (e.g. compile unboxed representations if scalar). Not to be confused with
 * {@link SEXPType}.
 *
 * <p>It consists of a union of {@link RSexpType}s, which correspond to possible more-specific types
 * value may be an instance of, with specific accessors (e.g. closure params and return). If there
 * are too many, it will merge all into a single generic {@link RSexpType} that has no specific
 * accessors. "Any" is represented by a single {@link RSexpType}, "Nothing" is represented by an
 * empty union.
 *
 * <p>See {@link RTypes} for all constructors.
 */
@Immutable
public final class RType implements BoundedLattice<RType> {
  /** Maximum number of {@link RSexpType} before we revert to a single generic one. */
  private static final int MAX_TYPES = 4;

  /** Individual {@link RSexpType}s, the value may be an instance of any of them. */
  private final ImmutableSet<RSexpType> sexpTypes;

  // region `RType` specific methods
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
    SEXP exactValue = null;
    for (var sexpType : sexpTypes) {
      if (sexpType.exactValue() == null) {
        return null;
      } else if (exactValue == null) {
        exactValue = sexpType.exactValue();
      } else if (!sexpType.exactValue().equals(exactValue)) {
        return null;
      }
    }
    return exactValue;
  }

  /**
   * The base type of the value (e.g. is it a symbol? Builtin?). Returns {@code null} if this is the
   * nothing type.
   */
  @Nullable BaseRType base() {
    BaseRType base = null;
    for (var sexpType : sexpTypes) {
      base = base == null ? sexpType.base() : base.union(sexpType.base());
    }
    return base;
  }

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dims}, ...), and if they are
   * exact values. Returns {@code null} if this is the nothing type.
   */
  @Nullable AttributesType attributes() {
    AttributesType attributes = null;
    for (var sexpType : sexpTypes) {
      attributes =
          attributes == null ? sexpType.attributes() : attributes.union(sexpType.attributes());
    }
    return attributes;
  }

  /**
   * If there's 0, 1, n, or unknown references to this value. Returns {@code null} if this is the
   * nothing type.
   */
  @Nullable MaybeNat referenceCount() {
    MaybeNat referenceCount = null;
    for (var sexpType : sexpTypes) {
      referenceCount =
          referenceCount == null
              ? sexpType.referenceCount()
              : referenceCount.union(sexpType.referenceCount());
    }
    return referenceCount;
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

  /** Returns whether this is {@code R_MissingVal}. */
  public Troolean isMissing() {
    return projection(RMissingType.class) != null
        ? Troolean.YES
        : instance(RMissingType.class) != null ? Troolean.MAYBE : Troolean.NO;
  }

  /**
   * If {@code T} is the only {@link RSexpType} in the union, returns it, otherwise {@code null}.
   */
  private <T extends RSexpType> @Nullable T projection(Class<T> clazz) {
    return onlySexpType() != null && clazz.isInstance(onlySexpType())
        ? clazz.cast(onlySexpType())
        : null;
  }

  /**
   * If {@code T} is any of the {@link RSexpType}s in the union, returns it, otherwise {@code null}.
   */
  private <T extends RSexpType> @Nullable T instance(Class<T> clazz) {
    return sexpTypes.stream().filter(clazz::isInstance).map(clazz::cast).findAny().orElse(null);
  }

  /** If the union contains a generic {@link RSexpType}, returns it, otherwise {@code null}. */
  private @Nullable RSexpType genericInstance() {
    return instance(RGenericSexpType.class);
  }

  private @Nullable RSexpType onlySexpType() {
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

    for (var clazz : RSexpType.SPECIFIC_TYPES) {
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

    return true;
  }

  @Override
  public @Nonnull RType intersection(RType other) {
    // We could fastcase `isNothing()` and `isAny()`, but we don't need to.
    // (At least they are disabled now to ensure this algorithm works in tests).

    var resultTypes = ImmutableSet.<RSexpType>builderWithExpectedSize(MAX_TYPES);

    var myGenericInstance = genericInstance();
    var otherGenericInstance = other.genericInstance();
    if ((myGenericInstance != null && otherGenericInstance != null)) {
      Optional.ofNullable(myGenericInstance.intersection(otherGenericInstance))
          .ifPresent(resultTypes::add);
    }

    for (var clazz : RSexpType.SPECIFIC_TYPES) {
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

    return new RType(resultTypes.build());
  }

  @Override
  public RType union(RType other) {
    // We could fastcase `isNothing()` and `isAny()`, but we don't need to.
    // (At least they are disabled now to ensure this algorithm works in tests).

    var resultTypes = ImmutableSet.<RSexpType>builderWithExpectedSize(MAX_TYPES);

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

    for (var clazz : RSexpType.SPECIFIC_TYPES) {
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

    var resultTypes1 = resultTypes.build();
    if (resultTypes1.size() > MAX_TYPES) {
      var fallback = ImmutableSet.of(resultTypes1.stream().reduce(RSexpType::union).get());
      return new RType(fallback);
    }
    return new RType(resultTypes1);
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
    return sexpTypes.isEmpty()
        ? "⊥"
        : isAny()
            ? "⊤"
            : onlySexpType() != null
                ? onlySexpType().toString()
                : "("
                    + sexpTypes.stream().map(Object::toString).reduce((a, b) -> a + " | " + b).get()
                    + ")";
  }

  // endregion

  RType(ImmutableSet<RSexpType> sexpTypes) {
    if (sexpTypes.size() > MAX_TYPES) {
      throw new IllegalArgumentException("Too many RSexpTypes violates invariant");
    }
    if (sexpTypes.stream().map(Object::getClass).distinct().count() < sexpTypes.size()) {
      throw new IllegalArgumentException("Multiple RSexpTypes of same class violates invariant");
    }
    this.sexpTypes = sexpTypes;
  }
}
