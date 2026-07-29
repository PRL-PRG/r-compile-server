package org.prlprg.fir.ir.value;

import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public sealed interface Value {
  Value NULL = new Sexp(SEXPs.NULL);

  record Sexp(SEXP value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  record Int(int value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  record Real(double value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  record Lgl(Logical value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  record Str(String value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  record Bool(boolean value) implements Value {
    @Override
    public String toString() {
      return Printer.toString(value);
    }
  }

  default Repr repr() {
    return switch (this) {
      case Sexp(_) -> Repr.SEXP;
      case Int(_) -> Repr.INT;
      case Real(_) -> Repr.FLOAT;
      case Lgl(_) -> Repr.LOGICAL;
      case Str(_) -> Repr.STRING;
      case Bool(_) -> Repr.BOOLEAN;
    };
  }

  default Type type() {
    return switch (this) {
      case Sexp(var sexp) -> Type.of(sexp);
      case Int(_) -> Type.INTEGER;
      case Real(_) -> Type.REAL;
      case Lgl(_) -> Type.LOGICAL;
      case Str(_) -> Type.STRING;
      case Bool(_) -> Type.BOOLEAN;
    };
  }

  default SEXP box() {
    return switch (this) {
      case Sexp(var sexp) -> sexp;
      case Int(var v) -> SEXPs.integer(v);
      case Real(var v) -> SEXPs.real(v);
      case Lgl(var v) -> SEXPs.logical(v);
      case Str(var v) -> SEXPs.string(v);
      case Bool(var v) -> SEXPs.logical(v ? Logical.TRUE : Logical.FALSE);
    };
  }

  static boolean peek(Parser p) {
    var s = p.scanner();
    return s.nextCharIs('<')
        || s.nextCharsAre("TRUE")
        || s.nextCharsAre("FALSE")
        || s.nextCharsAre("NA_")
        || s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('+')
        || s.nextCharIs('-')
        || s.nextCharIs('\"');
  }

  @ParseMethod
  private static Value parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharIs('<')) {
      return new Sexp(p.parse(SEXP.class));
    } else if (s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('+')
        || s.nextCharIs('-')
        || s.nextCharsAre("NA_INT")
        || s.nextCharsAre("NA_REAL")
        || s.nextCharsAre("NA_CPLX")) {
      var sexp = p.parse(SEXP.class);
      if (sexp.asScalarInteger().isPresent()) {
        return new Int(sexp.asScalarInteger().get());
      } else if (sexp.asScalarReal().isPresent()) {
        return new Real(sexp.asScalarReal().get());
      } else if (sexp.asScalarComplex().isPresent()) {
        throw s.fail("unboxed complex numbers aren't implemented");
      }
      throw s.fail("an unboxed number", sexp.toString());
    } else if (s.nextCharIs('"')) {
      var str = s.readQuoted('"');
      return new Str(str);
    } else if (s.trySkip("TRUE_LGL")) {
      return new Lgl(Logical.TRUE);
    } else if (s.trySkip("FALSE_LGL")) {
      return new Lgl(Logical.FALSE);
      // Not routed through `SEXP` like the other `NA_`s: an unboxed logical is a `Lgl`, not a
      // scalar `SEXP`, so it belongs with `TRUE_LGL`/`FALSE_LGL` (which is also how `print` emits
      // it).
    } else if (s.trySkip("NA_LGL")) {
      return new Lgl(Logical.NA);
    } else if (s.trySkip("NA_STR")) {
      return new Str(Constants.NA_STRING);
    } else if (s.trySkip("TRUE")) {
      return new Bool(true);
    } else if (s.trySkip("FALSE")) {
      return new Bool(false);
    }
    throw s.fail(
        "expected '<', digit, '+', '-', '\"', \"TRUE\", \"FALSE\", \"TRUE_LGL\", \"FALSE_LGL\", \"NA_LGL\", \"NA_INT\", \"NA_REAL\", or \"NA_STR\"");
  }

  @PrintMethod
  private static void print(Value value, Printer p) {
    var w = p.writer();

    switch (value) {
      case Sexp(var v) -> {
        if (p.context() instanceof SEXPPrintContext c) {
          c.runDelimited(() -> p.print(v));
        } else {
          p.withContext(SEXPPrintOptions.FULL_DELIMITED).print(v);
        }
      }
      case Int(var v) -> p.print(SEXPs.integer(v));
      case Real(var v) -> p.print(SEXPs.real(v));
      case Lgl(var v) -> {
        switch (v) {
          case TRUE -> w.write("TRUE_LGL");
          case FALSE -> w.write("FALSE_LGL");
          case NA -> w.write("NA_LGL");
        }
      }
      // The NA string is compared by identity and has no quoted form that reparses to it (its
      // contents are a sentinel), so it prints as `NA_STR` — same as the `SEXP` printer.
      case Str(var v) -> {
        if (Constants.isNaString(v)) {
          w.write("NA_STR");
        } else {
          w.writeQuoted('"', v);
        }
      }
      case Bool(var v) -> w.write(v ? "TRUE" : "FALSE");
    }
  }
}
