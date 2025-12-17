fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3206665884;
    st check_for_XQuartz = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3206665884(DSO) {
  (reg DSO:*) -+> V { var DSO:*, reg file_exists:cls, reg DSO1:*, reg DSO2:V, reg p:p(V +), reg r1:V, reg c:L, reg macDynLoads:cls, reg DSO3:*, reg DSO4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg loads:*, reg loads1:V, reg length:cls, reg r6:V, reg c1:L, reg grep:cls, reg loads2:*, reg loads3:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg ind:*, reg ind1:V, reg length1:cls, reg r11:V, reg c2:L, reg loads4:*, reg loads5:V, reg c3:L, reg loads7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r12:V, reg file_exists1:cls, reg this:*, reg this1:V, reg p3:p(V +), reg r14:V, reg r15:V, reg c4:L, reg stop:cls, reg r16:V |
    mkenv;
    st DSO = DSO;
    file_exists = ldf `file.exists`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      DSO1 = ld DSO;
      DSO2 = force? DSO1;
      checkMissing(DSO2);
      return DSO2;
    };
    r1 = dyn file_exists(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    c = `as.logical`(r1);
    if c then L9() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L9():
    macDynLoads = ldf macDynLoads;
    check L10() else D2();
  D2():
    deopt 5 [];
  L10():
    p1 = prom<V +>{
      DSO3 = ld DSO;
      DSO4 = force? DSO3;
      checkMissing(DSO4);
      return DSO4;
    };
    r3 = dyn macDynLoads(p1);
    check L11() else D3();
  D3():
    deopt 7 [r3];
  L11():
    st loads = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L16() else L2();
  L12():
    loads = ld loads;
    check L14() else D4();
  L13():
    r4 = dyn base(<sym loads>);
    goto L1(r4);
  D4():
    deopt 11 [loads];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L14():
    loads1 = force? loads;
    checkMissing(loads1);
    length = ldf length in base;
    r6 = dyn length(loads1);
    check L15() else D5();
  L16():
    grep = ldf grep;
    check L17() else D6();
  D5():
    deopt 14 [r6];
  D6():
    deopt 16 [];
  L15():
    goto L1(r6);
  L17():
    p2 = prom<V +>{
      loads2 = ld loads;
      loads3 = force? loads2;
      checkMissing(loads3);
      return loads3;
    };
    r8 = dyn grep("^/.*libX11[.][0-9]+[.]dylib", p2);
    check L18() else D7();
  D7():
    deopt 19 [r8];
  L18():
    st ind = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3(r10):
    c2 = `as.logical`(r10);
    if c2 then L23() else L4();
  L19():
    ind = ld ind;
    check L21() else D8();
  L20():
    r9 = dyn base1(<sym ind>);
    goto L3(r9);
  D8():
    deopt 23 [ind];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L21():
    ind1 = force? ind;
    checkMissing(ind1);
    length1 = ldf length in base;
    r11 = dyn length1(ind1);
    check L22() else D9();
  L23():
    loads4 = ld loads;
    check L24() else D10();
  D9():
    deopt 26 [r11];
  D10():
    deopt 27 [loads4];
  L22():
    goto L3(r11);
  L24():
    loads5 = force? loads4;
    checkMissing(loads5);
    c3 = `is.object`(loads5);
    if c3 then L25() else L26(loads5);
  L5(dx1):
    st this = dx1;
    file_exists1 = ldf `file.exists`;
    check L29() else D12();
  L25():
    dr = tryDispatchBuiltin.1("[", loads5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(loads7):
    ind2 = ld ind;
    check L28() else D11();
  D11():
    deopt 29 [loads7, ind2];
  D12():
    deopt 34 [];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L28():
    ind3 = force? ind2;
    __ = ldf `[` in base;
    r12 = dyn __(loads7, ind3);
    goto L5(r12);
  L29():
    p3 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r14 = dyn file_exists1(p3);
    check L30() else D13();
  D13():
    deopt 36 [r14];
  L30():
    r15 = `!`(r14);
    c4 = `as.logical`(r15);
    if c4 then L31() else L6();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L31():
    stop = ldf stop;
    check L32() else D14();
  D14():
    deopt 39 [];
  L32():
    r16 = dyn stop[, domain]("X11 library is missing: install XQuartz from www.xquartz.org", NA_LGL);
    check L33() else D15();
  D15():
    deopt 43 [r16];
  L33():
    popenv;
    return r16;
  }
}