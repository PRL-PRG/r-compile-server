package org.prlprg.ir.type.sexp;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

/**
 * A value's type (part of {@link RSexpType}) that encodes whether or not a value is in a promise,
 * and if so, whether it's unevaluated.
 */
public enum RPromiseType implements Lattice<RPromiseType> {
  /** Value isn't in a promise. */
  VALUE,
  /** Value may be in a promise, and if so, the promise definitely isn't lazy. */
  STRICT_MAYBE_PROMISE,
  /**
   * Value may be in a promise, and if so, the promise may be lazy.
   *
   * <p>The top of the lattice (least known information).
   */
  MAYBE_LAZY_MAYBE_PROMISE,
  /** Value is definitely a promise, and this promise definitely isn't lazy. */
  STRICT_PROMISE,
  /** Value definitely in a promise, and the promise may be lazy. */
  MAYBE_LAZY_DEFINITELY_PROMISE,
  /** Value is definitely in a promise, and the promise is definitely lazy. */
  LAZY_PROMISE;

  /**
   * Construct a {@link RPromiseType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code MAYBE} but {@code promise} is {@code
   *     NO}.
   */
  public static RPromiseType of(Maybe isPromise, NoOrMaybe isLazy) {
    return of(isPromise, Maybe.of(isLazy));
  }

  /**
   * Construct a {@link RPromiseType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code YES} but {@code promise} isn't also
   *     {@code YES}.
   *     <p><b>OR</b> if {@code lazy} is {@code MAYBE} but {@code promise} is {@code NO}.
   */
  public static RPromiseType of(Maybe isPromise, boolean isLazy) {
    return of(isPromise, Maybe.of(isLazy));
  }

  /**
   * Construct a {@link RPromiseType} which is lazy and a promise based on the given arguments.
   *
   * @throws IllegalArgumentException If {@code lazy} is {@code YES} but {@code promise} isn't also
   *     {@code YES}.
   *     <p><b>OR</b> if {@code lazy} is {@code MAYBE} but {@code promise} is {@code NO}.
   */
  @SuppressWarnings("DuplicatedCode")
  public static RPromiseType of(Maybe isPromise, Maybe isLazy) {
    if (isLazy == Maybe.YES && isPromise != Maybe.YES) {
      throw new IllegalArgumentException(
          "A value cannot be definitely lazy but not definitely a promise.");
    }
    if (isLazy == Maybe.MAYBE && isPromise == Maybe.NO) {
      throw new IllegalArgumentException(
          "A value cannot be maybe lazy but definitely not a promise.");
    }
    var result = tryOf(isPromise, isLazy);
    assert result != null : "if null, we would've thrown one of the above exceptions";
    return result;
  }

  /**
   * Construct a {@link RPromiseType} which is lazy and a promise based on the given arguments, or
   * return {@code null} if impossible.
   */
  public static @Nullable RPromiseType tryOf(Maybe isPromise, Maybe isLazy) {
    if (isLazy == Maybe.YES && isPromise != Maybe.YES) {
      return null;
    }
    if (isLazy == Maybe.MAYBE && isPromise == Maybe.NO) {
      return null;
    }
    return switch (isPromise) {
      case NO -> VALUE;
      case MAYBE -> isLazy == Maybe.NO ? STRICT_MAYBE_PROMISE : MAYBE_LAZY_MAYBE_PROMISE;
      case YES ->
          switch (isLazy) {
            case NO -> STRICT_PROMISE;
            case MAYBE -> MAYBE_LAZY_DEFINITELY_PROMISE;
            case YES -> LAZY_PROMISE;
          };
    };
  }

  /** Construct a promise which is or isn't lazy depending on the argument. */
  public static RPromiseType promise(boolean isLazy) {
    return of(Maybe.YES, isLazy);
  }

  /** Is the value a promise? */
  public Maybe isPromise() {
    return switch (this) {
      case VALUE -> Maybe.NO;
      case STRICT_MAYBE_PROMISE, MAYBE_LAZY_MAYBE_PROMISE -> Maybe.MAYBE;
      case STRICT_PROMISE, MAYBE_LAZY_DEFINITELY_PROMISE, LAZY_PROMISE -> Maybe.YES;
    };
  }

