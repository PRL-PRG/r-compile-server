package org.prlprg.fir.type;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public sealed interface Kind extends Comparable<Kind> {
  record Any() implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

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

  record Promise(Type value, Effects effects) implements Kind {
    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  /// Comparison is subtyping arbitrarily extended to be totally ordered.
  @Override
  default int compareTo(Kind o) {
    return switch (this) {
      case Any() -> (o instanceof Any) ? 0 : -1;
      case AnyValue() ->
          switch (o) {
            case Any() -> 1;
            case AnyValue() -> 0;
            default -> -1;
          };
      case PrimitiveScalar(var primitive) ->
          switch (o) {
            case Any(), AnyValue() -> 1;
            case PrimitiveScalar(var otherPrimitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case PrimitiveVector(var primitive) ->
          switch (o) {
            case Any(), AnyValue(), PrimitiveScalar(_) -> 1;
            case PrimitiveVector(var otherPrimitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case Promise(var value, var effects) ->
          switch (o) {
            case Any(), AnyValue(), PrimitiveScalar(_), PrimitiveVector(_) -> 1;
            case Promise(var otherValue, var otherEffects) -> {
              int cmp = value.compareTo(otherValue);
              if (cmp != 0) yield cmp;
              yield effects.compareTo(otherEffects);
            }
          };
    };
  }

  @PrintMethod
  private static void print(Kind self, Printer p) {
    var w = p.writer();

    switch (self) {
      case Any() -> w.write("*");
      case AnyValue() -> w.write("V");
      case PrimitiveScalar(var primitive) -> p.print(primitive);
      case PrimitiveVector(var primitive) -> {
        w.write("v(");
        p.print(primitive);
        w.write(')');
      }
      case Promise(var type, var effects) -> {
        w.write("p(");
        p.print(type);
        w.write(' ');
        p.print(effects);
        w.write(')');
      }
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Kind parse(Parser p) {
    var s = p.scanner();

    if (s.trySkip('*')) {
      return new Any();
    } else if (s.trySkip('V')) {
      return new AnyValue();
    } else if (s.trySkip('v')) {
      s.assertAndSkip('(');
      var primitive = p.parse(PrimitiveKind.class);
      s.assertAndSkip(')');
      return new PrimitiveVector(primitive);
    } else if (s.trySkip('p')) {
      s.assertAndSkip('(');
      var type = p.parse(Type.class);
      var effects = p.parse(Effects.class);
      s.assertAndSkip(')');
      return new Promise(type, effects);
    } else {
      var primitive = p.parse(PrimitiveKind.class);
      return new PrimitiveScalar(primitive);
    }
  }
}
