fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st `.expand_anchored_Rd_xrefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V, reg db8:*, reg db9:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg startsWith:cls, reg anchor:*, reg anchor1:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg have_equals:*, reg have_equals1:V, reg any:cls, reg r9:V, reg c3:L, reg cbind:cls, reg sub:cls, reg anchor2:*, reg anchor3:V, reg c4:L, reg anchor5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg have_equals2:*, reg have_equals3:V, reg __2:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg l:*, reg c5:L, reg r16:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r18:V, reg dx7:V, reg have_equals4:*, reg have_equals5:V, reg ___:cls, reg r19:V, reg db12:*, reg db13:V, reg c6:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r21:V, reg grepl:cls, reg anchor6:*, reg anchor7:V, reg p3:p(V +), reg r23:V, reg cbind1:cls, reg anchor8:*, reg anchor9:V, reg p4:p(V +), reg db16:*, reg db17:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg cbind2:cls, reg sub1:cls, reg anchor10:*, reg anchor11:V, reg c8:L, reg anchor13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg have_colon:*, reg have_colon1:V, reg __5:cls, reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg sub2:cls, reg anchor14:*, reg anchor15:V, reg c9:L, reg anchor17:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg have_colon2:*, reg have_colon3:V, reg __6:cls, reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg l3:*, reg c10:L, reg r38:V, reg l5:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg have_colon4:*, reg have_colon5:V, reg ___1:cls, reg r41:V, reg y:*, reg y1:V |
    mkenv;
    st db = db;
    db1 = ld db;
    check L9() else D0();
  D0():
    deopt 0 [db1];
  L9():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L10() else L11(db2);
  L0(dx1):
    st db = dx1;
    db8 = ld db;
    check L16() else D2();
  L10():
    dr = tryDispatchBuiltin.1("[", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(db4):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  D2():
    deopt 14 [db8];
  L1(r1):
    __ = ldf `[` in base;
    r3 = dyn __(db2, <missing>, r1, FALSE);
    goto L0(r3);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    c1 = ldf c in base;
    r2 = dyn c1("Target", "Anchor");
    check L15() else D1();
  L14():
    r = dyn base("Target", "Anchor");
    goto L1(r);
  L16():
    db9 = force? db8;
    checkMissing(db9);
    c2 = `is.object`(db9);
    if c2 then L17() else L18();
  D1():
    deopt 8 [db4, r2];
  L2(dx3):
    st anchor = dx3;
    startsWith = ldf startsWith;
    check L20() else D3();
  L15():
    goto L1(r2);
  L17():
    dr2 = tryDispatchBuiltin.1("[", db9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18();
  L18():
    __1 = ldf `[` in base;
    r4 = dyn __1(db9, <missing>, 2);
    goto L2(r4);
  D3():
    deopt 22 [];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L20():
    p = prom<V +>{
      anchor = ld anchor;
      anchor1 = force? anchor;
      checkMissing(anchor1);
      return anchor1;
    };
    r6 = dyn startsWith(p, "=");
    check L21() else D4();
  D4():
    deopt 25 [r6];
  L21():
    st have_equals = r6;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L3(r8):
    c3 = `as.logical`(r8);
    if c3 then L26() else L4();
  L22():
    have_equals = ld have_equals;
    check L24() else D5();
  L23():
    r7 = dyn base1(<sym have_equals>);
    goto L3(r7);
  D5():
    deopt 29 [have_equals];
  L4():
    goto L6();
  L6():
    db12 = ld db;
    check L34() else D10();
  L24():
    have_equals1 = force? have_equals;
    checkMissing(have_equals1);
    any = ldf any in base;
    r9 = dyn any(have_equals1);
    check L25() else D6();
  L26():
    cbind = ldf cbind;
    check L27() else D7();
  D6():
    deopt 32 [r9];
  D7():
    deopt 34 [];
  D10():
    deopt 47 [db12];
  L25():
    goto L3(r9);
  L27():
    p2 = prom<V +>{
      sub = ldf sub;
      p1 = prom<V +>{
        anchor2 = ld anchor;
        anchor3 = force? anchor2;
        checkMissing(anchor3);
        c4 = `is.object`(anchor3);
        if c4 then L1() else L2(anchor3);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", anchor3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(anchor5):
        have_equals2 = ld have_equals;
        have_equals3 = force? have_equals2;
        __2 = ldf `[` in base;
        r10 = dyn __2(anchor5, have_equals3);
        goto L0(r10);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r12 = dyn sub("^=", "", p1);
      return r12;
    };
    r14 = dyn cbind(p2, "");
    check L28() else D8();
  L34():
    db13 = force? db12;
    checkMissing(db13);
    c6 = `is.object`(db13);
    if c6 then L35() else L36();
  D8():
    deopt 37 [r14];
  L7(dx9):
    st anchor = dx9;
    grepl = ldf grepl;
    check L38() else D11();
  L28():
    l = ld db;
    c5 = `is.object`(l);
    if c5 then L29() else L30(r14, l);
  L35():
    dr8 = tryDispatchBuiltin.1("[", db13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36();
  L36():
    __3 = ldf `[` in base;
    r21 = dyn __3(db13, <missing>, 2);
    goto L7(r21);
  D11():
    deopt 55 [];
  L5(r18, dx7):
    st db = dx7;
    goto L6();
  L29():
    dr6 = tryDispatchBuiltin.0("[<-", l, r14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(r14, dr6);
  L30(r16, l2):
    have_equals4 = ld have_equals;
    check L32() else D9();
  L37():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8);
  L38():
    p3 = prom<V +>{
      anchor6 = ld anchor;
      anchor7 = force? anchor6;
      checkMissing(anchor7);
      return anchor7;
    };
    r23 = dyn grepl[, , fixed](":", p3, TRUE);
    check L39() else D12();
  D9():
    deopt 39 [r16, l2, r14, have_equals4];
  D12():
    deopt 60 [r23];
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(r14, dx6);
  L32():
    have_equals5 = force? have_equals4;
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l, have_equals5, <missing>, r14);
    goto L5(r16, r19);
  L39():
    st have_colon = r23;
    cbind1 = ldf cbind;
    check L40() else D13();
  D13():
    deopt 63 [];
  L40():
    p4 = prom<V +>{
      anchor8 = ld anchor;
      anchor9 = force? anchor8;
      checkMissing(anchor9);
      return anchor9;
    };
    p5 = prom<V +>{
      db16 = ld db;
      db17 = force? db16;
      checkMissing(db17);
      c7 = `is.object`(db17);
      if c7 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", db17);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r25 = dyn __4(db17, <missing>, 1);
      goto L0(r25);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r27 = dyn cbind1[T_Package, T_File](p4, p5);
    check L41() else D14();
  D14():
    deopt 68 [r27];
  L41():
    st y = r27;
    cbind2 = ldf cbind;
    check L42() else D15();
  D15():
    deopt 71 [];
  L42():
    p7 = prom<V +>{
      sub1 = ldf sub;
      p6 = prom<V +>{
        anchor10 = ld anchor;
        anchor11 = force? anchor10;
        checkMissing(anchor11);
        c8 = `is.object`(anchor11);
        if c8 then L1() else L2(anchor11);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("[", anchor11);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(anchor13):
        have_colon = ld have_colon;
        have_colon1 = force? have_colon;
        __5 = ldf `[` in base;
        r28 = dyn __5(anchor13, have_colon1);
        goto L0(r28);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r30 = dyn sub1("([^:]*):(.*)", "\\1", p6);
      return r30;
    };
    p9 = prom<V +>{
      sub2 = ldf sub;
      p8 = prom<V +>{
        anchor14 = ld anchor;
        anchor15 = force? anchor14;
        checkMissing(anchor15);
        c9 = `is.object`(anchor15);
        if c9 then L1() else L2(anchor15);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[", anchor15);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(anchor17):
        have_colon2 = ld have_colon;
        have_colon3 = force? have_colon2;
        __6 = ldf `[` in base;
        r32 = dyn __6(anchor17, have_colon3);
        goto L0(r32);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r34 = dyn sub2("([^:]*):(.*)", "\\2", p8);
      return r34;
    };
    r36 = dyn cbind2(p7, p9);
    check L43() else D16();
  D16():
    deopt 74 [r36];
  L43():
    l3 = ld y;
    c10 = `is.object`(l3);
    if c10 then L44() else L45(r36, l3);
  L8(dx17):
    st y = dx17;
    y = ld y;
    check L48() else D18();
  L44():
    dr16 = tryDispatchBuiltin.0("[<-", l3, r36);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L46() else L45(r36, dr16);
  L45(r38, l5):
    have_colon4 = ld have_colon;
    check L47() else D17();
  D17():
    deopt 76 [r38, l5, r36, have_colon4];
  D18():
    deopt 82 [y];
  L46():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L8(dx16);
  L47():
    have_colon5 = force? have_colon4;
    ___1 = ldf `[<-` in base;
    r41 = dyn ___1(l3, have_colon5, <missing>, r36);
    goto L8(r41);
  L48():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}