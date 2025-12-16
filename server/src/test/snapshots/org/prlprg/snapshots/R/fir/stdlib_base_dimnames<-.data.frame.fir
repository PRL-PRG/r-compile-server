fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.data.frame` = r;
    st dimnames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg value1:*, reg value2:V, reg is_list:cls, reg r5:V, reg r6:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg value3:*, reg value4:V, reg length:cls, reg r9:V, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg value5:*, reg value6:V, reg c10:L, reg value8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg as_character:cls, reg r16:V, reg l:*, reg c11:L, reg r18:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg value9:*, reg value10:V, reg c12:L, reg value12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r24:V, reg as_character1:cls, reg r25:V, reg l3:*, reg c13:L, reg r27:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____1:cls, reg r30:V, reg d:*, reg d1:V, reg c14:L, reg d3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg dx12:V, reg r33:V, reg value13:*, reg value14:V, reg c15:L, reg dx14:V, reg value16:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg dx18:V, reg __3:cls, reg r34:V, reg length1:cls, reg r35:V, reg r36:V, reg c16:L, reg c17:V, reg d4:*, reg d5:V, reg c19:L, reg c21:L, reg d7:V, reg dr12:V, reg dc6:L, reg dx19:V, reg c23:L, reg dx20:V, reg __4:cls, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg c26:L, reg dx23:V, reg r39:V, reg value17:*, reg value18:V, reg c27:L, reg c29:L, reg dx25:V, reg value20:V, reg dr14:V, reg dc7:L, reg dx27:V, reg c31:L, reg dx28:V, reg dx29:V, reg __5:cls, reg r40:V, reg length2:cls, reg r41:V, reg r42:V, reg c32:L, reg c33:V, reg c35:L, reg stop1:cls, reg r43:V, reg value21:*, reg value22:V, reg c36:L, reg value24:V, reg dr16:V, reg dc8:L, reg dx30:V, reg dx31:V, reg __6:cls, reg r45:V, reg l6:*, reg row_names__:cls, reg r46:V, reg value25:*, reg value26:V, reg c37:L, reg value28:V, reg dr18:V, reg dc9:L, reg dx32:V, reg dx33:V, reg __7:cls, reg r47:V, reg l7:*, reg names__:cls, reg r48:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    st d = r1;
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L2(c) else L31();
  L25():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L26() else D1();
  L27():
    value1 = ld value;
    check L29() else D2();
  L28():
    r3 = dyn base1(<sym value>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [value1];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L37() else L4();
  L26():
    goto L0(r2);
  L29():
    value2 = force? value1;
    checkMissing(value2);
    is_list = ldf `is.list` in base;
    r5 = dyn is_list(value2);
    check L30() else D3();
  L31():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  D3():
    deopt 12 [r5];
  L3(c5, r8):
    r10 = `!=`(r8, 2);
    c6 = `as.logical`(r10);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L30():
    goto L1(r5);
  L32():
    value3 = ld value;
    check L34() else D4();
  L33():
    r7 = dyn base2(<sym value>);
    goto L3(c, r7);
  L37():
    stop = ldf stop;
    check L38() else D6();
  D4():
    deopt 16 [c, value3];
  D6():
    deopt 24 [];
  L6(r14):
    l = ld value;
    c11 = `is.object`(l);
    if c11 then L48() else L49(r14, l);
  L34():
    value4 = force? value3;
    checkMissing(value4);
    length = ldf length in base;
    r9 = dyn length(value4);
    check L35() else D5();
  L38():
    r11 = dyn stop("invalid 'dimnames' given for data frame");
    check L39() else D7();
  L41():
    value5 = ld value;
    check L43() else D8();
  L42():
    r13 = dyn base3(<lang `[[`(value, 1)>);
    goto L6(r13);
  D5():
    deopt 19 [c, r9];
  D7():
    deopt 26 [r11];
  D8():
    deopt 31 [value5];
  L8(dx3):
    st value = dx3;
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L35():
    goto L3(c, r9);
  L39():
    goto L5();
  L43():
    value6 = force? value5;
    checkMissing(value6);
    c10 = `is.object`(value6);
    if c10 then L44() else L45(value6);
  L48():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(r14, dr2);
  L49(r18, l2):
    ____ = ldf `[[<-` in base;
    r21 = dyn ____(l2, r14, 1);
    goto L8(r21);
  L7(dx1):
    as_character = ldf `as.character` in base;
    r16 = dyn as_character(dx1);
    check L47() else D9();
  L9(r23):
    l3 = ld value;
    c13 = `is.object`(l3);
    if c13 then L58() else L59(r23, l3);
  L44():
    dr = tryDispatchBuiltin.1("[[", value6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(value8):
    __ = ldf `[[` in base;
    r15 = dyn __(value8, 1);
    goto L7(r15);
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L51():
    value9 = ld value;
    check L53() else D10();
  L52():
    r22 = dyn base4(<lang `[[`(value, 2)>);
    goto L9(r22);
  D9():
    deopt 37 [r16];
  D10():
    deopt 45 [value9];
  L11(dx7):
    st value = dx7;
    d = ld d;
    check L61() else D12();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L47():
    goto L6(r16);
  L53():
    value10 = force? value9;
    checkMissing(value10);
    c12 = `is.object`(value10);
    if c12 then L54() else L55(value10);
  L58():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r23);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(r23, dr6);
  L59(r27, l5):
    ____1 = ldf `[[<-` in base;
    r30 = dyn ____1(l5, r23, 2);
    goto L11(r30);
  D12():
    deopt 57 [d];
  L10(dx5):
    as_character1 = ldf `as.character` in base;
    r25 = dyn as_character1(dx5);
    check L57() else D11();
  L54():
    dr4 = tryDispatchBuiltin.1("[[", value10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(dr4);
  L55(value12):
    __1 = ldf `[[` in base;
    r24 = dyn __1(value12, 2);
    goto L10(r24);
  L60():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L61():
    d1 = force? d;
    checkMissing(d1);
    c14 = `is.object`(d1);
    if c14 then L62() else L63(d1);
  D11():
    deopt 51 [r25];
  L12(dx9):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L57():
    goto L9(r25);
  L62():
    dr8 = tryDispatchBuiltin.1("[[", d1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L64() else L63(dr8);
  L63(d3):
    __2 = ldf `[[` in base;
    r31 = dyn __2(d3, 1);
    goto L12(r31);
  L13(dx12, r33):
    r36 = `!=`(dx12, r33);
    c16 = `as.logical`(r36);
    if c16 then L15(c16) else L72();
  L64():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx8);
  L65():
    value13 = ld value;
    check L67() else D13();
  L66():
    r32 = dyn base5(<lang `[[`(value, 1)>);
    goto L13(dx9, r32);
  D13():
    deopt 63 [dx9, value13];
  L15(c17):
    c35 = `as.logical`(c17);
    if c35 then L85() else L19();
  L67():
    value14 = force? value13;
    checkMissing(value14);
    c15 = `is.object`(value14);
    if c15 then L68() else L69(dx9, value14);
  L72():
    d4 = ld d;
    check L73() else D15();
  D15():
    deopt 71 [c16, d4];
  L14(dx17, dx18):
    length1 = ldf length in base;
    r35 = dyn length1(dx18);
    check L71() else D14();
  L19():
    goto L20();
  L20():
    value21 = ld value;
    check L89() else D20();
  L68():
    dr10 = tryDispatchBuiltin.1("[[", value14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(dx9, dr10);
  L69(dx14, value16):
    __3 = ldf `[[` in base;
    r34 = dyn __3(value16, 1);
    goto L14(dx14, r34);
  L73():
    d5 = force? d4;
    checkMissing(d5);
    c19 = `is.object`(d5);
    if c19 then L74() else L75(c16, d5);
  L85():
    stop1 = ldf stop;
    check L86() else D18();
  D14():
    deopt 69 [dx17, r35];
  D18():
    deopt 87 [];
  D20():
    deopt 92 [value21];
  L16(c23, dx20):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L70():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L14(dx9, dx16);
  L71():
    goto L13(dx17, r35);
  L74():
    dr12 = tryDispatchBuiltin.1("[[", d5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L76() else L75(c16, dr12);
  L75(c21, d7):
    __4 = ldf `[[` in base;
    r37 = dyn __4(d7, 2);
    goto L16(c21, r37);
  L86():
    r43 = dyn stop1("invalid 'dimnames' given for data frame");
    check L87() else D19();
  L89():
    value22 = force? value21;
    checkMissing(value22);
    c36 = `is.object`(value22);
    if c36 then L90() else L91(value22);
  D19():
    deopt 89 [r43];
  L17(c26, dx23, r39):
    r42 = `!=`(dx23, r39);
    c32 = `as.logical`(r42);
    c33 = `||`(c26, c32);
    goto L15(c33);
  L21(dx31):
    l6 = ld x;
    row_names__ = ldf `row.names<-`;
    check L93() else D21();
  L76():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L16(c16, dx19);
  L77():
    value17 = ld value;
    check L79() else D16();
  L78():
    r38 = dyn base6(<lang `[[`(value, 2)>);
    goto L17(c23, dx20, r38);
  L87():
    goto L20();
  L90():
    dr16 = tryDispatchBuiltin.1("[[", value22);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L92() else L91(dr16);
  L91(value24):
    __6 = ldf `[[` in base;
    r45 = dyn __6(value24, 1);
    goto L21(r45);
  D16():
    deopt 77 [c23, dx20, value17];
  D21():
    deopt 98 [dx31, l6, dx31];
  L79():
    value18 = force? value17;
    checkMissing(value18);
    c27 = `is.object`(value18);
    if c27 then L80() else L81(c23, dx20, value18);
  L92():
    dx30 = getTryDispatchBuiltinValue(dr16);
    goto L21(dx30);
  L93():
    r46 = dyn row_names__(l6, NULL, dx31);
    check L94() else D22();
  D22():
    deopt 100 [dx31, r46];
  L18(c31, dx28, dx29):
    length2 = ldf length in base;
    r41 = dyn length2(dx29);
    check L83() else D17();
  L80():
    dr14 = tryDispatchBuiltin.1("[[", value18);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L82() else L81(c23, dx20, dr14);
  L81(c29, dx25, value20):
    __5 = ldf `[[` in base;
    r40 = dyn __5(value20, 2);
    goto L18(c29, dx25, r40);
  L94():
    st x = r46;
    value25 = ld value;
    check L95() else D23();
  D17():
    deopt 83 [c31, dx28, r41];
  D23():
    deopt 102 [value25];
  L82():
    dx27 = getTryDispatchBuiltinValue(dr14);
    goto L18(c23, dx20, dx27);
  L83():
    goto L17(c31, dx28, r41);
  L95():
    value26 = force? value25;
    checkMissing(value26);
    c37 = `is.object`(value26);
    if c37 then L96() else L97(value26);
  L22(dx33):
    l7 = ld x;
    names__ = ldf `names<-`;
    check L99() else D24();
  L96():
    dr18 = tryDispatchBuiltin.1("[[", value26);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L98() else L97(dr18);
  L97(value28):
    __7 = ldf `[[` in base;
    r47 = dyn __7(value28, 2);
    goto L22(r47);
  D24():
    deopt 108 [dx33, l7, dx33];
  L98():
    dx32 = getTryDispatchBuiltinValue(dr18);
    goto L22(dx32);
  L99():
    r48 = dyn names__(l7, NULL, dx33);
    check L100() else D25();
  D25():
    deopt 110 [dx33, r48];
  L100():
    st x = r48;
    x3 = ld x;
    check L101() else D26();
  D26():
    deopt 112 [x3];
  L101():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}