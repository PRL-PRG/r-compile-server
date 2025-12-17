fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4006344421;
    st getLoadActions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4006344421(where) {
  (reg where:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _actionMetaName:cls, reg r4:V, reg exists:cls, reg actionListName:*, reg actionListName1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r7:V, reg r8:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg list:cls, reg r11:V, reg get:cls, reg actionListName2:*, reg actionListName3:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg actions:*, reg actions1:V, reg length:cls, reg r19:V, reg c1:L, reg sapply:cls, reg actions2:*, reg actions3:V, reg p6:p(V +), reg r21:cls, reg p7:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg allExists:*, reg allExists1:V, reg all:cls, reg r26:V, reg r27:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg actions4:*, reg actions5:V, reg c3:L, reg actions7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg allExists2:*, reg allExists3:V, reg r28:V, reg __:cls, reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg actions8:*, reg actions9:V, reg c4:L, reg actions11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg allExists4:*, reg allExists5:V, reg __1:cls, reg r36:V, reg lapply:cls, reg actions12:*, reg actions13:V, reg p11:p(V +), reg r38:cls, reg p12:p(V +), reg r40:V, reg actions14:*, reg actions15:V, reg l:*, reg names__:cls, reg r41:V, reg allFuns:*, reg allFuns1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg list1:cls, reg r44:V |
    mkenv;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
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
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    _actionMetaName = ldf `.actionMetaName`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r4 = dyn _actionMetaName("");
    check L13() else D1();
  D1():
    deopt 3 [r4];
  L13():
    st actionListName = r4;
    exists = ldf exists;
    check L14() else D2();
  D2():
    deopt 6 [];
  L14():
    p2 = prom<V +>{
      actionListName = ld actionListName;
      actionListName1 = force? actionListName;
      checkMissing(actionListName1);
      return actionListName1;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r7 = dyn exists[, envir, inherits](p2, p3, FALSE);
    check L15() else D3();
  D3():
    deopt 12 [r7];
  L15():
    r8 = `!`(r7);
    c = `as.logical`(r8);
    if c then L16() else L2();
  L2():
    get = ldf get;
    check L22() else D5();
  L16():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  D5():
    deopt 22 [];
  L3(r10):
    popenv;
    return r10;
  L17():
    list = ldf list in base;
    r11 = dyn list();
    check L19() else D4();
  L18():
    r9 = dyn base();
    goto L3(r9);
  L22():
    p4 = prom<V +>{
      actionListName2 = ld actionListName;
      actionListName3 = force? actionListName2;
      checkMissing(actionListName3);
      return actionListName3;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r16 = dyn get[, envir](p4, p5);
    check L23() else D6();
  D4():
    deopt 17 [r11];
  D6():
    deopt 26 [r16];
  L19():
    goto L3(r11);
  L23():
    st actions = r16;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L5(r18):
    c1 = `as.logical`(r18);
    if c1 then L28() else L6();
  L24():
    actions = ld actions;
    check L26() else D7();
  L25():
    r17 = dyn base1(<sym actions>);
    goto L5(r17);
  D7():
    deopt 30 [actions];
  L6():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L26():
    actions1 = force? actions;
    checkMissing(actions1);
    length = ldf length in base;
    r19 = dyn length(actions1);
    check L27() else D8();
  L28():
    sapply = ldf sapply;
    check L29() else D9();
  D8():
    deopt 33 [r19];
  D9():
    deopt 35 [];
  L11(r43):
    popenv;
    return r43;
  L27():
    goto L5(r19);
  L29():
    p6 = prom<V +>{
      actions2 = ld actions;
      actions3 = force? actions2;
      checkMissing(actions3);
      return actions3;
    };
    p7 = prom<V +>{
      r21 = clos inner2203017188;
      return r21;
    };
    r23 = dyn sapply(p6, p7);
    check L30() else D10();
  L51():
    list1 = ldf list in base;
    r44 = dyn list1();
    check L53() else D23();
  L52():
    r42 = dyn base3();
    goto L11(r42);
  D10():
    deopt 38 [r23];
  D23():
    deopt 79 [r44];
  L30():
    st allExists = r23;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L53():
    goto L11(r44);
  L7(r25):
    r27 = `!`(r25);
    c2 = `as.logical`(r27);
    if c2 then L35() else L8();
  L31():
    allExists = ld allExists;
    check L33() else D11();
  L32():
    r24 = dyn base2(<sym allExists>);
    goto L7(r24);
  D11():
    deopt 42 [allExists];
  L8():
    goto L10();
  L10():
    lapply = ldf lapply;
    check L44() else D17();
  L33():
    allExists1 = force? allExists;
    checkMissing(allExists1);
    all = ldf all in base;
    r26 = dyn all(allExists1);
    check L34() else D12();
  L35():
    warning = ldf warning;
    check L36() else D13();
  D12():
    deopt 45 [r26];
  D13():
    deopt 48 [];
  D17():
    deopt 62 [];
  L34():
    goto L7(r26);
  L36():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          actions4 = ld actions;
          actions5 = force? actions4;
          checkMissing(actions5);
          c3 = `is.object`(actions5);
          if c3 then L1() else L2(actions5);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", actions5);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(actions7):
          allExists2 = ld allExists;
          allExists3 = force? allExists2;
          checkMissing(allExists3);
          r28 = `!`(allExists3);
          __ = ldf `[` in base;
          r29 = dyn __(actions7, r28);
          goto L0(r29);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r31 = dyn paste[, collapse](p8, ", ");
        return r31;
      };
      r33 = dyn gettextf("some actions are missing: %s", p9);
      return r33;
    };
    r35 = dyn warning[, domain](p10, NA_LGL);
    check L37() else D14();
  L44():
    p11 = prom<V +>{
      actions12 = ld actions;
      actions13 = force? actions12;
      checkMissing(actions13);
      return actions13;
    };
    p12 = prom<V +>{
      r38 = clos inner2203017188;
      return r38;
    };
    r40 = dyn lapply(p11, p12);
    check L45() else D18();
  D14():
    deopt 52 [r35];
  D18():
    deopt 65 [r40];
  L37():
    actions8 = ld actions;
    check L38() else D15();
  L45():
    st allFuns = r40;
    actions14 = ld actions;
    check L46() else D19();
  D15():
    deopt 53 [actions8];
  D19():
    deopt 67 [actions14];
  L38():
    actions9 = force? actions8;
    checkMissing(actions9);
    c4 = `is.object`(actions9);
    if c4 then L39() else L40(actions9);
  L46():
    actions15 = force? actions14;
    checkMissing(actions15);
    l = ld allFuns;
    names__ = ldf `names<-`;
    check L47() else D20();
  D20():
    deopt 70 [actions15, l, actions15];
  L9(dx3):
    st actions = dx3;
    goto L10();
  L39():
    dr2 = tryDispatchBuiltin.1("[", actions9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(actions11):
    allExists4 = ld allExists;
    check L42() else D16();
  L47():
    r41 = dyn names__(l, NULL, actions15);
    check L48() else D21();
  D16():
    deopt 55 [actions11, allExists4];
  D21():
    deopt 72 [actions15, r41];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L42():
    allExists5 = force? allExists4;
    __1 = ldf `[` in base;
    r36 = dyn __1(actions11, allExists5);
    goto L9(r36);
  L48():
    st allFuns = r41;
    allFuns = ld allFuns;
    check L49() else D22();
  D22():
    deopt 74 [allFuns];
  L49():
    allFuns1 = force? allFuns;
    checkMissing(allFuns1);
    popenv;
    return allFuns1;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg exists:cls, reg _actionMetaName:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg where:*, reg where1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st what = what;
    exists = ldf exists;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _actionMetaName = ldf `.actionMetaName`;
      p = prom<V +>{
        what1 = ld what;
        what2 = force? what1;
        checkMissing(what2);
        return what2;
      };
      r1 = dyn _actionMetaName(p);
      return r1;
    };
    p2 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r4 = dyn exists[, envir, inherits](p1, p2, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}