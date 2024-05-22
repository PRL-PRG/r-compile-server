package org.prlprg.bc;

import static org.prlprg.bc.Compiler.ALLOWED_FOLDABLE_MODES;

import com.google.common.collect.ImmutableList;
import com.google.common.math.DoubleMath;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.function.BiFunction;
import java.util.function.Function;
import org.prlprg.sexp.*;
import org.prlprg.util.Arithmetic;

public class ConstantFolding {
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
    return math2(Arithmetic.Operation.POW, args);
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

  private static <T> SEXP doMath2(
      Arithmetic.Operation op, VectorSXP<?> va, VectorSXP<?> vb, Arithmetic<T> arith) {
    var ax = arith.fromSEXP(va);
    var bx = arith.fromSEXP(vb);
    return arith.toSEXP(doMath2(ax, bx, arith::createResult, arith.getBinaryFun(op)));
  }

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

    if (!(args.getFirst() instanceof VectorSXP<?> va)
        || !ALLOWED_FOLDABLE_MODES.contains(va.type())) {
      return Optional.empty();
    }

    return Optional.of(doMath1(op, va, Arithmetic.forType(va.type())));
  }

  private static Optional<SEXP> math2(Arithmetic.Operation op, List<SEXP> args) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (!(args.get(0) instanceof VectorSXP<?> va) || !ALLOWED_FOLDABLE_MODES.contains(va.type())) {
      return Optional.empty();
    }

    if (!(args.get(1) instanceof VectorSXP<?> vb) || !ALLOWED_FOLDABLE_MODES.contains(vb.type())) {
      return Optional.empty();
    }

    SEXPType type = Coercions.commonType(va.type(), vb.type());
    SEXP ans =
        switch (type) {
          case INT ->
              switch (op) {
                case POW -> {
                  var a = va.coerceTo(Double.class);
                  var b = vb.coerceTo(Double.class);
                  var r = doMath2(a, b, Arithmetic.DOUBLE::createResult, Math::pow);
                  yield SEXPs.real(r);
                }
                default -> doMath2(op, va, vb, Arithmetic.INTEGER);
              };
          case REAL -> doMath2(op, va, vb, Arithmetic.DOUBLE);
          case CPLX -> doMath2(op, va, vb, Arithmetic.COMPLEX);
          default -> null;
        };

    return Optional.ofNullable(ans);
  }
}
