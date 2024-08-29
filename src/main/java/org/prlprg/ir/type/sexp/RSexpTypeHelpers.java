package org.prlprg.ir.type.sexp;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.FunSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SpecialSXP;

/**
 * Helper (static and instance) methods for {@link RSexpType}.
 *
 * <p>This is an interface because we don't want to make the {@link RSexpType}{@code .java} too
 * large.
 */
sealed interface RSexpTypeHelpers permits RSexpType {
  // region interned constants
  /** The type of a value we know absolutely nothing about, besides it being an {@link SEXP}. */
  RSexpType SEXP =
      RSexpType.of(
          RValueType.ANY, AttributesType.ANY, RPromiseType.MAYBE_LAZY_MAYBE_PROMISE, Maybe.MAYBE);

  /** The type of a value we know absolutely nothing about except it's missing. */
  RSexpType MISSING =
      new RSexpTypeImpl(RValueType.NOTHING, AttributesType.BOTTOM, RPromiseType.VALUE, Maybe.YES);

  /** The type of a value that is an {@link SEXP} and not a promise. */
  RSexpType VALUE_MAYBE_MISSING = RSexpType.SEXP.forced();

  /**
   * The type of a value that is an {@link SEXP}, not a promise, and not {@linkplain
   * SEXPs#MISSING_ARG missing}.
   */
  RSexpType VALUE_NOT_MISSING = RSexpType.SEXP.forcedNotMissing();

  /**
   * The type of a value we know absolutely nothing about, except that it's either a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RSexpType PROMISE_MAYBE_MISSING = RSexpType.SEXP.promiseWrapped();

  /** The type of a value we know absolutely nothing about, except that it <i>is</i> a promise. */
  RSexpType PROMISE_NOT_MISSING = RSexpType.SEXP.notMissing().promiseWrapped();

