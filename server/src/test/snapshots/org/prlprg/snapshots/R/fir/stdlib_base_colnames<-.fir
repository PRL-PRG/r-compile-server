fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `colnames<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg value1:*, reg value2:V, reg l:*, reg names__:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg dn:*, reg dn1:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg value4:*, reg value5:V, reg c3:V, reg c4:L, reg x5:*, reg x6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg dim:cls, reg r16:V, reg length:cls, reg r17:V, reg r18:V, reg c5:L, reg stop:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg nd:*, reg nd1:V, reg vector:cls, reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg dn2:*, reg dn3:V, reg length1:cls, reg r27:V, reg r28:V, reg c6:L, reg stop1:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg value6:*, reg value7:V, reg c7:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg list:cls, reg r35:V, reg l1:*, reg c9:L, reg r37:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg r39:V, reg dx1:V, reg ___:cls, reg r40:V, reg value8:*, reg value9:V, reg l4:*, reg c10:L, reg value11:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg value13:V, reg dx3:V, reg ____:cls, reg r42:V, reg dn4:*, reg dn5:V, reg l7:*, reg dimnames__:cls, reg r43:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    st value = value;
    is_data_frame = ldf `is.data.frame`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L24() else D1();
  D1():
    deopt 3 [r1];
  L24():
    c = `as.logical`(r1);
    if c then L25() else L0();
  L0():
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1():
    x9 = ld x;
    check L87() else D27();
  L25():
    value1 = ld value;
    check L26() else D2();
  D2():
    deopt 4 [value1];
  D27():
    deopt 102 [x9];
  L2(r4):
    st dn = r4;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L26():
    value2 = force? value1;
    checkMissing(value2);
    l = ld x;
    names__ = ldf `names<-`;
    check L27() else D3();
  L30():
    x3 = ld x;
    check L32() else D5();
  L31():
    r3 = dyn base(<sym x>);
    goto L2(r3);
  L87():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D3():
    deopt 7 [value2, l, value2];
  D5():
    deopt 13 [x3];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L37() else L4();
  L27():
    r2 = dyn names__(l, NULL, value2);
    check L28() else D4();
  L32():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r5 = dyn dimnames(x4);
    check L33() else D6();
  L34():
    dn = ld dn;
    check L36() else D7();
  L35():
    r6 = dyn base1(<sym dn>);
    goto L3(r6);
  D4():
    deopt 9 [value2, r2];
  D6():
    deopt 16 [r5];
  D7():
    deopt 19 [dn];
  L4():
    goto L13();
  L13():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L28():
    st x = r2;
    goto L1();
  L33():
    goto L2(r5);
  L36():
    dn1 = force? dn;
    checkMissing(dn1);
    c1 = `==`(dn1, NULL);
    goto L3(c1);
  L37():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L5(r9):
    c4 = `as.logical`(r9);
    if c4 then L41() else L6();
  L14(r26):
    r28 = `<`(r26, 2);
    c6 = `as.logical`(r28);
    if c6 then L65() else L15();
  L38():
    value4 = ld value;
    check L40() else D8();
  L39():
    r8 = dyn base2(<sym value>);
    goto L5(r8);
  L61():
    dn2 = ld dn;
    check L63() else D17();
  L62():
    r25 = dyn base6(<sym dn>);
    goto L14(r25);
  D8():
    deopt 23 [value4];
  D17():
    deopt 62 [dn2];
  L6():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L15():
    goto L16();
  L16():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L40():
    value5 = force? value4;
    checkMissing(value5);
    c3 = `==`(value5, NULL);
    goto L5(c3);
  L41():
    x5 = ld x;
    check L42() else D9();
  L63():
    dn3 = force? dn2;
    checkMissing(dn3);
    length1 = ldf length in base;
    r27 = dyn length1(dn3);
    check L64() else D18();
  L65():
    stop1 = ldf stop;
    check L66() else D19();
  D9():
    deopt 26 [x5];
  D18():
    deopt 65 [r27];
  D19():
    deopt 69 [];
  L8(r13):
    st nd = r13;
    r18 = `<`(r13, 2);
    c5 = `as.logical`(r18);
    if c5 then L52() else L10();
  L17(r32):
    c8 = `as.logical`(r32);
    if c8 then L72() else L18();
  L42():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L45():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L46():
    r12 = dyn base3(<lang dim(x)>);
    goto L8(r12);
  L64():
    goto L14(r27);
  L66():
    r29 = dyn stop1("attempt to set 'colnames' on an object with less than two dimensions");
    check L67() else D20();
  L69():
    value6 = ld value;
    check L71() else D21();
  L70():
    r31 = dyn base7(<sym value>);
    goto L17(r31);
  D20():
    deopt 71 [r29];
  D21():
    deopt 75 [value6];
  L9(r15):
    length = ldf length in base;
    r17 = dyn length(r15);
    check L51() else D12();
  L10():
    goto L11();
  L11():
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L18():
    value8 = ld value;
    check L80() else D23();
  L21():
    dn4 = ld dn;
    check L84() else D24();
  L47():
    x7 = ld x;
    check L49() else D10();
  L48():
    r14 = dyn base4(<sym x>);
    goto L9(r14);
  L52():
    stop = ldf stop;
    check L53() else D13();
  L67():
    goto L16();
  L71():
    value7 = force? value6;
    checkMissing(value7);
    c7 = `==`(value7, NULL);
    goto L17(c7);
  L72():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  D10():
    deopt 35 [x7];
  D12():
    deopt 40 [r17];
  D13():
    deopt 45 [];
  D23():
    deopt 88 [value8];
  D24():
    deopt 95 [dn4];
  L12(r22):
    st dn = r22;
    goto L13();
  L19(r34):
    l1 = ld dn;
    c9 = `is.object`(l1);
    if c9 then L76() else L77(r34, l1);
  L49():
    x8 = force? x7;
    checkMissing(x8);
    dim = ldf dim in base;
    r16 = dyn dim(x8);
    check L50() else D11();
  L51():
    goto L8(r17);
  L53():
    r19 = dyn stop("attempt to set 'colnames' on an object with less than two dimensions");
    check L54() else D14();
  L56():
    nd = ld nd;
    check L58() else D15();
  L57():
    r21 = dyn base5("list", <sym nd>);
    goto L12(r21);
  L73():
    list = ldf list in base;
    r35 = dyn list(NULL);
    check L75() else D22();
  L74():
    r33 = dyn base8(NULL);
    goto L19(r33);
  L80():
    value9 = force? value8;
    checkMissing(value9);
    l4 = ld dn;
    c10 = `is.object`(l4);
    if c10 then L81() else L82(value9, l4);
  L84():
    dn5 = force? dn4;
    checkMissing(dn5);
    l7 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L85() else D25();
  D11():
    deopt 38 [r16];
  D14():
    deopt 47 [r19];
  D15():
    deopt 53 [nd];
  D22():
    deopt 82 [r35];
  D25():
    deopt 98 [dn5, l7, dn5];
  L20(r39, dx1):
    st dn = dx1;
    goto L21();
  L22(value13, dx3):
    st dn = dx3;
    goto L21();
  L50():
    goto L9(r16);
  L54():
    goto L11();
  L58():
    nd1 = force? nd;
    checkMissing(nd1);
    vector = ldf vector in base;
    r23 = dyn vector("list", nd1);
    check L59() else D16();
  L75():
    goto L19(r35);
  L76():
    dr = tryDispatchBuiltin.0("[<-", l1, r34);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L78() else L77(r34, dr);
  L77(r37, l3):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l3, r34, 2);
    goto L20(r37, r40);
  L81():
    dr2 = tryDispatchBuiltin.0("[[<-", l4, value9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L83() else L82(value9, dr2);
  L82(value11, l6):
    ____ = ldf `[[<-` in base;
    r42 = dyn ____(l6, value9, 2);
    goto L22(value11, r42);
  L85():
    r43 = dyn dimnames__(l7, NULL, dn5);
    check L86() else D26();
  D16():
    deopt 56 [r23];
  D26():
    deopt 100 [dn5, r43];
  L59():
    goto L12(r23);
  L78():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(r34, dx);
  L83():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(value9, dx2);
  L86():
    st x = r43;
    goto L1();
  }
}