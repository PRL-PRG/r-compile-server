package org.prlprg.fir.ir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public sealed interface Kind extends Comparable<Kind> {
  record AnyValue() implements Kind {
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

  record PrimitiveVector(PrimitiveKind primitive) implements Kind {
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

  /// Whether a type with this kind can be [well-formed][Type#isWellFormed()] if this has
  /// non-shared [Ownership].
  ///
  /// Note that [Type#withOwnership(Ownership)] will still return the type with a non-shared
  /// ownership, since it's used by subtyping.
  default boolean isWellFormedWithOwnership() {
    return switch (this) {
      case AnyValue(), PrimitiveScalar(var _), Closure(), Dots(), Missing() -> false;
      case PrimitiveVector(var _) -> true;
    };
  }

  default boolean isSubtypeOf(Kind other) {
    return switch (other) {
      case AnyValue() -> true;
      case PrimitiveVector(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) -> primitiveKind == otherPrimitiveKind;
            case PrimitiveVector(var primitiveKind) -> primitiveKind == otherPrimitiveKind;
            default -> false;
          };
      case Dots() -> this instanceof Dots || this instanceof Missing;
      case PrimitiveScalar(var _), Closure(), Missing() -> this.equals(other);
    };
  }

  default Kind union(Kind other) {
    return switch (other) {
      case AnyValue() -> other;
      case PrimitiveScalar(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            case PrimitiveVector(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            default -> union(new AnyValue());
          };
      case PrimitiveVector(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                other;
            case PrimitiveVector(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            default -> union(new AnyValue());
          };
      case Closure() -> this.equals(other) ? this : union(new AnyValue());
      case Dots() ->
          (this instanceof Dots || this instanceof Missing) ? other : union(new AnyValue());
      case Missing() ->
          (this instanceof Dots || this instanceof Missing) ? this : union(new AnyValue());
    };
  }

  /// Comparison is subtyping arbitrarily extended to be totally ordered
  @Override
  default int compareTo(Kind o) {
    return switch (o) {
      case AnyValue() -> this instanceof AnyValue ? 0 : -1;
      case PrimitiveVector(var otherPrimitive) ->
          switch (this) {
            case AnyValue() -> 1;
            case PrimitiveVector(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case PrimitiveScalar(var otherPrimitive) ->
          switch (this) {
            case AnyValue(), PrimitiveVector(_) -> 1;
            case PrimitiveScalar(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case Closure() ->
          switch (this) {
            case AnyValue(), PrimitiveVector(_), PrimitiveScalar(_) -> 1;
            case Closure() -> 0;
            default -> -1;
          };
      case Dots() ->
          switch (this) {
            case AnyValue(), PrimitiveVector(_), PrimitiveScalar(_), Closure() -> 1;
            case Dots() -> 0;
            default -> -1;
          };
      case Missing() ->
          switch (this) {
            case AnyValue(), PrimitiveVector(_), PrimitiveScalar(_), Closure(), Dots() -> 1;
            case Missing() -> 0;
          };
    };
  }

  @PrintMethod
  private static void print(Kind self, Printer p) {
    var w = p.writer();

    switch (self) {
      case AnyValue() -> w.write("V");
      case PrimitiveScalar(var primitive) -> p.print(primitive);
      case PrimitiveVector(var primitive) -> {
        w.write("v(");
        p.print(primitive);
        w.write(')');
      }
      case Closure() -> w.write("cls");
      case Dots() -> w.write("dots");
      case Missing() -> w.write("miss");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Kind parse(Parser p) {
    var s = p.scanner();

    if (s.trySkip('V')) {
      return new AnyValue();
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
    } else {
      // Also has the starting characters for parsing a promise,
      // because in practice it's parsed that way.
      throw s.fail(
          "expected '*', 'V', 'v('..., 'cls', 'dots', 'miss', 'p('..., 'p?('..., or a primitive kind ('L', 'I', 'R', or 'S')");
    }
  }
}
