fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1100166865`;
    st `.kappa_tri` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1100166865`(z, exact, LINPACK, norm, uplo, `...`) {
  (reg z:*, reg exact:*, reg LINPACK:*, reg norm:*, reg uplo:*, reg ddd:dots) -+> V { var z:*, var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, var LINPACK:*, reg LINPACK_isMissing:L, reg LINPACK_orDefault:*, var norm:*, reg norm_isMissing:L, reg norm_orDefault:*, var uplo:*, reg uplo_isMissing:L, reg uplo_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg z1:*, reg z2:V, reg dim:cls, reg r4:V, reg all:cls, reg r5:V, reg r6:V, reg c:L, reg exact1:*, reg exact2:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg norm1:*, reg norm2:V, reg c2:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c8:L, reg r12:V, reg norm3:*, reg norm4:V, reg identical:cls, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg svd:cls, reg z3:*, reg z4:V, reg p:p(V +), reg r15:V, reg c13:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg s:*, reg s1:V, reg max:cls, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg r26:V, reg s2:*, reg s3:V, reg c14:L, reg r28:V, reg s5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r30:V, reg dx3:V, reg s6:*, reg s7:V, reg r31:V, reg __:cls, reg r32:V, reg min:cls, reg r33:V, reg r34:V, reg norm5:cls, reg z5:*, reg z6:V, reg p1:p(V +), reg norm6:*, reg norm7:V, reg p2:p(V +), reg r37:V, reg norm8:cls, reg solve:cls, reg z7:*, reg z8:V, reg p3:p(V +), reg r39:V, reg p4:p(V +), reg norm9:*, reg norm10:V, reg p5:p(V +), reg r42:V, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg nrow:cls, reg z9:*, reg z10:V, reg p6:p(V +), reg r47:V, reg as_integer:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg p7:*, reg p8:V, reg is_na:cls, reg r51:V, reg c15:L, reg stop:cls, reg r52:V, reg p9:*, reg p10:V, reg ncol:cls, reg z11:*, reg z12:V, reg p11:p(V +), reg r55:V, reg r56:V, reg c16:L, reg stop1:cls, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg norm11:*, reg norm12:V, reg c17:V, reg c18:L, reg norm13:*, reg norm14:V, reg r62:V, reg c19:L, reg warning:cls, reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg toupper:cls, reg norm15:*, reg norm16:V, reg p12:p(V +), reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg c20:cls, reg r70:V, reg match:cls, reg r71:V, reg r72:V, reg c21:L, reg warning1:cls, reg gettextf:cls, reg norm17:*, reg norm18:V, reg p13:p(V +), reg r74:V, reg p14:p(V +), reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg z13:*, reg z14:V, reg c22:L, reg c23:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:R, reg r83:V, reg z15:*, reg z16:V, reg norm19:*, reg norm20:V, reg uplo1:*, reg uplo2:V, reg La_ztrcon3:cls, reg r84:V, reg r85:V, reg LINPACK1:*, reg LINPACK2:V, reg c24:L, reg norm21:*, reg norm22:V, reg r86:V, reg c25:L, reg t:cls, reg z17:*, reg z18:V, reg p15:p(V +), reg r88:V, reg l:*, reg storage_mode__:cls, reg r90:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r93:V, reg r94:R, reg r95:V, reg _F_dtrco:*, reg _F_dtrco1:V, reg z19:*, reg z20:V, reg p16:*, reg p17:V, reg p18:*, reg p19:V, reg double:cls, reg r96:V, reg double1:cls, reg p20:*, reg p21:V, reg p22:p(V +), reg r98:V, reg uplo3:*, reg uplo4:V, reg r99:V, reg c26:L, reg r102:R, reg r103:I, reg _Fortran:cls, reg r104:V, reg c27:L, reg r107:R, reg r108:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r110:R, reg dx5:V, reg r111:V, reg r112:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r115:V, reg r116:R, reg r117:V, reg z21:*, reg z22:V, reg norm23:*, reg norm24:V, reg uplo5:*, reg uplo6:V, reg La_dtrcon3:cls, reg r118:V, reg r119:V |
    mkenv;
    st z = z;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L0(FALSE) else L0(exact);
  L0(exact_orDefault):
    st exact = exact_orDefault;
    LINPACK_isMissing = missing.0(LINPACK);
    if LINPACK_isMissing then L1(TRUE) else L1(LINPACK);
  L1(LINPACK_orDefault):
    st LINPACK = LINPACK_orDefault;
    norm_isMissing = missing.0(norm);
    if norm_isMissing then L2(NULL) else L2(norm);
  L2(norm_orDefault):
    st norm = norm_orDefault;
    uplo_isMissing = missing.0(uplo);
    if uplo_isMissing then L3("U") else L3(uplo);
  L3(uplo_orDefault):
    st uplo = uplo_orDefault;
    st `...` = ddd;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L4(r1):
    r6 = `!`(r1);
    c = `as.logical`(r6);
    if c then L46() else L6();
  L39():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L40():
    r = dyn base(<lang dim(z)>);
    goto L4(r);
  L5(r3):
    all = ldf all in base;
    r5 = dyn all(r3);
    check L45() else D2();
  L6():
    exact1 = ld exact;
    check L49() else D3();
  L41():
    z1 = ld z;
    check L43() else D0();
  L42():
    r2 = dyn base1(<sym z>);
    goto L5(r2);
  L46():
    popenv;
    return 0.0;
  D0():
    deopt 4 [z1];
  D2():
    deopt 9 [r5];
  D3():
    deopt 16 [exact1];
  L43():
    z2 = force? z1;
    checkMissing(z2);
    dim = ldf dim in base;
    r4 = dyn dim(z2);
    check L44() else D1();
  L45():
    goto L4(r5);
  L49():
    exact2 = force? exact1;
    checkMissing(exact2);
    c1 = `as.logical`(exact2);
    if c1 then L50() else L8();
  D1():
    deopt 7 [r4];
  L8():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L44():
    goto L5(r4);
  L50():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L9(r10):
    c3 = `as.logical`(r10);
    if c3 then L10(c3) else L54();
  L16(r45):
    st p = r45;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L51():
    norm1 = ld norm;
    check L53() else D4();
  L52():
    r9 = dyn base2(<sym norm>);
    goto L9(r9);
  L85():
    nrow = ldf nrow;
    check L87() else D18();
  L86():
    r44 = dyn base6(<lang nrow(z)>);
    goto L16(r44);
  D4():
    deopt 19 [norm1];
  D18():
    deopt 79 [];
  L10(c4):
    c12 = `as.logical`(c4);
    if c12 then L60() else L12();
  L17(r50):
    c15 = `as.logical`(r50);
    if c15 then L94() else L18();
  L53():
    norm2 = force? norm1;
    checkMissing(norm2);
    c2 = `==`(norm2, NULL);
    goto L9(c2);
  L54():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L87():
    p6 = prom<V +>{
      z9 = ld z;
      z10 = force? z9;
      checkMissing(z10);
      return z10;
    };
    r47 = dyn nrow(p6);
    check L88() else D19();
  L90():
    p7 = ld p;
    check L92() else D21();
  L91():
    r49 = dyn base7(<sym p>);
    goto L17(r49);
  D19():
    deopt 81 [r47];
  D21():
    deopt 87 [p7];
  L11(c8, r12):
    c9 = `as.logical`(r12);
    c10 = `||`(c8, c9);
    goto L10(c10);
  L12():
    norm5 = ldf norm;
    check L80() else D14();
  L18():
    goto L19();
  L19():
    p9 = ld p;
    check L98() else D25();
  L55():
    norm3 = ld norm;
    check L57() else D5();
  L56():
    r11 = dyn base3("2", <sym norm>);
    goto L11(c3, r11);
  L60():
    svd = ldf svd;
    check L61() else D7();
  L88():
    as_integer = ldf `as.integer` in base;
    r48 = dyn as_integer(r47);
    check L89() else D20();
  L92():
    p8 = force? p7;
    checkMissing(p8);
    is_na = ldf `is.na` in base;
    r51 = dyn is_na(p8);
    check L93() else D22();
  L94():
    stop = ldf stop;
    check L95() else D23();
  D5():
    deopt 25 [c3, norm3];
  D7():
    deopt 38 [];
  D14():
    deopt 65 [];
  D20():
    deopt 83 [r48];
  D22():
    deopt 90 [r51];
  D23():
    deopt 92 [];
  D25():
    deopt 97 [p9];
  L57():
    norm4 = force? norm3;
    checkMissing(norm4);
    identical = ldf identical in base;
    r13 = dyn identical("2", norm4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L58() else D6();
  L61():
    p = prom<V +>{
      z3 = ld z;
      z4 = force? z3;
      checkMissing(z4);
      return z4;
    };
    r15 = dyn svd[, nu, nv](p, 0, 0);
    check L62() else D8();
  L80():
    p1 = prom<V +>{
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      return z6;
    };
    p2 = prom<V +>{
      norm6 = ld norm;
      norm7 = force? norm6;
      checkMissing(norm7);
      return norm7;
    };
    r37 = dyn norm5[, type](p1, p2);
    check L81() else D15();
  L89():
    goto L16(r48);
  L93():
    goto L17(r51);
  L95():
    r52 = dyn stop("invalid nrow(z)");
    check L96() else D24();
  L98():
    p10 = force? p9;
    checkMissing(p10);
    ncol = ldf ncol;
    check L99() else D26();
  D6():
    deopt 35 [c3, r13];
  D8():
    deopt 44 [r15];
  D15():
    deopt 69 [r37];
  D24():
    deopt 94 [r52];
  D26():
    deopt 99 [p10];
  L58():
    goto L11(c3, r13);
  L62():
    c13 = `is.object`(r15);
    if c13 then L64() else L65(r15);
  L81():
    norm8 = ldf norm;
    check L82() else D16();
  L96():
    goto L19();
  L99():
    p11 = prom<V +>{
      z11 = ld z;
      z12 = force? z11;
      checkMissing(z12);
      return z12;
    };
    r55 = dyn ncol(p11);
    check L100() else D27();
  D16():
    deopt 70 [r37];
  D27():
    deopt 101 [p10, r55];
  L63(dx1):
    st s = dx1;
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L64():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(r17):
    r18 = `$`(r17, <sym d>);
    goto L63(r18);
  L82():
    p4 = prom<V +>{
      solve = ldf solve;
      p3 = prom<V +>{
        z7 = ld z;
        z8 = force? z7;
        checkMissing(z8);
        return z8;
      };
      r39 = dyn solve(p3);
      return r39;
    };
    p5 = prom<V +>{
      norm9 = ld norm;
      norm10 = force? norm9;
      checkMissing(norm10);
      return norm10;
    };
    r42 = dyn norm8[, type](p4, p5);
    check L83() else D17();
  L100():
    r56 = `!=`(p10, r55);
    c16 = `as.logical`(r56);
    if c16 then L101() else L20();
  D17():
    deopt 74 [r37, r42];
  L13(r20):
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L20():
    goto L21();
  L21():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L63(dx);
  L67():
    s = ld s;
    check L69() else D9();
  L68():
    r19 = dyn base4(<sym s>);
    goto L13(r19);
  L83():
    r43 = `*`(r37, r42);
    popenv;
    return r43;
  L101():
    stop1 = ldf stop;
    check L102() else D28();
  D9():
    deopt 49 [s];
  D28():
    deopt 104 [];
  L14(r25, r26):
    r34 = `/`(r25, r26);
    popenv;
    return r34;
  L22(r60):
    c18 = `as.logical`(r60);
    if c18 then L108() else L23();
  L69():
    s1 = force? s;
    checkMissing(s1);
    max = ldf max in base;
    r21 = dyn max(s1);
    check L70() else D10();
  L71():
    s2 = ld s;
    check L73() else D11();
  L72():
    r24 = dyn base5(<lang `[`(s, `>`(s, 0.0))>);
    goto L14(r20, r24);
  L102():
    r57 = dyn stop1("triangular matrix should be square");
    check L103() else D29();
  L105():
    norm11 = ld norm;
    check L107() else D30();
  L106():
    r59 = dyn base8(<sym norm>);
    goto L22(r59);
  D10():
    deopt 52 [r21];
  D11():
    deopt 54 [r20, s2];
  D29():
    deopt 106 [r57];
  D30():
    deopt 110 [norm11];
  L23():
    norm13 = ld norm;
    check L110() else D31();
  L24():
    sym11 = ldf `is.complex`;
    base11 = ldf `is.complex` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L127() else L128();
  L70():
    goto L13(r21);
  L73():
    s3 = force? s2;
    checkMissing(s3);
    c14 = `is.object`(s3);
    if c14 then L74() else L75(r20, s3);
  L103():
    goto L21();
  L107():
    norm12 = force? norm11;
    checkMissing(norm12);
    c17 = `==`(norm12, NULL);
    goto L22(c17);
  L108():
    st norm = "1";
    goto L24();
  D31():
    deopt 116 [norm13];
  L15(r30, dx3):
    min = ldf min in base;
    r33 = dyn min(dx3);
    check L78() else D13();
  L29(r78):
    c23 = `as.logical`(r78);
    if c23 then L130() else L30();
  L74():
    dr2 = tryDispatchBuiltin.1("[", s3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(r20, dr2);
  L75(r28, s5):
    s6 = ld s;
    check L77() else D12();
  L110():
    norm14 = force? norm13;
    checkMissing(norm14);
    r62 = `==`(norm14, "2");
    c19 = `as.logical`(r62);
    if c19 then L111() else L25();
  L127():
    z13 = ld z;
    check L129() else D40();
  L128():
    r77 = dyn base11(<sym z>);
    goto L29(r77);
  D12():
    deopt 56 [r28, s5, s6];
  D13():
    deopt 62 [r30, r33];
  D40():
    deopt 157 [z13];
  L25():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  L30():
    LINPACK1 = ld LINPACK;
    check L138() else D45();
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(r20, dx2);
  L77():
    s7 = force? s6;
    checkMissing(s7);
    r31 = `>`(s7, 0.0);
    __ = ldf `[` in base;
    r32 = dyn __(s5, r31);
    goto L15(r28, r32);
  L78():
    goto L14(r30, r33);
  L111():
    warning = ldf warning;
    check L112() else D32();
  L129():
    z14 = force? z13;
    checkMissing(z14);
    c22 = `is.complex`(z14);
    goto L29(c22);
  L130():
    sym12 = ldf `.Internal`;
    base12 = ldf `.Internal` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L131() else L132();
  D32():
    deopt 121 [];
  D45():
    deopt 172 [LINPACK1];
  L26(r65):
    r72 = `!`(r65);
    c21 = `as.logical`(r72);
    if c21 then L123() else L28();
  L31(r82, r83):
    r85 = `/`(r82, r83);
    popenv;
    return r85;
  L112():
    r63 = dyn warning("using 1-norm approximation for approximate 2-norm");
    check L113() else D33();
  L115():
    toupper = ldf toupper;
    check L117() else D34();
  L116():
    r64 = dyn base9(<lang toupper(norm)>, <lang c("1", "O", "I")>, 0);
    goto L26(r64);
  L131():
    z15 = ld z;
    check L133() else D41();
  L132():
    r81 = dyn base12(<lang La_ztrcon3(z, norm, uplo)>);
    goto L31(1.0, r81);
  L138():
    LINPACK2 = force? LINPACK1;
    checkMissing(LINPACK2);
    c24 = `as.logical`(LINPACK2);
    if c24 then L139() else L32();
  D33():
    deopt 123 [r63];
  D34():
    deopt 130 [];
  D41():
    deopt 163 [1.0, z15];
  L28():
    goto L24();
  L32():
    sym14 = ldf `.Internal`;
    base14 = ldf `.Internal` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L166() else L167();
  L113():
    st norm = "1";
    goto L24();
  L117():
    p12 = prom<V +>{
      norm15 = ld norm;
      norm16 = force? norm15;
      checkMissing(norm16);
      return norm16;
    };
    r67 = dyn toupper(p12);
    check L118() else D35();
  L123():
    warning1 = ldf warning;
    check L124() else D38();
  L133():
    z16 = force? z15;
    checkMissing(z16);
    norm19 = ld norm;
    check L134() else D42();
  L139():
    norm21 = ld norm;
    check L140() else D46();
  D35():
    deopt 132 [r67];
  D38():
    deopt 146 [];
  D42():
    deopt 165 [1.0, norm19];
  D46():
    deopt 174 [norm21];
  L38(r116, r117):
    r119 = `/`(r116, r117);
    popenv;
    return r119;
  L118():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  L124():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        norm17 = ld norm;
        norm18 = force? norm17;
        checkMissing(norm18);
        return norm18;
      };
      r74 = dyn gettextf("norm=\"%s\" not available here; using norm=\"1\"", p13);
      return r74;
    };
    r76 = dyn warning1[, domain](p14, NA_LGL);
    check L125() else D39();
  L134():
    norm20 = force? norm19;
    checkMissing(norm20);
    uplo1 = ld uplo;
    check L135() else D43();
  L140():
    norm22 = force? norm21;
    checkMissing(norm22);
    r86 = `==`(norm22, "I");
    c25 = `as.logical`(r86);
    if c25 then L141() else L33();
  L166():
    z21 = ld z;
    check L168() else D61();
  L167():
    r115 = dyn base14(<lang La_dtrcon3(z, norm, uplo)>);
    goto L38(1.0, r115);
  D39():
    deopt 150 [r76];
  D43():
    deopt 167 [1.0, uplo1];
  D61():
    deopt 227 [1.0, z21];
  L27(r69):
    match = ldf match in base;
    r71 = dyn match(r67, r69, 0, NULL);
    check L122() else D37();
  L33():
    goto L34();
  L34():
    l = ld z;
    storage_mode__ = ldf `storage.mode<-`;
    check L145() else D49();
  L119():
    c20 = ldf c in base;
    r70 = dyn c20("1", "O", "I");
    check L121() else D36();
  L120():
    r68 = dyn base10("1", "O", "I");
    goto L27(r68);
  L125():
    st norm = "1";
    goto L24();
  L135():
    uplo2 = force? uplo1;
    checkMissing(uplo2);
    La_ztrcon3 = ldf La_ztrcon3 in base;
    r84 = dyn La_ztrcon3(z16, norm20, uplo2);
    check L136() else D44();
  L141():
    t = ldf t;
    check L142() else D47();
  L168():
    z22 = force? z21;
    checkMissing(z22);
    norm23 = ld norm;
    check L169() else D62();
  D36():
    deopt 139 [r70];
  D37():
    deopt 143 [r71];
  D44():
    deopt 170 [1.0, r84];
  D47():
    deopt 179 [];
  D49():
    deopt 188 ["double", l, "double"];
  D62():
    deopt 229 [1.0, norm23];
  L121():
    goto L27(r70);
  L122():
    goto L26(r71);
  L136():
    goto L31(1.0, r84);
  L142():
    p15 = prom<V +>{
      z17 = ld z;
      z18 = force? z17;
      checkMissing(z18);
      return z18;
    };
    r88 = dyn t(p15);
    check L143() else D48();
  L145():
    r90 = dyn storage_mode__(l, NULL, "double");
    check L146() else D50();
  L169():
    norm24 = force? norm23;
    checkMissing(norm24);
    uplo5 = ld uplo;
    check L170() else D63();
  D48():
    deopt 181 [r88];
  D50():
    deopt 190 ["double", r90];
  D63():
    deopt 231 [1.0, uplo5];
  L143():
    st z = r88;
    goto L34();
  L146():
    st z = r90;
    sym13 = ldf `.Fortran`;
    base13 = ldf `.Fortran` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L170():
    uplo6 = force? uplo5;
    checkMissing(uplo6);
    La_dtrcon3 = ldf La_dtrcon3 in base;
    r118 = dyn La_dtrcon3(z22, norm24, uplo6);
    check L171() else D64();
  D64():
    deopt 234 [1.0, r118];
  L35(r94, r95):
    c27 = `is.object`(r95);
    if c27 then L162() else L163(r94, r95);
  L147():
    _F_dtrco = ld `.F_dtrco`;
    check L149() else D51();
  L148():
    r93 = dyn base13[, , , , k, , ](<sym .F_dtrco>, <sym z>, <sym p>, <sym p>, <lang double(1.0)>, <lang double(p)>, <lang if(`==`(uplo, "U"), 1, 0)>);
    goto L35(1.0, r93);
  L171():
    goto L38(1.0, r118);
  D51():
    deopt 195 [1.0, _F_dtrco];
  L149():
    _F_dtrco1 = force? _F_dtrco;
    checkMissing(_F_dtrco1);
    z19 = ld z;
    check L150() else D52();
  L161(r110, dx5):
    r112 = `/`(r110, dx5);
    popenv;
    return r112;
  L162():
    dr4 = tryDispatchBuiltin.1("$", r95);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L164() else L163(r94, dr4);
  L163(r107, r108):
    r111 = `$`(r108, <sym k>);
    goto L161(r107, r111);
  D52():
    deopt 197 [1.0, z19];
  L150():
    z20 = force? z19;
    checkMissing(z20);
    p16 = ld p;
    check L151() else D53();
  L164():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L161(r94, dx4);
  D53():
    deopt 199 [1.0, p16];
  L151():
    p17 = force? p16;
    checkMissing(p17);
    p18 = ld p;
    check L152() else D54();
  D54():
    deopt 201 [1.0, p18];
  L152():
    p19 = force? p18;
    checkMissing(p19);
    double = ldf double;
    check L153() else D55();
  D55():
    deopt 204 [1.0];
  L153():
    r96 = dyn double(1.0);
    check L154() else D56();
  D56():
    deopt 206 [1.0, r96];
  L154():
    double1 = ldf double;
    check L155() else D57();
  D57():
    deopt 209 [1.0];
  L155():
    p22 = prom<V +>{
      p20 = ld p;
      p21 = force? p20;
      checkMissing(p21);
      return p21;
    };
    r98 = dyn double1(p22);
    check L156() else D58();
  D58():
    deopt 211 [1.0, r98];
  L156():
    uplo3 = ld uplo;
    check L157() else D59();
  D59():
    deopt 212 [1.0, uplo3];
  L157():
    uplo4 = force? uplo3;
    checkMissing(uplo4);
    r99 = `==`(uplo4, "U");
    c26 = `as.logical`(r99);
    if c26 then L158() else L36();
  L36():
    goto L37(1.0, 0);
  L37(r102, r103):
    _Fortran = ldf `.Fortran` in base;
    r104 = dyn _Fortran(_F_dtrco1, z20, p17, p19, r96, r98, r103);
    check L160() else D60();
  L158():
    goto L37(1.0, 1);
  D60():
    deopt 221 [r102, r104];
  L160():
    goto L35(r102, r104);
  }
}