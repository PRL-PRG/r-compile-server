package org.prlprg.service;

import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VectorSXP;

public record NativeClosure(byte[] code, String name, VectorSXP<SEXP> constantPool) {
}
