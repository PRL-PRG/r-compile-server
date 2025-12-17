fun main() {
  () -+> V { reg r:cls, reg summary:cls, reg attenu:*, reg attenu1:V, reg p:p(V +), reg r2:V, reg summary1:cls, reg attenu2:*, reg attenu3:V, reg c:L, reg attenu5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg attenu6:*, reg attenu7:V, reg c1:L, reg attenu9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg unclass:cls, reg r9:V, reg r10:V, reg summary2:cls, reg lst:*, reg lst1:V, reg p2:p(V +), reg r12:V, reg summary3:cls, reg as_factor:cls, reg lst2:*, reg lst3:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V |
    mkenv;
    r = clos inner64320599;
    st summary = r;
    summary = ldf summary;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      attenu = ld attenu;
      attenu1 = force? attenu;
      checkMissing(attenu1);
      return attenu1;
    };
    r2 = dyn summary[, digits](p, 4.0);
    check L2() else D1();
  D1():
    deopt 8 [r2];
  L2():
    summary1 = ldf summary;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p1 = prom<V +>{
      attenu2 = ld attenu;
      attenu3 = force? attenu2;
      checkMissing(attenu3);
      c = `is.object`(attenu3);
      if c then L1() else L2(attenu3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", attenu3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(attenu5):
      r3 = `$`(attenu5, <sym station>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn summary1[, maxsum](p1, 20.0);
    check L4() else D3();
  D3():
    deopt 14 [r5];
  L4():
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r7):
    r10 = `>`(r7, 20.0);
    st lst = r10;
    summary2 = ldf summary;
    check L13() else D6();
  L5():
    attenu6 = ld attenu;
    check L7() else D4();
  L6():
    r6 = dyn base(<lang `$`(attenu, station)>);
    goto L0(r6);
  D4():
    deopt 17 [attenu6];
  D6():
    deopt 26 [];
  L7():
    attenu7 = force? attenu6;
    checkMissing(attenu7);
    c1 = `is.object`(attenu7);
    if c1 then L9() else L10(attenu7);
  L13():
    p2 = prom<V +>{
      lst = ld lst;
      lst1 = force? lst;
      checkMissing(lst1);
      return lst1;
    };
    r12 = dyn summary2(p2);
    check L14() else D7();
  D7():
    deopt 28 [r12];
  L8(dx3):
    unclass = ldf unclass in base;
    r9 = dyn unclass(dx3);
    check L12() else D5();
  L9():
    dr2 = tryDispatchBuiltin.1("$", attenu7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(dr2);
  L10(attenu9):
    r8 = `$`(attenu9, <sym station>);
    goto L8(r8);
  L14():
    summary3 = ldf summary;
    check L15() else D8();
  D5():
    deopt 21 [r9];
  D8():
    deopt 30 [];
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L12():
    goto L0(r9);
  L15():
    p4 = prom<V +>{
      as_factor = ldf `as.factor`;
      p3 = prom<V +>{
        lst2 = ld lst;
        lst3 = force? lst2;
        checkMissing(lst3);
        return lst3;
      };
      r14 = dyn as_factor(p3);
      return r14;
    };
    r16 = dyn summary3(p4);
    check L16() else D9();
  D9():
    deopt 32 [r16];
  L16():
    popenv;
    return r16;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
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
    r2 = dyn UseMethod("summary");
    goto L0(r2);
  L2():
    r = dyn base("summary");
    goto L0(r);
  }
}