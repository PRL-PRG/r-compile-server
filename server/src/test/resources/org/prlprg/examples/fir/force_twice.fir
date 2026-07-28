fun main() {
  () -~> v1(I) {
    mkenv;
    st x = <int 0>;
    r: p(v1(I) ~) = prom<v1(I) ~>{
      rx0: * = ld x;
      r1: v1(I) = rx0 as v1(I);
      r1u: I = unbox< v1(I) --> I >(r1);
      rx1: I = `+`< I,I --> I >(1, r1u);
      rx1b: v1(I) = box< I --> v1(I) >(rx1);
      st x = rx1b;
      rx2: * = ld x;
      r2: v1(I) = rx2 as v1(I);
      return r2;
    };
    r0: v1(I) = force_twice< p(v1(I) ~) -~> v1(I) >(r);
    popenv;
    return r0;
  }
}

fun force_twice(r) {
  (reg r:p(v1(I) ~)) -~> v1(I) {
    force r;
    r1: v1(I) = force r;
    return r1;
  }
}
