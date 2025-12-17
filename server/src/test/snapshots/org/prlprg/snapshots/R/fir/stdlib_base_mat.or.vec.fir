fun main() {
  () -+> V { reg r:cls, reg mat_or_vec:cls, reg r1:V, reg mat_or_vec1:cls, reg r2:V |
    mkenv;
    r = clos inner1187992269;
    st `mat.or.vec` = r;
    mat_or_vec = ldf `mat.or.vec`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn mat_or_vec(3.0, 1.0);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    mat_or_vec1 = ldf `mat.or.vec`;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    r2 = dyn mat_or_vec1(3.0, 2.0);
    check L3() else D3();
  D3():
    deopt 12 [r2];
  L3():
    popenv;
    return r2;
  }
}
fun inner1187992269(nr, nc) {
  (reg nr:*, reg nc:*) -+> V { var nr:*, var nc:*, reg nc1:*, reg nc2:V, reg r:V, reg c:L, reg numeric:cls, reg nr1:*, reg nr2:V, reg p:p(V +), reg r2:V, reg matrix:cls, reg nr3:*, reg nr4:V, reg p1:p(V +), reg nc3:*, reg nc4:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st nr = nr;
    st nc = nc;
    nc1 = ld nc;
    check L1() else D0();
  D0():
    deopt 0 [nc1];
  L1():
    nc2 = force? nc1;
    checkMissing(nc2);
    r = `==`(nc2, 1);
    c = `as.logical`(r);
    if c then L2() else L0();
  L0():
    matrix = ldf matrix;
    check L6() else D3();
  L2():
    numeric = ldf numeric;
    check L3() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 9 [];
  L3():
    p = prom<V +>{
      nr1 = ld nr;
      nr2 = force? nr1;
      checkMissing(nr2);
      return nr2;
    };
    r2 = dyn numeric(p);
    check L4() else D2();
  L6():
    p1 = prom<V +>{
      nr3 = ld nr;
      nr4 = force? nr3;
      checkMissing(nr4);
      return nr4;
    };
    p2 = prom<V +>{
      nc3 = ld nc;
      nc4 = force? nc3;
      checkMissing(nc4);
      return nc4;
    };
    r5 = dyn matrix(0.0, p1, p2);
    check L7() else D4();
  D2():
    deopt 7 [r2];
  D4():
    deopt 13 [r5];
  L4():
    popenv;
    return r2;
  L7():
    popenv;
    return r5;
  }
}