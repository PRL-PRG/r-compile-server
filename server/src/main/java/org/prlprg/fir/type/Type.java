package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public record Type(Kind kind, Ownership ownership, Concreteness concreteness)
    implements Comparable<Type> {
  @Override
  public int compareTo(Type o) {
    int cmp = kind.compareTo(o.kind);
    if (cmp != 0) return cmp;

    cmp = ownership.compareTo(o.ownership);
    if (cmp != 0) return cmp;

    return concreteness.compareTo(o.concreteness);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(kind);
    p.print(ownership);
    p.print(concreteness);
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Type parse(Parser p) {
    var s = p.scanner();
    s.skipWhitespace(true);

    var kind = p.parse(Kind.class);
    var ownership = p.parse(Ownership.class);
    var concreteness = p.parse(Concreteness.class);

    return new Type(kind, ownership, concreteness);
  }
}
