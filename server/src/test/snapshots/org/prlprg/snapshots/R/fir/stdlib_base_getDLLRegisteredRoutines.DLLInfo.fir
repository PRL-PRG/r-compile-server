fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1544526285;
    st `getDLLRegisteredRoutines.DLLInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1544526285(dll, addNames) {
  (reg dll:*, reg addNames:*) -+> V { var dll:*, var addNames:*, reg addNames_isMissing:L, reg addNames_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dll1:*, reg dll2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg dll3:*, reg dll4:V, reg c1:L, reg dll6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg info:*, reg info1:V, reg getRegisteredRoutines:cls, reg r13:V, reg addNames1:*, reg addNames2:V, reg c2:L, reg lapply:cls, reg els:*, reg els1:V, reg p2:p(V +), reg r15:cls, reg p3:p(V +), reg r17:V, reg l:*, reg class__:cls, reg r19:V, reg els2:*, reg els3:V |
    mkenv;
    st dll = dll;
    addNames_isMissing = missing.0(addNames);
    if addNames_isMissing then L0(TRUE) else L0(addNames);
  L0(addNames_orDefault):
    st addNames = addNames_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L12() else L2();
  L8():
    dll1 = ld dll;
    check L10() else D0();
  L9():
    r = dyn base(<sym dll>, "DLLInfo");
    goto L1(r);
  D0():
    deopt 2 [dll1];
  L2():
    goto L3();
  L3():
    dll3 = ld dll;
    check L16() else D4();
  L10():
    dll2 = force? dll1;
    checkMissing(dll2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(dll2, "DLLInfo", FALSE);
    check L11() else D1();
  L12():
    stop = ldf stop;
    check L13() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [dll3];
  L11():
    goto L1(r2);
  L13():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r4 = dyn dQuote("DLLInfo");
        return r4;
      };
      r6 = dyn gettextf("must specify DLL via a %s object. See getLoadedDLLs()", p);
      return r6;
    };
    r8 = dyn stop[, domain](p1, NA_LGL);
    check L14() else D3();
  L16():
    dll4 = force? dll3;
    checkMissing(dll4);
    c1 = `is.object`(dll4);
    if c1 then L17() else L18(dll4);
  D3():
    deopt 14 [r8];
  L4(dx1):
    st info = dx1;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    goto L3();
  L17():
    dr = tryDispatchBuiltin.1("[[", dll4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(dll6):
    __ = ldf `[[` in base;
    r10 = dyn __(dll6, "info");
    goto L4(r10);
  L5(r12):
    st els = r12;
    addNames1 = ld addNames;
    check L24() else D7();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L20():
    info = ld info;
    check L22() else D5();
  L21():
    r11 = dyn base1(<lang getRegisteredRoutines(info)>);
    goto L5(r11);
  D5():
    deopt 25 [info];
  D7():
    deopt 30 [addNames1];
  L22():
    info1 = force? info;
    checkMissing(info1);
    getRegisteredRoutines = ldf getRegisteredRoutines in base;
    r13 = dyn getRegisteredRoutines(info1);
    check L23() else D6();
  L24():
    addNames2 = force? addNames1;
    checkMissing(addNames2);
    c2 = `as.logical`(addNames2);
    if c2 then L25() else L6();
  D6():
    deopt 28 [r13];
  L6():
    goto L7();
  L7():
    l = ld els;
    class__ = ldf `class<-`;
    check L29() else D10();
  L23():
    goto L5(r13);
  L25():
    lapply = ldf lapply;
    check L26() else D8();
  D8():
    deopt 33 [];
  D10():
    deopt 43 ["DLLRegisteredRoutines", l, "DLLRegisteredRoutines"];
  L26():
    p2 = prom<V +>{
      els = ld els;
      els1 = force? els;
      checkMissing(els1);
      return els1;
    };
    p3 = prom<V +>{
      r15 = clos inner354062069;
      return r15;
    };
    r17 = dyn lapply(p2, p3);
    check L27() else D9();
  L29():
    r19 = dyn class__(l, NULL, "DLLRegisteredRoutines");
    check L30() else D11();
  D9():
    deopt 36 [r17];
  D11():
    deopt 45 ["DLLRegisteredRoutines", r19];
  L27():
    st els = r17;
    goto L7();
  L30():
    st els = r19;
    els2 = ld els;
    check L31() else D12();
  D12():
    deopt 47 [els2];
  L31():
    els3 = force? els2;
    checkMissing(els3);
    popenv;
    return els3;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg vapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg l:*, reg names__:cls, reg r7:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    x5 = ld x;
    check L13() else D6();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    vapply = ldf vapply;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D6():
    deopt 19 [x5];
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      r4 = clos inner973687;
      return r4;
    };
    r6 = dyn vapply(p, p1, "");
    check L9() else D3();
  L13():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D3():
    deopt 11 [r6];
  L9():
    l = ld x;
    names__ = ldf `names<-`;
    check L10() else D4();
  D4():
    deopt 13 [r6, l, r6];
  L10():
    r7 = dyn names__(l, NULL, r6);
    check L11() else D5();
  D5():
    deopt 15 [r6, r7];
  L11():
    st x = r7;
    goto L2();
  }
}
fun inner973687(z) {
  (reg z:*) -+> V { var z:*, reg z1:*, reg z2:V, reg c:L, reg z4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st z = z;
    z1 = ld z;
    check L0() else D0();
  D0():
    deopt 0 [z1];
  L0():
    z2 = force? z1;
    checkMissing(z2);
    c = `is.object`(z2);
    if c then L2() else L3(z2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", z2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(z4):
    r = `$`(z4, <sym name>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}