fun main() {
  () -+> v(I) {
    mkenv;
    rx0: v(I) = v(I)[0, 1, 2];
    st x = rx0;
    r0: p(v1(I) -) = prom<v1(I) ->{
      return <int 4>;
    };
    r1: v(I) = f%< p(v1(I) -) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun f(r) {
  (reg r:p(v1(I) -)) -+> v(I) {
    mkenv;
    r0: p(v1(I) -) = prom<v1(I) ->{
      return <int 2>;
    };
    r1: v(I) = g%< p(v1(I) -) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun g(r) {
  (reg r:p(v1(I) -)) -+> v(I) {
    mkenv;
    r0: v(I) = v(I)[3, 4, 5];
    r$x = r0;
    popenv;
    return r0;
  }
}
