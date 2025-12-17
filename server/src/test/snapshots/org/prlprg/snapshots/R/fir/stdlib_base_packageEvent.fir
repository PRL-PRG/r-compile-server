fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner302841781;
    st packageEvent = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner302841781(pkgname, event) {
  (reg pkgname:*, reg event:*) -+> V { var pkgname:*, var event:*, reg event_isMissing:L, reg event_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg event1:*, reg event2:V, reg p1:p(V +), reg r5:V, reg strsplit:cls, reg pkgname1:*, reg pkgname2:V, reg p2:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r11:V, reg paste:cls, reg pkgname3:*, reg pkgname4:V, reg p3:p(V +), reg event3:*, reg event4:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st pkgname = pkgname;
    event_isMissing = missing.0(event);
    if event_isMissing then L0() else L1(event);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("onLoad", "attach", "detach", "onUnload");
      goto L0(r2);
    L2():
      r = dyn base("onLoad", "attach", "detach", "onUnload");
      goto L0(r);
    };
    goto L1(p);
  L1(event_orDefault):
    st event = event_orDefault;
    match_arg = ldf `match.arg`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      event1 = ld event;
      event2 = force? event1;
      checkMissing(event2);
      return event2;
    };
    r5 = dyn match_arg(p1);
    check L5() else D1();
  D1():
    deopt 3 [r5];
  L5():
    st event = r5;
    strsplit = ldf strsplit;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p2 = prom<V +>{
      pkgname1 = ld pkgname;
      pkgname2 = force? pkgname1;
      checkMissing(pkgname2);
      return pkgname2;
    };
    r7 = dyn strsplit[, , fixed](p2, "_", TRUE);
    check L7() else D3();
  D3():
    deopt 11 [r7];
  L7():
    c1 = `is.object`(r7);
    if c1 then L8() else L9(r7);
  L2(dx1):
    c2 = `is.object`(dx1);
    if c2 then L11() else L12(dx1);
  L8():
    dr = tryDispatchBuiltin.1("[[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(r9):
    __ = ldf `[[` in base;
    r10 = dyn __(r9, 1);
    goto L2(r10);
  L3(dx5):
    st pkgname = dx5;
    paste = ldf paste;
    check L14() else D4();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L11():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(dx3):
    __1 = ldf `[` in base;
    r11 = dyn __1(dx3, 1);
    goto L3(r11);
  D4():
    deopt 20 [];
  L13():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L14():
    p3 = prom<V +>{
      pkgname3 = ld pkgname;
      pkgname4 = force? pkgname3;
      checkMissing(pkgname4);
      return pkgname4;
    };
    p4 = prom<V +>{
      event3 = ld event;
      event4 = force? event3;
      checkMissing(event4);
      return event4;
    };
    r14 = dyn paste[, , , sep]("UserHook", p3, p4, "::");
    check L15() else D5();
  D5():
    deopt 26 [r14];
  L15():
    popenv;
    return r14;
  }
}