fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2090763873`;
    st `qr.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2090763873`(x, tol, LAPACK, `...`) {
  (reg x:*, reg tol:*, reg LAPACK:*, reg ddd:dots) -+> V { var x:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, var LAPACK:*, reg LAPACK_isMissing:L, reg LAPACK_orDefault:*, var `...`:dots?, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg c:L, reg c1:L, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg La_qr_cmplx:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg LAPACK1:*, reg LAPACK2:V, reg c2:L, reg structure1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x7:*, reg x8:V, reg La_qr:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg ncol:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg r21:V, reg as_integer:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg p4:*, reg p5:V, reg is_na:cls, reg r25:V, reg c3:L, reg stop:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg nrow:cls, reg x11:*, reg x12:V, reg p6:p(V +), reg r31:V, reg as_integer1:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg n:*, reg n1:V, reg is_na1:cls, reg r35:V, reg c4:L, reg stop1:cls, reg r36:V, reg n2:*, reg n3:V, reg r38:V, reg p7:*, reg p8:V, reg r39:V, reg r40:V, reg c5:L, reg stop2:cls, reg r41:V, reg l:*, reg storage_mode__:cls, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg _F_dqrdc2:*, reg _F_dqrdc3:V, reg x13:*, reg x14:V, reg n4:*, reg n5:V, reg n6:*, reg n7:V, reg p9:*, reg p10:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg tol1:*, reg tol2:V, reg as_double:cls, reg r48:V, reg integer:cls, reg r49:V, reg double:cls, reg p11:*, reg p12:V, reg p13:p(V +), reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg p14:*, reg p15:V, reg r56:I, reg as_integer2:cls, reg r57:V, reg double1:cls, reg p16:*, reg p17:V, reg r58:V, reg p18:p(V +), reg r60:V, reg _Fortran:cls, reg r61:V, reg c6:L, reg r63:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg r68:V, reg c7:cls, reg r69:V, reg __:cls, reg r70:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg colnames:cls, reg x15:*, reg x16:V, reg p19:p(V +), reg r74:V, reg c8:V, reg r75:V, reg c9:L, reg cn:*, reg cn1:V, reg c10:L, reg cn3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg res:*, reg res1:V, reg c11:L, reg cn5:V, reg res3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg cn7:V, reg dx5:V, reg r76:V, reg __1:cls, reg r77:V, reg l1:*, reg c12:L, reg dx8:V, reg l4:*, reg dx9:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg l7:*, reg dx14:V, reg dx15:V, reg r78:V, reg colnames__:cls, reg r79:V, reg c13:L, reg dx17:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx19:V, reg dx20:V, reg dx21:V, reg r80:V, reg l10:*, reg class__:cls, reg r81:V, reg res4:*, reg res5:V |
    mkenv;
    st x = x;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0(1.0E-7) else L0(tol);
  L0(tol_orDefault):
    st tol = tol_orDefault;
    LAPACK_isMissing = missing.0(LAPACK);
    if LAPACK_isMissing then L1(FALSE) else L1(LAPACK);
  L1(LAPACK_orDefault):
    st LAPACK = LAPACK_orDefault;
    st `...` = ddd;
    as_matrix = ldf `as.matrix`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_matrix(p);
    check L28() else D1();
  D1():
    deopt 3 [r1];
  L28():
    st x = r1;
    sym = ldf `is.complex`;
    base = ldf `is.complex` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L2(r3):
    c1 = `as.logical`(r3);
    if c1 then L32() else L3();
  L29():
    x3 = ld x;
    check L31() else D2();
  L30():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D2():
    deopt 6 [x3];
  L3():
    LAPACK1 = ld LAPACK;
    check L37() else D5();
  L31():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.complex`(x4);
    goto L2(c);
  L32():
    structure = ldf structure;
    check L33() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 18 [LAPACK1];
  L33():
    p1 = prom<V +>{
      sym1 = ldf `.Internal`;
      base1 = ldf `.Internal` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      La_qr_cmplx = ldf La_qr_cmplx in base;
      r6 = dyn La_qr_cmplx(x6);
      goto L0(r6);
    L2():
      r4 = dyn base1(<lang La_qr_cmplx(x)>);
      goto L0(r4);
    };
    r8 = dyn structure[, class](p1, "qr");
    check L34() else D4();
  L37():
    LAPACK2 = force? LAPACK1;
    checkMissing(LAPACK2);
    c2 = `as.logical`(LAPACK2);
    if c2 then L38() else L5();
  D4():
    deopt 14 [r8];
  L5():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L34():
    popenv;
    return r8;
  L38():
    structure1 = ldf structure;
    check L39() else D6();
  D6():
    deopt 21 [];
  L7(r19):
    st p = r19;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L39():
    p2 = prom<V +>{
      sym2 = ldf `.Internal`;
      base2 = ldf `.Internal` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      La_qr = ldf La_qr in base;
      r13 = dyn La_qr(x8);
      goto L0(r13);
    L2():
      r11 = dyn base2(<lang La_qr(x)>);
      goto L0(r11);
    };
    r15 = dyn structure1[, useLAPACK, class](p2, TRUE, "qr");
    check L40() else D7();
  L43():
    ncol = ldf ncol;
    check L45() else D8();
  L44():
    r18 = dyn base3(<lang ncol(x)>);
    goto L7(r18);
  D7():
    deopt 27 [r15];
  D8():
    deopt 34 [];
  L8(r24):
    c3 = `as.logical`(r24);
    if c3 then L52() else L9();
  L40():
    popenv;
    return r15;
  L45():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r21 = dyn ncol(p3);
    check L46() else D9();
  L48():
    p4 = ld p;
    check L50() else D11();
  L49():
    r23 = dyn base4(<sym p>);
    goto L8(r23);
  D9():
    deopt 36 [r21];
  D11():
    deopt 42 [p4];
  L9():
    goto L10();
  L10():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L46():
    as_integer = ldf `as.integer` in base;
    r22 = dyn as_integer(r21);
    check L47() else D10();
  L50():
    p5 = force? p4;
    checkMissing(p5);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(p5);
    check L51() else D12();
  L52():
    stop = ldf stop;
    check L53() else D13();
  D10():
    deopt 38 [r22];
  D12():
    deopt 45 [r25];
  D13():
    deopt 47 [];
  L11(r29):
    st n = r29;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L47():
    goto L7(r22);
  L51():
    goto L8(r25);
  L53():
    r26 = dyn stop("invalid ncol(x)");
    check L54() else D14();
  L56():
    nrow = ldf nrow;
    check L58() else D15();
  L57():
    r28 = dyn base5(<lang nrow(x)>);
    goto L11(r28);
  D14():
    deopt 49 [r26];
  D15():
    deopt 55 [];
  L12(r34):
    c4 = `as.logical`(r34);
    if c4 then L65() else L13();
  L54():
    goto L10();
  L58():
    p6 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r31 = dyn nrow(p6);
    check L59() else D16();
  L61():
    n = ld n;
    check L63() else D18();
  L62():
    r33 = dyn base6(<sym n>);
    goto L12(r33);
  D16():
    deopt 57 [r31];
  D18():
    deopt 63 [n];
  L13():
    goto L14();
  L14():
    n2 = ld n;
    check L69() else D22();
  L59():
    as_integer1 = ldf `as.integer` in base;
    r32 = dyn as_integer1(r31);
    check L60() else D17();
  L63():
    n1 = force? n;
    checkMissing(n1);
    is_na1 = ldf `is.na` in base;
    r35 = dyn is_na1(n1);
    check L64() else D19();
  L65():
    stop1 = ldf stop;
    check L66() else D20();
  D17():
    deopt 59 [r32];
  D19():
    deopt 66 [r35];
  D20():
    deopt 68 [];
  D22():
    deopt 74 [1.0, n2];
  L60():
    goto L11(r32);
  L64():
    goto L12(r35);
  L66():
    r36 = dyn stop1("invalid nrow(x)");
    check L67() else D21();
  L69():
    n3 = force? n2;
    checkMissing(n3);
    r38 = `*`(1.0, n3);
    p7 = ld p;
    check L70() else D23();
  D21():
    deopt 70 [r36];
  D23():
    deopt 76 [r38, p7];
  L67():
    goto L14();
  L70():
    p8 = force? p7;
    checkMissing(p8);
    r39 = `*`(r38, p8);
    r40 = `>`(r39, 2.147483647E9);
    c5 = `as.logical`(r40);
    if c5 then L71() else L15();
  L15():
    goto L16();
  L16():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L75() else D26();
  L71():
    stop2 = ldf stop;
    check L72() else D24();
  D24():
    deopt 82 [];
  D26():
    deopt 90 ["double", l, "double"];
  L72():
    r41 = dyn stop2("too large a matrix for LINPACK");
    check L73() else D25();
  L75():
    r43 = dyn storage_mode__(l, NULL, "double");
    check L76() else D27();
  D25():
    deopt 84 [r41];
  D27():
    deopt 92 ["double", r43];
  L73():
    goto L16();
  L76():
    st x = r43;
    sym7 = ldf `.Fortran`;
    base7 = ldf `.Fortran` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L17(r45):
    c6 = `is.object`(r45);
    if c6 then L101() else L102(r45);
  L77():
    _F_dqrdc2 = ld `.F_dqrdc2`;
    check L79() else D28();
  L78():
    r44 = dyn base7[, qr, , , , , rank, qraux, pivot, ](<sym .F_dqrdc2>, <sym x>, <sym n>, <sym n>, <sym p>, <lang as.double(tol)>, <lang integer(1)>, <lang double(p)>, <lang as.integer(seq_len(p))>, <lang double(`*`(2, p))>);
    goto L17(r44);
  D28():
    deopt 96 [_F_dqrdc2];
  L21(dx1):
    st res = dx1;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L107() else L108();
  L79():
    _F_dqrdc3 = force? _F_dqrdc2;
    checkMissing(_F_dqrdc3);
    x13 = ld x;
    check L80() else D29();
  L101():
    dr = tryDispatchBuiltin.1("[", r45);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L103() else L102(dr);
  L102(r63):
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  D29():
    deopt 98 [x13];
  L22(r67, r68):
    __ = ldf `[` in base;
    r70 = dyn __(r67, r68);
    goto L21(r70);
  L23(r72):
    r75 = `!`(r72);
    c9 = `as.logical`(r75);
    if c9 then L111() else L24();
  L80():
    x14 = force? x13;
    checkMissing(x14);
    n4 = ld n;
    check L81() else D30();
  L103():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L104():
    c7 = ldf c in base;
    r69 = dyn c7(1.0, 6.0, 7.0, 8.0);
    check L106() else D44();
  L105():
    r66 = dyn base11(1.0, 6.0, 7.0, 8.0);
    goto L22(r63, r66);
  L107():
    colnames = ldf colnames;
    check L109() else D45();
  L108():
    r71 = dyn base12(<lang `<-`(cn, colnames(x))>);
    goto L23(r71);
  D30():
    deopt 101 [n4];
  D44():
    deopt 145 [r63, r69];
  D45():
    deopt 150 [];
  L24():
    goto L26();
  L26():
    l10 = ld res;
    class__ = ldf `class<-`;
    check L132() else D51();
  L81():
    n5 = force? n4;
    checkMissing(n5);
    n6 = ld n;
    check L82() else D31();
  L106():
    goto L22(r63, r69);
  L109():
    p19 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r74 = dyn colnames(p19);
    check L110() else D46();
  L111():
    cn = ld cn;
    check L112() else D47();
  D31():
    deopt 103 [n6];
  D46():
    deopt 152 [r74];
  D47():
    deopt 156 [cn];
  D51():
    deopt 176 ["qr", l10, "qr"];
  L82():
    n7 = force? n6;
    checkMissing(n7);
    p9 = ld p;
    check L83() else D32();
  L110():
    st cn = r74;
    c8 = `==`(r74, NULL);
    goto L23(c8);
  L112():
    cn1 = force? cn;
    checkMissing(cn1);
    c10 = `is.object`(cn1);
    if c10 then L113() else L114(cn1);
  L132():
    r81 = dyn class__(l10, NULL, "qr");
    check L133() else D52();
  D32():
    deopt 105 [p9];
  D52():
    deopt 178 ["qr", r81];
  L25(dx3):
    l1 = ld res;
    c12 = `is.object`(l1);
    if c12 then L122() else L123(dx3, l1, dx3, l1);
  L83():
    p10 = force? p9;
    checkMissing(p10);
    sym8 = ldf `as.double`;
    base8 = ldf `as.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L113():
    dr2 = tryDispatchBuiltin.1("[", cn1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L115() else L114(dr2);
  L114(cn3):
    res = ld res;
    check L116() else D48();
  L133():
    st res = r81;
    res4 = ld res;
    check L134() else D53();
  D48():
    deopt 158 [cn3, res];
  D53():
    deopt 180 [res4];
  L18(r47):
    integer = ldf integer;
    check L88() else D35();
  L84():
    tol1 = ld tol;
    check L86() else D33();
  L85():
    r46 = dyn base8(<sym tol>);
    goto L18(r46);
  L115():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L116():
    res1 = force? res;
    checkMissing(res1);
    c11 = `is.object`(res1);
    if c11 then L118() else L119(cn3, res1);
  L121(dx13, l7, dx14, dx15):
    colnames__ = ldf `colnames<-`;
    check L125() else D49();
  L122():
    dr6 = tryDispatchBuiltin.1("$", l1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L124() else L123(dx3, l1, dx3, dr6);
  L123(dx8, l4, dx9, l5):
    r78 = `$`(l5, <sym qr>);
    goto L121(dx8, l4, dx9, r78);
  L134():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  D33():
    deopt 109 [tol1];
  D35():
    deopt 114 [];
  D49():
    deopt 166 [dx13, l7, dx15, dx14];
  L86():
    tol2 = force? tol1;
    checkMissing(tol2);
    as_double = ldf `as.double` in base;
    r48 = dyn as_double(tol2);
    check L87() else D34();
  L88():
    r49 = dyn integer(1);
    check L89() else D36();
  L117(cn7, dx5):
    __1 = ldf `[` in base;
    r77 = dyn __1(cn7, dx5);
    goto L25(r77);
  L118():
    dr4 = tryDispatchBuiltin.1("$", res1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L120() else L119(cn3, dr4);
  L119(cn5, res3):
    r76 = `$`(res3, <sym pivot>);
    goto L117(cn5, r76);
  L124():
    dx12 = getTryDispatchBuiltinValue(dr6);
    goto L121(dx3, l1, dx3, dx12);
  L125():
    r79 = dyn colnames__(dx15, NULL, dx14);
    check L126() else D50();
  D34():
    deopt 112 [r48];
  D36():
    deopt 116 [r49];
  D50():
    deopt 168 [dx13, l7, r79];
  L87():
    goto L18(r48);
  L89():
    double = ldf double;
    check L90() else D37();
  L120():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L117(cn3, dx4);
  L126():
    c13 = `is.object`(l7);
    if c13 then L128() else L129(dx13, l7);
  D37():
    deopt 119 [];
  L90():
    p13 = prom<V +>{
      p11 = ld p;
      p12 = force? p11;
      checkMissing(p12);
      return p12;
    };
    r51 = dyn double(p13);
    check L91() else D38();
  L127(dx20, dx21):
    st res = dx21;
    goto L26();
  L128():
    dr8 = tryDispatchBuiltin.0("$<-", l7, r79);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L130() else L129(dx13, dr8);
  L129(dx17, l9):
    r80 = `$<-`(l9, <sym qr>, r79);
    goto L127(dx17, r80);
  D38():
    deopt 121 [r51];
  L91():
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L92() else L93();
  L130():
    dx19 = getTryDispatchBuiltinValue(dr8);
    goto L127(dx13, dx19);
  L19(r53):
    double1 = ldf double;
    check L98() else D41();
  L92():
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L94() else L95();
  L93():
    r52 = dyn base9(<lang seq_len(p)>);
    goto L19(r52);
  D41():
    deopt 133 [];
  L20(r55):
    as_integer2 = ldf `as.integer` in base;
    r57 = dyn as_integer2(r55);
    check L97() else D40();
  L94():
    p14 = ld p;
    check L96() else D39();
  L95():
    r54 = dyn base10(<sym p>);
    goto L20(r54);
  L98():
    p18 = prom<V +>{
      p16 = ld p;
      p17 = force? p16;
      checkMissing(p17);
      r58 = `*`(2, p17);
      return r58;
    };
    r60 = dyn double1(p18);
    check L99() else D42();
  D39():
    deopt 126 [p14];
  D40():
    deopt 130 [r57];
  D42():
    deopt 135 [r60];
  L96():
    p15 = force? p14;
    checkMissing(p15);
    r56 = seq_len(p15);
    goto L20(r56);
  L97():
    goto L19(r57);
  L99():
    _Fortran = ldf `.Fortran` in base;
    r61 = dyn _Fortran(_F_dqrdc3, x14, n5, n7, p10, r47, r49, r51, r53, r60);
    check L100() else D43();
  D43():
    deopt 137 [r61];
  L100():
    goto L17(r61);
  }
}