  /**
   * Is the value lazy?
   *
   * <p>i.e. not-strict, unevaluated. This is important because evaluating a lazy promise may
   * produce side-effects.
   */
  public Maybe isLazy() {
    return switch (this) {
      case VALUE, STRICT_MAYBE_PROMISE, STRICT_PROMISE -> Maybe.NO;
      case MAYBE_LAZY_MAYBE_PROMISE, MAYBE_LAZY_DEFINITELY_PROMISE -> Maybe.MAYBE;
      case LAZY_PROMISE -> Maybe.YES;
    };
  }

  /**
   * If this is maybe or definitely a lazy promise, returns the non-lazy equivalent. Otherwise
   * returns itself.
   */
  public RPromiseType strict() {
    return switch (this) {
      case VALUE, STRICT_MAYBE_PROMISE, STRICT_PROMISE -> this;
      case MAYBE_LAZY_MAYBE_PROMISE -> STRICT_MAYBE_PROMISE;
      case MAYBE_LAZY_DEFINITELY_PROMISE, LAZY_PROMISE -> STRICT_PROMISE;
    };
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  public RPromiseType maybeLazy() {
    return switch (this) {
      case VALUE, STRICT_MAYBE_PROMISE, MAYBE_LAZY_MAYBE_PROMISE -> MAYBE_LAZY_MAYBE_PROMISE;
      case STRICT_PROMISE, MAYBE_LAZY_DEFINITELY_PROMISE, LAZY_PROMISE -> LAZY_PROMISE;
    };
  }

  /**
   * If this type is a value or maybe a promise, returns a definitely-promise (strict unless
   * otherwise specified). Otherwise returns itself (including if this is the nothing type).
   */
  public RPromiseType promiseWrapped() {
    return switch (this) {
      case VALUE, STRICT_MAYBE_PROMISE -> STRICT_PROMISE;
      case MAYBE_LAZY_MAYBE_PROMISE -> MAYBE_LAZY_DEFINITELY_PROMISE;
      case STRICT_PROMISE, MAYBE_LAZY_DEFINITELY_PROMISE, LAZY_PROMISE -> this;
    };
  }

  @Override
  public boolean isSubsetOf(RPromiseType other) {
    return isPromise().isSubsetOf(other.isPromise()) && isLazy().isSubsetOf(other.isLazy());
  }

  @Override
  public boolean isSupersetOf(RPromiseType other) {
    return isPromise().isSupersetOf(other.isPromise()) && isLazy().isSupersetOf(other.isLazy());
  }

  @Override
  public RPromiseType unionOf(RPromiseType other) {
    return of(isPromise().unionOf(other.isPromise()), isLazy().unionOf(other.isLazy()));
  }

  @Override
  public @Nullable RPromiseType intersectionOf(RPromiseType other) {
    var isPromise = Maybe.intersection(isPromise(), other.isPromise());
    var isLazy = Maybe.intersection(isLazy(), other.isLazy());
    return isPromise == null || isLazy == null ? null : tryOf(isPromise, isLazy);
  }

  @ParseMethod
  public static RPromiseType parse(Parser p) {
    var s = p.scanner();

    if (s.trySkip("lazy?prom!")) {
      return MAYBE_LAZY_DEFINITELY_PROMISE;
    } else if (s.trySkip("lazy")) {
      return switch (s.readChar()) {
        case '?' -> MAYBE_LAZY_MAYBE_PROMISE;
        case '!' -> LAZY_PROMISE;
        default -> throw s.fail("expected '?' or '!'");
      };
    } else if (s.trySkip("prom")) {
      return switch (s.readChar()) {
        case '?' -> STRICT_MAYBE_PROMISE;
        case '!' -> STRICT_PROMISE;
        default -> throw s.fail("expected '?' or '!'");
      };
    } else {
      return VALUE;
    }
  }

  @Override
  public String toString() {
    return switch (this) {
      case VALUE -> "";
      case STRICT_MAYBE_PROMISE -> "prom?";
      case STRICT_PROMISE -> "prom!";
      case MAYBE_LAZY_MAYBE_PROMISE -> "lazy?";
      case MAYBE_LAZY_DEFINITELY_PROMISE -> "lazy?prom!";
      case LAZY_PROMISE -> "lazy!";
    };
  }
}
