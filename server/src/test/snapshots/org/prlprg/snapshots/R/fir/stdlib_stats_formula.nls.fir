fun main() {
  () -+> V { reg r:cls, reg nls:cls, reg __:cls, reg r1:V, reg p:p(V +), reg Orange:*, reg Orange1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg formula:cls, reg fm1:*, reg fm2:V, reg p3:p(V +), reg r10:V |
    mkenv;
    r = clos inner2044426018;
    st `formula.nls` = r;
    nls = ldf nls;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym circumference>, <lang `/`(A, `(`(`+`(1.0, exp(`/`(`(`(`-`(B, age)), C)))))>);
      return r1;
    };
    p1 = prom<V +>{
      Orange = ld Orange;
      Orange1 = force? Orange;
      checkMissing(Orange1);
      return Orange1;
    };
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      list = ldf list in base;
      r6 = dyn list(160.0, 700.0, 350.0);
      goto L0(r6);
    L2():
      r4 = dyn base[A, B, C](160.0, 700.0, 350.0);
      goto L0(r4);
    };
    r8 = dyn nls[, , start](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 9 [r8];
  L1():
    st fm1 = r8;
    formula = ldf formula;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p3 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r10 = dyn formula(p3);
    check L3() else D3();
  D3():
    deopt 14 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg dx6:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L1(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L2():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    r = `$`(x4, <sym m>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5(dx5):
    checkFun.0(dx5);
    dx6 = dx5 as cls;
    r2 = dyn dx6();
    check L9() else D1();
  L6():
    dr2 = tryDispatchBuiltin.1("$", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    r1 = `$`(dx3, <sym formula>);
    goto L5(r1);
  D1():
    deopt 5 [r2];
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L9():
    popenv;
    return r2;
  }
}