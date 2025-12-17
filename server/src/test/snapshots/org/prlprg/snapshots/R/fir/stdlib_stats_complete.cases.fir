fun main() {
  () -+> V { reg r:cls, reg airquality:*, reg airquality1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg airquality4:*, reg airquality5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r2:V, reg stopifnot:cls, reg complete_cases:cls, reg y:*, reg y1:V, reg p:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg r9:V, reg y2:*, reg y3:V, reg is_na:cls, reg r10:V, reg r11:V, reg p1:p(V +), reg r13:V, reg complete_cases1:cls, reg x:*, reg x1:V, reg p2:p(V +), reg y4:*, reg y5:V, reg p3:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg ok:*, reg ok1:V, reg r19:V, reg sum:cls, reg r20:V, reg x2:*, reg x3:V, reg c2:L, reg x5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok2:*, reg ok3:V, reg __2:cls, reg r21:V, reg y6:*, reg y7:V, reg c3:L, reg y9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ok4:*, reg ok5:V, reg __3:cls, reg r22:V |
    mkenv;
    r = clos inner1246119658;
    st `complete.cases` = r;
    airquality = ld airquality;
    check L5() else D0();
  D0():
    deopt 3 [airquality];
  L5():
    airquality1 = force? airquality;
    checkMissing(airquality1);
    c = `is.object`(airquality1);
    if c then L6() else L7();
  L0(dx1):
    st x = dx1;
    airquality4 = ld airquality;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[", airquality1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7();
  L7():
    __ = ldf `[` in base;
    r1 = dyn __(airquality1, <missing>, -1.0);
    goto L0(r1);
  D1():
    deopt 11 [airquality4];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    airquality5 = force? airquality4;
    checkMissing(airquality5);
    c1 = `is.object`(airquality5);
    if c1 then L10() else L11();
  L1(dx3):
    st y = dx3;
    stopifnot = ldf stopifnot;
    check L13() else D2();
  L10():
    dr2 = tryDispatchBuiltin.1("[", airquality5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11();
  L11():
    __1 = ldf `[` in base;
    r2 = dyn __1(airquality5, <missing>, 1.0);
    goto L1(r2);
  D2():
    deopt 19 [];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L13():
    p1 = prom<V +>{
      complete_cases = ldf `complete.cases`;
      p = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r4 = dyn complete_cases(p);
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8, r9):
      r11 = `!=`(r8, r9);
      return r11;
    L1():
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      is_na = ldf `is.na` in base;
      r10 = dyn is_na(y3);
      goto L0(r4, r10);
    L2():
      r7 = dyn base(<sym y>);
      goto L0(r4, r7);
    };
    r13 = dyn stopifnot(p1);
    check L14() else D3();
  D3():
    deopt 21 [r13];
  L14():
    complete_cases1 = ldf `complete.cases`;
    check L15() else D4();
  D4():
    deopt 23 [];
  L15():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r16 = dyn complete_cases1(p2, p3);
    check L16() else D5();
  D5():
    deopt 26 [r16];
  L16():
    st ok = r16;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2():
    x2 = ld x;
    check L21() else D8();
  L17():
    ok = ld ok;
    check L19() else D6();
  L18():
    r17 = dyn base1(<lang `!`(ok)>);
    goto L2();
  D6():
    deopt 30 [ok];
  D8():
    deopt 35 [x2];
  L19():
    ok1 = force? ok;
    checkMissing(ok1);
    r19 = `!`(ok1);
    sum = ldf sum in base;
    r20 = dyn sum(r19);
    check L20() else D7();
  L21():
    x3 = force? x2;
    checkMissing(x3);
    c2 = `is.object`(x3);
    if c2 then L22() else L23(x3);
  D7():
    deopt 34 [r20];
  L3(dx5):
    st x = dx5;
    y6 = ld y;
    check L26() else D10();
  L20():
    goto L2();
  L22():
    dr4 = tryDispatchBuiltin.1("[", x3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(x5):
    ok2 = ld ok;
    check L25() else D9();
  D9():
    deopt 37 [x5, ok2];
  D10():
    deopt 43 [y6];
  L24():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L25():
    ok3 = force? ok2;
    __2 = ldf `[` in base;
    r21 = dyn __2(x3, ok3, <missing>);
    goto L3(r21);
  L26():
    y7 = force? y6;
    checkMissing(y7);
    c3 = `is.object`(y7);
    if c3 then L27() else L28(y7);
  L4(dx7):
    st y = dx7;
    invisible.0();
    popenv;
    return dx7;
  L27():
    dr6 = tryDispatchBuiltin.1("[", y7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L29() else L28(dr6);
  L28(y9):
    ok4 = ld ok;
    check L30() else D11();
  D11():
    deopt 45 [y9, ok4];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L30():
    ok5 = force? ok4;
    __3 = ldf `[` in base;
    r22 = dyn __3(y9, ok5);
    goto L4(r22);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _External:cls, reg C_compcases:*, reg C_compcases1:V, reg p:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st `...` = ddd;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _External = ldf `.External`;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_compcases>, <sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      C_compcases = ld C_compcases;
      C_compcases1 = force? C_compcases;
      checkMissing(C_compcases1);
      return C_compcases1;
    };
    ddd1 = ld `...`;
    r3 = dyn _External[, `...`](p, ddd1);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    goto L0(r3);
  }
}