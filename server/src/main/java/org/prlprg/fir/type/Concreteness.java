package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum Concreteness {
  DEFINITELY,
  MAYBE;

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case DEFINITELY -> w.write("!");
      case MAYBE -> w.write("?");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Concreteness parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();

    if (s.trySkip('!')) {
      return DEFINITELY;
    } else if (s.trySkip('?')) {
      return MAYBE;
    } else {
      throw s.fail("expected '!' or '?'");
    }
  }
}
