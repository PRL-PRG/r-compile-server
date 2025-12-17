fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4196989794;
    st `.matchSigLength` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4196989794(sig, fdef, fenv, reset) {
  (reg sig:*, reg fdef:*, reg fenv:*, reg reset:*) -+> V { var sig:*, var fdef:*, var fenv:*, var reset:*, reg reset_isMissing:L, reg reset_orDefault:*, reg _getGenericSigLength:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg fenv1:*, reg fenv2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sig1:*, reg sig2:V, reg length:cls, reg r5:V, reg packageSlot:cls, reg sig3:*, reg sig4:V, reg p2:p(V +), reg r7:V, reg n:*, reg n1:V, reg nargs:*, reg nargs1:V, reg r8:V, reg c:L, reg nargs2:*, reg nargs3:V, reg n2:*, reg n3:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg pkgs:*, reg pkgs1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg rep:cls, reg r14:V, reg c1:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sig5:*, reg sig6:V, reg as_character:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg rep1:cls, reg r23:V, reg c2:cls, reg r24:V, reg n4:*, reg n5:V, reg nargs4:*, reg nargs5:V, reg r26:V, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg sig7:*, reg sig8:V, reg c4:L, reg sig10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nargs6:*, reg nargs7:V, reg r29:V, reg n6:*, reg n7:V, reg r30:V, reg __:cls, reg r31:V, reg r32:V, reg all:cls, reg r33:V, reg c5:L, reg nargs8:*, reg nargs9:V, reg l:*, reg length__:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg pkgs2:*, reg pkgs3:V, reg c6:V, reg r37:V, reg c7:L, reg nargs10:*, reg nargs11:V, reg l1:*, reg length__1:cls, reg r38:V, reg nargs12:V, reg nargs13:V, reg sig11:*, reg sig12:V, reg c8:L, reg sig14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n8:*, reg n9:V, reg __1:cls, reg r39:V, reg r40:V, reg c9:L, reg n10:*, reg n11:V, reg r41:V, reg reset1:*, reg reset2:V, reg c10:L, reg _resetSigLength:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg n12:*, reg n13:V, reg p4:p(V +), reg r44:V, reg n14:*, reg n15:V, reg l2:*, reg length__2:cls, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg pkgs4:*, reg pkgs5:V, reg c11:V, reg r49:V, reg c12:L, reg n16:*, reg n17:V, reg l3:*, reg length__3:cls, reg r50:V, reg pkgs6:*, reg pkgs7:V, reg l4:*, reg packageSlot__:cls, reg r51:V, reg sig15:*, reg sig16:V |
    mkenv;
    st sig = sig;
    st fdef = fdef;
    st fenv = fenv;
    reset_isMissing = missing.0(reset);
    if reset_isMissing then L0(FALSE) else L0(reset);
  L0(reset_orDefault):
    st reset = reset_orDefault;
    _getGenericSigLength = ldf `.getGenericSigLength`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    p1 = prom<V +>{
      fenv1 = ld fenv;
      fenv2 = force? fenv1;
      checkMissing(fenv2);
      return fenv2;
    };
    r2 = dyn _getGenericSigLength(p, p1, TRUE);
    check L24() else D1();
  D1():
    deopt 5 [r2];
  L24():
    st nargs = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r4):
    st n = r4;
    packageSlot = ldf packageSlot;
    check L29() else D4();
  L25():
    sig1 = ld sig;
    check L27() else D2();
  L26():
    r3 = dyn base(<sym sig>);
    goto L1(r3);
  D2():
    deopt 9 [sig1];
  D4():
    deopt 15 [];
  L27():
    sig2 = force? sig1;
    checkMissing(sig2);
    length = ldf length in base;
    r5 = dyn length(sig2);
    check L28() else D3();
  L29():
    p2 = prom<V +>{
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      return sig4;
    };
    r7 = dyn packageSlot(p2);
    check L30() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 17 [r7];
  L28():
    goto L1(r5);
  L30():
    st pkgs = r7;
    n = ld n;
    check L31() else D6();
  D6():
    deopt 19 [n];
  L31():
    n1 = force? n;
    checkMissing(n1);
    nargs = ld nargs;
    check L32() else D7();
  D7():
    deopt 20 [n1, nargs];
  L32():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    r8 = `<`(n1, nargs1);
    c = `as.logical`(r8);
    if c then L33() else L2();
  L2():
    n4 = ld n;
    check L52() else D15();
  L8():
    pkgs6 = ld pkgs;
    check L102() else D41();
  L33():
    nargs2 = ld nargs;
    check L34() else D8();
  D8():
    deopt 23 [nargs2];
  D15():
    deopt 52 [n4];
  D41():
    deopt 139 [pkgs6];
  L34():
    nargs3 = force? nargs2;
    checkMissing(nargs3);
    n2 = ld n;
    check L35() else D9();
  L52():
    n5 = force? n4;
    checkMissing(n5);
    nargs4 = ld nargs;
    check L53() else D16();
  L102():
    pkgs7 = force? pkgs6;
    checkMissing(pkgs7);
    l4 = ld sig;
    packageSlot__ = ldf `packageSlot<-`;
    check L103() else D42();
  D9():
    deopt 24 [nargs3, n2];
  D16():
    deopt 53 [n5, nargs4];
  D42():
    deopt 142 [pkgs7, l4, pkgs7];
  L35():
    n3 = force? n2;
    checkMissing(n3);
    r9 = `-`(nargs3, n3);
    st more = r9;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L53():
    nargs5 = force? nargs4;
    checkMissing(nargs5);
    r26 = `>`(n5, nargs5);
    c3 = `as.logical`(r26);
    if c3 then L54() else L9();
  L103():
    r51 = dyn packageSlot__(l4, NULL, pkgs7);
    check L104() else D43();
  D43():
    deopt 144 [pkgs7, r51];
  L3(r11):
    st pkgs = r11;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L9():
    goto L8();
  L36():
    pkgs = ld pkgs;
    check L38() else D10();
  L37():
    r10 = dyn base1(<sym pkgs>, <lang rep("methods", more)>);
    goto L3(r10);
  L54():
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L104():
    st sig = r51;
    sig15 = ld sig;
    check L105() else D44();
  D10():
    deopt 30 [pkgs];
  D44():
    deopt 146 [sig15];
  L5(r17):
    st sig = r17;
    goto L8();
  L10(r28):
    c5 = `as.logical`(r28);
    if c5 then L64() else L12();
  L38():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L42():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L43():
    r16 = dyn base3(<lang as.character(sig)>, <lang rep("ANY", more)>);
    goto L5(r16);
  L55():
    sig7 = ld sig;
    check L57() else D17();
  L56():
    r27 = dyn base6(<lang `==`(`[`(sig, `:`(`(`(`+`(nargs, 1.0)), n)), "ANY")>);
    goto L10(r27);
  L105():
    sig16 = force? sig15;
    checkMissing(sig16);
    popenv;
    return sig16;
  D17():
    deopt 58 [sig7];
  L4(r13):
    c1 = ldf c in base;
    r15 = dyn c1(pkgs1, r13);
    check L41() else D11();
  L6(r19):
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L12():
    sig11 = ld sig;
    check L77() else D28();
  L16(nargs13):
    goto L8();
  L39():
    rep = ldf rep in base;
    r14 = dyn rep("methods", <sym more>);
    goto L4(r14);
  L40():
    r12 = dyn base2("methods", <sym more>);
    goto L4(r12);
  L44():
    sig5 = ld sig;
    check L46() else D12();
  L45():
    r18 = dyn base4(<sym sig>);
    goto L6(r18);
  L57():
    sig8 = force? sig7;
    checkMissing(sig8);
    c4 = `is.object`(sig8);
    if c4 then L58() else L59(sig8);
  L64():
    nargs8 = ld nargs;
    check L65() else D21();
  D11():
    deopt 36 [r15];
  D12():
    deopt 42 [sig5];
  D21():
    deopt 71 [nargs8];
  D28():
    deopt 92 [sig11];
  L7(r22):
    c2 = ldf c in base;
    r24 = dyn c2(r19, r22);
    check L50() else D14();
  L11(dx1):
    r32 = `==`(dx1, "ANY");
    all = ldf all in base;
    r33 = dyn all(r32);
    check L63() else D20();
  L41():
    goto L3(r15);
  L46():
    sig6 = force? sig5;
    checkMissing(sig6);
    as_character = ldf `as.character` in base;
    r20 = dyn as_character(sig6);
    check L47() else D13();
  L48():
    rep1 = ldf rep in base;
    r23 = dyn rep1("ANY", <sym more>);
    goto L7(r23);
  L49():
    r21 = dyn base5("ANY", <sym more>);
    goto L7(r21);
  L58():
    dr = tryDispatchBuiltin.1("[", sig8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(sig10):
    nargs6 = ld nargs;
    check L61() else D18();
  L65():
    nargs9 = force? nargs8;
    checkMissing(nargs9);
    l = ld sig;
    length__ = ldf `length<-`;
    check L66() else D22();
  L77():
    sig12 = force? sig11;
    checkMissing(sig12);
    c8 = `is.object`(sig12);
    if c8 then L78() else L79(sig12);
  D13():
    deopt 45 [r20];
  D14():
    deopt 50 [r24];
  D18():
    deopt 60 [sig10, nargs6];
  D20():
    deopt 70 [r33];
  D22():
    deopt 74 [nargs9, l, nargs9];
  L17(dx3):
    r40 = `==`(dx3, "ANY");
    c9 = `as.logical`(r40);
    if c9 then L82() else L18();
  L47():
    goto L6(r20);
  L50():
    goto L5(r24);
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L61():
    nargs7 = force? nargs6;
    checkMissing(nargs7);
    r29 = `+`(nargs7, 1.0);
    n6 = ld n;
    check L62() else D19();
  L63():
    goto L10(r33);
  L66():
    r34 = dyn length__(l, NULL, nargs9);
    check L67() else D23();
  L78():
    dr2 = tryDispatchBuiltin.1("[[", sig12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(dr2);
  L79(sig14):
    n8 = ld n;
    check L81() else D29();
  D19():
    deopt 63 [sig10, r29, n6];
  D23():
    deopt 76 [nargs9, r34];
  D29():
    deopt 94 [sig14, n8];
  L18():
    reset1 = ld reset;
    check L85() else D31();
  L62():
    n7 = force? n6;
    checkMissing(n7);
    r30 = `:`(r29, n7);
    __ = ldf `[` in base;
    r31 = dyn __(sig10, r30);
    goto L11(r31);
  L67():
    st sig = r34;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L80():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L81():
    n9 = force? n8;
    __1 = ldf `[[` in base;
    r39 = dyn __1(sig14, n9);
    goto L17(r39);
  L82():
    n10 = ld n;
    check L83() else D30();
  D30():
    deopt 99 [n10];
  D31():
    deopt 107 [reset1];
  L13(r36):
    r37 = `!`(r36);
    c7 = `as.logical`(r37);
    if c7 then L71() else L14();
  L68():
    pkgs2 = ld pkgs;
    check L70() else D24();
  L69():
    r35 = dyn base7(<sym pkgs>);
    goto L13(r35);
  L83():
    n11 = force? n10;
    checkMissing(n11);
    r41 = `-`(n11, 1.0);
    st n = r41;
    goto L12();
  L85():
    reset2 = force? reset1;
    checkMissing(reset2);
    c10 = `as.logical`(reset2);
    if c10 then L86() else L19();
  D24():
    deopt 79 [pkgs2];
  L14():
    goto L15(NULL);
  L15(nargs12):
    goto L16(nargs12);
  L19():
    goto L20();
  L20():
    n14 = ld n;
    check L90() else D34();
  L70():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    c6 = `==`(pkgs3, NULL);
    goto L13(c6);
  L71():
    nargs10 = ld nargs;
    check L72() else D25();
  L86():
    _resetSigLength = ldf `.resetSigLength`;
    check L87() else D32();
  D25():
    deopt 83 [nargs10];
  D32():
    deopt 110 [];
  D34():
    deopt 116 [n14];
  L72():
    nargs11 = force? nargs10;
    checkMissing(nargs11);
    l1 = ld pkgs;
    length__1 = ldf `length<-`;
    check L73() else D26();
  L87():
    p3 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p4 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      return n13;
    };
    r44 = dyn _resetSigLength(p3, p4);
    check L88() else D33();
  L90():
    n15 = force? n14;
    checkMissing(n15);
    l2 = ld sig;
    length__2 = ldf `length<-`;
    check L91() else D35();
  D26():
    deopt 86 [nargs11, l1, nargs11];
  D33():
    deopt 113 [r44];
  D35():
    deopt 119 [n15, l2, n15];
  L73():
    r38 = dyn length__1(l1, NULL, nargs11);
    check L74() else D27();
  L88():
    goto L20();
  L91():
    r46 = dyn length__2(l2, NULL, n15);
    check L92() else D36();
  D27():
    deopt 88 [nargs11, r38];
  D36():
    deopt 121 [n15, r46];
  L74():
    st pkgs = r38;
    goto L15(nargs11);
  L92():
    st sig = r46;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L21(r48):
    r49 = `!`(r48);
    c12 = `as.logical`(r49);
    if c12 then L96() else L22();
  L93():
    pkgs4 = ld pkgs;
    check L95() else D37();
  L94():
    r47 = dyn base8(<sym pkgs>);
    goto L21(r47);
  D37():
    deopt 124 [pkgs4];
  L22():
    goto L16(NULL);
  L95():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    c11 = `==`(pkgs5, NULL);
    goto L21(c11);
  L96():
    n16 = ld n;
    check L97() else D38();
  D38():
    deopt 128 [n16];
  L97():
    n17 = force? n16;
    checkMissing(n17);
    l3 = ld pkgs;
    length__3 = ldf `length<-`;
    check L98() else D39();
  D39():
    deopt 131 [n17, l3, n17];
  L98():
    r50 = dyn length__3(l3, NULL, n17);
    check L99() else D40();
  D40():
    deopt 133 [n17, r50];
  L99():
    st pkgs = r50;
    goto L16(n17);
  }
}