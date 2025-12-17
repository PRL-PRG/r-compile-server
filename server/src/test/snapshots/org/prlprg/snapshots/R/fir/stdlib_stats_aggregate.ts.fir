fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2705523746;
    st `aggregate.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2705523746(x, nfrequency, FUN, ndeltat, `ts.eps`, `...`) {
  (reg x:*, reg nfrequency:*, reg FUN:*, reg ndeltat:*, reg ts_eps:*, reg ddd:dots) -+> V { var x:*, var nfrequency:*, reg nfrequency_isMissing:L, reg nfrequency_orDefault:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, reg sum:*, reg sum1:V, reg p:p(V +), var ndeltat:*, reg ndeltat_isMissing:L, reg ndeltat_orDefault:*, var `ts.eps`:*, reg ts_eps_isMissing:L, reg ts_eps_orDefault:*, reg getOption:cls, reg r1:V, reg p1:p(V +), var `...`:dots?, reg as_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r4:V, reg tsp:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r6:V, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p4:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg c1:L, reg ndeltat1:*, reg ndeltat2:V, reg r15:V, reg nfrequency1:*, reg nfrequency2:V, reg r17:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg c7:L, reg r19:V, reg nfrequency3:*, reg nfrequency4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg c10:L, reg nfrequency7:V, reg r21:V, reg round:cls, reg r22:V, reg r23:V, reg abs:cls, reg r24:V, reg ts_eps1:*, reg ts_eps2:V, reg r25:V, reg c11:L, reg c12:V, reg c14:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg round1:cls, reg r28:V, reg nfrequency8:*, reg nfrequency9:V, reg ofrequency:*, reg ofrequency1:V, reg r30:V, reg c15:L, reg x5:*, reg x6:V, reg ofrequency2:*, reg ofrequency3:V, reg nfrequency10:*, reg nfrequency11:V, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg ratio:*, reg ratio1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg ratio4:V, reg r37:V, reg round2:cls, reg r38:V, reg r39:V, reg abs1:cls, reg r40:V, reg ts_eps3:*, reg ts_eps4:V, reg r41:V, reg c16:L, reg stop:cls, reg gettextf:cls, reg ofrequency4:*, reg ofrequency5:V, reg p5:p(V +), reg nfrequency12:*, reg nfrequency13:V, reg p6:p(V +), reg r44:V, reg p7:p(V +), reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg ofrequency6:*, reg ofrequency7:V, reg nfrequency14:*, reg nfrequency15:V, reg r50:V, reg ts_eps5:*, reg ts_eps6:V, reg r51:V, reg trunc:cls, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg x7:*, reg x8:V, reg is_matrix:cls, reg r55:V, reg mat:*, reg mat1:V, reg c17:L, reg colnames:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r57:V, reg tsp1:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg r60:V, reg c18:L, reg r62:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r63:V, reg as_matrix:cls, reg x13:*, reg x14:V, reg p10:p(V +), reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg nrow:cls, reg x15:*, reg x16:V, reg p11:p(V +), reg r69:V, reg len:*, reg len1:V, reg r70:V, reg r71:V, reg len2:*, reg len3:V, reg r72:V, reg apply:cls, reg array:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg r74:V, reg x17:*, reg x18:V, reg c19:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nend:*, reg nend1:V, reg r75:V, reg __2:cls, reg r76:V, reg c20:cls, reg r77:V, reg p12:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg len4:*, reg len5:V, reg nend2:*, reg nend3:V, reg len6:*, reg len7:V, reg r81:V, reg ncol:cls, reg x21:*, reg x22:V, reg p13:p(V +), reg r83:V, reg c21:cls, reg r84:V, reg p14:p(V +), reg r86:V, reg p15:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r88:V, reg r89:V, reg c22:cls, reg r90:V, reg p16:p(V +), reg FUN3:*, reg FUN4:V, reg p17:p(V +), reg ddd1:dots?, reg r93:V, reg mat2:*, reg mat3:V, reg r94:V, reg c23:L, reg as_vector:cls, reg x23:*, reg x24:V, reg p18:p(V +), reg r96:V, reg cn:*, reg cn1:V, reg l:*, reg colnames__:cls, reg r98:V, reg ts:cls, reg x25:*, reg x26:V, reg p19:p(V +), reg nstart:*, reg nstart1:V, reg p20:p(V +), reg nfrequency16:*, reg nfrequency17:V, reg p21:p(V +), reg r102:V |
    mkenv;
    st x = x;
    nfrequency_isMissing = missing.0(nfrequency);
    if nfrequency_isMissing then L0(1.0) else L0(nfrequency);
  L0(nfrequency_orDefault):
    st nfrequency = nfrequency_orDefault;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L1() else L2(FUN);
  L1():
    p = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    goto L2(p);
  L2(FUN_orDefault):
    st FUN = FUN_orDefault;
    ndeltat_isMissing = missing.0(ndeltat);
    if ndeltat_isMissing then L3(1.0) else L3(ndeltat);
  L3(ndeltat_orDefault):
    st ndeltat = ndeltat_orDefault;
    ts_eps_isMissing = missing.0(ts_eps);
    if ts_eps_isMissing then L4() else L5(ts_eps);
  L4():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r1 = dyn getOption("ts.eps");
      return r1;
    };
    goto L5(p1);
  L5(ts_eps_orDefault):
    st `ts.eps` = ts_eps_orDefault;
    st `...` = ddd;
    as_ts = ldf `as.ts`;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn as_ts(p2);
    check L31() else D1();
  D1():
    deopt 3 [r4];
  L31():
    st x = r4;
    tsp = ldf tsp;
    check L32() else D2();
  D2():
    deopt 6 [];
  L32():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r6 = dyn tsp(p3);
    check L33() else D3();
  D3():
    deopt 8 [r6];
  L33():
    c = `is.object`(r6);
    if c then L34() else L35(r6);
  L6(dx1):
    st ofrequency = dx1;
    match_fun = ldf `match.fun`;
    check L37() else D4();
  L34():
    dr = tryDispatchBuiltin.1("[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(r8):
    __ = ldf `[` in base;
    r9 = dyn __(r8, 3);
    goto L6(r9);
  D4():
    deopt 14 [];
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L37():
    p4 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r11 = dyn match_fun(p4);
    check L38() else D5();
  D5():
    deopt 16 [r11];
  L38():
    st FUN = r11;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L7(r13):
    c1 = `as.logical`(r13);
    if c1 then L41() else L8();
  L39():
    missing = ldf missing in base;
    r14 = dyn missing(<sym nfrequency>);
    goto L7(r14);
  L40():
    r12 = dyn base(<sym nfrequency>);
    goto L7(r12);
  L8():
    goto L9();
  L9():
    nfrequency1 = ld nfrequency;
    check L44() else D7();
  L41():
    ndeltat1 = ld ndeltat;
    check L42() else D6();
  D6():
    deopt 22 [1.0, ndeltat1];
  D7():
    deopt 28 [nfrequency1];
  L42():
    ndeltat2 = force? ndeltat1;
    checkMissing(ndeltat2);
    r15 = `/`(1.0, ndeltat2);
    st nfrequency = r15;
    goto L9();
  L44():
    nfrequency2 = force? nfrequency1;
    checkMissing(nfrequency2);
    r17 = `>`(nfrequency2, 1.0);
    c2 = `as.logical`(r17);
    if c2 then L45() else L10(c2);
  L10(c4):
    c14 = `as.logical`(c4);
    if c14 then L54() else L13();
  L45():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L11(c7, r19):
    ts_eps1 = ld `ts.eps`;
    check L52() else D10();
  L13():
    goto L15();
  L15():
    nfrequency8 = ld nfrequency;
    check L58() else D11();
  L46():
    nfrequency3 = ld nfrequency;
    check L48() else D8();
  L47():
    r18 = dyn base1(<lang `-`(nfrequency, round(nfrequency))>);
    goto L11(c2, r18);
  L54():
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  D8():
    deopt 34 [c2, nfrequency3];
  D10():
    deopt 40 [c7, r19, ts_eps1];
  D11():
    deopt 50 [nfrequency8];
  L14(r27):
    st nfrequency = r27;
    goto L15();
  L48():
    nfrequency4 = force? nfrequency3;
    checkMissing(nfrequency4);
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L52():
    ts_eps2 = force? ts_eps1;
    checkMissing(ts_eps2);
    r25 = `<`(r19, ts_eps2);
    c11 = `as.logical`(r25);
    c12 = `&&`(c7, c11);
    goto L10(c12);
  L55():
    round1 = ldf round in base;
    r28 = dyn round1(<sym nfrequency>);
    goto L14(r28);
  L56():
    r26 = dyn base3(<sym nfrequency>);
    goto L14(r26);
  L58():
    nfrequency9 = force? nfrequency8;
    checkMissing(nfrequency9);
    ofrequency = ld ofrequency;
    check L59() else D12();
  D12():
    deopt 51 [nfrequency9, ofrequency];
  L12(c10, nfrequency7, r21):
    r23 = `-`(nfrequency7, r21);
    abs = ldf abs in base;
    r24 = dyn abs(r23);
    check L51() else D9();
  L49():
    round = ldf round in base;
    r22 = dyn round(<sym nfrequency>);
    goto L12(c2, nfrequency4, r22);
  L50():
    r20 = dyn base2(<sym nfrequency>);
    goto L12(c2, nfrequency4, r20);
  L59():
    ofrequency1 = force? ofrequency;
    checkMissing(ofrequency1);
    r30 = `==`(nfrequency9, ofrequency1);
    c15 = `as.logical`(r30);
    if c15 then L60() else L16();
  D9():
    deopt 40 [c10, r24];
  L16():
    ofrequency2 = ld ofrequency;
    check L64() else D14();
  L51():
    goto L11(c10, r24);
  L60():
    x5 = ld x;
    check L61() else D13();
  D13():
    deopt 54 [x5];
  D14():
    deopt 59 [ofrequency2];
  L61():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L64():
    ofrequency3 = force? ofrequency2;
    checkMissing(ofrequency3);
    nfrequency10 = ld nfrequency;
    check L65() else D15();
  D15():
    deopt 60 [ofrequency3, nfrequency10];
  L65():
    nfrequency11 = force? nfrequency10;
    checkMissing(nfrequency11);
    r33 = `/`(ofrequency3, nfrequency11);
    st ratio = r33;
    sym4 = ldf abs;
    base4 = ldf abs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L18(r35):
    ts_eps3 = ld `ts.eps`;
    check L72() else D18();
  L66():
    ratio = ld ratio;
    check L68() else D16();
  L67():
    r34 = dyn base4(<lang `-`(ratio, round(ratio))>);
    goto L18(r34);
  D16():
    deopt 66 [ratio];
  D18():
    deopt 72 [r35, ts_eps3];
  L68():
    ratio1 = force? ratio;
    checkMissing(ratio1);
    sym5 = ldf round;
    base5 = ldf round in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L72():
    ts_eps4 = force? ts_eps3;
    checkMissing(ts_eps4);
    r41 = `>`(r35, ts_eps4);
    c16 = `as.logical`(r41);
    if c16 then L73() else L20();
  L19(ratio4, r37):
    r39 = `-`(ratio4, r37);
    abs1 = ldf abs in base;
    r40 = dyn abs1(r39);
    check L71() else D17();
  L20():
    goto L21();
  L21():
    sym6 = ldf trunc;
    base6 = ldf trunc in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L69():
    round2 = ldf round in base;
    r38 = dyn round2(<sym ratio>);
    goto L19(ratio1, r38);
  L70():
    r36 = dyn base5(<sym ratio>);
    goto L19(ratio1, r36);
  L73():
    stop = ldf stop;
    check L74() else D19();
  D17():
    deopt 72 [r40];
  D19():
    deopt 76 [];
  L22(r49):
    st len = r49;
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L71():
    goto L18(r40);
  L74():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        ofrequency4 = ld ofrequency;
        ofrequency5 = force? ofrequency4;
        checkMissing(ofrequency5);
        return ofrequency5;
      };
      p6 = prom<V +>{
        nfrequency12 = ld nfrequency;
        nfrequency13 = force? nfrequency12;
        checkMissing(nfrequency13);
        return nfrequency13;
      };
      r44 = dyn gettextf("cannot change frequency from %g to %g", p5, p6);
      return r44;
    };
    r46 = dyn stop[, domain](p7, NA_LGL);
    check L75() else D20();
  L77():
    ofrequency6 = ld ofrequency;
    check L79() else D21();
  L78():
    r48 = dyn base6(<lang `+`(`(`(`/`(ofrequency, nfrequency)), ts.eps)>);
    goto L22(r48);
  D20():
    deopt 80 [r46];
  D21():
    deopt 85 [ofrequency6];
  L23(r54):
    st mat = r54;
    mat = ld mat;
    check L87() else D27();
  L75():
    goto L21();
  L79():
    ofrequency7 = force? ofrequency6;
    checkMissing(ofrequency7);
    nfrequency14 = ld nfrequency;
    check L80() else D22();
  L83():
    x7 = ld x;
    check L85() else D25();
  L84():
    r53 = dyn base7(<sym x>);
    goto L23(r53);
  D22():
    deopt 86 [ofrequency7, nfrequency14];
  D25():
    deopt 96 [x7];
  D27():
    deopt 101 [mat];
  L80():
    nfrequency15 = force? nfrequency14;
    checkMissing(nfrequency15);
    r50 = `/`(ofrequency7, nfrequency15);
    ts_eps5 = ld `ts.eps`;
    check L81() else D23();
  L85():
    x8 = force? x7;
    checkMissing(x8);
    is_matrix = ldf `is.matrix` in base;
    r55 = dyn is_matrix(x8);
    check L86() else D26();
  L87():
    mat1 = force? mat;
    checkMissing(mat1);
    c17 = `as.logical`(mat1);
    if c17 then L88() else L24();
  D23():
    deopt 88 [r50, ts_eps5];
  D26():
    deopt 99 [r55];
  L24():
    goto L25();
  L25():
    tsp1 = ldf tsp;
    check L92() else D30();
  L81():
    ts_eps6 = force? ts_eps5;
    checkMissing(ts_eps6);
    r51 = `+`(r50, ts_eps6);
    trunc = ldf trunc in base;
    r52 = dyn trunc(r51);
    check L82() else D24();
  L86():
    goto L23(r55);
  L88():
    colnames = ldf colnames;
    check L89() else D28();
  D24():
    deopt 92 [r52];
  D28():
    deopt 104 [];
  D30():
    deopt 111 [];
  L82():
    goto L22(r52);
  L89():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r57 = dyn colnames(p8);
    check L90() else D29();
  L92():
    p9 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r60 = dyn tsp1(p9);
    check L93() else D31();
  D29():
    deopt 106 [r57];
  D31():
    deopt 113 [r60];
  L90():
    st cn = r57;
    goto L25();
  L93():
    c18 = `is.object`(r60);
    if c18 then L94() else L95(r60);
  L26(dx3):
    st nstart = dx3;
    as_matrix = ldf `as.matrix`;
    check L97() else D32();
  L94():
    dr2 = tryDispatchBuiltin.1("[", r60);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L96() else L95(dr2);
  L95(r62):
    __1 = ldf `[` in base;
    r63 = dyn __1(r62, 1);
    goto L26(r63);
  D32():
    deopt 119 [];
  L96():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L97():
    p10 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r65 = dyn as_matrix(p10);
    check L98() else D33();
  D33():
    deopt 121 [r65];
  L98():
    st x = r65;
    sym8 = ldf floor;
    base8 = ldf floor in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L27(r67):
    len2 = ld len;
    check L104() else D37();
  L99():
    nrow = ldf nrow;
    check L101() else D34();
  L100():
    r66 = dyn base8(<lang `/`(nrow(x), len)>);
    goto L27(r66);
  D34():
    deopt 125 [];
  D37():
    deopt 130 [r67, len2];
  L101():
    p11 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r69 = dyn nrow(p11);
    check L102() else D35();
  L104():
    len3 = force? len2;
    checkMissing(len3);
    r72 = `*`(r67, len3);
    st nend = r72;
    apply = ldf apply;
    check L105() else D38();
  D35():
    deopt 127 [r69];
  D38():
    deopt 135 [];
  L102():
    len = ld len;
    check L103() else D36();
  L105():
    p15 = prom<V +>{
      array = ldf array;
      p12 = prom<V +>{
        sym9 = ldf c;
        base9 = ldf c in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L2() else L3();
      L0(r74):
        return r74;
      L2():
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c19 = `is.object`(x18);
        if c19 then L4() else L5();
      L3():
        r73 = dyn base9(<lang `[`(x, `:`(1.0, nend), )>);
        goto L0(r73);
      L1(dx5):
        c20 = ldf c in base;
        r77 = dyn c20(dx5);
        goto L0(r77);
      L4():
        dr4 = tryDispatchBuiltin.1("[", x18);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5();
      L5():
        nend = ld nend;
        nend1 = force? nend;
        checkMissing(nend1);
        r75 = `:`(1.0, nend1);
        __2 = ldf `[` in base;
        r76 = dyn __2(x18, r75, <missing>);
        goto L1(r76);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      };
      p14 = prom<V +>{
        sym10 = ldf c;
        base10 = ldf c in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r80):
        return r80;
      L1():
        len4 = ld len;
        len5 = force? len4;
        checkMissing(len5);
        nend2 = ld nend;
        nend3 = force? nend2;
        checkMissing(nend3);
        len6 = ld len;
        len7 = force? len6;
        checkMissing(len7);
        r81 = `/`(nend3, len7);
        ncol = ldf ncol;
        p13 = prom<V +>{
          x21 = ld x;
          x22 = force? x21;
          checkMissing(x22);
          return x22;
        };
        r83 = dyn ncol(p13);
        c21 = ldf c in base;
        r84 = dyn c21(len5, r81, r83);
        goto L0(r84);
      L2():
        r79 = dyn base10(<sym len>, <lang `/`(nend, len)>, <lang ncol(x)>);
        goto L0(r79);
      };
      r86 = dyn array[, dim](p12, p14);
      return r86;
    };
    p16 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      c22 = ldf c in base;
      r90 = dyn c22(2, 3);
      goto L0(r90);
    L2():
      r88 = dyn base11(2, 3);
      goto L0(r88);
    };
    p17 = prom<V +>{
      FUN3 = ld FUN;
      FUN4 = force? FUN3;
      checkMissing(FUN4);
      return FUN4;
    };
    ddd1 = ld `...`;
    r93 = dyn apply[, MARGIN, FUN, `...`](p15, p16, p17, ddd1);
    check L106() else D39();
  D36():
    deopt 127 [r69, len];
  D39():
    deopt 142 [r93];
  L103():
    len1 = force? len;
    checkMissing(len1);
    r70 = `/`(r69, len1);
    r71 = floor(r70);
    goto L27(r71);
  L106():
    st x = r93;
    mat2 = ld mat;
    check L107() else D40();
  D40():
    deopt 144 [mat2];
  L107():
    mat3 = force? mat2;
    checkMissing(mat3);
    r94 = `!`(mat3);
    c23 = `as.logical`(r94);
    if c23 then L108() else L28();
  L28():
    cn = ld cn;
    check L112() else D43();
  L29():
    ts = ldf ts;
    check L115() else D46();
  L108():
    as_vector = ldf `as.vector`;
    check L109() else D41();
  D41():
    deopt 148 [];
  D43():
    deopt 152 [cn];
  D46():
    deopt 160 [];
  L109():
    p18 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r96 = dyn as_vector(p18);
    check L110() else D42();
  L112():
    cn1 = force? cn;
    checkMissing(cn1);
    l = ld x;
    colnames__ = ldf `colnames<-`;
    check L113() else D44();
  L115():
    p19 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p20 = prom<V +>{
      nstart = ld nstart;
      nstart1 = force? nstart;
      checkMissing(nstart1);
      return nstart1;
    };
    p21 = prom<V +>{
      nfrequency16 = ld nfrequency;
      nfrequency17 = force? nfrequency16;
      checkMissing(nfrequency17);
      return nfrequency17;
    };
    r102 = dyn ts[, start, frequency](p19, p20, p21);
    check L116() else D47();
  D42():
    deopt 150 [r96];
  D44():
    deopt 155 [cn1, l, cn1];
  D47():
    deopt 166 [r102];
  L110():
    st x = r96;
    goto L29();
  L113():
    r98 = dyn colnames__(l, NULL, cn1);
    check L114() else D45();
  L116():
    popenv;
    return r102;
  D45():
    deopt 157 [cn1, r98];
  L114():
    st x = r98;
    goto L29();
  }
}