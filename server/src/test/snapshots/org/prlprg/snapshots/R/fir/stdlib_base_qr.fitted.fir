fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1787150131;
    st `qr.fitted` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1787150131(qr, y, k) {
  (reg qr:*, reg y:*, reg k:*) -+> V { var qr:*, var y:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg qr1:*, reg qr2:V, reg c:L, reg qr4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg is_qr:cls, reg qr5:*, reg qr6:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c1:L, reg stop:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg qr7:*, reg qr8:V, reg c2:L, reg qr10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c3:L, reg c4:L, reg stop1:cls, reg r10:V, reg isTRUE:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg qr11:*, reg qr12:V, reg attr:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg c5:L, reg stop2:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg nrow:cls, reg qr13:*, reg qr14:V, reg c6:L, reg qr16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg p3:p(V +), reg r23:V, reg as_integer:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg n:*, reg n1:V, reg is_na:cls, reg r27:V, reg c7:L, reg stop3:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg k1:*, reg k2:V, reg as_integer1:cls, reg r32:V, reg k3:*, reg k4:V, reg qr17:*, reg qr18:V, reg c8:L, reg k6:V, reg qr20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg k8:V, reg dx7:V, reg r33:V, reg r34:V, reg c9:L, reg stop4:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg NCOL:cls, reg y1:*, reg y2:V, reg p4:p(V +), reg r40:V, reg as_integer2:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg ny:*, reg ny1:V, reg is_na1:cls, reg r44:V, reg c10:L, reg stop5:cls, reg r45:V, reg NROW:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r48:V, reg n2:*, reg n3:V, reg r49:V, reg c11:L, reg stop6:cls, reg r50:V, reg l:*, reg storage_mode__:cls, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg _F_dqrxb:*, reg _F_dqrxb1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg qr21:*, reg qr22:V, reg c12:L, reg qr24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r57:V, reg as_double:cls, reg r58:V, reg n4:*, reg n5:V, reg k9:*, reg k10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg qr25:*, reg qr26:V, reg c13:L, reg qr28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r61:V, reg as_double1:cls, reg r62:V, reg y5:*, reg y6:V, reg ny2:*, reg ny3:V, reg y7:*, reg y8:V, reg _Fortran:cls, reg r63:V, reg c14:L, reg r65:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r66:V |
    mkenv;
    st qr = qr;
    st y = y;
    k_isMissing = missing.0(k);
    if k_isMissing then L0() else L1(k);
  L0():
    p = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      c = `is.object`(qr2);
      if c then L1() else L2(qr2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", qr2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(qr4):
      r = `$`(qr4, <sym rank>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(k_orDefault):
    st k = k_orDefault;
    is_qr = ldf `is.qr`;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p1 = prom<V +>{
      qr5 = ld qr;
      qr6 = force? qr5;
      checkMissing(qr6);
      return qr6;
    };
    r3 = dyn is_qr(p1);
    check L26() else D1();
  D1():
    deopt 3 [r3];
  L26():
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L27() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf `is.complex`;
    base = ldf `is.complex` in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L27():
    stop = ldf stop;
    check L28() else D2();
  D2():
    deopt 6 [];
  L4(r8):
    c4 = `as.logical`(r8);
    if c4 then L38() else L5();
  L28():
    r5 = dyn stop("argument is not a QR decomposition");
    check L29() else D3();
  L31():
    qr7 = ld qr;
    check L33() else D4();
  L32():
    r7 = dyn base(<lang `$`(qr, qr)>);
    goto L4(r7);
  D3():
    deopt 8 [r5];
  D4():
    deopt 12 [qr7];
  L5():
    goto L6();
  L6():
    isTRUE = ldf isTRUE;
    check L42() else D7();
  L29():
    goto L3();
  L33():
    qr8 = force? qr7;
    checkMissing(qr8);
    c2 = `is.object`(qr8);
    if c2 then L35() else L36(qr8);
  L38():
    stop1 = ldf stop;
    check L39() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 23 [];
  L34(dx3):
    c3 = `is.complex`(dx3);
    goto L4(c3);
  L35():
    dr2 = tryDispatchBuiltin.1("$", qr8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(qr10):
    r9 = `$`(qr10, <sym qr>);
    goto L34(r9);
  L39():
    r10 = dyn stop1("not implemented for complex 'qr'");
    check L40() else D6();
  L42():
    p2 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      qr11 = ld qr;
      qr12 = force? qr11;
      checkMissing(qr12);
      attr = ldf attr in base;
      r14 = dyn attr(qr12, "useLAPACK");
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym qr>, "useLAPACK");
      goto L0(r12);
    };
    r16 = dyn isTRUE(p2);
    check L43() else D8();
  D6():
    deopt 19 [r10];
  D8():
    deopt 25 [r16];
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx2);
  L40():
    goto L6();
  L43():
    c5 = `as.logical`(r16);
    if c5 then L44() else L7();
  L7():
    goto L8();
  L8():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L44():
    stop2 = ldf stop;
    check L45() else D9();
  D9():
    deopt 27 [];
  L9(r20):
    st n = r20;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L45():
    r17 = dyn stop2("not supported for LAPACK QR");
    check L46() else D10();
  L48():
    nrow = ldf nrow;
    check L50() else D11();
  L49():
    r19 = dyn base2(<lang nrow(`$`(qr, qr))>);
    goto L9(r19);
  D10():
    deopt 29 [r17];
  D11():
    deopt 35 [];
  L10(r26):
    c7 = `as.logical`(r26);
    if c7 then L57() else L11();
  L46():
    goto L8();
  L50():
    p3 = prom<V +>{
      qr13 = ld qr;
      qr14 = force? qr13;
      checkMissing(qr14);
      c6 = `is.object`(qr14);
      if c6 then L1() else L2(qr14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", qr14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(qr16):
      r21 = `$`(qr16, <sym qr>);
      goto L0(r21);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r23 = dyn nrow(p3);
    check L51() else D12();
  L53():
    n = ld n;
    check L55() else D14();
  L54():
    r25 = dyn base3(<sym n>);
    goto L10(r25);
  D12():
    deopt 37 [r23];
  D14():
    deopt 43 [n];
  L11():
    goto L12();
  L12():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L51():
    as_integer = ldf `as.integer` in base;
    r24 = dyn as_integer(r23);
    check L52() else D13();
  L55():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(n1);
    check L56() else D15();
  L57():
    stop3 = ldf stop;
    check L58() else D16();
  D13():
    deopt 39 [r24];
  D15():
    deopt 46 [r27];
  D16():
    deopt 48 [];
  L13(r31):
    st k = r31;
    k3 = ld k;
    check L65() else D20();
  L52():
    goto L9(r24);
  L56():
    goto L10(r27);
  L58():
    r28 = dyn stop3("invalid nrow(qr$qr)");
    check L59() else D17();
  L61():
    k1 = ld k;
    check L63() else D18();
  L62():
    r30 = dyn base4(<sym k>);
    goto L13(r30);
  D17():
    deopt 50 [r28];
  D18():
    deopt 55 [k1];
  D20():
    deopt 60 [k3];
  L59():
    goto L12();
  L63():
    k2 = force? k1;
    checkMissing(k2);
    as_integer1 = ldf `as.integer` in base;
    r32 = dyn as_integer1(k2);
    check L64() else D19();
  L65():
    k4 = force? k3;
    checkMissing(k4);
    qr17 = ld qr;
    check L66() else D21();
  D19():
    deopt 58 [r32];
  D21():
    deopt 61 [k4, qr17];
  L64():
    goto L13(r32);
  L66():
    qr18 = force? qr17;
    checkMissing(qr18);
    c8 = `is.object`(qr18);
    if c8 then L68() else L69(k4, qr18);
  L67(k8, dx7):
    r34 = `>`(k8, dx7);
    c9 = `as.logical`(r34);
    if c9 then L71() else L14();
  L68():
    dr6 = tryDispatchBuiltin.1("$", qr18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L70() else L69(k4, dr6);
  L69(k6, qr20):
    r33 = `$`(qr20, <sym rank>);
    goto L67(k6, r33);
  L14():
    goto L15();
  L15():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L70():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L67(k4, dx6);
  L71():
    stop4 = ldf stop;
    check L72() else D22();
  D22():
    deopt 66 [];
  L16(r38):
    st ny = r38;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L72():
    r35 = dyn stop4("'k' is too large");
    check L73() else D23();
  L75():
    NCOL = ldf NCOL;
    check L77() else D24();
  L76():
    r37 = dyn base5(<lang NCOL(y)>);
    goto L16(r37);
  D23():
    deopt 68 [r35];
  D24():
    deopt 74 [];
  L17(r43):
    c10 = `as.logical`(r43);
    if c10 then L84() else L18();
  L73():
    goto L15();
  L77():
    p4 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r40 = dyn NCOL(p4);
    check L78() else D25();
  L80():
    ny = ld ny;
    check L82() else D27();
  L81():
    r42 = dyn base6(<sym ny>);
    goto L17(r42);
  D25():
    deopt 76 [r40];
  D27():
    deopt 82 [ny];
  L18():
    goto L19();
  L19():
    NROW = ldf NROW;
    check L88() else D31();
  L78():
    as_integer2 = ldf `as.integer` in base;
    r41 = dyn as_integer2(r40);
    check L79() else D26();
  L82():
    ny1 = force? ny;
    checkMissing(ny1);
    is_na1 = ldf `is.na` in base;
    r44 = dyn is_na1(ny1);
    check L83() else D28();
  L84():
    stop5 = ldf stop;
    check L85() else D29();
  D26():
    deopt 78 [r41];
  D28():
    deopt 85 [r44];
  D29():
    deopt 87 [];
  D31():
    deopt 93 [];
  L79():
    goto L16(r41);
  L83():
    goto L17(r44);
  L85():
    r45 = dyn stop5("invalid NCOL(y)");
    check L86() else D30();
  L88():
    p5 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r48 = dyn NROW(p5);
    check L89() else D32();
  D30():
    deopt 89 [r45];
  D32():
    deopt 95 [r48];
  L86():
    goto L19();
  L89():
    n2 = ld n;
    check L90() else D33();
  D33():
    deopt 95 [r48, n2];
  L90():
    n3 = force? n2;
    checkMissing(n3);
    r49 = `!=`(r48, n3);
    c11 = `as.logical`(r49);
    if c11 then L91() else L20();
  L20():
    goto L21();
  L21():
    l = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L95() else D36();
  L91():
    stop6 = ldf stop;
    check L92() else D34();
  D34():
    deopt 99 [];
  D36():
    deopt 107 ["double", l, "double"];
  L92():
    r50 = dyn stop6("'qr' and 'y' must have the same number of rows");
    check L93() else D35();
  L95():
    r52 = dyn storage_mode__(l, NULL, "double");
    check L96() else D37();
  D35():
    deopt 101 [r50];
  D37():
    deopt 109 ["double", r52];
  L93():
    goto L21();
  L96():
    st y = r52;
    sym7 = ldf `.Fortran`;
    base7 = ldf `.Fortran` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L22(r54):
    c14 = `is.object`(r54);
    if c14 then L123() else L124(r54);
  L97():
    _F_dqrxb = ld `.F_dqrxb`;
    check L99() else D38();
  L98():
    r53 = dyn base7[, , , , , , , xb](<sym .F_dqrxb>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <sym y>);
    goto L22(r53);
  D38():
    deopt 113 [_F_dqrxb];
  L99():
    _F_dqrxb1 = force? _F_dqrxb;
    checkMissing(_F_dqrxb1);
    sym8 = ldf `as.double`;
    base8 = ldf `as.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L100() else L101();
  L122(dx13):
    popenv;
    return dx13;
  L123():
    dr12 = tryDispatchBuiltin.1("$", r54);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L125() else L124(dr12);
  L124(r65):
    r66 = `$`(r65, <sym xb>);
    goto L122(r66);
  L23(r56):
    n4 = ld n;
    check L108() else D41();
  L100():
    qr21 = ld qr;
    check L102() else D39();
  L101():
    r55 = dyn base8(<lang `$`(qr, qr)>);
    goto L23(r55);
  L125():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L122(dx12);
  D39():
    deopt 117 [qr21];
  D41():
    deopt 122 [n4];
  L102():
    qr22 = force? qr21;
    checkMissing(qr22);
    c12 = `is.object`(qr22);
    if c12 then L104() else L105(qr22);
  L108():
    n5 = force? n4;
    checkMissing(n5);
    k9 = ld k;
    check L109() else D42();
  D42():
    deopt 124 [k9];
  L103(dx9):
    as_double = ldf `as.double` in base;
    r58 = dyn as_double(dx9);
    check L107() else D40();
  L104():
    dr8 = tryDispatchBuiltin.1("$", qr22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(dr8);
  L105(qr24):
    r57 = `$`(qr24, <sym qr>);
    goto L103(r57);
  L109():
    k10 = force? k9;
    checkMissing(k10);
    sym9 = ldf `as.double`;
    base9 = ldf `as.double` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  D40():
    deopt 121 [r58];
  L24(r60):
    y5 = ld y;
    check L118() else D45();
  L106():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L103(dx8);
  L107():
    goto L23(r58);
  L110():
    qr25 = ld qr;
    check L112() else D43();
  L111():
    r59 = dyn base9(<lang `$`(qr, qraux)>);
    goto L24(r59);
  D43():
    deopt 128 [qr25];
  D45():
    deopt 133 [y5];
  L112():
    qr26 = force? qr25;
    checkMissing(qr26);
    c13 = `is.object`(qr26);
    if c13 then L114() else L115(qr26);
  L118():
    y6 = force? y5;
    checkMissing(y6);
    ny2 = ld ny;
    check L119() else D46();
  D46():
    deopt 135 [ny2];
  L113(dx11):
    as_double1 = ldf `as.double` in base;
    r62 = dyn as_double1(dx11);
    check L117() else D44();
  L114():
    dr10 = tryDispatchBuiltin.1("$", qr26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L116() else L115(dr10);
  L115(qr28):
    r61 = `$`(qr28, <sym qraux>);
    goto L113(r61);
  L119():
    ny3 = force? ny2;
    checkMissing(ny3);
    y7 = ld y;
    check L120() else D47();
  D44():
    deopt 132 [r62];
  D47():
    deopt 137 [y7];
  L116():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L113(dx10);
  L117():
    goto L24(r62);
  L120():
    y8 = force? y7;
    checkMissing(y8);
    _Fortran = ldf `.Fortran` in base;
    r63 = dyn _Fortran(_F_dqrxb1, r56, n5, k10, r60, y6, ny3, y8);
    check L121() else D48();
  D48():
    deopt 141 [r63];
  L121():
    goto L22(r63);
  }
}