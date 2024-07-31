package org.prlprg.ir.type.sexp;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.FunSXP;
import org.prlprg.sexp.MissingSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SpecialSXP;

/**
 * Helper (static and instance) methods for {@link RSexpType}.
 *
 * <p>This is an interface because we don't want to make the {@link RSexpType}{@code .java} too large.
 */
sealed interface RSexpTypeHelpers permits RSexpType {
  // region interned constants
  /**
   * The type of a value we know absolutely nothing about except it's missing.
   *
   * <p>The missing type <i>is</i> considered "owned", even though {@link SEXPs#MISSING_ARG} is
   * shared, because the missing type's value type is {@link RValueType#NOTHING}. The "missingness"
   * part, like the "promise-wrapper" part, is separate from the "value" part. Furthermore, the
   * missing type is immutable, so its ownership doesn't matter to itself, but "maybe missing" types
   * can be owned and that does matter, because we want to be able to consume the type after proving
   * that it's not missing.
   */
  RSexpType<? extends MissingSXP> MISSING =
      new RSexpTypeImpl<>(
          RValueType.NOTHING, YesOrMaybe.YES, AttributesType.BOTTOM, RPromiseType.VALUE, Maybe.YES);

  /** The type of a value we know absolutely nothing about, besides it being an {@link SEXP}. */
  RSexpType<? extends SEXP> SEXP =
      RSexpType.of(
          RValueType.ANY,
          YesOrMaybe.MAYBE,
          AttributesType.ANY,
          RPromiseType.MAYBE_LAZY_MAYBE_PROMISE,
          Maybe.MAYBE);

  /** The type of a value that is an {@link SEXP} and not a promise. */
  RSexpType SEXP_VALUE_MAYBE_MISSING = SEXP.forced();

  /**
   * The type of a value that is an {@link SEXP}, not a promise, and not
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RSexpType SEXP_VALUE_NOT_MISSING = SEXP_VALUE_MAYBE_MISSING.notMissing();

  /**
   * The type of a value we know absolutely nothing about, except that it's either a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RSexpType SEXP_PROMISE_MAYBE_MISSING = SEXP.promiseWrapped();

  /** The type of a value we know absolutely nothing about, except that it <i>is</i> a promise. */
  RSexpType SEXP_PROMISE_NOT_MISSING = SEXP_PROMISE_MAYBE_MISSING.notMissing();

