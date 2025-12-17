fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner73545244;
    st `.doLoadActions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner73545244(where, attach) {
  (reg where:*, reg attach:*) -+> V { var where:*, var attach:*, reg attach1:*, reg attach2:V, reg r:V, reg c:L, reg _actionMetaName:cls, reg r3:V, reg exists:cls, reg actionListName:*, reg actionListName1:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg list:cls, reg r10:V, reg get:cls, reg actionListName2:*, reg actionListName3:V, reg p2:p(V +), reg where3:*, reg where4:V, reg p3:p(V +), reg r15:V, reg actions:*, reg actions1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg _actionMetaName1:cls, reg what:*, reg what1:V, reg p4:p(V +), reg r17:V, reg exists1:cls, reg aname:*, reg aname1:V, reg p5:p(V +), reg where5:*, reg where6:V, reg p6:p(V +), reg r20:V, reg r21:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg what2:*, reg what3:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg get1:cls, reg aname2:*, reg aname3:V, reg p9:p(V +), reg where7:*, reg where8:V, reg p10:p(V +), reg r29:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg substitute:cls, reg r32:V, reg p11:p(V +), reg where9:*, reg where10:V, reg p12:p(V +), reg r35:V, reg is:cls, reg value:*, reg value1:V, reg p13:p(V +), reg r37:V, reg c4:L, reg deparse:cls, reg value2:*, reg value3:V, reg c5:L, reg value5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r38:V, reg p14:p(V +), reg r40:V, reg c6:L, reg i12:I, reg r42:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg __:cls, reg r43:V, reg stop:cls, reg gettextf1:cls, reg aname4:*, reg aname5:V, reg p15:p(V +), reg getPackageName:cls, reg where11:*, reg where12:V, reg p16:p(V +), reg r46:V, reg p17:p(V +), reg callString:*, reg callString1:V, reg p18:p(V +), reg value6:*, reg value7:V, reg c7:L, reg value9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r49:V, reg p19:p(V +), reg r51:V, reg p20:p(V +), reg r53:V, reg i15:I |
    mkenv;
    st where = where;
    st attach = attach;
    attach1 = ld attach;
    check L14() else D0();
  D0():
    deopt 0 [attach1];
  L14():
    attach2 = force? attach1;
    checkMissing(attach2);
    r = `!`(attach2);
    c = `as.logical`(r);
    if c then L15() else L0();
  L0():
    _actionMetaName = ldf `.actionMetaName`;
    check L18() else D1();
  L15():
    popenv;
    return NULL;
  D1():
    deopt 9 [];
  L18():
    r3 = dyn _actionMetaName("");
    check L19() else D2();
  D2():
    deopt 11 [r3];
  L19():
    st actionListName = r3;
    exists = ldf exists;
    check L20() else D3();
  D3():
    deopt 14 [];
  L20():
    p = prom<V +>{
      actionListName = ld actionListName;
      actionListName1 = force? actionListName;
      checkMissing(actionListName1);
      return actionListName1;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L21() else D4();
  D4():
    deopt 20 [r6];
  L21():
    r7 = `!`(r6);
    c1 = `as.logical`(r7);
    if c1 then L22() else L2();
  L2():
    get = ldf get;
    check L28() else D6();
  L22():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  D6():
    deopt 30 [];
  L3(r9):
    popenv;
    return r9;
  L23():
    list = ldf list in base;
    r10 = dyn list();
    check L25() else D5();
  L24():
    r8 = dyn base();
    goto L3(r8);
  L28():
    p2 = prom<V +>{
      actionListName2 = ld actionListName;
      actionListName3 = force? actionListName2;
      checkMissing(actionListName3);
      return actionListName3;
    };
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r15 = dyn get[, envir](p2, p3);
    check L29() else D7();
  D5():
    deopt 25 [r10];
  D7():
    deopt 34 [r15];
  L25():
    goto L3(r10);
  L29():
    st actions = r15;
    actions = ld actions;
    check L30() else D8();
  D8():
    deopt 36 [actions];
  L30():
    actions1 = force? actions;
    checkMissing(actions1);
    s = toForSeq(actions1);
    l = length(s);
    i = 0;
    goto L7(i);
  L7(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L6() else L13();
  L6():
    invisible.0();
    popenv;
    return i2;
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    _actionMetaName1 = ldf `.actionMetaName`;
    check L31() else D9();
  D9():
    deopt 41 [i2];
  L31():
    p4 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r17 = dyn _actionMetaName1(p4);
    check L32() else D10();
  D10():
    deopt 43 [i2, r17];
  L32():
    st aname = r17;
    exists1 = ldf exists;
    check L33() else D11();
  D11():
    deopt 46 [i2];
  L33():
    p5 = prom<V +>{
      aname = ld aname;
      aname1 = force? aname;
      checkMissing(aname1);
      return aname1;
    };
    p6 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r20 = dyn exists1[, envir, inherits](p5, p6, FALSE);
    check L34() else D12();
  D12():
    deopt 52 [i2, r20];
  L34():
    r21 = `!`(r20);
    c3 = `as.logical`(r21);
    if c3 then L35() else L8();
  L8():
    get1 = ldf get;
    check L40() else D15();
  L35():
    warning = ldf warning;
    check L36() else D13();
  D13():
    deopt 55 [i2];
  D15():
    deopt 63 [i2];
  L36():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        what2 = ld what;
        what3 = force? what2;
        checkMissing(what3);
        return what3;
      };
      r23 = dyn gettextf("missing function for load action: %s", p7);
      return r23;
    };
    r25 = dyn warning(p8);
    check L37() else D14();
  L40():
    p9 = prom<V +>{
      aname2 = ld aname;
      aname3 = force? aname2;
      checkMissing(aname3);
      return aname3;
    };
    p10 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r29 = dyn get1[, envir](p9, p10);
    check L41() else D16();
  D14():
    deopt 57 [i2, r25];
  D16():
    deopt 67 [i2, r29];
  L37():
    goto L7(i2);
  L41():
    st f = r29;
    eval = ldf eval;
    check L42() else D17();
  D17():
    deopt 70 [i2];
  L42():
    p11 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      substitute = ldf substitute in base;
      r32 = dyn substitute(<lang tryCatch(FUN(WHERE), error=function((e=), e, NULL))>, <lang list(FUN=f, WHERE=where)>);
      goto L0(r32);
    L2():
      r30 = dyn base1(<lang tryCatch(FUN(WHERE), error=function((e=), e, NULL))>, <lang list(FUN=f, WHERE=where)>);
      goto L0(r30);
    };
    p12 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r35 = dyn eval(p11, p12);
    check L43() else D18();
  D18():
    deopt 73 [i2, r35];
  L43():
    st value = r35;
    is = ldf is;
    check L44() else D19();
  D19():
    deopt 76 [i2];
  L44():
    p13 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r37 = dyn is(p13, "error");
    check L45() else D20();
  D20():
    deopt 79 [i2, r37];
  L45():
    c4 = `as.logical`(r37);
    if c4 then L46() else L10();
  L10():
    goto L12(i2);
  L12(i15):
    goto L7(i15);
  L46():
    deparse = ldf deparse;
    check L47() else D21();
  D21():
    deopt 81 [i2];
  L47():
    p14 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      c5 = `is.object`(value3);
      if c5 then L1() else L2(value3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", value3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(value5):
      r38 = `$`(value5, <sym call>);
      goto L0(r38);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r40 = dyn deparse(p14);
    check L48() else D22();
  D22():
    deopt 83 [i2, r40];
  L48():
    c6 = `is.object`(r40);
    if c6 then L49() else L50(i2, r40);
  L11(i14, dx3):
    st callString = dx3;
    stop = ldf stop;
    check L52() else D23();
  L49():
    dr2 = tryDispatchBuiltin.1("[[", r40);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(i2, dr2);
  L50(i12, r42):
    __ = ldf `[[` in base;
    r43 = dyn __(r42, 1.0);
    goto L11(i12, r43);
  D23():
    deopt 89 [i14];
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i2, dx2);
  L52():
    p20 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        aname4 = ld aname;
        aname5 = force? aname4;
        checkMissing(aname5);
        return aname5;
      };
      p17 = prom<V +>{
        getPackageName = ldf getPackageName;
        p16 = prom<V +>{
          where11 = ld where;
          where12 = force? where11;
          checkMissing(where12);
          return where12;
        };
        r46 = dyn getPackageName(p16);
        return r46;
      };
      p18 = prom<V +>{
        callString = ld callString;
        callString1 = force? callString;
        checkMissing(callString1);
        return callString1;
      };
      p19 = prom<V +>{
        value6 = ld value;
        value7 = force? value6;
        checkMissing(value7);
        c7 = `is.object`(value7);
        if c7 then L1() else L2(value7);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", value7);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(value9):
        r49 = `$`(value9, <sym message>);
        goto L0(r49);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r51 = dyn gettextf1("error in load action %s for package %s: %s: %s", p15, p17, p18, p19);
      return r51;
    };
    r53 = dyn stop(p20);
    check L53() else D24();
  D24():
    deopt 91 [i14, r53];
  L53():
    goto L12(i14);
  }
}