fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st setdiff = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg as_vector:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg as_vector1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg u:*, reg u1:V, reg c:L, reg u3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg u4:*, reg u5:V, reg unclass:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg u8:V, reg r13:V, reg r14:V, reg u9:*, reg u10:V, reg v:*, reg v1:V, reg match:cls, reg r15:V, reg r16:V, reg r17:V, reg __:cls, reg r18:V |
    mkenv;
    st x = x;
    st y = y;
    as_vector = ldf `as.vector`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_vector(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st u = r1;
    as_vector1 = ldf `as.vector`;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn as_vector1(p1);
    check L5() else D3();
  D3():
    deopt 8 [r3];
  L5():
    st v = r3;
    u = ld u;
    check L6() else D4();
  D4():
    deopt 10 [u];
  L6():
    u1 = force? u;
    checkMissing(u1);
    c = `is.object`(u1);
    if c then L7() else L8(u1);
  L0(dx1):
    popenv;
    return dx1;
  L7():
    dr = tryDispatchBuiltin.1("[", u1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(u3):
    duplicated = ldf duplicated;
    check L10() else D5();
  D5():
    deopt 13 [u3];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    p2 = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      u4 = ld u;
      u5 = force? u4;
      checkMissing(u5);
      unclass = ldf unclass in base;
      r6 = dyn unclass(u5);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym u>);
      goto L0(r4);
    };
    r8 = dyn duplicated(p2);
    check L11() else D6();
  D6():
    deopt 15 [u3, r8];
  L11():
    r9 = `!`(r8);
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(u8, r13, r14):
    r16 = `==`(r14, 0);
    r17 = `&&`(r13, r16);
    __ = ldf `[` in base;
    r18 = dyn __(u8, r17);
    goto L0(r18);
  L12():
    u9 = ld u;
    check L14() else D7();
  L13():
    r12 = dyn base1(<sym u>, <sym v>, 0);
    goto L1(u3, r9, r12);
  D7():
    deopt 18 [u3, r9, u9];
  L14():
    u10 = force? u9;
    checkMissing(u10);
    v = ld v;
    check L15() else D8();
  D8():
    deopt 20 [u3, r9, v];
  L15():
    v1 = force? v;
    checkMissing(v1);
    match = ldf match in base;
    r15 = dyn match(u10, v1, 0, NULL);
    check L16() else D9();
  D9():
    deopt 25 [u3, r9, r15];
  L16():
    goto L1(u3, r9, r15);
  }
}