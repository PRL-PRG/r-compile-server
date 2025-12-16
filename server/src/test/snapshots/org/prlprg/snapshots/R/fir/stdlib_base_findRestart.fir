fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-285995584`;
    st findRestart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-285995584`(name, cond) {
  (reg name:*, reg cond:*) -+> V { var name:*, var cond:*, reg cond_isMissing:L, reg cond_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i:*, reg i1:V, reg _getRestart:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg r5:*, reg r6:V, reg c:V, reg c1:L, reg name1:*, reg name2:V, reg r9:*, reg r10:V, reg c2:L, reg name4:V, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg name6:V, reg dx1:V, reg __:cls, reg r13:V, reg r14:V, reg c3:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg c8:L, reg r16:V, reg cond1:*, reg cond2:V, reg c9:V, reg c10:L, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c19:L, reg c20:L, reg r18:V, reg r19:*, reg r20:V, reg c21:L, reg c24:L, reg c25:L, reg r22:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c28:L, reg c29:L, reg dx3:V, reg r23:V, reg c30:V, reg c31:L, reg c32:V, reg c35:L, reg c36:L, reg c37:V, reg r24:*, reg r25:V, reg c40:L, reg c43:L, reg c44:L, reg r27:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c47:L, reg c48:L, reg dx5:V, reg r28:V, reg dx6:cls, reg cond3:*, reg cond4:V, reg p:p(V +), reg r30:V, reg c49:L, reg c50:V, reg c53:L, reg c54:V, reg c56:L, reg r31:*, reg r32:V, reg i2:*, reg i3:V, reg r34:V |
    mkenv;
    st name = name;
    cond_isMissing = missing.0(cond);
    if cond_isMissing then L0(NULL) else L0(cond);
  L0(cond_orDefault):
    st cond = cond_orDefault;
    st i = 1;
    goto L12();
  L12():
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    st r = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    i = ld i;
    check L15() else D0();
  L14():
    r = dyn base(<lang .getRestart(i)>);
    goto L1(r);
  D0():
    deopt 5 [i];
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L20() else L3();
  L15():
    i1 = force? i;
    checkMissing(i1);
    _getRestart = ldf `.getRestart` in base;
    r2 = dyn _getRestart(i1);
    check L16() else D1();
  L17():
    r5 = ld r;
    check L19() else D2();
  L18():
    r3 = dyn base1(<sym r>);
    goto L2(r3);
  D1():
    deopt 8 [r2];
  D2():
    deopt 11 [r5];
  L3():
    name1 = ld name;
    check L23() else D3();
  L16():
    goto L1(r2);
  L19():
    r6 = force? r5;
    checkMissing(r6);
    c = `==`(r6, NULL);
    goto L2(c);
  L20():
    popenv;
    return NULL;
  D3():
    deopt 17 [name1];
  L23():
    name2 = force? name1;
    checkMissing(name2);
    r9 = ld r;
    check L24() else D4();
  D4():
    deopt 18 [name2, r9];
  L24():
    r10 = force? r9;
    checkMissing(r10);
    c2 = `is.object`(r10);
    if c2 then L25() else L26(name2, r10);
  L5(name6, dx1):
    r14 = `==`(name6, dx1);
    c3 = `as.logical`(r14);
    if c3 then L28() else L6(c3);
  L25():
    dr = tryDispatchBuiltin.1("[[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(name2, dr);
  L26(name4, r12):
    __ = ldf `[[` in base;
    r13 = dyn __(r12, 1);
    goto L5(name4, r13);
  L6(c5):
    c56 = `as.logical`(c5);
    if c56 then L50() else L11();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(name2, dx);
  L28():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L7(c8, r16):
    c10 = `as.logical`(r16);
    if c10 then L8(c8, c10) else L32();
  L11():
    i2 = ld i;
    check L54() else D10();
  L29():
    cond1 = ld cond;
    check L31() else D5();
  L30():
    r15 = dyn base2(<sym cond>);
    goto L7(c3, r15);
  L50():
    r31 = ld r;
    check L51() else D9();
  D5():
    deopt 25 [c3, cond1];
  D9():
    deopt 42 [r31];
  D10():
    deopt 45 [i2];
  L8(c11, c12):
    c35 = `as.logical`(c12);
    if c35 then L10(c11, c35) else L41();
  L31():
    cond2 = force? cond1;
    checkMissing(cond2);
    c9 = `==`(cond2, NULL);
    goto L7(c3, c9);
  L32():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L51():
    r32 = force? r31;
    checkMissing(r32);
    popenv;
    return r32;
  L54():
    i3 = force? i2;
    checkMissing(i3);
    r34 = `+`(i3, 1);
    st i = r34;
    goto L12();
  L9(c19, c20, r18):
    c31 = `as.logical`(r18);
    c32 = `||`(c20, c31);
    goto L8(c19, c32);
  L10(c36, c37):
    c53 = `as.logical`(c37);
    c54 = `&&`(c36, c53);
    goto L6(c54);
  L33():
    r19 = ld r;
    check L35() else D6();
  L34():
    r17 = dyn base3(<lang `$`(r, test)>);
    goto L9(c8, c10, r17);
  L41():
    r24 = ld r;
    check L42() else D7();
  D6():
    deopt 29 [c8, c10, r19];
  D7():
    deopt 34 [c11, c35, r24];
  L35():
    r20 = force? r19;
    checkMissing(r20);
    c21 = `is.object`(r20);
    if c21 then L37() else L38(c8, c10, r20);
  L42():
    r25 = force? r24;
    checkMissing(r25);
    c40 = `is.object`(r25);
    if c40 then L44() else L45(c11, c35, r25);
  L36(c28, c29, dx3):
    c30 = `==`(dx3, NULL);
    goto L9(c28, c29, c30);
  L37():
    dr2 = tryDispatchBuiltin.1("$", r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(c8, c10, dr2);
  L38(c24, c25, r22):
    r23 = `$`(r22, <sym test>);
    goto L36(c24, c25, r23);
  L43(c47, c48, dx5):
    checkFun.0(dx5);
    dx6 = dx5 as cls;
    p = prom<V +>{
      cond3 = ld cond;
      cond4 = force? cond3;
      checkMissing(cond4);
      return cond4;
    };
    r30 = dyn dx6(p);
    check L47() else D8();
  L44():
    dr4 = tryDispatchBuiltin.1("$", r25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(c11, c35, dr4);
  L45(c43, c44, r27):
    r28 = `$`(r27, <sym test>);
    goto L43(c43, c44, r28);
  D8():
    deopt 39 [c47, c48, r30];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(c8, c10, dx2);
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(c11, c35, dx4);
  L47():
    c49 = `as.logical`(r30);
    c50 = `||`(c48, c49);
    goto L10(c47, c50);
  }
}