fun main() {
  () -+> v(I) {
    mkenv;
    rx0: v(I)o = v(I)[0, 1, 2];
    # type-error: Never store a `consume` because the load can't be optimized. Instead, assign it to a register and store that.
    st x = consume rx0;
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
  (reg r:p(V ~)) -+> v(I) {
    mkenv;
    r0: v(I) = v(I)[3, 4, 5];
    r$x = r0;
    popenv;
    return r0;
  }
}
