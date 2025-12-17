fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.summary.ecdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg r4:V, reg x3:*, reg x4:V, reg l:*, reg attr__:cls, reg r5:V, reg l1:*, reg class__:cls, reg r6:V, reg print:cls, reg y:*, reg y1:V, reg p1:p(V +), reg ddd1:dots?, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg invisible:cls, reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "header");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "header");
      goto L0(r);
    };
    r4 = dyn cat(p);
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    x3 = ld x;
    check L3() else D2();
  D2():
    deopt 4 [x3];
  L3():
    x4 = force? x3;
    checkMissing(x4);
    st y = x4;
    l = ld y;
    attr__ = ldf `attr<-`;
    check L4() else D3();
  D3():
    deopt 10 [NULL, l, NULL];
  L4():
    r5 = dyn attr__(l, NULL, "header", NULL);
    check L5() else D4();
  D4():
    deopt 13 [NULL, r5];
  L5():
    st y = r5;
    l1 = ld y;
    class__ = ldf `class<-`;
    check L6() else D5();
  D5():
    deopt 18 ["summaryDefault", l1, "summaryDefault"];
  L6():
    r6 = dyn class__(l1, NULL, "summaryDefault");
    check L7() else D6();
  D6():
    deopt 20 ["summaryDefault", r6];
  L7():
    st y = r6;
    print = ldf print;
    check L8() else D7();
  D7():
    deopt 23 [];
  L8():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    ddd1 = ld `...`;
    r8 = dyn print[, `...`](p1, ddd1);
    check L9() else D8();
  D8():
    deopt 26 [r8];
  L9():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L0(r10):
    popenv;
    return r10;
  L10():
    x5 = ld x;
    check L12() else D9();
  L11():
    r9 = dyn base1(<sym x>);
    goto L0(r9);
  D9():
    deopt 29 [x5];
  L12():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r11 = dyn invisible(x6);
    check L13() else D10();
  D10():
    deopt 32 [r11];
  L13():
    goto L0(r11);
  }
}