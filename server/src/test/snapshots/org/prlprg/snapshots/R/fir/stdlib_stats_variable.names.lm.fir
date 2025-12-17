fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner421220494;
    st `variable.names.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner421220494(object, full, `...`) {
  (reg object:*, reg full:*, reg ddd:dots) -+> V { var object:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, var `...`:dots?, reg full1:*, reg full2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg qr_lm:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r3:V, reg c1:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg dimnames:cls, reg r7:V, reg c2:L, reg r9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r10:V, reg object3:*, reg object4:V, reg c3:L, reg object6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg c4:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg qr_lm1:cls, reg object7:*, reg object8:V, reg p1:p(V +), reg r15:V, reg c5:L, reg r17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg dimnames1:cls, reg r19:V, reg c6:L, reg r21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r22:V, reg c7:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg dx16:V, reg r24:V, reg object9:*, reg object10:V, reg c8:L, reg dx18:V, reg object12:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r25:V, reg r26:I, reg __2:cls, reg r27:V, reg character:cls, reg r28:V |
    mkenv;
    st object = object;
    full_isMissing = missing.0(full);
    if full_isMissing then L0(FALSE) else L0(full);
  L0(full_orDefault):
    st full = full_orDefault;
    st `...` = ddd;
    full1 = ld full;
    check L9() else D0();
  D0():
    deopt 0 [full1];
  L9():
    full2 = force? full1;
    checkMissing(full2);
    c = `as.logical`(full2);
    if c then L10() else L1();
  L1():
    object3 = ld object;
    check L24() else D4();
  L10():
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  D4():
    deopt 14 [object3];
  L2(r1):
    c2 = `is.object`(r1);
    if c2 then L20() else L21(r1);
  L11():
    qr_lm = ldf `qr.lm`;
    check L13() else D1();
  L12():
    r = dyn base(<lang `$`(qr.lm(object), qr)>);
    goto L2(r);
  L24():
    object4 = force? object3;
    checkMissing(object4);
    c3 = `is.object`(object4);
    if c3 then L26() else L27(object4);
  D1():
    deopt 5 [];
  L3(dx3):
    popenv;
    return dx3;
  L13():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r3 = dyn qr_lm(p);
    check L14() else D2();
  L20():
    dr2 = tryDispatchBuiltin.1("[[", r1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(r9):
    __ = ldf `[[` in base;
    r10 = dyn __(r9, 2);
    goto L3(r10);
  L25(dx5):
    c4 = `as.logical`(dx5);
    if c4 then L29() else L4();
  L26():
    dr4 = tryDispatchBuiltin.1("$", object4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(dr4);
  L27(object6):
    r11 = `$`(object6, <sym rank>);
    goto L25(r11);
  D2():
    deopt 7 [r3];
  L4():
    character = ldf character;
    check L53() else D9();
  L14():
    c1 = `is.object`(r3);
    if c1 then L16() else L17(r3);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L28():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx4);
  L29():
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D9():
    deopt 36 [];
  L5(r13):
    c6 = `is.object`(r13);
    if c6 then L39() else L40(r13);
  L15(dx1):
    dimnames = ldf dimnames in base;
    r7 = dyn dimnames(dx1);
    check L19() else D3();
  L16():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r5):
    r6 = `$`(r5, <sym qr>);
    goto L15(r6);
  L30():
    qr_lm1 = ldf `qr.lm`;
    check L32() else D5();
  L31():
    r12 = dyn base1(<lang `$`(qr.lm(object), qr)>);
    goto L5(r12);
  L53():
    r28 = dyn character();
    check L54() else D10();
  D3():
    deopt 10 [r7];
  D5():
    deopt 20 [];
  D10():
    deopt 37 [r28];
  L6(dx9):
    c7 = `is.object`(dx9);
    if c7 then L42() else L43(dx9);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    goto L2(r7);
  L32():
    p1 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r15 = dyn qr_lm1(p1);
    check L33() else D6();
  L39():
    dr8 = tryDispatchBuiltin.1("[[", r13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(dr8);
  L40(r21):
    __1 = ldf `[[` in base;
    r22 = dyn __1(r21, 2);
    goto L6(r22);
  L54():
    popenv;
    return r28;
  D6():
    deopt 22 [r15];
  L7(dx13):
    popenv;
    return dx13;
  L33():
    c5 = `is.object`(r15);
    if c5 then L35() else L36(r15);
  L41():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx8);
  L42():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L44() else L43(dr10);
  L43(dx11):
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L8(dx16, r24):
    __2 = ldf `[` in base;
    r27 = dyn __2(dx16, r24);
    goto L7(r27);
  L34(dx7):
    dimnames1 = ldf dimnames in base;
    r19 = dyn dimnames1(dx7);
    check L38() else D7();
  L35():
    dr6 = tryDispatchBuiltin.1("$", r15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36(dr6);
  L36(r17):
    r18 = `$`(r17, <sym qr>);
    goto L34(r18);
  L44():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx12);
  L45():
    object9 = ld object;
    check L47() else D8();
  L46():
    r23 = dyn base2(<lang `$`(object, rank)>);
    goto L8(dx11, r23);
  D7():
    deopt 25 [r19];
  D8():
    deopt 30 [dx11, object9];
  L37():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx6);
  L38():
    goto L5(r19);
  L47():
    object10 = force? object9;
    checkMissing(object10);
    c8 = `is.object`(object10);
    if c8 then L49() else L50(dx11, object10);
  L48(dx21, dx22):
    r26 = seq_len(dx22);
    goto L8(dx21, r26);
  L49():
    dr12 = tryDispatchBuiltin.1("$", object10);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L51() else L50(dx11, dr12);
  L50(dx18, object12):
    r25 = `$`(object12, <sym rank>);
    goto L48(dx18, r25);
  L51():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L48(dx11, dx20);
  }
}