fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `cycle.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg tsp:cls, reg hasTsp:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg round:cls, reg r6:V, reg NROW:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r8:V, reg r9:V, reg m:*, reg m1:V, reg r10:V, reg r11:V, reg p3:*, reg p4:V, reg c:L, reg p6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg __1:cls, reg r13:V, reg r14:V, reg p7:*, reg p8:V, reg l:*, reg tsp__:cls, reg r15:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    tsp = ldf tsp;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      hasTsp = ldf hasTsp;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn hasTsp(p);
      return r1;
    };
    r3 = dyn tsp(p1);
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    st p = r3;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r5):
    st m = r5;
    NROW = ldf NROW;
    check L6() else D2();
  L4():
    round = ldf round in base;
    r6 = dyn round(<lang `*`(`(`(`%%`(`[`(p, 1), 1.0)), `[`(p, 3))>);
    goto L0(r6);
  L5():
    r4 = dyn base(<lang `*`(`(`(`%%`(`[`(p, 1), 1.0)), `[`(p, 3))>);
    goto L0(r4);
  D2():
    deopt 12 [1];
  L6():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn NROW(p2);
    check L7() else D3();
  D3():
    deopt 14 [1, r8];
  L7():
    r9 = `:`(1, r8);
    m = ld m;
    check L8() else D4();
  D4():
    deopt 15 [r9, m];
  L8():
    m1 = force? m;
    checkMissing(m1);
    r10 = `+`(r9, m1);
    r11 = `-`(r10, 1.0);
    p3 = ld p;
    check L9() else D5();
  D5():
    deopt 20 [p3];
  L9():
    p4 = force? p3;
    checkMissing(p4);
    c = `is.object`(p4);
    if c then L10() else L11(p4);
  L1(dx1):
    __1 = ldf `%%` in base;
    r13 = dyn __1(r11, dx1);
    check L13() else D6();
  L10():
    dr = tryDispatchBuiltin.1("[", p4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(p6):
    __ = ldf `[` in base;
    r12 = dyn __(p6, 3);
    goto L1(r12);
  D6():
    deopt 26 [r13];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    r14 = `+`(r13, 1.0);
    st x = r14;
    p7 = ld p;
    check L14() else D7();
  D7():
    deopt 30 [p7];
  L14():
    p8 = force? p7;
    checkMissing(p8);
    l = ld x;
    tsp__ = ldf `tsp<-`;
    check L15() else D8();
  D8():
    deopt 33 [p8, l, p8];
  L15():
    r15 = dyn tsp__(l, NULL, p8);
    check L16() else D9();
  D9():
    deopt 35 [p8, r15];
  L16():
    st x = r15;
    x5 = ld x;
    check L17() else D10();
  D10():
    deopt 37 [x5];
  L17():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  }
}