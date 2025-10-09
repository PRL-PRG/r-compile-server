fun main() {
  () -+> v(I) { var x:*, reg rx0:v(I)s, reg rx1:*, reg rx2:V, reg r0:p(V +), reg r1:v(I) |
    mkenv;
    rx0 = v(I)[0, 1, 2];
    st x = rx0;
    r0 = prom<V +>{
      rx1 = ld x;
      rx2 = rx1 as V;
      return rx2;
    };
    # type-error: Type mismatch in argument 0 (for signature): p(V +) doesn't match p(V -)
    # runtime-error: Type mismatch in argument 0 (for signature): <prom env=<user#0 ...> ⇒ .Interpret(...)> {:p(V +)} isn't a(n) p(V -)
    r1 = f< p(V -) -+> v(I) >(r0);
    popenv;
    return r1;
  }
}

fun f(`...`) {
  (reg r:p(V -)) -+> v(I) { reg r1:v(I) |
    mkenv;
    r1 = g< p(V -) -+> v(I) >(r);
    popenv;
    return r1;
  }
}

fun g(`...`) {
  (reg r:p(V -)) -+> v(I) { reg r0:v(I)o, reg r1:v(I) |
    mkenv;
    r0 = v(I)[3, 4, 5];
    r1 = r$x = r0;
    popenv;
    return r1;
  }
}
