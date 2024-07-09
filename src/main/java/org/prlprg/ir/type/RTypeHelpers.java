package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
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
 * Helper (static and instance) methods for {@link RType}.
 *
 * <p>This is an interface because we don't want to make the {@link RType}{@code .java} too large.
 */
sealed interface RTypeHelpers permits RType {
  // region interned constants
  /** The type of an expression which hangs, errors, or otherwise diverts control flow. */
  RType NOTHING =
      new RTypeImpl(RValueType.NOTHING, YesOrMaybe.YES, AttributesType.BOTTOM, null, null);

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
  RType MISSING =
      new RTypeImpl(
          RValueType.NOTHING, YesOrMaybe.YES, AttributesType.BOTTOM, RPromiseType.VALUE, Maybe.YES);

  /** The type of a value we know absolutely nothing about. */
  RType ANY =
      RType.of(
          RValueType.ANY,
          YesOrMaybe.MAYBE,
          AttributesType.ANY,
          RPromiseType.MAYBE_LAZY_MAYBE_PROMISE,
          Maybe.MAYBE);

  /** The type of a value we know absolutely nothing about, except that it's not a promise. */
  RType ANY_VALUE_MAYBE_MISSING = ANY.forced();

  /**
   * The type of a value we know absolutely nothing about, except that it's not a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RType ANY_VALUE_NOT_MISSING = ANY_VALUE_MAYBE_MISSING.notMissing();

  /**
   * The type of a value we know absolutely nothing about, except that it's either a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RType ANY_PROMISE_MAYBE_MISSING = ANY.promiseWrapped();

  /** The type of a value we know absolutely nothing about, except that it <i>is</i> a promise. */
  RType ANY_PROMISE_NOT_MISSING = ANY_PROMISE_MAYBE_MISSING.notMissing();

  /**
   * The type of a function we know absolutely nothing about besides it being a function (could be a
   * special or builtin).
   *
   * <p>These <i>can</i> have attributes.
   */
  RType ANY_FUNCTION = ANY_VALUE_NOT_MISSING.withValue(RFunType.ANY);

