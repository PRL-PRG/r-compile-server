fun main() {
  () -+> V {
    mkenv;
    st x = <int 4>;
    ry: p(v1(I) +) = prom<v1(I) ~>{
      rx0: * = ld x;
      rx1: v1(I) = rx0 as v1(I);
      return rx1;
    };
    st y = ry;
    r0: p(v1(I) -) = prom<v1(I) ->{
      return <int 2>;
    };
    r1: V = f< p(v1(I) -) -+> V >(r0);
    popenv;
    return r1;
  }
}

fun f(r) {
  (reg r:p(v1(I) -)) -+> V {
    mkenv;
    r2: * = r$x;
    g%< * -+> V >(r2);
    r3: * = r$y;
    r1: V = g%< * -+> V >(r3);
    popenv;
    return r1;
  }
}

fun g(r) {
  # Slow case with variables, no optimizations due to `force r` causing reflection
  (reg r:*) -+> V {
    mkenv;
    popenv;
    return <int 42>;
  }
  # Fast case with registers, optimizations
  (reg r:v1(I)) --> v1(I) {
    return <int 42>;
  }
}
