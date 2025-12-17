fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2911064710;
    st insertMethodInEmptyList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2911064710(mlist, def) {
  (reg mlist:*, reg def:*) -+> V { var mlist:*, var def:*, reg _MlistDefunct:cls, reg r:V, reg new:cls, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V, reg __1:cls, reg r4:V, reg sublist:*, reg sublist1:V, reg c:L, reg sublist3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg submethods:*, reg submethods1:V, reg c1:V, reg c2:L, reg def1:*, reg def2:V, reg l:*, reg c3:L, reg def4:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg def6:V, reg dx3:V, reg ____:cls, reg r8:V, reg Recall:cls, reg submethods2:*, reg submethods3:V, reg p1:p(V +), reg def8:*, reg def9:V, reg p2:p(V +), reg r11:V, reg l3:*, reg c4:L, reg r13:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r15:V, reg dx5:V, reg ____1:cls, reg r16:V, reg sublist4:*, reg sublist5:V, reg l6:*, reg ___:cls, reg r17:V, reg value:*, reg value1:V |
    mkenv;
    st mlist = mlist;
    st def = def;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn _MlistDefunct("insertMethodInEmptyList()");
    check L7() else D1();
  D1():
    deopt 3 [r];
  L7():
    new = ldf new;
    check L8() else D2();
  D2():
    deopt 5 [];
  L8():
    p = prom<V +>{
      __ = ldf `@` in base;
      r1 = dyn __(<sym mlist>, <sym argument>);
      return r1;
    };
    r3 = dyn new[, argument]("MethodsList", p);
    check L9() else D3();
  D3():
    deopt 9 [r3];
  L9():
    st value = r3;
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym mlist>, <sym sublist>);
    st sublist = r4;
    sublist = ld sublist;
    check L10() else D4();
  D4():
    deopt 14 [sublist];
  L10():
    sublist1 = force? sublist;
    checkMissing(sublist1);
    c = `is.object`(sublist1);
    if c then L11() else L12(sublist1);
  L0(dx1):
    st submethods = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L11():
    dr = tryDispatchBuiltin.1("[[", sublist1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(sublist3):
    __2 = ldf `[[` in base;
    r5 = dyn __2(sublist3, 1);
    goto L0(r5);
  L1(r7):
    c2 = `as.logical`(r7);
    if c2 then L17() else L2();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L14():
    submethods = ld submethods;
    check L16() else D5();
  L15():
    r6 = dyn base(<sym submethods>);
    goto L1(r6);
  D5():
    deopt 21 [submethods];
  L2():
    Recall = ldf Recall;
    check L23() else D7();
  L4():
    sublist4 = ld sublist;
    check L28() else D9();
  L16():
    submethods1 = force? submethods;
    checkMissing(submethods1);
    c1 = `==`(submethods1, NULL);
    goto L1(c1);
  L17():
    def1 = ld def;
    check L18() else D6();
  D6():
    deopt 24 [def1];
  D7():
    deopt 32 [];
  D9():
    deopt 41 [sublist4];
  L18():
    def2 = force? def1;
    checkMissing(def2);
    l = ld sublist;
    c3 = `is.object`(l);
    if c3 then L19() else L20(def2, l);
  L23():
    p1 = prom<V +>{
      submethods2 = ld submethods;
      submethods3 = force? submethods2;
      checkMissing(submethods3);
      return submethods3;
    };
    p2 = prom<V +>{
      def8 = ld def;
      def9 = force? def8;
      checkMissing(def9);
      return def9;
    };
    r11 = dyn Recall(p1, p2);
    check L24() else D8();
  L28():
    sublist5 = force? sublist4;
    checkMissing(sublist5);
    l6 = ld value;
    ___ = ldf `@<-`;
    check L29() else D10();
  D8():
    deopt 35 [r11];
  D10():
    deopt 44 [sublist5, l6, sublist5];
  L3(def6, dx3):
    st sublist = dx3;
    goto L4();
  L19():
    dr2 = tryDispatchBuiltin.0("[[<-", l, def2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(def2, dr2);
  L20(def4, l2):
    ____ = ldf `[[<-` in base;
    r8 = dyn ____(l2, def2, 1);
    goto L3(def4, r8);
  L24():
    l3 = ld sublist;
    c4 = `is.object`(l3);
    if c4 then L25() else L26(r11, l3);
  L29():
    r17 = dyn ___(l6, NULL, "allMethods", sublist5);
    check L30() else D11();
  D11():
    deopt 47 [sublist5, r17];
  L5(r15, dx5):
    st sublist = dx5;
    goto L4();
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(def2, dx2);
  L25():
    dr4 = tryDispatchBuiltin.0("[[<-", l3, r11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(r11, dr4);
  L26(r13, l5):
    ____1 = ldf `[[<-` in base;
    r16 = dyn ____1(l5, r11, 1);
    goto L5(r13, r16);
  L30():
    st value = r17;
    value = ld value;
    check L31() else D12();
  D12():
    deopt 49 [value];
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(r11, dx4);
  L31():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}