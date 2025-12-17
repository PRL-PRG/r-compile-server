fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `$<-.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r3:V, reg l:*, reg class__:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr:cls, reg r7:V, reg l1:*, reg attr__:cls, reg r8:V, reg isTRUE:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg attr1:cls, reg r11:V, reg p:p(V +), reg r13:V, reg c:L, reg c2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c5:L, reg r15:V, reg value1:*, reg value2:V, reg length:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg c8:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg length1:cls, reg r22:V, reg r23:V, reg c9:L, reg c10:V, reg c12:L, reg r24:V, reg l2:*, reg attr__1:cls, reg r25:V, reg r26:*, reg r27:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    NextMethod = ldf NextMethod;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn NextMethod("$<-");
    check L8() else D1();
  D1():
    deopt 3 [r];
  L8():
    st r = r;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r2):
    l = ld r;
    class__ = ldf `class<-`;
    check L13() else D4();
  L9():
    x1 = ld x;
    check L11() else D2();
  L10():
    r1 = dyn base(<sym x>);
    goto L0(r1);
  D2():
    deopt 7 [x1];
  D4():
    deopt 12 [r2, l, r2];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r3 = dyn oldClass(x2);
    check L12() else D3();
  L13():
    r4 = dyn class__(l, NULL, r2);
    check L14() else D5();
  D3():
    deopt 10 [r3];
  D5():
    deopt 14 [r2, r4];
  L12():
    goto L0(r3);
  L14():
    st r = r4;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1(r6):
    l1 = ld r;
    attr__ = ldf `attr<-`;
    check L19() else D8();
  L15():
    x3 = ld x;
    check L17() else D6();
  L16():
    r5 = dyn base1(<sym x>, "tzone");
    goto L1(r5);
  D6():
    deopt 18 [x3];
  D8():
    deopt 24 [r6, l1, r6];
  L17():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r7 = dyn attr(x4, "tzone");
    check L18() else D7();
  L19():
    r8 = dyn attr__(l1, NULL, "tzone", r6);
    check L20() else D9();
  D7():
    deopt 22 [r7];
  D9():
    deopt 27 [r6, r8];
  L18():
    goto L1(r7);
  L20():
    st r = r8;
    isTRUE = ldf isTRUE;
    check L21() else D10();
  D10():
    deopt 30 [];
  L21():
    p = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r11 = dyn attr1(x6, "balanced");
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym x>, "balanced");
      goto L0(r9);
    };
    r13 = dyn isTRUE(p);
    check L22() else D11();
  D11():
    deopt 32 [r13];
  L22():
    c = `as.logical`(r13);
    if c then L23() else L2(c);
  L2(c2):
    c12 = `as.logical`(c2);
    if c12 then L33() else L5();
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L3(c5, r15):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L5():
    goto L6(NULL);
  L6(r24):
    l2 = ld r;
    attr__1 = ldf `attr<-`;
    check L35() else D16();
  L24():
    value1 = ld value;
    check L26() else D12();
  L25():
    r14 = dyn base3(<sym value>);
    goto L3(c, r14);
  L33():
    goto L6(NA_LGL);
  D12():
    deopt 35 [c, value1];
  D16():
    deopt 51 [r24, l2, r24];
  L4(c8, r20, r21):
    r23 = `==`(r20, r21);
    c9 = `as.logical`(r23);
    c10 = `&&`(c8, c9);
    goto L2(c10);
  L26():
    value2 = force? value1;
    checkMissing(value2);
    length = ldf length in base;
    r16 = dyn length(value2);
    check L27() else D13();
  L28():
    x7 = ld x;
    check L30() else D14();
  L29():
    r19 = dyn base4(<sym x>);
    goto L4(c5, r15, r19);
  L35():
    r25 = dyn attr__1(l2, NULL, "balanced", r24);
    check L36() else D17();
  D13():
    deopt 38 [c, r16];
  D14():
    deopt 40 [c5, r15, x7];
  D17():
    deopt 54 [r24, r25];
  L27():
    goto L3(c, r16);
  L30():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r22 = dyn length1(x8);
    check L31() else D15();
  L36():
    st r = r25;
    r26 = ld r;
    check L37() else D18();
  D15():
    deopt 43 [c5, r15, r22];
  D18():
    deopt 56 [r26];
  L31():
    goto L4(c5, r15, r22);
  L37():
    r27 = force? r26;
    checkMissing(r27);
    popenv;
    return r27;
  }
}