fun main {
  () -+> v(I) { var x:*, reg rx0:v(I)o, reg rx1:*, reg rx2:V, reg r0:p(V -), reg r1:v(I) |
    rx0 = [0, 1, 2];
    st x = use rx0;
    r0 = prom<V ->{
    rx1 = ld x;
    rx2 = rx1 as V;
    return rx2;
    };
    r1 = f(r0);
    return r1;
  }
}

fun f {
  (reg r:p(V -)) -+> v(I) { reg r1:v(I) |
    r1 = g(r);
    return r1;
  }
}

fun g {
  # type-error: Function effects mismatch: expected -, got +
  (reg r:p(V -)) --> v(I) { reg r0:v(I)o, reg r1:v(I) |
    r0 = [3, 4, 5];
    r1 = r$x = r0;
    return r1;
  }
}
