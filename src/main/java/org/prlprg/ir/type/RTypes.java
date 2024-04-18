package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Objects;
import java.util.stream.Stream;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.type.BaseRType.NotPromise;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.rshruntime.TypeFeedback;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;

/**
 * All global {@link RType}s and methods to create {@link RType}s are here so they're easy to find.
 */
public class RTypes {
  /** The type of an expression which hangs, errors, or otherwise diverts control flow. */
  public static final RType NOTHING = new RType();

  /**
   * The type of a value we know absolutely nothing about (this is common, e.g. arbitrary {@code
   * LdVar}).
   */
  public static final RType ANY =
      new RType(
          new RGenericValueType(
              null, BaseRType.ANY_VALUE, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN),
          RPromiseType.MAYBE_LAZY_PROMISE,
          Troolean.MAYBE);

  /** The type of a value we know absolutely nothing about, except that it's not a promise. */
  public static final RType ANY_VALUE =
      new RType(
          new RGenericValueType(
              null, BaseRType.ANY_VALUE, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN),
          RPromiseType.VALUE,
          Troolean.MAYBE);

  /** The type of a value we know absolutely nothing about, except that it <i>is</i> a promise. */
  public static final RType ANY_PROM =
      new RType(
          new RGenericValueType(
              null, BaseRType.ANY_VALUE, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN),
          RPromiseType.PROMISE_MAYBE_LAZY,
          Troolean.MAYBE);

  /**
   * The type of a value we know absolutely nothing about, except that it's not a promise or
   * missing.
   */
  public static final RType ANY_VALUE_NOT_MISSING =
      new RType(
          new RGenericValueType(
              null, BaseRType.ANY_VALUE, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN),
          RPromiseType.VALUE,
          Troolean.NO);

  /**
   * The type of a function we know absolutely nothing about besides it being a function (could be a
   * special or builtin).
   */
  public static final RType ANY_FUN =
      new RType(
          new RFunctionTypeImpl(
              null,
              null,
              AttributesTypes.UNKNOWN,
              MaybeNat.UNKNOWN,
              ImmutableList.of(),
              Troolean.MAYBE),
          RPromiseType.VALUE,
          Troolean.NO);

  /**
   * The type of a function we know absolutely nothing about besides it being a special or builtin
   * function.
   */
  public static final RType ANY_SYM_FUN = ANY_FUN;

  /**
   * The type of a value we know absolutely nothing about besides it not having attributes, object,
   * promise-wrapped, or missing (e.g. AST node).
   */
  public static final RType ANY_SIMPLE =
      new RType(
          new RGenericValueType(null, BaseRType.ANY_VALUE, AttributesTypes.NONE, MaybeNat.UNKNOWN),
          RPromiseType.VALUE,
          Troolean.NO);

  /**
   * The type of a value we know absolutely nothing about besides it not having attributes, object,
   * promise-wrapped, or missing, and being a primitive vector.
   */
  public static final RType ANY_SIMPLE_PRIM_VEC =
      new RType(
          new RPrimVecTypeImpl(
              null,
              AttributesTypes.NONE,
              MaybeNat.UNKNOWN,
              PrimVecElementRType.ANY,
              MaybeNat.UNKNOWN,
              NoOrMaybe.MAYBE),
          RPromiseType.VALUE,
          Troolean.NO);

  /** The {@link RType} of the missing value. */
  public static final RType OF_MISSING = new RType(null, RPromiseType.VALUE, Troolean.YES);

  public static final RType DOTS_ARG =
      new RType(
          new RGenericValueType(null, BaseRType.DOTS, AttributesTypes.NONE, MaybeNat.UNKNOWN),
          RPromiseType.VALUE,
          Troolean.NO);

  /** TODO: Define {@code SEXPs.EXPANDED_DOTS} and make this {@link RTypes#exact(SEXP)}? */
  public static final RType EXPANDED_DOTS =
      new RType(
          new RGenericValueType(null, BaseRType.SYMBOL, AttributesTypes.NONE, MaybeNat.UNKNOWN),
          RPromiseType.VALUE,
          Troolean.NO);

  /** The {@link RType} of a simple scalar logical that can't be NA. */
  public static final RType BOOL =
      new RType(
          new RPrimVecTypeImpl(
              null,
              AttributesTypes.NONE,
              MaybeNat.UNKNOWN,
              PrimVecElementRType.LOGICAL,
              MaybeNat.of(1),
              NoOrMaybe.NO),
          RPromiseType.VALUE,
          Troolean.NO);

  /** A simple scalar integer, real, or logical that permits NA. */
  public static final RType NUMERIC_OR_LOGICAL =
      new RType(
          new RPrimVecTypeImpl(
              null,
              AttributesTypes.NONE,
              MaybeNat.UNKNOWN,
              PrimVecElementRType.NUMERIC_OR_LOGICAL,
              MaybeNat.of(1),
              NoOrMaybe.MAYBE),
          RPromiseType.VALUE,
          Troolean.NO);

