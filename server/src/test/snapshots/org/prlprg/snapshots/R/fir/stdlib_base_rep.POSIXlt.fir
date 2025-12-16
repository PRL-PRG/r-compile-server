fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `rep.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg unCfillPOSIXlt:cls, reg r5:V, reg lapply:cls, reg x5:*, reg x6:V, reg p:p(V +), reg rep:*, reg rep1:V, reg p1:p(V +), reg ddd1:dots?, reg r8:V, reg cl:*, reg cl1:V, reg l:*, reg class__:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg attr:cls, reg r12:V, reg l1:*, reg attr__:cls, reg r13:V, reg isTRUE:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg attr1:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg c:L, reg r19:L, reg l2:*, reg attr__1:cls, reg r20:V, reg r21:*, reg r22:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st cl = r1;
    sym1 = ldf unCfillPOSIXlt;
    base1 = ldf unCfillPOSIXlt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st x = r4;
    lapply = ldf lapply;
    check L13() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L8() else D1();
  L9():
    x3 = ld x;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  D4():
    deopt 15 [];
  L8():
    goto L0(r2);
  L11():
    x4 = force? x3;
    checkMissing(x4);
    unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
    r5 = dyn unCfillPOSIXlt(x4);
    check L12() else D3();
  L13():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p1 = prom<V +>{
      rep = ld rep;
      rep1 = force? rep;
      checkMissing(rep1);
      return rep1;
    };
    ddd1 = ld `...`;
    r8 = dyn lapply[, , `...`](p, p1, ddd1);
    check L14() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 19 [r8];
  L12():
    goto L1(r5);
  L14():
    st r = r8;
    cl = ld cl;
    check L15() else D6();
  D6():
    deopt 21 [cl];
  L15():
    cl1 = force? cl;
    checkMissing(cl1);
    l = ld r;
    class__ = ldf `class<-`;
    check L16() else D7();
  D7():
    deopt 24 [cl1, l, cl1];
  L16():
    r9 = dyn class__(l, NULL, cl1);
    check L17() else D8();
  D8():
    deopt 26 [cl1, r9];
  L17():
    st r = r9;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L2(r11):
    l1 = ld r;
    attr__ = ldf `attr<-`;
    check L22() else D11();
  L18():
    x7 = ld x;
    check L20() else D9();
  L19():
    r10 = dyn base2(<sym x>, "tzone");
    goto L2(r10);
  D9():
    deopt 30 [x7];
  D11():
    deopt 36 [r11, l1, r11];
  L20():
    x8 = force? x7;
    checkMissing(x8);
    attr = ldf attr in base;
    r12 = dyn attr(x8, "tzone");
    check L21() else D10();
  L22():
    r13 = dyn attr__(l1, NULL, "tzone", r11);
    check L23() else D12();
  D10():
    deopt 34 [r12];
  D12():
    deopt 39 [r11, r13];
  L21():
    goto L2(r12);
  L23():
    st r = r13;
    isTRUE = ldf isTRUE;
    check L24() else D13();
  D13():
    deopt 42 [];
  L24():
    p2 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr1 = ldf attr in base;
      r16 = dyn attr1(x10, "balanced");
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym x>, "balanced");
      goto L0(r14);
    };
    r18 = dyn isTRUE(p2);
    check L25() else D14();
  D14():
    deopt 44 [r18];
  L25():
    c = `as.logical`(r18);
    if c then L26() else L3();
  L3():
    goto L4(NA_LGL);
  L4(r19):
    l2 = ld r;
    attr__1 = ldf `attr<-`;
    check L28() else D15();
  L26():
    goto L4(TRUE);
  D15():
    deopt 50 [r19, l2, r19];
  L28():
    r20 = dyn attr__1(l2, NULL, "balanced", r19);
    check L29() else D16();
  D16():
    deopt 53 [r19, r20];
  L29():
    st r = r20;
    r21 = ld r;
    check L30() else D17();
  D17():
    deopt 55 [r21];
  L30():
    r22 = force? r21;
    checkMissing(r22);
    popenv;
    return r22;
  }
}