fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `labels.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg attr:cls, reg r3:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg qr_lm:cls, reg object9:*, reg object10:V, reg p:p(V +), reg r6:V, reg c3:L, reg dx9:V, reg r8:V, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg dx13:V, reg r9:V, reg c4:L, reg dx16:V, reg dx17:V, reg dr8:V, reg dc4:L, reg dx19:V, reg dx20:V, reg dx21:V, reg object11:*, reg object12:V, reg c5:L, reg dx24:V, reg dx25:V, reg r11:I, reg object14:V, reg dr10:V, reg dc5:L, reg dx28:V, reg dx29:V, reg dx30:V, reg r13:I, reg dx31:V, reg r14:V, reg r15:V, reg __:cls, reg r16:V, reg __1:cls, reg r17:V, reg tl:*, reg tl1:V, reg c6:L, reg tl3:V, reg dr12:V, reg dc6:L, reg dx32:V, reg dx33:V, reg unique:cls, reg asgn:*, reg asgn1:V, reg p1:p(V +), reg r19:V, reg __2:cls, reg r20:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st tl = r1;
    object5 = ld object;
    check L12() else D2();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<lang `$`(object, terms)>, "term.labels");
    goto L0(r);
  D0():
    deopt 2 [object1];
  D2():
    deopt 9 [object5];
  L6():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L8() else L9(object2);
  L12():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L14() else L15(object6);
  L7(dx1):
    attr = ldf attr in base;
    r3 = dyn attr(dx1, "term.labels");
    check L11() else D1();
  L8():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(object4):
    r2 = `$`(object4, <sym terms>);
    goto L7(r2);
  L13(dx3):
    c2 = `is.object`(dx3);
    if c2 then L17() else L18(dx3);
  L14():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(dr2);
  L15(object8):
    r4 = `$`(object8, <sym assign>);
    goto L13(r4);
  D1():
    deopt 7 [r3];
  L1(dx7):
    st asgn = dx7;
    tl = ld tl;
    check L34() else D6();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    goto L0(r3);
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L17():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(dr4);
  L18(dx5):
    qr_lm = ldf `qr.lm`;
    check L20() else D3();
  D3():
    deopt 13 [dx5];
  D6():
    deopt 25 [tl];
  L19():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L1(dx6);
  L20():
    p = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r6 = dyn qr_lm(p);
    check L21() else D4();
  L34():
    tl1 = force? tl;
    checkMissing(tl1);
    c6 = `is.object`(tl1);
    if c6 then L35() else L36(tl1);
  D4():
    deopt 15 [dx5, r6];
  L3(dx33):
    popenv;
    return dx33;
  L21():
    c3 = `is.object`(r6);
    if c3 then L23() else L24(dx5, r6);
  L35():
    dr12 = tryDispatchBuiltin.1("[", tl1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L37() else L36(dr12);
  L36(tl3):
    unique = ldf unique;
    check L38() else D7();
  D7():
    deopt 28 [tl3];
  L22(dx12, dx13):
    c4 = `is.object`(dx13);
    if c4 then L26() else L27(dx12, dx13);
  L23():
    dr6 = tryDispatchBuiltin.1("$", r6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24(dx5, dr6);
  L24(dx9, r8):
    r9 = `$`(r8, <sym pivot>);
    goto L22(dx9, r9);
  L37():
    dx32 = getTryDispatchBuiltinValue(dr12);
    goto L3(dx32);
  L38():
    p1 = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      return asgn1;
    };
    r19 = dyn unique(p1);
    check L39() else D8();
  D8():
    deopt 30 [tl3, r19];
  L2(dx20, dx21):
    __1 = ldf `[` in base;
    r17 = dyn __1(dx20, dx21);
    goto L1(r17);
  L25():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx5, dx11);
  L26():
    dr8 = tryDispatchBuiltin.1("[", dx13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(dx12, dr8);
  L27(dx16, dx17):
    object11 = ld object;
    check L29() else D5();
  L39():
    __2 = ldf `[` in base;
    r20 = dyn __2(tl3, r19);
    goto L3(r20);
  D5():
    deopt 18 [dx16, dx17, 1, object11];
  L28():
    dx19 = getTryDispatchBuiltinValue(dr8);
    goto L2(dx12, dx19);
  L29():
    object12 = force? object11;
    checkMissing(object12);
    c5 = `is.object`(object12);
    if c5 then L31() else L32(dx16, dx17, 1, object12);
  L30(dx29, dx30, r13, dx31):
    r15 = `:`(r13, dx31);
    __ = ldf `[` in base;
    r16 = dyn __(dx30, r15);
    goto L2(dx29, r16);
  L31():
    dr10 = tryDispatchBuiltin.1("$", object12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L33() else L32(dx16, dx17, 1, dr10);
  L32(dx24, dx25, r11, object14):
    r14 = `$`(object14, <sym rank>);
    goto L30(dx24, dx25, r11, r14);
  L33():
    dx28 = getTryDispatchBuiltinValue(dr10);
    goto L30(dx16, dx17, 1, dx28);
  }
}