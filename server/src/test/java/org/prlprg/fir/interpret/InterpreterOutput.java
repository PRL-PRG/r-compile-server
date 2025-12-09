package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.interpret.internal.CheckpointTrace;
import org.prlprg.fir.interpret.internal.DeoptSnapshot;
import org.prlprg.sexp.SEXP;

public record InterpreterOutput(String checkpointTrace, SEXP returnValue) {

}
