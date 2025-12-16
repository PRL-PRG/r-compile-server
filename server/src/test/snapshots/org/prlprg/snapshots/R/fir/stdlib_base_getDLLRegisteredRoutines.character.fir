fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1544526285;
    st `getDLLRegisteredRoutines.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1544526285(dll, addNames) {
  (reg dll:*, reg addNames:*) -+> V { var dll:*, var addNames:*, reg addNames_isMissing:L, reg addNames_orDefault:*, reg getLoadedDLLs:cls, reg r:V, reg vapply:cls, reg dlls:*, reg dlls1:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg w:*, reg w1:V, reg any:cls, reg r7:V, reg r8:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg dll1:*, reg dll2:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg w2:*, reg w3:V, reg which_max:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg w4:*, reg w5:V, reg sum:cls, reg r21:V, reg r22:V, reg c1:L, reg warning:cls, reg gettextf1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg dll3:*, reg dll4:V, reg names:cls, reg r25:V, reg p5:p(V +), reg dlls2:*, reg dlls3:V, reg c2:L, reg dlls5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dll5:*, reg dll6:V, reg __:cls, reg r27:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg getDLLRegisteredRoutines:cls, reg dlls6:*, reg dlls7:V, reg c4:L, reg dlls9:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg dll7:*, reg dll8:V, reg __2:cls, reg r34:V, reg p8:p(V +), reg addNames1:*, reg addNames2:V, reg p9:p(V +), reg r37:V |
    mkenv;
    st dll = dll;
    addNames_isMissing = missing.0(addNames);
    if addNames_isMissing then L0(TRUE) else L0(addNames);
  L0(addNames_orDefault):
    st addNames = addNames_orDefault;
    getLoadedDLLs = ldf getLoadedDLLs;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r = dyn getLoadedDLLs();
    check L9() else D1();
  D1():
    deopt 2 [r];
  L9():
    st dlls = r;
    vapply = ldf vapply;
    check L10() else D2();
  D2():
    deopt 5 [];
  L10():
    p = prom<V +>{
      dlls = ld dlls;
      dlls1 = force? dlls;
      checkMissing(dlls1);
      return dlls1;
    };
    p1 = prom<V +>{
      r2 = clos inner354062069;
      return r2;
    };
    r4 = dyn vapply(p, p1, NA_LGL);
    check L11() else D3();
  D3():
    deopt 9 [r4];
  L11():
    st w = r4;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L16() else L2();
  L12():
    w = ld w;
    check L14() else D4();
  L13():
    r5 = dyn base(<sym w>);
    goto L1(r5);
  D4():
    deopt 13 [w];
  L2():
    goto L3();
  L3():
    sym1 = ldf `which.max`;
    base1 = ldf `which.max` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    w1 = force? w;
    checkMissing(w1);
    any = ldf any in base;
    r7 = dyn any(w1);
    check L15() else D5();
  L16():
    stop = ldf stop;
    check L17() else D6();
  D5():
    deopt 16 [r7];
  D6():
    deopt 19 [];
  L4(r17):
    st dll = r17;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L15():
    goto L1(r7);
  L17():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          dll1 = ld dll;
          dll2 = force? dll1;
          checkMissing(dll2);
          return dll2;
        };
        r10 = dyn sQuote(p2);
        return r10;
      };
      r12 = dyn gettextf("No DLL currently loaded with name or path %s", p3);
      return r12;
    };
    r14 = dyn stop[, domain](p4, NA_LGL);
    check L18() else D7();
  L20():
    w2 = ld w;
    check L22() else D8();
  L21():
    r16 = dyn base1(<sym w>);
    goto L4(r16);
  D7():
    deopt 23 [r14];
  D8():
    deopt 28 [w2];
  L5(r20):
    r22 = `>`(r20, 1);
    c1 = `as.logical`(r22);
    if c1 then L28() else L6();
  L18():
    goto L3();
  L22():
    w3 = force? w2;
    checkMissing(w3);
    which_max = ldf `which.max` in base;
    r18 = dyn which_max(w3);
    check L23() else D9();
  L24():
    w4 = ld w;
    check L26() else D10();
  L25():
    r19 = dyn base2(<sym w>);
    goto L5(r19);
  D9():
    deopt 31 [r18];
  D10():
    deopt 35 [w4];
  L6():
    goto L7();
  L7():
    getDLLRegisteredRoutines = ldf getDLLRegisteredRoutines;
    check L32() else D14();
  L23():
    goto L4(r18);
  L26():
    w5 = force? w4;
    checkMissing(w5);
    sum = ldf sum in base;
    r21 = dyn sum(w5);
    check L27() else D11();
  L28():
    warning = ldf warning;
    check L29() else D12();
  D11():
    deopt 38 [r21];
  D12():
    deopt 42 [];
  D14():
    deopt 50 [];
  L27():
    goto L5(r21);
  L29():
    p7 = prom<V +>{
      gettextf1 = ldf gettextf;
      p5 = prom<V +>{
        sym3 = ldf names;
        base3 = ldf names in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        dll3 = ld dll;
        dll4 = force? dll3;
        checkMissing(dll4);
        names = ldf names in base;
        r25 = dyn names(dll4);
        goto L0(r25);
      L2():
        r23 = dyn base3(<sym dll>);
        goto L0(r23);
      };
      p6 = prom<V +>{
        dlls2 = ld dlls;
        dlls3 = force? dlls2;
        checkMissing(dlls3);
        c2 = `is.object`(dlls3);
        if c2 then L2() else L3(dlls3);
      L0(dx1):
        c3 = `is.object`(dx1);
        if c3 then L5() else L6(dx1);
      L2():
        dr = tryDispatchBuiltin.1("[[", dlls3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(dlls5):
        dll5 = ld dll;
        dll6 = force? dll5;
        __ = ldf `[[` in base;
        r27 = dyn __(dlls5, dll6);
        goto L0(r27);
      L1(dx5):
        return dx5;
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        dr2 = tryDispatchBuiltin.1("[[", dx1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L7() else L6(dr2);
      L6(dx3):
        __1 = ldf `[[` in base;
        r28 = dyn __1(dx3, "path");
        goto L1(r28);
      L7():
        dx4 = getTryDispatchBuiltinValue(dr2);
        goto L1(dx4);
      };
      r30 = dyn gettextf1("multiple DLLs match '%s'. Using '%s'", p5, p6);
      return r30;
    };
    r32 = dyn warning[, domain](p7, NA_LGL);
    check L30() else D13();
  L32():
    p8 = prom<V +>{
      dlls6 = ld dlls;
      dlls7 = force? dlls6;
      checkMissing(dlls7);
      c4 = `is.object`(dlls7);
      if c4 then L1() else L2(dlls7);
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", dlls7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dlls9):
      dll7 = ld dll;
      dll8 = force? dll7;
      __2 = ldf `[[` in base;
      r34 = dyn __2(dlls9, dll8);
      goto L0(r34);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    p9 = prom<V +>{
      addNames1 = ld addNames;
      addNames2 = force? addNames1;
      checkMissing(addNames2);
      return addNames2;
    };
    r37 = dyn getDLLRegisteredRoutines(p8, p9);
    check L33() else D15();
  D13():
    deopt 46 [r32];
  D15():
    deopt 53 [r37];
  L30():
    goto L7();
  L33():
    popenv;
    return r37;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg dll:*, reg dll1:V, reg r1:V, reg c1:L, reg c2:V, reg x5:*, reg x6:V, reg c4:L, reg c6:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c8:L, reg dx3:V, reg __1:cls, reg r2:V, reg dll2:*, reg dll3:V, reg r3:V, reg c9:L, reg c10:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L3() else D0();
  D0():
    deopt 0 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L4() else L5(x2);
  L0(dx1):
    dll = ld dll;
    check L7() else D1();
  L4():
    dr = tryDispatchBuiltin.1("[[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x4):
    __ = ldf `[[` in base;
    r = dyn __(x4, "name");
    goto L0(r);
  D1():
    deopt 4 [dx1, dll];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    dll1 = force? dll;
    checkMissing(dll1);
    r1 = `==`(dx1, dll1);
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L8();
  L1(c2):
    popenv;
    return c2;
  L8():
    x5 = ld x;
    check L9() else D2();
  D2():
    deopt 7 [c1, x5];
  L9():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L10() else L11(c1, x6);
  L2(c8, dx3):
    dll2 = ld dll;
    check L13() else D3();
  L10():
    dr2 = tryDispatchBuiltin.1("[[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(c1, dr2);
  L11(c6, x8):
    __1 = ldf `[[` in base;
    r2 = dyn __1(x8, "path");
    goto L2(c6, r2);
  D3():
    deopt 11 [c8, dx3, dll2];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(c1, dx2);
  L13():
    dll3 = force? dll2;
    checkMissing(dll3);
    r3 = `==`(dx3, dll3);
    c9 = `as.logical`(r3);
    c10 = `||`(c8, c9);
    goto L1(c10);
  }
}