fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st check_exact = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg w:*, reg w1:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg r6:V, reg sum:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg object9:*, reg object10:V, reg c4:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg r11:V, reg sum1:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg w2:*, reg w3:V, reg object13:*, reg object14:V, reg c5:L, reg w5:V, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg w7:V, reg dx7:V, reg r16:V, reg r17:V, reg r18:V, reg sum2:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg w8:*, reg w9:V, reg object17:*, reg object18:V, reg c6:L, reg w11:V, reg object20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg w13:V, reg dx9:V, reg r22:V, reg r23:V, reg r24:V, reg sum3:cls, reg r25:V, reg rss:*, reg rss1:V, reg mss:*, reg mss1:V, reg r26:V, reg r27:V, reg c7:L, reg warning:cls, reg r28:V |
    mkenv;
    st object = object;
    object1 = ld object;
    check L8() else D0();
  D0():
    deopt 0 [object1];
  L8():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L10() else L11(object2);
  L9(dx1):
    st w = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L10():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(object4):
    r = `$`(object4, <sym weights>);
    goto L9(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L16() else L1();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    w = ld w;
    check L15() else D1();
  L14():
    r1 = dyn base(<sym w>);
    goto L0(r1);
  D1():
    deopt 5 [w];
  L1():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L4():
    rss = ld rss;
    check L52() else D12();
  L15():
    w1 = force? w;
    checkMissing(w1);
    c1 = `==`(w1, NULL);
    goto L0(c1);
  L16():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  D12():
    deopt 52 [rss];
  L2(r4):
    st mss = r4;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L5(r15):
    st mss = r15;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L17():
    object5 = ld object;
    check L19() else D2();
  L18():
    r3 = dyn base1(<lang `^`(`$`(object, fitted.values), 2.0)>);
    goto L2(r3);
  L34():
    w2 = ld w;
    check L36() else D6();
  L35():
    r14 = dyn base3(<lang `*`(w, `^`(`$`(object, fitted.values), 2.0))>);
    goto L5(r14);
  L52():
    rss1 = force? rss;
    checkMissing(rss1);
    mss = ld mss;
    check L53() else D13();
  D2():
    deopt 10 [object5];
  D6():
    deopt 30 [w2];
  D13():
    deopt 54 [rss1, 1.0E-10, mss];
  L3(r9):
    st rss = r9;
    goto L4();
  L6(r21):
    st rss = r21;
    goto L4();
  L19():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L21() else L22(object6);
  L25():
    object9 = ld object;
    check L27() else D4();
  L26():
    r8 = dyn base2(<lang `^`(`$`(object, residuals), 2.0)>);
    goto L3(r8);
  L36():
    w3 = force? w2;
    checkMissing(w3);
    object13 = ld object;
    check L37() else D7();
  L43():
    w8 = ld w;
    check L45() else D9();
  L44():
    r20 = dyn base4(<lang `*`(w, `^`(`$`(object, residuals), 2.0))>);
    goto L6(r20);
  L53():
    mss1 = force? mss;
    checkMissing(mss1);
    r26 = `*`(1.0E-10, mss1);
    r27 = `<`(rss1, r26);
    c7 = `as.logical`(r27);
    if c7 then L54() else L7();
  D4():
    deopt 20 [object9];
  D7():
    deopt 31 [w3, object13];
  D9():
    deopt 42 [w8];
  L7():
    invisible.0();
    popenv;
    return NULL;
  L20(dx3):
    r6 = `^`(dx3, 2.0);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L24() else D3();
  L21():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(object8):
    r5 = `$`(object8, <sym fitted.values>);
    goto L20(r5);
  L27():
    object10 = force? object9;
    checkMissing(object10);
    c4 = `is.object`(object10);
    if c4 then L29() else L30(object10);
  L37():
    object14 = force? object13;
    checkMissing(object14);
    c5 = `is.object`(object14);
    if c5 then L39() else L40(w3, object14);
  L45():
    w9 = force? w8;
    checkMissing(w9);
    object17 = ld object;
    check L46() else D10();
  L54():
    warning = ldf warning;
    check L55() else D14();
  D3():
    deopt 16 [r7];
  D10():
    deopt 43 [w9, object17];
  D14():
    deopt 59 [];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L24():
    goto L2(r7);
  L28(dx5):
    r11 = `^`(dx5, 2.0);
    sum1 = ldf sum in base;
    r12 = dyn sum1(r11);
    check L32() else D5();
  L29():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dr4);
  L30(object12):
    r10 = `$`(object12, <sym residuals>);
    goto L28(r10);
  L38(w7, dx7):
    r17 = `^`(dx7, 2.0);
    r18 = `*`(w7, r17);
    sum2 = ldf sum in base;
    r19 = dyn sum2(r18);
    check L42() else D8();
  L39():
    dr6 = tryDispatchBuiltin.1("$", object14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L41() else L40(w3, dr6);
  L40(w5, object16):
    r16 = `$`(object16, <sym fitted.values>);
    goto L38(w5, r16);
  L46():
    object18 = force? object17;
    checkMissing(object18);
    c6 = `is.object`(object18);
    if c6 then L48() else L49(w9, object18);
  L55():
    r28 = dyn warning[, `call.`]("attempting model selection on an essentially perfect fit is nonsense", FALSE);
    check L56() else D15();
  D5():
    deopt 26 [r12];
  D8():
    deopt 38 [r19];
  D15():
    deopt 63 [r28];
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx4);
  L32():
    goto L3(r12);
  L41():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L38(w3, dx6);
  L42():
    goto L5(r19);
  L47(w13, dx9):
    r23 = `^`(dx9, 2.0);
    r24 = `*`(w13, r23);
    sum3 = ldf sum in base;
    r25 = dyn sum3(r24);
    check L51() else D11();
  L48():
    dr8 = tryDispatchBuiltin.1("$", object18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L50() else L49(w9, dr8);
  L49(w11, object20):
    r22 = `$`(object20, <sym residuals>);
    goto L47(w11, r22);
  L56():
    popenv;
    return r28;
  D11():
    deopt 50 [r25];
  L50():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L47(w9, dx8);
  L51():
    goto L6(r25);
  }
}