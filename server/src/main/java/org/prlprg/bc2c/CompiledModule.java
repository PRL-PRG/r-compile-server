package org.prlprg.bc2c;

import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VectorSXP;

public record CompiledModule(CFile file, String topLevelFunName, VectorSXP<SEXP> constantPool) {}
