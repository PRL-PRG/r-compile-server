package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum PrimitiveKind {
  INTEGER,
  STRING;

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case INTEGER -> w.write("I");
      case STRING -> w.write("S");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static PrimitiveKind parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();

    if (s.trySkip('I')) {
      return INTEGER;
    } else if (s.trySkip('S')) {
      return STRING;
    } else {
      throw s.fail("expected 'I' or 'S'");
    }
  }
}
