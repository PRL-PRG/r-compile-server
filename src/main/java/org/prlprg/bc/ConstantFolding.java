package org.prlprg.bc;

import com.google.common.collect.ImmutableList;
import com.google.common.math.DoubleMath;
import com.google.common.primitives.ImmutableDoubleArray;
import com.google.common.primitives.ImmutableIntArray;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.function.BiFunction;
import java.util.function.Function;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.Arithmetic;

/**
 * Implements constant folding for some of the R functions. All functions are should have the same
 * signature: {@code Optional<SEXP> f(List<SEXP> args)}
 *
 * <p>They shall be called from Compiler and can assume that each argument is one of the {@link
 * Compiler#ALLOWED_FOLDABLE_MODES}.
 *
 * <p>The main reason it is extracted from the Compiler is to make have all the folding code in one
 * place without making Compiler too big.
 */
public final class ConstantFolding {
  private ConstantFolding() {}

  public static Optional<SEXP> add(List<SEXP> args) {
    return math2(Arithmetic.Operation.ADD, args);
  }

  public static Optional<SEXP> div(List<SEXP> args) {
    return math2(Arithmetic.Operation.DIV, args);
  }

  public static Optional<SEXP> log(List<SEXP> args) {
    return doubleMath1(args, Math::log);
  }

  public static Optional<SEXP> log2(List<SEXP> args) {
    return doubleMath1(args, DoubleMath::log2);
  }

  public static Optional<SEXP> minus(ImmutableList<SEXP> args) {
    return math1(Arithmetic.Operation.MINUS, args);
  }

  public static Optional<SEXP> mul(List<SEXP> args) {
    return math2(Arithmetic.Operation.MUL, args);
  }

  public static Optional<SEXP> plus(ImmutableList<SEXP> args) {
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

  public static Optional<SEXP> seqInt(ImmutableList<SEXP> args) {
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

    return SEXPs.vector(x.type(), res.build());
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

    return SEXPs.vector(xs.type(), res.build());
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
      res[i] = f.apply(res[i]);
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
    var capacity = 0;

    // compute the target type, the SEXPTYPE is ordered in a way that we can just take the max
    for (var arg : args) {
      type = Coercions.commonType(type, arg.type());
      capacity += ((VectorSXP<?>) arg).size();
    }

    // this is safe as we have proved that all args are VectorSXP
    @SuppressWarnings("unchecked")
    var vecArgs = (List<VectorSXP<?>>) args;

    Optional<SEXP> vals =
        switch (type) {
          case STR -> {
            var res = new ImmutableList.Builder<String>();
            vecArgs.forEach(x -> res.add(x.coerceToStrings()));
            yield Optional.of(SEXPs.string(res.build()));
          }
          case REAL -> {
            var res = ImmutableDoubleArray.builder(capacity);
            vecArgs.forEach(x -> Arrays.stream(x.coerceToReals()).forEach(res::add));
            yield Optional.of(SEXPs.real(res.build()));
          }
          case INT -> {
            var res = ImmutableIntArray.builder(capacity);
            vecArgs.forEach(x -> Arrays.stream(x.coerceToInts()).forEach(res::add));
            yield Optional.of(SEXPs.integer(res.build()));
          }
          case LGL -> {
            var res = new ImmutableList.Builder<Logical>();
            vecArgs.forEach(x -> res.add(x.coerceToLogicals()));
            yield Optional.of(SEXPs.logical(res.build()));
          }
          case CPLX -> {
            var res = new ImmutableList.Builder<Complex>();
            vecArgs.forEach(x -> res.add(x.coerceToComplexes()));
            yield Optional.of(SEXPs.complex(res.build()));
          }
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

  public static Optional<SEXP> colon(ImmutableList<SEXP> args) {
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
    var ints = ImmutableIntArray.builder(Math.abs(imax - imin));
    var inc = imin < imax ? 1 : -1;
    for (var i = imin; i != imax + inc; i += inc) {
      ints.add(i);
    }

    return Optional.of(SEXPs.integer(ints.build()));
  }
}