  /** A simple scalar integer, real, or logical that doesn't permit NA. */
  public static final RType NUMERIC_OR_LOGICAL_NO_NA =
      new RType(
          new RPrimVecTypeImpl(
              null,
              AttributesTypes.NONE,
              MaybeNat.UNKNOWN,
              PrimVecElementRType.NUMERIC_OR_LOGICAL,
              MaybeNat.of(1),
              NoOrMaybe.NO),
          RPromiseType.VALUE,
          Troolean.NO);

  /** Create a function type with the given data, promise type, and missingness. */
  public static RType function(
      RFunctionType valueType, PromiseRType promiseType, Troolean missing) {
    return new RType(valueType, RPromiseType.of(promiseType), missing);
  }

  /** Create a primitive vector type with the given data, promise type, and missingness. */
  public static RType primVec(RPrimVecType valueType, PromiseRType promiseType, Troolean missing) {
    return new RType(valueType, RPromiseType.of(promiseType), missing);
  }

  /** The (most precise representable) type of the given value. */
  public static RType exact(SEXP value) {
    if (value instanceof PromSXP p) {
      return exact(p.val()).promiseWrapped(new RPromiseType.Promise(p));
    }
    if (value == SEXPs.MISSING_ARG) {
      return OF_MISSING;
    }
    return new RType(
        switch (value) {
          case CloSXP closure -> RFunctionTypeImpl.exact(closure);
          case PrimVectorSXP<?> primVec -> RPrimVecTypeImpl.exact(primVec);
          default -> RGenericValueType.exact(value);
        },
        RPromiseType.VALUE,
        Troolean.NO);
  }

  /** The type of a value which passes the assumptions generated by the feedback. */
  public static RType assume(TypeFeedback feedback) {
    // TODO
    return ANY;
  }

  /** The return type of this static call. TODO: Replace param call with {@code Closure} */
  public static RType staticCallReturn(CFG call) {
    // TODO
    return ANY;
  }

  /** The type after a arithmetic bytecode instruction, whose arguments have the given types. */
  public static RType arithmeticOp(RType... types) {
    // TODO
    return ANY;
  }

  /** The type after a comparison bytecode instruction, whose arguments have the given types. */
  public static RType comparisonOp(RType... types) {
    // TODO
    return ANY;
  }

  /**
   * The type after a simple "and", "or", or "not" bytecode instruction, whose arguments have the
   * given types.
   */
  public static RType booleanOp(RType... types) {
    // TODO
    return ANY;
  }

  /**
   * The type of a value we know has a specific {@link SEXPType} and no weirdness (no promise,
   * missing, or attributes), produced by builtins. If {@code type} is the type of a primitive
   * vector, this will also return the type for a scalar.
   *
   * @throws IllegalArgumentException if {@link SEXPType} is a promise, symbol, or "any".
   */
  public static RType simple(SEXPType type) {
    // TODO: make sure this is implemented correctly
    switch (type) {
      case SEXPType.PROM ->
          throw new IllegalArgumentException("No such thing as a \"simple promise\"");
      case SEXPType.ANY ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple any\" (GNU-R's \"any\" type is special and has no instances)");
      case SEXPType.SYM ->
          throw new IllegalArgumentException("No such thing as a \"simple symbol\"");
    }
    var valueType =
        FunctionRType.of(type) != null
            ? new RFunctionTypeImpl(
                null,
                FunctionRType.of(type),
                AttributesTypes.NONE,
                MaybeNat.UNKNOWN,
                ImmutableList.of(),
                Troolean.MAYBE)
            : PrimVecElementRType.of(type) != null
                ? new RPrimVecTypeImpl(
                    null,
                    AttributesTypes.NONE,
                    MaybeNat.UNKNOWN,
                    Objects.requireNonNull(PrimVecElementRType.of(type)),
                    MaybeNat.UNKNOWN,
                    NoOrMaybe.NO)
                : new RGenericValueType(
                    null, (NotPromise) BaseRType.of(type), AttributesTypes.NONE, MaybeNat.UNKNOWN);
    return new RType(valueType, RPromiseType.VALUE, Troolean.NO);
  }

  public static RType toForSeq(RType ignored) {
    // TODO
    return ANY;
  }

  public static RType builtin(BuiltinId ignored) {
    // TODO: Specialize
    return ANY_SYM_FUN;
  }

  /** Type which is the union of all given types. */
  public static RType union(RType... types) {
    return union(Arrays.stream(types));
  }

  /** Type which is the union of all given types. */
  public static RType union(Collection<RType> types) {
    return union(types.stream());
  }

  /** Type which is the union of all given types. */
  public static RType union(Stream<RType> types) {
    return types.reduce(RType::union).orElse(NOTHING);
  }

  /** Type which is the intersection of all given types. */
  public static RType intersection(RType... types) {
    return intersection(Arrays.stream(types));
  }

  /** Type which is the intersection of all given types. */
  public static RType intersection(Collection<RType> types) {
    return intersection(types.stream());
  }

  /** Type which is the intersection of all given types. */
  public static RType intersection(Stream<RType> types) {
    return types.reduce(RType::intersection).orElse(ANY);
  }

  private RTypes() {}
}
