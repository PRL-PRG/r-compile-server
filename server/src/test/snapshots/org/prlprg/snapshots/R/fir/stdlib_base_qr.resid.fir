fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-498831807`;
    st `qr.resid` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-498831807`(qr, y) {
  (reg qr:*, reg y:*) -+> V { var qr:*, var y:*, reg is_qr:cls, reg qr1:*, reg qr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg qr3:*, reg qr4:V, reg c1:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c2:L, reg c3:L, reg stop1:cls, reg r8:V, reg isTRUE:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg qr7:*, reg qr8:V, reg attr:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg c4:L, reg stop2:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg qr9:*, reg qr10:V, reg c5:L, reg qr12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg as_integer:cls, reg r20:V, reg k:*, reg k1:V, reg r21:V, reg c6:L, reg y1:*, reg y2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg nrow:cls, reg qr13:*, reg qr14:V, reg c7:L, reg qr16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r26:V, reg p2:p(V +), reg r28:V, reg as_integer1:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg n:*, reg n1:V, reg is_na:cls, reg r32:V, reg c8:L, reg stop3:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg NCOL:cls, reg y3:*, reg y4:V, reg p3:p(V +), reg r38:V, reg as_integer2:cls, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg ny:*, reg ny1:V, reg is_na1:cls, reg r42:V, reg c9:L, reg stop4:cls, reg r43:V, reg NROW:cls, reg y5:*, reg y6:V, reg p4:p(V +), reg r46:V, reg n2:*, reg n3:V, reg r47:V, reg c10:L, reg stop5:cls, reg r48:V, reg l:*, reg storage_mode__:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg _F_dqrrsd:*, reg _F_dqrrsd1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg qr17:*, reg qr18:V, reg c11:L, reg qr20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r55:V, reg as_double:cls, reg r56:V, reg n4:*, reg n5:V, reg k2:*, reg k3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg qr21:*, reg qr22:V, reg c12:L, reg qr24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r59:V, reg as_double1:cls, reg r60:V, reg y7:*, reg y8:V, reg ny2:*, reg ny3:V, reg y9:*, reg y10:V, reg _Fortran:cls, reg r61:V, reg c13:L, reg r63:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r64:V |
    mkenv;
    st qr = qr;
    st y = y;
    is_qr = ldf `is.qr`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      return qr2;
    };
    r1 = dyn is_qr(p);
    check L24() else D1();
  D1():
    deopt 3 [r1];
  L24():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L25() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf `is.complex`;
    base = ldf `is.complex` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L25():
    stop = ldf stop;
    check L26() else D2();
  D2():
    deopt 6 [];
  L2(r6):
    c3 = `as.logical`(r6);
    if c3 then L36() else L3();
  L26():
    r3 = dyn stop("argument is not a QR decomposition");
    check L27() else D3();
  L29():
    qr3 = ld qr;
    check L31() else D4();
  L30():
    r5 = dyn base(<lang `$`(qr, qr)>);
    goto L2(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 12 [qr3];
  L3():
    goto L4();
  L4():
    isTRUE = ldf isTRUE;
    check L40() else D7();
  L27():
    goto L1();
  L31():
    qr4 = force? qr3;
    checkMissing(qr4);
    c1 = `is.object`(qr4);
    if c1 then L33() else L34(qr4);
  L36():
    stop1 = ldf stop;
    check L37() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 23 [];
  L32(dx1):
    c2 = `is.complex`(dx1);
    goto L2(c2);
  L33():
    dr = tryDispatchBuiltin.1("$", qr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(qr6):
    r7 = `$`(qr6, <sym qr>);
    goto L32(r7);
  L37():
    r8 = dyn stop1("not implemented for complex 'qr'");
    check L38() else D6();
  L40():
    p1 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      qr7 = ld qr;
      qr8 = force? qr7;
      checkMissing(qr8);
      attr = ldf attr in base;
      r12 = dyn attr(qr8, "useLAPACK");
      goto L0(r12);
    L2():
      r10 = dyn base1(<sym qr>, "useLAPACK");
      goto L0(r10);
    };
    r14 = dyn isTRUE(p1);
    check L41() else D8();
  D6():
    deopt 19 [r8];
  D8():
    deopt 25 [r14];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L38():
    goto L4();
  L41():
    c4 = `as.logical`(r14);
    if c4 then L42() else L5();
  L5():
    goto L6();
  L6():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L42():
    stop2 = ldf stop;
    check L43() else D9();
  D9():
    deopt 27 [];
  L7(r18):
    st k = r18;
    k = ld k;
    check L54() else D13();
  L43():
    r15 = dyn stop2("not supported for LAPACK QR");
    check L44() else D10();
  L46():
    qr9 = ld qr;
    check L48() else D11();
  L47():
    r17 = dyn base2(<lang `$`(qr, rank)>);
    goto L7(r17);
  D10():
    deopt 29 [r15];
  D11():
    deopt 34 [qr9];
  D13():
    deopt 40 [k];
  L44():
    goto L6();
  L48():
    qr10 = force? qr9;
    checkMissing(qr10);
    c5 = `is.object`(qr10);
    if c5 then L50() else L51(qr10);
  L54():
    k1 = force? k;
    checkMissing(k1);
    r21 = `==`(k1, 0.0);
    c6 = `as.logical`(r21);
    if c6 then L55() else L8();
  L8():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L49(dx3):
    as_integer = ldf `as.integer` in base;
    r20 = dyn as_integer(dx3);
    check L53() else D12();
  L50():
    dr2 = tryDispatchBuiltin.1("$", qr10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(qr12):
    r19 = `$`(qr12, <sym rank>);
    goto L49(r19);
  L55():
    y1 = ld y;
    check L56() else D14();
  D12():
    deopt 38 [r20];
  D14():
    deopt 44 [y1];
  L10(r25):
    st n = r25;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L49(dx2);
  L53():
    goto L7(r20);
  L56():
    y2 = force? y1;
    checkMissing(y2);
    popenv;
    return y2;
  L59():
    nrow = ldf nrow;
    check L61() else D15();
  L60():
    r24 = dyn base3(<lang nrow(`$`(qr, qr))>);
    goto L10(r24);
  D15():
    deopt 52 [];
  L11(r31):
    c8 = `as.logical`(r31);
    if c8 then L68() else L12();
  L61():
    p2 = prom<V +>{
      qr13 = ld qr;
      qr14 = force? qr13;
      checkMissing(qr14);
      c7 = `is.object`(qr14);
      if c7 then L1() else L2(qr14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", qr14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(qr16):
      r26 = `$`(qr16, <sym qr>);
      goto L0(r26);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r28 = dyn nrow(p2);
    check L62() else D16();
  L64():
    n = ld n;
    check L66() else D18();
  L65():
    r30 = dyn base4(<sym n>);
    goto L11(r30);
  D16():
    deopt 54 [r28];
  D18():
    deopt 60 [n];
  L12():
    goto L13();
  L13():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L62():
    as_integer1 = ldf `as.integer` in base;
    r29 = dyn as_integer1(r28);
    check L63() else D17();
  L66():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(n1);
    check L67() else D19();
  L68():
    stop3 = ldf stop;
    check L69() else D20();
  D17():
    deopt 56 [r29];
  D19():
    deopt 63 [r32];
  D20():
    deopt 65 [];
  L14(r36):
    st ny = r36;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L63():
    goto L10(r29);
  L67():
    goto L11(r32);
  L69():
    r33 = dyn stop3("invalid nrow(qr$qr)");
    check L70() else D21();
  L72():
    NCOL = ldf NCOL;
    check L74() else D22();
  L73():
    r35 = dyn base5(<lang NCOL(y)>);
    goto L14(r35);
  D21():
    deopt 67 [r33];
  D22():
    deopt 73 [];
  L15(r41):
    c9 = `as.logical`(r41);
    if c9 then L81() else L16();
  L70():
    goto L13();
  L74():
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r38 = dyn NCOL(p3);
    check L75() else D23();
  L77():
    ny = ld ny;
    check L79() else D25();
  L78():
    r40 = dyn base6(<sym ny>);
    goto L15(r40);
  D23():
    deopt 75 [r38];
  D25():
    deopt 81 [ny];
  L16():
    goto L17();
  L17():
    NROW = ldf NROW;
    check L85() else D29();
  L75():
    as_integer2 = ldf `as.integer` in base;
    r39 = dyn as_integer2(r38);
    check L76() else D24();
  L79():
    ny1 = force? ny;
    checkMissing(ny1);
    is_na1 = ldf `is.na` in base;
    r42 = dyn is_na1(ny1);
    check L80() else D26();
  L81():
    stop4 = ldf stop;
    check L82() else D27();
  D24():
    deopt 77 [r39];
  D26():
    deopt 84 [r42];
  D27():
    deopt 86 [];
  D29():
    deopt 92 [];
  L76():
    goto L14(r39);
  L80():
    goto L15(r42);
  L82():
    r43 = dyn stop4("invalid NCOL(y)");
    check L83() else D28();
  L85():
    p4 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r46 = dyn NROW(p4);
    check L86() else D30();
  D28():
    deopt 88 [r43];
  D30():
    deopt 94 [r46];
  L83():
    goto L17();
  L86():
    n2 = ld n;
    check L87() else D31();
  D31():
    deopt 94 [r46, n2];
  L87():
    n3 = force? n2;
    checkMissing(n3);
    r47 = `!=`(r46, n3);
    c10 = `as.logical`(r47);
    if c10 then L88() else L18();
  L18():
    goto L19();
  L19():
    l = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L92() else D34();
  L88():
    stop5 = ldf stop;
    check L89() else D32();
  D32():
    deopt 98 [];
  D34():
    deopt 106 ["double", l, "double"];
  L89():
    r48 = dyn stop5("'qr' and 'y' must have the same number of rows");
    check L90() else D33();
  L92():
    r50 = dyn storage_mode__(l, NULL, "double");
    check L93() else D35();
  D33():
    deopt 100 [r48];
  D35():
    deopt 108 ["double", r50];
  L90():
    goto L19();
  L93():
    st y = r50;
    sym7 = ldf `.Fortran`;
    base7 = ldf `.Fortran` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L20(r52):
    c13 = `is.object`(r52);
    if c13 then L120() else L121(r52);
  L94():
    _F_dqrrsd = ld `.F_dqrrsd`;
    check L96() else D36();
  L95():
    r51 = dyn base7[, , , , , , , rsd](<sym .F_dqrrsd>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <sym y>);
    goto L20(r51);
  D36():
    deopt 112 [_F_dqrrsd];
  L96():
    _F_dqrrsd1 = force? _F_dqrrsd;
    checkMissing(_F_dqrrsd1);
    sym8 = ldf `as.double`;
    base8 = ldf `as.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  L119(dx11):
    popenv;
    return dx11;
  L120():
    dr10 = tryDispatchBuiltin.1("$", r52);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L122() else L121(dr10);
  L121(r63):
    r64 = `$`(r63, <sym rsd>);
    goto L119(r64);
  L21(r54):
    n4 = ld n;
    check L105() else D39();
  L97():
    qr17 = ld qr;
    check L99() else D37();
  L98():
    r53 = dyn base8(<lang `$`(qr, qr)>);
    goto L21(r53);
  L122():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L119(dx10);
  D37():
    deopt 116 [qr17];
  D39():
    deopt 121 [n4];
  L99():
    qr18 = force? qr17;
    checkMissing(qr18);
    c11 = `is.object`(qr18);
    if c11 then L101() else L102(qr18);
  L105():
    n5 = force? n4;
    checkMissing(n5);
    k2 = ld k;
    check L106() else D40();
  D40():
    deopt 123 [k2];
  L100(dx7):
    as_double = ldf `as.double` in base;
    r56 = dyn as_double(dx7);
    check L104() else D38();
  L101():
    dr6 = tryDispatchBuiltin.1("$", qr18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L103() else L102(dr6);
  L102(qr20):
    r55 = `$`(qr20, <sym qr>);
    goto L100(r55);
  L106():
    k3 = force? k2;
    checkMissing(k3);
    sym9 = ldf `as.double`;
    base9 = ldf `as.double` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  D38():
    deopt 120 [r56];
  L22(r58):
    y7 = ld y;
    check L115() else D43();
  L103():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L100(dx6);
  L104():
    goto L21(r56);
  L107():
    qr21 = ld qr;
    check L109() else D41();
  L108():
    r57 = dyn base9(<lang `$`(qr, qraux)>);
    goto L22(r57);
  D41():
    deopt 127 [qr21];
  D43():
    deopt 132 [y7];
  L109():
    qr22 = force? qr21;
    checkMissing(qr22);
    c12 = `is.object`(qr22);
    if c12 then L111() else L112(qr22);
  L115():
    y8 = force? y7;
    checkMissing(y8);
    ny2 = ld ny;
    check L116() else D44();
  D44():
    deopt 134 [ny2];
  L110(dx9):
    as_double1 = ldf `as.double` in base;
    r60 = dyn as_double1(dx9);
    check L114() else D42();
  L111():
    dr8 = tryDispatchBuiltin.1("$", qr22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L113() else L112(dr8);
  L112(qr24):
    r59 = `$`(qr24, <sym qraux>);
    goto L110(r59);
  L116():
    ny3 = force? ny2;
    checkMissing(ny3);
    y9 = ld y;
    check L117() else D45();
  D42():
    deopt 131 [r60];
  D45():
    deopt 136 [y9];
  L113():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L110(dx8);
  L114():
    goto L22(r60);
  L117():
    y10 = force? y9;
    checkMissing(y10);
    _Fortran = ldf `.Fortran` in base;
    r61 = dyn _Fortran(_F_dqrrsd1, r54, n5, k3, r58, y8, ny3, y10);
    check L118() else D46();
  D46():
    deopt 140 [r61];
  L118():
    goto L20(r61);
  }
}