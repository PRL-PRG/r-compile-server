fun main() {
  () -~> v(I)f { reg ry:p(v1(I) -), reg rz:v(I), reg r:v(I)o |
    ry = prom<v1(I) ->{ return <int 42>; };
    rz = v(I)[1, 2, 3];
    r = f< I,p(v1(I) -),v(I) -~> v(I)f >(24, ry, rz);
    return consume r;
  }
}

fun f(rx, ry, rz) {
  (reg rx:I, reg ry:p(v1(I) -), reg rz:v(I)) -~> v(I)f { var x:v1(I)?, var y:v1(I)?, var z:v1(I)?, reg rxb:v1(I), reg ry0:v1(I), reg rz0:I, reg rz0b:v1(I), reg rx1:v1(I)?, reg ry1:v1(I)?, reg rz1:v1(I)?, reg ret:v(I)o, reg r1:v1(I), reg r1u:I, reg r2:v1(I), reg r2u:I, reg r3:v1(I), reg r3u:I, reg r4:I |
    mkenv;
    rxb = box<I --> v1(I)>(rx);
    st x = rxb;
    ry0 = force ry;
    st y = ry0;
    rz0 = rz[0];
    rz0b = box<I --> v1(I)>(rz0);
    st z = rz0b;
    rx1 = ld x;
    r1 = rx1 as v1(I);
    r1u = unbox<v1(I) --> I>(r1);
    ry1 = ld y;
    r2 = ry1 as v1(I);
    r2u = unbox<v1(I) --> I>(r2);
    rz1 = ld z;
    r3 = rz1 as v1(I);
    r3u = unbox<v1(I) --> I>(r3);
    ret = v(I)[r1u, r2u, r3u];
    r4 = rz[1];
    ret[r4] = 4;
    popenv;
    return consume ret;
  }
}
