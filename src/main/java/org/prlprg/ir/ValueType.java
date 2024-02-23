package org.prlprg.ir;

import java.util.EnumSet;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.sexp.SEXPType;
import org.prlprg.util.NoOrMaybe;
import org.prlprg.util.Quad;
import org.prlprg.util.YesOrMaybe;

/**
 * Restricts the set of possible runtime values of a {@link Value} IR node. Note that, while in
 * GNU-R every runtime value is an SEXP, we may compile unboxed or otherwise differently-shaped
 * values. Also, this can be both more general and specific than GNU-R's SEXPTYPE; it can represent
 * a union of SEXPTYPEs (more general), and it can encode flags like {@code isScalar} (more
 * specific).
 */
@Immutable
public sealed interface ValueType permits ValueTypes.Bottom, ValueTypes.Exact, ValueTypes.Top {
  /** The set of possible SEXPTYPEs of the value. */
  EnumSet<SEXPType> sexpTypes();

  /** Is this a subtype of the given type? */
  boolean isSubtypeOf(ValueType other);

  /** Is this a supertype of the given type? */
  default boolean isSupertypeOf(ValueType other) {
    return other.isSubtypeOf(this);
  }

  /** Returns the most precise representable supertype. */
  ValueType union(ValueType other);

  /** Returns the least precise representable subtype. */
  ValueType intersection(ValueType other);

  /** Is the SEXP promise wrapped? */
  Quad isPromise();

  /**
   * Is the SEXP an unevaluated thunk? (If so, reading may execute code which, depending on other
   * properties, may have side effects.)
   */
  NoOrMaybe isLazy();

  /**
   * If the SEXP is a vector, does it only have one element? (Returns {@code IRRELEVANT} if not a
   * vector.)
   */
  Quad isScalar();

  /** Does the SEXP have attributes? */
  Quad hasAttributes();

  /** Is the SEXP an object? */
  Quad isObject();

  /** Can we fastcase accessing elements of the SEXP? */
  YesOrMaybe isFastVecElt();

  /**
   * If the SEXP is a primitive vector, does it include an NA or NaN? (Returns {@code IRRELEVANT} if
   * not a primitive vector.)
   */
  Quad hasNaOrNaN();

  /** Is the SEXP the missing value? */
  Quad isMissing();

  /** Is the SEXP the unbound value? */
  Quad isUnbound();

  // TODO closure and other specific info?
  /** If the SEXP is a closure, what is its argument and return types? */
  @Nullable ClosureInfo closure();
}
