fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `[[.factor` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg attr:cls, reg r3:V, reg l:*, reg attr__:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr1:cls, reg r7:V, reg l1:*, reg attr__1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r11:V, reg l2:*, reg class__:cls, reg r12:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NextMethod = ldf NextMethod;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn NextMethod("[[");
    check L4() else D1();
  D1():
    deopt 3 [r];
  L4():
    st y = r;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    l = ld y;
    attr__ = ldf `attr<-`;
    check L9() else D4();
  L5():
    x1 = ld x;
    check L7() else D2();
  L6():
    r1 = dyn base(<sym x>, "contrasts");
    goto L0(r1);
  D2():
    deopt 7 [x1];
  D4():
    deopt 13 [r2, l, r2];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r3 = dyn attr(x2, "contrasts");
    check L8() else D3();
  L9():
    r4 = dyn attr__(l, NULL, "contrasts", r2);
    check L10() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 16 [r2, r4];
  L8():
    goto L0(r3);
  L10():
    st y = r4;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r6):
    l1 = ld y;
    attr__1 = ldf `attr<-`;
    check L15() else D8();
  L11():
    x3 = ld x;
    check L13() else D6();
  L12():
    r5 = dyn base1(<sym x>, "levels");
    goto L1(r5);
  D6():
    deopt 20 [x3];
  D8():
    deopt 26 [r6, l1, r6];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r7 = dyn attr1(x4, "levels");
    check L14() else D7();
  L15():
    r8 = dyn attr__1(l1, NULL, "levels", r6);
    check L16() else D9();
  D7():
    deopt 24 [r7];
  D9():
    deopt 29 [r6, r8];
  L14():
    goto L1(r7);
  L16():
    st y = r8;
    sym2 = ldf oldClass;
    base2 = ldf oldClass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2(r10):
    l2 = ld y;
    class__ = ldf `class<-`;
    check L21() else D12();
  L17():
    x5 = ld x;
    check L19() else D10();
  L18():
    r9 = dyn base2(<sym x>);
    goto L2(r9);
  D10():
    deopt 33 [x5];
  D12():
    deopt 38 [r10, l2, r10];
  L19():
    x6 = force? x5;
    checkMissing(x6);
    oldClass = ldf oldClass in base;
    r11 = dyn oldClass(x6);
    check L20() else D11();
  L21():
    r12 = dyn class__(l2, NULL, r10);
    check L22() else D13();
  D11():
    deopt 36 [r11];
  D13():
    deopt 40 [r10, r12];
  L20():
    goto L2(r11);
  L22():
    st y = r12;
    y = ld y;
    check L23() else D14();
  D14():
    deopt 42 [y];
  L23():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}