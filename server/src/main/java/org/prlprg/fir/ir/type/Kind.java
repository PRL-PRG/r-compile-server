package org.prlprg.fir.ir.type;

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

  record MaybePromise(Type value, Effects effects) implements Kind {
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

  record Promise(Type value, Effects effects) implements Kind {
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
      case Any(), AnyValue(), MaybePromise(var _, var _), PrimitiveScalar(var _) -> false;
      case PrimitiveVector(var _) -> true;
      case Closure(), Dots(), Missing(), Promise(var _, var _) -> false;
    };
  }

  default boolean isSubtypeOf(Kind other) {
    return switch (other) {
      case Any() -> true;
      case MaybePromise(var otherValue, var otherEffects) ->
          switch (this) {
            case Any() -> false;
            case MaybePromise(var value, var effects) ->
                value.isSubtypeOf(otherValue) && effects.isSubsetOf(otherEffects);
            case Promise(var value, var effects) ->
                value.isSubtypeOf(otherValue) && effects.isSubsetOf(otherEffects);
            default -> this.isSubtypeOf(otherValue.kind());
          };
      case AnyValue() ->
          !(this instanceof Any) && !(this instanceof MaybePromise) && !(this instanceof Promise);
      case PrimitiveVector(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) -> primitiveKind == otherPrimitiveKind;
            case PrimitiveVector(var primitiveKind) -> primitiveKind == otherPrimitiveKind;
            default -> false;
          };
      case Dots() -> this instanceof Dots || this instanceof Missing;
      case PrimitiveScalar(var _), Closure(), Missing() -> this.equals(other);
      case Promise(var otherValue, var otherEffects) ->
          this instanceof Promise(var value, var effects)
              && value.isSubtypeOf(otherValue)
              && effects.isSubsetOf(otherEffects);
    };
  }

  /// Comparison is subtyping arbitrarily extended to be totally ordered.
  @Override
  default int compareTo(Kind o) {
    return switch (o) {
      case Any() -> (this instanceof Any) ? 0 : -1;
      case MaybePromise(var otherValue, var otherEffects) ->
          switch (this) {
            case Any() -> 1;
            case MaybePromise(var value, var effects) -> {
              int cmp = value.compareTo(otherValue);
              if (cmp != 0) yield cmp;
              yield effects.compareTo(otherEffects);
            }
            default -> -1;
          };
      case AnyValue() ->
          switch (this) {
            case Any(), MaybePromise(_, _) -> 1;
            case AnyValue() -> 0;
            default -> -1;
          };
      case PrimitiveVector(var otherPrimitive) ->
          switch (this) {
            case Any(), MaybePromise(_, _), AnyValue() -> 1;
            case PrimitiveVector(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case PrimitiveScalar(var otherPrimitive) ->
          switch (this) {
            case Any(), MaybePromise(_, _), AnyValue(), PrimitiveVector(_) -> 1;
            case PrimitiveScalar(var primitive) -> primitive.compareTo(otherPrimitive);
            default -> -1;
          };
      case Closure() ->
          switch (this) {
            case Any(), MaybePromise(_, _), AnyValue(), PrimitiveVector(_), PrimitiveScalar(_) -> 1;
            case Closure() -> 0;
            default -> -1;
          };
      case Dots() ->
          switch (this) {
            case Any(),
                MaybePromise(_, _),
                AnyValue(),
                PrimitiveVector(_),
                PrimitiveScalar(_),
                Closure() ->
                1;
            case Dots() -> 0;
            default -> -1;
          };
      case Missing() ->
          switch (this) {
            case Any(),
                MaybePromise(_, _),
                AnyValue(),
                PrimitiveVector(_),
                PrimitiveScalar(_),
                Closure(),
                Dots() ->
                1;
            case Missing() -> 0;
            default -> -1;
          };
      case Promise(var otherValue, var otherEffects) ->
          switch (this) {
            case Any(),
                MaybePromise(_, _),
                AnyValue(),
                PrimitiveVector(_),
                PrimitiveScalar(_),
                Closure(),
                Dots(),
                Missing() ->
                1;
            case Promise(var value, var effects) -> {
              int cmp = value.compareTo(otherValue);
              if (cmp != 0) yield cmp;
              yield effects.compareTo(otherEffects);
            }
          };
    };
  }

  default Kind union(Kind other, Runnable onOwnershipMismatch) {
    return switch (other) {
      case Any() -> other;
      case MaybePromise(var otherValue, var otherEffects) ->
          switch (this) {
            case Any() -> new Any();
            case MaybePromise(var value, var effects) ->
                new MaybePromise(
                    value.union(otherValue, onOwnershipMismatch), effects.union(otherEffects));
            case Promise(var value, var effects) ->
                new MaybePromise(
                    value.union(otherValue, onOwnershipMismatch), effects.union(otherEffects));
            default -> {
              var thisType = new Type(this, Ownership.SHARED, Concreteness.DEFINITE);
              yield new MaybePromise(thisType.union(otherValue, onOwnershipMismatch), otherEffects);
            }
          };
      case AnyValue() ->
          switch (this) {
            case Any() -> new Any();
            case MaybePromise(var value, var effects) -> {
              var otherType = new Type(new AnyValue(), Ownership.SHARED, Concreteness.DEFINITE);
              yield new MaybePromise(value.union(otherType, onOwnershipMismatch), effects);
            }
            case Promise(var value, var effects) -> {
              var otherType = new Type(new AnyValue(), Ownership.SHARED, Concreteness.DEFINITE);
              yield new MaybePromise(value.union(otherType, onOwnershipMismatch), effects);
            }
            default -> other;
          };
      case PrimitiveScalar(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            case PrimitiveVector(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            default -> union(new AnyValue(), onOwnershipMismatch);
          };
      case PrimitiveVector(var otherPrimitiveKind) ->
          switch (this) {
            case PrimitiveScalar(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                other;
            case PrimitiveVector(var primitiveKind) when primitiveKind == otherPrimitiveKind ->
                this;
            default -> union(new AnyValue(), onOwnershipMismatch);
          };
      case Closure() -> this.equals(other) ? this : union(new AnyValue(), onOwnershipMismatch);
      case Dots() ->
          (this instanceof Dots || this instanceof Missing)
              ? other
              : union(new AnyValue(), onOwnershipMismatch);
      case Missing() ->
          (this instanceof Dots || this instanceof Missing)
              ? this
              : union(new AnyValue(), onOwnershipMismatch);
      case Promise(var otherValue, var otherEffects) ->
          switch (this) {
            case Promise(var value, var effects) ->
                new Promise(
                    value.union(otherValue, onOwnershipMismatch), effects.union(otherEffects));
            case Any() -> new Any();
            case MaybePromise(var value, var effects) ->
                new MaybePromise(
                    value.union(otherValue, onOwnershipMismatch), effects.union(otherEffects));
            default -> {
              var thisType = new Type(this, Ownership.SHARED, Concreteness.DEFINITE);
              yield new MaybePromise(thisType.union(otherValue, onOwnershipMismatch), otherEffects);
            }
          };
    };
  }

  @PrintMethod
  private static void print(Kind self, Printer p) {
    var w = p.writer();

    switch (self) {
      case Any() -> w.write("*");
      case MaybePromise(var type, var effects) -> {
        w.write("p?(");
        p.print(type);
        w.write(' ');
        p.print(effects);
        w.write(')');
      }
      case AnyValue() -> w.write("V");
      case PrimitiveScalar(var primitive) -> p.print(primitive);
      case PrimitiveVector(var primitive) -> {
        w.write("v(");
        p.print(primitive);
        w.write(')');
      }
      case Closure() -> w.write("cls");
      case Dots() -> w.write("dots");
      case Missing() -> w.write("M");
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
    } else if (s.trySkip("cls")) {
      return new Closure();
    } else if (s.trySkip("dots")) {
      return new Dots();
    } else if (s.trySkip('M')) {
      return new Missing();
    } else if (s.trySkip('p')) {
      if (s.trySkip('?')) {
        s.assertAndSkip('(');
        var type = p.parse(Type.class);
        var effects = p.parse(Effects.class);
        s.assertAndSkip(')');
        return new MaybePromise(type, effects);
      } else {
        s.assertAndSkip('(');
        var type = p.parse(Type.class);
        var effects = p.parse(Effects.class);
        s.assertAndSkip(')');
        return new Promise(type, effects);
      }
    } else if (s.nextCharSatisfies(c -> c == 'L' || c == 'I' || c == 'R' || c == 'S')) {
      var primitive = p.parse(PrimitiveKind.class);
      return new PrimitiveScalar(primitive);
    } else {
      throw s.fail(
          "expected '*', 'V', 'v('..., 'cls', 'dots', 'M', 'p('..., 'p?('..., or a primitive kind ('L', 'I', 'R', or 'S')");
    }
  }
}
