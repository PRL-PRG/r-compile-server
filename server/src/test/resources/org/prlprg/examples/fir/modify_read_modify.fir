fun main() {
  () -+> V { reg r0:p(v1(I) -), reg r1:p(V +), reg r2:V, reg r3:v(I)o |
    r0 = prom<v1(I) ->{ return <int 42>; };
    r1 = prom<V +>{
      r3 = read%< p(v1(I) -) -+> v(I)f >(r0);
      return consume r3;
    };
    r2 = modify%< p(V +) -+> V >(r1);
    return r2;
  }
}

fun modify(r) {
  (reg r:p(V +)) -+> V { reg r0:v(I)o, reg r1:V |
    r$y = <int 1>;
    r0 = v(I)[10, 20, 30];
    r$x = r0;
    r1 = force r;
    r$y = r1;
    return r1;
  }
}

fun read(r) {
  (reg r:p(V +)) -+> v(I)f { reg rx0:*, reg rx1:v(I), reg ry0:*, reg ry1:v1(I), reg ry1u:I, reg r1:v(I)o, reg r2:I |
    rx0 = r$x;
    rx1 = rx0 as v(I);
    ry0 = r$y;
    ry1 = ry0 as v1(I);
    ry1u = unbox<v1(I) --> I>(ry1);
    r2 = rx1[0];
    r1 = v(I)[r2, ry1u];
    return consume r1;
  }
}
