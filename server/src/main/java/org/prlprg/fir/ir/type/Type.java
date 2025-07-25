package org.prlprg.fir.ir.type;

import org.prlprg.fir.ir.type.Kind.AnyValue;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;

public record Type(Kind kind, Ownership ownership, Concreteness concreteness)
    implements Comparable<Type> {
  public static final Type ANY = new Type(new Kind.Any(), Ownership.SHARED, Concreteness.MAYBE);
  public static final Type ANY_VALUE =
      new Type(new Kind.AnyValue(), Ownership.SHARED, Concreteness.DEFINITE);
  public static final Type INTEGER = primitiveScalar(PrimitiveKind.INTEGER);
  public static final Type LOGICAL = primitiveScalar(PrimitiveKind.LOGICAL);
  public static final Type REAL = primitiveScalar(PrimitiveKind.REAL);
  public static final Type STRING = primitiveScalar(PrimitiveKind.STRING);
  public static final Type INT_VECTOR = primitiveVector(PrimitiveKind.INTEGER);
  public static final Type LOGICAL_VECTOR = primitiveVector(PrimitiveKind.LOGICAL);
  public static final Type REAL_VECTOR = primitiveVector(PrimitiveKind.REAL);
  public static final Type STRING_VECTOR = primitiveVector(PrimitiveKind.STRING);
  public static final Type CLOSURE =
      new Type(new Kind.Closure(), Ownership.SHARED, Concreteness.DEFINITE);
  public static final Type BOOLEAN = LOGICAL;

  public static Type primitiveScalar(PrimitiveKind kind) {
    return new Type(new Kind.PrimitiveScalar(kind), Ownership.SHARED, Concreteness.DEFINITE);
  }

  public static Type primitiveVector(PrimitiveKind kind) {
    return new Type(new Kind.PrimitiveVector(kind), Ownership.SHARED, Concreteness.DEFINITE);
  }

  public static Type promise(Type innerType, Effects effects) {
    return new Type(new Kind.Promise(innerType, effects), Ownership.SHARED, Concreteness.DEFINITE);
  }

  public static Type of(SEXP sexp) {
    return switch (sexp) {
      case IntSXP i when !sexp.hasAttributes() -> i.isScalar() ? INTEGER : INT_VECTOR;
      case LglSXP l when !sexp.hasAttributes() -> l.isScalar() ? LOGICAL : LOGICAL_VECTOR;
      case RealSXP r when !sexp.hasAttributes() -> r.isScalar() ? REAL : REAL_VECTOR;
      case StrSXP s when !sexp.hasAttributes() -> s.isScalar() ? STRING : STRING_VECTOR;
      case CloSXP _, BuiltinOrSpecialSXP _ -> CLOSURE;
      case PromSXP p ->
          promise(
              p.boundVal() == null ? ANY_VALUE : of(p.boundVal()),
              p.isLazy() ? Effects.ANY : Effects.NONE);
      default -> ANY_VALUE;
    };
  }

  public Type withOwnership(Ownership newOwnership) {
    if (ownership == newOwnership) {
      return this;
    }
    return new Type(kind, newOwnership, concreteness);
  }

  public Type withConcreteness(Concreteness newConcreteness) {
    if (concreteness == newConcreteness) {
      return this;
    }
    return new Type(kind, ownership, newConcreteness);
  }

  public boolean isDefinitely(Class<? extends Kind> kind) {
    return kind == Kind.Any.class
        || ((kind == AnyValue.class
                ? !(this.kind instanceof Kind.Promise)
                : this.kind.getClass() == kind)
            && concreteness == Concreteness.DEFINITE);
  }

  public boolean isWellFormed() {
    return !(kind instanceof Kind.Any && concreteness == Concreteness.DEFINITE)
        && !(kind instanceof Kind.PrimitiveVector && ownership != Ownership.SHARED);
  }

  public boolean isSubtypeOf(Type other) {
    return kind.isSubtypeOf(other.kind)
        && ownership == other.ownership
        && concreteness.isSubsetOf(other.concreteness);
  }

  public boolean matches(Type expected) {
    return withOwnership(Ownership.FRESH).isSubtypeOf(expected.withOwnership(Ownership.FRESH))
        && switch (expected.ownership) {
          case FRESH ->
              throw new IllegalArgumentException("Parameters can't be fresh: " + expected);
          case OWNED -> ownership == Ownership.FRESH;
          case BORROWED -> true;
          case SHARED -> ownership == Ownership.FRESH || ownership == Ownership.SHARED;
        };
  }

  public boolean canAssignTo(Type expected) {
    return matches(expected) && expected.ownership != Ownership.BORROWED;
  }

  public Type union(Type other, Runnable onOwnershipMismatch) {
    if (ownership != other.ownership) {
      onOwnershipMismatch.run();
    }

    return new Type(
        kind.union(other.kind, onOwnershipMismatch),
        ownership,
        concreteness.union(other.concreteness));
  }

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
    if ((kind instanceof Kind.Any) == (concreteness == Concreteness.DEFINITE)) {
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
            : ((kind instanceof Kind.Any) ? Concreteness.MAYBE : Concreteness.DEFINITE);

    return new Type(kind, ownership, concreteness);
  }
}
