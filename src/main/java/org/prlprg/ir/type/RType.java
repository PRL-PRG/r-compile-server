package org.prlprg.ir.type;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.RValue;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/**
 * {@link RValue} type; a runtime value's ({@link SEXP})'s type, with information relevant to
 * perform optimizations (e.g. compile unboxed representations if scalar). Not to be confused with
 * {@link SEXPType}.
 *
 * <p>See {@link RTypes} for all constructors.
 */
@Immutable
public sealed interface RType extends BoundedLattice<RType>
    permits RTypeImpl, RTypeNothing, RTypeAny {
  /** If this is a constant, the exact value. */
  @Nullable SEXP exactValue();

  /**
   * The base type of the value (e.g. is it a symbol? Builtin?). Returns {@code null} if this is the
   * nothing type.
   */
  @Nullable RBaseType base();

  /**
   * If the SEXP is a closure, what are its argument and return types? Otherwise {@code null}
   * (including if nothing).
   */
  @Nullable RClosureType closure();

  /** Various yes/no/maybe properties which affect optimizations. */
  RTypeFlags flags();
}
