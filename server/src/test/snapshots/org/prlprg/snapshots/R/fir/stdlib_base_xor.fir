fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1347906706`;
    st xor = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1347906706`(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg r:V, reg x3:*, reg x4:V, reg y3:*, reg y4:V, reg r1:V, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    st y = y;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L1() else D1();
  D1():
    deopt 1 [x2, y1];
  L1():
    y2 = force? y1;
    checkMissing(y2);
    r = `||`(x2, y2);
    x3 = ld x;
    check L2() else D2();
  D2():
    deopt 3 [r, x3];
  L2():
    x4 = force? x3;
    checkMissing(x4);
    y3 = ld y;
    check L3() else D3();
  D3():
    deopt 4 [r, x4, y3];
  L3():
    y4 = force? y3;
    checkMissing(y4);
    r1 = `&&`(x4, y4);
    r2 = `!`(r1);
    r3 = `&&`(r, r2);
    popenv;
    return r3;
  }
}