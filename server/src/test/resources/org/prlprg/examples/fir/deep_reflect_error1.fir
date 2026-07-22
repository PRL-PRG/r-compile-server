fun main() {
  () -+> v(I) {
    mkenv;
    rx0: v(I) = v(I)[0, 1, 2];
    st x = rx0;
    r0: p(V ~) = prom<V ~>{
      rx1: * = ld x;
      rx2: V = rx1 as V;
      return rx2;
    };
    r1: v(I) = f%< p(V ~) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun f(r) {
  (reg r:p(V ~)) -+> v(I) {
    mkenv;
    r1: v(I) = g%< p(V ~) -+> v(I) >(r);
    popenv;
    return r1;
  }
}

fun g(r) {
  # type-error: Function effects mismatch: + don't subset -
  (reg r:p(V ~)) --> v(I) {
    mkenv;
    r0: v(I) = v(I)[3, 4, 5];
    r$x = r0;
    popenv;
    return r0;
  }
}
