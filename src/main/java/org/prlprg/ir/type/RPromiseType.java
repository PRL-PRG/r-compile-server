package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
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
      case Promise(var isLazy, var ignored) -> PromiseRType.of(Troolean.YES, isLazy);
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
      case Promise(var isLazy, var exactValue) ->
          new Promise(Troolean.NO, isLazy == Troolean.NO ? exactValue : null);
    };
  }

  @Override
  default boolean isSubsetOf(RPromiseType other) {
    return switch (this) {
      case Value() -> other instanceof Value || other instanceof MaybePromise;
      case MaybePromise(var isLazy) ->
          other instanceof MaybePromise(var otherIsLazy) && isLazy.isSubsetOf(otherIsLazy);
      case Promise(var isLazy, var exactValue) ->
          switch (other) {
            case Value() -> false;
            case MaybePromise(var otherIsLazy) -> isLazy.isSubsetOf(otherIsLazy);
            case Promise(var otherIsLazy, var otherExactValue) ->
                isLazy.isSubsetOf(otherIsLazy)
                    && (otherExactValue == null || otherExactValue.equals(exactValue));
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
            case Promise(var isLazy, var ignored) -> new MaybePromise(NoOrMaybe.of(isLazy));
          };
      case MaybePromise(var isLazy) ->
          switch (other) {
            case Value() -> this;
            case MaybePromise(var otherIsLazy) -> new MaybePromise(isLazy.union(otherIsLazy));
            case Promise(var otherIsLazy, var ignored) ->
                new MaybePromise(isLazy.union(NoOrMaybe.of(otherIsLazy)));
          };
      case Promise(var isLazy, var exactValue) ->
          switch (other) {
            case Value() -> new MaybePromise(NoOrMaybe.of(isLazy));
            case MaybePromise(var otherIsLazy) ->
                new MaybePromise(NoOrMaybe.of(isLazy).union(otherIsLazy));
            case Promise(var otherIsLazy, var otherExactValue) ->
                exactValue != null && exactValue.equals(otherExactValue)
                    ? this
                    : new Promise(isLazy.union(otherIsLazy), null);
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
            case Promise ignored -> null;
          };
      case MaybePromise(var isLazy) ->
          switch (other) {
            case Value() -> other;
            case MaybePromise(var otherIsLazy) ->
                new MaybePromise(isLazy.intersection(otherIsLazy));
            case Promise(var otherIsLazy, var exactValue) -> {
              var isLazy1 = Troolean.of(isLazy).intersection(otherIsLazy);
              if (isLazy1 == null) {
                yield null;
              }
              yield new Promise(isLazy1, exactValue);
            }
          };
      case Promise(var isLazy, var exactValue) ->
          switch (other) {
            case Value() -> null;
            case MaybePromise(var otherIsLazy) -> {
              var isLazy1 = isLazy.intersection(Troolean.of(otherIsLazy));
              if (isLazy1 == null) {
                yield null;
              }
              yield new Promise(isLazy1, exactValue);
            }
            case Promise(var otherIsLazy, var otherExactValue) -> {
              if (exactValue != null
                  && otherExactValue != null
                  && !exactValue.equals(otherExactValue)) {
                yield null;
              }
              var isLazy1 = isLazy.intersection(otherIsLazy);
              if (isLazy1 == null) {
                yield null;
              }
              yield new Promise(isLazy1, exactValue == null ? otherExactValue : exactValue);
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
  RPromiseType STRICT_PROMISE = new Promise(Troolean.NO);

  /** Value is a maybe lazy promise that has no other known information. */
  RPromiseType PROMISE_MAYBE_LAZY = new Promise(Troolean.MAYBE);

  /** Value is a lazy promise that has no other known information. */
  RPromiseType LAZY_PROMISE = new Promise(Troolean.YES);

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

  /** Value is definitely a promise. */
  record Promise(Troolean isLazy, @Override @Nullable PromSXP exactValue) implements RPromiseType {
    public Promise {
      if (exactValue != null && isLazy != Troolean.of(exactValue.isLazy())) {
        throw new IllegalArgumentException("isLazy and exactValue.isLazy() must match");
      }
    }

    public Promise(PromSXP exactValue) {
      this(Troolean.of(exactValue.isLazy()), exactValue);
    }

    public Promise(Troolean isLazy) {
      this(isLazy, null);
    }

    @Override
    public String toString() {
      return switch (isLazy) {
            case YES -> "~";
            case NO -> "^";
            case MAYBE -> "~?^";
          }
          + (exactValue == null ? "" : "*")
          + "!";
    }
  }
}
