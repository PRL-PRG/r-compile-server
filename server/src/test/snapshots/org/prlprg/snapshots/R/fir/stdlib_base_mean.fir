fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg mean:cls, reg x:*, reg x1:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg xm:*, reg xm1:V, reg mean1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r10:V, reg c1:cls, reg r11:V |
    mkenv;
    r = clos `inner-103057629`;
    st mean = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    mean = ldf mean;
    check L5() else D1();
  L2():
    r3 = `:`(0.0, 10.0);
    c = ldf c in base;
    r4 = dyn c(r3, 50.0);
    check L4() else D0();
  L3():
    r1 = dyn base(<lang `:`(0.0, 10.0)>, 50.0);
    goto L0(r1);
  D0():
    deopt 11 [r4];
  D1():
    deopt 14 [];
  L4():
    goto L0(r4);
  L5():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r6 = dyn mean(p);
    check L6() else D2();
  D2():
    deopt 16 [r6];
  L6():
    st xm = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L1(r8):
    popenv;
    return r8;
  L7():
    xm = ld xm;
    check L9() else D3();
  L8():
    r7 = dyn base1(<sym xm>, <lang mean(x, trim=0.1)>);
    goto L1(r7);
  D3():
    deopt 20 [xm];
  L9():
    xm1 = force? xm;
    checkMissing(xm1);
    mean1 = ldf mean;
    check L10() else D4();
  D4():
    deopt 23 [];
  L10():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r10 = dyn mean1[, trim](p1, 0.1);
    check L11() else D5();
  D5():
    deopt 27 [r10];
  L11():
    c1 = ldf c in base;
    r11 = dyn c1(xm1, r10);
    check L12() else D6();
  D6():
    deopt 29 [r11];
  L12():
    goto L1(r11);
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("mean");
    goto L0(r2);
  L2():
    r = dyn base("mean");
    goto L0(r);
  }
}