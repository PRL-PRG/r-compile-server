package org.prlprg.sexp;

import java.util.regex.Pattern;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;

// ideally we would keep this in the actual classes
// and use double-dispatch, but since we rely on Java classes, we cannot
public final class Coercions {
  private static final Pattern REAL_NUM = Pattern.compile("\\s*([+-]?)\\s*(\\d*\\.?\\d+)");

  private Coercions() {}

  public static <T> Object coerce(T t, SEXPType targetType) {
    return switch (t) {
      case Logical x ->
          switch (targetType) {
            case LGL -> x;
            case STR -> stringFromLogical(x);
            case INT -> integerFromLogical(x);
            case REAL -> realFromLogical(x);
            case CPLX -> complexFromLogical(x);
            default -> throw new IllegalArgumentException("Unsupported target type: " + targetType);
          };
      case Integer x ->
          switch (targetType) {
            case LGL -> logicalFromInteger(x);
            case STR -> stringFromInteger(x);
            case INT -> x;
            case REAL -> realFromInteger(x);
            case CPLX -> complexFromInteger(x);
            default -> throw new IllegalArgumentException("Unsupported target type: " + targetType);
          };
      case Double x ->
          switch (targetType) {
            case LGL -> logicalFromReal(x);
            case STR -> stringFromReal(x);
            case INT -> integerFromReal(x);
            case REAL -> x;
            case CPLX -> complexFromReal(x);
            default -> throw new IllegalArgumentException("Unsupported target type: " + targetType);
          };
      case String x ->
          switch (targetType) {
            case LGL -> logicalFromString(x);
            case STR -> x;
            case INT -> integerFromString(x);
            case REAL -> realFromString(x);
            case CPLX -> complexFromString(x);
            default -> throw new IllegalArgumentException("Unsupported target type: " + targetType);
          };
      case Complex x ->
          switch (targetType) {
            case LGL -> logicalFromComplex(x);
            case STR -> stringFromComplex(x);
            case INT -> integerFromComplex(x);
            case REAL -> realFromComplex(x);
            case CPLX -> x;
            default -> throw new IllegalArgumentException("Unsupported target type: " + targetType);
          };
      default -> throw new IllegalArgumentException("Unsupported type: " + t.getClass());
    };
  }

  public static SEXPType commonType(SEXPType ta, SEXPType tb) {
    return ta.i > tb.i ? ta : tb;
  }

  public static Complex complexFromInteger(int x) {
    return switch (x) {
      case Constants.NA_INT -> new Complex(Constants.NA_REAL, Constants.NA_REAL);
      default -> Complex.fromReal(x);
    };
  }

  public static Complex complexFromLogical(Logical x) {
    return switch (x) {
      case TRUE -> Complex.fromReal(1);
      case FALSE -> Complex.fromReal(0);
      case NA -> new Complex(Constants.NA_REAL, Constants.NA_REAL);
    };
  }

  public static Complex complexFromReal(double x) {
    return Complex.fromReal(x);
  }

  public static Complex complexFromString(String x) {
    if (x == Constants.NA_STRING || x.isBlank()) {
      return Constants.NA_COMPLEX;
    }

    x = x.strip();
    var hasI = false;
    if (x.endsWith("i")) {
      hasI = true;
      x = x.substring(0, x.length() - 1);
    }

    var mrs = REAL_NUM.matcher(x).results().toList();
    switch (mrs.size()) {
      case 1 -> {
        var m = mrs.getFirst();
        var d = Double.parseDouble(m.group(2));
        d = m.group(1).equals("-") ? -d : d;
        return hasI ? new Complex(.0, d) : new Complex(d, .0);
      }

      case 2 -> {
        if (!hasI) {
          throw new IllegalArgumentException("Invalid complex number: " + x);
        }

        var m1 = mrs.getFirst();
        var m2 = mrs.getLast();

        var r = Double.parseDouble(m1.group(2));
        r = m1.group(1).equals("-") ? -r : r;

        var i = Double.parseDouble(m2.group(2));
        i = m2.group(1).equals("-") ? -i : i;

        return new Complex(r, i);
      }

      default -> throw new IllegalArgumentException("Invalid complex number: " + x);
    }
  }

  public static int integerFromComplex(Complex x) {
    return x.equals(Constants.NA_COMPLEX) ? Constants.NA_INT : (int) x.real();
  }

  public static int integerFromLogical(Logical x) {
    return switch (x) {
      case TRUE -> 1;
      case FALSE -> 0;
      case NA -> Constants.NA_INT;
    };
  }

  public static int integerFromReal(double x) {
    return Double.isNaN(x) ? Constants.NA_INT : (int) x;
  }

  public static int integerFromString(String x) {
    return x == Constants.NA_STRING ? Constants.NA_INT : Integer.parseInt(x);
  }

  public static Logical logicalFromComplex(Complex x) {
    return (Double.isNaN(x.real()) || Double.isNaN(x.imag()))
        ? Logical.NA
        : x.real() != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromInteger(int x) {
    return x == Constants.NA_INT ? Logical.NA : x != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromReal(double x) {
    return Double.isNaN(x) ? Logical.NA : x != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromString(String x) {
    // this is correct, we want to compare identity as there should be just one instance of NA
    // string
    if (x == Constants.NA_STRING) {
      return Logical.NA;
    }

    return Constants.TRUE_NAMES.contains(x) ? Logical.TRUE : Logical.FALSE;
  }

  public static double realFromComplex(Complex x) {
    return x.equals(Constants.NA_COMPLEX) ? Constants.NA_INT : x.real();
  }

  public static double realFromInteger(int x) {
    return x == Constants.NA_INT ? Constants.NA_REAL : (double) x;
  }

  public static double realFromLogical(Logical x) {
    return switch (x) {
      case TRUE -> 1.0;
      case FALSE -> 0.0;
      case NA -> Constants.NA_REAL;
    };
  }

  public static double realFromString(String x) {
    return x == Constants.NA_STRING ? Constants.NA_REAL : Double.parseDouble(x);
  }

  public static String stringFromComplex(Complex x) {
    return x.equals(Constants.NA_COMPLEX) ? Constants.NA_STRING : x.toString();
  }

  public static String stringFromInteger(int x) {
    return x == Constants.NA_INT ? Constants.NA_STRING : Integer.toString(x);
  }

  public static String stringFromLogical(Logical x) {
    return switch (x) {
      case TRUE -> "TRUE";
      case FALSE -> "FALSE";
      case NA -> Constants.NA_STRING;
    };
  }

  public static String stringFromReal(double x) {
    return Double.isNaN(x) ? Constants.NA_STRING : Double.toString(x);
  }
}
