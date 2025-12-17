fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner785164255;
    st `naresid.exclude` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner785164255(omit, x, `...`) {
  (reg omit:*, reg x:*, reg ddd:dots) -+> V { var omit:*, var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg omit1:*, reg omit2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg omit3:*, reg omit4:V, reg is_numeric:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg c10:V, reg c11:L, reg x3:*, reg x4:V, reg NROW:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg n:*, reg n1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg n4:V, reg r19:V, reg omit5:*, reg omit6:V, reg length1:cls, reg r20:V, reg r21:V, reg rep_int:cls, reg r22:V, reg n5:*, reg n6:V, reg r23:V, reg l:*, reg c12:L, reg r25:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg omit7:*, reg omit8:V, reg r28:V, reg ___:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg x7:*, reg x8:V, reg is_matrix:cls, reg r32:V, reg c13:L, reg x9:*, reg x10:V, reg c14:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep:*, reg keep1:V, reg __:cls, reg r33:V, reg rownames:cls, reg x13:*, reg x14:V, reg p1:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg temp:*, reg temp1:V, reg length2:cls, reg r38:V, reg c15:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg omit9:*, reg omit10:V, reg names:cls, reg r41:V, reg l3:*, reg c16:L, reg r43:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg omit11:*, reg omit12:V, reg ___1:cls, reg r46:V, reg temp2:*, reg temp3:V, reg l6:*, reg rownames__:cls, reg r47:V, reg temp4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg x15:*, reg x16:V, reg is_array:cls, reg r50:V, reg c17:L, reg c19:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg c22:L, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg c25:L, reg r54:V, reg x17:*, reg x18:V, reg dim:cls, reg r55:V, reg length3:cls, reg r56:V, reg r57:V, reg c26:L, reg c27:V, reg c29:L, reg x19:*, reg x20:V, reg c30:L, reg x22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep2:*, reg keep3:V, reg __1:cls, reg r58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg x23:*, reg x24:V, reg dimnames:cls, reg r61:V, reg c31:L, reg r63:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r64:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg temp6:*, reg temp7:V, reg c32:V, reg r67:V, reg c33:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg omit13:*, reg omit14:V, reg names1:cls, reg r70:V, reg l7:*, reg c34:L, reg r72:V, reg l9:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg omit15:*, reg omit16:V, reg ___2:cls, reg r75:V, reg temp8:*, reg temp9:V, reg l10:*, reg dimnames1:cls, reg r76:V, reg c35:L, reg temp11:V, reg l12:*, reg r78:V, reg dr12:V, reg dc6:L, reg dx12:V, reg temp13:V, reg l14:*, reg dx13:V, reg ____:cls, reg r79:V, reg dimnames__:cls, reg r80:V, reg temp14:V, reg x25:*, reg x26:V, reg c36:L, reg x28:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg keep4:*, reg keep5:V, reg __3:cls, reg r81:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg r83:V, reg x29:*, reg x30:V, reg names2:cls, reg r84:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r85:V, reg r86:V, reg temp15:*, reg temp16:V, reg length4:cls, reg r87:V, reg c37:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r88:V, reg r89:V, reg omit17:*, reg omit18:V, reg names3:cls, reg r90:V, reg l15:*, reg c38:L, reg r92:V, reg l17:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg omit19:*, reg omit20:V, reg ___3:cls, reg r95:V, reg temp17:*, reg temp18:V, reg l18:*, reg names__:cls, reg r96:V, reg x31:*, reg x32:V |
    mkenv;
    st omit = omit;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L0(r1):
    r3 = `==`(r1, 0.0);
    c = `as.logical`(r3);
    if c then L1(c) else L44();
  L40():
    omit1 = ld omit;
    check L42() else D0();
  L41():
    r = dyn base(<sym omit>);
    goto L0(r);
  D0():
    deopt 2 [omit1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L50() else L3();
  L42():
    omit2 = force? omit1;
    checkMissing(omit2);
    length = ldf length in base;
    r2 = dyn length(omit2);
    check L43() else D1();
  L44():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L43():
    goto L0(r2);
  L45():
    omit3 = ld omit;
    check L47() else D2();
  L46():
    r4 = dyn base1(<sym omit>);
    goto L2(c, r4);
  L50():
    stop = ldf stop;
    check L51() else D4();
  D2():
    deopt 10 [c, omit3];
  D4():
    deopt 17 [];
  L5(r11):
    c11 = `as.logical`(r11);
    if c11 then L57() else L6();
  L47():
    omit4 = force? omit3;
    checkMissing(omit4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(omit4);
    check L48() else D3();
  L51():
    r8 = dyn stop("invalid argument 'omit'");
    check L52() else D5();
  L54():
    x1 = ld x;
    check L56() else D6();
  L55():
    r10 = dyn base2(<sym x>);
    goto L5(r10);
  D3():
    deopt 13 [c, r6];
  D5():
    deopt 19 [r8];
  D6():
    deopt 23 [x1];
  L6():
    NROW = ldf NROW;
    check L61() else D8();
  L48():
    goto L2(c, r6);
  L52():
    goto L4();
  L56():
    x2 = force? x1;
    checkMissing(x2);
    c10 = `==`(x2, NULL);
    goto L5(c10);
  L57():
    x3 = ld x;
    check L58() else D7();
  D7():
    deopt 26 [x3];
  D8():
    deopt 32 [];
  L58():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L61():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r15 = dyn NROW(p);
    check L62() else D9();
  D9():
    deopt 34 [r15];
  L62():
    st n = r15;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L8(r17):
    st keep = r17;
    n5 = ld n;
    check L71() else D14();
  L63():
    n = ld n;
    check L65() else D10();
  L64():
    r16 = dyn base3(NA_LGL, <lang `+`(n, length(omit))>);
    goto L8(r16);
  D10():
    deopt 39 [n];
  D14():
    deopt 51 [1, n5];
  L65():
    n1 = force? n;
    checkMissing(n1);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L71():
    n6 = force? n5;
    checkMissing(n6);
    r23 = `:`(1, n6);
    l = ld keep;
    c12 = `is.object`(l);
    if c12 then L72() else L73(r23, l);
  L9(n4, r19):
    r21 = `+`(n4, r19);
    rep_int = ldf `rep.int` in base;
    r22 = dyn rep_int(NA_LGL, r21);
    check L70() else D13();
  L10(dx1):
    st keep = dx1;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L66():
    omit5 = ld omit;
    check L68() else D11();
  L67():
    r18 = dyn base4(<sym omit>);
    goto L9(n1, r18);
  L72():
    dr = tryDispatchBuiltin.0("[<-", l, r23);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(r23, dr);
  L73(r25, l2):
    omit7 = ld omit;
    check L75() else D15();
  D11():
    deopt 42 [n1, omit5];
  D13():
    deopt 48 [r22];
  D15():
    deopt 55 [r25, l2, r23, omit7];
  L11(r31):
    c13 = `as.logical`(r31);
    if c13 then L80() else L12();
  L68():
    omit6 = force? omit5;
    checkMissing(omit6);
    length1 = ldf length in base;
    r20 = dyn length1(omit6);
    check L69() else D12();
  L70():
    goto L8(r22);
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L75():
    omit8 = force? omit7;
    checkMissing(omit8);
    r28 = `-`(<missing>, omit8);
    ___ = ldf `[<-` in base;
    r29 = dyn ___(l2, r23, r28);
    goto L10(r29);
  L76():
    x7 = ld x;
    check L78() else D16();
  L77():
    r30 = dyn base5(<sym x>);
    goto L11(r30);
  D12():
    deopt 45 [n1, r20];
  D16():
    deopt 62 [x7];
  L12():
    sym8 = ldf `is.array`;
    base8 = ldf `is.array` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L106() else L107();
  L19():
    x31 = ld x;
    check L180() else D60();
  L69():
    goto L9(n1, r20);
  L78():
    x8 = force? x7;
    checkMissing(x8);
    is_matrix = ldf `is.matrix` in base;
    r32 = dyn is_matrix(x8);
    check L79() else D17();
  L80():
    x9 = ld x;
    check L81() else D18();
  D17():
    deopt 65 [r32];
  D18():
    deopt 66 [x9];
  D60():
    deopt 220 [x31];
  L20(r49):
    c17 = `as.logical`(r49);
    if c17 then L110() else L21(c17);
  L79():
    goto L11(r32);
  L81():
    x10 = force? x9;
    checkMissing(x10);
    c14 = `is.object`(x10);
    if c14 then L82() else L83(x10);
  L106():
    x15 = ld x;
    check L108() else D30();
  L107():
    r48 = dyn base8(<sym x>);
    goto L20(r48);
  L180():
    x32 = force? x31;
    checkMissing(x32);
    popenv;
    return x32;
  D30():
    deopt 109 [x15];
  L13(dx3):
    st x = dx3;
    rownames = ldf rownames;
    check L86() else D20();
  L21(c19):
    c29 = `as.logical`(c19);
    if c29 then L119() else L24();
  L82():
    dr2 = tryDispatchBuiltin.1("[", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L84() else L83(dr2);
  L83(x12):
    keep = ld keep;
    check L85() else D19();
  L108():
    x16 = force? x15;
    checkMissing(x16);
    is_array = ldf `is.array` in base;
    r50 = dyn is_array(x16);
    check L109() else D31();
  L110():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L111() else L112();
  D19():
    deopt 68 [x12, keep];
  D20():
    deopt 77 [];
  D31():
    deopt 112 [r50];
  L22(c22, r52):
    r57 = `>`(r52, 2);
    c26 = `as.logical`(r57);
    c27 = `&&`(c22, c26);
    goto L21(c27);
  L24():
    x25 = ld x;
    check L154() else D48();
  L84():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L85():
    keep1 = force? keep;
    __ = ldf `[` in base;
    r33 = dyn __(x10, keep1, <missing>, FALSE);
    goto L13(r33);
  L86():
    p1 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r35 = dyn rownames(p1);
    check L87() else D21();
  L109():
    goto L20(r50);
  L111():
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L112():
    r51 = dyn base9(<lang `<-`(d, dim(x))>);
    goto L22(c17, r51);
  L119():
    x19 = ld x;
    check L120() else D35();
  D21():
    deopt 79 [r35];
  D35():
    deopt 127 [x19];
  D48():
    deopt 181 [x25];
  L23(c25, r54):
    st d = r54;
    length3 = ldf length in base;
    r56 = dyn length3(r54);
    check L117() else D34();
  L87():
    st temp = r35;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  L113():
    x17 = ld x;
    check L115() else D32();
  L114():
    r53 = dyn base10(<sym x>);
    goto L23(c17, r53);
  L120():
    x20 = force? x19;
    checkMissing(x20);
    c30 = `is.object`(x20);
    if c30 then L121() else L122(x20);
  L154():
    x26 = force? x25;
    checkMissing(x26);
    c36 = `is.object`(x26);
    if c36 then L155() else L156(x26);
  D32():
    deopt 117 [c17, x17];
  D34():
    deopt 123 [c25, r56];
  L14(r37):
    c15 = `as.logical`(r37);
    if c15 then L92() else L15();
  L25(dx7):
    st x = dx7;
    sym11 = ldf dimnames;
    base11 = ldf dimnames in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L125() else L126();
  L34(dx15):
    st x = dx15;
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L159() else L160();
  L88():
    temp = ld temp;
    check L90() else D22();
  L89():
    r36 = dyn base6(<sym temp>);
    goto L14(r36);
  L115():
    x18 = force? x17;
    checkMissing(x18);
    dim = ldf dim in base;
    r55 = dyn dim(x18);
    check L116() else D33();
  L117():
    goto L22(c25, r56);
  L121():
    dr6 = tryDispatchBuiltin.1("[", x20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L123() else L122(dr6);
  L122(x22):
    keep2 = ld keep;
    check L124() else D36();
  L155():
    dr14 = tryDispatchBuiltin.1("[", x26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L157() else L156(dr14);
  L156(x28):
    keep4 = ld keep;
    check L158() else D49();
  D22():
    deopt 83 [temp];
  D33():
    deopt 120 [c17, r55];
  D36():
    deopt 129 [x22, keep2];
  D49():
    deopt 183 [x28, keep4];
  L15():
    goto L18(NULL);
  L18(temp4):
    goto L19();
  L26(r60):
    st dn = r60;
    c31 = `is.object`(r60);
    if c31 then L129() else L130(r60);
  L35(r83):
    st temp = r83;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L163() else L164();
  L90():
    temp1 = force? temp;
    checkMissing(temp1);
    length2 = ldf length in base;
    r38 = dyn length2(temp1);
    check L91() else D23();
  L92():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  L116():
    goto L23(c17, r55);
  L123():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L25(dx6);
  L124():
    keep3 = force? keep2;
    __1 = ldf `[` in base;
    r58 = dyn __1(x20, keep3, <missing>, <missing>, FALSE);
    goto L25(r58);
  L125():
    x23 = ld x;
    check L127() else D37();
  L126():
    r59 = dyn base11(<sym x>);
    goto L26(r59);
  L157():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L34(dx14);
  L158():
    keep5 = force? keep4;
    __3 = ldf `[` in base;
    r81 = dyn __3(x28, keep5);
    goto L34(r81);
  L159():
    x29 = ld x;
    check L161() else D50();
  L160():
    r82 = dyn base14(<sym x>);
    goto L35(r82);
  D23():
    deopt 86 [r38];
  D37():
    deopt 140 [x23];
  D50():
    deopt 189 [x29];
  L16(r40):
    l3 = ld temp;
    c16 = `is.object`(l3);
    if c16 then L97() else L98(r40, l3);
  L27(dx9):
    st temp = dx9;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L132() else L133();
  L36(r86):
    c37 = `as.logical`(r86);
    if c37 then L167() else L37();
  L91():
    goto L14(r38);
  L93():
    omit9 = ld omit;
    check L95() else D24();
  L94():
    r39 = dyn base7(<sym omit>);
    goto L16(r39);
  L127():
    x24 = force? x23;
    checkMissing(x24);
    dimnames = ldf dimnames in base;
    r61 = dyn dimnames(x24);
    check L128() else D38();
  L129():
    dr8 = tryDispatchBuiltin.1("[[", r60);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L131() else L130(dr8);
  L130(r63):
    __2 = ldf `[[` in base;
    r64 = dyn __2(r63, 1);
    goto L27(r64);
  L161():
    x30 = force? x29;
    checkMissing(x30);
    names2 = ldf names in base;
    r84 = dyn names2(x30);
    check L162() else D51();
  L163():
    temp15 = ld temp;
    check L165() else D52();
  L164():
    r85 = dyn base15(<sym temp>);
    goto L36(r85);
  D24():
    deopt 89 [omit9];
  D38():
    deopt 143 [r61];
  D51():
    deopt 192 [r84];
  D52():
    deopt 196 [temp15];
  L17(dx5):
    st temp = dx5;
    temp2 = ld temp;
    check L101() else D27();
  L28(r66):
    r67 = `!`(r66);
    c33 = `as.logical`(r67);
    if c33 then L135() else L29();
  L37():
    goto L19();
  L95():
    omit10 = force? omit9;
    checkMissing(omit10);
    names = ldf names in base;
    r41 = dyn names(omit10);
    check L96() else D25();
  L97():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r40);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L99() else L98(r40, dr4);
  L98(r43, l5):
    omit11 = ld omit;
    check L100() else D26();
  L128():
    goto L26(r61);
  L131():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L27(dx8);
  L132():
    temp6 = ld temp;
    check L134() else D39();
  L133():
    r65 = dyn base12(<sym temp>);
    goto L28(r65);
  L162():
    goto L35(r84);
  L165():
    temp16 = force? temp15;
    checkMissing(temp16);
    length4 = ldf length in base;
    r87 = dyn length4(temp16);
    check L166() else D53();
  L167():
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L168() else L169();
  D25():
    deopt 92 [r41];
  D26():
    deopt 94 [r43, l5, r40, omit11];
  D27():
    deopt 98 [temp2];
  D39():
    deopt 150 [temp6];
  D53():
    deopt 199 [r87];
  L29():
    goto L33(NULL);
  L33(temp14):
    goto L19();
  L38(r89):
    l15 = ld temp;
    c38 = `is.object`(l15);
    if c38 then L172() else L173(r89, l15);
  L96():
    goto L16(r41);
  L99():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx4);
  L100():
    omit12 = force? omit11;
    ___1 = ldf `[<-` in base;
    r46 = dyn ___1(l5, r40, omit12);
    goto L17(r46);
  L101():
    temp3 = force? temp2;
    checkMissing(temp3);
    l6 = ld x;
    rownames__ = ldf `rownames<-`;
    check L102() else D28();
  L134():
    temp7 = force? temp6;
    checkMissing(temp7);
    c32 = `==`(temp7, NULL);
    goto L28(c32);
  L135():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L136() else L137();
  L166():
    goto L36(r87);
  L168():
    omit17 = ld omit;
    check L170() else D54();
  L169():
    r88 = dyn base16(<sym omit>);
    goto L38(r88);
  D28():
    deopt 101 [temp3, l6, temp3];
  D54():
    deopt 202 [omit17];
  L30(r69):
    l7 = ld temp;
    c34 = `is.object`(l7);
    if c34 then L140() else L141(r69, l7);
  L39(dx17):
    st temp = dx17;
    temp17 = ld temp;
    check L176() else D57();
  L102():
    r47 = dyn rownames__(l6, NULL, temp3);
    check L103() else D29();
  L136():
    omit13 = ld omit;
    check L138() else D40();
  L137():
    r68 = dyn base13(<sym omit>);
    goto L30(r68);
  L170():
    omit18 = force? omit17;
    checkMissing(omit18);
    names3 = ldf names in base;
    r90 = dyn names3(omit18);
    check L171() else D55();
  L172():
    dr16 = tryDispatchBuiltin.0("[<-", l15, r89);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L174() else L173(r89, dr16);
  L173(r92, l17):
    omit19 = ld omit;
    check L175() else D56();
  D29():
    deopt 103 [temp3, r47];
  D40():
    deopt 156 [omit13];
  D55():
    deopt 205 [r90];
  D56():
    deopt 207 [r92, l17, r89, omit19];
  D57():
    deopt 211 [temp17];
  L31(dx11):
    st temp = dx11;
    temp8 = ld temp;
    check L144() else D43();
  L103():
    st x = r47;
    goto L18(temp3);
  L138():
    omit14 = force? omit13;
    checkMissing(omit14);
    names1 = ldf names in base;
    r70 = dyn names1(omit14);
    check L139() else D41();
  L140():
    dr10 = tryDispatchBuiltin.0("[<-", l7, r69);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L142() else L141(r69, dr10);
  L141(r72, l9):
    omit15 = ld omit;
    check L143() else D42();
  L171():
    goto L38(r90);
  L174():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L39(dx16);
  L175():
    omit20 = force? omit19;
    ___3 = ldf `[<-` in base;
    r95 = dyn ___3(l17, r89, omit20);
    goto L39(r95);
  L176():
    temp18 = force? temp17;
    checkMissing(temp18);
    l18 = ld x;
    names__ = ldf `names<-`;
    check L177() else D58();
  D41():
    deopt 159 [r70];
  D42():
    deopt 161 [r72, l9, r69, omit15];
  D43():
    deopt 165 [temp8];
  D58():
    deopt 214 [temp18, l18, temp18];
  L139():
    goto L30(r70);
  L142():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L31(dx10);
  L143():
    omit16 = force? omit15;
    ___2 = ldf `[<-` in base;
    r75 = dyn ___2(l9, r69, omit16);
    goto L31(r75);
  L144():
    temp9 = force? temp8;
    checkMissing(temp9);
    l10 = ld x;
    dimnames1 = ldf dimnames;
    check L145() else D44();
  L177():
    r96 = dyn names__(l18, NULL, temp18);
    check L178() else D59();
  D44():
    deopt 168 [temp9, l10, temp9];
  D59():
    deopt 216 [temp18, r96];
  L145():
    r76 = dyn dimnames1(temp9, NULL);
    check L146() else D45();
  L178():
    st x = r96;
    goto L19();
  D45():
    deopt 170 [temp9, l10, temp9, r76];
  L146():
    c35 = `is.object`(r76);
    if c35 then L147() else L148(temp9, l10, r76);
  L32(temp13, l14, dx13):
    dimnames__ = ldf `dimnames<-`;
    check L150() else D46();
  L147():
    dr12 = tryDispatchBuiltin.0("[[<-", r76, temp9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L149() else L148(temp9, l10, dr12);
  L148(temp11, l12, r78):
    ____ = ldf `[[<-` in base;
    r79 = dyn ____(r78, temp9, 1);
    goto L32(temp11, l12, r79);
  D46():
    deopt 175 [temp13, l14, dx13];
  L149():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L32(temp9, l10, dx12);
  L150():
    r80 = dyn dimnames__(l14, NULL, dx13);
    check L151() else D47();
  D47():
    deopt 177 [temp13, r80];
  L151():
    st x = r80;
    goto L33(temp13);
  }
}