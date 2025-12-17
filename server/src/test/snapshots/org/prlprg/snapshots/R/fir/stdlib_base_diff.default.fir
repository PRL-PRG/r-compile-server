fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2057109278;
    st `diff.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2057109278(x, lag, differences, `...`) {
  (reg x:*, reg lag:*, reg differences:*, reg ddd:dots) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var differences:*, reg differences_isMissing:L, reg differences_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg ismat:*, reg ismat1:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg dim:cls, reg r5:V, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg dx2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg x5:*, reg x6:V, reg length:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg lag1:*, reg lag2:V, reg length1:cls, reg r13:V, reg r14:V, reg c2:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c7:L, reg r16:V, reg differences1:*, reg differences2:V, reg length2:cls, reg r17:V, reg r18:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg lag3:*, reg lag4:V, reg r19:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg differences3:*, reg differences4:V, reg r20:V, reg c20:L, reg c21:V, reg c23:L, reg stop:cls, reg r21:V, reg lag5:*, reg lag6:V, reg differences5:*, reg differences6:V, reg r23:V, reg xlen:*, reg xlen1:V, reg r24:V, reg c24:L, reg x7:*, reg x8:V, reg c25:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x11:*, reg x12:V, reg unclass:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg lag7:*, reg lag8:V, reg r33:I, reg r34:V, reg ismat2:*, reg ismat3:V, reg c26:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg differences7:*, reg differences8:V, reg r37:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x13:V, reg r38:*, reg r39:V, reg c28:L, reg i6:I, reg r41:V, reg dr4:V, reg dc2:L, reg dx5:V, reg i8:I, reg dx6:V, reg i9:*, reg i10:V, reg __2:cls, reg r42:V, reg r43:*, reg r44:V, reg c29:L, reg i12:I, reg dx8:V, reg r46:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i14:I, reg dx11:V, reg dx12:V, reg nrow:cls, reg r47:*, reg r48:V, reg p:p(V +), reg r50:V, reg r51:V, reg nrow1:cls, reg r52:*, reg r53:V, reg p1:p(V +), reg r55:V, reg lag9:*, reg lag10:V, reg r56:V, reg r57:V, reg r58:V, reg r59:V, reg __3:cls, reg r60:V, reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg differences9:*, reg differences10:V, reg r64:I, reg s1:V, reg l1:I, reg i16:I, reg i17:I, reg i18:I, reg c30:L, reg x14:V, reg r65:*, reg r66:V, reg c31:L, reg i22:I, reg r68:V, reg dr8:V, reg dc4:L, reg dx13:V, reg i24:I, reg dx14:V, reg i25:*, reg i26:V, reg __4:cls, reg r69:V, reg r70:*, reg r71:V, reg c32:L, reg i28:I, reg dx16:V, reg r73:V, reg dr10:V, reg dc5:L, reg dx18:V, reg i30:I, reg dx19:V, reg dx20:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg i33:I, reg dx23:V, reg r77:V, reg r78:V, reg r79:*, reg r80:V, reg length3:cls, reg r81:V, reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg i36:I, reg dx26:V, reg r88:V, reg r89:V, reg r90:V, reg r91:*, reg r92:V, reg length4:cls, reg r93:V, reg lag11:*, reg lag12:V, reg r94:V, reg r95:V, reg r96:V, reg r97:V, reg __5:cls, reg r98:V, reg r99:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r100:V, reg r101:V, reg x15:*, reg x16:V, reg oldClass:cls, reg r102:V, reg l2:*, reg class__:cls, reg r103:V, reg r104:*, reg r105:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    differences_isMissing = missing.0(differences);
    if differences_isMissing then L1(1) else L1(differences);
  L1(differences_orDefault):
    st differences = differences_orDefault;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L2(r1):
    st ismat = r1;
    ismat = ld ismat;
    check L38() else D2();
  L34():
    x1 = ld x;
    check L36() else D0();
  L35():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [ismat];
  L36():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L37() else D1();
  L38():
    ismat1 = force? ismat;
    checkMissing(ismat1);
    c = `as.logical`(ismat1);
    if c then L39() else L3();
  D1():
    deopt 5 [r2];
  L3():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L6(dx2):
    st xlen = dx2;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L37():
    goto L2(r2);
  L39():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L4(r4):
    c1 = `is.object`(r4);
    if c1 then L44() else L45(r4);
  L7(r12):
    r14 = `!=`(r12, 1);
    c2 = `as.logical`(r14);
    if c2 then L8(c2) else L56();
  L40():
    x3 = ld x;
    check L42() else D3();
  L41():
    r3 = dyn base1(<sym x>);
    goto L4(r3);
  L48():
    x5 = ld x;
    check L50() else D5();
  L49():
    r9 = dyn base2(<sym x>);
    goto L6(r9);
  L52():
    lag1 = ld lag;
    check L54() else D7();
  L53():
    r11 = dyn base3(<sym lag>);
    goto L7(r11);
  D3():
    deopt 11 [x3];
  D5():
    deopt 20 [x5];
  D7():
    deopt 27 [lag1];
  L5(dx1):
    goto L6(dx1);
  L8(c3):
    c11 = `as.logical`(c3);
    if c11 then L10(c11) else L62();
  L42():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r5 = dyn dim(x4);
    check L43() else D4();
  L44():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(r7):
    __ = ldf `[` in base;
    r8 = dyn __(r7, 1);
    goto L5(r8);
  L50():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r10 = dyn length(x6);
    check L51() else D6();
  L54():
    lag2 = force? lag1;
    checkMissing(lag2);
    length1 = ldf length in base;
    r13 = dyn length1(lag2);
    check L55() else D8();
  L56():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  D4():
    deopt 14 [r5];
  D6():
    deopt 23 [r10];
  D8():
    deopt 30 [r13];
  L9(c7, r16):
    r18 = `!=`(r16, 1);
    c8 = `as.logical`(r18);
    c9 = `||`(c7, c8);
    goto L8(c9);
  L10(c12):
    c17 = `as.logical`(c12);
    if c17 then L11(c17) else L65();
  L43():
    goto L4(r5);
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L51():
    goto L6(r10);
  L55():
    goto L7(r13);
  L57():
    differences1 = ld differences;
    check L59() else D9();
  L58():
    r15 = dyn base4(<sym differences>);
    goto L9(c2, r15);
  L62():
    lag3 = ld lag;
    check L63() else D11();
  D9():
    deopt 35 [c2, differences1];
  D11():
    deopt 42 [c11, lag3];
  L11(c18):
    c23 = `as.logical`(c18);
    if c23 then L68() else L12();
  L59():
    differences2 = force? differences1;
    checkMissing(differences2);
    length2 = ldf length in base;
    r17 = dyn length2(differences2);
    check L60() else D10();
  L63():
    lag4 = force? lag3;
    checkMissing(lag4);
    r19 = `<`(lag4, 1);
    c14 = `as.logical`(r19);
    c15 = `||`(c11, c14);
    goto L10(c15);
  L65():
    differences3 = ld differences;
    check L66() else D12();
  D10():
    deopt 38 [c2, r17];
  D12():
    deopt 47 [c17, differences3];
  L12():
    goto L13();
  L13():
    lag5 = ld lag;
    check L72() else D15();
  L60():
    goto L9(c2, r17);
  L66():
    differences4 = force? differences3;
    checkMissing(differences4);
    r20 = `<`(differences4, 1);
    c20 = `as.logical`(r20);
    c21 = `||`(c17, c20);
    goto L11(c21);
  L68():
    stop = ldf stop;
    check L69() else D13();
  D13():
    deopt 53 [];
  D15():
    deopt 58 [lag5];
  L69():
    r21 = dyn stop("'lag' and 'differences' must be integers >= 1");
    check L70() else D14();
  L72():
    lag6 = force? lag5;
    checkMissing(lag6);
    differences5 = ld differences;
    check L73() else D16();
  D14():
    deopt 55 [r21];
  D16():
    deopt 59 [lag6, differences5];
  L70():
    goto L13();
  L73():
    differences6 = force? differences5;
    checkMissing(differences6);
    r23 = `*`(lag6, differences6);
    xlen = ld xlen;
    check L74() else D17();
  D17():
    deopt 61 [r23, xlen];
  L74():
    xlen1 = force? xlen;
    checkMissing(xlen1);
    r24 = `>=`(r23, xlen1);
    c24 = `as.logical`(r24);
    if c24 then L75() else L14();
  L14():
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L75():
    x7 = ld x;
    check L76() else D18();
  D18():
    deopt 64 [x7];
  L17(r29):
    st r = r29;
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L76():
    x8 = force? x7;
    checkMissing(x8);
    c25 = `is.object`(x8);
    if c25 then L77() else L78(x8);
  L82():
    x11 = ld x;
    check L84() else D19();
  L83():
    r28 = dyn base5(<sym x>);
    goto L17(r28);
  D19():
    deopt 74 [x11];
  L15(dx4):
    popenv;
    return dx4;
  L18(r32):
    r34 = `-`(<missing>, r32);
    st i1 = r34;
    ismat2 = ld ismat;
    check L89() else D22();
  L77():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(dr2);
  L78(x10):
    __1 = ldf `[` in base;
    r25 = dyn __1(x10, 0);
    goto L15(r25);
  L84():
    x12 = force? x11;
    checkMissing(x12);
    unclass = ldf unclass in base;
    r30 = dyn unclass(x12);
    check L85() else D20();
  L86():
    lag7 = ld lag;
    check L88() else D21();
  L87():
    r31 = dyn base6(<sym lag>);
    goto L18(r31);
  D20():
    deopt 77 [r30];
  D21():
    deopt 80 [lag7];
  D22():
    deopt 85 [ismat2];
  L79():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx3);
  L85():
    goto L17(r30);
  L88():
    lag8 = force? lag7;
    checkMissing(lag8);
    r33 = seq_len(lag8);
    goto L18(r33);
  L89():
    ismat3 = force? ismat2;
    checkMissing(ismat3);
    c26 = `as.logical`(ismat3);
    if c26 then L90() else L19();
  L19():
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L25():
    sym11 = ldf oldClass;
    base11 = ldf oldClass in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L132() else L133();
  L90():
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L20(r36):
    s = toForSeq(r36);
    l = length(s);
    i = 0;
    goto L21(i);
  L26(r63):
    s1 = toForSeq(r63);
    l1 = length(s1);
    i16 = 0;
    goto L27(i16);
  L33(r101):
    l2 = ld r;
    class__ = ldf `class<-`;
    check L136() else D43();
  L91():
    differences7 = ld differences;
    check L93() else D23();
  L92():
    r35 = dyn base7(<sym differences>);
    goto L20(r35);
  L110():
    differences9 = ld differences;
    check L112() else D32();
  L111():
    r62 = dyn base8(<sym differences>);
    goto L26(r62);
  L132():
    x15 = ld x;
    check L134() else D41();
  L133():
    r100 = dyn base11(<sym x>);
    goto L33(r100);
  D23():
    deopt 88 [differences7];
  D32():
    deopt 126 [differences9];
  D41():
    deopt 161 [x15];
  D43():
    deopt 166 [r101, l2, r101];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l, i2);
    if c27 then L94() else L24();
  L27(i17):
    i18 = `+`.1(i17, 1);
    c30 = `<`.1(l1, i18);
    if c30 then L113() else L32();
  L93():
    differences8 = force? differences7;
    checkMissing(differences8);
    r37 = seq_len(differences8);
    goto L20(r37);
  L112():
    differences10 = force? differences9;
    checkMissing(differences10);
    r64 = seq_len(differences10);
    goto L26(r64);
  L134():
    x16 = force? x15;
    checkMissing(x16);
    oldClass = ldf oldClass in base;
    r102 = dyn oldClass(x16);
    check L135() else D42();
  L136():
    r103 = dyn class__(l2, NULL, r101);
    check L137() else D44();
  D42():
    deopt 164 [r102];
  D44():
    deopt 168 [r101, r103];
  L24():
    x13 = `[[`(s, i2, NULL, TRUE);
    st i = x13;
    r38 = ld r;
    check L95() else D24();
  L32():
    x14 = `[[`(s1, i18, NULL, TRUE);
    st i = x14;
    r65 = ld r;
    check L114() else D33();
  L94():
    goto L25();
  L113():
    goto L25();
  L135():
    goto L33(r102);
  L137():
    st r = r103;
    r104 = ld r;
    check L138() else D45();
  D24():
    deopt 91 [i2, r38];
  D33():
    deopt 129 [i18, r65];
  D45():
    deopt 170 [r104];
  L95():
    r39 = force? r38;
    checkMissing(r39);
    c28 = `is.object`(r39);
    if c28 then L96() else L97(i2, r39);
  L114():
    r66 = force? r65;
    checkMissing(r66);
    c31 = `is.object`(r66);
    if c31 then L115() else L116(i18, r66);
  L138():
    r105 = force? r104;
    checkMissing(r105);
    popenv;
    return r105;
  L22(i8, dx6):
    r43 = ld r;
    check L100() else D26();
  L28(i24, dx14):
    r70 = ld r;
    check L119() else D35();
  L96():
    dr4 = tryDispatchBuiltin.1("[", r39);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L98() else L97(i2, dr4);
  L97(i6, r41):
    i9 = ld i1;
    check L99() else D25();
  L115():
    dr8 = tryDispatchBuiltin.1("[", r66);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L117() else L116(i18, dr8);
  L116(i22, r68):
    i25 = ld i1;
    check L118() else D34();
  D25():
    deopt 93 [i6, r41, i9];
  D26():
    deopt 99 [i8, dx6, r43];
  D34():
    deopt 131 [i22, r68, i25];
  D35():
    deopt 133 [i24, dx14, r70];
  L98():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L22(i2, dx5);
  L99():
    i10 = force? i9;
    __2 = ldf `[` in base;
    r42 = dyn __2(r39, i10, <missing>, FALSE);
    goto L22(i6, r42);
  L100():
    r44 = force? r43;
    checkMissing(r44);
    c29 = `is.object`(r44);
    if c29 then L101() else L102(i8, dx6, r44);
  L117():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L28(i18, dx13);
  L118():
    i26 = force? i25;
    __4 = ldf `[` in base;
    r69 = dyn __4(r68, i26);
    goto L28(i22, r69);
  L119():
    r71 = force? r70;
    checkMissing(r71);
    c32 = `is.object`(r71);
    if c32 then L120() else L121(i24, dx14, r71);
  L23(i14, dx11, dx12):
    r61 = `-`(dx11, dx12);
    st r = r61;
    goto L21(i14);
  L29(i30, dx19, dx20):
    r99 = `-`(dx19, dx20);
    st r = r99;
    goto L27(i30);
  L101():
    dr6 = tryDispatchBuiltin.1("[", r44);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L103() else L102(i8, dx6, dr6);
  L102(i12, dx8, r46):
    nrow = ldf nrow;
    check L104() else D27();
  L120():
    dr10 = tryDispatchBuiltin.1("[", r71);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L122() else L121(i24, dx14, dr10);
  L121(i28, dx16, r73):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L123() else L124();
  D27():
    deopt 102 [i12, dx8, r46];
  L30(i33, dx23, r77, r78):
    r82 = `-`(<missing>, r78);
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L127() else L128();
  L103():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L23(i8, dx6, dx10);
  L104():
    p = prom<V +>{
      r47 = ld r;
      r48 = force? r47;
      checkMissing(r48);
      return r48;
    };
    r50 = dyn nrow(p);
    check L105() else D28();
  L122():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L29(i24, dx14, dx18);
  L123():
    r79 = ld r;
    check L125() else D36();
  L124():
    r76 = dyn base9(<sym r>);
    goto L30(i28, dx16, r73, r76);
  D28():
    deopt 104 [i12, dx8, r46, r50];
  D36():
    deopt 137 [i28, dx16, r73, r79];
  L31(i36, dx26, r88, r89, r90):
    lag11 = ld lag;
    check L131() else D40();
  L105():
    r51 = `-`(<missing>, r50);
    nrow1 = ldf nrow;
    check L106() else D29();
  L125():
    r80 = force? r79;
    checkMissing(r80);
    length3 = ldf length in base;
    r81 = dyn length3(r80);
    check L126() else D37();
  L127():
    r91 = ld r;
    check L129() else D38();
  L128():
    r87 = dyn base10(<sym r>);
    goto L31(i33, dx23, r77, r82, r87);
  D29():
    deopt 106 [i12, dx8, r46, r51];
  D37():
    deopt 140 [i28, dx16, r73, r81];
  D38():
    deopt 143 [i33, dx23, r77, r82, r91];
  D40():
    deopt 146 [i36, dx26, r88, r89, r90, lag11];
  L106():
    p1 = prom<V +>{
      r52 = ld r;
      r53 = force? r52;
      checkMissing(r53);
      return r53;
    };
    r55 = dyn nrow1(p1);
    check L107() else D30();
  L126():
    goto L30(i28, dx16, r73, r81);
  L129():
    r92 = force? r91;
    checkMissing(r92);
    length4 = ldf length in base;
    r93 = dyn length4(r92);
    check L130() else D39();
  L131():
    lag12 = force? lag11;
    checkMissing(lag12);
    r94 = `-`(r90, lag12);
    r95 = `+`(r94, 1);
    r96 = `-`(<missing>, r95);
    r97 = `:`(r89, r96);
    __5 = ldf `[` in base;
    r98 = dyn __5(r88, r97);
    goto L29(i36, dx26, r98);
  D30():
    deopt 108 [i12, dx8, r46, r51, r55];
  D39():
    deopt 146 [i33, dx23, r77, r82, r93];
  L107():
    lag9 = ld lag;
    check L108() else D31();
  L130():
    goto L31(i33, dx23, r77, r82, r93);
  D31():
    deopt 108 [i12, dx8, r46, r51, r55, lag9];
  L108():
    lag10 = force? lag9;
    checkMissing(lag10);
    r56 = `-`(r55, lag10);
    r57 = `+`(r56, 1);
    r58 = `-`(<missing>, r57);
    r59 = `:`(r51, r58);
    __3 = ldf `[` in base;
    r60 = dyn __3(r44, r59, <missing>, FALSE);
    goto L23(i12, dx8, r60);
  }
}