package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;

/**
 * A value's type (part of {@link RType}) that encodes whether or not a value is in a promise, and
 * if so, whether it's unevaluated.
 */
public enum PromiseRType implements Lattice<PromiseRType> {
  /** Value is not a promise. */
  VALUE,
  /** Value is maybe wrapped in an already-evaluated promise. */
  MAYBE_PROMISE,
  /** Value is definitely wrapped in an already-evaluated promise. */
  PROMISE,
  /** Value is maybe wrapped in a promise, and if it is, the promise is maybe unevaluated. */
  MAYBE_LAZY_PROMISE,
  /** Value is definitely wrapped in a maybe-unevaluated promise. */
  PROMISE_MAYBE_LAZY,
  /** Value is definitely wrapped in a definitely-unevaluated promise. */
  LAZY;

  /**
   * Construct a {@link PromiseRType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code MAYBE} but {@code promise} is {@code
   *     NO}.
   */
  public static PromiseRType of(Troolean isPromise, NoOrMaybe isLazy) {
    return of(isPromise, Troolean.of(isLazy));
  }

  /**
   * Construct a {@link PromiseRType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code YES} but {@code promise} isn't also
   *     {@code YES}.
   *     <p><b>OR</b> if {@code lazy} is {@code MAYBE} but {@code promise} is {@code NO}.
   */
  public static PromiseRType of(Troolean isPromise, boolean isLazy) {
    return of(isPromise, Troolean.of(isLazy));
  }

  /**
   * Construct a {@link PromiseRType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code YES} but {@code promise} isn't also
   *     {@code YES}.
   *     <p><b>OR</b> if {@code lazy} is {@code MAYBE} but {@code promise} is {@code NO}.
   */
  @SuppressWarnings("DuplicatedCode")
  public static PromiseRType of(Troolean isPromise, Troolean isLazy) {
    if (isLazy == Troolean.YES && isPromise != Troolean.YES) {
      throw new IllegalArgumentException(
          "A value cannot be definitely lazy but not definitely a promise.");
    }
    if (isLazy == Troolean.MAYBE && isPromise == Troolean.NO) {
      throw new IllegalArgumentException(
          "A value cannot be maybe lazy but definitely not a promise.");
    }
    return switch (isPromise) {
      case NO -> VALUE;
      case MAYBE -> isLazy == Troolean.NO ? MAYBE_PROMISE : MAYBE_LAZY_PROMISE;
      case YES ->
          switch (isLazy) {
            case NO -> PROMISE;
            case MAYBE -> PROMISE_MAYBE_LAZY;
            case YES -> LAZY;
          };
    };
  }

  /**
   * Construct a {@link PromiseRType} which is lazy and a promise based on the given arguments, or
   * return {@code null} if impossible.
   */
  @SuppressWarnings("DuplicatedCode")
  public static @Nullable PromiseRType tryOf(Troolean isPromise, Troolean isLazy) {
    if (isLazy == Troolean.YES && isPromise != Troolean.YES) {
      return null;
    }
    if (isLazy == Troolean.MAYBE && isPromise == Troolean.NO) {
      return null;
    }
    return switch (isPromise) {
      case NO -> VALUE;
      case MAYBE -> isLazy == Troolean.NO ? MAYBE_PROMISE : MAYBE_LAZY_PROMISE;
      case YES ->
          switch (isLazy) {
            case NO -> PROMISE;
            case MAYBE -> PROMISE_MAYBE_LAZY;
            case YES -> LAZY;
          };
    };
  }

  /** Is the value a promise? */
  public Troolean isPromise() {
    return switch (this) {
      case VALUE -> Troolean.NO;
      case MAYBE_PROMISE, MAYBE_LAZY_PROMISE -> Troolean.MAYBE;
      case PROMISE, PROMISE_MAYBE_LAZY, LAZY -> Troolean.YES;
    };
  }

  /** Is the value unevaluated? (Evaluating may produce side-effects.) */
  public Troolean isLazy() {
    return switch (this) {
      case VALUE, MAYBE_PROMISE, PROMISE -> Troolean.NO;
      case MAYBE_LAZY_PROMISE, PROMISE_MAYBE_LAZY -> Troolean.MAYBE;
      case LAZY -> Troolean.YES;
    };
  }

  /**
   * If this is maybe or definitely a lazy promise, returns the non-lazy equivalent. Otherwise
   * returns itself.
   */
  public PromiseRType strict() {
    return switch (this) {
      case VALUE, MAYBE_PROMISE, PROMISE -> this;
      case MAYBE_LAZY_PROMISE -> MAYBE_PROMISE;
      case PROMISE_MAYBE_LAZY, LAZY -> PROMISE;
    };
  }

  @Override
  public boolean isSubsetOf(PromiseRType other) {
    return isPromise().isSubsetOf(other.isPromise()) && isLazy().isSubsetOf(other.isLazy());
  }

  @Override
  public boolean isSupersetOf(PromiseRType other) {
    return isPromise().isSupersetOf(other.isPromise()) && isLazy().isSupersetOf(other.isLazy());
  }

  @Override
  public PromiseRType union(PromiseRType other) {
    return PromiseRType.of(isPromise().union(other.isPromise()), isLazy().union(other.isLazy()));
  }

  @Override
  public @Nullable PromiseRType intersection(PromiseRType other) {
    var isPromise = Troolean.intersection(isPromise(), other.isPromise());
    var isLazy = Troolean.intersection(isLazy(), other.isLazy());
    return isPromise == null || isLazy == null ? null : PromiseRType.tryOf(isPromise, isLazy);
  }

  @Override
  public String toString() {
    return switch (this) {
      case VALUE -> "";
      case MAYBE_PROMISE -> "^?";
      case PROMISE -> "^!";
      case MAYBE_LAZY_PROMISE -> "~?";
      case PROMISE_MAYBE_LAZY -> "~?^";
      case LAZY -> "~!";
    };
  }
}
