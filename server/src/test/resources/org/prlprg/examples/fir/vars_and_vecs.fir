fun main() {
  () -~> v(I)f {
    ry: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    rz: v(I) = v(I)[1, 2, 3];
    r: v(I)o = f< I,p(v1(I) -),v(I) -~> v(I)f >(24, ry, rz);
    return consume r;
  }
}

fun f(rx, ry, rz) {
  (reg rx:I, reg ry:p(v1(I) -), reg rz:v(I)) -~> v(I)f {
    mkenv;
    rxb: v1(I) = box< I --> v1(I) >(rx);
    st x = rxb;
    ry0: v1(I) = force ry;
    st y = ry0;
    rz0: I = rz[0];
    rz0b: v1(I) = box< I --> v1(I) >(rz0);
    st z = rz0b;
    rx1: * = ld x;
    r1: v1(I) = rx1 as v1(I);
    r1u: I = unbox< v1(I) --> I >(r1);
    ry1: * = ld y;
    r2: v1(I) = ry1 as v1(I);
    r2u: I = unbox< v1(I) --> I >(r2);
    rz1: * = ld z;
    r3: v1(I) = rz1 as v1(I);
    r3u: I = unbox< v1(I) --> I >(r3);
    ret: v(I)o = v(I)[r1u, r2u, r3u];
    r4: I = rz[1];
    ret[r4] = 4;
    popenv;
    return consume ret;
  }
}
