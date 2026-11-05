package org.prlprg.primitive;

import java.util.function.DoubleBinaryOperator;
import java.util.function.DoubleUnaryOperator;

/// Real arithmetic as GNU-R computes it (`R/src/main/arithmetic.c`), including how it propagates
/// `NA` and `NaN`.
///
/// GNU-R tells `NA` ([Constants#NA_REAL]) apart from other `NaN`s by its bits, which Java's
/// [Math] functions don't keep.
public final class RMath {
  /// Enough to scale any subnormal `double` into the normal range.
  private static final int SUBNORMAL_SHIFT = 54;

  private static final double LN_2 = Math.log(2);

  /// An integer as a real, as GNU-R coerces it: `NA` stays `NA`.
  public static double fromInt(int i) {
    return i == Constants.NA_INT ? Constants.NA_REAL : i;
  }

  /// GNU-R's `math1` on one element: `f(x)`, except that an `NA` or `NaN` argument is returned
  /// unchanged.
  public static double math1(DoubleUnaryOperator f, double x) {
    return Double.isNaN(x) ? x : f.applyAsDouble(x);
  }

  /// GNU-R's `math2` on one pair of elements: `NA` if either argument is `NA`, otherwise `NaN` if
  /// either is `NaN`, otherwise `f(a, b)`.
  public static double math2(DoubleBinaryOperator f, double a, double b) {
    if (Constants.isNaReal(a) || Constants.isNaReal(b)) {
      return Constants.NA_REAL;
    }
    if (Double.isNaN(a) || Double.isNaN(b)) {
      return Double.NaN;
    }
    return f.applyAsDouble(a, b);
  }

  /// GNU-R's `myfmod` (double `%%`): the result has the sign of `x2`, and `x2 == 0` gives `NaN`.
  ///
  /// Unlike GNU-R, this computes in `double` instead of `long double`, and doesn't warn about a
  /// loss of accuracy.
  public static double fmod(double x1, double x2) {
    if (x2 == 0.0) {
      return Double.NaN;
    }
    if (Math.abs(x2) * Math.ulp(1.0) > 1 && Double.isFinite(x1) && Math.abs(x1) <= Math.abs(x2)) {
      return Math.abs(x1) == Math.abs(x2)
          ? 0
          : (x1 < 0 && x2 > 0) || (x2 < 0 && x1 > 0) ? x1 + x2 : x1;
    }
    var tmp = x1 - Math.floor(x1 / x2) * x2;
    return tmp - Math.floor(tmp / x2) * x2;
  }

  /// GNU-R's `R_log`: negative arguments are `NaN` and zero is `-Inf`.
  public static double log(double x) {
    return x > 0 ? Math.log(x) : x == 0 ? Double.NEGATIVE_INFINITY : Double.NaN;
  }

  /// GNU-R's `logbase`, which special-cases bases 10 and 2 so they're as accurate as C's
  /// `log10`/`log2` instead of a ratio of logarithms.
  public static double logBase(double x, double base) {
    if (base == 10) {
      return x > 0 ? Math.log10(x) : x < 0 ? Double.NaN : Double.NEGATIVE_INFINITY;
    }
    if (base == 2) {
      return x > 0 ? log2(x) : x < 0 ? Double.NaN : Double.NEGATIVE_INFINITY;
    }
    return log(x) / log(base);
  }

  /// Base-2 logarithm of a positive number, to the same precision as C's `log2`.
  ///
  /// `log(x) / log(2)` is off by an ulp for e.g. `10`. Splitting off the binary exponent first
  /// leaves [Math#log1p] a much smaller argument, and makes exact powers of two exact.
  public static double log2(double x) {
    var normalized = x;
    var normalizingExponent = 0;
    if (Math.getExponent(x) < Double.MIN_EXPONENT) {
      normalized = Math.scalb(x, SUBNORMAL_SHIFT);
      normalizingExponent = -SUBNORMAL_SHIFT;
    }

    var exponent = Math.getExponent(normalized);
    var mantissa = Math.scalb(normalized, -exponent);
    return exponent + normalizingExponent + Math.log1p(mantissa - 1) / LN_2;
  }

  /// GNU-R's `R_pow` (`x ^ y`), which differs from [Math#pow] on `NA`, `NaN`, and infinities:
  /// `1 ^ y` and `x ^ 0` are `1` even if the other argument is `NA`, otherwise an `NA` or `NaN`
  /// argument propagates, and e.g. `-Inf ^ 0.5` is `NaN`.
  public static double pow(double x, double y) {
    if (y == 2.0) {
      return x * x;
    }
    if (x == 1. || y == 0.) {
      return 1.;
    }
    if (x == 0.) {
      return y > 0. ? 0. : y < 0. ? Double.POSITIVE_INFINITY : y;
    }
    if (Double.isFinite(x) && Double.isFinite(y)) {
      return Math.pow(x, y);
    }
    if (Double.isNaN(x) || Double.isNaN(y)) {
      return x + y;
    }
    if (!Double.isFinite(x)) {
      if (x > 0) {
        return y < 0. ? 0. : Double.POSITIVE_INFINITY;
      }
      if (Double.isFinite(y) && y == Math.floor(y)) {
        return y < 0. ? 0. : y % 2. != 0 ? x : -x;
      }
    }
    if (!Double.isFinite(y) && x >= 0) {
      return y > 0
          ? (x >= 1 ? Double.POSITIVE_INFINITY : 0.)
          : (x < 1 ? Double.POSITIVE_INFINITY : 0.);
    }
    return Double.NaN;
  }

  private RMath() {}
}
