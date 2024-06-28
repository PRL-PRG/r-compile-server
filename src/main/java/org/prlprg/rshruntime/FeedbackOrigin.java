package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * TODO: Currently can't think of feedback outside the enclosing function or promise, so why we'd
 * need that info, so currently it's only the kind and index.
 */
public record FeedbackOrigin(FeedbackKind kind, int indexOfKind) {
  public static final int UNDEFINED_INDEX = -1;

  public static FeedbackOrigin call(int indexOfKind) {
    return new FeedbackOrigin(FeedbackKind.CALL, indexOfKind);
  }

  public static FeedbackOrigin test(int indexOfKind) {
    return new FeedbackOrigin(FeedbackKind.TEST, indexOfKind);
  }

  public static FeedbackOrigin type(int indexOfKind) {
    return new FeedbackOrigin(FeedbackKind.TYPE, indexOfKind);
  }

  public boolean isUndefined() {
    return indexOfKind == UNDEFINED_INDEX;
  }

  @ParseMethod
  private static FeedbackOrigin parse(Parser p) {
    var s = p.scanner();
    var kind = p.parse(FeedbackKind.class);
    s.assertAndSkip('#');
    var indexOfKind = s.trySkip("unknown") ? UNDEFINED_INDEX : p.parse(Integer.class);
    return new FeedbackOrigin(kind, indexOfKind);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    p.print(kind);
    w.write('#');
    if (isUndefined()) {
      w.write("unknown");
    } else {
      p.print(indexOfKind);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
