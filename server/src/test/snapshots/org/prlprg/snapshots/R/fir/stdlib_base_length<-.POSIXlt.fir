fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.POSIXlt` = r;
    st length = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg length__:*, reg length__1:V, reg p1:p(V +), reg value1:*, reg value2:V, reg p2:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r9:V, reg l:*, reg class__:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg attr:cls, reg r13:V, reg l1:*, reg attr__:cls, reg r14:V, reg isTRUE:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x7:*, reg x8:V, reg attr1:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg c:L, reg r20:L, reg l2:*, reg attr__1:cls, reg r21:V, reg r22:*, reg r23:V |
    mkenv;
    st x = x;
    st value = value;
    lapply = ldf lapply;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      length__ = ld `length<-`;
      length__1 = force? length__;
      checkMissing(length__1);
      return length__1;
    };
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r6 = dyn lapply(p, p1, p2);
    check L5() else D1();
  D1():
    deopt 5 [r6];
  L5():
    st r = r6;
    sym1 = ldf oldClass;
    base1 = ldf oldClass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L0(r8):
    l = ld r;
    class__ = ldf `class<-`;
    check L10() else D4();
  L6():
    x3 = ld x;
    check L8() else D2();
  L7():
    r7 = dyn base1(<sym x>);
    goto L0(r7);
  D2():
    deopt 9 [x3];
  D4():
    deopt 14 [r8, l, r8];
  L8():
    x4 = force? x3;
    checkMissing(x4);
    oldClass = ldf oldClass in base;
    r9 = dyn oldClass(x4);
    check L9() else D3();
  L10():
    r10 = dyn class__(l, NULL, r8);
    check L11() else D5();
  D3():
    deopt 12 [r9];
  D5():
    deopt 16 [r8, r10];
  L9():
    goto L0(r9);
  L11():
    st r = r10;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L1(r12):
    l1 = ld r;
    attr__ = ldf `attr<-`;
    check L16() else D8();
  L12():
    x5 = ld x;
    check L14() else D6();
  L13():
    r11 = dyn base2(<sym x>, "tzone");
    goto L1(r11);
  D6():
    deopt 20 [x5];
  D8():
    deopt 26 [r12, l1, r12];
  L14():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r13 = dyn attr(x6, "tzone");
    check L15() else D7();
  L16():
    r14 = dyn attr__(l1, NULL, "tzone", r12);
    check L17() else D9();
  D7():
    deopt 24 [r13];
  D9():
    deopt 29 [r12, r14];
  L15():
    goto L1(r13);
  L17():
    st r = r14;
    isTRUE = ldf isTRUE;
    check L18() else D10();
  D10():
    deopt 32 [];
  L18():
    p3 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      attr1 = ldf attr in base;
      r17 = dyn attr1(x8, "balanced");
      goto L0(r17);
    L2():
      r15 = dyn base3(<sym x>, "balanced");
      goto L0(r15);
    };
    r19 = dyn isTRUE(p3);
    check L19() else D11();
  D11():
    deopt 34 [r19];
  L19():
    c = `as.logical`(r19);
    if c then L20() else L2();
  L2():
    goto L3(NA_LGL);
  L3(r20):
    l2 = ld r;
    attr__1 = ldf `attr<-`;
    check L22() else D12();
  L20():
    goto L3(TRUE);
  D12():
    deopt 40 [r20, l2, r20];
  L22():
    r21 = dyn attr__1(l2, NULL, "balanced", r20);
    check L23() else D13();
  D13():
    deopt 43 [r20, r21];
  L23():
    st r = r21;
    r22 = ld r;
    check L24() else D14();
  D14():
    deopt 45 [r22];
  L24():
    r23 = force? r22;
    checkMissing(r23);
    popenv;
    return r23;
  }
}