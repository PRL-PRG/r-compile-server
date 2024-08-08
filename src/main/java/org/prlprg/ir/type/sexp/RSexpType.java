package org.prlprg.ir.type.sexp;

import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.function.Function;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.MissingSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.ValueOrMissingSXP;
import org.prlprg.util.NotImplementedError;

/**
 * An {@link RType} (type of a {@link Node}) that is a subtype of {@link SEXP}.
 *
 * <p>Not to be confused with {@link SEXPType}, this is more fine-grained.
 *
 * <p>Because the {@link SEXP} type hierarchy is so complex, this is split into multiple components.
 * Each of these components are lattices, {@code A} is a subtype of (less than) {@code B} if all of
 * {@code A}'s components are less than {@code B}'s corresponding ones, and the components of a
 * union or intersection are the union or intersection of the individual components. The components
 * are:
 *
 * <ul>
 *   <li>{@link RValueType} {@link #value()}: the type of the "value". e.g. int-vector, closure,
 *       environment). {@link RValueType}'s class hierarchy is similar to {@link SEXP}'s: for every
 *       subclass of {@link SEXP} except {@link SymSXP} there is a unique corresponding subclass of
 *       {@link RValueType}, and most (but not all) subclasses of {@link RValueType} correspond to a
 *       unique subclass of {@link SEXP}.
 *   <li>{@link YesOrMaybe} {@link #isOwned()}: whether the "value" described above has no aliases
 *       <i>on its creation</i>, i.e. we can modify it in-place instead of creating a copy on the
 *       last use, even if that use is consuming. Note that the value may be used by multiple
 *       consuming instructions, in which case it needs to be copied for every one that we can't
 *       prove is the last; additionally, if there is a non-consuming instruction that may be after
 *       the last consuming instruction, we have to copy the value (also consider loops, don't have
 *       to consider reflective instructions because they access environments, not SSA variables
 *       that aren't their arguments).
 *   <li>{@link AttributesType} {@link #attributes()}: the type of the "attributes". Some types of
 *       {@linkplain SEXP}s can have {@linkplain Attributes attributes}, such as "names", "class",
 *       and "dims". This is a type whose instances are those {@link Attributes} objects.
 *   <li>{@link RPromiseType} {@link #promise()}: the type of the "promise wrapping"; that is,
 *       whether the "value" described above maybe or definitely is wrapped in a promise, and
 *       whether said promise maybe or definitely is lazy. e.g. the type of a closure value consists
 *       of {@link RClosureType} and {@link RPromiseType#VALUE}, the type of a closure wrapped in a
 *       strict promise consists of {@link RClosureType} and {@link RPromiseType#STRICT_PROMISE},
 *       and the type of a closure that may or may not be a promise that may or may not be lazy
 *       consists of {@link RPromiseType#MAYBE_LAZY_MAYBE_PROMISE}.
 *       <ul>
 *         <li>To be clear, a runtime {@link SEXP} instance of a "promise" closure type is a {@link
 *             PromSXP}, not a {@link CloSXP}, and its attributes are empty (promises don't have
 *             attributes) even if the {@link AttributesType} specifies non-empty attributes. The
 *             {@link RValueType} and {@link AttributesType} don't describe the instance directly,
 *             they describe the part of the instance that may be wrapped within a promise.
 *       </ul>
 *   <li>{@link Maybe} {@link #isMissing()}: whether or not the type is {@linkplain
 *       SEXPs#MISSING_ARG the "missing" value}. Elaborating on the above example, the type of a
 *       closure value that is guaranteed not missing consists of {@link RClosureType}, {@link
 *       RPromiseType#VALUE}, and {@link Maybe#NO}, the type of a closure value that may or may not
 *       be missing consists of {@link RClosureType}, {@link RPromiseType#VALUE}, and {@link
 *       Maybe#MAYBE}, and the type of the missing value's type consists of {@link
 *       RValueType#NOTHING}, {@link RPromiseType#VALUE}, and {@link Maybe#YES}.
 *       <ul>
 *         <li>To be clear, a runtime {@link SEXP} instance of a "maybe-missing" type that has a
 *             non-symbol {@link RValueType}, non-empty {@link AttributesType}, and definitely-
 *             promise {@link RPromiseType}, may be {@link SEXPs#MISSING_ARG}, which is a symbol
 *             with no attributes and not a promise. The {@link RValueType}, {@link AttributesType},
 *             and {@link RPromiseType} describe the instance assuming that it's not missing.
 *       </ul>
 * </ul>
 */
