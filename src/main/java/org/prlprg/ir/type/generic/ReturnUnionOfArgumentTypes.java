package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.RSignatureTypeNormalizedArity;
import org.prlprg.ir.type.RSexpType;

public record ReturnUnionOfArgumentTypes() implements GenericOverloadReturnType {
  @Override
  public RSexpType givenArguments(RSignatureTypeNormalizedArity arguments) {
    return RSexpType.union(arguments.types());
  }
}
