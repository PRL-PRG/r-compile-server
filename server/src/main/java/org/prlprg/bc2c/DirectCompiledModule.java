package org.prlprg.bc2c;

import org.prlprg.sexp.VecSXP;

public record DirectCompiledModule(String cCode, String entryFunName, VecSXP constantPool) {}
