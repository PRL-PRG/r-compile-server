package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.NormalizedArityRType;
import org.prlprg.ir.type.RType;

public record ReturnUnionOfArgumentTypes() implements GenericOverloadReturnType {
  @Override
  public RType givenArguments(NormalizedArityRType arguments) {
    return RTypes.union(arguments.types());
  }
}
