fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3941777471;
    st qbirthday = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3941777471(prob, classes, coincident) {
  (reg prob:*, reg classes:*, reg coincident:*) -+> V { var prob:*, reg prob_isMissing:L, reg prob_orDefault:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var coincident:*, reg coincident_isMissing:L, reg coincident_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg prob1:*, reg prob2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg prob3:*, reg prob4:V, reg coincident1:*, reg coincident2:V, reg classes1:*, reg classes2:V, reg prob5:*, reg prob6:V, reg p:*, reg p1:V, reg r6:V, reg c1:L, reg p2:*, reg p3:V, reg r9:V, reg c2:L, reg c3:*, reg c4:V, reg k:*, reg k1:V, reg r10:V, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg k2:*, reg k3:V, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg r22:V, reg c5:*, reg c6:V, reg r23:V, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg r29:V, reg k4:*, reg k5:V, reg r30:V, reg r31:V, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg r42:V, reg p4:*, reg p5:V, reg r43:V, reg r44:V, reg r45:V, reg r46:V, reg r47:V, reg k6:*, reg k7:V, reg r48:V, reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg N:*, reg N1:V, reg r52:V, reg pbirthday:cls, reg N2:*, reg N3:V, reg p6:p(V +), reg c7:*, reg c8:V, reg p7:p(V +), reg k8:*, reg k9:V, reg p8:p(V +), reg r56:V, reg prob7:*, reg prob8:V, reg r57:V, reg c9:L, reg N4:*, reg N5:V, reg r58:V, reg pbirthday1:cls, reg N6:*, reg N7:V, reg p9:p(V +), reg c10:*, reg c11:V, reg p10:p(V +), reg k10:*, reg k11:V, reg p11:p(V +), reg r62:V, reg prob9:*, reg prob10:V, reg r63:V, reg c12:L, reg N8:*, reg N9:V, reg r64:V, reg pbirthday2:cls, reg N10:*, reg N11:V, reg r66:V, reg p12:p(V +), reg c13:*, reg c14:V, reg p13:p(V +), reg k12:*, reg k13:V, reg p14:p(V +), reg r70:V, reg prob11:*, reg prob12:V, reg r71:V, reg c15:L, reg N12:*, reg N13:V, reg r72:V, reg pbirthday3:cls, reg N14:*, reg N15:V, reg r73:V, reg p15:p(V +), reg c16:*, reg c17:V, reg p16:p(V +), reg k14:*, reg k15:V, reg p17:p(V +), reg r77:V, reg prob13:*, reg prob14:V, reg r78:V, reg c18:L, reg N16:*, reg N17:V, reg r79:V, reg N18:*, reg N19:V |
    mkenv;
    prob_isMissing = missing.0(prob);
    if prob_isMissing then L0(0.5) else L0(prob);
  L0(prob_orDefault):
    st prob = prob_orDefault;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L1(365.0) else L1(classes);
  L1(classes_orDefault):
    st classes = classes_orDefault;
    coincident_isMissing = missing.0(coincident);
    if coincident_isMissing then L2(2.0) else L2(coincident);
  L2(coincident_orDefault):
    st coincident = coincident_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L27() else L4();
  L23():
    prob1 = ld prob;
    check L25() else D0();
  L24():
    r = dyn base(<sym prob>);
    goto L3(r);
  D0():
    deopt 2 [prob1];
  L4():
    coincident1 = ld coincident;
    check L31() else D3();
  L25():
    prob2 = force? prob1;
    checkMissing(prob2);
    length = ldf length in base;
    r2 = dyn length(prob2);
    check L26() else D1();
  L27():
    prob3 = ld prob;
    check L28() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [prob3];
  D3():
    deopt 12 [coincident1];
  L26():
    goto L3(r2);
  L28():
    prob4 = force? prob3;
    checkMissing(prob4);
    popenv;
    return prob4;
  L31():
    coincident2 = force? coincident1;
    checkMissing(coincident2);
    st k = coincident2;
    classes1 = ld classes;
    check L32() else D4();
  D4():
    deopt 15 [classes1];
  L32():
    classes2 = force? classes1;
    checkMissing(classes2);
    st c = classes2;
    prob5 = ld prob;
    check L33() else D5();
  D5():
    deopt 18 [prob5];
  L33():
    prob6 = force? prob5;
    checkMissing(prob6);
    st p = prob6;
    p = ld p;
    check L34() else D6();
  D6():
    deopt 21 [p];
  L34():
    p1 = force? p;
    checkMissing(p1);
    r6 = `<=`(p1, 0.0);
    c1 = `as.logical`(r6);
    if c1 then L35() else L6();
  L6():
    p2 = ld p;
    check L38() else D7();
  L35():
    popenv;
    return 1.0;
  D7():
    deopt 30 [p2];
  L38():
    p3 = force? p2;
    checkMissing(p3);
    r9 = `>=`(p3, 1.0);
    c2 = `as.logical`(r9);
    if c2 then L39() else L8();
  L8():
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L39():
    c3 = ld c;
    check L40() else D8();
  D8():
    deopt 34 [c3];
  L10(r16):
    st N = r16;
    sym6 = ldf ceiling;
    base6 = ldf ceiling in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L40():
    c4 = force? c3;
    checkMissing(c4);
    k = ld k;
    check L41() else D9();
  L44():
    k2 = ld k;
    check L46() else D10();
  L45():
    r15 = dyn base1(<lang `/`(`(`(`+`(`+`(`*`(`(`(`-`(k, 1.0)), log(c)), lgamma(`+`(k, 1.0))), log(`-`(log1p(`-`(p)))))), k)>);
    goto L10(r15);
  D9():
    deopt 35 [c4, k];
  D10():
    deopt 46 [k2];
  L15(r51):
    st N = r51;
    pbirthday = ldf pbirthday;
    check L62() else D16();
  L41():
    k1 = force? k;
    checkMissing(k1);
    r10 = `-`(k1, 1.0);
    r11 = `*`(c4, r10);
    r12 = `+`(r11, 1.0);
    popenv;
    return r12;
  L46():
    k3 = force? k2;
    checkMissing(k3);
    r17 = `-`(k3, 1.0);
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L59():
    N = ld N;
    check L61() else D15();
  L60():
    r50 = dyn base6(<sym N>);
    goto L15(r50);
  D15():
    deopt 73 [N];
  D16():
    deopt 78 [];
  L11(r21, r22):
    r24 = `*`(r21, r22);
    sym3 = ldf lgamma;
    base3 = ldf lgamma in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L47():
    c5 = ld c;
    check L49() else D11();
  L48():
    r20 = dyn base2(<sym c>);
    goto L11(r17, r20);
  L61():
    N1 = force? N;
    checkMissing(N1);
    r52 = ceiling(N1);
    goto L15(r52);
  L62():
    p6 = prom<V +>{
      N2 = ld N;
      N3 = force? N2;
      checkMissing(N3);
      return N3;
    };
    p7 = prom<V +>{
      c7 = ld c;
      c8 = force? c7;
      checkMissing(c8);
      return c8;
    };
    p8 = prom<V +>{
      k8 = ld k;
      k9 = force? k8;
      checkMissing(k9);
      return k9;
    };
    r56 = dyn pbirthday(p6, p7, p8);
    check L63() else D17();
  D11():
    deopt 50 [r17, c5];
  D17():
    deopt 82 [r56];
  L12(r28, r29):
    r32 = `+`(r28, r29);
    sym4 = ldf log;
    base4 = ldf log in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L49():
    c6 = force? c5;
    checkMissing(c6);
    r23 = log(c6, 2.718281828459045);
    goto L11(r17, r23);
  L50():
    k4 = ld k;
    check L52() else D12();
  L51():
    r27 = dyn base3(<lang `+`(k, 1.0)>);
    goto L12(r24, r27);
  L63():
    prob7 = ld prob;
    check L64() else D18();
  D12():
    deopt 54 [r24, k4];
  D18():
    deopt 82 [r56, prob7];
  L13(r36, r37):
    r47 = `+`(r36, r37);
    k6 = ld k;
    check L58() else D14();
  L52():
    k5 = force? k4;
    checkMissing(k5);
    r30 = `+`(k5, 1.0);
    r31 = lgamma(r30);
    goto L12(r24, r31);
  L53():
    sym5 = ldf log1p;
    base5 = ldf log1p in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L54():
    r35 = dyn base4(<lang `-`(log1p(`-`(p)))>);
    goto L13(r32, r35);
  L64():
    prob8 = force? prob7;
    checkMissing(prob8);
    r57 = `<`(r56, prob8);
    c9 = `as.logical`(r57);
    if c9 then L65() else L16();
  D14():
    deopt 67 [r47, k6];
  L14(r41, r42):
    r45 = `-`(<missing>, r42);
    r46 = log(r45, 2.718281828459045);
    goto L13(r41, r46);
  L16():
    pbirthday2 = ldf pbirthday;
    check L74() else D24();
  L19():
    N18 = ld N;
    check L86() else D32();
  L55():
    p4 = ld p;
    check L57() else D13();
  L56():
    r40 = dyn base5(<lang `-`(p)>);
    goto L14(r32, r40);
  L58():
    k7 = force? k6;
    checkMissing(k7);
    r48 = `/`(r47, k7);
    r49 = exp(r48);
    goto L10(r49);
  L65():
    N4 = ld N;
    check L66() else D19();
  D13():
    deopt 61 [r32, p4];
  D19():
    deopt 85 [N4];
  D24():
    deopt 107 [];
  D32():
    deopt 137 [N18];
  L57():
    p5 = force? p4;
    checkMissing(p5);
    r43 = `-`(<missing>, p5);
    r44 = log1p(r43);
    goto L14(r32, r44);
  L66():
    N5 = force? N4;
    checkMissing(N5);
    r58 = `+`(N5, 1.0);
    st N = r58;
    goto L18();
  L74():
    p12 = prom<V +>{
      N10 = ld N;
      N11 = force? N10;
      checkMissing(N11);
      r66 = `-`(N11, 1.0);
      return r66;
    };
    p13 = prom<V +>{
      c13 = ld c;
      c14 = force? c13;
      checkMissing(c14);
      return c14;
    };
    p14 = prom<V +>{
      k12 = ld k;
      k13 = force? k12;
      checkMissing(k13);
      return k13;
    };
    r70 = dyn pbirthday2(p12, p13, p14);
    check L75() else D25();
  L86():
    N19 = force? N18;
    checkMissing(N19);
    popenv;
    return N19;
  D25():
    deopt 111 [r70];
  L18():
    pbirthday1 = ldf pbirthday;
    check L67() else D20();
  L75():
    prob11 = ld prob;
    check L76() else D26();
  D20():
    deopt 91 [];
  D26():
    deopt 111 [r70, prob11];
  L67():
    p9 = prom<V +>{
      N6 = ld N;
      N7 = force? N6;
      checkMissing(N7);
      return N7;
    };
    p10 = prom<V +>{
      c10 = ld c;
      c11 = force? c10;
      checkMissing(c11);
      return c11;
    };
    p11 = prom<V +>{
      k10 = ld k;
      k11 = force? k10;
      checkMissing(k11);
      return k11;
    };
    r62 = dyn pbirthday1(p9, p10, p11);
    check L68() else D21();
  L76():
    prob12 = force? prob11;
    checkMissing(prob12);
    r71 = `>=`(r70, prob12);
    c15 = `as.logical`(r71);
    if c15 then L77() else L20();
  D21():
    deopt 95 [r62];
  L20():
    goto L19();
  L68():
    prob9 = ld prob;
    check L69() else D22();
  L77():
    N12 = ld N;
    check L78() else D27();
  D22():
    deopt 95 [r62, prob9];
  D27():
    deopt 114 [N12];
  L69():
    prob10 = force? prob9;
    checkMissing(prob10);
    r63 = `<`(r62, prob10);
    c12 = `as.logical`(r63);
    if c12 then L70() else L17();
  L78():
    N13 = force? N12;
    checkMissing(N13);
    r72 = `-`(N13, 1.0);
    st N = r72;
    goto L22();
  L17():
    goto L19();
  L22():
    pbirthday3 = ldf pbirthday;
    check L79() else D28();
  L70():
    N8 = ld N;
    check L71() else D23();
  D23():
    deopt 98 [N8];
  D28():
    deopt 120 [];
  L71():
    N9 = force? N8;
    checkMissing(N9);
    r64 = `+`(N9, 1.0);
    st N = r64;
    goto L18();
  L79():
    p15 = prom<V +>{
      N14 = ld N;
      N15 = force? N14;
      checkMissing(N15);
      r73 = `-`(N15, 1.0);
      return r73;
    };
    p16 = prom<V +>{
      c16 = ld c;
      c17 = force? c16;
      checkMissing(c17);
      return c17;
    };
    p17 = prom<V +>{
      k14 = ld k;
      k15 = force? k14;
      checkMissing(k15);
      return k15;
    };
    r77 = dyn pbirthday3(p15, p16, p17);
    check L80() else D29();
  D29():
    deopt 124 [r77];
  L80():
    prob13 = ld prob;
    check L81() else D30();
  D30():
    deopt 124 [r77, prob13];
  L81():
    prob14 = force? prob13;
    checkMissing(prob14);
    r78 = `>=`(r77, prob14);
    c18 = `as.logical`(r78);
    if c18 then L82() else L21();
  L21():
    goto L19();
  L82():
    N16 = ld N;
    check L83() else D31();
  D31():
    deopt 127 [N16];
  L83():
    N17 = force? N16;
    checkMissing(N17);
    r79 = `-`(N17, 1.0);
    st N = r79;
    goto L22();
  }
}