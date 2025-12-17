fun main() {
  () -+> V { reg matrix:cls, reg r:V, reg matrix1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg matrix2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg l:*, reg c2:L, reg r12:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg y:*, reg y1:V, reg r15:V, reg z:*, reg z1:V, reg r16:V, reg ___:cls, reg r17:V, reg l3:*, reg c3:L, reg r19:R, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r21:R, reg dx3:V, reg y2:*, reg y3:V, reg r22:V, reg z2:*, reg z3:V, reg r23:V, reg ____:cls, reg r24:V |
    mkenv;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn matrix[, nrow, ncol](0.0, 3.0, 3.0);
    check L3() else D1();
  D1():
    deopt 7 [r];
  L3():
    st x = r;
    matrix1 = ldf matrix;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0);
      goto L0(r1);
    };
    r5 = dyn matrix1[, nrow, ncol](p, 3.0, 3.0);
    check L5() else D3();
  D3():
    deopt 16 [r5];
  L5():
    st y = r5;
    matrix2 = ldf matrix;
    check L6() else D4();
  D4():
    deopt 19 [];
  L6():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1(2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0);
      goto L0(r8);
    L2():
      r6 = dyn base1(2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0);
      goto L0(r6);
    };
    r10 = dyn matrix2[, nrow, ncol](p1, 3.0, 3.0);
    check L7() else D5();
  D5():
    deopt 25 [r10];
  L7():
    st z = r10;
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L8() else L9(1.0, l);
  L0(dx1):
    st x = dx1;
    l3 = ld x;
    c3 = `is.object`(l3);
    if c3 then L13() else L14(1.0, l3);
  L8():
    dr = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(1.0, dr);
  L9(r12, l2):
    y = ld y;
    check L11() else D6();
  D6():
    deopt 30 [r12, l2, 1.0, y];
  L1(r21, dx3):
    st x = dx3;
    setInvisible.0();
    popenv;
    return r21;
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L11():
    y1 = force? y;
    checkMissing(y1);
    r15 = `==`(y1, 1.0);
    z = ld z;
    check L12() else D7();
  L13():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, 1.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(1.0, dr2);
  L14(r19, l5):
    y2 = ld y;
    check L16() else D8();
  D7():
    deopt 33 [r12, l2, 1.0, r15, z];
  D8():
    deopt 42 [r19, l5, 1.0, y2];
  L12():
    z1 = force? z;
    checkMissing(z1);
    r16 = `==`(z1, 2.0);
    ___ = ldf `[<-` in base;
    r17 = dyn ___(l2, 1.0, r15, r16);
    goto L0(r17);
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(1.0, dx2);
  L16():
    y3 = force? y2;
    checkMissing(y3);
    r22 = `==`(y3, 1.0);
    z2 = ld z;
    check L17() else D9();
  D9():
    deopt 45 [r19, l5, 1.0, r22, z2];
  L17():
    z3 = force? z2;
    checkMissing(z3);
    r23 = `==`(z3, 2.0);
    ____ = ldf `[[<-` in base;
    r24 = dyn ____(l5, 1.0, r22, r23);
    goto L1(r19, r24);
  }
}