@Immutable
public non-sealed interface RSexpType extends RSexpTypeHelpers, RType {
  // Can't be in `RSexpTypeHelpers`, because then `RSexpType.ANY` is ambiguous with `RType.ANY`.
  /** The type of a value we know absolutely nothing about, besides it being an {@link SEXP}. */
  RSexpType SEXP =
      RSexpType.of(
          RValueType.ANY,
          YesOrMaybe.MAYBE,
          AttributesType.ANY,
          RPromiseType.MAYBE_LAZY_MAYBE_PROMISE,
          Maybe.MAYBE);

  // region main constructor
  /** Create an {@link RSexpType} that represents the given class. */
  static RSexpType of(Class<? extends SEXP> ignored) {
    // TODO: use reflection here. Also add reflection in other areas to reduce boilerplate.
    throw new NotImplementedError();
  }

  /** Create an {@link RSexpType} with the given {@link #value()}, {@link #attributes()}, {@link
   * {@link #promise()}, and {@link #isMissing()} (missingness).
   */
  static RSexpType of(
      RValueType value,
      YesOrMaybe isOwned,
      AttributesType attributes,
      RPromiseType promise,
      Maybe isMissing) {
    if (isMissing == Maybe.YES) {
      return MISSING;
    } else if (value == RValueType.NOTHING || attributes == AttributesType.BOTTOM) {
      return NOTHING;
    }

    var result = new RSexpTypeImpl(value, isOwned, attributes, promise, isMissing);
    return RSexpTypeImpl.interned(result);
  }

  /** Create an {@link RSexpType} with the given {@link #value()}, {@link #attributes()}, {@link
   * {@link #promise()}, and {@link #isMissing()} (missingness).
   */
  static RSexpType of(
      RValueType value,
      YesOrMaybe isOwned,
      AttributesType attributes,
      RPromiseType promise,
      NoOrMaybe isMissing) {
    return of(value, isOwned, attributes, promise, Maybe.of(isMissing));
  }

  // endregion main constructor

  // region helper constructors
  /** The most specific type that the given value is an instance of. */
  static RSexpType exact(SEXP value) {
    if (value == SEXPs.MISSING_ARG) {
      return MISSING;
    }

    var promiseWrapped = RPromiseType.VALUE;
    SEXP value1 = value;
    if (value1 instanceof PromSXP<?> p) {
      value1 = p.val();
      promiseWrapped = RPromiseType.promise(p.isLazy());
    }

    return RSexpType.of(
        value1 == null ? RValueType.ANY : RValueType.exact(value1),
        YesOrMaybe.MAYBE,
        value1 == null ? AttributesType.ANY : AttributesType.exact(value1.attributes()),
        promiseWrapped,
        Maybe.NO);
  }

  /**
   * The type of a value (i.e. not a promise), which is also not missing, with the given
   * {@link RValueType} and attributes.
   */

  static RSexpType value(RValueType type, YesOrMaybe isOwned, AttributesType attrs) {
    return of(type, isOwned, attrs, RPromiseType.VALUE, Maybe.NO);
  }

  /**
   * The type of a value (i.e. not a promise), which is also not missing and has no attributes, with
   * the given {@link RValueType}.
   */

  static RSexpType value(RValueType type, YesOrMaybe isOwned) {
    return of(type, isOwned, AttributesType.EMPTY, RPromiseType.VALUE, Maybe.NO);
  }

  /**
   * The type of a value with the given {@link SEXPType}, not a promise, not missing, and no
   * attributes. If {@code type} is the type of a primitive vector, this will also return the type
   * for a scalar.
   *
   * @throws IllegalArgumentException if {@link SEXPType} is a promise, character vector, or "any".
   */
  static RSexpType simple(SEXPType type, YesOrMaybe isOwned) {
    switch (type) {
      case PROM -> throw new IllegalArgumentException("No such thing as a \"simple promise\"");
      case CHAR ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple character vector\", because it never exists in user code (only \"str\" does)");
      case ANY ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple any\" (GNU-R's \"any\" type is special and has no instances)");
    }
    return value(RValueType.simple(type), isOwned);
  }

  /** The type after a arithmetic unop whose argument has the given types. */
  static RSexpType arithmeticOp(RSexpType unary) {
    return unary.isObject() == Maybe.NO
        ? unary.coerceToNumber()
        : RSexpType.SEXP;
  }

  /** The type after a arithmetic binop whose arguments have the given types. */
  static RSexpType arithmeticOp(RSexpType lhs, RSexpType rhs) {
    return lhs.isObject() == Maybe.NO && rhs.isObject() == Maybe.NO
        ? lhs.unionOf(rhs).coerceToNumber()
        : RSexpType.SEXP;
  }

  /** The type after a comparison binop whose arguments have the given types. */
  static RSexpType comparisonOp(RSexpType lhs, RSexpType rhs) {
    return lhs.isObject() == Maybe.NO && rhs.isObject() == Maybe.NO
        ? comparisonResult(lhs.unionOf(rhs))
        : RSexpType.SEXP;
  }

  /** The type after a simple "not" binop whose argument has the given types. */
  static RSexpType booleanOp(RSexpType unary) {
    return unary.isObject() == Maybe.NO ? unary.coerceToLogical() : RSexpType.SEXP;
  }

  /** The type after a simple "and" or "or" binop whose arguments have the given types. */
  static RSexpType booleanOp(RSexpType lhs, RSexpType rhs) {
    return lhs.isObject() == Maybe.NO && rhs.isObject() == Maybe.NO
        ? lhs.unionOf(rhs).coerceToLogical()
        : RSexpType.SEXP;
  }

  /** The type of the result of a non-object comparison whose union is the given type.
   *
   * <p>Note that the "cast" errors if the type isn't a primitive vector, so this method returns
   * {@link RType#NOTHING} in such case.
   */

  private static RSexpType comparisonResult(RSexpType type) {
    type = type.forced().notMissing().withNoAttributes();
    return switch (type.value()) {
      case RNAAbleVecType v -> type.withValue(RLogicalType.of(v.length(), v.hasNAOrNaN()));
      case RRawType v -> type.withValue(RLogicalType.of(v.length(), NoOrMaybe.NO));
      case RPrimVecType v
          -> type.withValue(RLogicalType.of(v.length(), NoOrMaybe.MAYBE));
      // It errors.
      case RRegSymType _,
           RAbstractPairListType _,
           RFunType _,
           REnvType _,
           RBCodeType _  -> NOTHING;
      // It maybe errors, but maybe not.
      case RValueType _ -> type.withValue(RLogicalType.ANY);
    };
  }

  /** The type "casted" into a number according to the rules after an arithmetic operation.
   *
   * <p>Note that the "cast" errors if the type isn't a logical or number, so this method returns
   * {@link RType#NOTHING} in such case.
   */

  default RSexpType coerceToNumber() {
    var type = forced().notMissing().withNoAttributes();
    return switch (type.value()) {
      case RNumericType _ -> type;
      case RLogicalType v -> type.withValue(RIntType.of(v.length(), v.hasNAOrNaN()));
      case RNumericOrLogicalType v -> type.withValue(RNumericType.of(v.length(), v.hasNAOrNaN()));
      // It errors.
      case RRawType _,
           RStringType _,
           RRegSymType _,
           RAbstractPairListType _,
           RFunType _,
           REnvType _,
           RBCodeType _ -> NOTHING;
      // It maybe errors, but maybe not.
      case RNAAbleVecType v ->
          type.withValue(RNumericType.of(v.length(), v.hasNAOrNaN()));
      // It maybe errors, but maybe not.
      case RVectorType v ->
          type.withValue(RNumericType.of(v.length(), NoOrMaybe.MAYBE));
      // It maybe errors, but maybe not.
      case RValueType _ -> type.withValue(RNumericType.ANY);
    };
  }

  /** The type "casted" into a logical according to the rules after a boolean operation.
   *
   * <p>Note that the "cast" errors if the type isn't a logical, number, or raw, so this method
   * returns {@link RType#NOTHING} in such case.
   */

  default RSexpType coerceToLogical() {
    var type = forced().notMissing().withNoAttributes();
    return switch (type.value()) {
          case RLogicalType _ -> type;
          case RNumericOrLogicalType v ->
              type.withValue(RLogicalType.of(v.length(), v.hasNAOrNaN()));
          case RRawType v ->
              type.withValue(RLogicalType.of(v.length(), NoOrMaybe.NO));
          // It errors.
          case RStringType _,
               RRegSymType _,
               RAbstractPairListType _,
               RFunType _,
               REnvType _,
               RBCodeType _  -> NOTHING;
          // It maybe errors, but maybe not.
          case RVectorType v ->
              type.withValue(RLogicalType.of(v.length(), NoOrMaybe.MAYBE));
          // It maybe errors, but maybe not.
          case RValueType _ -> type.withValue(RLogicalType.ANY);
        };
  }

  /**
   * The closure type of the given builtin.
   *
   * <p><i>Not</i> the return type. Instead, this is guaranteed to be a {@link RFunType}, and you
   * can get the return of that.
   */

  static RSexpType builtin(BuiltinId id) {
    return RSexpType.value(RBuiltinOrSpecialType.of(id), YesOrMaybe.MAYBE);
  }

  /** Type which is the {@linkplain RSexpType#unionOf(RSexpType)} union} of all given types. */
  static RSexpType union(RSexpType type1, RSexpType type2, RSexpType... types) {
    return Stream.concat(Stream.of(type1, type2), Arrays.stream(types)).collect(toUnion());
  }

  /** Type which is the {@linkplain RSexpType#unionOf(RSexpType)} union} of all given types. */
  static RSexpType union(Collection<RSexpType> types) {
    return types.stream().collect(toUnion());
  }

  /** Creates a {@linkplain RSexpType#unionOf(RSexpType)} union} from all types in the stream. */

  static Collector<RSexpType, RSexpType[], RSexpType> toUnion() {
    return Collector.of(
        () -> new RSexpType[] {NOTHING},
        (RSexpType[] acc, RSexpType next) -> acc[0] = acc[0].unionOf(next),
        (RSexpType[] a, RSexpType[] b) -> new RSexpType[] {a[0].unionOf(b[0])},
        (RSexpType[] a) -> a[0],
        Characteristics.CONCURRENT,
        Characteristics.UNORDERED);
  }

  /**
   * Type which is the {@linkplain RSexpType#intersectionOf(RSexpType)} intersection} of all given types.
   */
  static RSexpType intersection(RSexpType type1, RSexpType type2, RSexpType... types) {
    return Stream.concat(Stream.of(type1, type2), Arrays.stream(types)).collect(toIntersection());
  }

  /**
   * Type which is the {@linkplain RSexpType#intersectionOf(RSexpType)} intersection} of all given types.
   */
  static RSexpType intersection(Collection<RSexpType> types) {
    return types.stream().collect(toIntersection());
  }

  /**
   * Creates an {@linkplain RSexpType#intersectionOf(RSexpType)} intersection} from all types in the stream.
   */

  static Collector<RSexpType, RSexpType[], RSexpType> toIntersection() {
    return Collector.of(
        () -> new RSexpType[] {SEXP},
        (RSexpType[] acc, RSexpType next) -> acc[0] = acc[0].intersectionOf(next),
        (RSexpType[] a, RSexpType[] b) -> new RSexpType[] {a[0].intersectionOf(b[0])},
        (RSexpType[] a) -> a[0],
        Characteristics.CONCURRENT,
        Characteristics.UNORDERED);
  }

  // endregion helpers constructors

  // region field accessors
  /**
   * The type of the "value" part of the instance, possibly within a promise and assuming it's not
   * missing.
   *
   * <p>e.g. int-vector, closure, environment.
   */
  RValueType value();

  /**
   * Whether the "value" part of the instance is unique (has no aliases) at its definition.
   *
   * <p>The value may be used multiple times. The purpose of this is that, normally a "consuming"
   * use must copy its value, but if its value is owned and not used again afterward, it doesn't
   * have to copy.
   */
  YesOrMaybe isOwned();

  /**
   * The type of the "value" part of the instance (described by {@link #value()})'s {@linkplain
   * Attributes attributes}.
   *
   * <p>e.g. no attributes, "class" attribute if it's an {@linkplain #isObject() object}, "dims"
   * attribute if it's a matrix.
   */
  AttributesType attributes();

  /**
   * Whether the "value" (described by {@link #value()} and {@link #attributes()}) is maybe or
   * definitely a promise, and if so, whether it's maybe or definitely lazy.
   *
   * <p>This is {@code null} iff {@code self} is {@link RSexpType#NOTHING}.
   */
  @Nullable RPromiseType promise();

  /** Whether the "value", possibly wrapped in a promise (described by {@link #value()}, {@link
   * #attributes()}, and {@link #promise()}, is maybe or definitely missing.
   *
   * <p>If maybe missing, the instance is either what {@link #value()}/{@link #attributes()}/
   * {@link #promise()} describe <i>or</i> {@link SEXPs#MISSING_ARG}. If definitely missing, then
   * {@link #value()}, {@link #attributes()}, and {@link #promise()} may be completely ignored, the
   * only possible instance is {@link SEXPs#MISSING_ARG}.
   *
   * <p>This is {@code null} iff {@code self} is {@link RSexpType#NOTHING}.
   */
  @Nullable Maybe isMissing();

  // endregion field accessors

  // region field "with"ers
  /** Returns the same type except {@link #value()}} is {@code newValue}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RSexpType withValue(RValueType newValue) {
    return value() == newValue || this == NOTHING || this == MISSING
        ? this
        : of(newValue, isOwned(), attributes(), promise(), isMissing());
  }

  /** Returns the same type except {@link #isOwned()} is {@code newOwned}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RSexpType withOwnership(YesOrMaybe newIsOwned) {
    return isOwned() == newIsOwned || this == NOTHING || this == MISSING
        ? this
        : of(value(), newIsOwned, attributes(), promise(), isMissing());
  }

  /** Returns the same type except {@link #attributes()}} is {@code newAttributes}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RSexpType withAttributes(AttributesType newAttributes) {
    return attributes() == newAttributes || this == NOTHING || this == MISSING
        ? this
        : of(value(), isOwned(), newAttributes, promise(), isMissing());
  }

  /** Returns the same type except {@link #promise()}} is {@code newPromise}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RSexpType withPromise(RPromiseType newPromise) {
    return promise() == newPromise || this == NOTHING || this == MISSING
        ? this
        : of(value(), isOwned(), attributes(), newPromise, isMissing());
  }

  /** Returns the same type except {@link #isMissing()}} is {@code newIsMissing}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RSexpType withMissingness(Maybe newIsMissing) {
    // Some special-cases:
    // - `isMissing == YES` and `newIsMissing == NO`: we just removed the only instance, so now
    //   there are no instances, therefore `NOTHING`. (Note: technically unsound)
    // - `isMissing == YES` and `newIsMissing == MAYBE`: union of `NOTHING` and `this` is `this`.
    return isMissing() == newIsMissing
            || this == NOTHING
            || (isMissing() == Maybe.YES && newIsMissing == Maybe.MAYBE)
        ? this
        : isMissing() == Maybe.YES
            ? NOTHING
            : of(value(), isOwned(), attributes(), promise(), newIsMissing);
  }

  // endregion field "with"ers

  // region lattice operations
  @Override
  default boolean isSubsetOf(RType other) {
    // TODO
    throw new NotImplementedError();
  }

  @Override
  default boolean isSupersetOf(RType other) {
    // TODO
    throw new NotImplementedError();
  }

  @Override
  default RType unionOf(RType other) {
    // TODO
    throw new NotImplementedError();
  }

  @Override
  default RType intersectionOf(RType other) {
    // TODO
    throw new NotImplementedError();
  }

  default boolean isSubsetOf(RSexpType other) {
    if (this == NOTHING || other == SEXP) {
      return true;
    } else if (other == NOTHING || this == SEXP) {
      return false;
    } else if (this == MISSING) {
      return other.isMissing() != Maybe.NO;
    } else if (other == MISSING) {
      return false;
    }
    assert promise() != null
        && isMissing() != null
        && other.promise() != null
        && other.isMissing() != null;

    return value().isSubsetOf(other.value())
        && isOwned().isSubsetOf(other.isOwned())
        && attributes().isSubsetOf(other.attributes())
        && promise().isSubsetOf(other.promise())
        && isMissing().isSubsetOf(other.isMissing());
  }

  default boolean isSupersetOf(RSexpType other) {
    if (this == SEXP || other == NOTHING) {
      return true;
    } else if (other == SEXP || this == NOTHING) {
      return false;
    } else if (other == MISSING) {
      return isMissing() != Maybe.NO;
    } else if (this == MISSING) {
      return false;
    }
    assert promise() != null
        && isMissing() != null
        && other.promise() != null
        && other.isMissing() != null;

    return value().isSupersetOf(other.value())
        && owned().isSupersetOf(other.owned())
        && attributes().isSupersetOf(other.attributes())
        && promise().isSupersetOf(other.promise())
        && isMissing().isSupersetOf(other.isMissing());
  }

  default RSexpType intersectionOf(RSexpType other) {
    if (this == SEXP) {
      return other;
    } else if (other == SEXP) {
      return this;
    } else if (this == NOTHING || other == NOTHING) {
      return NOTHING;
    } else if (this == MISSING) {
      return other.isMissing() == Maybe.NO ? NOTHING : MISSING;
    } else if (other == MISSING) {
      return isMissing() == Maybe.NO ? NOTHING : MISSING;
    }
    assert promise() != null
        && isMissing() != null
        && other.promise() != null
        && other.isMissing() != null;

    var value = value().intersectionOf(other.value());
    if (value == RValueType.NOTHING) {
      return NOTHING;
    }
    var isOwned = isOwned().intersectionOf(other.isOwned());
    var attributes = attributes().intersectionOf(other.attributes());
    if (attributes == AttributesType.BOTTOM) {
      return NOTHING;
    }
    var promise = promise().intersectionOf(other.promise());
    if (promise == null) {
      return NOTHING;
    }
    var isMissing = isMissing().intersectionOf(other.isMissing());
    if (isMissing == null) {
      return NOTHING;
    }
    return of(value, isOwned, attributes, promise, isMissing);
  }

  default RSexpType unionOf(RSexpType other) {
    if (this == NOTHING) {
      return other;
    } else if (other == NOTHING) {
      return this;
    } else if (this == SEXP || other == SEXP) {
      return SEXP;
    } else if (this == MISSING && other == MISSING) {
      return MISSING;
    }
    assert promise() != null
        && isMissing() != null
        && other.promise() != null
        && other.isMissing() != null;

    var value = value().unionOf(other.value());
    var isOwned = isOwned().unionOf(other.isOwned());
    var attributes = attributes().unionOf(other.attributes());
    var promise = promise().unionOf(other.promise());
    var isMissing = isMissing().unionOf(other.isMissing());
    return of(value, isOwned, attributes, promise, isMissing);
  }

  // endregion lattice operations

  @Override
  Class<? extends SEXP> clazz();
}

record RSexpTypeImpl(
    @Override RValueType value,
    @Override YesOrMaybe isOwned,
    @Override AttributesType attributes,
    @Override RPromiseType promise,
    @Override Maybe isMissing)
    implements RSexpType {
  private static final Map<RSexpType, RSexpType> INTERNED = new HashMap<>();

  // Cast is safe because `T` stays the same.
  static RSexpType interned(RSexpType base) {
    return INTERNED.computeIfAbsent(base, Function.identity());
  }

  RSexpTypeImpl {
    assert isMissing == Maybe.YES
        || (value != RValueType.NOTHING && attributes != AttributesType.BOTTOM)
        : "If `isMissing` is not `YES`, `value` and `attributes` must not be `NOTHING`.\nThe only nothing type is `RNothingType`.";
    // The missing type *is* owned, because the missing type's value type is `NOTHING`:
    // the "missingness" part, like the "promise-wrapper" part, is separate from the "value" part.
    assert isMissing != Maybe.YES
        || (value == RValueType.NOTHING && isOwned == YesOrMaybe.YES && attributes == AttributesType.BOTTOM)
        : "If `isMissing` is `YES`, this must be the missing type";
  }

  @Override
  public Class<? extends SEXP> clazz() {
    return switch (promise.isPromise()) {
      case NO -> switch (isMissing) {
        case NO -> Objects.requireNonNull(value.clazz(), "`RSexpTypeImpl` constructor prevents `isMissing == NO && value instanceof RNothingValueType`, so it should prevent `value.clazz() == null`");
        case MAYBE -> ValueOrMissingSXP.class;
        case YES -> MissingSXP.class;
      };
      case MAYBE -> SEXP.class;
      case YES -> PromSXP.class;
    };
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (this == SEXP) {
      w.write("⊤");
    } else if (this == MISSING) {
      w.write("missing");
    } else {
      if (isMissing == Maybe.MAYBE) {
        w.write("miss|");
      }
      p.print(promise);
      p.print(value);
      if (isOwned == YesOrMaybe.YES) {
        w.write('*');
      }
      if (attributes != AttributesType.EMPTY) {
        w.write('[');
        p.print(attributes);
        w.write(']');
      }
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
