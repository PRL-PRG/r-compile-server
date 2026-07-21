fun main() {
  () -+> V {
    r0: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    r1: p(V +) = prom<V +>{
      r3: v(I)o = read%< p(v1(I) -) -+> v(I)f >(r0);
      return consume r3;
    };
    r2: V = modify%< p(V +) -+> V >(r1);
    return r2;
  }
}

fun modify(r) {
  (reg r:p(V +)) -+> V {
    r$y = <int 1>;
    r0: v(I)o = v(I)[10, 20, 30];
    r$x = r0;
    r1: V = force r;
    r$y = r1;
    return r1;
  }
}

fun read(r) {
  (reg r:p(V +)) -+> v(I)f {
    rx0: * = r$x;
    rx1: v(I) = rx0 as v(I);
    ry0: * = r$y;
    ry1: v1(I) = ry0 as v1(I);
    ry1u: I = unbox< v1(I) --> I >(ry1);
    r2: I = rx1[0];
    r1: v(I)o = v(I)[r2, ry1u];
    return consume r1;
  }
}
