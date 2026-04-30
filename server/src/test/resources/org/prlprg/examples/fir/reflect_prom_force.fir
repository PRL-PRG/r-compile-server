#? [fir2c.eval]noEval
# TODO: Fix in fir2c.eval
fun main() {
  () -+> v(I) { reg r0:v(I)s, reg r1:p(v1(I) -), reg r2:p(v1(I) +), reg r3:v(I)o, var x:v(I)?, reg rx0:v(I)?, reg rx1:v(I) |
    mkenv;
    r0 = v(I)[0, 1, 2];
    st x = r0;

    r1 = prom<v1(I) ->{ return <int 42>; };
    f%< p(v1(I) +) -+> v1(I) >(r1);

    r2 = prom<v1(I) +>{
      r3 = v(I)[3, 4, 5];
      r1$x = r3;
      return <int 42>;
    };
    f%< p(v1(I) +) -+> v1(I) >(r2);

    rx0 = ld x;
    rx1 = rx0 as v(I);
    popenv;
    return rx1;
  }
}

fun f(r) {
  (reg r:p(v1(I) +)) -+> v1(I) { reg r1:v1(I) |
    r1 = force r;
    return r1;
  }
}
