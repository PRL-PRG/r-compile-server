fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg princomp:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg screeplot:cls, reg pc_cr:*, reg pc_cr1:V, reg p2:p(V +), reg r8:V, reg princomp1:cls, reg Harman74_cor:*, reg Harman74_cor1:V, reg p3:p(V +), reg r10:V, reg screeplot1:cls, reg fit:*, reg fit1:V, reg p4:p(V +), reg r12:V, reg screeplot2:cls, reg fit2:*, reg fit3:V, reg p5:p(V +), reg r14:V |
    mkenv;
    r = clos inner2044426018;
    st screeplot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    princomp = ldf princomp;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      USArrests = ld USArrests;
      USArrests1 = force? USArrests;
      checkMissing(USArrests1);
      return USArrests1;
    };
    r6 = dyn princomp[, cor](p1, TRUE);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r6];
  L4():
    goto L0();
  L6():
    st `pc.cr` = r6;
    screeplot = ldf screeplot;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p2 = prom<V +>{
      pc_cr = ld `pc.cr`;
      pc_cr1 = force? pc_cr;
      checkMissing(pc_cr1);
      return pc_cr1;
    };
    r8 = dyn screeplot(p2);
    check L8() else D5();
  D5():
    deopt 18 [r8];
  L8():
    princomp1 = ldf princomp;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p3 = prom<V +>{
      Harman74_cor = ld `Harman74.cor`;
      Harman74_cor1 = force? Harman74_cor;
      checkMissing(Harman74_cor1);
      return Harman74_cor1;
    };
    r10 = dyn princomp1[covmat](p3);
    check L10() else D7();
  D7():
    deopt 23 [r10];
  L10():
    st fit = r10;
    screeplot1 = ldf screeplot;
    check L11() else D8();
  D8():
    deopt 26 [];
  L11():
    p4 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r12 = dyn screeplot1(p4);
    check L12() else D9();
  D9():
    deopt 28 [r12];
  L12():
    screeplot2 = ldf screeplot;
    check L13() else D10();
  D10():
    deopt 30 [];
  L13():
    p5 = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    r14 = dyn screeplot2[, npcs, type](p5, 24.0, "lines");
    check L14() else D11();
  D11():
    deopt 36 [r14];
  L14():
    popenv;
    return r14;
  }
}
fun inner2044426018(x, `...`) {
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
    r2 = dyn UseMethod("screeplot");
    goto L0(r2);
  L2():
    r = dyn base("screeplot");
    goto L0(r);
  }
}