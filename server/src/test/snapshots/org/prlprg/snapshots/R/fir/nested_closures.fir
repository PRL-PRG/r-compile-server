fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V, reg r2:cls, reg r3:V |
    mkenv;
    st a = 1.0;
    r = clos inner2148457334;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r1 = dyn f(10.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2(30.0);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    popenv;
    return r3;
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg r:cls, reg g:cls, reg r1:V |
    mkenv;
    st z = z;
    st c = 2.0;
    r = clos inner177517877;
    st g = r;
    g = ldf g;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r1 = dyn g(20.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg r:cls, reg h:*, reg h1:V |
    mkenv;
    st y = y;
    st e = 3.0;
    r = clos inner2501545716;
    st h = r;
    h = ld h;
    check L0() else D0();
  D0():
    deopt 6 [h];
  L0():
    h1 = force? h;
    checkMissing(h1);
    popenv;
    return h1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg a:*, reg a1:V, reg c:*, reg c1:V, reg r:V, reg e:*, reg e1:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg y:*, reg y1:V, reg r3:V, reg z:*, reg z1:V, reg r4:V |
    mkenv;
    st x = x;
    a = ld a;
    check L0() else D0();
  D0():
    deopt 0 [a];
  L0():
    a1 = force? a;
    checkMissing(a1);
    c = ld c;
    check L1() else D1();
  D1():
    deopt 1 [a1, c];
  L1():
    c1 = force? c;
    checkMissing(c1);
    r = `+`(a1, c1);
    e = ld e;
    check L2() else D2();
  D2():
    deopt 3 [r, e];
  L2():
    e1 = force? e;
    checkMissing(e1);
    r1 = `+`(r, e1);
    x1 = ld x;
    check L3() else D3();
  D3():
    deopt 5 [r1, x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `+`(r1, x2);
    y = ld y;
    check L4() else D4();
  D4():
    deopt 7 [r2, y];
  L4():
    y1 = force? y;
    checkMissing(y1);
    r3 = `+`(r2, y1);
    z = ld z;
    check L5() else D5();
  D5():
    deopt 9 [r3, z];
  L5():
    z1 = force? z;
    checkMissing(z1);
    r4 = `+`(r3, z1);
    popenv;
    return r4;
  }
}