package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.PromSXP;

/**
 * Encodes information if {@link RType} is a promise: specifically, whether it's a promise, whether
 * it's lazy, the exact value if promise and known, and reference count if promise and known.
 */
sealed interface RPromiseType extends Lattice<RPromiseType> {
  /**
   * Whether this is a promise, and if so, whether it's lazy. {@code this} without the exact value
   * and reference count information.
   */
  default PromiseRType promiseType() {
    return switch (this) {
      case Value() -> PromiseRType.VALUE;
      case MaybePromise(var isLazy) -> PromiseRType.of(Troolean.MAYBE, isLazy);
      case InexactPromise(var isLazy, var ignored) -> PromiseRType.of(Troolean.YES, isLazy);
      case ExactPromise(var exactValue, var ignored) ->
          PromiseRType.of(Troolean.YES, exactValue.isLazy());
    };
  }

  /** Whether this is known to be a promise. */
  default Troolean isPromise() {
    return promiseType().isPromise();
  }

  /** Whether this is lazy, assuming it's a promise. */
  default Troolean isLazy() {
    return promiseType().isLazy();
  }

  /** Reference count of the inner value. */
  default MaybeNat referenceCount() {
    return switch (this) {
      case Value() -> MaybeNat.UNKNOWN;
      case MaybePromise(var ignored) -> MaybeNat.UNKNOWN;
      case InexactPromise(var ignored, var referenceCount) -> referenceCount;
      case ExactPromise(var ignored, var referenceCount) -> referenceCount;
    };
  }

  /** If this has only one instance and it's known, returns it. */
  default @Nullable PromSXP exactValue() {
    // Overridden in ExactPromise
    return null;
  }

  /** If this is lazy, returns the strict equivalent. Otherwise returns itself. */
  default RPromiseType strict() {
    return switch (this) {
      case Value() -> this;
      case MaybePromise(var ignored) -> new MaybePromise(NoOrMaybe.NO);
      case InexactPromise(var ignored, var referenceCount) ->
          new InexactPromise(Troolean.NO, referenceCount);
      case ExactPromise(var exactValue, var referenceCount) ->
          exactValue.isLazy() ? new InexactPromise(Troolean.NO, referenceCount) : this;
    };
  }

  @Override
  default boolean isSubsetOf(RPromiseType other) {
    return switch (this) {
      case Value() -> other instanceof Value || other instanceof MaybePromise;
      case MaybePromise(var isLazy) ->
          other instanceof MaybePromise(var otherIsLazy) && isLazy.isSubsetOf(otherIsLazy);
      case InexactPromise(var isLazy, var referenceCount) ->
          switch (other) {
            case MaybePromise(var otherIsLazy) -> isLazy.isSubsetOf(otherIsLazy);
            case InexactPromise(var otherIsLazy, var otherReferenceCount) ->
                isLazy.isSubsetOf(otherIsLazy) && referenceCount.isSubsetOf(otherReferenceCount);
            default -> false;
          };
      case ExactPromise(var exactValue, var referenceCount) ->
          switch (other) {
            case Value() -> false;
            case MaybePromise(var isLazy) -> Troolean.of(exactValue.isLazy()).isSubsetOf(isLazy);
            case InexactPromise(var isLazy, var otherReferenceCount) ->
                Troolean.of(exactValue.isLazy()).isSubsetOf(isLazy)
                    && referenceCount.isSubsetOf(otherReferenceCount);
            case ExactPromise(var otherExactValue, var otherReferenceCount) ->
                exactValue.equals(otherExactValue)
                    && referenceCount.isSubsetOf(otherReferenceCount);
          };
    };
  }

