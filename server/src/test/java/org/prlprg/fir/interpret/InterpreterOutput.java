package org.prlprg.fir.interpret;

import org.prlprg.sexp.SEXP;

public record InterpreterOutput(String checkpointTrace, SEXP returnValue) {}
