package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum Ownership {
  FRESH,
  OWNED,
  BORROWED,
  SHARED;

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case FRESH -> w.write("f");
      case OWNED -> w.write("o");
      case BORROWED -> w.write("b");
      case SHARED -> w.write("s");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Ownership parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();

    if (s.trySkip('f')) {
      return FRESH;
    } else if (s.trySkip('o')) {
      return OWNED;
    } else if (s.trySkip('b')) {
      return BORROWED;
    } else if (s.trySkip('s')) {
      return SHARED;
    } else {
      throw s.fail("expected 'f', 'o', 'b', or 's'");
    }
  }
}