  @Override
  default RPromiseType union(RPromiseType other) {
    return switch (this) {
      case Value() ->
          switch (other) {
            case Value() -> this;
            case MaybePromise ignored -> other;
            case InexactPromise(var isLazy, var ignored) -> new MaybePromise(NoOrMaybe.of(isLazy));
            case ExactPromise(var exactValue, var ignored) ->
                new MaybePromise(NoOrMaybe.of(exactValue.isLazy()));
          };
      case MaybePromise(var isLazy) ->
          switch (other) {
            case Value() -> this;
            case MaybePromise(var otherIsLazy) -> new MaybePromise(isLazy.union(otherIsLazy));
            case InexactPromise(var otherIsLazy, var ignored) ->
                new MaybePromise(isLazy.union(NoOrMaybe.of(otherIsLazy)));
            case ExactPromise(var otherExactValue, var ignored) ->
                new MaybePromise(isLazy.union(NoOrMaybe.of(otherExactValue.isLazy())));
          };
      case InexactPromise(var isLazy, var referenceCount) ->
          switch (other) {
            case Value() -> new MaybePromise(NoOrMaybe.of(isLazy));
            case MaybePromise(var otherIsLazy) ->
                new MaybePromise(NoOrMaybe.of(isLazy).union(otherIsLazy));
            case InexactPromise(var otherIsLazy, var otherReferenceCount) ->
                new InexactPromise(
                    isLazy.union(otherIsLazy), referenceCount.union(otherReferenceCount));
            case ExactPromise(var otherExactValue, var otherReferenceCount) ->
                new InexactPromise(
                    isLazy.union(Troolean.of(otherExactValue.isLazy())),
                    referenceCount.union(otherReferenceCount));
          };
      case ExactPromise(var exactValue, var referenceCount) ->
          switch (other) {
            case Value() -> new MaybePromise(NoOrMaybe.of(exactValue.isLazy()));
            case MaybePromise(var isLazy) ->
                new MaybePromise(NoOrMaybe.of(exactValue.isLazy()).union(isLazy));
            case InexactPromise(var isLazy, var otherReferenceCount) ->
                new InexactPromise(
                    Troolean.of(exactValue.isLazy()).union(isLazy),
                    referenceCount.union(otherReferenceCount));
            case ExactPromise(var otherExactValue, var otherReferenceCount) ->
                exactValue.equals(otherExactValue)
                    ? new ExactPromise(exactValue, referenceCount.union(otherReferenceCount))
                    : new InexactPromise(
                        Troolean.of(exactValue.isLazy())
                            .union(Troolean.of(otherExactValue.isLazy())),
                        referenceCount.union(otherReferenceCount));
          };
    };
  }

  @Override
  default @Nullable RPromiseType intersection(RPromiseType other) {
    return switch (this) {
      case Value() ->
          switch (other) {
            case Value() -> this;
            case MaybePromise ignored -> this;
            case InexactPromise ignored -> null;
            case ExactPromise ignored -> null;
          };
      case MaybePromise(var isLazy) ->
          switch (other) {
            case Value() -> other;
            case MaybePromise(var otherIsLazy) ->
                new MaybePromise(isLazy.intersection(otherIsLazy));
            case InexactPromise(var otherIsLazy, var referenceCount) -> {
              var isLazy1 = Troolean.of(isLazy).intersection(otherIsLazy);
              if (isLazy1 == null) {
                yield null;
              }
              yield new InexactPromise(isLazy1, referenceCount);
            }
            case ExactPromise(var exactValue, var ignored) ->
                isLazy == NoOrMaybe.NO && exactValue.isLazy() ? null : other;
          };
      case InexactPromise(var isLazy, var referenceCount) ->
          switch (other) {
            case Value() -> null;
            case MaybePromise(var otherIsLazy) -> {
              var isLazy1 = isLazy.intersection(Troolean.of(otherIsLazy));
              if (isLazy1 == null) {
                yield null;
              }
              yield new InexactPromise(isLazy1, referenceCount);
            }
            case InexactPromise(var otherIsLazy, var otherReferenceCount) -> {
              var isLazy1 = isLazy.intersection(otherIsLazy);
              if (isLazy1 == null) {
                yield null;
              }
              var referenceCount1 = referenceCount.intersection(otherReferenceCount);
              if (referenceCount1 == null) {
                yield null;
              }
              yield new InexactPromise(isLazy1, referenceCount1);
            }
            case ExactPromise(var exactValue, var otherReferenceCount) -> {
              var isLazy1 = isLazy.intersection(Troolean.of(exactValue.isLazy()));
              if (isLazy1 == null) {
                yield null;
              }
              var referenceCount1 = referenceCount.intersection(otherReferenceCount);
              if (referenceCount1 == null) {
                yield null;
              }
              yield new ExactPromise(exactValue, referenceCount1);
            }
          };
      case ExactPromise(var exactValue, var referenceCount) ->
          switch (other) {
            case Value() -> null;
            case MaybePromise(var isLazy) ->
                isLazy == NoOrMaybe.NO && exactValue.isLazy() ? null : this;
            case InexactPromise(var isLazy, var otherReferenceCount) -> {
              var isLazy1 = Troolean.of(exactValue.isLazy()).intersection(isLazy);
              if (isLazy1 == null) {
                yield null;
              }
              var referenceCount1 = referenceCount.intersection(otherReferenceCount);
              if (referenceCount1 == null) {
                yield null;
              }
              yield new ExactPromise(exactValue, referenceCount1);
            }
            case ExactPromise(var otherExactValue, var otherReferenceCount) -> {
              if (!exactValue.equals(otherExactValue)) {
                yield null;
              }
              var referenceCount1 = referenceCount.intersection(otherReferenceCount);
              if (referenceCount1 == null) {
                yield null;
              }
              yield new ExactPromise(exactValue, referenceCount1);
            }
          };
    };
  }

