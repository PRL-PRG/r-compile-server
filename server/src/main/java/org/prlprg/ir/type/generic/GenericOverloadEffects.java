package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.NormalizedArityRType;
import org.prlprg.ir.type.REffects;

/**
 * Computes the effects emitted from the overload containing this instance, when it receives the
 * given arguments.
 */
@FunctionalInterface
public interface GenericOverloadEffects {
  /**
   * Returns the effects emitted from the overload containing this instance, when it receives the
   * given arguments.
   */
  REffects givenArguments(NormalizedArityRType arguments);

  /**
   * Are the effects guaranteed to be a subset of the other's, no matter what the given arguments
   * are (provided both have the same given arguments)?
   */
  default boolean isDefinitelySubsetOf(GenericOverloadEffects other) {
    return equals(other);
  }
}
