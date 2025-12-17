fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3768568516;
    st pbirthday = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3768568516(n, classes, coincident) {
  (reg n:*, reg classes:*, reg coincident:*) -+> V { var n:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var coincident:*, reg coincident_isMissing:L, reg coincident_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg n3:*, reg n4:V, reg coincident1:*, reg coincident2:V, reg classes1:*, reg classes2:V, reg k:*, reg k1:V, reg r6:V, reg c1:L, reg k2:*, reg k3:V, reg r9:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:R, reg r14:V, reg c3:*, reg c4:V, reg c5:*, reg c6:V, reg n5:*, reg n6:V, reg r15:V, reg r16:V, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:R, reg r24:V, reg r25:V, reg rep:cls, reg r26:V, reg r27:V, reg prod:cls, reg r28:V, reg r29:V, reg k4:*, reg k5:V, reg n7:*, reg n8:V, reg r32:V, reg c7:L, reg n9:*, reg n10:V, reg c8:*, reg c9:V, reg k6:*, reg k7:V, reg r35:V, reg r36:V, reg r37:V, reg c10:L, reg n11:*, reg n12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg n15:V, reg r41:V, reg n16:*, reg n17:V, reg r42:V, reg c11:*, reg c12:V, reg k8:*, reg k9:V, reg r43:V, reg r44:V, reg r45:V, reg r46:V, reg n18:*, reg n19:V, reg c13:*, reg c14:V, reg k10:*, reg k11:V, reg r47:V, reg r48:V, reg r49:V, reg r50:V, reg k12:*, reg k13:V, reg r51:V, reg r52:V, reg r53:V, reg k14:*, reg k15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg k18:V, reg r55:V, reg LHS:*, reg LHS1:V, reg r56:V, reg r57:V, reg k19:*, reg k20:V, reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg r65:V, reg r66:V, reg c15:*, reg c16:V, reg r67:V, reg r68:V, reg r69:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r72:V, reg r73:V, reg r74:V, reg k21:*, reg k22:V, reg r75:V, reg r76:V, reg r77:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg r79:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r80:V, reg r81:V, reg lxx:*, reg lxx1:V, reg r82:V, reg r83:V, reg r84:V, reg r85:V |
    mkenv;
    st n = n;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0(365.0) else L0(classes);
  L0(classes_orDefault):
    st classes = classes_orDefault;
    coincident_isMissing = missing.0(coincident);
    if coincident_isMissing then L1(2.0) else L1(coincident);
  L1(coincident_orDefault):
    st coincident = coincident_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L25() else L3();
  L21():
    n1 = ld n;
    check L23() else D0();
  L22():
    r = dyn base(<sym n>);
    goto L2(r);
  D0():
    deopt 2 [n1];
  L3():
    coincident1 = ld coincident;
    check L29() else D3();
  L23():
    n2 = force? n1;
    checkMissing(n2);
    length = ldf length in base;
    r2 = dyn length(n2);
    check L24() else D1();
  L25():
    n3 = ld n;
    check L26() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [n3];
  D3():
    deopt 12 [coincident1];
  L24():
    goto L2(r2);
  L26():
    n4 = force? n3;
    checkMissing(n4);
    popenv;
    return n4;
  L29():
    coincident2 = force? coincident1;
    checkMissing(coincident2);
    st k = coincident2;
    classes1 = ld classes;
    check L30() else D4();
  D4():
    deopt 15 [classes1];
  L30():
    classes2 = force? classes1;
    checkMissing(classes2);
    st c = classes2;
    k = ld k;
    check L31() else D5();
  D5():
    deopt 18 [k];
  L31():
    k1 = force? k;
    checkMissing(k1);
    r6 = `<`(k1, 2.0);
    c1 = `as.logical`(r6);
    if c1 then L32() else L5();
  L5():
    k2 = ld k;
    check L35() else D6();
  L32():
    popenv;
    return 1.0;
  D6():
    deopt 27 [k2];
  L35():
    k3 = force? k2;
    checkMissing(k3);
    r9 = `==`(k3, 2.0);
    c2 = `as.logical`(r9);
    if c2 then L36() else L7();
  L7():
    k4 = ld k;
    check L47() else D11();
  L36():
    sym1 = ldf prod;
    base1 = ldf prod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  D11():
    deopt 51 [k4];
  L8(r13, r14):
    r29 = `-`(r13, r14);
    popenv;
    return r29;
  L37():
    c3 = ld c;
    check L39() else D7();
  L38():
    r12 = dyn base1(<lang `/`(`(`(`:`(c, `(`(`+`(`-`(c, n), 1.0)))), rep(c, n))>);
    goto L8(1.0, r12);
  L47():
    k5 = force? k4;
    checkMissing(k5);
    n7 = ld n;
    check L48() else D12();
  D7():
    deopt 34 [1.0, c3];
  D12():
    deopt 52 [k5, n7];
  L39():
    c4 = force? c3;
    checkMissing(c4);
    c5 = ld c;
    check L40() else D8();
  L48():
    n8 = force? n7;
    checkMissing(n8);
    r32 = `>`(k5, n8);
    c7 = `as.logical`(r32);
    if c7 then L49() else L11();
  D8():
    deopt 35 [1.0, c4, c5];
  L11():
    n9 = ld n;
    check L52() else D13();
  L40():
    c6 = force? c5;
    checkMissing(c6);
    n5 = ld n;
    check L41() else D9();
  L49():
    popenv;
    return 0.0;
  D9():
    deopt 36 [1.0, c4, c6, n5];
  D13():
    deopt 60 [n9];
  L41():
    n6 = force? n5;
    checkMissing(n6);
    r15 = `-`(c6, n6);
    r16 = `+`(r15, 1.0);
    r17 = `:`(c4, r16);
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L52():
    n10 = force? n9;
    checkMissing(n10);
    c8 = ld c;
    check L53() else D14();
  D14():
    deopt 61 [n10, c8];
  L9(r23, r24, r25):
    r27 = `/`(r24, r25);
    prod = ldf prod in base;
    r28 = dyn prod(r27);
    check L44() else D10();
  L42():
    rep = ldf rep in base;
    r26 = dyn rep(<sym c>, <sym n>);
    goto L9(1.0, r17, r26);
  L43():
    r22 = dyn base2(<sym c>, <sym n>);
    goto L9(1.0, r17, r22);
  L53():
    c9 = force? c8;
    checkMissing(c9);
    k6 = ld k;
    check L54() else D15();
  D10():
    deopt 46 [r23, r28];
  D15():
    deopt 62 [n10, c9, k6];
  L44():
    goto L8(r23, r28);
  L54():
    k7 = force? k6;
    checkMissing(k7);
    r35 = `-`(k7, 1.0);
    r36 = `*`(c9, r35);
    r37 = `>`(n10, r36);
    c10 = `as.logical`(r37);
    if c10 then L55() else L13();
  L13():
    n11 = ld n;
    check L58() else D16();
  L55():
    popenv;
    return 1.0;
  D16():
    deopt 73 [n11];
  L58():
    n12 = force? n11;
    checkMissing(n12);
    sym3 = ldf exp;
    base3 = ldf exp in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L15(n15, r41):
    r46 = `*`(n15, r41);
    n18 = ld n;
    check L64() else D20();
  L59():
    n16 = ld n;
    check L61() else D17();
  L60():
    r40 = dyn base3(<lang `/`(`-`(n), `(`(`*`(c, k)))>);
    goto L15(n12, r40);
  D17():
    deopt 75 [n12, n16];
  D20():
    deopt 84 [r46, 1.0, n18];
  L61():
    n17 = force? n16;
    checkMissing(n17);
    r42 = `-`(<missing>, n17);
    c11 = ld c;
    check L62() else D18();
  L64():
    n19 = force? n18;
    checkMissing(n19);
    c13 = ld c;
    check L65() else D21();
  D18():
    deopt 77 [n12, r42, c11];
  D21():
    deopt 85 [r46, 1.0, n19, c13];
  L62():
    c12 = force? c11;
    checkMissing(c12);
    k8 = ld k;
    check L63() else D19();
  L65():
    c14 = force? c13;
    checkMissing(c14);
    k10 = ld k;
    check L66() else D22();
  D19():
    deopt 78 [n12, r42, c12, k8];
  D22():
    deopt 86 [r46, 1.0, n19, c14, k10];
  L63():
    k9 = force? k8;
    checkMissing(k9);
    r43 = `*`(c12, k9);
    r44 = `/`(r42, r43);
    r45 = exp(r44);
    goto L15(n12, r45);
  L66():
    k11 = force? k10;
    checkMissing(k11);
    r47 = `+`(k11, 1.0);
    r48 = `*`(c14, r47);
    r49 = `/`(n19, r48);
    r50 = `-`(1.0, r49);
    k12 = ld k;
    check L67() else D23();
  D23():
    deopt 93 [r46, r50, 1.0, k12];
  L67():
    k13 = force? k12;
    checkMissing(k13);
    r51 = `/`(1.0, k13);
    r52 = `^`(r50, r51);
    r53 = `/`(r46, r52);
    st LHS = r53;
    k14 = ld k;
    check L68() else D24();
  D24():
    deopt 99 [k14];
  L68():
    k15 = force? k14;
    checkMissing(k15);
    sym4 = ldf log;
    base4 = ldf log in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L16(k18, r55):
    r57 = `*`(k18, r55);
    k19 = ld k;
    check L72() else D26();
  L69():
    LHS = ld LHS;
    check L71() else D25();
  L70():
    r54 = dyn base4(<sym LHS>);
    goto L16(k15, r54);
  D25():
    deopt 101 [k15, LHS];
  D26():
    deopt 104 [r57, k19];
  L71():
    LHS1 = force? LHS;
    checkMissing(LHS1);
    r56 = log(LHS1, 2.718281828459045);
    goto L16(k15, r56);
  L72():
    k20 = force? k19;
    checkMissing(k20);
    r58 = `-`(k20, 1.0);
    sym5 = ldf log;
    base5 = ldf log in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L17(r64, r65, r66):
    r68 = `*`(r65, r66);
    r69 = `-`(r64, r68);
    sym6 = ldf lgamma;
    base6 = ldf lgamma in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L73():
    c15 = ld c;
    check L75() else D27();
  L74():
    r63 = dyn base5(<sym c>);
    goto L17(r57, r58, r63);
  D27():
    deopt 108 [r57, r58, c15];
  L18(r73, r74):
    r77 = `-`(r73, r74);
    st lxx = r77;
    sym7 = ldf expm1;
    base7 = ldf expm1 in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L75():
    c16 = force? c15;
    checkMissing(c16);
    r67 = log(c16, 2.718281828459045);
    goto L17(r57, r58, r67);
  L76():
    k21 = ld k;
    check L78() else D28();
  L77():
    r72 = dyn base6(<lang `+`(k, 1.0)>);
    goto L18(r69, r72);
  D28():
    deopt 113 [r69, k21];
  L19(r79):
    r85 = `-`(<missing>, r79);
    popenv;
    return r85;
  L78():
    k22 = force? k21;
    checkMissing(k22);
    r75 = `+`(k22, 1.0);
    r76 = lgamma(r75);
    goto L18(r69, r76);
  L79():
    sym8 = ldf exp;
    base8 = ldf exp in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L80():
    r78 = dyn base7(<lang `-`(exp(lxx))>);
    goto L19(r78);
  L20(r81):
    r83 = `-`(<missing>, r81);
    r84 = expm1(r83);
    goto L19(r84);
  L81():
    lxx = ld lxx;
    check L83() else D29();
  L82():
    r80 = dyn base8(<sym lxx>);
    goto L20(r80);
  D29():
    deopt 122 [lxx];
  L83():
    lxx1 = force? lxx;
    checkMissing(lxx1);
    r82 = exp(lxx1);
    goto L20(r82);
  }
}