  /** Value isn't a promise. */
  RPromiseType VALUE = new Value();

  /** Value is maybe a promise, but definitely isn't lazy. */
  RPromiseType MAYBE_STRICT_PROMISE = new MaybePromise(NoOrMaybe.NO);

  /**
   * Value is maybe a promise that may be lazy. The top of the lattice (least known information).
   */
  RPromiseType MAYBE_LAZY_PROMISE = new MaybePromise(NoOrMaybe.MAYBE);

  /** Value is a non-lazy promise that has no other known information. */
  RPromiseType STRICT_PROMISE = new InexactPromise(Troolean.NO);

  /** Value is a maybe lazy promise that has no other known information. */
  RPromiseType PROMISE_MAYBE_LAZY = new InexactPromise(Troolean.MAYBE);

  /** Value is a lazy promise that has no other known information. */
  RPromiseType LAZY_PROMISE = new InexactPromise(Troolean.YES);

  /** Value isn't a promise. */
  record Value() implements RPromiseType {
    @Override
    public String toString() {
      return "";
    }
  }

  /** Value may or may not be a promise. */
  record MaybePromise(NoOrMaybe isLazy1) implements RPromiseType {
    @Override
    public String toString() {
      return isLazy1 == NoOrMaybe.NO ? "^?" : "~?";
    }
  }

  /** Value is definitely a promise, but we don't have the exact value. */
  record InexactPromise(Troolean isLazy, @Override MaybeNat referenceCount)
      implements RPromiseType {
    public InexactPromise(Troolean isLazy) {
      this(isLazy, MaybeNat.UNKNOWN);
    }

    @Override
    public String toString() {
      return (referenceCount == MaybeNat.UNKNOWN ? "" : "{" + referenceCount + "}")
          + switch (isLazy) {
            case YES -> "~!";
            case NO -> "^!";
            case MAYBE -> "~?^";
          };
    }
  }

  /** The type has only one instance, which is the inner SEXP. */
  record ExactPromise(@Override @Nonnull PromSXP exactValue, @Override MaybeNat referenceCount)
      implements RPromiseType {
    public ExactPromise(PromSXP exactValue) {
      this(exactValue, MaybeNat.UNKNOWN);
    }

    @Override
    public String toString() {
      return (referenceCount == MaybeNat.UNKNOWN ? "" : "{" + referenceCount + "}")
          + "*"
          + (exactValue.isLazy() ? "~" : "^")
          + "!";
    }
  }
}
