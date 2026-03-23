package org.prlprg.fir.ir.type;

import java.util.function.Consumer;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public sealed interface Kind extends Comparable<Kind> {
  record AnySexp() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record PrimitiveVector(PrimitiveKind primitive) implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record PrimitiveVector1(PrimitiveKind primitive) implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record Closure() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record Dots() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record Missing() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record PrimitiveScalar(PrimitiveKind primitive) implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record Boolean() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  default Repr repr() {
    return switch (this) {
      case AnySexp(), PrimitiveVector(_), PrimitiveVector1(_), Closure(), Dots(), Missing() ->
          Repr.SEXP;
      case PrimitiveScalar(var primitiveKind) -> primitiveKind.repr();
      case Boolean() -> Repr.BOOLEAN;
    };
  }

  /// Whether a type with this kind can be [well-formed][Type#isWellFormed()] if this has
  /// non-shared [Ownership].
  ///
  /// Note that [Type#withOwnership(Ownership)] will still return the type with a non-shared
  /// ownership, since it's used by subtyping.
  default boolean isWellFormedWithOwnership() {
    return switch (this) {
      case AnySexp(), Closure(), Dots(), Missing(), PrimitiveScalar(_), Boolean() -> false;
      case PrimitiveVector(_), PrimitiveVector1(_) -> true;
    };
  }

  default boolean isSubtypeOf(Kind other) {
    return switch (other) {
      case AnySexp() -> !(this instanceof PrimitiveScalar || this instanceof Boolean);
      case Dots() -> this instanceof Dots || this instanceof Missing;
      case PrimitiveVector(var otherPrimitive) ->
          this.equals(other)
              || (this instanceof PrimitiveVector1(var primitive) && primitive == otherPrimitive);
      case PrimitiveVector1(_), Closure(), Missing(), PrimitiveScalar(_), Boolean() ->
          this.equals(other);
    };
  }

  default Kind union(Kind other, Consumer<String> onMismatch) {
    if (repr() != other.repr()) {
      onMismatch.accept("representation");
    }

    return switch (other) {
      case AnySexp() -> other;
      case PrimitiveVector(var otherPrimitive) ->
          equals(other)
              ? this
              : (this instanceof PrimitiveVector1(var primitive) && primitive == otherPrimitive)
                  ? other
                  : union(new AnySexp(), _ -> {});
      case PrimitiveVector1(var otherPrimitive) ->
          equals(other)
              ? this
              : (this instanceof PrimitiveVector(var primitive) && primitive == otherPrimitive)
                  ? this
                  : union(new AnySexp(), _ -> {});
      case Closure() -> equals(other) ? this : union(new AnySexp(), _ -> {});
      case Dots() ->
          (this instanceof Dots || this instanceof Missing) ? other : union(new AnySexp(), _ -> {});
      case Missing() ->
          (this instanceof Dots || this instanceof Missing) ? this : union(new AnySexp(), _ -> {});
      case PrimitiveScalar(_), Boolean() -> this;
    };
  }

  /// Comparison is subtyping arbitrarily extended to be totally ordered
  @Override
  default int compareTo(Kind o) {
    return switch (o) {
      case AnySexp() -> this instanceof AnySexp ? 0 : -1;
      case PrimitiveVector(var otherPrimitive) ->
          switch (this) {
            case AnySexp() -> 1;
            case PrimitiveVector(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case PrimitiveVector1(var otherPrimitive) ->
          switch (this) {
            case AnySexp(), PrimitiveVector(_) -> 1;
            case PrimitiveVector1(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case Closure() ->
          switch (this) {
            case AnySexp(), PrimitiveVector(_), PrimitiveVector1(_) -> 1;
            case Closure() -> 0;
            default -> -1;
          };
      case Dots() ->
          switch (this) {
            case AnySexp(), PrimitiveVector(_), PrimitiveVector1(_), Closure() -> 1;
            case Dots() -> 0;
            default -> -1;
          };
      case Missing() ->
          switch (this) {
            case AnySexp(), PrimitiveVector(_), PrimitiveVector1(_), Closure(), Dots() -> 1;
            case Missing() -> 0;
            default -> -1;
          };
      case PrimitiveScalar(var otherPrimitive) ->
          switch (this) {
            case AnySexp(), PrimitiveVector(_), PrimitiveVector1(_), Closure(), Dots(), Missing() ->
                1;
            case PrimitiveScalar(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case Boolean() ->
          switch (this) {
            case AnySexp(),
                PrimitiveVector(_),
                PrimitiveVector1(_),
                Closure(),
                Dots(),
                Missing(),
                PrimitiveScalar(_) ->
                1;
            case Boolean() -> 0;
          };
    };
  }

  @PrintMethod
  private static void print(Kind self, Printer p) {
    var w = p.writer();

    switch (self) {
      case AnySexp() -> w.write("V");
      case PrimitiveVector(var primitive) -> {
        w.write("v(");
        p.print(primitive);
        w.write(')');
      }
      case PrimitiveVector1(var primitive) -> {
        w.write("v1(");
        p.print(primitive);
        w.write(')');
      }
      case Closure() -> w.write("cls");
      case Dots() -> w.write("dots");
      case Missing() -> w.write("miss");
      case PrimitiveScalar(var primitive) -> p.print(primitive);
      case Boolean() -> w.write("B");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Kind parse(Parser p) {
    var s = p.scanner();

    if (s.trySkip('V')) {
      return new AnySexp();
    } else if (s.trySkip("v1")) {
      s.assertAndSkip('(');
      var primitive = p.parse(PrimitiveKind.class);
      s.assertAndSkip(')');
      return new PrimitiveVector1(primitive);
    } else if (s.trySkip('v')) {
      s.assertAndSkip('(');
      var primitive = p.parse(PrimitiveKind.class);
      s.assertAndSkip(')');
      return new PrimitiveVector(primitive);
    } else if (s.trySkip("cls")) {
      return new Closure();
    } else if (s.trySkip("dots")) {
      return new Dots();
    } else if (s.trySkip("miss")) {
      return new Missing();
    } else if (s.nextCharSatisfies(c -> c == 'L' || c == 'I' || c == 'R' || c == 'S')) {
      var primitive = p.parse(PrimitiveKind.class);
      return new PrimitiveScalar(primitive);
    } else if (s.trySkip('B')) {
      return new Boolean();
    } else {
      // Also has the starting characters for parsing a promise,
      // because in practice it's parsed that way.
      throw s.fail(
          "expected '*', 'p('..., 'p?('..., 'V', 'v('..., 'v1('..., 'cls', 'dots', 'miss', primitive kind ('L', 'I', 'R', or 'S'), or 'B'");
    }
  }
}
