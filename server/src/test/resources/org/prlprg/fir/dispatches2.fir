fun main {
  () -+> V { var x:I?, reg rx0:I?, reg rx1:I, reg ry:p(I +), var y:p(I +)?, reg r0:p(I -), reg r1:V |
    x = 4;
    ry = prom<I ->{
      rx0 = x;
      rx1 = rx0 as I;
      return rx1;
    };
    y = ry;
    r0 = prom<I ->{ return 2; };
    r1 = f(r0);
    return r1;
  }
}

fun f {
  (reg r:p(I -)) -+> V { reg r1:V, reg r2:*, reg r3:* |
    r2 = r$x;
    g(r2);
    r3 = r$y;
    r1 = g(r3);
    return r1;
  }
}

fun g {
  (reg r:*) -+> V { |
    # Slow case with variables, no optimizations due to `force r` causing reflection
    40;
    41;
    return 42;
  }
  (reg r:I) --> I { |
    # Fast case with registers, optimizations
    return 42;
  }
}