  /**
   * The type of a function we know absolutely nothing about besides it being a function (could be a
   * special or builtin).
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType FUN = VALUE_NOT_MISSING.withValue(RFunType.ANY);

  /**
   * The type of a function we know absolutely nothing about besides it being a special or builtin
   * function.
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType SEXP_BUILTIN_OR_SPECIAL = VALUE_NOT_MISSING.withValue(RBuiltinOrSpecialType.ANY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have SEXP attributes (e.g. AST node), and is an {@link EnvSXP}.
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType ENV = VALUE_NOT_MISSING.withValue(REnvType.ANY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have SEXP attributes (e.g. AST node).
   */
  RSexpType SIMPLE = VALUE_NOT_MISSING.withAttributes(AttributesType.EMPTY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * doesn't have SEXP attributes (e.g. AST node), and is a {@link PrimVectorSXP}.
   */
  RSexpType SIMPLE_PRIM_VEC = SIMPLE.withValue(RPrimVecType.ANY);

  /**
   * The type of the {@code ...} parameter or argument.
   *
   * <p>Surprisingly, it's maybe missing. I think because when you pass {@code ...} to another
   * function, there's no guarantee that you are passing SEXPthing to it, so we assume that you are
   * passing a "missing" argument. But I don't know and maybe it shouldn't be maybe-missing...
   *
   * <p>Idk if it can maybe be or always is a promise (since GNU-R passes function arguments as
   * promises), but right now it's marked as always being a value.
   */
  RSexpType DOTS_LIST = VALUE_MAYBE_MISSING.withValue(RDotsListType.ANY);

  /**
   * The type of the {@code ...} argument, but maybe different. Currently it's not different.
   *
   * <p>TODO: Figure this out. Idk if we'll do it different than PIR. I think they could be the same
   * type as long as they occur in disjoint positions, but maybe there are some issues...
   */
  RSexpType EXPANDED_DOTS = DOTS_LIST;

  /** The type of a boolean, i.e. a simple scalar logical that can't be NA. */
  RSexpType BOOL = SIMPLE.withValue(RLogicalType.BOOL);

  /** The type of a simple scalar integer, real, or logical that permits NA. */
  RSexpType NUMERIC_OR_LOGICAL_MAYBE_NA = SIMPLE.withValue(RNumericOrLogicalType.ANY);

  /** The type of a simple scalar integer, real, or logical that doesn't permit NA. */
  RSexpType NUMERIC_OR_LOGICAL_NOT_NA = SIMPLE.withValue(RNumericOrLogicalType.NO_NA);

  /** The type whose only instance is {@link SEXPs#NULL}. */
  RSexpType NULL = SIMPLE.withValue(RNilType.ANY);

  // endregion interned constants

  // region helper derived constructors
  /** Returns the same type except with {@link AttributesType#EMPTY}. */
  default RSexpType withNoAttributes() {
    return cast(this).withAttributes(AttributesType.EMPTY);
  }

  /**
   * Returns the same type except {@link RSexpType#promise() promise()}} is {@link
   * RPromiseType#VALUE}, <i>unless</i> this is the nothing type.
   */
  default RSexpType forced() {
    return cast(this).withPromise(RPromiseType.VALUE);
  }

  /**
   * Returns the same type except {@link RSexpType#promise() promise()}} is {@link
   * RPromiseType#LAZY_PROMISE}, <i>unless</i> this is the nothing type.
   */
  default RSexpType lazy() {
    return cast(this).withPromise(RPromiseType.LAZY_PROMISE);
  }

  /**
   * If this type is maybe or definitely lazy, returns the not-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   */
  default RSexpType strict() {
    var self = cast(this);
    return self.promise() == null ? self : self.withPromise(self.promise().strict());
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  default RSexpType maybeLazy() {
    var self = cast(this);
    return self.promise() == null ? self : self.withPromise(self.promise().maybeLazy());
  }

  /**
   * If this type is a value or maybe a promise, returns a definitely-promise (maybe lazy if it's a
   * value). Otherwise returns itself (including if this is the nothing type).
   */
  default RSexpType promiseWrapped() {
    var self = cast(this);
    return self.promise() == null ? self : self.withPromise(self.promise().promiseWrapped());
  }

  /**
   * If the type is maybe missing, returns the non-missing equivalent. If definitely missing, return
   * the nothing type.
   */
  default RSexpType notMissing() {
    return cast(this).withMissingness(Maybe.NO);
  }

  /** Returns the maybe-missing equivalent of this type. */
  default RSexpType maybeMissing() {
    return cast(this).withMissingness(Maybe.MAYBE);
  }

  /**
   * Converts into a non-missing value. If definitely missing, returns the nothing type.
   *
   * <p>e.g. the operation done to a expression before it gets assigned to a variable (it gets
   * forced, then missingness throws an error).
   */
  default RSexpType forcedNotMissing() {
    return cast(this).withMissingness(Maybe.NO);
  }

  // endregion helper derived constructors

  // region helper accessors
  /**
   * Whether this is {@link RSexpType#SEXP}.
   *
   * <p>If true, every {@link SEXP} is an instance.
   */
  default boolean isSEXP() {
    return this == RSexpType.SEXP;
  }

  /**
   * Is an instance value wrapped in a (strict or lazy) promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link RType#NOTHING}.
   */
  default @Nullable Maybe isPromise() {
    var self = cast(this);
    return self.promise() == null ? null : self.promise().isPromise();
  }

  /**
   * Is an instance value wrapped in a lazy promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link RType#NOTHING}.
   */
  default @Nullable Maybe isLazy() {
    var self = cast(this);
    return self.promise() == null ? null : self.promise().isLazy();
  }

  /**
   * Returns the {@link SEXPType} of the value, which may be wrapped in a promise (so the instance's
   * real {@link SEXPType} is {@link SEXPType#PROM}).
   */
  default @Nullable SEXPType valueSexpType() {
    var self = cast(this);
    return self.value().sexpType();
  }

  /**
   * Is the instance value a {@linkplain FunSXP function} ({@linkplain CloSXP closure}, {@linkplain
   * BuiltinSXP builtin}, or {@linkplain SpecialSXP special})?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link RType#NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isFunction() {
    return cast(this).value().relation(RFunType.ANY);
  }

  /**
   * Is the instance value a {@linkplain PrimVectorSXP primitive vector}?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link RType#NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isPrimVec() {
    return cast(this).value().relation(RPrimVecType.ANY);
  }

  /**
   * Is the instance value an R object, i.e. does it have the "class" attribute?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link RType#NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isObject() {
    // FIXME: handle S4 when we add them.
    return cast(this).attributes().relation(AttributesType.ANY_OBJECT);
  }

  /**
   * Is the instance value the "..." in a function call?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link RType#NOTHING}.
   */
  default Maybe isExpandedDots() {
    return cast(this).relation(RSexpType.EXPANDED_DOTS);
  }

  // endregion helper accessors

  private static RSexpType cast(RSexpTypeHelpers type) {
    return switch (type) {
      case RSexpType t -> t;
    };
  }
}
