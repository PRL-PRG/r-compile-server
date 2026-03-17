fun main() {
  () -+> v(I) { var x:*, reg rx0:v(I)s, reg r0:p(I -), reg r1:v(I) |
    mkenv;
    rx0 = v(I)[0, 1, 2];
    st x = rx0;
    r0 = prom<I ->{ return 4; };
    r1 = f?< p(I -) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun f(r) {
  (reg r:p(I -)) -+> v(I) { reg r0:p(I -), reg r1:v(I) |
    mkenv;
    r0 = prom<I ->{ return 2; };
    r1 = g?< p(I -) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun g(r) {
  (reg r:p(I -)) -+> v(I) { reg r0:v(I) |
    mkenv;
    r0 = v(I)[3, 4, 5];
    r$x = r0;
    popenv;
    return r0;
  }
}
