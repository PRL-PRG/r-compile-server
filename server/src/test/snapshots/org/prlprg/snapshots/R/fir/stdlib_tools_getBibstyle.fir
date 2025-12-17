fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3326159363;
    st getBibstyle = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3326159363(all) {
  (reg all:*) -+> V { var all:*, reg all_isMissing:L, reg all_orDefault:*, reg all1:*, reg all2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg environment:cls, reg bibstyle:*, reg bibstyle1:V, reg p:p(V +), reg r3:V, reg c1:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg names:cls, reg r7:V, reg environment1:cls, reg bibstyle2:*, reg bibstyle3:V, reg p1:p(V +), reg r9:V, reg c2:L, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V |
    mkenv;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    all1 = ld all;
    check L3() else D0();
  D0():
    deopt 0 [all1];
  L3():
    all2 = force? all1;
    checkMissing(all2);
    c = `as.logical`(all2);
    if c then L4() else L1();
  L1():
    environment1 = ldf environment;
    check L15() else D4();
  L4():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  D4():
    deopt 12 [];
  L2(r1):
    popenv;
    return r1;
  L5():
    environment = ldf environment;
    check L7() else D1();
  L6():
    r = dyn base(<lang `$`(environment(bibstyle), styles)>);
    goto L2(r);
  L15():
    p1 = prom<V +>{
      bibstyle2 = ld bibstyle;
      bibstyle3 = force? bibstyle2;
      checkMissing(bibstyle3);
      return bibstyle3;
    };
    r9 = dyn environment1(p1);
    check L16() else D5();
  D1():
    deopt 5 [];
  D5():
    deopt 14 [r9];
  L7():
    p = prom<V +>{
      bibstyle = ld bibstyle;
      bibstyle1 = force? bibstyle;
      checkMissing(bibstyle1);
      return bibstyle1;
    };
    r3 = dyn environment(p);
    check L8() else D2();
  L16():
    c2 = `is.object`(r9);
    if c2 then L18() else L19(r9);
  D2():
    deopt 7 [r3];
  L8():
    c1 = `is.object`(r3);
    if c1 then L10() else L11(r3);
  L17(dx3):
    popenv;
    return dx3;
  L18():
    dr2 = tryDispatchBuiltin.1("$", r9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(r11):
    r12 = `$`(r11, <sym default>);
    goto L17(r12);
  L9(dx1):
    names = ldf names in base;
    r7 = dyn names(dx1);
    check L13() else D3();
  L10():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r5):
    r6 = `$`(r5, <sym styles>);
    goto L9(r6);
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  D3():
    deopt 10 [r7];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    goto L2(r7);
  }
}