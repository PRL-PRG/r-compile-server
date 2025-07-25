package org.prlprg.fir.ir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum PrimitiveKind {
  LOGICAL,
  INTEGER,
  REAL,
  STRING;

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case LOGICAL -> w.write("L");
      case INTEGER -> w.write("I");
      case REAL -> w.write("R");
      case STRING -> w.write("S");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static PrimitiveKind parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();

    if (s.trySkip('L')) {
      return LOGICAL;
    } else if (s.trySkip('I')) {
      return INTEGER;
    } else if (s.trySkip('R')) {
      return REAL;
    } else if (s.trySkip('S')) {
      return STRING;
    } else {
      throw s.fail("expected 'L', 'I', 'R', or 'S'");
    }
  }
}
