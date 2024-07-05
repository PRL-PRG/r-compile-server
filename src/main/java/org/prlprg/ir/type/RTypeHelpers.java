package org.prlprg.ir.type;

import java.util.Arrays;
import java.util.Collection;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.PromSXP;
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
  //
  // Need to explicitly invoke `new RTypeImpl` to create these instances, because `of` special-cases
  // to return them.
  /** The type of an expression which hangs, errors, or otherwise diverts control flow. */
  RType NOTHING = new RTypeImpl(RValueType.NOTHING, AttributesType.BOTTOM, null, null);

  /** The type of a value we know absolutely nothing about. */
  RType ANY =
      new RTypeImpl(
          RValueType.ANY, AttributesType.ANY, RPromiseType.MAYBE_LAZY_MAYBE_PROMISE, Maybe.MAYBE);

  /** The type of a value we know absolutely nothing about except it's missing. */
  RType MISSING =
      new RTypeImpl(RValueType.NOTHING, AttributesType.BOTTOM, RPromiseType.VALUE, Maybe.YES);

  /** The type of a value we know absolutely nothing about, except that it's not a promise. */
  RType ANY_VALUE_MAYBE_MISSING =
      new RTypeImpl(RValueType.ANY, AttributesType.ANY, RPromiseType.VALUE, Maybe.MAYBE);

  /**
   * The type of a value we know absolutely nothing about, except that it's not a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RType ANY_VALUE_NOT_MISSING =
      new RTypeImpl(RValueType.ANY, AttributesType.ANY, RPromiseType.VALUE, Maybe.NO);

  /**
   * The type of a value we know absolutely nothing about, except that it's either a promise or
   * {@linkplain SEXPs#MISSING_ARG missing}.
   */
  RType ANY_PROMISE_MAYBE_MISSING =
      new RTypeImpl(RValueType.ANY, AttributesType.ANY, RPromiseType.STRICT_PROMISE, Maybe.MAYBE);

  /** The type of a value we know absolutely nothing about, except that it <i>is</i> a promise. */
  RType ANY_PROMISE_NOT_MISSING =
      new RTypeImpl(RValueType.ANY, AttributesType.ANY, RPromiseType.STRICT_PROMISE, Maybe.NO);

  /**
   * The type of a function we know absolutely nothing about besides it being a function (could be a
   * special or builtin).
   */
  RType ANY_FUNCTION =
      new RTypeImpl(RFunctionType.ANY, AttributesType.ANY, RPromiseType.VALUE, Maybe.NO);

  /**
   * The type of a function we know absolutely nothing about besides it being a special or builtin
   * function.
   */
  RType ANY_BUILTIN_OR_SPECIAL =
      new RTypeImpl(RBuiltinOrSpecialType.ANY, AttributesType.ANY, RPromiseType.VALUE, Maybe.NO);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * and doesn't have any attributes (e.g. AST node).
   */
  RType ANY_SIMPLE =
      new RTypeImpl(RValueType.ANY, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);

  /**
   * The type of a value we know absolutely nothing about besides it's not a promise, not missing,
   * doesn't have any attributes (e.g. AST node), and is a primitive vector.
   */
  RType ANY_SIMPLE_PRIM_VEC =
      new RTypeImpl(RPrimVecType.ANY, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);

  /**
   * The type of the {@code ...} parameter or argument.
   *
   * <p>Surprisingly, it's maybe missing. I think because when you pass {@code ...} to another
   * function, there's no guarantee that you are passing anything to it, so we assume that you are
   * passing a "missing" argument. But I don't know and maybe it shouldn't be maybe-missing...
   */
  RType DOTS =
      new RTypeImpl(RDotsType.INSTANCE, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.MAYBE);

  /** The type of a boolean, i.e. a simple scalar logical that can't be NA. */
  RType BOOL =
      new RTypeImpl(RBoolType.INSTANCE, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);

  /** The type of a simple scalar integer, real, or logical that permits NA. */
  RType NUMERIC_OR_LOGICAL_MAYBE_NA =
      new RTypeImpl(
          RValueType.NUMERIC_OR_LOGICAL, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);

  /** The type of a simple scalar integer, real, or logical that doesn't permit NA. */
  RType NUMERIC_OR_LOGICAL_NOT_NA =
      new RTypeImpl(
          RValueType.NUMERIC_OR_LOGICAL, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);

  // endregion interned constants

  // region helper constructors
  /** The (most precise representable) type of the given value. */
  static RType exact(SEXP value) {
    var promiseWrapped = RPromiseType.VALUE;
    if (value instanceof PromSXP p) {
      value = p.val();
      promiseWrapped = RPromiseType.promise(p.isLazy());
    }

    if (value == SEXPs.MISSING_ARG) {
      return MISSING;
    }

    return RType.of(RValueType.exact(value), AttributesType.exact(value.attributes()), promiseWrapped, Maybe.NO);
  }

  /**
   * The type of a value with the given {@link SEXPType}, not a promise, not missing, and no
   * attributes. If {@code type} is the type of a primitive vector, this will also return the type
   * for a scalar.
   *
   * @throws IllegalArgumentException if {@link SEXPType} is a promise or "any".
   */
  static RType simple(SEXPType type) {
    switch (type) {
      case SEXPType.PROM ->
          throw new IllegalArgumentException("No such thing as a \"simple promise\"");
      case SEXPType.ANY ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple any\" (GNU-R's \"any\" type is special and has no instances)");
    }
    return new RType(RValueType.simple(type), AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);
  }


  /** The type after a arithmetic unop whose argument has the given types. */
  static RType arithmeticOp(RType unary) {
    // TODO
    return ANY
  }

  /** The type after a arithmetic binop whose arguments have the given types. */
  static RType arithmeticOp(RType lhs, RType rhs) {
    // TODO
    return ANY;
  }

  /** The type after a comparison binop whose arguments have the given types. */
  static RType comparisonOp(RType lhs, RType rhs) {
    // TODO
    return ANY;
  }

  /**
   * The type after a simple "not" binop whose argument has the given types.
   */
  static RType booleanOp(RType unary) {
    // TODO
    return ANY;
  }

  /**
   * The type after a simple "and" or "or" binop whose arguments have the given types.
   */
  static RType booleanOp(RType lhs, RType rhs) {
    // TODO
    return ANY;
  }

  /** The closure type of the given builtin.
   *
   * <p><i>Not</i> the return type. Instead, this is guaranteed to be a {@link RFunctionType}, and
   * you can get the return of that.
   */
  static RType builtin(BuiltinId id) {
    // TODO: Specialize
    return ANY_BUILTIN_OR_SPECIAL;
  }

  /** Type which is the {@linkplain RType#union(RType)} union} of all given types. */
  static RType union(RType type1, RType type2, RType... types) {
    return Stream.concat(Stream.of(type1, type2), Arrays.stream(types)).collect(RType.toUnion());
  }

  /** Type which is the {@linkplain RType#union(RType)} union} of all given types. */
  static RType union(Collection<RType> types) {
    return types.stream().collect(toUnion());
  }

  /** Creates a {@linkplain RType#union(RType)} union} from all types in the stream. */
  static Collector<RType, RType[], RType> toUnion() {
    return Collector.of(
        () -> new RType[]{NOTHING},
        (RType[] acc, RType next) -> acc[0] = acc[0].union(next),
        (RType[] a, RType[] b) -> new RType[]{a[0].union(b[0])},
        (RType[] a) -> a[0],
        Characteristics.CONCURRENT, Characteristics.UNORDERED);
  }

  /** Type which is the {@linkplain RType#intersection(RType)} intersection} of all given types. */
  static RType intersection(RType type1, RType type2, RType... types) {
    return Stream.concat(Stream.of(type1, type2), Arrays.stream(types)).collect(toIntersection());
  }

  /** Type which is the {@linkplain RType#intersection(RType)} intersection} of all given types. */
  static RType intersection(Collection<RType> types) {
    return types.stream().collect(toIntersection());
  }

  /** Creates an {@linkplain RType#intersection(RType)} intersection} from all types in the stream. */
  static Collector<RType, RType[], RType> toIntersection() {
    return Collector.of(
        () -> new RType[]{ANY},
        (RType[] acc, RType next) -> acc[0] = acc[0].intersection(next),
        (RType[] a, RType[] b) -> new RType[]{a[0].intersection(b[0])},
        (RType[] a) -> a[0],
        Characteristics.CONCURRENT, Characteristics.UNORDERED);
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
    var self = ((RType) this);
    return self.promise() == null ? self : self.withPromise(self.promise().strict());
  }

  /**
   * If this type is definitely non-lazy, returns the maybe-lazy equivalent. Otherwise returns
   * itself (including if this is the nothing type).
   *
   * <p>In particular, if this is a value, returns a maybe-promise.
   */
  default RType maybeLazy() {
    var self = ((RType) this);
    return self.promise() == null ? self : self.withPromise(self.promise().maybeLazy());
  }

  /**
   * If this type is a value, returns a maybe-strict-promise. Otherwise returns itself (including if
   * this is the nothing type).
   */
  default RType promiseWrapped() {
    var self = ((RType) this);
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

  // endregion helper constructors

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
    var self = ((RType) this);
    return self.promise() == null ? null : self.promise().isPromise();
  }

  /**
   * Is an instance value wrapped in a lazy promise?
   *
   * <p>Returns {@code null} iff {@code self} is {@link #NOTHING}.
   */
  default @Nullable Maybe isLazy() {
    var self = ((RType) this);
    return self.promise() == null ? null : self.promise().isLazy();
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
    return ((RType) this).value().relation(RFunctionType.ANY);
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
    return ((RType) this).attributes().relation(AttributesType.ANY_OBJECT);
  }

  // endregion helper accessors
}
