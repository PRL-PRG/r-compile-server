package org.prlprg.sexp;

import org.prlprg.primitive.BuiltinId;

public sealed interface BuiltinOrSpecialSXP extends SEXP permits BuiltinSXP, SpecialSXP {
  BuiltinId id();
}
