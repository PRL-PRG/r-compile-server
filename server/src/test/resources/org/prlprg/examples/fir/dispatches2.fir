fun main() {
  () -+> V { var x:v1(I)?, reg rx0:v1(I)?, reg rx1:v1(I), reg ry:p(v1(I) +), var y:p(v1(I) +)?, reg r0:p(v1(I) -), reg r1:V |
    mkenv;
    st x = <int 4>;
    ry = prom<v1(I) ->{
      rx0 = ld x;
      rx1 = rx0 as v1(I);
      return rx1;
    };
    st y = ry;
    r0 = prom<v1(I) ->{ return <int 2>; };
    r1 = f< p(v1(I) -) -+> V >(r0);
    popenv;
    return r1;
  }
}

fun f(r) {
  (reg r:p(v1(I) -)) -+> V { reg r1:V, reg r2:*, reg r3:* |
    mkenv;
    r2 = r$x;
    g%< * -+> V >(r2);
    r3 = r$y;
    r1 = g%< * -+> V >(r3);
    popenv;
    return r1;
  }
}

fun g(r) {
  # Slow case with variables, no optimizations due to `force r` causing reflection
  (reg r:*) -+> V { |
    mkenv;
    40;
    41;
    popenv;
    return <int 42>;
  }
  # Fast case with registers, optimizations
  (reg r:v1(I)) --> v1(I) { |
    return <int 42>;
  }
}
