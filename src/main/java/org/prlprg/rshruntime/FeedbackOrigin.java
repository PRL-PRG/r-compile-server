package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record FeedbackOrigin(BcAddress function, FeedbackIndex index) {
  @ParseMethod
  private static FeedbackOrigin parse(Parser p) {
    var s = p.scanner();
    var function = p.parse(BcAddress.class);
    s.assertAndSkip('[');
    var index = p.parse(FeedbackIndex.class);
    s.assertAndSkip(']');
    return new FeedbackOrigin(function, index);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    p.print(function);
    w.write('[');
    p.print(index);
    w.write(']');
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
