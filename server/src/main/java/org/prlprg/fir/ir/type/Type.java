package org.prlprg.fir.ir.type;

import java.util.Objects;
import java.util.function.Consumer;
import java.util.logging.Logger;
import org.jspecify.annotations.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;

public record Type(Kind kind, Promisity promisity, Ownership ownership, Concreteness concreteness)
    implements Comparable<Type> {
  public static final Type ANY_SEXP =
      new Type(new Kind.AnySexp(), Promisity.ANY, Ownership.SHARED, Concreteness.MAYBE);
  public static final Type ANY_VALUE_SEXP =
      new Type(new Kind.AnySexp(), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);
  public static final Type ANY_PROMISE = promise(ANY_VALUE_SEXP, Effects.REFLECT);
  public static final Type INTEGER = primitiveScalar(PrimitiveKind.INTEGER);
  public static final Type LOGICAL = primitiveScalar(PrimitiveKind.LOGICAL);
  public static final Type REAL = primitiveScalar(PrimitiveKind.REAL);
  public static final Type STRING = primitiveScalar(PrimitiveKind.STRING);
  public static final Type SHARED_INTEGER_VECTOR =
      primitiveVector(PrimitiveKind.INTEGER, Ownership.SHARED);
  public static final Type SHARED_LOGICAL_VECTOR =
      primitiveVector(PrimitiveKind.LOGICAL, Ownership.SHARED);
  public static final Type SHARED_REAL_VECTOR =
      primitiveVector(PrimitiveKind.REAL, Ownership.SHARED);
  public static final Type SHARED_STRING_VECTOR =
      primitiveVector(PrimitiveKind.STRING, Ownership.SHARED);
  public static final Type BOXED_INTEGER =
      primitiveVector1(PrimitiveKind.INTEGER, Ownership.SHARED);
  public static final Type BOXED_LOGICAL =
      primitiveVector1(PrimitiveKind.LOGICAL, Ownership.SHARED);
  public static final Type BOXED_REAL = primitiveVector1(PrimitiveKind.REAL, Ownership.SHARED);
  public static final Type BOXED_STRING = primitiveVector1(PrimitiveKind.STRING, Ownership.SHARED);
  public static final Type CLOSURE =
      new Type(new Kind.Closure(), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);
  public static final Type BOOLEAN =
      new Type(new Kind.Boolean(), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);
  public static final Type DOTS =
      new Type(new Kind.Dots(), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);

  public static final Type MISSING =
      new Type(new Kind.Missing(), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);

  private static final Logger LOGGER = Logger.getLogger(Type.class.getName());

  public static Type primitiveScalar(PrimitiveKind kind) {
    return new Type(
        new Kind.PrimitiveScalar(kind), Promisity.VALUE, Ownership.SHARED, Concreteness.DEFINITE);
  }

  public static Type primitiveVector(PrimitiveKind kind, Ownership ownership) {
    return new Type(
        new Kind.PrimitiveVector(kind), Promisity.VALUE, ownership, Concreteness.DEFINITE);
  }

  public static Type primitiveVector1(PrimitiveKind kind, Ownership ownership) {
    return new Type(
        new Kind.PrimitiveVector1(kind), Promisity.VALUE, ownership, Concreteness.DEFINITE);
  }

  public static Type promise(Type valueType, Effects effects) {
    return new Type(
        valueType.kind, Promisity.promise(effects), valueType.ownership, valueType.concreteness);
  }

  public static Type maybePromise(Type valueType, Effects effects) {
    return new Type(
        valueType.kind, Promisity.maybe(effects), valueType.ownership, valueType.concreteness);
  }

  public static Type of(SEXP sexp) {
    return switch (sexp) {
      case IntSXP s when s.isSimpleScalar() -> BOXED_INTEGER;
      case LglSXP s when s.isSimpleScalar() -> BOXED_LOGICAL;
      case RealSXP s when s.isSimpleScalar() -> BOXED_REAL;
      case StrSXP s when s.isSimpleScalar() -> BOXED_STRING;
      case IntSXP _ when !sexp.hasAttributes() -> SHARED_INTEGER_VECTOR;
      case LglSXP _ when !sexp.hasAttributes() -> SHARED_LOGICAL_VECTOR;
      case RealSXP _ when !sexp.hasAttributes() -> SHARED_REAL_VECTOR;
      case StrSXP _ when !sexp.hasAttributes() -> SHARED_STRING_VECTOR;
      case DotsListSXP _ -> DOTS;
      case CloSXP _, BuiltinOrSpecialSXP _ -> CLOSURE;
      case PromSXP p ->
          promise(
              p.isLazy() ? ANY_VALUE_SEXP : of(Objects.requireNonNull(p.boundVal())),
              p.isLazy() ? Effects.REFLECT : Effects.NONE);
      default -> sexp.equals(SEXPs.MISSING_ARG) ? MISSING : ANY_VALUE_SEXP;
    };
  }

  public Type withOwnership(Ownership newOwnership) {
    if (ownership == newOwnership) {
      return this;
    }
    return new Type(kind, promisity, newOwnership, concreteness);
  }

  public Type withPromisity(Promisity newPromisity) {
    if (promisity.equals(newPromisity)) {
      return this;
    }
    return new Type(kind, newPromisity, ownership, concreteness);
  }

  public Type withConcreteness(Concreteness newConcreteness) {
    if (concreteness == newConcreteness) {
      return this;
    }
    return new Type(kind, promisity, ownership, newConcreteness);
  }

  /// Whether the type is definitely a value
  public boolean isValue() {
    return promisity.isValue() && concreteness == Concreteness.DEFINITE;
  }

  /// Whether the type is definitely a promise
  public boolean isPromise() {
    return promisity.isPromise() && concreteness == Concreteness.DEFINITE;
  }

  public boolean isWellFormed() {
    return !(kind instanceof Kind.AnySexp
            && promisity.equals(Promisity.ANY)
            && concreteness == Concreteness.DEFINITE)
        && !(!kind.isWellFormedWithOwnership() && ownership != Ownership.SHARED);
  }

  public boolean isSubtypeOf(Type other) {
    return kind.isSubtypeOf(other.kind)
        && promisity.isSubtypeOf(other.promisity)
        && ownership == other.ownership
        && concreteness.isSubsetOf(other.concreteness);
  }

  public boolean matches(Type expected) {
    return kind.isSubtypeOf(expected.kind)
        && promisity.isSubtypeOf(expected.promisity)
        && switch (expected.ownership) {
          case FRESH -> {
            warn("Parameters can't be fresh: " + expected);
            yield ownership == Ownership.FRESH;
          }
          case OWNED -> ownership == Ownership.FRESH;
          case BORROWED -> true;
          case SHARED -> ownership == Ownership.FRESH || ownership == Ownership.SHARED;
        }
        && concreteness.isSubsetOf(expected.concreteness);
  }

  /// `true` iff every type that matches `this` matches `other`.
  boolean allMatchesMatch(Type other) {
    if (ownership == Ownership.FRESH) {
      warn("Parameters can't be fresh: " + this);
    }

    return kind.isSubtypeOf(other.kind)
        && promisity.isSubtypeOf(other.promisity)
        && switch (other.ownership) {
          case FRESH -> {
            warn("Parameters can't be fresh: " + other);
            yield ownership == Ownership.FRESH;
          }
          case OWNED -> ownership == Ownership.FRESH || ownership == Ownership.OWNED;
          case BORROWED -> true;
          case SHARED -> ownership == Ownership.FRESH || ownership == Ownership.SHARED;
        }
        && concreteness.isSubsetOf(other.concreteness);
  }

  public boolean canBeAssignedTo(Type expected) {
    return kind.isSubtypeOf(expected.kind)
        && promisity.isSubtypeOf(expected.promisity)
        && switch (expected.ownership) {
          case FRESH -> {
            warn("Assignment targets can't be fresh: " + expected);
            yield ownership == Ownership.FRESH;
          }
          case OWNED -> ownership == Ownership.FRESH;
          case BORROWED -> false;
          case SHARED -> ownership == Ownership.FRESH || ownership == Ownership.SHARED;
        }
        && concreteness.isSubsetOf(expected.concreteness);
  }

  /// `true` iff every type that `this` can be assigned to, `other` can be assigned to.
  boolean canBeAssignedToAll(Type other) {
    if (ownership == Ownership.OWNED || ownership == Ownership.BORROWED) {
      warn("Owned and borrowed can't be assigned to anything: " + this);
    }

    return kind.isSubtypeOf(other.kind)
        && promisity.isSubtypeOf(other.promisity)
        && switch (other.ownership) {
          case FRESH -> ownership == Ownership.FRESH;
          case OWNED, BORROWED -> {
            warn("Owned and borrowed can't be assigned to anything: " + other);
            yield ownership == Ownership.OWNED || ownership == Ownership.BORROWED;
          }
          case SHARED -> ownership == Ownership.FRESH || ownership == Ownership.SHARED;
        }
        && concreteness.isSubsetOf(other.concreteness);
  }

  @Override
  public int compareTo(Type o) {
    int cmp = kind.compareTo(o.kind);
    if (cmp != 0) return cmp;
    cmp = promisity.compareTo(o.promisity);
    if (cmp != 0) return cmp;
    cmp = ownership.compareTo(o.ownership);
    if (cmp != 0) return cmp;
    return concreteness.compareTo(o.concreteness);
  }

  /// [Type#union(Type, Runnable)] but treats null as BOTTOM.
  public static @Nullable Type union(@Nullable Type lhs, @Nullable Type rhs) {
    if (lhs == null) return rhs;
    if (rhs == null) return lhs;
    return lhs.union(rhs, _ -> {});
  }

  public Type union(Type other, Consumer<String> onMismatch) {
    if (ownership != other.ownership) {
      onMismatch.accept("ownership");
    }

    var result =
        new Type(
            kind.union(other.kind, onMismatch),
            promisity.union(other.promisity),
            // Technically ownerships must be equal, but for graceful recovery and easier type
            // feedback.
            other.ownership == Ownership.SHARED ? Ownership.SHARED : ownership,
            concreteness.union(other.concreteness));
    return result.equals(ANY_SEXP.withConcreteness(Concreteness.DEFINITE)) ? ANY_SEXP : result;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    if (equals(ANY_SEXP)) {
      p.writer().write('*');
      return;
    }

    p.withContext(
            new Promisity.PrintContext(
                p1 -> {
                  p1.print(kind);
                  if (ownership != Ownership.SHARED) {
                    p1.print(ownership);
                  }
                }))
        .print(promisity);

    // For `ANY - concreteness` concreteness is implicit iff `MAYBE` (and otherwise malformed).
    // For other kinds, concreteness is implicit iff `DEFINITELY`.
    if ((kind instanceof Kind.AnySexp
            && promisity.equals(Promisity.ANY)
            && ownership == Ownership.SHARED)
        == (concreteness == Concreteness.DEFINITE)) {
      p.print(concreteness);
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Type parse(Parser p) {
    var s = p.scanner();
    s.skipWhitespace(true);

    if (s.trySkip('*')) {
      return ANY_SEXP;
    }

    var kind = new Kind[1];
    var ownership = new Ownership[1];
    var promisity =
        p.withContext(
                new Promisity.ParseContext(
                    p1 -> {
                      var s1 = p1.scanner();

                      kind[0] = p1.parse(Kind.class);
                      ownership[0] =
                          (s1.nextCharIs('f')
                                  || s1.nextCharIs('o')
                                  || s1.nextCharIs('b')
                                  || s1.nextCharIs('s'))
                              ? p1.parse(Ownership.class)
                              : Ownership.SHARED;
                    }))
            .parse(Promisity.class);
    var concreteness =
        (s.nextCharIs('?') || s.nextCharIs('!'))
            ? p.parse(Concreteness.class)
            : Concreteness.DEFINITE;

    return new Type(
        Objects.requireNonNull(kind[0]),
        promisity,
        Objects.requireNonNull(ownership[0]),
        concreteness);
  }

  /// The type-checker doesn't avoid calling some methods if the user provides bad code, but
  /// reports the type errors elsewhere. In case the errors aren't reported, we log them via
  /// this method.
  ///
  /// The code after this method is fallback code. The type-checker can report multiple errors,
  /// and to support this, there is fallback code which makes it more permissive than the
  /// formalization.
  private void warn(String message) {
    LOGGER.warning(message);
  }
}
