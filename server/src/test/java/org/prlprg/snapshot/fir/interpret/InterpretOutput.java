package org.prlprg.snapshot.fir.interpret;

import org.prlprg.examples.SexpResult;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// What a call to the interpreter did.
///
/// @param module The module as it's printed after the call, which shows what the call evaluated:
///     an unevaluated version isn't printed (or, if it's a baseline, only its signature is).
public record InterpretOutput(
    SexpResult result, String checkpointTrace, MockModuleFeedback feedback, String module) {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(result);
    w.write("\n---\n");
    w.write(checkpointTrace);
    w.write("\n---\n");
    p.print(feedback);
  }
}