  /**
   * The type of a function we know absolutely nothing about besides it being a special or builtin
   * function.
   *
   * <p>These <i>can</i> have attributes.
   */
  RType ANY_BUILTIN_OR_SPECIAL = ANY_VALUE_NOT_MISSING.withValue(RBuiltinOrSpecialType.ANY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have any attributes (e.g. AST node), and is an {@link EnvSXP}.
   *
   * <p>These <i>can</i> have attributes.
   */
  RType ANY_ENV = ANY_VALUE_NOT_MISSING.withValue(REnvType.ANY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have any attributes (e.g. AST node).
   */
  RType ANY_SIMPLE = ANY_VALUE_NOT_MISSING.withAttributes(AttributesType.EMPTY);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * doesn't have any attributes (e.g. AST node), and is a {@link PrimVectorSXP}.
   */
  RType ANY_SIMPLE_PRIM_VEC = ANY_SIMPLE.withValue(RPrimVecType.ANY);

  /**
   * The type of the {@code ...} parameter or argument.
   *
   * <p>Surprisingly, it's maybe missing. I think because when you pass {@code ...} to another
   * function, there's no guarantee that you are passing anything to it, so we assume that you are
   * passing a "missing" argument. But I don't know and maybe it shouldn't be maybe-missing...
   *
   * <p>Idk if it can maybe be or always is a promise (since GNU-R passes function arguments as
   * promises), but right now it's marked as always being a value.
   */
  RType DOTS_LIST = ANY_VALUE_MAYBE_MISSING.withValue(RDotsListType.ANY);

  /**
   * The type of the {@code ...} argument, but maybe different. Currently it's not different.
   *
   * <p>TODO: Figure this out. Idk if we'll do it different than PIR. I think they could be the same
   * type as long as they occur in disjoint positions, but maybe there are some issues...
   */
  RType EXPANDED_DOTS = DOTS_LIST;

  /** The type of a boolean, i.e. a simple scalar logical that can't be NA. */
  RType BOOL = ANY_SIMPLE.withValue(RLogicalType.BOOL);

  /** The type of a simple scalar integer, real, or logical that permits NA. */
  RType NUMERIC_OR_LOGICAL_MAYBE_NA = ANY_SIMPLE.withValue(RNumericOrLogicalType.ANY);

  /** The type of a simple scalar integer, real, or logical that doesn't permit NA. */
  RType NUMERIC_OR_LOGICAL_NOT_NA = ANY_SIMPLE.withValue(RNumericOrLogicalType.NO_NA);

  /** The type whose only instance is {@link SEXPs#NULL}. */
  RType NULL = ANY_SIMPLE.withValue(RNilType.ANY);

  // endregion interned constants

  // region helper derived constructors
  /**
   * Returns the same type except owned; that is, the type at its definition is guaranteed to be
   * unique, so if it's last use is consuming, that use doesn't have to copy.
   */
  default RType owned() {
    return ((RType) this).withOwnership(YesOrMaybe.YES);
  }

  /**
   * Returns the same type except not owned; that is, the type at its definition isn't guaranteed to
   * be unique, so every consuming use must copy.
   */
  default RType shared() {
    return ((RType) this).withOwnership(YesOrMaybe.MAYBE);
  }

  /** Returns the same type except with {@link AttributesType#EMPTY}. */
  default RType withNoAttributes() {
    return ((RType) this).withAttributes(AttributesType.EMPTY);
  }

  /**
   * Returns the same type except {@link RType#promise() promise()}} is {@link RPromiseType#VALUE},
   * <i>unless</i> this is the nothing type.
   */
  default RType forced() {
    return ((RType) this).withPromise(RPromiseType.VALUE);
  }

  /**
   * Returns the same type except {@link RType#promise() promise()}} is {@link
   * RPromiseType#LAZY_PROMISE}, <i>unless</i> this is the nothing type.
   */
  default RType lazy() {
    return ((RType) this).withPromise(RPromiseType.LAZY_PROMISE);
  }

  /**
   * If this type is maybe or definitely lazy, returns the not-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   */
  default RType strict() {
    var self = (RType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().strict());
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  default RType maybeLazy() {
    var self = (RType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().maybeLazy());
  }

  /**
   * If this type is a value or maybe a promise, returns a definitely-promise (strict unless
   * otherwise specified). Otherwise returns itself (including if this is the nothing type).
   */
  default RType promiseWrapped() {
    var self = (RType) this;
    return self.promise() == null ? self : self.withPromise(self.promise().promiseWrapped());
  }

  /**
   * If the type is maybe missing, returns the non-missing equivalent. If definitely missing, return
   * the nothing type.
   */
  default RType notMissing() {
    return ((RType) this).withMissingness(Maybe.NO);
  }

  /** Returns the maybe-missing equivalent of this type. */
  default RType maybeMissing() {
    return ((RType) this).withMissingness(Maybe.MAYBE);
  }

  // endregion helper derived constructors

  // region helper accessors
  /**
   * Whether this is {@link #NOTHING}.
   *
   * <p>If true, an instance will never exist, and any code which would produce an instance actually
   * either crashes, hangs, or otherwise diverts control flow.
   */
  default boolean isNothing() {
    return this == NOTHING;
  }

  /**
   * Whether this is {@link #ANY}.
   *
   * <p>If true, every {@link SEXP} is an instance.
   */
  default boolean isAny() {
    return this == ANY;
  }

  /**
   * Is an instance value wrapped in a (strict or lazy) promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link #NOTHING}.
   */
  default @Nullable Maybe isPromise() {
    var self = (RType) this;
    return self.promise() == null ? null : self.promise().isPromise();
  }

  /**
   * Is an instance value wrapped in a lazy promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link #NOTHING}.
   */
  default @Nullable Maybe isLazy() {
    var self = (RType) this;
    return self.promise() == null ? null : self.promise().isLazy();
  }

  /**
   * Returns the {@link SEXPType} of the value, which may be wrapped in a promise (so the instance's
   * real {@link SEXPType} is {@link SEXPType#PROM}).
   */
  default @Nullable SEXPType valueSexpType() {
    var self = (RType) this;
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
    return ((RType) this).value().relation(RFunType.ANY);
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
    return ((RType) this).value().relation(RPrimVecType.ANY);
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
    return ((RType) this).attributes().relation(AttributesType.ANY_OBJECT);
  }

  /**
   * Is the instance value the "..." in a function call?
   *
   * <p>Returns {@link Maybe#YES YES} iff {@code self} is {@link #NOTHING}.
   */
  default Maybe isExpandedDots() {
    return ((RType) this).relation(RType.EXPANDED_DOTS);
  }

  // endregion helper accessors
}
