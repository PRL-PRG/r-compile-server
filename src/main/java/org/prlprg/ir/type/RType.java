package org.prlprg.ir.type;

import com.google.common.collect.ImmutableMap;
import java.util.Arrays;
import java.util.Objects;
import java.util.function.Function;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Reflection;

/**
 * {@link RValue} type; a runtime ({@link SEXP}) value's type, with information relevant to perform
 * optimizations.
 *
 * <p>Not to be confused with {@link SEXPType}. Also, this is only for {@link RValue}s ({@linkplain
 * Node IR nodes} encoding {@linkplain SEXP SEXPs}), not unboxed values or PIR objects.
 *
 * <p>It consists of:
 *
 * <ul>
 *   <li>{@link RValueType} {@link #value()}: the type of the "value". e.g. int-vector, closure,
 *       environment). {@link RValueType}'s class hierarchy is the same shape as {@link SEXP}'s: for
 *       every subclass of {@link SEXP} there is a corresponding subclass of {@link RValueType} (and
 *       vice versa).
 *   <li>{@link RAttributesType} {@link #attributes()}: the type of the "attributes". Some types of
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
 *             attributes) even if the {@link RAttributesType} specifies non-empty attributes. The
 *             {@link RValueType} and {@link RAttributesType} don't describe the instance directly,
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
 *         <li>Again, to be clear, a runtime {@link SEXP} instance of a "maybe-missing" type that
 *             has a non-symbol {@link RValueType}, non-empty {@link RAttributesType}, and
 *             definitely-promise {@link RPromiseType}, may be {@link SEXPs#MISSING_ARG}, which is a
 *             symbol with no attributes and not a promise. The {@link RValueType}, {@link
 *             RAttributesType}, and {@link RPromiseType} describe the instance assuming that it's
 *             not missing.
 *       </ul>
 * </ul>
 */
@Immutable
public sealed interface RType extends RTypeHelpers, BoundedLattice<RType> {
  // region constructor
  /** Create an {@link RType} with the given {@link #value()}, {@link #attributes()}, {@link
   * {@link #promise()}, and {@link #isMissing()} (missingness).
   */
  static RType of(
      RValueType value, RAttributesType attributes, RPromiseType promise, Maybe isMissing) {
    if (isMissing == Maybe.YES) {
      return MISSING;
    } else if (value == RValueType.NOTHING || attributes == RAttributesType.NOTHING) {
      return NOTHING;
    }

    var result = new RTypeImpl(value, attributes, promise, isMissing);
    var interned = RTypeImpl.INTERNED.get(result);
    return interned == null ? result : interned;
  }

  // endregion constructor

  // region field accessors
  /**
   * The type of the "value" part of the instance, possibly within a promise and assuming it's not
   * missing.
   *
   * <p>e.g. int-vector, closure, environment.
   */
  RValueType value();

  /**
   * The type of the "value" part of the instance (described by {@link #value()})'s {@linkplain
   * Attributes attributes}.
   *
   * <p>e.g. no attributes, "class" attribute if it's an {@linkplain #isObject() object}, "dims"
   * attribute if it's a matrix.
   */
  RAttributesType attributes();

  /**
   * Whether the "value" (described by {@link #value()} and {@link #attributes()}) is maybe or
   * definitely a promise, and if so, whether it's maybe or definitely lazy.
   *
   * <p>This is {@code null} iff {@code self} is {@link RType#NOTHING}.
   */
  @Nullable RPromiseType promise();

  /** Whether the "value", possibly wrapped in a promise (described by {@link #value()}, {@link
   * {@link #attributes()}, and {@link #promise()}, is maybe or definitely missing.
   *
   * <p>If maybe missing, the instance is either what {@link #value()}/{@link #attributes()}/
   * {@link #promise()} describe <i>or</i> {@link SEXPs#MISSING_ARG}. If definitely missing, then
   * {@link #value()}, {@link #attributes()}, and {@link #promise()} may be completely ignored, the
   * only possible instance is {@link SEXPs#MISSING_ARG}.
   *
   * <p>This is {@code null} iff {@code self} is {@link RType#NOTHING}.
   */
  @Nullable Maybe isMissing();

  // endregion field accessors

