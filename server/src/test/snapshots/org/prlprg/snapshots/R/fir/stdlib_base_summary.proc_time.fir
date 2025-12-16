fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083163048`;
    st `summary.proc_time` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg r4:V, reg c1:L, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V, reg object9:*, reg object10:V, reg c3:L, reg dx5:V, reg object12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __2:cls, reg r6:V, reg r7:V, reg l:*, reg c4:L, reg r9:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx10:V, reg r11:V, reg dx11:V, reg ___:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r16:V, reg is_na1:cls, reg r17:V, reg r18:V, reg c6:L, reg object17:*, reg object18:V, reg c7:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r19:V, reg object21:*, reg object22:V, reg c8:L, reg dx17:V, reg object24:V, reg dr12:V, reg dc6:L, reg dx19:V, reg dx20:V, reg dx21:V, reg __5:cls, reg r20:V, reg r21:V, reg l3:*, reg c9:L, reg r23:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx22:V, reg r25:V, reg dx23:V, reg ___1:cls, reg r26:V, reg object25:*, reg object26:V, reg c10:L, reg object28:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg __6:cls, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg gettext:cls, reg r31:V, reg gettext1:cls, reg r32:V, reg gettext2:cls, reg r33:V, reg c11:cls, reg r34:V, reg l6:*, reg names__:cls, reg r35:V, reg object29:*, reg object30:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L23() else L2();
  L16():
    object1 = ld object;
    check L18() else D0();
  L17():
    r = dyn base(<lang `[`(object, 4)>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L2():
    goto L6();
  L6():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L18():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L19() else L20(object2);
  L23():
    object5 = ld object;
    check L24() else D2();
  D2():
    deopt 10 [object5];
  L1(dx1):
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L22() else D1();
  L7(r15):
    r18 = `!`(r15);
    c6 = `as.logical`(r18);
    if c6 then L43() else L9();
  L19():
    dr = tryDispatchBuiltin.1("[", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(object4):
    __ = ldf `[` in base;
    r2 = dyn __(object4, 4);
    goto L1(r2);
  L24():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L25() else L26(object6);
  L36():
    object13 = ld object;
    check L38() else D4();
  L37():
    r14 = dyn base1(<lang `[`(object, 5)>);
    goto L7(r14);
  D1():
    deopt 8 [r3];
  D4():
    deopt 29 [object13];
  L3(dx3):
    object9 = ld object;
    check L28() else D3();
  L9():
    goto L13();
  L13():
    object25 = ld object;
    check L56() else D8();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L22():
    goto L0(r3);
  L25():
    dr2 = tryDispatchBuiltin.1("[", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(object8):
    __1 = ldf `[` in base;
    r5 = dyn __1(object8, 1);
    goto L3(r5);
  L38():
    object14 = force? object13;
    checkMissing(object14);
    c5 = `is.object`(object14);
    if c5 then L39() else L40(object14);
  L43():
    object17 = ld object;
    check L44() else D6();
  D3():
    deopt 14 [dx3, object9];
  D6():
    deopt 37 [object17];
  D8():
    deopt 54 [object25];
  L8(dx13):
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(dx13);
    check L42() else D5();
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L28():
    object10 = force? object9;
    checkMissing(object10);
    c3 = `is.object`(object10);
    if c3 then L29() else L30(dx3, object10);
  L39():
    dr8 = tryDispatchBuiltin.1("[", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(dr8);
  L40(object16):
    __3 = ldf `[` in base;
    r16 = dyn __3(object16, 5);
    goto L8(r16);
  L44():
    object18 = force? object17;
    checkMissing(object18);
    c7 = `is.object`(object18);
    if c7 then L45() else L46(object18);
  L56():
    object26 = force? object25;
    checkMissing(object26);
    c10 = `is.object`(object26);
    if c10 then L57() else L58(object26);
  D5():
    deopt 35 [r17];
  L4(dx8, dx9):
    r7 = `+`(dx8, dx9);
    l = ld object;
    c4 = `is.object`(l);
    if c4 then L32() else L33(r7, l);
  L10(dx15):
    object21 = ld object;
    check L48() else D7();
  L14(dx25):
    st object = dx25;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L29():
    dr4 = tryDispatchBuiltin.1("[", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dx3, dr4);
  L30(dx5, object12):
    __2 = ldf `[` in base;
    r6 = dyn __2(object12, 4);
    goto L4(dx5, r6);
  L41():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx12);
  L42():
    goto L7(r17);
  L45():
    dr10 = tryDispatchBuiltin.1("[", object18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L47() else L46(dr10);
  L46(object20):
    __4 = ldf `[` in base;
    r19 = dyn __4(object20, 2);
    goto L10(r19);
  L57():
    dr16 = tryDispatchBuiltin.1("[", object26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L59() else L58(dr16);
  L58(object28):
    __6 = ldf `[` in base;
    r28 = dyn __6(object28, <int 1, 2, 3>);
    goto L14(r28);
  D7():
    deopt 41 [dx15, object21];
  L5(r11, dx11):
    st object = dx11;
    goto L6();
  L15(r30):
    l6 = ld object;
    names__ = ldf `names<-`;
    check L69() else D16();
  L31():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx3, dx7);
  L32():
    dr6 = tryDispatchBuiltin.0("[<-", l, r7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(r7, dr6);
  L33(r9, l2):
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, r7, 1);
    goto L5(r9, r12);
  L47():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx14);
  L48():
    object22 = force? object21;
    checkMissing(object22);
    c8 = `is.object`(object22);
    if c8 then L49() else L50(dx15, object22);
  L59():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L14(dx24);
  L60():
    gettext = ldf gettext;
    check L62() else D9();
  L61():
    r29 = dyn base2(<lang gettext("user")>, <lang gettext("system")>, <lang gettext("elapsed")>);
    goto L15(r29);
  D9():
    deopt 63 [];
  D16():
    deopt 77 [r30, l6, r30];
  L11(dx20, dx21):
    r21 = `+`(dx20, dx21);
    l3 = ld object;
    c9 = `is.object`(l3);
    if c9 then L52() else L53(r21, l3);
  L34():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L5(r7, dx10);
  L49():
    dr12 = tryDispatchBuiltin.1("[", object22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L51() else L50(dx15, dr12);
  L50(dx17, object24):
    __5 = ldf `[` in base;
    r20 = dyn __5(object24, 5);
    goto L11(dx17, r20);
  L62():
    r31 = dyn gettext("user");
    check L63() else D10();
  L69():
    r35 = dyn names__(l6, NULL, r30);
    check L70() else D17();
  D10():
    deopt 65 [r31];
  D17():
    deopt 79 [r30, r35];
  L12(r25, dx23):
    st object = dx23;
    goto L13();
  L51():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L11(dx15, dx19);
  L52():
    dr14 = tryDispatchBuiltin.0("[<-", l3, r21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L54() else L53(r21, dr14);
  L53(r23, l5):
    ___1 = ldf `[<-` in base;
    r26 = dyn ___1(l5, r21, 2);
    goto L12(r23, r26);
  L63():
    gettext1 = ldf gettext;
    check L64() else D11();
  L70():
    st object = r35;
    object29 = ld object;
    check L71() else D18();
  D11():
    deopt 67 [];
  D18():
    deopt 81 [object29];
  L54():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L12(r21, dx22);
  L64():
    r32 = dyn gettext1("system");
    check L65() else D12();
  L71():
    object30 = force? object29;
    checkMissing(object30);
    popenv;
    return object30;
  D12():
    deopt 69 [r32];
  L65():
    gettext2 = ldf gettext;
    check L66() else D13();
  D13():
    deopt 71 [];
  L66():
    r33 = dyn gettext2("elapsed");
    check L67() else D14();
  D14():
    deopt 73 [r33];
  L67():
    c11 = ldf c in base;
    r34 = dyn c11(r31, r32, r33);
    check L68() else D15();
  D15():
    deopt 75 [r34];
  L68():
    goto L15(r34);
  }
}