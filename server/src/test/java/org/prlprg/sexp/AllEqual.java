package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.fail;

import java.util.Objects;
import java.util.function.BiPredicate;
import org.jspecify.annotations.Nullable;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;

/// Compares a value our code computed with GNU-R's result, like R's `all.equal`.
///
/// A finite real or complex number may differ by the relative [#TOLERANCE] (absolute, if the
/// expected number is smaller than it), because Java's math functions and the platform's libm
/// may round differently. `NA`, `NaN` and infinities must match exactly. Everything else must
/// be equal, recursively through vectors, pairlists and attributes.
public final class AllEqual {
  /// R's `all.equal` default, `sqrt(.Machine$double.eps)`.
  public static final double TOLERANCE = 1.5e-8;

  /// Assert [#difference(SEXP, SEXP, BiPredicate)] is `null`.
  public static void assertAllEqual(
      SEXP expected, SEXP actual, BiPredicate<SEXP, SEXP> leafEqual, String message) {
    var difference = difference(expected, actual, leafEqual);
    if (difference != null) {
      fail(message + ": " + difference + "\nexpected: " + expected + "\nactual: " + actual);
    }
  }

  /// Assert [#difference(SEXP, SEXP, BiPredicate)] with [Objects#equals] leaves is `null`.
  public static void assertAllEqual(SEXP expected, SEXP actual, String message) {
    assertAllEqual(expected, actual, Objects::equals, message);
  }

  /// The first difference between `expected` and `actual`, or `null` if they're all-equal.
  ///
  /// `leafEqual` compares what isn't a vector or pairlist (closures, environments, calls, ...).
  public static @Nullable String difference(
      SEXP expected, SEXP actual, BiPredicate<SEXP, SEXP> leafEqual) {
    if (!(expected instanceof ListOrVectorSXP<?> e && actual instanceof ListOrVectorSXP<?> a)) {
      return leafEqual.test(expected, actual) ? null : expected + " vs " + actual;
    }
    if (e.type() != a.type()) {
      return "type " + e.type() + " vs " + a.type();
    }
    if (e.size() != a.size()) {
      return "length " + e.size() + " vs " + a.size();
    }
    for (var i = 0; i < e.size(); i++) {
      var d = elemDifference(e.get(i), a.get(i), leafEqual);
      if (d != null) {
        return "[" + (i + 1) + "] " + d;
      }
    }
    return attributesDifference(e.attributes(), a.attributes(), leafEqual);
  }

  private static @Nullable String elemDifference(
      @Nullable Object expected, @Nullable Object actual, BiPredicate<SEXP, SEXP> leafEqual) {
    return switch (expected) {
      case Double e when actual instanceof Double a -> allEqual(e, a) ? null : e + " vs " + a;
      case Complex e when actual instanceof Complex a -> allEqual(e, a) ? null : e + " vs " + a;
      case SEXP e when actual instanceof SEXP a -> difference(e, a, leafEqual);
      case TaggedElem(var eTag, var eValue)
          when actual instanceof TaggedElem(var aTag, var aValue) ->
          !Objects.equals(eTag, aTag)
              ? "tag " + eTag + " vs " + aTag
              : difference(eValue, aValue, leafEqual);
      case null, default -> Objects.equals(expected, actual) ? null : expected + " vs " + actual;
    };
  }

  private static @Nullable String attributesDifference(
      @Nullable Attributes expected,
      @Nullable Attributes actual,
      BiPredicate<SEXP, SEXP> leafEqual) {
    var e = expected == null ? Attributes.NONE : expected;
    var a = actual == null ? Attributes.NONE : actual;
    if (!e.keySet().equals(a.keySet())) {
      return "attribute names " + e.keySet() + " vs " + a.keySet();
    }
    for (var entry : e.entrySet()) {
      var d =
          difference(entry.getValue(), Objects.requireNonNull(a.get(entry.getKey())), leafEqual);
      if (d != null) {
        return "attr(\"" + entry.getKey() + "\") " + d;
      }
    }
    return null;
  }

  /// Whether `expected` and `actual` are both `NA`, both another `NaN`, the same infinity, or
  /// finite and within [#TOLERANCE].
  public static boolean allEqual(double expected, double actual) {
    if (Double.isNaN(expected) || Double.isNaN(actual)) {
      return Double.isNaN(expected)
          && Double.isNaN(actual)
          && Constants.isNaReal(expected) == Constants.isNaReal(actual);
    }
    if (Double.isInfinite(expected) || Double.isInfinite(actual)) {
      return expected == actual;
    }
    return withinTolerance(Math.abs(expected - actual), Math.abs(expected));
  }

  /// Like [#allEqual(double, double)], comparing the modulus of the difference if both parts of
  /// both numbers are finite, and each part otherwise.
  public static boolean allEqual(Complex expected, Complex actual) {
    if (!isFinite(expected) || !isFinite(actual)) {
      return allEqual(expected.real(), actual.real()) && allEqual(expected.imag(), actual.imag());
    }
    return withinTolerance(
        Math.hypot(expected.real() - actual.real(), expected.imag() - actual.imag()),
        Math.hypot(expected.real(), expected.imag()));
  }

  private static boolean isFinite(Complex z) {
    return Double.isFinite(z.real()) && Double.isFinite(z.imag());
  }

  private static boolean withinTolerance(double difference, double scale) {
    return difference <= TOLERANCE * (scale > TOLERANCE ? scale : 1);
  }

  private AllEqual() {}
}
