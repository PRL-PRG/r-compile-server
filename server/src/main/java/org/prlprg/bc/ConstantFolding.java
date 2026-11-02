package org.prlprg.bc;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.function.BiFunction;
import java.util.function.Function;
import java.util.function.IntPredicate;
import java.util.regex.Pattern;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.Arithmetic;

/**
 * Implements constant folding for some of the R functions. All functions are should have the same
 * signature: {@code Optional<SEXP> f(List<SEXP> args)}
 *
 * <p>They shall be called from Compiler and can assume that each argument is one of the {@code
 * Compiler#ALLOWED_FOLDABLE_MODES}.
 *
 * <p>The main reason it is extracted from the Compiler is to make have all the folding code in one
 * place without making Compiler too big.
 */
public final class ConstantFolding {
  private static final double LN_2 = Math.log(2);

  /// Enough to scale any subnormal `double` into the normal range.
  private static final int SUBNORMAL_SHIFT = 54;

  /// Strings whose ordering is the same in every locale: ASCII digits and letters of one case.
  private static final Pattern[] LOCALE_INDEPENDENT_STRINGS = {
    Pattern.compile("[0-9a-z]*"), Pattern.compile("[0-9A-Z]*")
  };

  private ConstantFolding() {}

  public static Optional<SEXP> add(List<SEXP> args) {
    return math2(Arithmetic.Operation.ADD, args);
  }

  public static Optional<SEXP> div(List<SEXP> args) {
    return math2(Arithmetic.Operation.DIV, args);
  }

  public static Optional<SEXP> atan(List<SEXP> args) {
    return doubleMath1(args, Math::atan);
  }

  public static Optional<SEXP> cos(List<SEXP> args) {
    return doubleMath1(args, Math::cos);
  }

  public static Optional<SEXP> exp(List<SEXP> args) {
    return doubleMath1(args, Math::exp);
  }

  /// `log(x)` and `log(x, base)`.
  ///
  /// The two-argument form mirrors GNU-R's `logbase`, which special-cases bases 10 and 2 so
  /// they're as accurate as `log10`/`log2` instead of a ratio of logarithms.
  public static Optional<SEXP> log(List<SEXP> args) {
    return switch (args.size()) {
      case 1 -> doubleMath1(args, ConstantFolding::rLog);
      case 2 -> {
        if (!(args.get(1) instanceof NumericSXP<?> baseV) || baseV.size() != 1) {
          yield Optional.empty();
        }
        var base = baseV.asReal(0);
        yield doubleMath1(args.subList(0, 1), x -> logBase(x, base));
      }
      default -> Optional.empty();
    };
  }

  public static Optional<SEXP> log10(List<SEXP> args) {
    return doubleMath1(args, x -> logBase(x, 10));
  }

  public static Optional<SEXP> log2(List<SEXP> args) {
    return doubleMath1(args, x -> logBase(x, 2));
  }

  public static Optional<SEXP> sin(List<SEXP> args) {
    return doubleMath1(args, Math::sin);
  }

  public static Optional<SEXP> tan(List<SEXP> args) {
    return doubleMath1(args, Math::tan);
  }

  /// `seq_len(n)`, which is always an integer sequence from 1 to `n`.
  public static Optional<SEXP> seqLen(List<SEXP> args) {
    if (args.size() != 1) {
      return Optional.empty();
    }

    if (!(args.getFirst() instanceof NumericSXP<?> nV) || nV.size() != 1) {
      return Optional.empty();
    }

    var n = nV.asInt(0);
    // GNU-R errors on a negative or `NA` length, and an error means it doesn't fold at all.
    if (n < 0 /*|| n == Constants.NA_INT*/) {
      return Optional.empty();
    }

    var ans = new int[n];
    for (var i = 0; i < n; i++) {
      ans[i] = i + 1;
    }
    return Optional.of(SEXPs.integer(ans));
  }

  /// GNU-R's `R_log`: negative arguments are `NaN` (with a warning) and zero is `-Inf`.
  private static double rLog(double x) {
    return x > 0 ? Math.log(x) : x < 0 ? Double.NaN : Double.NEGATIVE_INFINITY;
  }

