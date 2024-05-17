package org.prlprg.util;

import java.util.Optional;
import org.prlprg.primitive.Complex;

public interface Arithmetic<T> {

  T add(T a, T b);

  T sub(T a, T b);

  T mul(T a, T b);

  T div(T a, T b);

  T[] createResult(int size);

  static <T> Optional<T[]> binary(Operation operation, T[] a, T[] b, Arithmetic<T> arith) {
    var la = a.length;
    var lb = b.length;

    if (la == 0 || lb == 0) {
      return Optional.of(arith.createResult(0));
    }

    var l = Math.max(la, lb);
    var ans = arith.createResult(l);

    for (int i = 0, ia = 0, ib = 0;
        i < l;
        ia = (++ia == la) ? 0 : ia, ib = (++ib == lb) ? 0 : ib, i++) {

      var ca = a[ia];
      var cb = b[ib];

      switch (operation) {
        case ADD -> ans[i] = arith.add(ca, cb);
        case SUB -> ans[i] = arith.sub(ca, cb);
        case MUL -> ans[i] = arith.mul(ca, cb);
        case DIV -> ans[i] = arith.div(ca, cb);
      }
    }

    return Optional.of(ans);
  }

  enum Operation {
    ADD,
    SUB,
    MUL,
    DIV
  }

  Arithmetic<Integer> INTEGER =
      new Arithmetic<>() {
        @Override
        public Integer add(Integer a, Integer b) {
          return a + b;
        }

        @Override
        public Integer sub(Integer a, Integer b) {
          return a - b;
        }

        @Override
        public Integer mul(Integer a, Integer b) {
          return a * b;
        }

        @Override
        public Integer div(Integer a, Integer b) {
          return a / b;
        }

        @Override
        public Integer[] createResult(int size) {
          return new Integer[size];
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
        public Double[] createResult(int size) {
          return new Double[size];
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
        public Complex[] createResult(int size) {
          return new Complex[size];
        }
      };
}
