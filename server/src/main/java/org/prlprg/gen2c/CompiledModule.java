package org.prlprg.gen2c;

import org.prlprg.sexp.VecSXP;

public record CompiledModule(String cCode, String entryFunName, VecSXP constantPool) {}
