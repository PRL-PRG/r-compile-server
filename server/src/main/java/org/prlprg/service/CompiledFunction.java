package org.prlprg.service;

import java.util.List;
import org.prlprg.sexp.SEXP;

public record CompiledFunction(byte[] code, List<SEXP> constantPool) {}
