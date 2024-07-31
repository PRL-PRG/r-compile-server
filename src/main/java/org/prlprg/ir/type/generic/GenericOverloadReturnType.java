package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.RSignatureTypeNormalizedArity;
import org.prlprg.ir.type.RSexpType;

@FunctionalInterface
public interface GenericOverloadReturnType {
  /**
   * Returns the type returned from the overload containing this instance, when it receives the
   * given arguments.
   */
  RSexpType givenArguments(RSignatureTypeNormalizedArity arguments);

  /**
   * Is the return type guaranteed to be a subset of the other's, no matter what the given arguments
   * are (provided both have the same given arguments)?
   */
  default boolean isDefinitelySubsetOf(GenericOverloadReturnType other) {
    return equals(other);
  }
}
