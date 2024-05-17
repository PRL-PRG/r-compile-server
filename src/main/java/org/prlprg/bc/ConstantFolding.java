package org.prlprg.bc;

import static org.prlprg.bc.Compiler.ALLOWED_FOLDABLE_MODES;

import java.util.List;
import java.util.Optional;
import org.prlprg.primitive.Complex;
import org.prlprg.sexp.*;
import org.prlprg.util.Arithmetic;

public class ConstantFolding {
  public static Optional<SEXP> add(List<SEXP> args) {
    return binary_op(Arithmetic.Operation.ADD, args);
  }

  public static Optional<SEXP> sub(List<SEXP> args) {
    return binary_op(Arithmetic.Operation.SUB, args);
  }

  public static Optional<SEXP> mul(List<SEXP> args) {
    return binary_op(Arithmetic.Operation.MUL, args);
  }

  public static Optional<SEXP> div(List<SEXP> args) {
    return binary_op(Arithmetic.Operation.DIV, args);
  }

  private static Optional<SEXP> binary_op(Arithmetic.Operation op, List<SEXP> args) {
    if (args.size() != 2) {
      return Optional.empty();
    }

    if (!(args.get(0) instanceof VectorSXP<?> vecA)
        || !ALLOWED_FOLDABLE_MODES.contains(vecA.type())) {
      return Optional.empty();
    }

    if (!(args.get(1) instanceof VectorSXP<?> vecB)
        || !ALLOWED_FOLDABLE_MODES.contains(vecB.type())) {
      return Optional.empty();
    }

    return switch (Coercions.commonType(vecA.type(), vecB.type())) {
      case CPLX -> {
        var a = vecA.coerceTo(Complex.class);
        var b = vecB.coerceTo(Complex.class);
        yield Arithmetic.binary(op, a, b, Arithmetic.COMPLEX).map(SEXPs::complex);
      }
      case INT -> {
        var a = vecA.coerceTo(Integer.class);
        var b = vecB.coerceTo(Integer.class);
        yield Arithmetic.binary(op, a, b, Arithmetic.INTEGER).map(SEXPs::integer);
      }
      case REAL -> {
        var a = vecA.coerceTo(Double.class);
        var b = vecB.coerceTo(Double.class);
        yield Arithmetic.binary(op, a, b, Arithmetic.DOUBLE).map(SEXPs::real);
      }
      default -> Optional.empty();
    };
  }
}
