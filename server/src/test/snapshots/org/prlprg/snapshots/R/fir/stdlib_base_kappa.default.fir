fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1708889241;
    st `kappa.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1708889241(z, exact, norm, method, inv_z, triangular, uplo, `...`) {
  (reg z:*, reg exact:*, reg norm:*, reg method:*, reg inv_z:*, reg triangular:*, reg uplo:*, reg ddd:dots) -+> V { var z:*, var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, var norm:*, reg norm_isMissing:L, reg norm_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var inv_z:*, reg inv_z_isMissing:L, reg inv_z_orDefault:*, reg solve:cls, reg z1:*, reg z2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), var triangular:*, reg triangular_isMissing:L, reg triangular_orDefault:*, var uplo:*, reg uplo_isMissing:L, reg uplo_orDefault:*, var `...`:dots?, reg as_matrix:cls, reg z3:*, reg z4:V, reg p3:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg z5:*, reg z6:V, reg dim:cls, reg r13:V, reg all:cls, reg r14:V, reg r15:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg norm1:*, reg norm2:V, reg c2:V, reg exact1:*, reg exact2:V, reg c3:L, reg nNorm:*, reg nNorm1:V, reg c4:L, reg c5:V, reg norm3:*, reg norm4:V, reg r20:V, reg c7:L, reg c8:V, reg c10:L, reg svd:cls, reg z7:*, reg z8:V, reg p4:p(V +), reg r22:V, reg c11:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg s:*, reg s1:V, reg max:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg r33:V, reg s2:*, reg s3:V, reg c12:L, reg r35:V, reg s5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r37:V, reg dx3:V, reg s6:*, reg s7:V, reg r38:V, reg __:cls, reg r39:V, reg min:cls, reg r40:V, reg r41:V, reg nNorm2:*, reg nNorm3:V, reg c13:L, reg norm5:cls, reg z9:*, reg z10:V, reg p5:p(V +), reg norm6:*, reg norm7:V, reg p6:p(V +), reg r45:V, reg norm8:cls, reg inv_z1:*, reg inv_z2:V, reg p7:p(V +), reg norm9:*, reg norm10:V, reg p8:p(V +), reg r48:V, reg r49:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p9:p(V +), reg r51:V, reg r52:V, reg c14:L, reg c15:V, reg d:*, reg d1:V, reg c17:L, reg c19:L, reg d3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c21:L, reg dx5:V, reg __1:cls, reg r53:V, reg d4:*, reg d5:V, reg c22:L, reg c24:L, reg dx7:V, reg d7:V, reg dr6:V, reg dc3:L, reg dx9:V, reg c26:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r54:V, reg r55:V, reg c27:L, reg c28:V, reg c30:L, reg kappa_qr:cls, reg qr:cls, reg d8:*, reg d9:V, reg c31:L, reg d11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r56:V, reg d12:*, reg d13:V, reg c32:L, reg dx15:V, reg d15:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg dx19:V, reg __4:cls, reg r57:V, reg r58:V, reg c33:L, reg t:cls, reg z11:*, reg z12:V, reg p10:p(V +), reg r60:V, reg z13:*, reg z14:V, reg p11:p(V +), reg r62:V, reg p12:p(V +), reg norm11:*, reg norm12:V, reg p13:p(V +), reg ddd1:dots?, reg r65:V, reg triangular1:*, reg triangular2:V, reg c34:L, reg _kappa_tri:cls, reg z15:*, reg z16:V, reg p14:p(V +), reg norm13:*, reg norm14:V, reg p15:p(V +), reg uplo1:*, reg uplo2:V, reg p16:p(V +), reg ddd2:dots?, reg r69:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r70:V, reg r71:V, reg z17:*, reg z18:V, reg c35:L, reg c36:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:R, reg r76:V, reg z19:*, reg z20:V, reg nNorm4:*, reg nNorm5:V, reg c37:L, reg r79:R, reg r80:V, reg norm15:*, reg norm16:V, reg La_zgecon:cls, reg r81:V, reg r82:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:R, reg r87:V, reg z21:*, reg z22:V, reg nNorm6:*, reg nNorm7:V, reg c38:L, reg r90:R, reg r91:V, reg norm17:*, reg norm18:V, reg La_dgecon:cls, reg r92:V, reg r93:V |
    mkenv;
    st z = z;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L0(FALSE) else L0(exact);
  L0(exact_orDefault):
    st exact = exact_orDefault;
    norm_isMissing = missing.0(norm);
    if norm_isMissing then L1(NULL) else L1(norm);
  L1(norm_orDefault):
    st norm = norm_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L2() else L3(method);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("qr", "direct");
      goto L0(r2);
    L2():
      r = dyn base("qr", "direct");
      goto L0(r);
    };
    goto L3(p);
  L3(method_orDefault):
    st method = method_orDefault;
    inv_z_isMissing = missing.0(inv_z);
    if inv_z_isMissing then L4() else L5(inv_z);
  L4():
    p2 = prom<V +>{
      solve = ldf solve;
      p1 = prom<V +>{
        z1 = ld z;
        z2 = force? z1;
        checkMissing(z2);
        return z2;
      };
      r5 = dyn solve(p1);
      return r5;
    };
    goto L5(p2);
  L5(inv_z_orDefault):
    st inv_z = inv_z_orDefault;
    triangular_isMissing = missing.0(triangular);
    if triangular_isMissing then L6(FALSE) else L6(triangular);
  L6(triangular_orDefault):
    st triangular = triangular_orDefault;
    uplo_isMissing = missing.0(uplo);
    if uplo_isMissing then L7("U") else L7(uplo);
  L7(uplo_orDefault):
    st uplo = uplo_orDefault;
    st `...` = ddd;
    as_matrix = ldf `as.matrix`;
    check L34() else D0();
  D0():
    deopt 1 [];
  L34():
    p3 = prom<V +>{
      z3 = ld z;
      z4 = force? z3;
      checkMissing(z4);
      return z4;
    };
    r8 = dyn as_matrix(p3);
    check L35() else D1();
  D1():
    deopt 3 [r8];
  L35():
    st z = r8;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L8(r10):
    r15 = `!`(r10);
    c1 = `as.logical`(r15);
    if c1 then L43() else L10();
  L36():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L37():
    r9 = dyn base1(<lang `<-`(d, dim(z))>);
    goto L8(r9);
  L9(r12):
    st d = r12;
    all = ldf all in base;
    r14 = dyn all(r12);
    check L42() else D4();
  L10():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L38():
    z5 = ld z;
    check L40() else D2();
  L39():
    r11 = dyn base2(<sym z>);
    goto L9(r11);
  L43():
    popenv;
    return 0.0;
  D2():
    deopt 9 [z5];
  D4():
    deopt 15 [r14];
  L12(r19):
    st nNorm = r19;
    exact1 = ld exact;
    check L49() else D6();
  L40():
    z6 = force? z5;
    checkMissing(z6);
    dim = ldf dim in base;
    r13 = dyn dim(z6);
    check L41() else D3();
  L42():
    goto L8(r14);
  L46():
    norm1 = ld norm;
    check L48() else D5();
  L47():
    r18 = dyn base3(<sym norm>);
    goto L12(r18);
  D3():
    deopt 12 [r13];
  D5():
    deopt 23 [norm1];
  D6():
    deopt 27 [exact1];
  L41():
    goto L9(r13);
  L48():
    norm2 = force? norm1;
    checkMissing(norm2);
    c2 = `==`(norm2, NULL);
    goto L12(c2);
  L49():
    exact2 = force? exact1;
    checkMissing(exact2);
    c3 = `as.logical`(exact2);
    if c3 then L50() else L13();
  L13():
    match_arg = ldf `match.arg`;
    check L83() else D21();
  L50():
    nNorm = ld nNorm;
    check L51() else D7();
  D7():
    deopt 29 [nNorm];
  D21():
    deopt 83 [];
  L51():
    nNorm1 = force? nNorm;
    checkMissing(nNorm1);
    c4 = `as.logical`(nNorm1);
    if c4 then L14(c4) else L52();
  L83():
    p9 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r51 = dyn match_arg(p9);
    check L84() else D22();
  D22():
    deopt 85 [r51];
  L14(c5):
    c10 = `as.logical`(c5);
    if c10 then L55() else L15();
  L52():
    norm3 = ld norm;
    check L53() else D8();
  L84():
    r52 = `==`(r51, "qr");
    c14 = `as.logical`(r52);
    if c14 then L21(c14) else L85();
  D8():
    deopt 31 [c4, norm3];
  L15():
    nNorm2 = ld nNorm;
    check L75() else D16();
  L21(c15):
    c30 = `as.logical`(c15);
    if c30 then L95() else L24();
  L53():
    norm4 = force? norm3;
    checkMissing(norm4);
    r20 = `==`(norm4, "2");
    c7 = `as.logical`(r20);
    c8 = `||`(c4, c7);
    goto L14(c8);
  L55():
    svd = ldf svd;
    check L56() else D9();
  L85():
    d = ld d;
    check L86() else D23();
  D9():
    deopt 37 [];
  D16():
    deopt 63 [nNorm2];
  D23():
    deopt 88 [c14, d];
  L24():
    triangular1 = ld triangular;
    check L99() else D27();
  L56():
    p4 = prom<V +>{
      z7 = ld z;
      z8 = force? z7;
      checkMissing(z8);
      return z8;
    };
    r22 = dyn svd[, nu, nv](p4, 0, 0);
    check L57() else D10();
  L75():
    nNorm3 = force? nNorm2;
    checkMissing(nNorm3);
    c13 = `as.logical`(nNorm3);
    if c13 then L76() else L19();
  L86():
    d1 = force? d;
    checkMissing(d1);
    c17 = `is.object`(d1);
    if c17 then L87() else L88(c14, d1);
  L95():
    kappa_qr = ldf `kappa.qr`;
    check L96() else D25();
  D10():
    deopt 43 [r22];
  D25():
    deopt 100 [];
  D27():
    deopt 108 [triangular1];
  L19():
    goto L20();
  L20():
    norm5 = ldf norm;
    check L78() else D17();
  L22(c21, dx5):
    d4 = ld d;
    check L90() else D24();
  L57():
    c11 = `is.object`(r22);
    if c11 then L59() else L60(r22);
  L76():
    st norm = "1";
    goto L20();
  L87():
    dr4 = tryDispatchBuiltin.1("[", d1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(c14, dr4);
  L88(c19, d3):
    __1 = ldf `[` in base;
    r53 = dyn __1(d3, 1);
    goto L22(c19, r53);
  L96():
    p12 = prom<V +>{
      qr = ldf qr;
      p11 = prom<V +>{
        d8 = ld d;
        d9 = force? d8;
        checkMissing(d9);
        c31 = `is.object`(d9);
        if c31 then L3() else L4(d9);
      L0(dx13):
        d12 = ld d;
        d13 = force? d12;
        checkMissing(d13);
        c32 = `is.object`(d13);
        if c32 then L6() else L7(dx13, d13);
      L3():
        dr8 = tryDispatchBuiltin.1("[", d9);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L5() else L4(dr8);
      L4(d11):
        __3 = ldf `[` in base;
        r56 = dyn __3(d11, 1);
        goto L0(r56);
      L1(dx18, dx19):
        r58 = `<`(dx18, dx19);
        c33 = `as.logical`(r58);
        if c33 then L9() else L2();
      L5():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx12);
      L6():
        dr10 = tryDispatchBuiltin.1("[", d13);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L8() else L7(dx13, dr10);
      L7(dx15, d15):
        __4 = ldf `[` in base;
        r57 = dyn __4(d15, 2);
        goto L1(dx15, r57);
      L2():
        z13 = ld z;
        z14 = force? z13;
        checkMissing(z14);
        return z14;
      L8():
        dx17 = getTryDispatchBuiltinValue(dr10);
        goto L1(dx13, dx17);
      L9():
        t = ldf t;
        p10 = prom<V +>{
          z11 = ld z;
          z12 = force? z11;
          checkMissing(z12);
          return z12;
        };
        r60 = dyn t(p10);
        return r60;
      };
      r62 = dyn qr(p11);
      return r62;
    };
    p13 = prom<V +>{
      norm11 = ld norm;
      norm12 = force? norm11;
      checkMissing(norm12);
      return norm12;
    };
    ddd1 = ld `...`;
    r65 = dyn kappa_qr[, exact, norm, `...`](p12, FALSE, p13, ddd1);
    check L97() else D26();
  L99():
    triangular2 = force? triangular1;
    checkMissing(triangular2);
    c34 = `as.logical`(triangular2);
    if c34 then L100() else L25();
  D17():
    deopt 71 [];
  D24():
    deopt 92 [c21, dx5, d4];
  D26():
    deopt 107 [r65];
  L25():
    sym6 = ldf `is.complex`;
    base6 = ldf `is.complex` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L58(dx1):
    st s = dx1;
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L59():
    dr = tryDispatchBuiltin.1("$", r22);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L61() else L60(dr);
  L60(r24):
    r25 = `$`(r24, <sym d>);
    goto L58(r25);
  L78():
    p5 = prom<V +>{
      z9 = ld z;
      z10 = force? z9;
      checkMissing(z10);
      return z10;
    };
    p6 = prom<V +>{
      norm6 = ld norm;
      norm7 = force? norm6;
      checkMissing(norm7);
      return norm7;
    };
    r45 = dyn norm5[, type](p5, p6);
    check L79() else D18();
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(c14, dx4);
  L90():
    d5 = force? d4;
    checkMissing(d5);
    c22 = `is.object`(d5);
    if c22 then L91() else L92(c21, dx5, d5);
  L97():
    popenv;
    return r65;
  L100():
    _kappa_tri = ldf `.kappa_tri`;
    check L101() else D28();
  D18():
    deopt 75 [r45];
  D28():
    deopt 111 [];
  L16(r27):
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L23(c26, dx10, dx11):
    r55 = `!=`(dx10, dx11);
    c27 = `as.logical`(r55);
    c28 = `||`(c26, c27);
    goto L21(c28);
  L26(r71):
    c36 = `as.logical`(r71);
    if c36 then L107() else L27();
  L61():
    dx = getTryDispatchBuiltinValue(dr);
    goto L58(dx);
  L62():
    s = ld s;
    check L64() else D11();
  L63():
    r26 = dyn base4(<sym s>);
    goto L16(r26);
  L79():
    norm8 = ldf norm;
    check L80() else D19();
  L91():
    dr6 = tryDispatchBuiltin.1("[", d5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L93() else L92(c21, dx5, dr6);
  L92(c24, dx7, d7):
    __2 = ldf `[` in base;
    r54 = dyn __2(d7, 2);
    goto L23(c24, dx7, r54);
  L101():
    p14 = prom<V +>{
      z15 = ld z;
      z16 = force? z15;
      checkMissing(z16);
      return z16;
    };
    p15 = prom<V +>{
      norm13 = ld norm;
      norm14 = force? norm13;
      checkMissing(norm14);
      return norm14;
    };
    p16 = prom<V +>{
      uplo1 = ld uplo;
      uplo2 = force? uplo1;
      checkMissing(uplo2);
      return uplo2;
    };
    ddd2 = ld `...`;
    r69 = dyn _kappa_tri[, exact, norm, uplo, `...`](p14, FALSE, p15, p16, ddd2);
    check L102() else D29();
  L104():
    z17 = ld z;
    check L106() else D30();
  L105():
    r70 = dyn base6(<sym z>);
    goto L26(r70);
  D11():
    deopt 48 [s];
  D19():
    deopt 76 [r45];
  D29():
    deopt 120 [r69];
  D30():
    deopt 122 [z17];
  L17(r32, r33):
    r41 = `/`(r32, r33);
    popenv;
    return r41;
  L27():
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L64():
    s1 = force? s;
    checkMissing(s1);
    max = ldf max in base;
    r28 = dyn max(s1);
    check L65() else D12();
  L66():
    s2 = ld s;
    check L68() else D13();
  L67():
    r31 = dyn base5(<lang `[`(s, `>`(s, 0.0))>);
    goto L17(r27, r31);
  L80():
    p7 = prom<V +>{
      inv_z1 = ld inv_z;
      inv_z2 = force? inv_z1;
      checkMissing(inv_z2);
      return inv_z2;
    };
    p8 = prom<V +>{
      norm9 = ld norm;
      norm10 = force? norm9;
      checkMissing(norm10);
      return norm10;
    };
    r48 = dyn norm8[, type](p7, p8);
    check L81() else D20();
  L93():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L23(c21, dx5, dx9);
  L102():
    popenv;
    return r69;
  L106():
    z18 = force? z17;
    checkMissing(z18);
    c35 = `is.complex`(z18);
    goto L26(c35);
  L107():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  D12():
    deopt 51 [r28];
  D13():
    deopt 53 [r27, s2];
  D20():
    deopt 80 [r45, r48];
  L28(r75, r76):
    r82 = `/`(r75, r76);
    popenv;
    return r82;
  L31(r86, r87):
    r93 = `/`(r86, r87);
    popenv;
    return r93;
  L65():
    goto L16(r28);
  L68():
    s3 = force? s2;
    checkMissing(s3);
    c12 = `is.object`(s3);
    if c12 then L69() else L70(r27, s3);
  L81():
    r49 = `*`(r45, r48);
    popenv;
    return r49;
  L108():
    z19 = ld z;
    check L110() else D31();
  L109():
    r74 = dyn base7(<lang La_zgecon(z, if(nNorm, "1", norm))>);
    goto L28(1.0, r74);
  L117():
    z21 = ld z;
    check L119() else D35();
  L118():
    r85 = dyn base8(<lang La_dgecon(z, if(nNorm, "1", norm))>);
    goto L31(1.0, r85);
  D31():
    deopt 128 [1.0, z19];
  D35():
    deopt 142 [1.0, z21];
  L18(r37, dx3):
    min = ldf min in base;
    r40 = dyn min(dx3);
    check L73() else D15();
  L69():
    dr2 = tryDispatchBuiltin.1("[", s3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(r27, dr2);
  L70(r35, s5):
    s6 = ld s;
    check L72() else D14();
  L110():
    z20 = force? z19;
    checkMissing(z20);
    nNorm4 = ld nNorm;
    check L111() else D32();
  L119():
    z22 = force? z21;
    checkMissing(z22);
    nNorm6 = ld nNorm;
    check L120() else D36();
  D14():
    deopt 55 [r35, s5, s6];
  D15():
    deopt 61 [r37, r40];
  D32():
    deopt 130 [1.0, nNorm4];
  D36():
    deopt 144 [1.0, nNorm6];
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(r27, dx2);
  L72():
    s7 = force? s6;
    checkMissing(s7);
    r38 = `>`(s7, 0.0);
    __ = ldf `[` in base;
    r39 = dyn __(s5, r38);
    goto L18(r35, r39);
  L73():
    goto L17(r37, r40);
  L111():
    nNorm5 = force? nNorm4;
    checkMissing(nNorm5);
    c37 = `as.logical`(nNorm5);
    if c37 then L112() else L29();
  L120():
    nNorm7 = force? nNorm6;
    checkMissing(nNorm7);
    c38 = `as.logical`(nNorm7);
    if c38 then L121() else L32();
  L29():
    norm15 = ld norm;
    check L114() else D33();
  L30(r79, r80):
    La_zgecon = ldf La_zgecon in base;
    r81 = dyn La_zgecon(z20, r80);
    check L115() else D34();
  L32():
    norm17 = ld norm;
    check L123() else D37();
  L33(r90, r91):
    La_dgecon = ldf La_dgecon in base;
    r92 = dyn La_dgecon(z22, r91);
    check L124() else D38();
  L112():
    goto L30(1.0, "1");
  L121():
    goto L33(1.0, "1");
  D33():
    deopt 134 [1.0, norm15];
  D34():
    deopt 137 [r79, r81];
  D37():
    deopt 148 [1.0, norm17];
  D38():
    deopt 151 [r90, r92];
  L114():
    norm16 = force? norm15;
    checkMissing(norm16);
    goto L30(1.0, norm16);
  L115():
    goto L28(r79, r81);
  L123():
    norm18 = force? norm17;
    checkMissing(norm18);
    goto L33(1.0, norm18);
  L124():
    goto L31(r90, r92);
  }
}