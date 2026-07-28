fun main() {
  () -+> v(I) {
    mkenv;
    r0: v(I) = v(I)[0, 1, 2];
    st x = r0;
    r1: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    f< p(v1(I) +) -+> I >(r1);
    r2: p(v1(I) +) = prom<v1(I) +>{
      r3: v(I)o = v(I)[3, 4, 5];
      r1$x = r3;
      return <int 42>;
    };
    f< p(v1(I) +) -+> I >(r2);
    rx0: * = ld x;
    rx1: v(I) = rx0 as v(I);
    popenv;
    return rx1;
  }
}

fun f(r) {
  (reg r:p(v1(I) +)) -+> I {
    mkenv;
    popenv;
    return 42;
  }
}
