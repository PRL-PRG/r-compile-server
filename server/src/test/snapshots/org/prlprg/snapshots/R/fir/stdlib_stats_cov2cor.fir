fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4209080914;
    st cov2cor = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4209080914(V) {
  (reg V:*) -+> V { var V:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg V1:*, reg V2:V, reg dim:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg V3:*, reg V4:V, reg is_numeric:cls, reg r8:V, reg r9:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg d:*, reg d1:V, reg length:cls, reg r12:V, reg r13:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg p:*, reg p1:V, reg d2:*, reg d3:V, reg c13:L, reg c15:L, reg p3:V, reg d5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c17:L, reg p5:V, reg dx3:V, reg __1:cls, reg r14:V, reg r15:V, reg c18:L, reg c19:V, reg c21:L, reg stop:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg diag:cls, reg V5:*, reg V6:V, reg p6:p(V +), reg r21:V, reg is_na:cls, reg r22:V, reg r23:V, reg D:*, reg D1:V, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg D2:*, reg D3:V, reg c22:L, reg r29:R, reg D5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r31:R, reg dx5:V, reg pos:*, reg pos1:V, reg __2:cls, reg r32:V, reg r33:V, reg r34:V, reg l:*, reg c23:L, reg r36:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r39:V, reg l3:*, reg c24:L, reg r41:R, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos4:*, reg pos5:V, reg r44:V, reg ___1:cls, reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg pos6:*, reg pos7:V, reg r48:V, reg any:cls, reg r49:V, reg c25:L, reg c26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg c30:L, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg c33:L, reg r53:V, reg Is:*, reg Is1:V, reg is_finite:cls, reg r54:V, reg r55:V, reg any1:cls, reg r56:V, reg c34:L, reg c35:V, reg c37:L, reg warning:cls, reg r57:V, reg V7:*, reg V8:V, reg Is2:*, reg Is3:V, reg V9:*, reg V10:V, reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg r64:V, reg rep:cls, reg r65:V, reg r66:V, reg l6:*, reg c38:L, reg r68:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ___2:cls, reg r71:V, reg p7:*, reg p8:V, reg c39:L, reg l9:*, reg c40:L, reg r73:R, reg l11:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r75:R, reg dx13:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r80:V, reg r81:R, reg l14:*, reg r82:R, reg r83:V, reg p9:*, reg p10:V, reg r84:V, reg p11:*, reg p12:V, reg seq_int:cls, reg r85:V, reg ___3:cls, reg r86:V, reg r88:*, reg r89:V |
    mkenv;
    st V = V;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    st d = r1;
    c = `is.object`(r1);
    if c then L30() else L31(r1);
  L26():
    V1 = ld V;
    check L28() else D0();
  L27():
    r = dyn base(<sym V>);
    goto L0(r);
  D0():
    deopt 2 [V1];
  L1(dx1):
    st p = dx1;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L28():
    V2 = force? V1;
    checkMissing(V2);
    dim = ldf dim in base;
    r2 = dyn dim(V2);
    check L29() else D1();
  L30():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L2(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L3(c1) else L37();
  L29():
    goto L0(r2);
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L33():
    V3 = ld V;
    check L35() else D2();
  L34():
    r6 = dyn base1(<sym V>);
    goto L2(r6);
  D2():
    deopt 13 [V3];
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L5(c10) else L43();
  L35():
    V4 = force? V3;
    checkMissing(V4);
    is_numeric = ldf `is.numeric` in base;
    r8 = dyn is_numeric(V4);
    check L36() else D3();
  L37():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D3():
    deopt 16 [r8];
  L4(c6, r11):
    r13 = `!=`(r11, 2);
    c7 = `as.logical`(r13);
    c8 = `||`(c6, c7);
    goto L3(c8);
  L5(c11):
    c21 = `as.logical`(c11);
    if c21 then L50() else L7();
  L36():
    goto L2(r8);
  L38():
    d = ld d;
    check L40() else D4();
  L39():
    r10 = dyn base2(<sym d>);
    goto L4(c1, r10);
  L43():
    p = ld p;
    check L44() else D6();
  D4():
    deopt 20 [c1, d];
  D6():
    deopt 27 [c10, p];
  L7():
    goto L8();
  L8():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L40():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r12 = dyn length(d1);
    check L41() else D5();
  L44():
    p1 = force? p;
    checkMissing(p1);
    d2 = ld d;
    check L45() else D7();
  L50():
    stop = ldf stop;
    check L51() else D8();
  D5():
    deopt 23 [c1, r12];
  D7():
    deopt 28 [c10, p1, d2];
  D8():
    deopt 36 [];
  L9(r19):
    r23 = `!`(r19);
    D = ld D;
    check L59() else D13();
  L41():
    goto L4(c1, r12);
  L45():
    d3 = force? d2;
    checkMissing(d3);
    c13 = `is.object`(d3);
    if c13 then L46() else L47(c10, p1, d3);
  L51():
    r16 = dyn stop("'V' is not a square numeric matrix");
    check L52() else D9();
  L54():
    diag = ldf diag;
    check L56() else D10();
  L55():
    r18 = dyn base3(<lang `<-`(Is, `<-`(D, diag(V, names=FALSE)))>);
    goto L9(r18);
  D9():
    deopt 38 [r16];
  D10():
    deopt 44 [];
  D13():
    deopt 53 [r23, D];
  L6(c17, p5, dx3):
    r15 = `!=`(p5, dx3);
    c18 = `as.logical`(r15);
    c19 = `||`(c17, c18);
    goto L5(c19);
  L46():
    dr2 = tryDispatchBuiltin.1("[", d3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(c10, p1, dr2);
  L47(c15, p3, d5):
    __1 = ldf `[` in base;
    r14 = dyn __1(d5, 2);
    goto L6(c15, p3, r14);
  L52():
    goto L8();
  L56():
    p6 = prom<V +>{
      V5 = ld V;
      V6 = force? V5;
      checkMissing(V6);
      return V6;
    };
    r21 = dyn diag[, names](p6, FALSE);
    check L57() else D11();
  L59():
    D1 = force? D;
    checkMissing(D1);
    r24 = `>`(D1, 0.0);
    r25 = `&&`(r23, r24);
    st pos = r25;
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  D11():
    deopt 48 [r21];
  L10(r27):
    l = ld Is;
    c23 = `is.object`(l);
    if c23 then L67() else L68(r27, l);
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(c10, p1, dx2);
  L57():
    st D = r21;
    st Is = r21;
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(r21);
    check L58() else D12();
  L60():
    D2 = ld D;
    check L62() else D14();
  L61():
    r26 = dyn base4(<lang `/`(1.0, `[`(D, pos))>);
    goto L10(r26);
  D12():
    deopt 52 [r22];
  D14():
    deopt 61 [1.0, D2];
  L12(dx7):
    st Is = dx7;
    l3 = ld Is;
    c24 = `is.object`(l3);
    if c24 then L71() else L72(NA_REAL, l3);
  L58():
    goto L9(r22);
  L62():
    D3 = force? D2;
    checkMissing(D3);
    c22 = `is.object`(D3);
    if c22 then L63() else L64(1.0, D3);
  L67():
    dr6 = tryDispatchBuiltin.0("[<-", l, r27);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L69() else L68(r27, dr6);
  L68(r36, l2):
    pos2 = ld pos;
    check L70() else D16();
  D16():
    deopt 69 [r36, l2, r27, pos2];
  L11(r31, dx5):
    r33 = `/`(r31, dx5);
    r34 = sqrt(r33);
    goto L10(r34);
  L13(dx9):
    st Is = dx9;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L63():
    dr4 = tryDispatchBuiltin.1("[", D3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(1.0, dr4);
  L64(r29, D5):
    pos = ld pos;
    check L66() else D15();
  L69():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L70():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r39 = dyn ___(l2, r27, pos3);
    goto L12(r39);
  L71():
    dr8 = tryDispatchBuiltin.0("[<-", l3, NA_REAL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L73() else L72(NA_REAL, dr8);
  L72(r41, l5):
    pos4 = ld pos;
    check L74() else D17();
  D15():
    deopt 63 [r29, D5, pos];
  D17():
    deopt 76 [r41, l5, NA_REAL, pos4];
  L14(r47):
    c25 = `as.logical`(r47);
    if c25 then L15(c25) else L79();
  L65():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(1.0, dx4);
  L66():
    pos1 = force? pos;
    __2 = ldf `[` in base;
    r32 = dyn __2(D5, pos1);
    goto L11(r29, r32);
  L73():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L74():
    pos5 = force? pos4;
    checkMissing(pos5);
    r44 = `!`(pos5);
    ___1 = ldf `[<-` in base;
    r45 = dyn ___1(l5, NA_REAL, r44);
    goto L13(r45);
  L75():
    pos6 = ld pos;
    check L77() else D18();
  L76():
    r46 = dyn base5(<lang `!`(pos)>);
    goto L14(r46);
  D18():
    deopt 83 [pos6];
  L15(c26):
    c37 = `as.logical`(c26);
    if c37 then L88() else L18();
  L77():
    pos7 = force? pos6;
    checkMissing(pos7);
    r48 = `!`(pos7);
    any = ldf any in base;
    r49 = dyn any(r48);
    check L78() else D19();
  L79():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  D19():
    deopt 87 [r49];
  L16(c30, r51):
    c34 = `as.logical`(r51);
    c35 = `||`(c30, c34);
    goto L15(c35);
  L18():
    goto L19();
  L19():
    V7 = ld V;
    check L92() else D25();
  L78():
    goto L14(r49);
  L80():
    sym7 = ldf `is.finite`;
    base7 = ldf `is.finite` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  L81():
    r50 = dyn base6(<lang `!`(is.finite(Is))>);
    goto L16(c25, r50);
  L88():
    warning = ldf warning;
    check L89() else D23();
  D23():
    deopt 101 [];
  D25():
    deopt 106 [V7];
  L17(c33, r53):
    r55 = `!`(r53);
    any1 = ldf any in base;
    r56 = dyn any1(r55);
    check L86() else D22();
  L82():
    Is = ld Is;
    check L84() else D20();
  L83():
    r52 = dyn base7(<sym Is>);
    goto L17(c25, r52);
  L89():
    r57 = dyn warning("diag(V) had non-positive or NA entries; the non-finite result may be dubious");
    check L90() else D24();
  L92():
    V8 = force? V7;
    checkMissing(V8);
    st r = V8;
    Is2 = ld Is;
    check L93() else D26();
  D20():
    deopt 92 [c25, Is];
  D22():
    deopt 98 [c33, r56];
  D24():
    deopt 103 [r57];
  D26():
    deopt 109 [Is2];
  L84():
    Is1 = force? Is;
    checkMissing(Is1);
    is_finite = ldf `is.finite` in base;
    r54 = dyn is_finite(Is1);
    check L85() else D21();
  L86():
    goto L16(c33, r56);
  L90():
    goto L19();
  L93():
    Is3 = force? Is2;
    checkMissing(Is3);
    V9 = ld V;
    check L94() else D27();
  D21():
    deopt 95 [c25, r54];
  D27():
    deopt 110 [Is3, V9];
  L85():
    goto L17(c25, r54);
  L94():
    V10 = force? V9;
    checkMissing(V10);
    r59 = `*`(Is3, V10);
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L20(r63, r64):
    r66 = `*`(r63, r64);
    l6 = ld r;
    c38 = `is.object`(l6);
    if c38 then L97() else L98(r66);
  L95():
    rep = ldf rep in base;
    r65 = dyn rep(<sym Is>, <sym p>);
    goto L20(r59, r65);
  L96():
    r62 = dyn base8[, each](<sym Is>, <sym p>);
    goto L20(r59, r62);
  L21(dx11):
    st r = dx11;
    p7 = ld p;
    check L100() else D28();
  L97():
    dr10 = tryDispatchBuiltin.0("[<-", l6, r66);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L99() else L98(r66);
  L98(r68):
    ___2 = ldf `[<-` in base;
    r71 = dyn ___2(l6, <missing>, r66);
    goto L21(r71);
  D28():
    deopt 121 [p7];
  L99():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L21(dx10);
  L100():
    p8 = force? p7;
    checkMissing(p8);
    c39 = `as.logical`(p8);
    if c39 then L101() else L22();
  L22():
    goto L25();
  L25():
    r88 = ld r;
    check L111() else D32();
  L101():
    l9 = ld r;
    c40 = `is.object`(l9);
    if c40 then L102() else L103(1.0, l9);
  D32():
    deopt 144 [r88];
  L23(r75, dx13):
    st r = dx13;
    goto L25();
  L102():
    dr12 = tryDispatchBuiltin.0("[<-", l9, 1.0);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L104() else L103(1.0, dr12);
  L103(r73, l11):
    sym9 = ldf `seq.int`;
    base9 = ldf `seq.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L111():
    r89 = force? r88;
    checkMissing(r89);
    popenv;
    return r89;
  L24(r81, l14, r82, r83):
    ___3 = ldf `[<-` in base;
    r86 = dyn ___3(l14, r82, r83);
    goto L23(r81, r86);
  L104():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(1.0, dx12);
  L105():
    p9 = ld p;
    check L107() else D29();
  L106():
    r80 = dyn base9[from, by, `length.out`](1, <lang `+`(p, 1)>, <sym p>);
    goto L24(r73, l11, 1.0, r80);
  D29():
    deopt 130 [r73, l11, 1.0, p9];
  L107():
    p10 = force? p9;
    checkMissing(p10);
    r84 = `+`(p10, 1);
    p11 = ld p;
    check L108() else D30();
  D30():
    deopt 135 [r73, l11, 1.0, p11];
  L108():
    p12 = force? p11;
    checkMissing(p12);
    seq_int = ldf `seq.int` in base;
    r85 = dyn seq_int(1, r84, p12);
    check L109() else D31();
  D31():
    deopt 139 [r73, l11, 1.0, r85];
  L109():
    goto L24(r73, l11, 1.0, r85);
  }
}