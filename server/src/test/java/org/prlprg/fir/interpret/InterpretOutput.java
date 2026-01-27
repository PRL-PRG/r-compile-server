package org.prlprg.fir.interpret;

import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Either;

public record InterpretOutput(
    Either<SEXP, String> returnValue, String checkpointTrace, MockModuleFeedback feedback) {
  public boolean success() {
    return returnValue.isLeft();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    returnValue.destruct(
        sexp -> {
          w.write("Return: ");
          p.print(sexp);
          return null;
        },
        err -> {
          w.write("Crash: ");
          w.write(err);
          return null;
        });

    w.write("\n---\n");

    w.write(checkpointTrace);

    w.write("\n---\n");

    p.print(feedback);
  }
}
