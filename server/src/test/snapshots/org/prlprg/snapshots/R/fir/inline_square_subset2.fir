fun main() {
  () -+> V { reg matrix:cls, reg p:p(V +), reg r1:V, reg matrix1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg matrix2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg x:*, reg x1:V, reg c2:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg y:*, reg y1:V, reg r12:V, reg z:*, reg z1:V, reg r13:V, reg __:cls, reg r14:V, reg x4:*, reg x5:V, reg c3:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg y2:*, reg y3:V, reg r15:V, reg z2:*, reg z3:V, reg r16:V, reg __1:cls, reg r17:V |
    mkenv;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    };
    r1 = dyn matrix[, nrow](p, 3.0);
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st x = r1;
    matrix1 = ldf matrix;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0);
      goto L0(r4);
    L2():
      r2 = dyn base(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0);
      goto L0(r2);
    };
    r6 = dyn matrix1[, nrow](p1, 3.0);
    check L5() else D3();
  D3():
    deopt 12 [r6];
  L5():
    st y = r6;
    matrix2 = ldf matrix;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1(2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0);
      goto L0(r9);
    L2():
      r7 = dyn base1(2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0);
      goto L0(r7);
    };
    r11 = dyn matrix2[, nrow](p2, 3.0);
    check L7() else D5();
  D5():
    deopt 19 [r11];
  L7():
    st z = r11;
    x = ld x;
    check L8() else D6();
  D6():
    deopt 21 [x];
  L8():
    x1 = force? x;
    checkMissing(x1);
    c2 = `is.object`(x1);
    if c2 then L9() else L10(x1);
  L0():
    x4 = ld x;
    check L14() else D9();
  L9():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x3):
    y = ld y;
    check L12() else D7();
  D7():
    deopt 23 [x3, y];
  D9():
    deopt 31 [x4];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L12():
    y1 = force? y;
    checkMissing(y1);
    r12 = `==`(y1, 1.0);
    z = ld z;
    check L13() else D8();
  L14():
    x5 = force? x4;
    checkMissing(x5);
    c3 = `is.object`(x5);
    if c3 then L15() else L16(x5);
  D8():
    deopt 26 [x3, r12, z];
  L1(dx3):
    popenv;
    return dx3;
  L13():
    z1 = force? z;
    checkMissing(z1);
    r13 = `==`(z1, 2.0);
    __ = ldf `[` in base;
    r14 = dyn __(x3, r12, r13);
    goto L0();
  L15():
    dr2 = tryDispatchBuiltin.1("[[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(x7):
    y2 = ld y;
    check L18() else D10();
  D10():
    deopt 33 [x7, y2];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L18():
    y3 = force? y2;
    checkMissing(y3);
    r15 = `==`(y3, 1.0);
    z2 = ld z;
    check L19() else D11();
  D11():
    deopt 36 [x7, r15, z2];
  L19():
    z3 = force? z2;
    checkMissing(z3);
    r16 = `==`(z3, 2.0);
    __1 = ldf `[[` in base;
    r17 = dyn __1(x7, r15, r16);
    goto L1(r17);
  }
}