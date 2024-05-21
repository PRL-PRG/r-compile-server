package org.prlprg.bc;

import static org.prlprg.bc.Compiler.ALLOWED_FOLDABLE_MODES;

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

  private static Optional<SEXP> dmath1(List<SEXP> args, Function<Double, Double> f) {
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

  static <T> SEXP doMath2(
      Arithmetic.Operation op, VectorSXP<?> va, VectorSXP<?> vb, Arithmetic<T> arith) {
    var ax = arith.fromSEXP(va);
    var bx = arith.fromSEXP(vb);
    return arith.toSEXP(doMath2(ax, bx, arith::createResult, arith.get(op)));
  }

  static <T, R> R[] doMath2(
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

  public static Optional<SEXP> log(List<SEXP> args) {
    return dmath1(args, Math::log);
  }

  public static Optional<SEXP> log2(List<SEXP> args) {
    return dmath1(args, DoubleMath::log2);
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

  public static Optional<SEXP> mul(List<SEXP> args) {
    return math2(Arithmetic.Operation.MUL, args);
  }

  public static Optional<SEXP> pow(List<SEXP> args) {
    return math2(Arithmetic.Operation.POW, args);
  }

  public static Optional<SEXP> sub(List<SEXP> args) {
    return math2(Arithmetic.Operation.SUB, args);
  }
}
