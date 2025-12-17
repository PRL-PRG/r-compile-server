fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1927007700;
    st setLoadAction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1927007700(action, aname, where) {
  (reg action:*, reg aname:*, reg where:*) -+> V { var action:*, var aname:*, reg aname_isMissing:L, reg aname_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _assignActionListNames:cls, reg where1:*, reg where2:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg aname1:*, reg aname2:V, reg nzchar:cls, reg r8:V, reg r9:V, reg c:L, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg currentAnames:*, reg currentAnames1:V, reg length:cls, reg r12:V, reg r13:V, reg p3:p(V +), reg r15:V, reg _assignActions:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg action1:*, reg action2:V, reg list:cls, reg r19:V, reg p4:p(V +), reg aname3:*, reg aname4:V, reg p5:p(V +), reg where3:*, reg where4:V, reg p6:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg aname5:*, reg aname6:V, reg currentAnames2:*, reg currentAnames3:V, reg match:cls, reg r28:V, reg is_na:cls, reg r29:V, reg c1:L, reg _actionMetaName:cls, reg r30:V, reg assign:cls, reg actionListName:*, reg actionListName1:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg currentAnames4:*, reg currentAnames5:V, reg aname7:*, reg aname8:V, reg c2:cls, reg r34:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r37:V |
    mkenv;
    st action = action;
    aname_isMissing = missing.0(aname);
    if aname_isMissing then L0("") else L0(aname);
  L0(aname_orDefault):
    st aname = aname_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    _assignActionListNames = ldf `.assignActionListNames`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r5 = dyn _assignActionListNames(p2);
    check L10() else D1();
  D1():
    deopt 3 [r5];
  L10():
    st currentAnames = r5;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L3(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L15() else L4();
  L11():
    aname1 = ld aname;
    check L13() else D2();
  L12():
    r6 = dyn base(<sym aname>);
    goto L3(r6);
  D2():
    deopt 7 [aname1];
  L4():
    goto L5();
  L5():
    _assignActions = ldf `.assignActions`;
    check L19() else D6();
  L13():
    aname2 = force? aname1;
    checkMissing(aname2);
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(aname2);
    check L14() else D3();
  L15():
    paste0 = ldf paste0;
    check L16() else D4();
  D3():
    deopt 10 [r8];
  D4():
    deopt 13 [];
  D6():
    deopt 21 [];
  L14():
    goto L3(r8);
  L16():
    p3 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      r13 = `+`(r11, 1.0);
      return r13;
    L1():
      currentAnames = ld currentAnames;
      currentAnames1 = force? currentAnames;
      checkMissing(currentAnames1);
      length = ldf length in base;
      r12 = dyn length(currentAnames1);
      goto L0(r12);
    L2():
      r10 = dyn base1(<sym currentAnames>);
      goto L0(r10);
    };
    r15 = dyn paste0(".", p3);
    check L17() else D5();
  L19():
    p4 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      action1 = ld action;
      action2 = force? action1;
      checkMissing(action2);
      list = ldf list in base;
      r19 = dyn list(action2);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym action>);
      goto L0(r17);
    };
    p5 = prom<V +>{
      aname3 = ld aname;
      aname4 = force? aname3;
      checkMissing(aname4);
      return aname4;
    };
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r23 = dyn _assignActions(p4, p5, p6);
    check L20() else D7();
  D5():
    deopt 16 [r15];
  D7():
    deopt 25 [r23];
  L17():
    st aname = r15;
    goto L5();
  L20():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L6(r25):
    c1 = `as.logical`(r25);
    if c1 then L29() else L8();
  L21():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L22():
    r24 = dyn base3(<lang match(aname, currentAnames)>);
    goto L6(r24);
  L7(r27):
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(r27);
    check L28() else D11();
  L8():
    invisible.0();
    popenv;
    return NULL;
  L23():
    aname5 = ld aname;
    check L25() else D8();
  L24():
    r26 = dyn base4(<sym aname>, <sym currentAnames>);
    goto L7(r26);
  L29():
    _actionMetaName = ldf `.actionMetaName`;
    check L30() else D12();
  D8():
    deopt 30 [aname5];
  D11():
    deopt 39 [r29];
  D12():
    deopt 41 [];
  L25():
    aname6 = force? aname5;
    checkMissing(aname6);
    currentAnames2 = ld currentAnames;
    check L26() else D9();
  L28():
    goto L6(r29);
  L30():
    r30 = dyn _actionMetaName("");
    check L31() else D13();
  D9():
    deopt 32 [currentAnames2];
  D13():
    deopt 43 [r30];
  L26():
    currentAnames3 = force? currentAnames2;
    checkMissing(currentAnames3);
    match = ldf match in base;
    r28 = dyn match(aname6, currentAnames3, NA_INT, NULL);
    check L27() else D10();
  L31():
    st actionListName = r30;
    assign = ldf assign;
    check L32() else D14();
  D10():
    deopt 37 [r28];
  D14():
    deopt 46 [];
  L27():
    goto L7(r28);
  L32():
    p7 = prom<V +>{
      actionListName = ld actionListName;
      actionListName1 = force? actionListName;
      checkMissing(actionListName1);
      return actionListName1;
    };
    p8 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      currentAnames4 = ld currentAnames;
      currentAnames5 = force? currentAnames4;
      checkMissing(currentAnames5);
      aname7 = ld aname;
      aname8 = force? aname7;
      checkMissing(aname8);
      c2 = ldf c in base;
      r34 = dyn c2(currentAnames5, aname8);
      goto L0(r34);
    L2():
      r32 = dyn base5(<sym currentAnames>, <sym aname>);
      goto L0(r32);
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r37 = dyn assign[, , envir](p7, p8, p9);
    check L33() else D15();
  D15():
    deopt 51 [r37];
  L33():
    popenv;
    return r37;
  }
}