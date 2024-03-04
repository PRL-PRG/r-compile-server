package org.prlprg.ir.type;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.node.RValue;
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
    permits RNothingType, RAnyType, RClosureType, RPrimVecType, RMissingOrType, ROtherType {
  /** If this is a constant, the exact value. */
  @Nullable SEXP exactValue();

  /**
   * The base type of the value (e.g. is it a symbol? Builtin?). Returns {@code null} if this is the
   * nothing type.
   */
  @Nullable BaseRType base();

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dims}, ...), and if they are
   * exact values. Returns {@code null} if this is the nothing type.
   */
  @Nullable AttributesType attributes();

  /**
   * If there's 0, 1, n, or unknown references to this value. Returns {@code 0} if this is the
   * nothing type.
   */
  MaybeNat referenceCount();

  /** Does this type encode the missing value? */
  default Troolean isMissing() {
    return switch (this) {
      case RAnyType ignored -> Troolean.MAYBE;
      case RMissingOrType o ->
          o.notMissing() instanceof RNothingType ? Troolean.YES : Troolean.MAYBE;
      default -> Troolean.NO;
    };
  }
}
