package org.prlprg.sexp;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
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

  public static SEXPType commonType(SEXPType... types) {
    if (types.length == 0) {
      throw new IllegalArgumentException("No types provided");
    }

    var max = types[0].i;
    for (var i = 1; i < types.length; i++) {
      max = Math.max(max, types[i].i);
    }

    return SEXPType.valueOf(max);
  }

  public static Complex complexFromInteger(int x) {
    return isNA(x) ? Constants.NA_COMPLEX : Complex.fromReal(x);
  }

  public static Complex complexFromLogical(Logical x) {
    return isNA(x)
        ? Constants.NA_COMPLEX
        : x == Logical.TRUE ? Complex.fromReal(1) : Complex.fromReal(0);
  }

  public static Complex complexFromReal(double x) {
    return Complex.fromReal(x);
  }

  public static Complex complexFromString(String x) {
    if (isNA(x) || x.isBlank()) {
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
    return isNA(x) ? Constants.NA_INT : (int) x.real();
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
    return isNA(x) ? Constants.NA_INT : Integer.parseInt(x);
  }

  @SuppressFBWarnings("ES_COMPARING_PARAMETER_STRING_WITH_EQ")
  public static boolean isNA(String x) {
    //noinspection StringEquality
    return x == Constants.NA_STRING;
  }

  public static boolean isNA(Logical x) {
    return x == Logical.NA;
  }

  public static boolean isNA(int x) {
    return x == Constants.NA_INT;
  }

  public static boolean isNA(double x) {
    return Double.isNaN(x);
  }

  public static boolean isNA(Complex x) {
    return isNA(x.real()) || isNA(x.imag());
  }

  public static Logical logicalFromComplex(Complex x) {
    return (Double.isNaN(x.real()) || Double.isNaN(x.imag()))
        ? Logical.NA
        : x.real() != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromInteger(int x) {
    return isNA(x) ? Logical.NA : x != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromReal(double x) {
    return Double.isNaN(x) ? Logical.NA : x != 0 ? Logical.TRUE : Logical.FALSE;
  }

  public static Logical logicalFromString(String x) {
    if (isNA(x)) {
      return Logical.NA;
    }

    return Constants.TRUE_NAMES.contains(x) ? Logical.TRUE : Logical.FALSE;
  }

  public static double realFromComplex(Complex x) {
    return isNA(x) ? Constants.NA_INT : x.real();
  }

  public static double realFromInteger(int x) {
    return isNA(x) ? Constants.NA_REAL : (double) x;
  }

  public static double realFromLogical(Logical x) {
    return isNA(x) ? Constants.NA_REAL : x == Logical.TRUE ? 1.0 : 0.0;
  }

  public static double realFromString(String x) {
    return isNA(x) ? Constants.NA_REAL : Double.parseDouble(x);
  }

  public static String stringFromComplex(Complex x) {
    return isNA(x) ? Constants.NA_STRING : x.toString();
  }

  public static String stringFromInteger(int x) {
    return isNA(x) ? Constants.NA_STRING : Integer.toString(x);
  }

  public static String stringFromLogical(Logical x) {
    return isNA(x) ? Constants.NA_STRING : x == Logical.TRUE ? "TRUE" : "FALSE";
  }

  public static String stringFromReal(double x) {
    return Double.isNaN(x) ? Constants.NA_STRING : Double.toString(x);
  }
}
