fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3752893310;
    st `qr.X` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3752893310(qr, complete, ncol) {
  (reg qr:*, reg complete:*, reg ncol:*) -+> V { var qr:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var ncol:*, reg ncol_isMissing:L, reg ncol_orDefault:*, reg complete1:*, reg complete2:V, reg c:L, reg nrow:cls, reg R:*, reg R1:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg R2:*, reg R3:V, reg dim:cls, reg r6:V, reg min:cls, reg r7:V, reg p1:p(V +), reg is_qr:cls, reg qr1:*, reg qr2:V, reg p2:p(V +), reg r10:V, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg qr3:*, reg qr4:V, reg c2:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg qr7:*, reg qr8:V, reg c3:L, reg qr10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg r20:I, reg identical:cls, reg r21:V, reg r22:V, reg qr_R:cls, reg qr11:*, reg qr12:V, reg p3:p(V +), reg r24:V, reg pivoted:*, reg pivoted1:V, reg c4:L, reg c6:V, reg ncol1:*, reg ncol2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg c9:L, reg ncol5:V, reg r26:V, reg qr13:*, reg qr14:V, reg c10:L, reg c12:L, reg ncol7:V, reg qr16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c14:L, reg ncol9:V, reg dx5:V, reg r27:V, reg length:cls, reg r28:V, reg r29:V, reg c15:L, reg c16:V, reg c18:L, reg stop1:cls, reg r30:V, reg mode:cls, reg R4:*, reg R5:V, reg p4:p(V +), reg r33:V, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg R6:*, reg R7:V, reg dim1:cls, reg r39:V, reg c19:L, reg r41:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r42:V, reg as_integer:cls, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg p5:*, reg p6:V, reg is_na:cls, reg r46:V, reg c20:L, reg stop2:cls, reg r47:V, reg ncol10:*, reg ncol11:V, reg p7:*, reg p8:V, reg r49:V, reg c21:L, reg R8:*, reg R9:V, reg c22:L, reg R11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg ncol12:*, reg ncol13:V, reg r52:I, reg __1:cls, reg r53:V, reg ncol14:*, reg ncol15:V, reg p9:*, reg p10:V, reg r54:V, reg c23:L, reg diag:cls, reg cmplx:*, reg cmplx1:V, reg r55:V, reg c24:L, reg p11:p(V +), reg nrow1:cls, reg R15:*, reg R16:V, reg p12:p(V +), reg r58:V, reg p13:p(V +), reg ncol16:*, reg ncol17:V, reg p14:p(V +), reg r61:V, reg R17:*, reg R18:V, reg l:*, reg c25:L, reg R20:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg R27:V, reg R28:V, reg r63:V, reg p15:*, reg p16:V, reg r64:I, reg ___:cls, reg r65:V, reg tmp:*, reg tmp1:V, reg qr_qy:cls, reg qr17:*, reg qr18:V, reg p17:p(V +), reg R29:*, reg R30:V, reg p18:p(V +), reg r68:V, reg colnames:cls, reg res:*, reg res1:V, reg p19:p(V +), reg r70:V, reg pivoted2:*, reg pivoted3:V, reg c26:L, reg res2:*, reg res3:V, reg c27:L, reg res5:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg ip:*, reg ip1:V, reg __2:cls, reg r71:V, reg l6:*, reg c28:L, reg dx16:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx20:V, reg qr19:*, reg qr20:V, reg c29:L, reg dx23:V, reg l10:*, reg dx24:V, reg qr22:V, reg dr16:V, reg dc8:L, reg dx27:V, reg dx28:V, reg dx29:V, reg dx30:V, reg r72:V, reg ___1:cls, reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg cn:*, reg cn1:V, reg c30:V, reg r76:V, reg c31:L, reg cn2:*, reg cn3:V, reg c32:L, reg cn5:V, reg dr18:V, reg dc9:L, reg dx31:V, reg dx32:V, reg ip2:*, reg ip3:V, reg __3:cls, reg r77:V, reg l13:*, reg colnames1:cls, reg r78:V, reg c33:L, reg dx34:V, reg l15:*, reg r80:V, reg dr20:V, reg dc10:L, reg dx36:V, reg dx37:V, reg l17:*, reg dx38:V, reg qr23:*, reg qr24:V, reg c34:L, reg dx41:V, reg l19:*, reg r82:V, reg dx42:V, reg qr26:V, reg dr22:V, reg dc11:L, reg dx45:V, reg dx46:V, reg l21:*, reg r84:V, reg dx47:V, reg dx48:V, reg r85:V, reg ___2:cls, reg r86:V, reg colnames__:cls, reg r87:V, reg dx49:V, reg res6:*, reg res7:V |
    mkenv;
    st qr = qr;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(FALSE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    ncol_isMissing = missing.0(ncol);
    if ncol_isMissing then L1() else L2(ncol);
  L1():
    p1 = prom<V +>{
      complete1 = ld complete;
      complete2 = force? complete1;
      checkMissing(complete2);
      c = `as.logical`(complete2);
      if c then L3() else L0();
    L0():
      sym = ldf min;
      base = ldf min in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L3():
      nrow = ldf nrow;
      p = prom<V +>{
        R = ld R;
        R1 = force? R;
        checkMissing(R1);
        return R1;
      };
      r1 = dyn nrow(p);
      return r1;
    L1(r3):
      return r3;
    L5():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L7() else L8();
    L6():
      r2 = dyn base(<lang dim(R)>);
      goto L1(r2);
    L2(r5):
      min = ldf min in base;
      r7 = dyn min(r5);
      goto L1(r7);
    L7():
      R2 = ld R;
      R3 = force? R2;
      checkMissing(R3);
      dim = ldf dim in base;
      r6 = dyn dim(R3);
      goto L2(r6);
    L8():
      r4 = dyn base1(<sym R>);
      goto L2(r4);
    };
    goto L2(p1);
  L2(ncol_orDefault):
    st ncol = ncol_orDefault;
    is_qr = ldf `is.qr`;
    check L33() else D0();
  D0():
    deopt 1 [];
  L33():
    p2 = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      return qr2;
    };
    r10 = dyn is_qr(p2);
    check L34() else D1();
  D1():
    deopt 3 [r10];
  L34():
    r11 = `!`(r10);
    c1 = `as.logical`(r11);
    if c1 then L35() else L3();
  L3():
    goto L4();
  L4():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L35():
    stop = ldf stop;
    check L36() else D2();
  D2():
    deopt 6 [];
  L5(r15):
    r22 = `!`(r15);
    st pivoted = r22;
    qr_R = ldf `qr.R`;
    check L54() else D7();
  L36():
    r12 = dyn stop("argument is not a QR decomposition");
    check L37() else D3();
  L39():
    qr3 = ld qr;
    check L41() else D4();
  L40():
    r14 = dyn base2(<lang `$`(qr, pivot)>, <lang `<-`(ip, seq_along(`$`(qr, pivot)))>);
    goto L5(r14);
  D3():
    deopt 8 [r12];
  D4():
    deopt 13 [qr3];
  D7():
    deopt 34 [];
  L37():
    goto L4();
  L41():
    qr4 = force? qr3;
    checkMissing(qr4);
    c2 = `is.object`(qr4);
    if c2 then L43() else L44(qr4);
  L54():
    p3 = prom<V +>{
      qr11 = ld qr;
      qr12 = force? qr11;
      checkMissing(qr12);
      return qr12;
    };
    r24 = dyn qr_R[, complete](p3, TRUE);
    check L55() else D8();
  D8():
    deopt 38 [r24];
  L42(dx1):
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L43():
    dr = tryDispatchBuiltin.1("$", qr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(qr6):
    r16 = `$`(qr6, <sym pivot>);
    goto L42(r16);
  L55():
    st R = r24;
    pivoted = ld pivoted;
    check L56() else D9();
  D9():
    deopt 40 [pivoted];
  L6(r18):
    st ip = r18;
    identical = ldf identical in base;
    r21 = dyn identical(dx1, r18, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L53() else D6();
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L42(dx);
  L46():
    qr7 = ld qr;
    check L48() else D5();
  L47():
    r17 = dyn base3(<lang `$`(qr, pivot)>);
    goto L6(r17);
  L56():
    pivoted1 = force? pivoted;
    checkMissing(pivoted1);
    c4 = `as.logical`(pivoted1);
    if c4 then L57() else L7(c4);
  D5():
    deopt 17 [qr7];
  D6():
    deopt 30 [r21];
  L7(c6):
    c18 = `as.logical`(c6);
    if c18 then L68() else L9();
  L48():
    qr8 = force? qr7;
    checkMissing(qr8);
    c3 = `is.object`(qr8);
    if c3 then L50() else L51(qr8);
  L53():
    goto L5(r21);
  L57():
    ncol1 = ld ncol;
    check L58() else D10();
  D10():
    deopt 42 [c4, ncol1];
  L9():
    goto L10();
  L10():
    mode = ldf mode;
    check L72() else D15();
  L49(dx3):
    r20 = seq_along(dx3);
    goto L6(r20);
  L50():
    dr2 = tryDispatchBuiltin.1("$", qr8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(qr10):
    r19 = `$`(qr10, <sym pivot>);
    goto L49(r19);
  L58():
    ncol2 = force? ncol1;
    checkMissing(ncol2);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L68():
    stop1 = ldf stop;
    check L69() else D13();
  D13():
    deopt 53 [];
  D15():
    deopt 59 [];
  L8(c9, ncol5, r26):
    r29 = `<`(ncol5, r26);
    c15 = `as.logical`(r29);
    c16 = `&&`(c9, c15);
    goto L7(c16);
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L49(dx2);
  L59():
    qr13 = ld qr;
    check L61() else D11();
  L60():
    r25 = dyn base4(<lang `$`(qr, pivot)>);
    goto L8(c4, ncol2, r25);
  L69():
    r30 = dyn stop1("need larger value of 'ncol' as pivoting occurred");
    check L70() else D14();
  L72():
    p4 = prom<V +>{
      R4 = ld R;
      R5 = force? R4;
      checkMissing(R5);
      return R5;
    };
    r33 = dyn mode(p4);
    check L73() else D16();
  D11():
    deopt 45 [c4, ncol2, qr13];
  D14():
    deopt 55 [r30];
  D16():
    deopt 61 [r33];
  L61():
    qr14 = force? qr13;
    checkMissing(qr14);
    c10 = `is.object`(qr14);
    if c10 then L63() else L64(c4, ncol2, qr14);
  L70():
    goto L10();
  L73():
    r34 = `==`(r33, "complex");
    st cmplx = r34;
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L11(r36):
    st p = r36;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L62(c14, ncol9, dx5):
    length = ldf length in base;
    r28 = dyn length(dx5);
    check L66() else D12();
  L63():
    dr4 = tryDispatchBuiltin.1("$", qr14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(c4, ncol2, dr4);
  L64(c12, ncol7, qr16):
    r27 = `$`(qr16, <sym pivot>);
    goto L62(c12, ncol7, r27);
  L74():
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L75():
    r35 = dyn base5(<lang `[`(dim(R), 2)>);
    goto L11(r35);
  D12():
    deopt 49 [c14, ncol9, r28];
  L12(r38):
    c19 = `is.object`(r38);
    if c19 then L80() else L81(r38);
  L14(r45):
    c20 = `as.logical`(r45);
    if c20 then L88() else L15();
  L65():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L62(c4, ncol2, dx4);
  L66():
    goto L8(c14, ncol9, r28);
  L76():
    R6 = ld R;
    check L78() else D17();
  L77():
    r37 = dyn base6(<sym R>);
    goto L12(r37);
  L84():
    p5 = ld p;
    check L86() else D20();
  L85():
    r44 = dyn base7(<sym p>);
    goto L14(r44);
  D17():
    deopt 69 [R6];
  D20():
    deopt 81 [p5];
  L13(dx7):
    as_integer = ldf `as.integer` in base;
    r43 = dyn as_integer(dx7);
    check L83() else D19();
  L15():
    goto L16();
  L16():
    ncol10 = ld ncol;
    check L92() else D24();
  L78():
    R7 = force? R6;
    checkMissing(R7);
    dim1 = ldf dim in base;
    r39 = dyn dim1(R7);
    check L79() else D18();
  L80():
    dr6 = tryDispatchBuiltin.1("[", r38);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(r41):
    __ = ldf `[` in base;
    r42 = dyn __(r41, 2);
    goto L13(r42);
  L86():
    p6 = force? p5;
    checkMissing(p6);
    is_na = ldf `is.na` in base;
    r46 = dyn is_na(p6);
    check L87() else D21();
  L88():
    stop2 = ldf stop;
    check L89() else D22();
  D18():
    deopt 72 [r39];
  D19():
    deopt 77 [r43];
  D21():
    deopt 84 [r46];
  D22():
    deopt 86 [];
  D24():
    deopt 91 [ncol10];
  L79():
    goto L12(r39);
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L83():
    goto L11(r43);
  L87():
    goto L14(r46);
  L89():
    r47 = dyn stop2("invalid NCOL(R)");
    check L90() else D23();
  L92():
    ncol11 = force? ncol10;
    checkMissing(ncol11);
    p7 = ld p;
    check L93() else D25();
  D23():
    deopt 88 [r47];
  D25():
    deopt 92 [ncol11, p7];
  L90():
    goto L16();
  L93():
    p8 = force? p7;
    checkMissing(p8);
    r49 = `<`(ncol11, p8);
    c21 = `as.logical`(r49);
    if c21 then L94() else L17();
  L17():
    ncol14 = ld ncol;
    check L103() else D28();
  L20():
    qr_qy = ldf `qr.qy`;
    check L117() else D35();
  L94():
    R8 = ld R;
    check L95() else D26();
  D26():
    deopt 95 [R8];
  D28():
    deopt 107 [ncol14];
  D35():
    deopt 135 [];
  L95():
    R9 = force? R8;
    checkMissing(R9);
    c22 = `is.object`(R9);
    if c22 then L96() else L97(R9);
  L103():
    ncol15 = force? ncol14;
    checkMissing(ncol15);
    p9 = ld p;
    check L104() else D29();
  L117():
    p17 = prom<V +>{
      qr17 = ld qr;
      qr18 = force? qr17;
      checkMissing(qr18);
      return qr18;
    };
    p18 = prom<V +>{
      R29 = ld R;
      R30 = force? R29;
      checkMissing(R30);
      return R30;
    };
    r68 = dyn qr_qy(p17, p18);
    check L118() else D36();
  D29():
    deopt 108 [ncol15, p9];
  D36():
    deopt 138 [r68];
  L18(dx9):
    st R = dx9;
    goto L20();
  L96():
    dr8 = tryDispatchBuiltin.1("[", R9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L98() else L97(dr8);
  L97(R11):
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L104():
    p10 = force? p9;
    checkMissing(p10);
    r54 = `>`(ncol15, p10);
    c23 = `as.logical`(r54);
    if c23 then L105() else L21();
  L118():
    st res = r68;
    colnames = ldf colnames;
    check L119() else D37();
  D37():
    deopt 141 [];
  L19(r51):
    __1 = ldf `[` in base;
    r53 = dyn __1(R9, <missing>, r51, FALSE);
    goto L18(r53);
  L21():
    goto L20();
  L98():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx8);
  L99():
    ncol12 = ld ncol;
    check L101() else D27();
  L100():
    r50 = dyn base8(<sym ncol>);
    goto L19(r50);
  L105():
    diag = ldf diag;
    check L106() else D30();
  L119():
    p19 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r70 = dyn colnames(p19);
    check L120() else D38();
  D27():
    deopt 99 [R11, ncol12];
  D30():
    deopt 112 [];
  D38():
    deopt 143 [r70];
  L101():
    ncol13 = force? ncol12;
    checkMissing(ncol13);
    r52 = seq_len(ncol13);
    goto L19(r52);
  L106():
    p11 = prom<V +>{
      cmplx = ld cmplx;
      cmplx1 = force? cmplx;
      checkMissing(cmplx1);
      r55 = `!`(cmplx1);
      c24 = `as.logical`(r55);
      if c24 then L1() else L0();
    L0():
      return 1.0+0.0i;
    L1():
      return 1.0;
    };
    p13 = prom<V +>{
      nrow1 = ldf nrow;
      p12 = prom<V +>{
        R15 = ld R;
        R16 = force? R15;
        checkMissing(R16);
        return R16;
      };
      r58 = dyn nrow1(p12);
      return r58;
    };
    p14 = prom<V +>{
      ncol16 = ld ncol;
      ncol17 = force? ncol16;
      checkMissing(ncol17);
      return ncol17;
    };
    r61 = dyn diag(p11, p13, p14);
    check L107() else D31();
  L120():
    st cn = r70;
    pivoted2 = ld pivoted;
    check L121() else D39();
  D31():
    deopt 116 [r61];
  D39():
    deopt 145 [pivoted2];
  L107():
    st tmp = r61;
    R17 = ld R;
    check L108() else D32();
  L121():
    pivoted3 = force? pivoted2;
    checkMissing(pivoted3);
    c26 = `as.logical`(pivoted3);
    if c26 then L122() else L24();
  D32():
    deopt 118 [R17];
  L24():
    goto L32();
  L32():
    res6 = ld res;
    check L159() else D51();
  L108():
    R18 = force? R17;
    checkMissing(R18);
    l = ld tmp;
    c25 = `is.object`(l);
    if c25 then L109() else L110(R18, l);
  L122():
    res2 = ld res;
    check L123() else D40();
  D40():
    deopt 147 [res2];
  D51():
    deopt 189 [res6];
  L22(dx12):
    st tmp = dx12;
    tmp = ld tmp;
    check L115() else D34();
  L109():
    dr10 = tryDispatchBuiltin.0("[<-", l, R18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L111() else L110(R18, dr10);
  L110(R20, l2):
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L112() else L113();
  L123():
    res3 = force? res2;
    checkMissing(res3);
    c27 = `is.object`(res3);
    if c27 then L124() else L125(res3);
  L159():
    res7 = force? res6;
    checkMissing(res7);
    popenv;
    return res7;
  D34():
    deopt 129 [tmp];
  L23(R27, R28, r63):
    ___ = ldf `[<-` in base;
    r65 = dyn ___(l, <missing>, r63, R28);
    goto L22(r65);
  L25(dx14):
    l6 = ld res;
    c28 = `is.object`(l6);
    if c28 then L128() else L129(dx14, l6);
  L111():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx11);
  L112():
    p15 = ld p;
    check L114() else D33();
  L113():
    r62 = dyn base9(<sym p>);
    goto L23(R20, R18, r62);
  L115():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st R = tmp1;
    goto L20();
  L124():
    dr12 = tryDispatchBuiltin.1("[", res3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L126() else L125(dr12);
  L125(res5):
    ip = ld ip;
    check L127() else D41();
  D33():
    deopt 123 [R20, l2, R18, p15];
  D41():
    deopt 150 [res5, ip];
  L26(dx20):
    st res = dx20;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L136() else L137();
  L114():
    p16 = force? p15;
    checkMissing(p16);
    r64 = seq_len(p16);
    goto L23(R20, R18, r64);
  L126():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L25(dx13);
  L127():
    ip1 = force? ip;
    __2 = ldf `[` in base;
    r71 = dyn __2(res3, <missing>, ip1);
    goto L25(r71);
  L128():
    dr14 = tryDispatchBuiltin.0("[<-", l6, dx14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L130() else L129(dx14, dr14);
  L129(dx16, l8):
    qr19 = ld qr;
    check L131() else D42();
  D42():
    deopt 156 [dx16, l8, dx14, qr19];
  L27(r75):
    r76 = `!`(r75);
    c31 = `as.logical`(r76);
    if c31 then L139() else L28();
  L130():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L26(dx18);
  L131():
    qr20 = force? qr19;
    checkMissing(qr20);
    c29 = `is.object`(qr20);
    if c29 then L133() else L134(dx16, l8, dx14, qr20);
  L136():
    cn = ld cn;
    check L138() else D43();
  L137():
    r74 = dyn base10(<sym cn>);
    goto L27(r74);
  D43():
    deopt 163 [cn];
  L28():
    goto L31(NULL);
  L31(dx49):
    goto L32();
  L132(dx28, dx29, dx30):
    ___1 = ldf `[<-` in base;
    r73 = dyn ___1(l6, <missing>, dx30, dx29);
    goto L26(r73);
  L133():
    dr16 = tryDispatchBuiltin.1("$", qr20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L135() else L134(dx16, l8, dx14, dr16);
  L134(dx23, l10, dx24, qr22):
    r72 = `$`(qr22, <sym pivot>);
    goto L132(dx23, dx24, r72);
  L138():
    cn1 = force? cn;
    checkMissing(cn1);
    c30 = `==`(cn1, NULL);
    goto L27(c30);
  L139():
    cn2 = ld cn;
    check L140() else D44();
  D44():
    deopt 167 [cn2];
  L135():
    dx27 = getTryDispatchBuiltinValue(dr16);
    goto L132(dx16, dx14, dx27);
  L140():
    cn3 = force? cn2;
    checkMissing(cn3);
    c32 = `is.object`(cn3);
    if c32 then L141() else L142(cn3);
  L29(dx32):
    l13 = ld res;
    colnames1 = ldf colnames;
    check L145() else D46();
  L141():
    dr18 = tryDispatchBuiltin.1("[", cn3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L143() else L142(dr18);
  L142(cn5):
    ip2 = ld ip;
    check L144() else D45();
  D45():
    deopt 169 [cn5, ip2];
  D46():
    deopt 173 [dx32, l13, dx32];
  L143():
    dx31 = getTryDispatchBuiltinValue(dr18);
    goto L29(dx31);
  L144():
    ip3 = force? ip2;
    __3 = ldf `[` in base;
    r77 = dyn __3(cn5, ip3);
    goto L29(r77);
  L145():
    r78 = dyn colnames1(dx32, NULL);
    check L146() else D47();
  D47():
    deopt 175 [dx32, l13, dx32, r78];
  L146():
    c33 = `is.object`(r78);
    if c33 then L147() else L148(dx32, l13, r78);
  L30(dx37, l17, dx38):
    colnames__ = ldf `colnames<-`;
    check L155() else D49();
  L147():
    dr20 = tryDispatchBuiltin.0("[<-", r78, dx32);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L149() else L148(dx32, l13, dr20);
  L148(dx34, l15, r80):
    qr23 = ld qr;
    check L150() else D48();
  D48():
    deopt 177 [dx34, l15, r80, dx32, qr23];
  D49():
    deopt 181 [dx37, l17, dx38];
  L149():
    dx36 = getTryDispatchBuiltinValue(dr20);
    goto L30(dx32, l13, dx36);
  L150():
    qr24 = force? qr23;
    checkMissing(qr24);
    c34 = `is.object`(qr24);
    if c34 then L152() else L153(dx34, l15, r80, dx32, qr24);
  L155():
    r87 = dyn colnames__(l17, NULL, dx38);
    check L156() else D50();
  D50():
    deopt 183 [dx37, r87];
  L151(dx46, l21, r84, dx47, dx48):
    ___2 = ldf `[<-` in base;
    r86 = dyn ___2(r84, dx47, dx48);
    goto L30(dx46, l21, r86);
  L152():
    dr22 = tryDispatchBuiltin.1("$", qr24);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L154() else L153(dx34, l15, r80, dx32, dr22);
  L153(dx41, l19, r82, dx42, qr26):
    r85 = `$`(qr26, <sym pivot>);
    goto L151(dx41, l19, r82, dx42, r85);
  L156():
    st res = r87;
    goto L31(dx37);
  L154():
    dx45 = getTryDispatchBuiltinValue(dr22);
    goto L151(dx34, l15, r80, dx32, dx45);
  }
}