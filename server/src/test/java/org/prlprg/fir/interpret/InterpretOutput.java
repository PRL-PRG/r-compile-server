package org.prlprg.fir.interpret;

import org.prlprg.sexp.SEXP;
import org.prlprg.util.Either;

public record InterpretOutput(Either<SEXP, String> returnValue, String checkpointTrace) {
  public boolean success() {
    return returnValue.isLeft();
  }
}
