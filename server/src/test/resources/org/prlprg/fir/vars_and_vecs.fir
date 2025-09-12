fun main() {
  () --> v(I)f { reg ry:p(I -), reg rz:v(I), reg r:v(I)o |
    ry = prom<I ->{ return 42; };
    rz = v(I)[1, 2, 3];
    r = f.0(24, ry, rz);
    return use r;
  }
}

fun f(...) {
  (reg rx:I, reg ry:p(I -), reg rz:v(I)) --> v(I)f { var x:I?, var y:I?, var z:I?, reg ry0:I, reg rz0:I, reg rx1:I?, reg ry1:I?, reg rz1:I?, reg ret:v(I)o, reg r1:I, reg r2:I, reg r3:I, reg r4:I |
    mkenv;
        st x = rx;
    ry0 = force ry;
    st y = ry0;
    rz0 = rz[0];
    st z = rz0;
    rx1 = ld x;
    r1 = rx1 as I;
    ry1 = ld y;
    r2 = ry1 as I;
    rz1 = ld z;
    r3 = rz1 as I;
    ret = v(I)[r1, r2, r3];
    r4 = rz[1];
    ret[r4] = 4;
    return use ret;
  }
}
