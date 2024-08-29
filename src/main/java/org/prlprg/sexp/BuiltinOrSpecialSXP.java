package org.prlprg.sexp;

import org.prlprg.primitive.BuiltinId;

public sealed interface BuiltinOrSpecialSXP extends FunSXP permits BuiltinSXP, SpecialSXP {
  BuiltinId id();
}
