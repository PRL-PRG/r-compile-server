package org.prlprg.fir.ir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public enum Effects {
  NONE,
  IMPURE,
  REFLECT;

  public boolean reflect() {
    return this == REFLECT;
  }

  public boolean impure() {
    return this == IMPURE || this == REFLECT;
  }

  public boolean isSubsetOf(Effects expected) {
    return this.ordinal() <= expected.ordinal();
  }

  public Effects union(Effects other) {
    return ordinal() >= other.ordinal() ? this : other;
  }

  public Effects intersect(Effects other) {
    return ordinal() <= other.ordinal() ? this : other;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case NONE -> w.write("-");
      case IMPURE -> w.write("~");
      case REFLECT -> w.write("+");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Effects parse(Parser p) {
    var s = p.scanner();

    s.skipWhitespace(true);

    if (s.trySkip('+')) {
      return REFLECT;
    } else if (s.trySkip('~')) {
      return IMPURE;
    } else if (s.trySkip('-')) {
      return NONE;
    } else {
      throw s.fail("expected '+', '~', or '-'");
    }
  }
}
