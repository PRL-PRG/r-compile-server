package org.prlprg.ir.type.generic;

import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Lattice;

public record ReturnUnionOfArgumentTypes() implements GenericOverloadReturnType {
  @Override
  public RType givenArguments(org.prlprg.ir.type.sexp.RSignatureTypeNormalizedArity arguments) {
    return Lattice.union(RType.ANY, arguments.types());
  }
}
