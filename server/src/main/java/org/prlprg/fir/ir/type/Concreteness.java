package org.prlprg.fir.ir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum Concreteness {
  DEFINITE,
  MAYBE;

  /// Whether this is definite or the expected concreteness is maybe.
  public boolean isSubsetOf(Concreteness expected) {
    return this == DEFINITE || expected == MAYBE;
  }

  /// Maybe if either is maybe.
  public Concreteness union(Concreteness other) {
    return this == DEFINITE && other == DEFINITE ? DEFINITE : MAYBE;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case DEFINITE -> w.write("!");
      case MAYBE -> w.write("?");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Concreteness parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();

    if (s.trySkip('!')) {
      return DEFINITE;
    } else if (s.trySkip('?')) {
      return MAYBE;
    } else {
      throw s.fail("expected '!' or '?'");
    }
  }
}
