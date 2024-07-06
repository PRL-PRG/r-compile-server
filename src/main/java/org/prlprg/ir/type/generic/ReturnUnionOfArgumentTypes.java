package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.RSignatureTypeNormalizedArity;
import org.prlprg.ir.type.RType;

public record ReturnUnionOfArgumentTypes() implements GenericOverloadReturnType {
  @Override
  public RType givenArguments(RSignatureTypeNormalizedArity arguments) {
    return RType.union(arguments.types());
  }
}
