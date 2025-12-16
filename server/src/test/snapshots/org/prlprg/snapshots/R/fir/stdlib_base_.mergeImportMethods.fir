fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1361238678`;
    st `.mergeImportMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1361238678`(impenv, expenv, metaname) {
  (reg impenv:*, reg expenv:*, reg metaname:*) -+> V { var impenv:*, var expenv:*, var metaname:*, reg impenv1:*, reg impenv2:V, reg c:L, reg impenv4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg metaname1:*, reg metaname2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg impMethods:*, reg impMethods1:V, reg c1:V, reg r3:V, reg c2:L, reg ___:cls, reg r4:V, reg r5:cls, reg impMethods2:*, reg impMethods3:V, reg p:p(V +), reg expenv1:*, reg expenv2:V, reg c3:L, reg expenv4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg metaname3:*, reg metaname4:V, reg __1:cls, reg r7:V, reg p1:p(V +), reg expenv5:*, reg expenv6:V, reg p2:p(V +), reg metaname5:*, reg metaname6:V, reg p3:p(V +), reg r11:V, reg l:*, reg c4:L, reg r13:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r15:V, reg dx5:V, reg metaname7:*, reg metaname8:V, reg ____:cls, reg r16:V, reg impMethods4:*, reg impMethods5:V |
    mkenv;
    st impenv = impenv;
    st expenv = expenv;
    st metaname = metaname;
    impenv1 = ld impenv;
    check L5() else D0();
  D0():
    deopt 0 [impenv1];
  L5():
    impenv2 = force? impenv1;
    checkMissing(impenv2);
    c = `is.object`(impenv2);
    if c then L6() else L7(impenv2);
  L0(dx1):
    st impMethods = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L6():
    dr = tryDispatchBuiltin.1("[[", impenv2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(impenv4):
    metaname1 = ld metaname;
    check L9() else D1();
  D1():
    deopt 2 [impenv4, metaname1];
  L1(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L13() else L2();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    metaname2 = force? metaname1;
    __ = ldf `[[` in base;
    r = dyn __(impenv4, metaname2);
    goto L0(r);
  L10():
    impMethods = ld impMethods;
    check L12() else D2();
  L11():
    r1 = dyn base(<sym impMethods>);
    goto L1(r1);
  D2():
    deopt 7 [impMethods];
  L2():
    goto L4();
  L4():
    impMethods4 = ld impMethods;
    check L22() else D7();
  L12():
    impMethods1 = force? impMethods;
    checkMissing(impMethods1);
    c1 = `==`(impMethods1, NULL);
    goto L1(c1);
  L13():
    ___ = ldf `:::`;
    check L14() else D3();
  D3():
    deopt 12 [];
  D7():
    deopt 30 [impMethods4];
  L14():
    r4 = dyn ___("methods", ".mergeMethodsTable2");
    check L15() else D4();
  L22():
    impMethods5 = force? impMethods4;
    checkMissing(impMethods5);
    popenv;
    return impMethods5;
  D4():
    deopt 15 [r4];
  L15():
    checkFun.0(r4);
    r5 = r4 as cls;
    p = prom<V +>{
      impMethods2 = ld impMethods;
      impMethods3 = force? impMethods2;
      checkMissing(impMethods3);
      return impMethods3;
    };
    p1 = prom<V +>{
      expenv1 = ld expenv;
      expenv2 = force? expenv1;
      checkMissing(expenv2);
      c3 = `is.object`(expenv2);
      if c3 then L1() else L2(expenv2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", expenv2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(expenv4):
      metaname3 = ld metaname;
      metaname4 = force? metaname3;
      __1 = ldf `[[` in base;
      r7 = dyn __1(expenv4, metaname4);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      expenv5 = ld expenv;
      expenv6 = force? expenv5;
      checkMissing(expenv6);
      return expenv6;
    };
    p3 = prom<V +>{
      metaname5 = ld metaname;
      metaname6 = force? metaname5;
      checkMissing(metaname6);
      return metaname6;
    };
    r11 = dyn r5[, newtable, , ](p, p1, p2, p3);
    check L16() else D5();
  D5():
    deopt 22 [r11];
  L16():
    l = ld impenv;
    c4 = `is.object`(l);
    if c4 then L17() else L18(r11, l);
  L3(r15, dx5):
    st impenv = dx5;
    goto L4();
  L17():
    dr4 = tryDispatchBuiltin.0("[[<-", l, r11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(r11, dr4);
  L18(r13, l2):
    metaname7 = ld metaname;
    check L20() else D6();
  D6():
    deopt 24 [r13, l2, r11, metaname7];
  L19():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(r11, dx4);
  L20():
    metaname8 = force? metaname7;
    ____ = ldf `[[<-` in base;
    r16 = dyn ____(l2, r11, metaname8);
    goto L3(r13, r16);
  }
}