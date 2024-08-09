package org.prlprg.util;

import java.util.List;
import java.util.Optional;
import java.util.function.BiFunction;
import java.util.function.Function;
import org.prlprg.primitive.Complex;
import org.prlprg.sexp.*;

public interface Arithmetic<T> {
  Arithmetic<Integer> INTEGER =
      new Arithmetic<>() {
        // FIXME: check for overflow
        @Override
        public Integer add(Integer a, Integer b) {
          return a + b;
        }

        @Override
        public Integer sub(Integer a, Integer b) {
          return a - b;
        }

        // FIXME: check for overflow
        @Override
        public Integer mul(Integer a, Integer b) {
          return a * b;
        }

        @Override
        public Integer div(Integer a, Integer b) {
          return a / b;
        }

        @Override
        public Integer pow(Integer a, Integer b) {
          throw new UnsupportedOperationException("pow on integers");
        }

        @Override
        public Integer plus(Integer a) {
          return a;
        }

        @Override
        public Integer minus(Integer a) {
          return -a;
        }

        @Override
        public Integer[] createResult(int size) {
          return new Integer[size];
        }

        @Override
        public Integer[] fromSEXP(VectorSXP<?> vec) {
          return vec.coerceToInts();
        }

        @Override
        public VectorSXP<Integer> toSEXP(Integer[] ts) {
          return SEXPs.integer(ts);
        }
      };

  Arithmetic<Double> DOUBLE =
      new Arithmetic<>() {
        @Override
        public Double add(Double a, Double b) {
          return a + b;
        }

        @Override
        public Double sub(Double a, Double b) {
          return a - b;
        }

        @Override
        public Double mul(Double a, Double b) {
          return a * b;
        }

        @Override
        public Double div(Double a, Double b) {
          return a / b;
        }

        @Override
        public Double pow(Double a, Double b) {
          return Math.pow(a, b);
        }

        @Override
        public Double plus(Double a) {
          return a;
        }

        @Override
        public Double minus(Double a) {
          return -a;
        }

        @Override
        public Double[] createResult(int size) {
          return new Double[size];
        }

        @Override
        public Double[] fromSEXP(VectorSXP<?> vec) {
          return vec.coerceToReals();
        }

        @Override
        public VectorSXP<Double> toSEXP(Double[] ts) {
          return SEXPs.real(ts);
        }
      };
  Arithmetic<Complex> COMPLEX =
      new Arithmetic<>() {
        @Override
        public Complex add(Complex a, Complex b) {
          return a.add(b);
        }

        @Override
        public Complex sub(Complex a, Complex b) {
          return a.sub(b);
        }

        @Override
        public Complex mul(Complex a, Complex b) {
          return a.mul(b);
        }

        @Override
        public Complex div(Complex a, Complex b) {
          return a.div(b);
        }

        @Override
        public Complex pow(Complex a, Complex b) {
          return a.pow(b);
        }

        @Override
        public Complex plus(Complex a) {
          return a;
        }

        @Override
        public Complex minus(Complex a) {
          return a.minus();
        }

        @Override
        public Complex[] createResult(int size) {
          return new Complex[size];
        }

        @Override
        public Complex[] fromSEXP(VectorSXP<?> vec) {
          return vec.coerceToComplexes();
        }

        @Override
        public VectorSXP<Complex> toSEXP(Complex[] ts) {
          return SEXPs.complex(ts);
        }
      };

  static Optional<Arithmetic<?>> forType(SEXPType type) {
    var arith =
        switch (type) {
          case INT -> INTEGER;
          case REAL -> DOUBLE;
          case CPLX -> COMPLEX;
          default -> null;
        };
    return Optional.ofNullable(arith);
  }

  static Optional<Arithmetic<?>> forType(List<SEXP> args) {
    return forType(Coercions.commonType(args));
  }

  T add(T a, T b);

  T sub(T a, T b);

  T mul(T a, T b);

  T div(T a, T b);

  T pow(T a, T b);

  T plus(T a);

  T minus(T a);

  T[] createResult(int size);

  T[] fromSEXP(VectorSXP<?> vec);

  VectorSXP<T> toSEXP(T[] ts);

  default BiFunction<T, T, T> getBinaryFun(Operation op) {
    return switch (op) {
      case ADD -> this::add;
      case SUB -> this::sub;
      case MUL -> this::mul;
      case DIV -> this::div;
      case POW -> this::pow;
      default -> throw new IllegalArgumentException("Unsupported binary operation: " + op);
    };
  }

  default Function<T, T> getUnaryFun(Operation op) {
    return switch (op) {
      case PLUS -> this::plus;
      case MINUS -> this::minus;
      default -> throw new IllegalArgumentException("Unsupported unary operation: " + op);
    };
  }

  enum Operation {
    ADD,
    SUB,
    MUL,
    DIV,
    POW,
    PLUS,
    MINUS
  }
}
