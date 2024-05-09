package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record FeedbackIndex(FeedbackKind kind, int indexOfKind) {
  public static final int UNDEFINED_INDEX = -1;

  public static FeedbackIndex call(int indexOfKind) {
    return new FeedbackIndex(FeedbackKind.CALL, indexOfKind);
  }

  public static FeedbackIndex test(int indexOfKind) {
    return new FeedbackIndex(FeedbackKind.TEST, indexOfKind);
  }

  public static FeedbackIndex type(int indexOfKind) {
    return new FeedbackIndex(FeedbackKind.TYPE, indexOfKind);
  }

  public boolean isUndefined() {
    return indexOfKind == UNDEFINED_INDEX;
  }

  @ParseMethod
  private static FeedbackIndex parse(Parser p) {
    var s = p.scanner();
    var kind = p.parse(FeedbackKind.class);
    s.assertAndSkip('#');
    var indexOfKind = s.trySkip("unknown") ? UNDEFINED_INDEX : p.parse(Integer.class);
    return new FeedbackIndex(kind, indexOfKind);
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
