package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.NormalizedArityRType;
import org.prlprg.ir.type.RType;

public record ReturnNthArgumentType(int n) implements GenericOverloadReturnType {
  @Override
  public RType givenArguments(NormalizedArityRType arguments) {
    return arguments.types().get(n);
  }

  @Override
  public boolean isDefinitelySubsetOf(GenericOverloadReturnType other) {
    return GenericOverloadReturnType.super.isDefinitelySubsetOf(other)
        || other instanceof ReturnUnionOfArgumentTypes;
  }
}