  /**
   * The type of a function we know absolutely nothing about besides it being a function (could be a
   * special or builtin).
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType SEXP_FUNCTION = SEXP_VALUE_NOT_MISSING.withValue(RFunType.SEXP);

  /**
   * The type of a function we know absolutely nothing about besides it being a special or builtin
   * function.
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType SEXP_BUILTIN_OR_SPECIAL = SEXP_VALUE_NOT_MISSING.withValue(RBuiltinOrSpecialType.SEXP);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have SEXP attributes (e.g. AST node), and is an {@link EnvSXP}.
   *
   * <p>These <i>can</i> have attributes.
   */
  RSexpType SEXP_ENV = SEXP_VALUE_NOT_MISSING.withValue(REnvType.SEXP);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have SEXP attributes (e.g. AST node).
   */
  RSexpType SEXP_SIMPLE = SEXP_VALUE_NOT_MISSING.withAttributes(AttributesType.EMPTY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * doesn't have SEXP attributes (e.g. AST node), and is a {@link PrimVectorSXP}.
   */
  RSexpType SEXP_SIMPLE_PRIM_VEC = SEXP_SIMPLE.withValue(RPrimVecType.SEXP);

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
  RSexpType DOTS_LIST = SEXP_VALUE_MAYBE_MISSING.withValue(RDotsListType.SEXP);

  /**
   * The type of the {@code ...} argument, but maybe different. Currently it's not different.
   *
   * <p>TODO: Figure this out. Idk if we'll do it different than PIR. I think they could be the same
   * type as long as they occur in disjoint positions, but maybe there are some issues...
   */
  RSexpType EXPANDED_DOTS = DOTS_LIST;

  /** The type of a boolean, i.e. a simple scalar logical that can't be NA. */
  RSexpType BOOL = SEXP_SIMPLE.withValue(RLogicalType.BOOL);

  /** The type of a simple scalar integer, real, or logical that permits NA. */
  RSexpType NUMERIC_OR_LOGICAL_MAYBE_NA = SEXP_SIMPLE.withValue(RNumericOrLogicalType.SEXP);

  /** The type of a simple scalar integer, real, or logical that doesn't permit NA. */
  RSexpType NUMERIC_OR_LOGICAL_NOT_NA = SEXP_SIMPLE.withValue(RNumericOrLogicalType.NO_NA);

  /** The type whose only instance is {@link SEXPs#NULL}. */
  RSexpType NULL = SEXP_SIMPLE.withValue(RNilType.SEXP);

  // endregion interned constants

  // region helper derived constructors
  /**
   * Returns the same type except owned; that is, the type at its definition is guaranteed to be
   * unique, so if it's last use is consuming, that use doesn't have to copy.
   */
  default RSexpType owned() {
    return ((RSexpType) this).withOwnership(YesOrMaybe.YES);
  }

  /**
   * Returns the same type except not owned; that is, the type at its definition isn't guaranteed to
   * be unique, so every consuming use must copy.
   */
  default RSexpType shared() {
    return ((RSexpType) this).withOwnership(YesOrMaybe.MAYBE);
  }

  /** Returns the same type except with {@link AttributesType#EMPTY}. */
  default RSexpType withNoAttributes() {
    return ((RSexpType) this).withAttributes(AttributesType.EMPTY);
  }

  /**
   * Returns the same type except {@link RSexpType#promise() promise()}} is {@link RPromiseType#VALUE},
   * <i>unless</i> this is the nothing type.
   */
  default RSexpType forced() {
    return ((RSexpType) this).withPromise(RPromiseType.VALUE);
  }

  /**
   * Returns the same type except {@link RSexpType#promise() promise()}} is {@link
   * RPromiseType#LAZY_PROMISE}, <i>unless</i> this is the nothing type.
   */
  default RSexpType lazy() {
    return ((RSexpType) this).withPromise(RPromiseType.LAZY_PROMISE);
  }

  /**
   * If this type is maybe or definitely lazy, returns the not-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   */
  default RSexpType strict() {
    var self = (RSexpType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().strict());
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  default RSexpType maybeLazy() {
    var self = (RSexpType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().maybeLazy());
  }

  /**
   * If this type is a value or maybe a promise, returns a definitely-promise (strict unless
   * otherwise specified). Otherwise returns itself (including if this is the nothing type).
   */
  default RSexpType promiseWrapped() {
    var self = (RSexpType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().promiseWrapped());
  }

  /**
   * If the type is maybe missing, returns the non-missing equivalent. If definitely missing, return
   * the nothing type.
   */
  default RSexpType notMissing() {
    return ((RSexpType) this).withMissingness(Maybe.NO);
  }

  /** Returns the maybe-missing equivalent of this type. */
  default RSexpType maybeMissing() {
    return ((RSexpType) this).withMissingness(Maybe.MAYBE);
  }

  // endregion helper derived constructors

  // region helper accessors
  /**
   * Whether this is {@link #SEXP}.
   *
   * <p>If true, every {@link SEXP} is an instance.
   */
  default boolean isSEXP() {
    return this == SEXP;
  }

  /**
   * Is an instance value wrapped in a (strict or lazy) promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link #NOTHING}.
   */
  default @Nullable Maybe isPromise() {
    var self = (RSexpType) this;
    return self.promise() == null ? null : self.promise().isPromise();
  }

  /**
   * Is an instance value wrapped in a lazy promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link #NOTHING}.
   */
  default @Nullable Maybe isLazy() {
    var self = (RSexpType) this;
    return self.promise() == null ? null : self.promise().isLazy();
  }

  /**
   * Returns the {@link SEXPType} of the value, which may be wrapped in a promise (so the instance's
   * real {@link SEXPType} is {@link SEXPType#PROM}).
   */
  default @Nullable SEXPType valueSexpType() {
    var self = (RSexpType) this;
    return self.value().sexpType();
  }

  /**
   * Is the instance value a {@linkplain FunSXP function} ({@linkplain CloSXP closure}, {@linkplain
   * BuiltinSXP builtin}, or {@linkplain SpecialSXP special})?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link #NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isFunction() {
    return ((RSexpType) this).value().relation(RFunType.SEXP);
  }

  /**
   * Is the instance value a {@linkplain PrimVectorSXP primitive vector}?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link #NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isPrimVec() {
    return ((RSexpType) this).value().relation(RPrimVecType.SEXP);
  }

  /**
   * Is the instance value an R object, i.e. does it have the "class" attribute?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link #NOTHING}.
   *
   * <p>If it's a lazy promise whose value is or may be it, this will still return {@link Maybe#YES}
   * or {@link Maybe#MAYBE}.
   */
  default Maybe isObject() {
    // FIXME: handle S4 when we add them.
    return ((RSexpType) this).attributes().relation(AttributesType.SEXP_OBJECT);
  }

  /**
   * Is the instance value the "..." in a function call?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link #NOTHING}.
   */
  default Maybe isExpandedDots() {
    return ((RSexpType) this).relation(RSexpType.EXPANDED_DOTS);
  }

  // endregion helper accessors
}
