package org.prlprg.ir.type;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.SEXP;

/**
 * the runtime type of an SEXP which is guaranteed not to be a promise. There are subclasses for
 * each particular type we care about (e.g. functions, primitive vectors), as well as {@link
 * RGenericValueType} for everything else (including "unknown").
 */
@Immutable
sealed interface RValueType extends Lattice<RValueType>
    permits RFunctionType, RPrimVecType, RGenericValueType {
  /** If this is a constant, the exact value. */
  @Nullable SEXP exactValue();

  /** The base type of the value (e.g. is it a symbol? Builtin?). */
  BaseRType.NotPromise base();

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dim}, ...), and if they are
   * exact values.
   */
  AttributesType attributes();

  /** If there's 0, 1, n, or unknown references to this value. */
  MaybeNat referenceCount();
}
