package org.prlprg.fir.ir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public record Type(Kind kind, Ownership ownership, Concreteness concreteness)
    implements Comparable<Type> {
  public static final Type ANY = new Type(new Kind.Any(), Ownership.SHARED, Concreteness.MAYBE);
  public static final Type INTEGER =
      new Type(
          new Kind.PrimitiveScalar(PrimitiveKind.INTEGER),
          Ownership.SHARED,
          Concreteness.DEFINITELY);
  public static final Type INT_VECTOR =
      new Type(
          new Kind.PrimitiveVector(PrimitiveKind.INTEGER),
          Ownership.SHARED,
          Concreteness.DEFINITELY);
  public static final Type BOOLEAN =
      new Type(
          new Kind.PrimitiveScalar(PrimitiveKind.LOGICAL),
          Ownership.SHARED,
          Concreteness.DEFINITELY);

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
    if (ownership != Ownership.SHARED) {
      p.print(ownership);
    }
    // For `Kind.Any`, concreteness is implicit iff `MAYBE`.
    // For other kinds, concreteness is implicit iff `DEFINITELY`.
    if ((kind instanceof Kind.Any) == (concreteness == Concreteness.DEFINITELY)) {
      p.print(concreteness);
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Type parse(Parser p) {
    var s = p.scanner();
    s.skipWhitespace(true);

    var kind = p.parse(Kind.class);
    var ownership =
        (s.nextCharIs('f') || s.nextCharIs('o') || s.nextCharIs('b') || s.nextCharIs('s'))
            ? p.parse(Ownership.class)
            : Ownership.SHARED;
    var concreteness =
        (s.nextCharIs('?') || s.nextCharIs(':'))
            ? p.parse(Concreteness.class)
            : ((kind instanceof Kind.Any) ? Concreteness.MAYBE : Concreteness.DEFINITELY);

    return new Type(kind, ownership, concreteness);
  }
}