  // region field "with"ers
  /** Returns the same type except {@link #value()}} is {@code newValue}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RType withValue(RValueType newValue) {
    return value() == newValue || this == NOTHING || this == MISSING
        ? this
        : of(newValue, attributes(), promise(), isMissing());
  }

  /** Returns the same type except {@link #attributes()}} is {@code newAttributes}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RType withAttributes(RAttributesType newAttributes) {
    return attributes() == newAttributes || this == NOTHING || this == MISSING
        ? this
        : of(value(), newAttributes, promise(), isMissing());
  }

  /** Returns the same type except {@link #promise()}} is {@code newPromise}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RType withPromise(RPromiseType newPromise) {
    return promise() == newPromise || this == NOTHING || this == MISSING
        ? this
        : of(value(), attributes(), newPromise, isMissing());
  }

  /** Returns the same type except {@link #isMissing()}} is {@code newIsMissing}. */
  // IntelliJ doesn't know that `this != NOTHING ==> promise() != null && isMissing() != null`, so
  // it reports nullable values (`promise()` and `isMissing()`) in non-null positions (`of` args).
  @SuppressWarnings("DataFlowIssue")
  default RType withMissingness(Maybe newIsMissing) {
    // Some special-cases:
    // - `isMissing == YES` and `newIsMissing == NO`: we just removed the only instance, so now
    //   there are no instances, therefore `NOTHING`. (Note: technically unsound)
    // - `isMissing == YES` and `newIsMissing == MAYBE`: union of `NOTHING` and `this` is `this`.
    return isMissing() == newIsMissing
            || this == NOTHING
            || (isMissing() == Maybe.YES && newIsMissing == Maybe.MAYBE)
        ? this
        : isMissing() == Maybe.YES ? NOTHING : of(value(), attributes(), promise(), newIsMissing);
  }

  // endregion field "with"ers

  // region lattice operations
  @Override
  default boolean isSubsetOf(RType other) {
    if (this == NOTHING || other == ANY) {
      return true;
    } else if (other == NOTHING || this == ANY) {
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
        && attributes().isSubsetOf(other.attributes())
        && promise().isSubsetOf(other.promise())
        && isMissing().isSubsetOf(other.isMissing());
  }

  @Override
  default boolean isSupersetOf(RType other) {
    if (this == ANY || other == NOTHING) {
      return true;
    } else if (other == ANY || this == NOTHING) {
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
        && attributes().isSupersetOf(other.attributes())
        && promise().isSupersetOf(other.promise())
        && isMissing().isSupersetOf(other.isMissing());
  }

  @Override
  default RType intersection(RType other) {
    if (this == ANY) {
      return other;
    } else if (other == ANY) {
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

    var value = value().intersection(other.value());
    if (value == RValueType.NOTHING) {
      return NOTHING;
    }
    var attributes = attributes().intersection(other.attributes());
    if (attributes == RAttributesType.NOTHING) {
      return NOTHING;
    }
    var promise = promise().intersection(other.promise());
    if (promise == null) {
      return NOTHING;
    }
    var isMissing = isMissing().intersection(other.isMissing());
    if (isMissing == null) {
      return NOTHING;
    }
    return of(value, attributes, promise, isMissing);
  }

  @Override
  default RType union(RType other) {
    if (this == NOTHING) {
      return other;
    } else if (other == NOTHING) {
      return this;
    } else if (this == ANY || other == ANY) {
      return ANY;
    } else if (this == MISSING && other == MISSING) {
      return MISSING;
    }
    assert promise() != null
        && isMissing() != null
        && other.promise() != null
        && other.isMissing() != null;

    var value = value().union(other.value());
    var attributes = attributes().union(other.attributes());
    var promise = promise().union(other.promise());
    var isMissing = isMissing().union(other.isMissing());
    return of(value, attributes, promise, isMissing);
  }

  // endregion lattice operations
}

record RTypeImpl(
    @Override RValueType value,
    @Override RAttributesType attributes,
    @Override @Nullable RPromiseType promise,
    @Override @Nullable Maybe isMissing)
    implements RType {
  static final ImmutableMap<RType, RType> INTERNED =
      Arrays.stream(RType.class.getFields())
          .filter(field -> field.getType() == RType.class)
          .map(field -> (RType) Reflection.getField(null, field))
          .collect(ImmutableMap.toImmutableMap(Function.identity(), Function.identity()));

  RTypeImpl {
    assert (promise != null && isMissing != null)
            || (promise == null
                && isMissing == null
                && value == RValueType.NOTHING
                && attributes == RAttributesType.NOTHING)
        : "If `promise` and `isMissing` are `null`, this must be the nothing type";
    assert promise == null
            || isMissing != Maybe.YES
            || (value == RValueType.NOTHING && attributes == RAttributesType.NOTHING)
        : "If `isMissing` is `YES`, this must be the missing type";

    assert promise == null
            || isMissing == Maybe.YES
            || (value != RValueType.NOTHING && attributes != RAttributesType.NOTHING)
        : "If `promise` and `isMissing` are not `null` and `isMissing` isn't `YES`, `value` and `attributes` must not be `NOTHING`";
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (this == NOTHING) {
      w.write("⊥");
    } else if (this == ANY) {
      w.write("⊤");
    } else if (this == MISSING) {
      w.write("missing");
    } else {
      if (isMissing == Maybe.MAYBE) {
        w.write("miss|");
      }
      switch (promise) {
      }
      w.write(value);
      if (isMissing == Maybe.YES) {
        w.write("miss");
      } else if (isMissing == Maybe.MAYBE) {
        w.write("miss|");
        w.write(attributes);
      } else {
        w.write(attributes);
      }
    }

    return promise == null || missing == null
        ? "⊥"
        : isAny()
            ? "⊤"
            : ""
                + promise
                + switch (Objects.requireNonNull(missing)) {
                  case YES -> "miss";
                  case MAYBE -> "miss|" + inner;
                  case NO -> inner;
                };
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