  /// GNU-R's `logbase`.
  private static double logBase(double x, double base) {
    if (base == 10) {
      return x > 0 ? Math.log10(x) : x < 0 ? Double.NaN : Double.NEGATIVE_INFINITY;
    }
    if (base == 2) {
      return x > 0 ? log2(x) : x < 0 ? Double.NaN : Double.NEGATIVE_INFINITY;
    }
    return rLog(x) / rLog(base);
  }

  /// Base-2 logarithm of a positive number, to the same precision as C's `log2`.
  ///
  /// [DoubleMath#log2(double)] is `log(x) / log(2)`, which is off by an ulp for e.g. `10`.
  /// Splitting off the binary exponent first leaves [Math#log1p] a much smaller argument, and
  /// makes exact powers of two exact.
  private static double log2(double x) {
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

  public static Optional<SEXP> minus(List<SEXP> args) {
    return math1(Arithmetic.Operation.MINUS, args);
  }

  public static Optional<SEXP> mul(List<SEXP> args) {
    return math2(Arithmetic.Operation.MUL, args);
  }

  public static Optional<SEXP> plus(List<SEXP> args) {
    return math1(Arithmetic.Operation.PLUS, args);
  }

  public static Optional<SEXP> pow(List<SEXP> args) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (Coercions.commonType(args) == SEXPType.INT) {
      return math2(Arithmetic.Operation.POW, args, Arithmetic.DOUBLE);
    } else {
      return math2(Arithmetic.Operation.POW, args);
    }
  }

  public static Optional<SEXP> rep(List<SEXP> args) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (!(args.getFirst() instanceof VectorSXP<?> x)) {
      return Optional.empty();
    }

    if (!(args.getLast() instanceof NumericSXP<?> times)) {
      return Optional.empty();
    }

