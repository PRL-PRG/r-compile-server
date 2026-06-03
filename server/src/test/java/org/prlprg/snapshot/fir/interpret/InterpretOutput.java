package org.prlprg.snapshot.fir.interpret;

import org.prlprg.examples.SexpResult;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record InterpretOutput(
    SexpResult result, String checkpointTrace, MockModuleFeedback feedback) {
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
