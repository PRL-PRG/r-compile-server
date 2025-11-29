package org.prlprg.gen2c;

import org.prlprg.sexp.VecSXP;

public record CompiledModule(CUnit cUnit, String entryFunName, VecSXP constantPool) {}
