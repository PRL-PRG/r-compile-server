fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-498831807`;
    st `qr.qty` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-498831807`(qr, y) {
  (reg qr:*, reg y:*) -+> V { var qr:*, var y:*, reg is_qr:cls, reg qr1:*, reg qr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg qr3:*, reg qr4:V, reg c1:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c2:L, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg qr7:*, reg qr8:V, reg as_matrix:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r11:V, reg qr_qy_cmplx:cls, reg r12:V, reg isTRUE:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg qr9:*, reg qr10:V, reg attr:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg qr11:*, reg qr12:V, reg as_matrix1:cls, reg y3:*, reg y4:V, reg p3:p(V +), reg r23:V, reg qr_qy_real:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg nrow:cls, reg qr13:*, reg qr14:V, reg c5:L, reg qr16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg p4:p(V +), reg r31:V, reg as_integer:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg n:*, reg n1:V, reg is_na:cls, reg r35:V, reg c6:L, reg stop1:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg qr17:*, reg qr18:V, reg c7:L, reg qr20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r40:V, reg as_integer1:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg NCOL:cls, reg y5:*, reg y6:V, reg p5:p(V +), reg r45:V, reg as_integer2:cls, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg ny:*, reg ny1:V, reg is_na1:cls, reg r49:V, reg c8:L, reg stop2:cls, reg r50:V, reg NROW:cls, reg y7:*, reg y8:V, reg p6:p(V +), reg r53:V, reg n2:*, reg n3:V, reg r54:V, reg c9:L, reg stop3:cls, reg r55:V, reg l:*, reg storage_mode__:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg _F_dqrqty:*, reg _F_dqrqty1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg qr21:*, reg qr22:V, reg c10:L, reg qr24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r62:V, reg as_double:cls, reg r63:V, reg n4:*, reg n5:V, reg k:*, reg k1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg qr25:*, reg qr26:V, reg c11:L, reg qr28:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r66:V, reg as_double1:cls, reg r67:V, reg y9:*, reg y10:V, reg ny2:*, reg ny3:V, reg y11:*, reg y12:V, reg _Fortran:cls, reg r68:V, reg c12:L, reg r70:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r71:V |
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
    isTRUE = ldf isTRUE;
    check L45() else D9();
  L27():
    goto L1();
  L31():
    qr4 = force? qr3;
    checkMissing(qr4);
    c1 = `is.object`(qr4);
    if c1 then L33() else L34(qr4);
  L36():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  D9():
    deopt 31 [];
  L4(r9):
    popenv;
    return r9;
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
    qr7 = ld qr;
    check L39() else D5();
  L38():
    r8 = dyn base1(<lang qr_qy_cmplx(qr, as.matrix(y), TRUE)>);
    goto L4(r8);
  L45():
    p2 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      qr9 = ld qr;
      qr10 = force? qr9;
      checkMissing(qr10);
      attr = ldf attr in base;
      r17 = dyn attr(qr10, "useLAPACK");
      goto L0(r17);
    L2():
      r15 = dyn base2(<sym qr>, "useLAPACK");
      goto L0(r15);
    };
    r19 = dyn isTRUE(p2);
    check L46() else D10();
  D5():
    deopt 18 [qr7];
  D10():
    deopt 33 [r19];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L39():
    qr8 = force? qr7;
    checkMissing(qr8);
    as_matrix = ldf `as.matrix`;
    check L40() else D6();
  L46():
    c4 = `as.logical`(r19);
    if c4 then L47() else L6();
  D6():
    deopt 21 [];
  L6():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L40():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r11 = dyn as_matrix(p1);
    check L41() else D7();
  L47():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  D7():
    deopt 23 [r11];
  L7(r21):
    popenv;
    return r21;
  L9(r28):
    st n = r28;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L41():
    qr_qy_cmplx = ldf qr_qy_cmplx in base;
    r12 = dyn qr_qy_cmplx(qr8, r11, TRUE);
    check L42() else D8();
  L48():
    qr11 = ld qr;
    check L50() else D11();
  L49():
    r20 = dyn base3(<lang qr_qy_real(qr, as.matrix(y), TRUE)>);
    goto L7(r20);
  L56():
    nrow = ldf nrow;
    check L58() else D15();
  L57():
    r27 = dyn base4(<lang nrow(`$`(qr, qr))>);
    goto L9(r27);
  D8():
    deopt 26 [r12];
  D11():
    deopt 36 [qr11];
  D15():
    deopt 51 [];
  L10(r34):
    c6 = `as.logical`(r34);
    if c6 then L65() else L11();
  L42():
    goto L4(r12);
  L50():
    qr12 = force? qr11;
    checkMissing(qr12);
    as_matrix1 = ldf `as.matrix`;
    check L51() else D12();
  L58():
    p4 = prom<V +>{
      qr13 = ld qr;
      qr14 = force? qr13;
      checkMissing(qr14);
      c5 = `is.object`(qr14);
      if c5 then L1() else L2(qr14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", qr14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(qr16):
      r29 = `$`(qr16, <sym qr>);
      goto L0(r29);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r31 = dyn nrow(p4);
    check L59() else D16();
  L61():
    n = ld n;
    check L63() else D18();
  L62():
    r33 = dyn base5(<sym n>);
    goto L10(r33);
  D12():
    deopt 39 [];
  D16():
    deopt 53 [r31];
  D18():
    deopt 59 [n];
  L11():
    goto L12();
  L12():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L51():
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r23 = dyn as_matrix1(p3);
    check L52() else D13();
  L59():
    as_integer = ldf `as.integer` in base;
    r32 = dyn as_integer(r31);
    check L60() else D17();
  L63():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(n1);
    check L64() else D19();
  L65():
    stop1 = ldf stop;
    check L66() else D20();
  D13():
    deopt 41 [r23];
  D17():
    deopt 55 [r32];
  D19():
    deopt 62 [r35];
  D20():
    deopt 64 [];
  L13(r39):
    st k = r39;
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L52():
    qr_qy_real = ldf qr_qy_real in base;
    r24 = dyn qr_qy_real(qr12, r23, TRUE);
    check L53() else D14();
  L60():
    goto L9(r32);
  L64():
    goto L10(r35);
  L66():
    r36 = dyn stop1("invalid nrow(qr$qr)");
    check L67() else D21();
  L69():
    qr17 = ld qr;
    check L71() else D22();
  L70():
    r38 = dyn base6(<lang `$`(qr, rank)>);
    goto L13(r38);
  D14():
    deopt 44 [r24];
  D21():
    deopt 66 [r36];
  D22():
    deopt 71 [qr17];
  L14(r43):
    st ny = r43;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  L53():
    goto L7(r24);
  L67():
    goto L12();
  L71():
    qr18 = force? qr17;
    checkMissing(qr18);
    c7 = `is.object`(qr18);
    if c7 then L73() else L74(qr18);
  L77():
    NCOL = ldf NCOL;
    check L79() else D24();
  L78():
    r42 = dyn base7(<lang NCOL(y)>);
    goto L14(r42);
  D24():
    deopt 80 [];
  L15(r48):
    c8 = `as.logical`(r48);
    if c8 then L86() else L16();
  L72(dx5):
    as_integer1 = ldf `as.integer` in base;
    r41 = dyn as_integer1(dx5);
    check L76() else D23();
  L73():
    dr4 = tryDispatchBuiltin.1("$", qr18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(dr4);
  L74(qr20):
    r40 = `$`(qr20, <sym rank>);
    goto L72(r40);
  L79():
    p5 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r45 = dyn NCOL(p5);
    check L80() else D25();
  L82():
    ny = ld ny;
    check L84() else D27();
  L83():
    r47 = dyn base8(<sym ny>);
    goto L15(r47);
  D23():
    deopt 75 [r41];
  D25():
    deopt 82 [r45];
  D27():
    deopt 88 [ny];
  L16():
    goto L17();
  L17():
    NROW = ldf NROW;
    check L90() else D31();
  L75():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L72(dx4);
  L76():
    goto L13(r41);
  L80():
    as_integer2 = ldf `as.integer` in base;
    r46 = dyn as_integer2(r45);
    check L81() else D26();
  L84():
    ny1 = force? ny;
    checkMissing(ny1);
    is_na1 = ldf `is.na` in base;
    r49 = dyn is_na1(ny1);
    check L85() else D28();
  L86():
    stop2 = ldf stop;
    check L87() else D29();
  D26():
    deopt 84 [r46];
  D28():
    deopt 91 [r49];
  D29():
    deopt 93 [];
  D31():
    deopt 99 [];
  L81():
    goto L14(r46);
  L85():
    goto L15(r49);
  L87():
    r50 = dyn stop2("invalid NCOL(y)");
    check L88() else D30();
  L90():
    p6 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r53 = dyn NROW(p6);
    check L91() else D32();
  D30():
    deopt 95 [r50];
  D32():
    deopt 101 [r53];
  L88():
    goto L17();
  L91():
    n2 = ld n;
    check L92() else D33();
  D33():
    deopt 101 [r53, n2];
  L92():
    n3 = force? n2;
    checkMissing(n3);
    r54 = `!=`(r53, n3);
    c9 = `as.logical`(r54);
    if c9 then L93() else L18();
  L18():
    goto L19();
  L19():
    l = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L97() else D36();
  L93():
    stop3 = ldf stop;
    check L94() else D34();
  D34():
    deopt 105 [];
  D36():
    deopt 113 ["double", l, "double"];
  L94():
    r55 = dyn stop3("'qr' and 'y' must have the same number of rows");
    check L95() else D35();
  L97():
    r57 = dyn storage_mode__(l, NULL, "double");
    check L98() else D37();
  D35():
    deopt 107 [r55];
  D37():
    deopt 115 ["double", r57];
  L95():
    goto L19();
  L98():
    st y = r57;
    sym9 = ldf `.Fortran`;
    base9 = ldf `.Fortran` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L20(r59):
    c12 = `is.object`(r59);
    if c12 then L125() else L126(r59);
  L99():
    _F_dqrqty = ld `.F_dqrqty`;
    check L101() else D38();
  L100():
    r58 = dyn base9[, , , , , , , qty](<sym .F_dqrqty>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <sym y>);
    goto L20(r58);
  D38():
    deopt 119 [_F_dqrqty];
  L101():
    _F_dqrqty1 = force? _F_dqrqty;
    checkMissing(_F_dqrqty1);
    sym10 = ldf `as.double`;
    base10 = ldf `as.double` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L124(dx11):
    popenv;
    return dx11;
  L125():
    dr10 = tryDispatchBuiltin.1("$", r59);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L127() else L126(dr10);
  L126(r70):
    r71 = `$`(r70, <sym qty>);
    goto L124(r71);
  L21(r61):
    n4 = ld n;
    check L110() else D41();
  L102():
    qr21 = ld qr;
    check L104() else D39();
  L103():
    r60 = dyn base10(<lang `$`(qr, qr)>);
    goto L21(r60);
  L127():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L124(dx10);
  D39():
    deopt 123 [qr21];
  D41():
    deopt 128 [n4];
  L104():
    qr22 = force? qr21;
    checkMissing(qr22);
    c10 = `is.object`(qr22);
    if c10 then L106() else L107(qr22);
  L110():
    n5 = force? n4;
    checkMissing(n5);
    k = ld k;
    check L111() else D42();
  D42():
    deopt 130 [k];
  L105(dx7):
    as_double = ldf `as.double` in base;
    r63 = dyn as_double(dx7);
    check L109() else D40();
  L106():
    dr6 = tryDispatchBuiltin.1("$", qr22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(dr6);
  L107(qr24):
    r62 = `$`(qr24, <sym qr>);
    goto L105(r62);
  L111():
    k1 = force? k;
    checkMissing(k1);
    sym11 = ldf `as.double`;
    base11 = ldf `as.double` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  D40():
    deopt 127 [r63];
  L22(r65):
    y9 = ld y;
    check L120() else D45();
  L108():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L105(dx6);
  L109():
    goto L21(r63);
  L112():
    qr25 = ld qr;
    check L114() else D43();
  L113():
    r64 = dyn base11(<lang `$`(qr, qraux)>);
    goto L22(r64);
  D43():
    deopt 134 [qr25];
  D45():
    deopt 139 [y9];
  L114():
    qr26 = force? qr25;
    checkMissing(qr26);
    c11 = `is.object`(qr26);
    if c11 then L116() else L117(qr26);
  L120():
    y10 = force? y9;
    checkMissing(y10);
    ny2 = ld ny;
    check L121() else D46();
  D46():
    deopt 141 [ny2];
  L115(dx9):
    as_double1 = ldf `as.double` in base;
    r67 = dyn as_double1(dx9);
    check L119() else D44();
  L116():
    dr8 = tryDispatchBuiltin.1("$", qr26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L118() else L117(dr8);
  L117(qr28):
    r66 = `$`(qr28, <sym qraux>);
    goto L115(r66);
  L121():
    ny3 = force? ny2;
    checkMissing(ny3);
    y11 = ld y;
    check L122() else D47();
  D44():
    deopt 138 [r67];
  D47():
    deopt 143 [y11];
  L118():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L115(dx8);
  L119():
    goto L22(r67);
  L122():
    y12 = force? y11;
    checkMissing(y12);
    _Fortran = ldf `.Fortran` in base;
    r68 = dyn _Fortran(_F_dqrqty1, r61, n5, k1, r65, y10, ny3, y12);
    check L123() else D48();
  D48():
    deopt 147 [r68];
  L123():
    goto L20(r68);
  }
}