fun main() {
  () -+> V { var x:I?, reg rx0:I?, reg rx1:I, reg ry:p(I +), var y:p(I +)?, reg r0:p(I -), reg r1:V |
    mkenv;
        st x = 4;
    ry = prom<I ->{
      rx0 = ld x;
      rx1 = rx0 as I;
      return rx1;
    };
    st y = ry;
    r0 = prom<I ->{ return 2; };
    r1 = f(r0);
    return r1;
  }
}

fun f(...) {
  (reg r:p(I -)) -+> V { reg r1:V, reg r2:*, reg r3:* |
    mkenv;
        r2 = r$x;
    g(r2);
    r3 = r$y;
    r1 = g(r3);
    return r1;
  }
}

fun g(...) {
  # Slow case with variables, no optimizations due to `force r` causing reflection
  (reg r:*) -+> V { |
    mkenv;
        # cleanup:
    40;
    # cleanup:
    41;
    return 42;
  }
  # Fast case with registers, optimizations
  (reg r:I) --> I { |
    return 42;
  }
}