fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3988882539;
    st `[.factor` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3988882539(x, `...`, drop) {
  (reg x:*, reg ddd:dots, reg drop:*) -+> V { var x:*, var `...`:dots?, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg attr:cls, reg r3:V, reg l:*, reg attr__:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr1:cls, reg r7:V, reg l1:*, reg attr__1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r11:V, reg l2:*, reg class__:cls, reg r12:V, reg drop1:*, reg drop2:V, reg c:L, reg factor:cls, reg y:*, reg y1:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg levels:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r17:V, reg anyNA:cls, reg r18:V, reg c1:L, reg p2:p(V +), reg r20:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    NextMethod = ldf NextMethod;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn NextMethod("[");
    check L6() else D1();
  D1():
    deopt 3 [r];
  L6():
    st y = r;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r2):
    l = ld y;
    attr__ = ldf `attr<-`;
    check L11() else D4();
  L7():
    x1 = ld x;
    check L9() else D2();
  L8():
    r1 = dyn base(<sym x>, "contrasts");
    goto L1(r1);
  D2():
    deopt 7 [x1];
  D4():
    deopt 13 [r2, l, r2];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r3 = dyn attr(x2, "contrasts");
    check L10() else D3();
  L11():
    r4 = dyn attr__(l, NULL, "contrasts", r2);
    check L12() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 16 [r2, r4];
  L10():
    goto L1(r3);
  L12():
    st y = r4;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r6):
    l1 = ld y;
    attr__1 = ldf `attr<-`;
    check L17() else D8();
  L13():
    x3 = ld x;
    check L15() else D6();
  L14():
    r5 = dyn base1(<sym x>, "levels");
    goto L2(r5);
  D6():
    deopt 20 [x3];
  D8():
    deopt 26 [r6, l1, r6];
  L15():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r7 = dyn attr1(x4, "levels");
    check L16() else D7();
  L17():
    r8 = dyn attr__1(l1, NULL, "levels", r6);
    check L18() else D9();
  D7():
    deopt 24 [r7];
  D9():
    deopt 29 [r6, r8];
  L16():
    goto L2(r7);
  L18():
    st y = r8;
    sym2 = ldf oldClass;
    base2 = ldf oldClass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L3(r10):
    l2 = ld y;
    class__ = ldf `class<-`;
    check L23() else D12();
  L19():
    x5 = ld x;
    check L21() else D10();
  L20():
    r9 = dyn base2(<sym x>);
    goto L3(r9);
  D10():
    deopt 33 [x5];
  D12():
    deopt 38 [r10, l2, r10];
  L21():
    x6 = force? x5;
    checkMissing(x6);
    oldClass = ldf oldClass in base;
    r11 = dyn oldClass(x6);
    check L22() else D11();
  L23():
    r12 = dyn class__(l2, NULL, r10);
    check L24() else D13();
  D11():
    deopt 36 [r11];
  D13():
    deopt 40 [r10, r12];
  L22():
    goto L3(r11);
  L24():
    st y = r12;
    drop1 = ld drop;
    check L25() else D14();
  D14():
    deopt 42 [drop1];
  L25():
    drop2 = force? drop1;
    checkMissing(drop2);
    c = `as.logical`(drop2);
    if c then L26() else L4();
  L4():
    y2 = ld y;
    check L30() else D17();
  L26():
    factor = ldf factor;
    check L27() else D15();
  D15():
    deopt 45 [];
  D17():
    deopt 50 [y2];
  L27():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p2 = prom<V +>{
      sym3 = ldf anyNA;
      base3 = ldf anyNA in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r15):
      c1 = `as.logical`(r15);
      if c1 then L4() else L1();
    L2():
      levels = ldf levels;
      p1 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r17 = dyn levels(p1);
      anyNA = ldf anyNA in base;
      r18 = dyn anyNA(r17);
      goto L0(r18);
    L3():
      r14 = dyn base3(<lang levels(x)>);
      goto L0(r14);
    L1():
      return NA_LGL;
    L4():
      return NULL;
    };
    r20 = dyn factor[, exclude](p, p2);
    check L28() else D16();
  L30():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D16():
    deopt 49 [r20];
  L28():
    popenv;
    return r20;
  }
}