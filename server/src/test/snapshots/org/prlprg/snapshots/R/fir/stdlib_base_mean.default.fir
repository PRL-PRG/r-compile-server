fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner763186257;
    st `mean.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner763186257(x, trim, `na.rm`, `...`) {
  (reg x:*, reg trim:*, reg na_rm:*, reg ddd:dots) -+> V { var x:*, var trim:*, reg trim_isMissing:L, reg trim_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg c6:L, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c15:L, reg r8:V, reg x5:*, reg x6:V, reg c16:L, reg r9:V, reg c17:L, reg c18:V, reg c20:L, reg warning:cls, reg r10:V, reg isTRUE:cls, reg na_rm1:*, reg na_rm2:V, reg p:p(V +), reg r14:V, reg c21:L, reg x7:*, reg x8:V, reg c22:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg x13:V, reg r16:V, reg x14:*, reg x15:V, reg is_na:cls, reg r17:V, reg r18:V, reg __:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg trim1:*, reg trim2:V, reg is_numeric1:cls, reg r22:V, reg r23:V, reg c23:L, reg c24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c28:L, reg r25:V, reg trim3:*, reg trim4:V, reg length:cls, reg r26:V, reg r27:V, reg c29:L, reg c30:V, reg c32:L, reg stop:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg x16:*, reg x17:V, reg length1:cls, reg r32:V, reg trim5:*, reg trim6:V, reg r33:V, reg c33:L, reg c35:V, reg n:*, reg n1:V, reg c36:L, reg c37:V, reg c39:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg x18:*, reg x19:V, reg c40:L, reg c41:L, reg stop1:cls, reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg x20:*, reg x21:V, reg anyNA:cls, reg r40:V, reg c42:L, reg trim7:*, reg trim8:V, reg r43:V, reg c43:L, reg __1:cls, reg r44:V, reg r45:cls, reg x22:*, reg x23:V, reg p1:p(V +), reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg n2:*, reg n3:V, reg trim9:*, reg trim10:V, reg r52:V, reg r53:V, reg r54:V, reg n4:*, reg n5:V, reg r55:V, reg lo:*, reg lo1:V, reg r56:V, reg sort_int:cls, reg x24:*, reg x25:V, reg p2:p(V +), reg unique:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg lo2:*, reg lo3:V, reg hi:*, reg hi1:V, reg c44:cls, reg r60:V, reg p3:p(V +), reg r62:V, reg p4:p(V +), reg r64:V, reg c45:L, reg r66:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg lo4:*, reg lo5:V, reg hi2:*, reg hi3:V, reg r67:V, reg __2:cls, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg x26:*, reg x27:V, reg mean:cls, reg r71:V |
    mkenv;
    st x = x;
    trim_isMissing = missing.0(trim);
    if trim_isMissing then L0(0.0) else L0(trim);
  L0(trim_orDefault):
    st trim = trim_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L1(FALSE) else L1(na_rm);
  L1(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    st `...` = ddd;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L37() else L3(c);
  L33():
    x1 = ld x;
    check L35() else D0();
  L34():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L42() else L5(c10);
  L35():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L36() else D1();
  L37():
    sym1 = ldf `is.complex`;
    base1 = ldf `is.complex` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  D1():
    deopt 5 [r2];
  L4(c5, r5):
    r6 = `!`(r5);
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5(c12):
    c20 = `as.logical`(c12);
    if c20 then L47() else L7();
  L36():
    goto L2(r2);
  L38():
    x3 = ld x;
    check L40() else D2();
  L39():
    r4 = dyn base1(<sym x>);
    goto L4(c, r4);
  L42():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D2():
    deopt 8 [c, x3];
  L6(c15, r8):
    r9 = `!`(r8);
    c17 = `as.logical`(r9);
    c18 = `&&`(c15, c17);
    goto L5(c18);
  L7():
    isTRUE = ldf isTRUE;
    check L52() else D6();
  L40():
    x4 = force? x3;
    checkMissing(x4);
    c6 = `is.complex`(x4);
    goto L4(c, c6);
  L43():
    x5 = ld x;
    check L45() else D3();
  L44():
    r7 = dyn base2(<sym x>);
    goto L6(c10, r7);
  L47():
    warning = ldf warning;
    check L48() else D4();
  D3():
    deopt 14 [c10, x5];
  D4():
    deopt 20 [];
  D6():
    deopt 29 [];
  L45():
    x6 = force? x5;
    checkMissing(x6);
    c16 = `is.logical`(x6);
    goto L6(c10, c16);
  L48():
    r10 = dyn warning("argument is not numeric or logical: returning NA");
    check L49() else D5();
  L52():
    p = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r14 = dyn isTRUE(p);
    check L53() else D7();
  D5():
    deopt 22 [r10];
  D7():
    deopt 31 [r14];
  L49():
    popenv;
    return NA_REAL;
  L53():
    c21 = `as.logical`(r14);
    if c21 then L54() else L9();
  L9():
    goto L12();
  L12():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L54():
    x7 = ld x;
    check L55() else D8();
  D8():
    deopt 32 [x7];
  L13(r21):
    r23 = `!`(r21);
    c23 = `as.logical`(r23);
    if c23 then L14(c23) else L68();
  L55():
    x8 = force? x7;
    checkMissing(x8);
    c22 = `is.object`(x8);
    if c22 then L56() else L57(x8);
  L64():
    trim1 = ld trim;
    check L66() else D11();
  L65():
    r20 = dyn base4(<sym trim>);
    goto L13(r20);
  D11():
    deopt 47 [trim1];
  L10(dx1):
    st x = dx1;
    goto L12();
  L14(c24):
    c32 = `as.logical`(c24);
    if c32 then L74() else L16();
  L56():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L58() else L57(dr);
  L57(x10):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L66():
    trim2 = force? trim1;
    checkMissing(trim2);
    is_numeric1 = ldf `is.numeric` in base;
    r22 = dyn is_numeric1(trim2);
    check L67() else D12();
  L68():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  D12():
    deopt 50 [r22];
  L11(x13, r16):
    r18 = `!`(r16);
    __ = ldf `[` in base;
    r19 = dyn __(x13, r18);
    goto L10(r19);
  L15(c28, r25):
    r27 = `!=`(r25, 1);
    c29 = `as.logical`(r27);
    c30 = `||`(c28, c29);
    goto L14(c30);
  L16():
    goto L17();
  L17():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L58():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L59():
    x14 = ld x;
    check L61() else D9();
  L60():
    r15 = dyn base3(<sym x>);
    goto L11(x10, r15);
  L67():
    goto L13(r22);
  L69():
    trim3 = ld trim;
    check L71() else D13();
  L70():
    r24 = dyn base5(<sym trim>);
    goto L15(c23, r24);
  L74():
    stop = ldf stop;
    check L75() else D15();
  D9():
    deopt 36 [x10, x14];
  D13():
    deopt 54 [c23, trim3];
  D15():
    deopt 62 [];
  L18(r31):
    st n = r31;
    trim5 = ld trim;
    check L82() else D19();
  L61():
    x15 = force? x14;
    checkMissing(x15);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(x15);
    check L62() else D10();
  L71():
    trim4 = force? trim3;
    checkMissing(trim4);
    length = ldf length in base;
    r26 = dyn length(trim4);
    check L72() else D14();
  L75():
    r28 = dyn stop("'trim' must be numeric of length one");
    check L76() else D16();
  L78():
    x16 = ld x;
    check L80() else D17();
  L79():
    r30 = dyn base6(<sym x>);
    goto L18(r30);
  D10():
    deopt 39 [x10, r17];
  D14():
    deopt 57 [c23, r26];
  D16():
    deopt 64 [r28];
  D17():
    deopt 69 [x16];
  D19():
    deopt 74 [trim5];
  L62():
    goto L11(x10, r17);
  L72():
    goto L15(c23, r26);
  L76():
    goto L17();
  L80():
    x17 = force? x16;
    checkMissing(x17);
    length1 = ldf length in base;
    r32 = dyn length1(x17);
    check L81() else D18();
  L82():
    trim6 = force? trim5;
    checkMissing(trim6);
    r33 = `>`(trim6, 0.0);
    c33 = `as.logical`(r33);
    if c33 then L83() else L19(c33);
  D18():
    deopt 72 [r32];
  L19(c35):
    c39 = `as.logical`(c35);
    if c39 then L86() else L20();
  L81():
    goto L18(r32);
  L83():
    n = ld n;
    check L84() else D20();
  D20():
    deopt 78 [c33, n];
  L20():
    goto L31();
  L31():
    sym11 = ldf `.Internal`;
    base11 = ldf `.Internal` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L84():
    n1 = force? n;
    checkMissing(n1);
    c36 = `as.logical`(n1);
    c37 = `&&`(c33, c36);
    goto L19(c37);
  L86():
    sym7 = ldf `is.complex`;
    base7 = ldf `is.complex` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L21(r35):
    c41 = `as.logical`(r35);
    if c41 then L90() else L22();
  L32(r70):
    popenv;
    return r70;
  L87():
    x18 = ld x;
    check L89() else D21();
  L88():
    r34 = dyn base7(<sym x>);
    goto L21(r34);
  L122():
    x26 = ld x;
    check L124() else D38();
  L123():
    r69 = dyn base11(<lang mean(x)>);
    goto L32(r69);
  D21():
    deopt 82 [x18];
  D38():
    deopt 151 [x26];
  L22():
    goto L23();
  L23():
    sym8 = ldf anyNA;
    base8 = ldf anyNA in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L89():
    x19 = force? x18;
    checkMissing(x19);
    c40 = `is.complex`(x19);
    goto L21(c40);
  L90():
    stop1 = ldf stop;
    check L91() else D22();
  L124():
    x27 = force? x26;
    checkMissing(x27);
    mean = ldf mean in base;
    r71 = dyn mean(x27);
    check L125() else D39();
  D22():
    deopt 86 [];
  D39():
    deopt 154 [r71];
  L24(r39):
    c42 = `as.logical`(r39);
    if c42 then L98() else L25();
  L91():
    r36 = dyn stop1("trimmed means are not defined for complex data");
    check L92() else D23();
  L94():
    x20 = ld x;
    check L96() else D24();
  L95():
    r38 = dyn base8(<sym x>);
    goto L24(r38);
  L125():
    goto L32(r71);
  D23():
    deopt 88 [r36];
  D24():
    deopt 93 [x20];
  L25():
    trim7 = ld trim;
    check L101() else D26();
  L92():
    goto L23();
  L96():
    x21 = force? x20;
    checkMissing(x21);
    anyNA = ldf anyNA in base;
    r40 = dyn anyNA(x21);
    check L97() else D25();
  L98():
    popenv;
    return NA_REAL;
  D25():
    deopt 96 [r40];
  D26():
    deopt 102 [trim7];
  L97():
    goto L24(r40);
  L101():
    trim8 = force? trim7;
    checkMissing(trim8);
    r43 = `>=`(trim8, 0.5);
    c43 = `as.logical`(r43);
    if c43 then L102() else L27();
  L27():
    sym9 = ldf floor;
    base9 = ldf floor in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L102():
    __1 = ldf `::`;
    check L103() else D27();
  D27():
    deopt 107 [];
  L29(r51):
    r54 = `+`(r51, 1.0);
    st lo = r54;
    n4 = ld n;
    check L112() else D32();
  L103():
    r44 = dyn __1("stats", "median");
    check L104() else D28();
  L108():
    n2 = ld n;
    check L110() else D30();
  L109():
    r50 = dyn base9(<lang `*`(n, trim)>);
    goto L29(r50);
  D28():
    deopt 110 [r44];
  D30():
    deopt 120 [n2];
  D32():
    deopt 128 [n4];
  L104():
    checkFun.0(r44);
    r45 = r44 as cls;
    p1 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r47 = dyn r45[, `na.rm`](p1, FALSE);
    check L105() else D29();
  L110():
    n3 = force? n2;
    checkMissing(n3);
    trim9 = ld trim;
    check L111() else D31();
  L112():
    n5 = force? n4;
    checkMissing(n5);
    r55 = `+`(n5, 1.0);
    lo = ld lo;
    check L113() else D33();
  D29():
    deopt 115 [r47];
  D31():
    deopt 121 [n3, trim9];
  D33():
    deopt 131 [r55, lo];
  L105():
    popenv;
    return r47;
  L111():
    trim10 = force? trim9;
    checkMissing(trim10);
    r52 = `*`(n3, trim10);
    r53 = floor(r52);
    goto L29(r53);
  L113():
    lo1 = force? lo;
    checkMissing(lo1);
    r56 = `-`(r55, lo1);
    st hi = r56;
    sort_int = ldf `sort.int`;
    check L114() else D34();
  D34():
    deopt 136 [];
  L114():
    p2 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    p4 = prom<V +>{
      unique = ldf unique;
      p3 = prom<V +>{
        sym10 = ldf c;
        base10 = ldf c in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r59):
        return r59;
      L1():
        lo2 = ld lo;
        lo3 = force? lo2;
        checkMissing(lo3);
        hi = ld hi;
        hi1 = force? hi;
        checkMissing(hi1);
        c44 = ldf c in base;
        r60 = dyn c44(lo3, hi1);
        goto L0(r60);
      L2():
        r58 = dyn base10(<sym lo>, <sym hi>);
        goto L0(r58);
      };
      r62 = dyn unique(p3);
      return r62;
    };
    r64 = dyn sort_int[, partial](p2, p4);
    check L115() else D35();
  D35():
    deopt 140 [r64];
  L115():
    c45 = `is.object`(r64);
    if c45 then L116() else L117(r64);
  L30(dx4):
    st x = dx4;
    goto L31();
  L116():
    dr2 = tryDispatchBuiltin.1("[", r64);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L118() else L117(dr2);
  L117(r66):
    lo4 = ld lo;
    check L119() else D36();
  D36():
    deopt 141 [r66, lo4];
  L118():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx3);
  L119():
    lo5 = force? lo4;
    checkMissing(lo5);
    hi2 = ld hi;
    check L120() else D37();
  D37():
    deopt 142 [r66, lo5, hi2];
  L120():
    hi3 = force? hi2;
    checkMissing(hi3);
    r67 = `:`(lo5, hi3);
    __2 = ldf `[` in base;
    r68 = dyn __2(r66, r67);
    goto L30(r68);
  }
}