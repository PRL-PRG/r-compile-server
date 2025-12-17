fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3518340412;
    st `.format.zeros` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3518340412(x, `zero.print`, nx, replace, `warn.non.fitting`) {
  (reg x:*, reg zero_print:*, reg nx:*, reg replace:*, reg warn_non_fitting:*) -+> V { var x:*, var `zero.print`:*, var nx:*, reg nx_isMissing:L, reg nx_orDefault:*, reg suppressWarnings:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_numeric:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var `warn.non.fitting`:*, reg warn_non_fitting_isMissing:L, reg warn_non_fitting_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg zero_print1:*, reg zero_print2:V, reg c:V, reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg nx1:*, reg nx2:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c9:L, reg r15:V, reg r16:V, reg nx3:*, reg nx4:V, reg is_na:cls, reg r17:V, reg r18:V, reg r19:V, reg any:cls, reg r20:V, reg c10:L, reg c11:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg zero_print3:*, reg zero_print4:V, reg length:cls, reg r23:V, reg r24:V, reg c14:L, reg stop:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg zero_print5:*, reg zero_print6:V, reg c15:L, reg c16:L, reg zero_print7:*, reg zero_print8:V, reg c17:L, reg r29:S, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg zero_print9:*, reg zero_print10:V, reg c18:L, reg r33:V, reg c19:L, reg stop1:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg zero_print11:*, reg zero_print12:V, reg nchar:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg x3:*, reg x4:V, reg c20:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i0:*, reg i1:V, reg __:cls, reg r41:V, reg nchar1:cls, reg r42:V, reg as_vector:cls, reg regexpr:cls, reg x7:*, reg x8:V, reg c21:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg __1:cls, reg r43:V, reg p2:p(V +), reg r45:V, reg p3:p(V +), reg r47:V, reg replace1:*, reg replace2:V, reg c22:L, reg zero_print13:*, reg zero_print14:V, reg l:*, reg c23:L, reg zero_print16:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg zero_print18:V, reg dx5:V, reg i4:*, reg i5:V, reg ___:cls, reg r48:V, reg zero_print19:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg nc:*, reg nc1:V, reg nz:*, reg nz1:V, reg r51:V, reg any1:cls, reg r52:V, reg c24:L, reg c26:V, reg warn_non_fitting1:*, reg warn_non_fitting2:V, reg c27:L, reg c28:V, reg c30:L, reg warning:cls, reg r53:V, reg pmin:cls, reg nc2:*, reg nc3:V, reg p4:p(V +), reg nz2:*, reg nz3:V, reg r56:V, reg ind0:*, reg ind1:V, reg r57:V, reg p5:p(V +), reg r59:V, reg pmax:cls, reg i6:*, reg i7:V, reg nz4:*, reg nz5:V, reg r60:V, reg r61:V, reg p6:p(V +), reg r63:V, reg zero_print20:*, reg zero_print21:V, reg l3:*, reg c31:L, reg zero_print24:V, reg l6:*, reg zero_print25:V, reg l7:*, reg dr6:V, reg dc3:L, reg dx6:V, reg zero_print28:V, reg l9:*, reg zero_print29:V, reg dx7:V, reg i8:*, reg i9:V, reg __2:cls, reg r64:V, reg substr__:cls, reg i10:*, reg i11:V, reg p7:p(V +), reg i12:*, reg i13:V, reg p8:p(V +), reg r67:V, reg c32:L, reg zero_print31:V, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i14:*, reg i15:V, reg ___1:cls, reg r68:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r69:V, reg r70:V, reg nc4:*, reg nc5:V, reg i16:*, reg i17:V, reg r71:V, reg any2:cls, reg r72:V, reg c33:L, reg strrep:cls, reg nc6:*, reg nc7:V, reg i18:*, reg i19:V, reg r73:V, reg c34:L, reg r75:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg P:*, reg P1:V, reg __3:cls, reg r76:V, reg p9:p(V +), reg r78:V, reg l12:*, reg c35:L, reg r81:V, reg l15:*, reg r82:V, reg l16:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r85:V, reg l18:*, reg r86:V, reg dx13:V, reg i20:*, reg i21:V, reg __4:cls, reg r87:V, reg c36:L, reg r90:V, reg l20:*, reg dx16:V, reg r91:V, reg dx17:V, reg dr14:V, reg dc7:L, reg dx19:V, reg r94:V, reg l22:*, reg dx20:V, reg r95:V, reg dx21:V, reg P2:*, reg P3:V, reg __5:cls, reg r96:V, reg substr__1:cls, reg i22:*, reg i23:V, reg c37:L, reg i25:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg P4:*, reg P5:V, reg __6:cls, reg r97:V, reg r98:V, reg p10:p(V +), reg nc8:*, reg nc9:V, reg c38:L, reg nc11:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg P6:*, reg P7:V, reg __7:cls, reg r100:V, reg p11:p(V +), reg r102:V, reg c39:L, reg r104:V, reg l24:*, reg dx27:V, reg dr20:V, reg dc10:L, reg dx28:V, reg r106:V, reg l26:*, reg dx29:V, reg P8:*, reg P9:V, reg ___2:cls, reg r107:V, reg c40:L, reg r109:V, reg l28:*, reg dr22:V, reg dc11:L, reg dx30:V, reg r111:V, reg dx31:V, reg i26:*, reg i27:V, reg ___3:cls, reg r112:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    st `zero.print` = zero_print;
    nx_isMissing = missing.0(nx);
    if nx_isMissing then L0() else L1(nx);
  L0():
    p1 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p = prom<V +>{
        sym = ldf `as.numeric`;
        base = ldf `as.numeric` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        as_numeric = ldf `as.numeric` in base;
        r2 = dyn as_numeric(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn suppressWarnings(p);
      return r4;
    };
    goto L1(p1);
  L1(nx_orDefault):
    st nx = nx_orDefault;
    replace_isMissing = missing.0(replace);
    if replace_isMissing then L2(FALSE) else L2(replace);
  L2(replace_orDefault):
    st replace = replace_orDefault;
    warn_non_fitting_isMissing = missing.0(warn_non_fitting);
    if warn_non_fitting_isMissing then L3(TRUE) else L3(warn_non_fitting);
  L3(warn_non_fitting_orDefault):
    st `warn.non.fitting` = warn_non_fitting_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L4(r7):
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L42() else L5(c1);
  L39():
    zero_print1 = ld `zero.print`;
    check L41() else D0();
  L40():
    r6 = dyn base1(<sym zero.print>);
    goto L4(r6);
  D0():
    deopt 1 [zero_print1];
  L5(c3):
    c13 = `as.logical`(c3);
    if c13 then L52() else L8();
  L41():
    zero_print2 = force? zero_print1;
    checkMissing(zero_print2);
    c = `==`(zero_print2, NULL);
    goto L4(c);
  L42():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L6(c6, r10):
    c10 = `as.logical`(r10);
    c11 = `&&`(c6, c10);
    goto L5(c11);
  L8():
    goto L38();
  L38():
    x11 = ld x;
    check L153() else D50();
  L43():
    nx1 = ld nx;
    check L45() else D1();
  L44():
    r9 = dyn base2(<lang `<-`(i0, `&`(`==`(nx, 0.0), `!`(is.na(nx))))>);
    goto L6(c1, r9);
  L52():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  D1():
    deopt 7 [c1, nx1];
  D50():
    deopt 184 [x11];
  L9(r22):
    r24 = `>`(r22, 1);
    c14 = `as.logical`(r24);
    if c14 then L57() else L10();
  L45():
    nx2 = force? nx1;
    checkMissing(nx2);
    r11 = `==`(nx2, 0.0);
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L53():
    zero_print3 = ld `zero.print`;
    check L55() else D5();
  L54():
    r21 = dyn base4(<sym zero.print>);
    goto L9(r21);
  L153():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  D5():
    deopt 24 [zero_print3];
  L7(c9, r15, r16):
    r18 = `!`(r16);
    r19 = `&&`(r15, r18);
    st i0 = r19;
    any = ldf any in base;
    r20 = dyn any(r19);
    check L50() else D4();
  L10():
    goto L11();
  L11():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L46():
    nx3 = ld nx;
    check L48() else D2();
  L47():
    r14 = dyn base3(<sym nx>);
    goto L7(c1, r11, r14);
  L55():
    zero_print4 = force? zero_print3;
    checkMissing(zero_print4);
    length = ldf length in base;
    r23 = dyn length(zero_print4);
    check L56() else D6();
  L57():
    stop = ldf stop;
    check L58() else D7();
  D2():
    deopt 12 [c1, r11, nx3];
  D4():
    deopt 20 [c9, r20];
  D6():
    deopt 27 [r23];
  D7():
    deopt 31 [];
  L12(r28):
    c16 = `as.logical`(r28);
    if c16 then L64() else L13();
  L48():
    nx4 = force? nx3;
    checkMissing(nx4);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(nx4);
    check L49() else D3();
  L50():
    goto L6(c9, r20);
  L56():
    goto L9(r23);
  L58():
    r25 = dyn stop("'zero.print' has length > 1");
    check L59() else D8();
  L61():
    zero_print5 = ld `zero.print`;
    check L63() else D9();
  L62():
    r27 = dyn base5(<sym zero.print>);
    goto L12(r27);
  D3():
    deopt 15 [c1, r11, r17];
  D8():
    deopt 33 [r25];
  D9():
    deopt 37 [zero_print5];
  L13():
    goto L16();
  L16():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L49():
    goto L7(c1, r11, r17);
  L59():
    goto L11();
  L63():
    zero_print6 = force? zero_print5;
    checkMissing(zero_print6);
    c15 = `is.logical`(zero_print6);
    goto L12(c15);
  L64():
    zero_print7 = ld `zero.print`;
    check L65() else D10();
  D10():
    deopt 40 [zero_print7];
  L17(r32):
    r33 = `!`(r32);
    c19 = `as.logical`(r33);
    if c19 then L72() else L18();
  L65():
    zero_print8 = force? zero_print7;
    checkMissing(zero_print8);
    c17 = `as.logical`(zero_print8);
    if c17 then L66() else L14();
  L69():
    zero_print9 = ld `zero.print`;
    check L71() else D11();
  L70():
    r31 = dyn base6(<sym zero.print>);
    goto L17(r31);
  D11():
    deopt 50 [zero_print9];
  L14():
    goto L15(" ");
  L15(r29):
    st `zero.print` = r29;
    goto L16();
  L18():
    goto L19();
  L19():
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L66():
    goto L15("0");
  L71():
    zero_print10 = force? zero_print9;
    checkMissing(zero_print10);
    c18 = `is.character`(zero_print10);
    goto L17(c18);
  L72():
    stop1 = ldf stop;
    check L73() else D12();
  D12():
    deopt 55 [];
  L20(r37):
    st nz = r37;
    sym8 = ldf nchar;
    base8 = ldf nchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L73():
    r34 = dyn stop1("'zero.print' must be character, logical or NULL");
    check L74() else D13();
  L76():
    zero_print11 = ld `zero.print`;
    check L78() else D14();
  L77():
    r36 = dyn base7(<sym zero.print>, "c");
    goto L20(r36);
  D13():
    deopt 57 [r34];
  D14():
    deopt 62 [zero_print11];
  L21(r40):
    st nc = r40;
    as_vector = ldf `as.vector`;
    check L88() else D19();
  L74():
    goto L19();
  L78():
    zero_print12 = force? zero_print11;
    checkMissing(zero_print12);
    nchar = ldf nchar in base;
    r38 = dyn nchar(zero_print12, "c", FALSE, NA_LGL);
    check L79() else D15();
  L80():
    x3 = ld x;
    check L82() else D16();
  L81():
    r39 = dyn base8(<lang `[`(x, i0)>, "c");
    goto L21(r39);
  D15():
    deopt 68 [r38];
  D16():
    deopt 72 [x3];
  D19():
    deopt 84 [];
  L79():
    goto L20(r38);
  L82():
    x4 = force? x3;
    checkMissing(x4);
    c20 = `is.object`(x4);
    if c20 then L83() else L84(x4);
  L88():
    p3 = prom<V +>{
      regexpr = ldf regexpr;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        c21 = `is.object`(x8);
        if c21 then L1() else L2(x8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", x8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x10):
        i2 = ld i0;
        i3 = force? i2;
        __1 = ldf `[` in base;
        r43 = dyn __1(x10, i3);
        goto L0(r43);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r45 = dyn regexpr[, , fixed]("0", p2, TRUE);
      return r45;
    };
    r47 = dyn as_vector(p3);
    check L89() else D20();
  D20():
    deopt 86 [r47];
  L22(dx1):
    nchar1 = ldf nchar in base;
    r42 = dyn nchar1(dx1, "c", FALSE, NA_LGL);
    check L87() else D18();
  L83():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L85() else L84(dr);
  L84(x6):
    i0 = ld i0;
    check L86() else D17();
  L89():
    st ind0 = r47;
    replace1 = ld replace;
    check L90() else D21();
  D17():
    deopt 74 [x6, i0];
  D18():
    deopt 81 [r42];
  D21():
    deopt 88 [replace1];
  L85():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L86():
    i1 = force? i0;
    __ = ldf `[` in base;
    r41 = dyn __(x6, i1);
    goto L22(r41);
  L87():
    goto L21(r42);
  L90():
    replace2 = force? replace1;
    checkMissing(replace2);
    c22 = `as.logical`(replace2);
    if c22 then L91() else L23();
  L23():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L98() else L99();
  L25(zero_print19):
    goto L38();
  L91():
    zero_print13 = ld `zero.print`;
    check L92() else D22();
  D22():
    deopt 90 [zero_print13];
  L26(r50):
    c24 = `as.logical`(r50);
    if c24 then L103() else L27(c24);
  L92():
    zero_print14 = force? zero_print13;
    checkMissing(zero_print14);
    l = ld x;
    c23 = `is.object`(l);
    if c23 then L93() else L94(zero_print14, l);
  L98():
    nc = ld nc;
    check L100() else D24();
  L99():
    r49 = dyn base9(<lang `<`(nc, nz)>);
    goto L26(r49);
  D24():
    deopt 99 [nc];
  L24(zero_print18, dx5):
    st x = dx5;
    goto L25(zero_print18);
  L27(c26):
    c30 = `as.logical`(c26);
    if c30 then L106() else L28();
  L93():
    dr4 = tryDispatchBuiltin.0("[<-", l, zero_print14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L95() else L94(zero_print14, dr4);
  L94(zero_print16, l2):
    i4 = ld i0;
    check L96() else D23();
  L100():
    nc1 = force? nc;
    checkMissing(nc1);
    nz = ld nz;
    check L101() else D25();
  L103():
    warn_non_fitting1 = ld `warn.non.fitting`;
    check L104() else D27();
  D23():
    deopt 93 [zero_print16, l2, zero_print14, i4];
  D25():
    deopt 100 [nc1, nz];
  D27():
    deopt 105 [c24, warn_non_fitting1];
  L28():
    goto L29();
  L29():
    pmin = ldf pmin;
    check L110() else D30();
  L95():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(zero_print14, dx4);
  L96():
    i5 = force? i4;
    ___ = ldf `[<-` in base;
    r48 = dyn ___(l2, zero_print14, i5);
    goto L24(zero_print16, r48);
  L101():
    nz1 = force? nz;
    checkMissing(nz1);
    r51 = `<`(nc1, nz1);
    any1 = ldf any in base;
    r52 = dyn any1(r51);
    check L102() else D26();
  L104():
    warn_non_fitting2 = force? warn_non_fitting1;
    checkMissing(warn_non_fitting2);
    c27 = `as.logical`(warn_non_fitting2);
    c28 = `&&`(c24, c27);
    goto L27(c28);
  L106():
    warning = ldf warning;
    check L107() else D28();
  D26():
    deopt 104 [r52];
  D28():
    deopt 109 [];
  D30():
    deopt 115 [];
  L102():
    goto L26(r52);
  L107():
    r53 = dyn warning("'zero.print' is truncated to fit into formatted zeros; consider 'replace=TRUE'");
    check L108() else D29();
  L110():
    p4 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      return nc3;
    };
    p5 = prom<V +>{
      nz2 = ld nz;
      nz3 = force? nz2;
      checkMissing(nz3);
      r56 = `-`(nz3, 1);
      ind0 = ld ind0;
      ind1 = force? ind0;
      checkMissing(ind1);
      r57 = `+`(r56, ind1);
      return r57;
    };
    r59 = dyn pmin(p4, p5);
    check L111() else D31();
  D29():
    deopt 111 [r53];
  D31():
    deopt 118 [r59];
  L108():
    goto L29();
  L111():
    st i2 = r59;
    pmax = ldf pmax;
    check L112() else D32();
  D32():
    deopt 121 [];
  L112():
    p6 = prom<V +>{
      i6 = ld i2;
      i7 = force? i6;
      checkMissing(i7);
      nz4 = ld nz;
      nz5 = force? nz4;
      checkMissing(nz5);
      r60 = `-`(i7, nz5);
      r61 = `+`(r60, 1);
      return r61;
    };
    r63 = dyn pmax(1, p6);
    check L113() else D33();
  D33():
    deopt 124 [r63];
  L113():
    st i1 = r63;
    zero_print20 = ld `zero.print`;
    check L114() else D34();
  D34():
    deopt 126 [zero_print20];
  L114():
    zero_print21 = force? zero_print20;
    checkMissing(zero_print21);
    l3 = ld x;
    c31 = `is.object`(l3);
    if c31 then L115() else L116(zero_print21, l3, zero_print21, l3);
  L30(zero_print28, l9, zero_print29, dx7):
    substr__ = ldf `substr<-`;
    check L119() else D36();
  L115():
    dr6 = tryDispatchBuiltin.1("[", l3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L117() else L116(zero_print21, l3, zero_print21, dr6);
  L116(zero_print24, l6, zero_print25, l7):
    i8 = ld i0;
    check L118() else D35();
  D35():
    deopt 130 [zero_print24, l6, zero_print25, l7, i8];
  D36():
    deopt 134 [zero_print28, l9, dx7, zero_print29];
  L117():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L30(zero_print21, l3, zero_print21, dx6);
  L118():
    i9 = force? i8;
    __2 = ldf `[` in base;
    r64 = dyn __2(l7, i9);
    goto L30(zero_print24, l6, zero_print25, r64);
  L119():
    p7 = prom<V +>{
      i10 = ld i1;
      i11 = force? i10;
      checkMissing(i11);
      return i11;
    };
    p8 = prom<V +>{
      i12 = ld i2;
      i13 = force? i12;
      checkMissing(i13);
      return i13;
    };
    r67 = dyn substr__(dx7, NULL, p7, p8, zero_print29);
    check L120() else D37();
  D37():
    deopt 138 [zero_print28, l9, r67];
  L120():
    c32 = `is.object`(l9);
    if c32 then L121() else L122(zero_print28, l9);
  L31(dx9):
    st x = dx9;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L121():
    dr8 = tryDispatchBuiltin.0("[<-", l9, r67);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L123() else L122(zero_print28, dr8);
  L122(zero_print31, l11):
    i14 = ld i0;
    check L124() else D38();
  D38():
    deopt 139 [zero_print31, l11, r67, i14];
  L32(r70):
    c33 = `as.logical`(r70);
    if c33 then L130() else L33();
  L123():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L31(dx8);
  L124():
    i15 = force? i14;
    ___1 = ldf `[<-` in base;
    r68 = dyn ___1(l11, r67, i15);
    goto L31(r68);
  L125():
    nc4 = ld nc;
    check L127() else D39();
  L126():
    r69 = dyn base10(<lang `<-`(P, `>`(nc, i2))>);
    goto L32(r69);
  D39():
    deopt 145 [nc4];
  L33():
    goto L25(NULL);
  L127():
    nc5 = force? nc4;
    checkMissing(nc5);
    i16 = ld i2;
    check L128() else D40();
  L130():
    strrep = ldf strrep;
    check L131() else D42();
  D40():
    deopt 146 [nc5, i16];
  D42():
    deopt 153 [];
  L128():
    i17 = force? i16;
    checkMissing(i17);
    r71 = `>`(nc5, i17);
    st P = r71;
    any2 = ldf any in base;
    r72 = dyn any2(r71);
    check L129() else D41();
  L131():
    p9 = prom<V +>{
      nc6 = ld nc;
      nc7 = force? nc6;
      checkMissing(nc7);
      i18 = ld i2;
      i19 = force? i18;
      checkMissing(i19);
      r73 = `-`(nc7, i19);
      c34 = `is.object`(r73);
      if c34 then L1() else L2(r73);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", r73);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(r75):
      P = ld P;
      P1 = force? P;
      __3 = ldf `[` in base;
      r76 = dyn __3(r75, P1);
      goto L0(r76);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r78 = dyn strrep(" ", p9);
    check L132() else D43();
  D41():
    deopt 151 [r72];
  D43():
    deopt 156 [r78];
  L129():
    goto L32(r72);
  L132():
    l12 = ld x;
    c35 = `is.object`(l12);
    if c35 then L133() else L134(r78, l12, r78, l12);
  L34(r85, l18, r86, dx13):
    c36 = `is.object`(dx13);
    if c36 then L137() else L138(r85, l18, dx13, r86, dx13);
  L133():
    dr12 = tryDispatchBuiltin.1("[", l12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L135() else L134(r78, l12, r78, dr12);
  L134(r81, l15, r82, l16):
    i20 = ld i0;
    check L136() else D44();
  D44():
    deopt 159 [r81, l15, r82, l16, i20];
  L35(r94, l22, dx20, r95, dx21):
    substr__1 = ldf `substr<-`;
    check L141() else D46();
  L135():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L34(r78, l12, r78, dx12);
  L136():
    i21 = force? i20;
    __4 = ldf `[` in base;
    r87 = dyn __4(l16, i21);
    goto L34(r81, l15, r82, r87);
  L137():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L139() else L138(r85, l18, dx13, r86, dr14);
  L138(r90, l20, dx16, r91, dx17):
    P2 = ld P;
    check L140() else D45();
  D45():
    deopt 164 [r90, l20, dx16, r91, dx17, P2];
  D46():
    deopt 168 [r94, l22, dx20, dx21, r95];
  L139():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L35(r85, l18, dx13, r86, dx19);
  L140():
    P3 = force? P2;
    __5 = ldf `[` in base;
    r96 = dyn __5(dx17, P3);
    goto L35(r90, l20, dx16, r91, r96);
  L141():
    p10 = prom<V +>{
      i22 = ld i2;
      i23 = force? i22;
      checkMissing(i23);
      c37 = `is.object`(i23);
      if c37 then L1() else L2(i23);
    L0(dx23):
      r98 = `+`(dx23, 1);
      return r98;
    L1():
      dr16 = tryDispatchBuiltin.1("[", i23);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(i25):
      P4 = ld P;
      P5 = force? P4;
      __6 = ldf `[` in base;
      r97 = dyn __6(i25, P5);
      goto L0(r97);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx22);
    };
    p11 = prom<V +>{
      nc8 = ld nc;
      nc9 = force? nc8;
      checkMissing(nc9);
      c38 = `is.object`(nc9);
      if c38 then L1() else L2(nc9);
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("[", nc9);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(nc11):
      P6 = ld P;
      P7 = force? P6;
      __7 = ldf `[` in base;
      r100 = dyn __7(nc11, P7);
      goto L0(r100);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    r102 = dyn substr__1(dx21, NULL, p10, p11, r95);
    check L142() else D47();
  D47():
    deopt 172 [r94, l22, dx20, r102];
  L142():
    c39 = `is.object`(dx20);
    if c39 then L143() else L144(r94, l22, dx20);
  L36(r106, l26, dx29):
    c40 = `is.object`(l26);
    if c40 then L147() else L148(r106, l26);
  L143():
    dr20 = tryDispatchBuiltin.0("[<-", dx20, r102);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L145() else L144(r94, l22, dr20);
  L144(r104, l24, dx27):
    P8 = ld P;
    check L146() else D48();
  D48():
    deopt 173 [r104, l24, dx27, r102, P8];
  L37(r111, dx31):
    st x = dx31;
    goto L25(r111);
  L145():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L36(r94, l22, dx28);
  L146():
    P9 = force? P8;
    ___2 = ldf `[<-` in base;
    r107 = dyn ___2(dx27, r102, P9);
    goto L36(r104, l24, r107);
  L147():
    dr22 = tryDispatchBuiltin.0("[<-", l26, dx29);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L149() else L148(r106, dr22);
  L148(r109, l28):
    i26 = ld i0;
    check L150() else D49();
  D49():
    deopt 176 [r109, l28, dx29, i26];
  L149():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L37(r106, dx30);
  L150():
    i27 = force? i26;
    ___3 = ldf `[<-` in base;
    r112 = dyn ___3(l28, dx29, i27);
    goto L37(r109, r112);
  }
}