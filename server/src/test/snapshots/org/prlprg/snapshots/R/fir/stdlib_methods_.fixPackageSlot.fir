fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1828272920;
    st `.fixPackageSlot` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1828272920(def, sig) {
  (reg def:*, reg sig:*) -+> V { var def:*, var sig:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sig1:*, reg sig2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg pkgs:*, reg pkgs1:V, reg c:V, reg c1:L, reg character:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg sig3:*, reg sig4:V, reg length:cls, reg r7:V, reg p:p(V +), reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg pkgs2:*, reg pkgs3:V, reg nzchar:cls, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg fixme:*, reg fixme1:V, reg any:cls, reg r17:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg pkgs4:*, reg pkgs5:V, reg r20:I, reg c3:L, reg r22:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fixme2:*, reg fixme3:V, reg __:cls, reg r23:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg __1:cls, reg r24:V, reg l1:*, reg c5:L, reg i6:I, reg r26:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg ____:cls, reg r29:V, reg pkgs6:*, reg pkgs7:V, reg l4:*, reg attr__:cls, reg r30:V, reg sig5:*, reg sig6:V, reg l5:*, reg ___:cls, reg r31:V, reg __2:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg sig7:*, reg sig8:V, reg attr1:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg pkgs8:*, reg pkgs9:V, reg c6:V, reg c7:L, reg character1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg sig9:*, reg sig10:V, reg length1:cls, reg r40:V, reg p1:p(V +), reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg pkgs10:*, reg pkgs11:V, reg nzchar1:cls, reg r46:V, reg r47:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg fixme4:*, reg fixme5:V, reg any1:cls, reg r50:V, reg c8:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg pkgs12:*, reg pkgs13:V, reg r53:I, reg c9:L, reg r55:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg fixme6:*, reg fixme7:V, reg __3:cls, reg r56:V, reg s1:V, reg l6:I, reg i11:I, reg i12:I, reg i13:I, reg c10:L, reg x1:V, reg __4:cls, reg r57:V, reg l7:*, reg c11:L, reg i17:I, reg r59:V, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i19:I, reg dx7:V, reg i20:*, reg i21:V, reg ____1:cls, reg r62:V, reg pkgs14:*, reg pkgs15:V, reg l10:*, reg attr__1:cls, reg r63:V, reg sig11:*, reg sig12:V, reg l11:*, reg ___1:cls, reg r64:V, reg sig13:V, reg def1:*, reg def2:V |
    mkenv;
    st def = def;
    st sig = sig;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    st pkgs = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    sig1 = ld sig;
    check L28() else D0();
  L27():
    r = dyn base(<sym sig>, "package");
    goto L0(r);
  D0():
    deopt 2 [sig1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L33() else L2();
  L28():
    sig2 = force? sig1;
    checkMissing(sig2);
    attr = ldf attr in base;
    r2 = dyn attr(sig2, "package");
    check L29() else D1();
  L30():
    pkgs = ld pkgs;
    check L32() else D2();
  L31():
    r3 = dyn base1(<sym pkgs>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [pkgs];
  L2():
    goto L3();
  L3():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L29():
    goto L0(r2);
  L32():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c = `==`(pkgs1, NULL);
    goto L1(c);
  L33():
    character = ldf character;
    check L34() else D3();
  D3():
    deopt 13 [];
  L4(r12):
    r14 = `!`(r12);
    st fixme = r14;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L34():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      length = ldf length in base;
      r7 = dyn length(sig4);
      goto L0(r7);
    L2():
      r5 = dyn base2(<sym sig>);
      goto L0(r5);
    };
    r9 = dyn character(p);
    check L35() else D4();
  L37():
    pkgs2 = ld pkgs;
    check L39() else D5();
  L38():
    r11 = dyn base3(<sym pkgs>);
    goto L4(r11);
  D4():
    deopt 15 [r9];
  D5():
    deopt 21 [pkgs2];
  L5(r16):
    c2 = `as.logical`(r16);
    if c2 then L45() else L6();
  L35():
    st pkgs = r9;
    goto L3();
  L39():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(pkgs3);
    check L40() else D6();
  L41():
    fixme = ld fixme;
    check L43() else D7();
  L42():
    r15 = dyn base4(<sym fixme>);
    goto L5(r15);
  D6():
    deopt 24 [r13];
  D7():
    deopt 29 [fixme];
  L6():
    goto L25();
  L25():
    def1 = ld def;
    check L104() else D36();
  L40():
    goto L4(r13);
  L43():
    fixme1 = force? fixme;
    checkMissing(fixme1);
    any = ldf any in base;
    r17 = dyn any(fixme1);
    check L44() else D8();
  L45():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  D8():
    deopt 32 [r17];
  D36():
    deopt 139 [def1];
  L7(r19):
    c3 = `is.object`(r19);
    if c3 then L49() else L50(r19);
  L44():
    goto L5(r17);
  L46():
    pkgs4 = ld pkgs;
    check L48() else D9();
  L47():
    r18 = dyn base5(<sym pkgs>);
    goto L7(r18);
  L104():
    def2 = force? def1;
    checkMissing(def2);
    popenv;
    return def2;
  D9():
    deopt 34 [pkgs4];
  L8(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L9(i);
  L48():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    r20 = seq_along(pkgs5);
    goto L7(r20);
  L49():
    dr = tryDispatchBuiltin.1("[", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(r22):
    fixme2 = ld fixme;
    check L52() else D10();
  D10():
    deopt 37 [r22, fixme2];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L53() else L11();
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L52():
    fixme3 = force? fixme2;
    __ = ldf `[` in base;
    r23 = dyn __(r22, fixme3);
    goto L8(r23);
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    __1 = ldf `@` in base;
    r24 = dyn __1(<lang getClass(`[[`(sig, i), .Force=TRUE)>, <sym package>);
    l1 = ld pkgs;
    c5 = `is.object`(l1);
    if c5 then L54() else L55(i2, r24, l1);
  L53():
    pkgs6 = ld pkgs;
    check L58() else D12();
  D12():
    deopt 50 [pkgs6];
  L10(i8, dx3):
    st pkgs = dx3;
    goto L9(i8);
  L54():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(i2, r24, dr2);
  L55(i6, r26, l3):
    i9 = ld i;
    check L57() else D11();
  L58():
    pkgs7 = force? pkgs6;
    checkMissing(pkgs7);
    l4 = ld sig;
    attr__ = ldf `attr<-`;
    check L59() else D13();
  D11():
    deopt 43 [i6, r26, l3, r24, i9];
  D13():
    deopt 53 [pkgs7, l4, pkgs7];
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(i2, dx2);
  L57():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r29 = dyn ____(l3, r24, i10);
    goto L10(i6, r29);
  L59():
    r30 = dyn attr__(l4, NULL, "package", pkgs7);
    check L60() else D14();
  D14():
    deopt 56 [pkgs7, r30];
  L60():
    st sig = r30;
    sig5 = ld sig;
    check L61() else D15();
  D15():
    deopt 58 [sig5];
  L61():
    sig6 = force? sig5;
    checkMissing(sig6);
    l5 = ld def;
    ___ = ldf `@<-`;
    check L62() else D16();
  D16():
    deopt 61 [sig6, l5, sig6];
  L62():
    r31 = dyn ___(l5, NULL, "target", sig6);
    check L63() else D17();
  D17():
    deopt 64 [sig6, r31];
  L63():
    st def = r31;
    __2 = ldf `@` in base;
    r32 = dyn __2(<sym def>, <sym defined>);
    st sig = r32;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L12(r34):
    st pkgs = r34;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L64():
    sig7 = ld sig;
    check L66() else D18();
  L65():
    r33 = dyn base6(<sym sig>, "package");
    goto L12(r33);
  D18():
    deopt 71 [sig7];
  L13(r37):
    c7 = `as.logical`(r37);
    if c7 then L71() else L14();
  L66():
    sig8 = force? sig7;
    checkMissing(sig8);
    attr1 = ldf attr in base;
    r35 = dyn attr1(sig8, "package");
    check L67() else D19();
  L68():
    pkgs8 = ld pkgs;
    check L70() else D20();
  L69():
    r36 = dyn base7(<sym pkgs>);
    goto L13(r36);
  D19():
    deopt 75 [r35];
  D20():
    deopt 78 [pkgs8];
  L14():
    goto L15();
  L15():
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L75() else L76();
  L67():
    goto L12(r35);
  L70():
    pkgs9 = force? pkgs8;
    checkMissing(pkgs9);
    c6 = `==`(pkgs9, NULL);
    goto L13(c6);
  L71():
    character1 = ldf character;
    check L72() else D21();
  D21():
    deopt 82 [];
  L16(r45):
    r47 = `!`(r45);
    st fixme = r47;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L79() else L80();
  L72():
    p1 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      sig9 = ld sig;
      sig10 = force? sig9;
      checkMissing(sig10);
      length1 = ldf length in base;
      r40 = dyn length1(sig10);
      goto L0(r40);
    L2():
      r38 = dyn base8(<sym sig>);
      goto L0(r38);
    };
    r42 = dyn character1(p1);
    check L73() else D22();
  L75():
    pkgs10 = ld pkgs;
    check L77() else D23();
  L76():
    r44 = dyn base9(<sym pkgs>);
    goto L16(r44);
  D22():
    deopt 84 [r42];
  D23():
    deopt 90 [pkgs10];
  L17(r49):
    c8 = `as.logical`(r49);
    if c8 then L83() else L18();
  L73():
    st pkgs = r42;
    goto L15();
  L77():
    pkgs11 = force? pkgs10;
    checkMissing(pkgs11);
    nzchar1 = ldf nzchar in base;
    r46 = dyn nzchar1(pkgs11);
    check L78() else D24();
  L79():
    fixme4 = ld fixme;
    check L81() else D25();
  L80():
    r48 = dyn base10(<sym fixme>);
    goto L17(r48);
  D24():
    deopt 93 [r46];
  D25():
    deopt 98 [fixme4];
  L18():
    goto L24(NULL);
  L24(sig13):
    goto L25();
  L78():
    goto L16(r46);
  L81():
    fixme5 = force? fixme4;
    checkMissing(fixme5);
    any1 = ldf any in base;
    r50 = dyn any1(fixme5);
    check L82() else D26();
  L83():
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L84() else L85();
  D26():
    deopt 101 [r50];
  L19(r52):
    c9 = `is.object`(r52);
    if c9 then L87() else L88(r52);
  L82():
    goto L17(r50);
  L84():
    pkgs12 = ld pkgs;
    check L86() else D27();
  L85():
    r51 = dyn base11(<sym pkgs>);
    goto L19(r51);
  D27():
    deopt 103 [pkgs12];
  L20(dx5):
    s1 = toForSeq(dx5);
    l6 = length(s1);
    i11 = 0;
    goto L21(i11);
  L86():
    pkgs13 = force? pkgs12;
    checkMissing(pkgs13);
    r53 = seq_along(pkgs13);
    goto L19(r53);
  L87():
    dr4 = tryDispatchBuiltin.1("[", r52);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(dr4);
  L88(r55):
    fixme6 = ld fixme;
    check L90() else D28();
  D28():
    deopt 106 [r55, fixme6];
  L21(i12):
    i13 = `+`.1(i12, 1);
    c10 = `<`.1(l6, i13);
    if c10 then L91() else L23();
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx4);
  L90():
    fixme7 = force? fixme6;
    __3 = ldf `[` in base;
    r56 = dyn __3(r55, fixme7);
    goto L20(r56);
  L23():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st i = x1;
    __4 = ldf `@` in base;
    r57 = dyn __4(<lang getClass(`[[`(sig, i), .Force=TRUE)>, <sym package>);
    l7 = ld pkgs;
    c11 = `is.object`(l7);
    if c11 then L92() else L93(i13, r57, l7);
  L91():
    pkgs14 = ld pkgs;
    check L96() else D30();
  D30():
    deopt 119 [pkgs14];
  L22(i19, dx7):
    st pkgs = dx7;
    goto L21(i19);
  L92():
    dr6 = tryDispatchBuiltin.0("[[<-", l7, r57);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L94() else L93(i13, r57, dr6);
  L93(i17, r59, l9):
    i20 = ld i;
    check L95() else D29();
  L96():
    pkgs15 = force? pkgs14;
    checkMissing(pkgs15);
    l10 = ld sig;
    attr__1 = ldf `attr<-`;
    check L97() else D31();
  D29():
    deopt 112 [i17, r59, l9, r57, i20];
  D31():
    deopt 122 [pkgs15, l10, pkgs15];
  L94():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L22(i13, dx6);
  L95():
    i21 = force? i20;
    ____1 = ldf `[[<-` in base;
    r62 = dyn ____1(l9, r57, i21);
    goto L22(i17, r62);
  L97():
    r63 = dyn attr__1(l10, NULL, "package", pkgs15);
    check L98() else D32();
  D32():
    deopt 125 [pkgs15, r63];
  L98():
    st sig = r63;
    sig11 = ld sig;
    check L99() else D33();
  D33():
    deopt 127 [sig11];
  L99():
    sig12 = force? sig11;
    checkMissing(sig12);
    l11 = ld def;
    ___1 = ldf `@<-`;
    check L100() else D34();
  D34():
    deopt 130 [sig12, l11, sig12];
  L100():
    r64 = dyn ___1(l11, NULL, "defined", sig12);
    check L101() else D35();
  D35():
    deopt 133 [sig12, r64];
  L101():
    st def = r64;
    goto L24(sig12);
  }
}