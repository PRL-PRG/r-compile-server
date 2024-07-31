package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.RSignatureTypeNormalizedArity;
import org.prlprg.ir.type.RSexpType;

public record ReturnNthArgumentType(int n) implements GenericOverloadReturnType {
  @Override
  public RSexpType givenArguments(RSignatureTypeNormalizedArity arguments) {
    return arguments.types().get(n);
  }

  @Override
  public boolean isDefinitelySubsetOf(GenericOverloadReturnType other) {
    return GenericOverloadReturnType.super.isDefinitelySubsetOf(other)
        || other instanceof ReturnUnionOfArgumentTypes;
  }
}
