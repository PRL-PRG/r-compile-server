fun main() {
  () -+> V { reg a:*, reg a1:V, reg b:*, reg b1:V, reg r:V, reg a2:*, reg a3:V, reg c:*, reg c1:V, reg r1:V, reg r2:V |
    mkenv;
    st a = 1.0;
    st b = 2.0;
    st c = 3.0;
    a = ld a;
    check L0() else D0();
  D0():
    deopt 9 [a];
  L0():
    a1 = force? a;
    checkMissing(a1);
    b = ld b;
    check L1() else D1();
  D1():
    deopt 10 [a1, b];
  L1():
    b1 = force? b;
    checkMissing(b1);
    r = `+`(a1, b1);
    a2 = ld a;
    check L2() else D2();
  D2():
    deopt 12 [r, a2];
  L2():
    a3 = force? a2;
    checkMissing(a3);
    c = ld c;
    check L3() else D3();
  D3():
    deopt 13 [r, a3, c];
  L3():
    c1 = force? c;
    checkMissing(c1);
    r1 = `+`(a3, c1);
    r2 = `*`(r, r1);
    popenv;
    return r2;
  }
}