    if (times.size() == 1) {
      return Optional.of(doRep1(x, times.asInt(0)));
    } else if (times.size() == x.size()) {
      return Optional.of(doRep2(x, times));
    } else {
      return Optional.empty();
    }
  }

  public static Optional<SEXP> seqInt(List<SEXP> args) {
    if (args.size() != 3) {
      return Optional.empty();
    }

    if (!(args.get(0) instanceof NumericSXP<?> fromV) || fromV.size() != 1) {
      return Optional.empty();
    }

    if (!(args.get(1) instanceof NumericSXP<?> toV) || toV.size() != 1) {
      return Optional.empty();
    }

    if (!(args.get(2) instanceof NumericSXP<?> byV) || byV.size() != 1) {
      return Optional.empty();
    }

    var type = Coercions.commonType(fromV.type(), toV.type(), byV.type());
    return switch (type) {
      case INT -> {
        var from = fromV.asInt(0);
        var to = toV.asInt(0);
        var by = byV.asInt(0);
        var ans = Arithmetic.INTEGER.createResult((to - from) / by + 1);
        for (int i = 0, x = from; x <= to; i++, x += by) {
          ans[i] = x;
        }
        yield Optional.of(SEXPs.integer(ans));
      }
      case REAL -> {
        var from = fromV.asReal(0);
        var to = toV.asReal(0);
        var by = byV.asReal(0);
        var size = (int) ((to - from) / by) + 1;
        var ans = Arithmetic.DOUBLE.createResult(size);
        var x = from;
        for (int i = 0; i < size; i++) {
          ans[i] = x;
          x += by;
        }
        yield Optional.of(SEXPs.real(ans));
      }
      default -> Optional.empty();
    };
  }

  public static Optional<SEXP> sqrt(List<SEXP> args) {
    return doubleMath1(args, Math::sqrt);
  }

  /// A relational operator: `==`, `!=`, `<`, `<=`, `>` or `>=`.
  ///
  /// It doesn't fold what GNU-R warns about, what keeps attributes, or what depends on the
  /// locale: complex numbers, mixed strings and numbers, and string orderings outside of
  /// [#LOCALE_INDEPENDENT_STRINGS].
  public static Optional<SEXP> relop(String op, List<SEXP> args) {
    if (args.size() != 2
        || !(args.get(0) instanceof VectorSXP<?> a)
        || !(args.get(1) instanceof VectorSXP<?> b)
        || hasAttributes(a)
        || hasAttributes(b)) {
      return Optional.empty();
    }

    var la = a.size();
    var lb = b.size();
    var l = la == 0 || lb == 0 ? 0 : Math.max(la, lb);
    if (l % Math.max(1, Math.min(la, lb)) != 0) {
      return Optional.empty();
    }

    IntPredicate holds =
        switch (op) {
          case "==" -> c -> c == 0;
          case "!=" -> c -> c != 0;
          case "<" -> c -> c < 0;
          case "<=" -> c -> c <= 0;
          case ">" -> c -> c > 0;
          case ">=" -> c -> c >= 0;
          default -> throw new IllegalArgumentException("Not a relational operator: " + op);
        };

    // The sign of `a[i] <op> b[j]`, or `null` if it's `NA`.
    BiFunction<Integer, Integer, @Nullable Integer> compare;
    if (a.type() == SEXPType.STR && b.type() == SEXPType.STR) {
      var x = a.coerceToStrings();
      var y = b.coerceToStrings();
      if (!op.equals("==")
          && !op.equals("!=")
          && !Stream.of(LOCALE_INDEPENDENT_STRINGS)
              .anyMatch(
                  p ->
                      Stream.concat(Arrays.stream(x), Arrays.stream(y))
                          .allMatch(s -> Coercions.isNA(s) || p.matcher(s).matches()))) {
        return Optional.empty();
      }
      compare =
          (i, j) -> Coercions.isNA(x[i]) || Coercions.isNA(y[j]) ? null : x[i].compareTo(y[j]);
    } else if (Stream.of(a, b)
        .allMatch(v -> v.type() == SEXPType.LGL || v instanceof NumericSXP<?>)) {
      var x = a.coerceToReals();
      var y = b.coerceToReals();
      compare =
          (i, j) ->
              Double.isNaN(x[i]) || Double.isNaN(y[j])
                  ? null
                  : x[i] < y[j] ? -1 : x[i] > y[j] ? 1 : 0;
    } else {
      return Optional.empty();
    }

    var ans = new Logical[l];
    for (var i = 0; i < l; i++) {
      var c = compare.apply(i % la, i % lb);
      ans[i] = c == null ? Logical.NA : holds.test(c) ? Logical.TRUE : Logical.FALSE;
    }
    return Optional.of(SEXPs.logical(ans));
  }

  /// `round(x)` and `round(x, 0)`, which round half to even like C's `nearbyint`.
  public static Optional<SEXP> round(List<SEXP> args) {
    if (args.isEmpty()
        || args.size() > 2
        || args.getFirst().type() != SEXPType.REAL
        || hasAttributes(args.getFirst())) {
      return Optional.empty();
    }
    if (args.size() == 2
        && !(args.get(1) instanceof NumericSXP<?> digits
            && digits.size() == 1
            && digits.coerceToReals()[0] == 0)) {
      return Optional.empty();
    }
    return doubleMath1(args.subList(0, 1), Math::rint);
  }

  /// `choose(n, k)` of two scalars, with GNU-R's algorithm for `k < 30`.
  public static Optional<SEXP> choose(List<SEXP> args) {
    if (args.size() != 2
        || !args.stream()
            .allMatch(
                a ->
                    (a.type() == SEXPType.LGL || a instanceof NumericSXP<?>)
                        && ((VectorSXP<?>) a).size() == 1
                        && !hasAttributes(a))) {
      return Optional.empty();
    }

    var n = ((VectorSXP<?>) args.get(0)).coerceToReals()[0];
    var k0 = ((VectorSXP<?>) args.get(1)).coerceToReals()[0];
    var k = Math.rint(k0);
    // GNU-R warns when it rounds `k`, and returns `NaN`s without folding them.
    if (Double.isNaN(n) || Double.isNaN(k) || Math.abs(k - k0) > 1e-9 * Math.max(1, Math.abs(k0))) {
      return Optional.empty();
    }
    if (k >= 30) {
      return Optional.empty();
    }

    var nIsInt = Math.abs(n - Math.rint(n)) <= 1e-9 * Math.max(1, Math.abs(n));
    if (n - k < k && n >= 0 && nIsInt) {
      k = Math.rint(n - k);
    }
    double r;
    if (k < 0) {
      r = 0;
    } else if (k == 0) {
      r = 1;
    } else {
      r = n;
      for (var j = 2; j <= k; j++) {
        r *= (n - j + 1) / j;
      }
      r = nIsInt ? Math.rint(r) : r;
    }
    return Optional.of(SEXPs.real(r));
  }

  private static boolean hasAttributes(SEXP x) {
    return x.attributes() != null && !x.attributes().isEmpty();
  }

  public static Optional<SEXP> sub(List<SEXP> args) {
    return math2(Arithmetic.Operation.SUB, args);
  }

  private static <T> SEXP doMath1(Arithmetic.Operation op, VectorSXP<?> va, Arithmetic<T> arith) {
    var ax = arith.fromSEXP(va);
    return arith.toSEXP(doMath1(ax, arith::createResult, arith.getUnaryFun(op)));
  }

  private static <T, R> R[] doMath1(T[] ax, Function<Integer, R[]> createResult, Function<T, R> f) {
    var l = ax.length;
    if (l == 0) {
      return createResult.apply(0);
    }

    var ans = createResult.apply(l);
    for (int i = 0; i < l; i++) {
      ans[i] = f.apply(ax[i]);
    }

    return ans;
  }

  /**
   * Implements the binary operation for two vectors using R semantics of recycling vectors.
   *
   * @param ax the left hand side operand
   * @param bx the right hand side operand
   * @param createResult the function to create the result vector of the corresponding type
   * @param f the binary operation to apply
   * @return {@code f} applied to elements of {@code ax} and {@code bx} based on R recycling rules.
   * @param <T> the type of operands
   * @param <R> the type of the result
   */
  private static <T, R> R[] doMath2(
      T[] ax, T[] bx, Function<Integer, R[]> createResult, BiFunction<T, T, R> f) {
    var la = ax.length;
    var lb = bx.length;

    if (la == 0 || lb == 0) {
      return createResult.apply(0);
    }

    var l = Math.max(la, lb);
    var ans = createResult.apply(l);

    for (int i = 0, ia = 0, ib = 0;
        i < l;
        ia = (++ia == la) ? 0 : ia, ib = (++ib == lb) ? 0 : ib, i++) {

      var a = ax[ia];
      var b = bx[ib];

      ans[i] = f.apply(a, b);
    }

    return ans;
  }

  private static <T> SEXP doRep1(VectorSXP<T> x, int times) {
    var res = new ImmutableList.Builder<T>();

    for (int i = 0; i < times; i++) {
      res.addAll(x);
    }

    return SEXPs.primVector(x.type(), res.build());
  }

  private static <T> SEXP doRep2(VectorSXP<T> xs, NumericSXP<?> times) {
    var res = new ImmutableList.Builder<T>();

    for (int j = 0; j < times.size(); j++) {
      var n = times.asInt(j);
      var x = xs.get(j);
      for (int i = 0; i < n; i++) {
        res.add(x);
      }
    }

    return SEXPs.primVector(xs.type(), res.build());
  }

  private static Optional<SEXP> doubleMath1(List<SEXP> args, Function<Double, Double> f) {
    if (args.size() != 1) {
      return Optional.empty();
    }
    if (!(args.getFirst() instanceof NumericSXP<?> n)) {
      return Optional.empty();
    }

    var res = Arrays.copyOf(n.coerceToReals(), n.size());
    for (var i = 0; i < res.length; i++) {
      var x = res[i];
      // GNU-R's `math1` propagates `NA`/`NaN` without calling the function, which matters because
      // otherwise e.g. `log`'s "is it positive?" test would send `NA` to `-Inf`.
      if (Double.isNaN(x)) {
        continue;
      }

      res[i] = f.apply(x);
      // These functions warn ("NaNs produced") exactly when they turn a non-`NaN` into a `NaN`,
      // and GNU-R doesn't constant-fold anything that warns.
      if (Double.isNaN(res[i])) {
        return Optional.empty();
      }
    }

    return Optional.of(SEXPs.real(res));
  }

  private static Optional<SEXP> math1(Arithmetic.Operation op, List<SEXP> args) {
    if (args.size() != 1) {
      return Optional.empty();
    }

    if (!(args.getFirst() instanceof VectorSXP<?> va)) {
      return Optional.empty();
    }

    return Arithmetic.forType(va.type()).map(arith -> doMath1(op, va, arith));
  }

  private static Optional<SEXP> math2(Arithmetic.Operation op, List<SEXP> args) {
    return Arithmetic.forType(args).flatMap(arith -> math2(op, args, arith));
  }

  private static <T> Optional<SEXP> math2(
      Arithmetic.Operation op, List<SEXP> args, Arithmetic<T> arith) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (!(args.get(0) instanceof VectorSXP<?> va)) {
      return Optional.empty();
    }

    if (!(args.get(1) instanceof VectorSXP<?> vb)) {
      return Optional.empty();
    }

    var ax = arith.fromSEXP(va);
    var bx = arith.fromSEXP(vb);
    var ans = arith.toSEXP(doMath2(ax, bx, arith::createResult, arith.getBinaryFun(op)));

    return Optional.of(ans);
  }

  public static Optional<SEXP> c(List<? extends SEXP> args) {
    if (args.isEmpty()) {
      return Optional.of(SEXPs.NULL);
    }

    var type = args.getFirst().type();

    // compute the target type, the SEXPTYPE is ordered in a way that we can just take the max
    for (var arg : args) {
      type = Coercions.commonType(type, arg.type());
    }

    // this is safe as we have proved that all args are VectorSXP
    @SuppressWarnings("unchecked")
    var vecArgs = (List<VectorSXP<?>>) args;

    Optional<SEXP> vals =
        switch (type) {
          case STR ->
              Optional.of(
                  SEXPs.string(
                      vecArgs.stream()
                          .flatMap(x -> Arrays.stream(x.coerceToStrings()))
                          .toArray(String[]::new)));
          case REAL ->
              Optional.of(
                  SEXPs.real(
                      vecArgs.stream()
                          .flatMap(x -> Arrays.stream(x.coerceToReals()))
                          .mapToDouble(d -> d)
                          .toArray()));
          case INT ->
              Optional.of(
                  SEXPs.integer(
                      vecArgs.stream()
                          .flatMap(x -> Arrays.stream(x.coerceToInts()))
                          .mapToInt(i -> i)
                          .toArray()));
          case LGL ->
              Optional.of(
                  SEXPs.logical(
                      vecArgs.stream()
                          .flatMap(x -> Arrays.stream(x.coerceToLogicals()))
                          .toArray(Logical[]::new)));
          case CPLX ->
              Optional.of(
                  SEXPs.complex(
                      vecArgs.stream()
                          .flatMap(x -> Arrays.stream(x.coerceToComplexes()))
                          .toArray(Complex[]::new)));
          default -> Optional.empty();
        };

    return vals.map(
        x -> {
          var names =
              args.stream()
                  .map(SEXP::names)
                  .reduce(
                      new ArrayList<>(),
                      (acc, y) -> {
                        acc.addAll(y);
                        return acc;
                      });
          return x.withNames(names);
        });
  }

  public static Optional<SEXP> colon(List<SEXP> args) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (!(args.get(0) instanceof NumericSXP<?> min) || min.size() != 1) {
      return Optional.empty();
    }

    if (!(args.get(1) instanceof NumericSXP<?> max) || min.size() != 1) {
      return Optional.empty();
    }

    var imin = min.asInt(0);
    var imax = max.asInt(0);
    var ints = new int[Math.abs(imax - imin) + 1];
    var inc = imin < imax ? 1 : -1;
    int i, j;
    for (i = imin, j = 0; i != imax + inc; i += inc, j++) {
      ints[j] = i;
    }

    return Optional.of(SEXPs.integer(ints));
  }
}
