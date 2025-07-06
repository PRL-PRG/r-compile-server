package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public record Effects(boolean reflect) implements Comparable<Effects> {
  public static final Effects ANY = new Effects(true);
  public static final Effects NONE = new Effects(false);

  /// Comparison is subtyping arbitrarily extended to be totally ordered.
  @Override
  public int compareTo(Effects o) {
    return Boolean.compare(reflect, o.reflect);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (reflect) {
      w.write("+");
    } else {
      w.write("-");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Effects parse(Parser p) {
    var s = p.scanner();

    s.skipWhitespace(true);

    if (s.trySkip('+')) {
      return new Effects(true);
    } else if (s.trySkip('-')) {
      return new Effects(false);
    } else {
      throw s.fail("expected '+' or '-'");
    }
  }
}
