fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083163048`;
    st `labels.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg object3:*, reg object4:V, reg dimnames:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg nt:*, reg nt1:V, reg c1:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r13:V, reg r14:V, reg d:*, reg d1:V, reg length1:cls, reg r15:V, reg vector:cls, reg r16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r18:V, reg r19:V, reg d2:*, reg d3:V, reg r20:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r21:V, reg i7:I, reg r22:V, reg nt2:*, reg nt3:V, reg c4:L, reg i9:I, reg nt5:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r23:V, reg length2:cls, reg r24:V, reg r25:V, reg c5:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r26:V, reg i18:I, reg r27:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r28:V, reg i21:I, reg r29:V, reg d4:*, reg d5:V, reg c6:L, reg i23:I, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i25:I, reg dx3:V, reg i26:*, reg i27:V, reg __1:cls, reg r30:V, reg r31:I, reg as_character:cls, reg r32:V, reg l1:*, reg c7:L, reg i29:I, reg r34:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i31:I, reg r36:V, reg dx5:V, reg i32:*, reg i33:V, reg ____:cls, reg r37:V, reg i34:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r39:V, reg r40:V, reg object5:*, reg object6:V, reg names:cls, reg r41:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r42:V, reg r43:V, reg nt6:*, reg nt7:V, reg length3:cls, reg r44:V, reg r45:V, reg c8:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg r47:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r48:V, reg r49:V, reg object7:*, reg object8:V, reg r50:I, reg as_character1:cls, reg r51:V, reg nt8:*, reg nt9:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    c = `as.logical`(r1);
    if c then L33() else L2();
  L26():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L27():
    r = dyn base(<lang `<-`(d, dim(object))>);
    goto L0(r);
  L1(r3):
    st d = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L32() else D2();
  L2():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L79() else L80();
  L20():
    nt8 = ld nt;
    check L95() else D23();
  L28():
    object1 = ld object;
    check L30() else D0();
  L29():
    r2 = dyn base1(<sym object>);
    goto L1(r2);
  L33():
    sym2 = ldf dimnames;
    base2 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  D0():
    deopt 4 [object1];
  D2():
    deopt 10 [r5];
  D23():
    deopt 96 [nt8];
  L3(r7):
    st nt = r7;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L21(r40):
    st nt = r40;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L83() else L84();
  L30():
    object2 = force? object1;
    checkMissing(object2);
    dim = ldf dim in base;
    r4 = dyn dim(object2);
    check L31() else D1();
  L32():
    goto L0(r5);
  L34():
    object3 = ld object;
    check L36() else D3();
  L35():
    r6 = dyn base2(<sym object>);
    goto L3(r6);
  L79():
    object5 = ld object;
    check L81() else D17();
  L80():
    r39 = dyn base10(<sym object>);
    goto L21(r39);
  L95():
    nt9 = force? nt8;
    checkMissing(nt9);
    popenv;
    return nt9;
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [object3];
  D17():
    deopt 73 [object5];
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L41() else L5();
  L22(r43):
    r45 = `!`(r43);
    c8 = `as.logical`(r45);
    if c8 then L87() else L23();
  L31():
    goto L1(r4);
  L36():
    object4 = force? object3;
    checkMissing(object4);
    dimnames = ldf dimnames in base;
    r8 = dyn dimnames(object4);
    check L37() else D4();
  L38():
    nt = ld nt;
    check L40() else D5();
  L39():
    r9 = dyn base3(<sym nt>);
    goto L4(r9);
  L81():
    object6 = force? object5;
    checkMissing(object6);
    names = ldf names in base;
    r41 = dyn names(object6);
    check L82() else D18();
  L83():
    nt6 = ld nt;
    check L85() else D19();
  L84():
    r42 = dyn base11(<sym nt>);
    goto L22(r42);
  D4():
    deopt 16 [r8];
  D5():
    deopt 19 [nt];
  D18():
    deopt 76 [r41];
  D19():
    deopt 80 [nt6];
  L5():
    goto L8();
  L8():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  L23():
    goto L20();
  L37():
    goto L3(r8);
  L40():
    nt1 = force? nt;
    checkMissing(nt1);
    c1 = `==`(nt1, NULL);
    goto L4(c1);
  L41():
    sym4 = ldf vector;
    base4 = ldf vector in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L82():
    goto L21(r41);
  L85():
    nt7 = force? nt6;
    checkMissing(nt7);
    length3 = ldf length in base;
    r44 = dyn length3(nt7);
    check L86() else D20();
  L87():
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L88() else L89();
  D20():
    deopt 83 [r44];
  L6(r12):
    st nt = r12;
    goto L8();
  L9(r19):
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L10(i);
  L24(r47):
    st nt = r47;
    goto L20();
  L42():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L43():
    r11 = dyn base4("list", <lang length(d)>);
    goto L6(r11);
  L50():
    d2 = ld d;
    check L52() else D9();
  L51():
    r18 = dyn base6(<sym d>);
    goto L9(r18);
  L86():
    goto L22(r44);
  L88():
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L90() else L91();
  L89():
    r46 = dyn base12(<lang seq_along(object)>);
    goto L24(r46);
  D9():
    deopt 37 [d2];
  L7(r14):
    vector = ldf vector in base;
    r16 = dyn vector("list", r14);
    check L48() else D8();
  L10(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L53() else L19();
  L25(r49):
    as_character1 = ldf `as.character` in base;
    r51 = dyn as_character1(r49);
    check L93() else D22();
  L44():
    d = ld d;
    check L46() else D6();
  L45():
    r13 = dyn base5(<sym d>);
    goto L7(r13);
  L52():
    d3 = force? d2;
    checkMissing(d3);
    r20 = seq_along(d3);
    goto L9(r20);
  L90():
    object7 = ld object;
    check L92() else D21();
  L91():
    r48 = dyn base13(<sym object>);
    goto L25(r48);
  D6():
    deopt 27 [d];
  D8():
    deopt 32 [r16];
  D21():
    deopt 88 [object7];
  D22():
    deopt 92 [r51];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L46():
    d1 = force? d;
    checkMissing(d1);
    length1 = ldf length in base;
    r15 = dyn length1(d1);
    check L47() else D7();
  L48():
    goto L6(r16);
  L53():
    goto L20();
  L92():
    object8 = force? object7;
    checkMissing(object8);
    r50 = seq_along(object8);
    goto L25(r50);
  L93():
    goto L24(r51);
  D7():
    deopt 30 [r15];
  L11(i7, r22):
    r25 = `!`(r22);
    c5 = `as.logical`(r25);
    if c5 then L62() else L13();
  L47():
    goto L7(r15);
  L54():
    nt2 = ld nt;
    check L56() else D10();
  L55():
    r21 = dyn base7(<lang `[[`(nt, i)>);
    goto L11(i2, r21);
  D10():
    deopt 42 [i2, nt2];
  L13():
    goto L18(i7);
  L18(i34):
    goto L10(i34);
  L56():
    nt3 = force? nt2;
    checkMissing(nt3);
    c4 = `is.object`(nt3);
    if c4 then L57() else L58(i2, nt3);
  L62():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L63() else L64();
  L12(i11, dx1):
    length2 = ldf length in base;
    r24 = dyn length2(dx1);
    check L61() else D12();
  L14(i18, r27):
    l1 = ld nt;
    c7 = `is.object`(l1);
    if c7 then L73() else L74(i18, r27, l1);
  L57():
    dr = tryDispatchBuiltin.1("[[", nt3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(i2, dr);
  L58(i9, nt5):
    i12 = ld i;
    check L60() else D11();
  L63():
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L65() else L66();
  L64():
    r26 = dyn base8(<lang seq_len(`[`(d, i))>);
    goto L14(i7, r26);
  D11():
    deopt 44 [i9, nt5, i12];
  D12():
    deopt 48 [i11, r24];
  L15(i21, r29):
    as_character = ldf `as.character` in base;
    r32 = dyn as_character(r29);
    check L72() else D15();
  L17(i31, r36, dx5):
    st nt = dx5;
    goto L18(i31);
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(i2, dx);
  L60():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r23 = dyn __(nt5, i13);
    goto L12(i9, r23);
  L61():
    goto L11(i11, r24);
  L65():
    d4 = ld d;
    check L67() else D13();
  L66():
    r28 = dyn base9(<lang `[`(d, i)>);
    goto L15(i7, r28);
  L73():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r27);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(i18, r27, dr4);
  L74(i29, r34, l3):
    i32 = ld i;
    check L76() else D16();
  D13():
    deopt 53 [i7, d4];
  D15():
    deopt 60 [i21, r32];
  D16():
    deopt 62 [i29, r34, l3, r27, i32];
  L67():
    d5 = force? d4;
    checkMissing(d5);
    c6 = `is.object`(d5);
    if c6 then L68() else L69(i7, d5);
  L72():
    goto L14(i21, r32);
  L75():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(i18, r27, dx4);
  L76():
    i33 = force? i32;
    ____ = ldf `[[<-` in base;
    r37 = dyn ____(l3, r27, i33);
    goto L17(i29, r34, r37);
  L16(i25, dx3):
    r31 = seq_len(dx3);
    goto L15(i25, r31);
  L68():
    dr2 = tryDispatchBuiltin.1("[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(i7, dr2);
  L69(i23, d7):
    i26 = ld i;
    check L71() else D14();
  D14():
    deopt 55 [i23, d7, i26];
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(i7, dx2);
  L71():
    i27 = force? i26;
    __1 = ldf `[` in base;
    r30 = dyn __1(d7, i27);
    goto L16(i23, r30);
  }
}