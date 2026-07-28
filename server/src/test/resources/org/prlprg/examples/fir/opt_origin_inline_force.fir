fun main() {
  () -+> v1(I) {
    mkenv;
    f< I --> I >(42);
    popenv;
    return <int 42>;
  }
}

fun f(r0) {
  (reg r0:I) --> I {
    r0b: v1(I) = box< I --> v1(I) >(r0);
    r1: p(v1(I) -) = prom<v1(I) ->{
      return r0b;
    };
    r2: v1(I) = force r1;
    r2u: I = unbox< v1(I) --> I >(r2);
    return r2u;
  }
}
