fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3531894330;
    st `spec.taper` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3531894330(x, p) {
  (reg x:*, reg p:*) -+> V { var x:*, var p:*, reg p_isMissing:L, reg p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg r2:V, reg any:cls, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg p3:*, reg p4:V, reg r6:V, reg any1:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg attributes:cls, reg r12:V, reg as_matrix:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r14:V, reg ncol:cls, reg x5:*, reg x6:V, reg p6:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg p7:*, reg p8:V, reg length:cls, reg r19:V, reg r20:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg rep:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg p9:*, reg p10:V, reg length1:cls, reg r27:V, reg nc:*, reg nc1:V, reg r28:V, reg c11:L, reg stop1:cls, reg r29:V, reg nrow:cls, reg x7:*, reg x8:V, reg p11:p(V +), reg r31:V, reg nc2:*, reg nc3:V, reg r32:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg i7:I, reg r34:V, reg nr:*, reg nr1:V, reg p12:*, reg p13:V, reg c13:L, reg i9:I, reg nr3:V, reg p15:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg nr5:V, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r35:V, reg r36:V, reg r37:V, reg m:*, reg m1:V, reg r38:V, reg c14:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg i20:I, reg r45:R, reg r46:R, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg i23:I, reg r55:R, reg r56:R, reg r57:R, reg r58:V, reg m2:*, reg m3:V, reg r59:V, reg r60:V, reg seq_int:cls, reg r61:V, reg r62:V, reg m4:*, reg m5:V, reg r63:V, reg r64:V, reg r65:V, reg r66:V, reg r67:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg i26:I, reg r69:V, reg w:*, reg w1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg i29:I, reg r71:V, reg nr6:*, reg nr7:V, reg m6:*, reg m7:V, reg r72:V, reg r73:V, reg rep_len:cls, reg r74:V, reg rev:cls, reg w2:*, reg w3:V, reg p16:p(V +), reg r76:V, reg c15:cls, reg r77:V, reg x10:*, reg x11:V, reg c16:L, reg i31:I, reg r79:V, reg x13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i33:I, reg r81:V, reg dx3:V, reg i34:*, reg i35:V, reg __1:cls, reg r82:V, reg r83:V, reg l1:*, reg c17:L, reg i37:I, reg r85:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i39:I, reg dx5:V, reg i40:*, reg i41:V, reg ___:cls, reg r88:V, reg a:*, reg a1:V, reg l4:*, reg attributes__:cls, reg r89:V, reg x14:*, reg x15:V |
    mkenv;
    st x = x;
    p_isMissing = missing.0(p);
    if p_isMissing then L0(0.1) else L0(p);
  L0(p_orDefault):
    st p = p_orDefault;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L29();
  L25():
    p1 = ld p;
    check L27() else D0();
  L26():
    r = dyn base(<lang `<`(p, 0.0)>);
    goto L1(r);
  D0():
    deopt 2 [p1];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L35() else L4();
  L27():
    p2 = force? p1;
    checkMissing(p2);
    r2 = `<`(p2, 0.0);
    any = ldf any in base;
    r3 = dyn any(r2);
    check L28() else D1();
  L29():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D1():
    deopt 7 [r3];
  L3(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    sym2 = ldf attributes;
    base2 = ldf attributes in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L28():
    goto L1(r3);
  L30():
    p3 = ld p;
    check L32() else D2();
  L31():
    r4 = dyn base1(<lang `>`(p, 0.5)>);
    goto L3(c, r4);
  L35():
    stop = ldf stop;
    check L36() else D4();
  D2():
    deopt 10 [c, p3];
  D4():
    deopt 18 [];
  L6(r11):
    st a = r11;
    as_matrix = ldf `as.matrix`;
    check L43() else D8();
  L32():
    p4 = force? p3;
    checkMissing(p4);
    r6 = `>`(p4, 0.5);
    any1 = ldf any in base;
    r7 = dyn any1(r6);
    check L33() else D3();
  L36():
    r8 = dyn stop("'p' must be between 0 and 0.5");
    check L37() else D5();
  L39():
    x1 = ld x;
    check L41() else D6();
  L40():
    r10 = dyn base2(<sym x>);
    goto L6(r10);
  D3():
    deopt 15 [c, r7];
  D5():
    deopt 20 [r8];
  D6():
    deopt 25 [x1];
  D8():
    deopt 31 [];
  L33():
    goto L3(c, r7);
  L37():
    goto L5();
  L41():
    x2 = force? x1;
    checkMissing(x2);
    attributes = ldf attributes in base;
    r12 = dyn attributes(x2);
    check L42() else D7();
  L43():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r14 = dyn as_matrix(p5);
    check L44() else D9();
  D7():
    deopt 28 [r12];
  D9():
    deopt 33 [r14];
  L42():
    goto L6(r12);
  L44():
    st x = r14;
    ncol = ldf ncol;
    check L45() else D10();
  D10():
    deopt 36 [];
  L45():
    p6 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r16 = dyn ncol(p6);
    check L46() else D11();
  D11():
    deopt 38 [r16];
  L46():
    st nc = r16;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L7(r18):
    r20 = `==`(r18, 1);
    c10 = `as.logical`(r20);
    if c10 then L51() else L8();
  L47():
    p7 = ld p;
    check L49() else D12();
  L48():
    r17 = dyn base3(<sym p>);
    goto L7(r17);
  D12():
    deopt 42 [p7];
  L8():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L10():
    nrow = ldf nrow;
    check L64() else D19();
  L49():
    p8 = force? p7;
    checkMissing(p8);
    length = ldf length in base;
    r19 = dyn length(p8);
    check L50() else D13();
  L51():
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D13():
    deopt 45 [r19];
  D19():
    deopt 67 [];
  L9(r22):
    st p = r22;
    goto L10();
  L11(r26):
    nc = ld nc;
    check L59() else D16();
  L50():
    goto L7(r19);
  L52():
    rep = ldf rep in base;
    r23 = dyn rep(<sym p>, <sym nc>);
    goto L9(r23);
  L53():
    r21 = dyn base4(<sym p>, <sym nc>);
    goto L9(r21);
  L55():
    p9 = ld p;
    check L57() else D14();
  L56():
    r25 = dyn base5(<sym p>);
    goto L11(r25);
  L64():
    p11 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r31 = dyn nrow(p11);
    check L65() else D20();
  D14():
    deopt 54 [p9];
  D16():
    deopt 57 [r26, nc];
  D20():
    deopt 69 [r31];
  L57():
    p10 = force? p9;
    checkMissing(p10);
    length1 = ldf length in base;
    r27 = dyn length1(p10);
    check L58() else D15();
  L59():
    nc1 = force? nc;
    checkMissing(nc1);
    r28 = `!=`(r26, nc1);
    c11 = `as.logical`(r28);
    if c11 then L60() else L12();
  L65():
    st nr = r31;
    nc2 = ld nc;
    check L66() else D21();
  D15():
    deopt 57 [r27];
  D21():
    deopt 72 [1, nc2];
  L12():
    goto L10();
  L58():
    goto L11(r27);
  L60():
    stop1 = ldf stop;
    check L61() else D17();
  L66():
    nc3 = force? nc2;
    checkMissing(nc3);
    r32 = `:`(1, nc3);
    s = toForSeq(r32);
    l = length(s);
    i = 0;
    goto L13(i);
  D17():
    deopt 61 [];
  L13(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L67() else L24();
  L61():
    r29 = dyn stop1("length of 'p' must be 1 or equal the number of columns of 'x'");
    check L62() else D18();
  D18():
    deopt 63 [r29];
  L24():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    sym6 = ldf floor;
    base6 = ldf floor in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L62():
    goto L10();
  L67():
    a = ld a;
    check L107() else D39();
  D39():
    deopt 157 [a];
  L14(i7, r34):
    st m = r34;
    m = ld m;
    check L76() else D25();
  L68():
    nr = ld nr;
    check L70() else D22();
  L69():
    r33 = dyn base6(<lang `*`(nr, `[`(p, i))>);
    goto L14(i2, r33);
  L107():
    a1 = force? a;
    checkMissing(a1);
    l4 = ld x;
    attributes__ = ldf `attributes<-`;
    check L108() else D40();
  D22():
    deopt 76 [i2, nr];
  D25():
    deopt 85 [i7, m];
  D40():
    deopt 160 [a1, l4, a1];
  L70():
    nr1 = force? nr;
    checkMissing(nr1);
    p12 = ld p;
    check L71() else D23();
  L76():
    m1 = force? m;
    checkMissing(m1);
    r38 = `==`(m1, 0.0);
    c14 = `as.logical`(r38);
    if c14 then L77() else L16();
  L108():
    r89 = dyn attributes__(l4, NULL, a1);
    check L109() else D41();
  D23():
    deopt 77 [i2, nr1, p12];
  D41():
    deopt 162 [a1, r89];
  L16():
    sym7 = ldf cos;
    base7 = ldf cos in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L71():
    p13 = force? p12;
    checkMissing(p13);
    c13 = `is.object`(p13);
    if c13 then L72() else L73(i2, nr1, p13);
  L77():
    goto L13(i7);
  L109():
    st x = r89;
    x14 = ld x;
    check L110() else D42();
  D42():
    deopt 164 [x14];
  L15(i11, nr5, dx1):
    r36 = `*`(nr5, dx1);
    r37 = floor(r36);
    goto L14(i11, r37);
  L18(i20, r45, r46, r47):
    r66 = `-`(r46, r47);
    r67 = `*`(r45, r66);
    st w = r67;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L72():
    dr = tryDispatchBuiltin.1("[", p13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(i2, nr1, dr);
  L73(i9, nr3, p15):
    i12 = ld i;
    check L75() else D24();
  L80():
    sym8 = ldf `seq.int`;
    base8 = ldf `seq.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  L81():
    r44 = dyn base7(<lang `/`(`*`(pi, seq.int(1.0, `-`(`*`(2.0, m), 1.0), by=2.0)), `(`(`*`(2.0, m)))>);
    goto L18(i7, 0.5, 1.0, r44);
  L110():
    x15 = force? x14;
    checkMissing(x15);
    popenv;
    return x15;
  D24():
    deopt 79 [i9, nr3, p15, i12];
  L19(i23, r55, r56, r57, r58):
    r62 = `*`(r57, r58);
    m4 = ld m;
    check L86() else D28();
  L20(i26, r69):
    x10 = ld x;
    check L98() else D36();
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(i2, nr1, dx);
  L75():
    i13 = force? i12;
    __ = ldf `[` in base;
    r35 = dyn __(p15, i13);
    goto L15(i9, nr3, r35);
  L82():
    m2 = ld m;
    check L84() else D26();
  L83():
    r54 = dyn base8[, , by](1.0, <lang `-`(`*`(2.0, m), 1.0)>, 2.0);
    goto L19(i7, 0.5, 1.0, 3.141592653589793, r54);
  L87():
    w = ld w;
    check L89() else D29();
  L88():
    r68 = dyn base9(<sym w>, <lang rep_len(1.0, `-`(nr, `*`(2.0, m)))>, <lang rev(w)>);
    goto L20(i20, r68);
  D26():
    deopt 101 [i7, 0.5, 1.0, 3.141592653589793, 2.0, m2];
  D28():
    deopt 111 [i23, r55, r56, r62, 2.0, m4];
  D29():
    deopt 121 [i20, w];
  D36():
    deopt 139 [i26, r69, x10];
  L84():
    m3 = force? m2;
    checkMissing(m3);
    r59 = `*`(2.0, m3);
    r60 = `-`(r59, 1.0);
    seq_int = ldf `seq.int` in base;
    r61 = dyn seq_int(1.0, r60, 2.0);
    check L85() else D27();
  L86():
    m5 = force? m4;
    checkMissing(m5);
    r63 = `*`(2.0, m5);
    r64 = `/`(r62, r63);
    r65 = cos(r64);
    goto L18(i23, r55, r56, r65);
  L89():
    w1 = force? w;
    checkMissing(w1);
    sym10 = ldf rep_len;
    base10 = ldf rep_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L90() else L91();
  L98():
    x11 = force? x10;
    checkMissing(x11);
    c16 = `is.object`(x11);
    if c16 then L99() else L100(i26, r69, x11);
  D27():
    deopt 109 [i7, 0.5, 1.0, 3.141592653589793, r61];
  L21(i29, r71):
    rev = ldf rev;
    check L95() else D33();
  L22(i33, r81, dx3):
    r83 = `*`(r81, dx3);
    l1 = ld x;
    c17 = `is.object`(l1);
    if c17 then L103() else L104(i33, r83, l1);
  L85():
    goto L19(i7, 0.5, 1.0, 3.141592653589793, r61);
  L90():
    nr6 = ld nr;
    check L92() else D30();
  L91():
    r70 = dyn base10(1.0, <lang `-`(nr, `*`(2.0, m))>);
    goto L21(i20, r70);
  L99():
    dr2 = tryDispatchBuiltin.1("[", x11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L101() else L100(i26, r69, dr2);
  L100(i31, r79, x13):
    i34 = ld i;
    check L102() else D37();
  D30():
    deopt 126 [i20, nr6];
  D33():
    deopt 135 [i29];
  D37():
    deopt 142 [i31, r79, x13, i34];
  L23(i39, dx5):
    st x = dx5;
    goto L13(i39);
  L92():
    nr7 = force? nr6;
    checkMissing(nr7);
    m6 = ld m;
    check L93() else D31();
  L95():
    p16 = prom<V +>{
      w2 = ld w;
      w3 = force? w2;
      checkMissing(w3);
      return w3;
    };
    r76 = dyn rev(p16);
    check L96() else D34();
  L101():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(i26, r69, dx2);
  L102():
    i35 = force? i34;
    __1 = ldf `[` in base;
    r82 = dyn __1(x11, <missing>, i35);
    goto L22(i31, r79, r82);
  L103():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r83);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(i33, r83, dr4);
  L104(i37, r85, l3):
    i40 = ld i;
    check L106() else D38();
  D31():
    deopt 128 [i20, nr7, 2.0, m6];
  D34():
    deopt 137 [i29, r76];
  D38():
    deopt 149 [i37, r85, l3, r83, i40];
  L93():
    m7 = force? m6;
    checkMissing(m7);
    r72 = `*`(2.0, m7);
    r73 = `-`(nr7, r72);
    rep_len = ldf rep_len in base;
    r74 = dyn rep_len(1.0, r73);
    check L94() else D32();
  L96():
    c15 = ldf c in base;
    r77 = dyn c15(w1, r71, r76);
    check L97() else D35();
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23(i33, dx4);
  L106():
    i41 = force? i40;
    ___ = ldf `[<-` in base;
    r88 = dyn ___(l1, <missing>, i41, r83);
    goto L23(i37, r88);
  D32():
    deopt 133 [i20, r74];
  D35():
    deopt 139 [i29, r77];
  L94():
    goto L21(i20, r74);
  L97():
    goto L20(i29, r77);
  }
}