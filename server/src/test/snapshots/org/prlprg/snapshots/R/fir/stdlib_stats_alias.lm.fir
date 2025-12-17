fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3794238041;
    st `alias.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3794238041(object, complete, partial, `partial.pattern`, `...`) {
  (reg object:*, reg complete:*, reg partial:*, reg partial_pattern:*, reg ddd:dots) -+> V { var object:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var partial:*, reg partial_isMissing:L, reg partial_orDefault:*, var `partial.pattern`:*, reg partial_pattern_isMissing:L, reg partial_pattern_orDefault:*, var `...`:dots?, reg r:cls, reg r1:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg l:*, reg attributes__:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg Model:*, reg Model1:V, reg list:cls, reg r6:V, reg qr:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r8:V, reg c1:L, reg r10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg R:*, reg R1:V, reg c2:L, reg R3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:I, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg R9:V, reg r20:I, reg r21:V, reg R10:*, reg R11:V, reg dim:cls, reg r22:V, reg min:cls, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg l1:*, reg c3:L, reg r27:R, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg lower_tri:cls, reg R12:*, reg R13:V, reg p1:p(V +), reg r31:V, reg ___:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg R14:*, reg R15:V, reg dim1:cls, reg r35:V, reg object7:*, reg object8:V, reg c4:L, reg object10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r36:V, reg d:*, reg d1:V, reg c5:L, reg d3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r37:V, reg complete1:*, reg complete2:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg p2:*, reg p3:V, reg c7:V, reg c8:L, reg c9:V, reg rank:*, reg rank1:V, reg p4:*, reg p5:V, reg r40:V, reg c11:L, reg c12:V, reg c14:L, reg r41:V, reg rank2:*, reg rank3:V, reg r42:V, reg R16:*, reg R17:V, reg c15:L, reg R19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg p6:*, reg p7:V, reg p8:*, reg p9:V, reg __2:cls, reg r43:V, reg R20:*, reg R21:V, reg c16:L, reg R23:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg p10:*, reg p11:V, reg p12:*, reg p13:V, reg r44:V, reg __3:cls, reg r45:V, reg as_matrix:cls, reg qr_coef:cls, reg qr1:cls, reg X:*, reg X1:V, reg p14:p(V +), reg r47:V, reg p15:p(V +), reg Y:*, reg Y1:V, reg p16:p(V +), reg r50:V, reg p17:p(V +), reg r52:V, reg CompPatt:cls, reg t:cls, reg beta12:*, reg beta13:V, reg p18:p(V +), reg r54:V, reg p19:p(V +), reg r56:V, reg l4:*, reg c17:L, reg r58:V, reg l6:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r60:V, reg dx17:V, reg r61:V, reg partial1:*, reg partial2:V, reg c18:L, reg suppressWarnings:cls, reg summary_lm:cls, reg object11:*, reg object12:V, reg p20:p(V +), reg r64:V, reg c19:L, reg r66:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r67:V, reg p21:p(V +), reg r69:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r70:V, reg r71:V, reg diag:cls, reg tmp:*, reg tmp1:V, reg p22:p(V +), reg r73:V, reg r74:V, reg tmp2:*, reg tmp3:V, reg outer:cls, reg ses:*, reg ses1:V, reg p23:p(V +), reg ses2:*, reg ses3:V, reg p24:p(V +), reg r77:V, reg r78:V, reg l7:*, reg c20:L, reg r80:R, reg l9:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg row:cls, reg beta14:*, reg beta15:V, reg p25:p(V +), reg r84:V, reg col:cls, reg beta16:*, reg beta17:V, reg p26:p(V +), reg r86:V, reg r87:V, reg ___1:cls, reg r88:V, reg l10:*, reg c21:L, reg r90:R, reg l12:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r97:V, reg r98:R, reg l15:*, reg r99:R, reg r100:V, reg beta18:*, reg beta19:V, reg abs:cls, reg r101:V, reg r102:V, reg ___2:cls, reg r103:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r104:V, reg r105:V, reg beta20:*, reg beta21:V, reg r106:V, reg all:cls, reg r107:V, reg c22:L, reg partial_pattern1:*, reg partial_pattern2:V, reg c23:L, reg PartPatt:cls, reg beta22:*, reg beta23:V, reg p27:p(V +), reg r110:V, reg beta24:*, reg beta25:V, reg l16:*, reg c24:L, reg beta27:V, reg l18:*, reg dr24:V, reg dc12:L, reg dx24:V, reg beta29:V, reg dx25:V, reg r111:V, reg l19:*, reg class__:cls, reg r112:V, reg value:*, reg value1:V |
    mkenv;
    st object = object;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(TRUE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    partial_isMissing = missing.0(partial);
    if partial_isMissing then L1(FALSE) else L1(partial);
  L1(partial_orDefault):
    st partial = partial_orDefault;
    partial_pattern_isMissing = missing.0(partial_pattern);
    if partial_pattern_isMissing then L2(FALSE) else L2(partial_pattern);
  L2(partial_pattern_orDefault):
    st `partial.pattern` = partial_pattern_orDefault;
    st `...` = ddd;
    r = clos inner2044426018;
    st CompPatt = r;
    r1 = clos inner2501545716;
    st PartPatt = r1;
    object1 = ld object;
    check L28() else D0();
  D0():
    deopt 6 [object1];
  L28():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L30() else L31(object2);
  L29(dx1):
    st Model = dx1;
    l = ld Model;
    attributes__ = ldf `attributes<-`;
    check L33() else D1();
  L30():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(object4):
    r2 = `$`(object4, <sym terms>);
    goto L29(r2);
  D1():
    deopt 13 [NULL, l, NULL];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L33():
    r3 = dyn attributes__(l, NULL, NULL);
    check L34() else D2();
  D2():
    deopt 15 [NULL, r3];
  L34():
    st Model = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L3(r5):
    st value = r5;
    qr = ldf qr;
    check L39() else D5();
  L35():
    Model = ld Model;
    check L37() else D3();
  L36():
    r4 = dyn base[Model](<sym Model>);
    goto L3(r4);
  D3():
    deopt 19 [Model];
  D5():
    deopt 26 [];
  L37():
    Model1 = force? Model;
    checkMissing(Model1);
    list = ldf list in base;
    r6 = dyn list(Model1);
    check L38() else D4();
  L39():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r8 = dyn qr(p);
    check L40() else D6();
  D4():
    deopt 23 [r6];
  D6():
    deopt 28 [r8];
  L38():
    goto L3(r6);
  L40():
    c1 = `is.object`(r8);
    if c1 then L42() else L43(r8);
  L41(dx3):
    st R = dx3;
    R = ld R;
    check L45() else D7();
  L42():
    dr2 = tryDispatchBuiltin.1("$", r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(r10):
    r11 = `$`(r10, <sym qr>);
    goto L41(r11);
  D7():
    deopt 31 [R];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(dx2);
  L45():
    R1 = force? R;
    checkMissing(R1);
    c2 = `is.object`(R1);
    if c2 then L46() else L47(R1);
  L4(dx5):
    st R = dx5;
    l1 = ld R;
    c3 = `is.object`(l1);
    if c3 then L56() else L57(0.0, l1);
  L46():
    dr4 = tryDispatchBuiltin.1("[", R1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dr4);
  L47(R3):
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L5(r15, r16):
    r24 = `:`(r15, r16);
    __ = ldf `[` in base;
    r25 = dyn __(R1, r24, <missing>, FALSE);
    goto L4(r25);
  L7(dx7):
    st R = dx7;
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L49():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L50():
    r14 = dyn base1(<lang dim(R)>);
    goto L5(1, r14);
  L56():
    dr6 = tryDispatchBuiltin.0("[<-", l1, 0.0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(0.0, dr6);
  L57(r27, l3):
    lower_tri = ldf `lower.tri`;
    check L59() else D11();
  D11():
    deopt 55 [r27, l3, 0.0];
  L6(R9, r20, r21):
    min = ldf min in base;
    r23 = dyn min(r21);
    check L55() else D10();
  L8(r34):
    st d = r34;
    object7 = ld object;
    check L65() else D15();
  L51():
    R10 = ld R;
    check L53() else D8();
  L52():
    r19 = dyn base2(<sym R>);
    goto L6(R3, 1, r19);
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx6);
  L59():
    p1 = prom<V +>{
      R12 = ld R;
      R13 = force? R12;
      checkMissing(R13);
      return R13;
    };
    r31 = dyn lower_tri(p1);
    check L60() else D12();
  L61():
    R14 = ld R;
    check L63() else D13();
  L62():
    r33 = dyn base3(<sym R>);
    goto L8(r33);
  D8():
    deopt 38 [R3, 1, R10];
  D10():
    deopt 43 [R9, r20, r23];
  D12():
    deopt 57 [r27, l3, 0.0, r31];
  D13():
    deopt 62 [R14];
  D15():
    deopt 67 [object7];
  L53():
    R11 = force? R10;
    checkMissing(R11);
    dim = ldf dim in base;
    r22 = dyn dim(R11);
    check L54() else D9();
  L55():
    goto L5(r20, r23);
  L60():
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l3, 0.0, r31);
    goto L7(r32);
  L63():
    R15 = force? R14;
    checkMissing(R15);
    dim1 = ldf dim in base;
    r35 = dyn dim1(R15);
    check L64() else D14();
  L65():
    object8 = force? object7;
    checkMissing(object8);
    c4 = `is.object`(object8);
    if c4 then L67() else L68(object8);
  D9():
    deopt 41 [R3, 1, r22];
  D14():
    deopt 65 [r35];
  L54():
    goto L6(R3, 1, r22);
  L64():
    goto L8(r35);
  L66(dx9):
    st rank = dx9;
    d = ld d;
    check L70() else D16();
  L67():
    dr8 = tryDispatchBuiltin.1("$", object8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L69() else L68(dr8);
  L68(object10):
    r36 = `$`(object10, <sym rank>);
    goto L66(r36);
  D16():
    deopt 71 [d];
  L69():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L66(dx8);
  L70():
    d1 = force? d;
    checkMissing(d1);
    c5 = `is.object`(d1);
    if c5 then L71() else L72(d1);
  L9(dx11):
    st p = dx11;
    complete1 = ld complete;
    check L74() else D17();
  L71():
    dr10 = tryDispatchBuiltin.1("[", d1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L73() else L72(dr10);
  L72(d3):
    __1 = ldf `[` in base;
    r37 = dyn __1(d3, 2);
    goto L9(r37);
  D17():
    deopt 77 [complete1];
  L73():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L74():
    complete2 = force? complete1;
    checkMissing(complete2);
    c6 = `as.logical`(complete2);
    if c6 then L75() else L10();
  L10():
    goto L17();
  L17():
    partial1 = ld partial;
    check L107() else D32();
  L75():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  D32():
    deopt 128 [partial1];
  L11(r39):
    c8 = `as.logical`(r39);
    if c8 then L12(c8) else L79();
  L76():
    p2 = ld p;
    check L78() else D18();
  L77():
    r38 = dyn base4(<sym p>);
    goto L11(r38);
  L107():
    partial2 = force? partial1;
    checkMissing(partial2);
    c18 = `as.logical`(partial2);
    if c18 then L108() else L18();
  D18():
    deopt 80 [p2];
  L12(c9):
    c14 = `as.logical`(c9);
    if c14 then L83() else L13();
  L18():
    goto L27();
  L27():
    l19 = ld value;
    class__ = ldf `class<-`;
    check L149() else D52();
  L78():
    p3 = force? p2;
    checkMissing(p3);
    c7 = `==`(p3, NULL);
    goto L11(c7);
  L79():
    rank = ld rank;
    check L80() else D19();
  L108():
    suppressWarnings = ldf suppressWarnings;
    check L109() else D33();
  D19():
    deopt 83 [c8, rank];
  D33():
    deopt 131 [];
  D52():
    deopt 206 ["listof", l19, "listof"];
  L13():
    rank2 = ld rank;
    check L85() else D21();
  L14(r41):
    l4 = ld value;
    c17 = `is.object`(l4);
    if c17 then L103() else L104(r41, l4);
  L80():
    rank1 = force? rank;
    checkMissing(rank1);
    p4 = ld p;
    check L81() else D20();
  L83():
    goto L14(NULL);
  L109():
    p21 = prom<V +>{
      summary_lm = ldf `summary.lm`;
      p20 = prom<V +>{
        object11 = ld object;
        object12 = force? object11;
        checkMissing(object12);
        return object12;
      };
      r64 = dyn summary_lm(p20);
      c19 = `is.object`(r64);
      if c19 then L1() else L2(r64);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", r64);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(r66):
      r67 = `$`(r66, <sym cov.unscaled>);
      goto L0(r67);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r69 = dyn suppressWarnings(p21);
    check L110() else D34();
  L149():
    r112 = dyn class__(l19, NULL, "listof");
    check L150() else D53();
  D20():
    deopt 84 [c8, rank1, p4];
  D21():
    deopt 91 [1, rank2];
  D34():
    deopt 133 [r69];
  D53():
    deopt 208 ["listof", r112];
  L81():
    p5 = force? p4;
    checkMissing(p5);
    r40 = `==`(rank1, p5);
    c11 = `as.logical`(r40);
    c12 = `||`(c8, c11);
    goto L12(c12);
  L85():
    rank3 = force? rank2;
    checkMissing(rank3);
    r42 = `:`(1, rank3);
    st p1 = r42;
    R16 = ld R;
    check L86() else D22();
  L102(r60, dx17):
    st value = dx17;
    goto L17();
  L103():
    dr16 = tryDispatchBuiltin.0("$<-", l4, r41);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L105() else L104(r41, dr16);
  L104(r58, l6):
    r61 = `$<-`(l6, <sym Complete>, r41);
    goto L102(r58, r61);
  L110():
    st tmp = r69;
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L111() else L112();
  L150():
    st value = r112;
    value = ld value;
    check L151() else D54();
  D22():
    deopt 95 [R16];
  D54():
    deopt 210 [value];
  L19(r71):
    st ses = r71;
    tmp2 = ld tmp;
    check L115() else D37();
  L86():
    R17 = force? R16;
    checkMissing(R17);
    c15 = `is.object`(R17);
    if c15 then L87() else L88(R17);
  L105():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L102(r41, dx16);
  L111():
    diag = ldf diag;
    check L113() else D35();
  L112():
    r70 = dyn base5(<lang diag(tmp)>);
    goto L19(r70);
  L151():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D35():
    deopt 137 [];
  D37():
    deopt 142 [tmp2];
  L15(dx13):
    st X = dx13;
    R20 = ld R;
    check L92() else D25();
  L87():
    dr12 = tryDispatchBuiltin.1("[", R17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L89() else L88(dr12);
  L88(R19):
    p6 = ld p1;
    check L90() else D23();
  L113():
    p22 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    r73 = dyn diag(p22);
    check L114() else D36();
  L115():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    outer = ldf outer;
    check L116() else D38();
  D23():
    deopt 97 [R19, p6];
  D25():
    deopt 102 [R20];
  D36():
    deopt 139 [r73];
  D38():
    deopt 144 [tmp3];
  L89():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L15(dx12);
  L90():
    p7 = force? p6;
    p8 = ld p1;
    check L91() else D24();
  L92():
    R21 = force? R20;
    checkMissing(R21);
    c16 = `is.object`(R21);
    if c16 then L93() else L94(R21);
  L114():
    r74 = sqrt(r73);
    goto L19(r74);
  L116():
    p23 = prom<V +>{
      ses = ld ses;
      ses1 = force? ses;
      checkMissing(ses1);
      return ses1;
    };
    p24 = prom<V +>{
      ses2 = ld ses;
      ses3 = force? ses2;
      checkMissing(ses3);
      return ses3;
    };
    r77 = dyn outer(p23, p24);
    check L117() else D39();
  D24():
    deopt 98 [R19, p7, p8];
  D39():
    deopt 147 [tmp3, r77];
  L16(dx15):
    st Y = dx15;
    as_matrix = ldf `as.matrix`;
    check L98() else D28();
  L91():
    p9 = force? p8;
    __2 = ldf `[` in base;
    r43 = dyn __2(R19, p7, p9);
    goto L15(r43);
  L93():
    dr14 = tryDispatchBuiltin.1("[", R21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L95() else L94(dr14);
  L94(R23):
    p10 = ld p1;
    check L96() else D26();
  L117():
    r78 = `/`(tmp3, r77);
    st beta11 = r78;
    l7 = ld beta11;
    c20 = `is.object`(l7);
    if c20 then L118() else L119(0.0, l7);
  D26():
    deopt 104 [R23, p10];
  D28():
    deopt 115 [];
  L20(dx21):
    st beta11 = dx21;
    l10 = ld beta11;
    c21 = `is.object`(l10);
    if c21 then L125() else L126(0.0, l10);
  L95():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx14);
  L96():
    p11 = force? p10;
    p12 = ld p1;
    check L97() else D27();
  L98():
    p17 = prom<V +>{
      qr_coef = ldf `qr.coef`;
      p15 = prom<V +>{
        qr1 = ldf qr;
        p14 = prom<V +>{
          X = ld X;
          X1 = force? X;
          checkMissing(X1);
          return X1;
        };
        r47 = dyn qr1(p14);
        return r47;
      };
      p16 = prom<V +>{
        Y = ld Y;
        Y1 = force? Y;
        checkMissing(Y1);
        return Y1;
      };
      r50 = dyn qr_coef(p15, p16);
      return r50;
    };
    r52 = dyn as_matrix(p17);
    check L99() else D29();
  L118():
    dr20 = tryDispatchBuiltin.0("[<-", l7, 0.0);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L120() else L119(0.0, dr20);
  L119(r80, l9):
    row = ldf row;
    check L121() else D40();
  D27():
    deopt 106 [R23, p12];
  D29():
    deopt 117 [r52];
  D40():
    deopt 154 [r80, l9, 0.0];
  L21(dx23):
    st beta11 = dx23;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L132() else L133();
  L97():
    p13 = force? p12;
    checkMissing(p13);
    r44 = `-`(<missing>, p13);
    __3 = ldf `[` in base;
    r45 = dyn __3(R21, p11, r44, FALSE);
    goto L16(r45);
  L99():
    st beta12 = r52;
    CompPatt = ldf CompPatt;
    check L100() else D30();
  L120():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L20(dx20);
  L121():
    p25 = prom<V +>{
      beta14 = ld beta11;
      beta15 = force? beta14;
      checkMissing(beta15);
      return beta15;
    };
    r84 = dyn row(p25);
    check L122() else D41();
  L125():
    dr22 = tryDispatchBuiltin.0("[<-", l10, 0.0);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L127() else L126(0.0, dr22);
  L126(r90, l12):
    sym6 = ldf abs;
    base6 = ldf abs in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L128() else L129();
  D30():
    deopt 120 [];
  D41():
    deopt 156 [r80, l9, 0.0, r84];
  L22(r98, l15, r99, r100):
    r102 = `<`(r100, 1.0E-6);
    ___2 = ldf `[<-` in base;
    r103 = dyn ___2(l15, r99, r102);
    goto L21(r103);
  L23(r105):
    c22 = `as.logical`(r105);
    if c22 then L136() else L24();
  L100():
    p19 = prom<V +>{
      t = ldf t;
      p18 = prom<V +>{
        beta12 = ld beta12;
        beta13 = force? beta12;
        checkMissing(beta13);
        return beta13;
      };
      r54 = dyn t(p18);
      return r54;
    };
    r56 = dyn CompPatt(p19);
    check L101() else D31();
  L122():
    col = ldf col;
    check L123() else D42();
  L127():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L21(dx22);
  L128():
    beta18 = ld beta11;
    check L130() else D44();
  L129():
    r97 = dyn base6(<sym beta11>);
    goto L22(r90, l12, 0.0, r97);
  L132():
    beta20 = ld beta11;
    check L134() else D46();
  L133():
    r104 = dyn base7(<lang `==`(beta11, 0.0)>);
    goto L23(r104);
  D31():
    deopt 122 [r56];
  D42():
    deopt 157 [r80, l9, 0.0, r84];
  D44():
    deopt 168 [r90, l12, 0.0, beta18];
  D46():
    deopt 178 [beta20];
  L24():
    partial_pattern1 = ld `partial.pattern`;
    check L138() else D48();
  L25():
    beta24 = ld beta11;
    check L143() else D51();
  L101():
    goto L14(r56);
  L123():
    p26 = prom<V +>{
      beta16 = ld beta11;
      beta17 = force? beta16;
      checkMissing(beta17);
      return beta17;
    };
    r86 = dyn col(p26);
    check L124() else D43();
  L130():
    beta19 = force? beta18;
    checkMissing(beta19);
    abs = ldf abs in base;
    r101 = dyn abs(beta19);
    check L131() else D45();
  L134():
    beta21 = force? beta20;
    checkMissing(beta21);
    r106 = `==`(beta21, 0.0);
    all = ldf all in base;
    r107 = dyn all(r106);
    check L135() else D47();
  L136():
    st beta11 = NULL;
    goto L25();
  D43():
    deopt 159 [r80, l9, 0.0, r84, r86];
  D45():
    deopt 171 [r90, l12, 0.0, r101];
  D47():
    deopt 183 [r107];
  D48():
    deopt 187 [partial_pattern1];
  D51():
    deopt 196 [beta24];
  L124():
    r87 = `>=`(r84, r86);
    ___1 = ldf `[<-` in base;
    r88 = dyn ___1(l9, 0.0, r87);
    goto L20(r88);
  L131():
    goto L22(r90, l12, 0.0, r101);
  L135():
    goto L23(r107);
  L138():
    partial_pattern2 = force? partial_pattern1;
    checkMissing(partial_pattern2);
    c23 = `as.logical`(partial_pattern2);
    if c23 then L139() else L26();
  L143():
    beta25 = force? beta24;
    checkMissing(beta25);
    l16 = ld value;
    c24 = `is.object`(l16);
    if c24 then L145() else L146(beta25, l16);
  L26():
    goto L25();
  L139():
    PartPatt = ldf PartPatt;
    check L140() else D49();
  L144(beta29, dx25):
    st value = dx25;
    goto L27();
  L145():
    dr24 = tryDispatchBuiltin.0("$<-", l16, beta25);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L147() else L146(beta25, dr24);
  L146(beta27, l18):
    r111 = `$<-`(l18, <sym Partial>, beta25);
    goto L144(beta27, r111);
  D49():
    deopt 190 [];
  L140():
    p27 = prom<V +>{
      beta22 = ld beta11;
      beta23 = force? beta22;
      checkMissing(beta23);
      return beta23;
    };
    r110 = dyn PartPatt(p27);
    check L141() else D50();
  L147():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L144(beta25, dx24);
  D50():
    deopt 192 [r110];
  L141():
    st beta11 = r110;
    goto L25();
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg l:*, reg c:L, reg r1:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:R, reg l5:*, reg r10:R, reg r11:V, reg x1:*, reg x2:V, reg abs:cls, reg r12:V, reg r13:V, reg ___:cls, reg r14:V, reg __:cls, reg r15:V, reg r16:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    l = ld x;
    c = `is.object`(l);
    if c then L2() else L3(0.0, l);
  L0(dx1):
    st x = dx1;
    __ = ldf `::`;
    check L9() else D2();
  L2():
    dr = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(0.0, dr);
  L3(r1, l2):
    sym = ldf abs;
    base = ldf abs in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  D2():
    deopt 14 [];
  L1(r9, l5, r10, r11):
    r13 = `<`(r11, 1.0E-6);
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l5, r10, r13);
    goto L0(r14);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r8 = dyn base(<sym x>);
    goto L1(r1, l2, 0.0, r8);
  L9():
    r15 = dyn __("MASS", "fractions");
    check L10() else D3();
  D0():
    deopt 5 [r1, l2, 0.0, x1];
  D3():
    deopt 17 [r15];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    abs = ldf abs in base;
    r12 = dyn abs(x2);
    check L8() else D1();
  L10():
    checkFun.0(r15);
    r16 = r15 as cls;
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r18 = dyn r16(p);
    check L11() else D4();
  D1():
    deopt 8 [r1, l2, 0.0, r12];
  D4():
    deopt 20 [r18];
  L8():
    goto L1(r1, l2, 0.0, r12);
  L11():
    popenv;
    return r18;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg zapsmall:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg z:*, reg z1:V, reg any:cls, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg signif:cls, reg r10:V, reg abs:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg unique:cls, reg xx:*, reg xx1:V, reg p1:p(V +), reg r15:V, reg length:cls, reg r16:V, reg ll:*, reg ll1:V, reg r17:V, reg c1:L, reg cut:cls, reg xx2:*, reg xx3:V, reg p2:p(V +), reg r19:V, reg ll2:*, reg ll3:V, reg r21:V, reg c2:L, reg l:*, reg c3:L, reg r23:R, reg dr:V, reg dc:L, reg dx:V, reg r25:R, reg dx1:V, reg ___:cls, reg r26:V, reg paste0:cls, reg ifelse:cls, reg x3:*, reg x4:V, reg c4:L, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg z2:*, reg z3:V, reg __:cls, reg r27:V, reg r28:V, reg p3:p(V +), reg r30:V, reg p4:p(V +), reg xx4:*, reg xx5:V, reg p5:p(V +), reg r33:V, reg l3:*, reg c5:L, reg r35:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r37:V, reg dx5:V, reg z4:*, reg z5:V, reg ___1:cls, reg r38:V, reg l6:*, reg c6:L, reg r41:S, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg z6:*, reg z7:V, reg r44:V, reg ___2:cls, reg r45:V, reg colnames:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r47:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg collabs:*, reg collabs1:V, reg length1:cls, reg r50:V, reg c7:L, reg abbreviate:cls, reg sub:cls, reg collabs2:*, reg collabs3:V, reg p7:p(V +), reg r52:V, reg p8:p(V +), reg r54:V, reg r55:V, reg ncol:cls, reg x9:*, reg x10:V, reg p9:p(V +), reg r57:V, reg r58:V, reg collabs4:*, reg collabs5:V, reg l9:*, reg colnames__:cls, reg r59:V, reg l10:*, reg class__:cls, reg r60:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    zapsmall = ldf zapsmall;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn zapsmall(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    r2 = `!=`(r1, 0.0);
    st z = r2;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r4):
    c = `as.logical`(r4);
    if c then L21() else L1();
  L17():
    z = ld z;
    check L19() else D2();
  L18():
    r3 = dyn base(<sym z>);
    goto L0(r3);
  D2():
    deopt 9 [z];
  L1():
    goto L10();
  L10():
    l6 = ld x;
    c6 = `is.object`(l6);
    if c6 then L50() else L51("", l6);
  L19():
    z1 = force? z;
    checkMissing(z1);
    any = ldf any in base;
    r5 = dyn any(z1);
    check L20() else D3();
  L21():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D3():
    deopt 12 [r5];
  L2(r7):
    st xx = r7;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L11(dx7):
    st x = dx7;
    colnames = ldf colnames;
    check L54() else D16();
  L20():
    goto L0(r5);
  L22():
    sym2 = ldf signif;
    base2 = ldf signif in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L23():
    r6 = dyn base1(<lang signif(`[`(x, z), 2.0)>);
    goto L2(r6);
  L50():
    dr6 = tryDispatchBuiltin.0("[<-", l6, "");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51("", dr6);
  L51(r41, l8):
    z6 = ld z;
    check L53() else D15();
  D15():
    deopt 68 [r41, l8, "", z6];
  D16():
    deopt 74 [];
  L3(r9):
    abs = ldf abs in base;
    r11 = dyn abs(r9);
    check L26() else D4();
  L4(r13):
    st ll = r13;
    ll = ld ll;
    check L32() else D8();
  L24():
    signif = ldf signif in base;
    r10 = dyn signif(<lang `[`(x, z)>, 2.0);
    goto L3(r10);
  L25():
    r8 = dyn base2(<lang `[`(x, z)>, 2.0);
    goto L3(r8);
  L27():
    unique = ldf unique;
    check L29() else D5();
  L28():
    r12 = dyn base3(<lang unique(xx)>);
    goto L4(r12);
  L52():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L53():
    z7 = force? z6;
    checkMissing(z7);
    r44 = `!`(z7);
    ___2 = ldf `[<-` in base;
    r45 = dyn ___2(l8, "", r44);
    goto L11(r45);
  L54():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r47 = dyn colnames(p6);
    check L55() else D17();
  D4():
    deopt 19 [r11];
  D5():
    deopt 24 [];
  D8():
    deopt 30 [ll];
  D17():
    deopt 76 [r47];
  L26():
    goto L2(r11);
  L29():
    p1 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r15 = dyn unique(p1);
    check L30() else D6();
  L32():
    ll1 = force? ll;
    checkMissing(ll1);
    r17 = `>`(ll1, 10);
    c1 = `as.logical`(r17);
    if c1 then L33() else L5();
  L55():
    st collabs = r47;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  D6():
    deopt 26 [r15];
  L5():
    ll2 = ld ll;
    check L37() else D11();
  L6():
    paste0 = ldf paste0;
    check L43() else D12();
  L12(r49):
    c7 = `as.logical`(r49);
    if c7 then L60() else L13();
  L30():
    length = ldf length in base;
    r16 = dyn length(r15);
    check L31() else D7();
  L33():
    cut = ldf cut;
    check L34() else D9();
  L56():
    collabs = ld collabs;
    check L58() else D18();
  L57():
    r48 = dyn base4(<sym collabs>);
    goto L12(r48);
  D7():
    deopt 28 [r16];
  D9():
    deopt 35 [];
  D11():
    deopt 40 [ll2];
  D12():
    deopt 54 [];
  D18():
    deopt 80 [collabs];
  L13():
    ncol = ldf ncol;
    check L64() else D22();
  L14(r55):
    st collabs = r55;
    collabs4 = ld collabs;
    check L66() else D24();
  L31():
    goto L4(r16);
  L34():
    p2 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r19 = dyn cut(p2, 9);
    check L35() else D10();
  L37():
    ll3 = force? ll2;
    checkMissing(ll3);
    r21 = `==`(ll3, 1);
    c2 = `as.logical`(r21);
    if c2 then L38() else L7();
  L43():
    p4 = prom<V +>{
      ifelse = ldf ifelse;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c4 = `is.object`(x4);
        if c4 then L1() else L2(x4);
      L0(dx3):
        r28 = `>`(dx3, 0.0);
        return r28;
      L1():
        dr2 = tryDispatchBuiltin.1("[", x4);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x6):
        z2 = ld z;
        z3 = force? z2;
        __ = ldf `[` in base;
        r27 = dyn __(x6, z3);
        goto L0(r27);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r30 = dyn ifelse(p3, " ", "-");
      return r30;
    };
    p5 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r33 = dyn paste0(p4, p5);
    check L44() else D13();
  L58():
    collabs1 = force? collabs;
    checkMissing(collabs1);
    length1 = ldf length in base;
    r50 = dyn length1(collabs1);
    check L59() else D19();
  L60():
    abbreviate = ldf abbreviate;
    check L61() else D20();
  D10():
    deopt 38 [r19];
  D13():
    deopt 57 [r33];
  D19():
    deopt 83 [r50];
  D20():
    deopt 85 [];
  D22():
    deopt 91 [1];
  D24():
    deopt 96 [collabs4];
  L7():
    goto L6();
  L35():
    st xx = r19;
    goto L6();
  L38():
    l = ld x;
    c3 = `is.object`(l);
    if c3 then L39() else L40(1.0);
  L44():
    l3 = ld x;
    c5 = `is.object`(l3);
    if c5 then L45() else L46(r33, l3);
  L59():
    goto L12(r50);
  L61():
    p8 = prom<V +>{
      sub = ldf sub;
      p7 = prom<V +>{
        collabs2 = ld collabs;
        collabs3 = force? collabs2;
        checkMissing(collabs3);
        return collabs3;
      };
      r52 = dyn sub[, , , fixed](".", "", p7, TRUE);
      return r52;
    };
    r54 = dyn abbreviate(p8, 3);
    check L62() else D21();
  L64():
    p9 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r57 = dyn ncol(p9);
    check L65() else D23();
  L66():
    collabs5 = force? collabs4;
    checkMissing(collabs5);
    l9 = ld x;
    colnames__ = ldf `colnames<-`;
    check L67() else D25();
  D21():
    deopt 88 [r54];
  D23():
    deopt 93 [1, r57];
  D25():
    deopt 99 [collabs5, l9, collabs5];
  L8(r25, dx1):
    st x = dx1;
    goto L6();
  L9(r37, dx5):
    st x = dx5;
    goto L10();
  L39():
    dr = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(1.0);
  L40(r23):
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l, <missing>, 1.0);
    goto L8(r23, r26);
  L45():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r33);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(r33, dr4);
  L46(r35, l5):
    z4 = ld z;
    check L48() else D14();
  L62():
    goto L14(r54);
  L65():
    r58 = `:`(1, r57);
    goto L14(r58);
  L67():
    r59 = dyn colnames__(l9, NULL, collabs5);
    check L68() else D26();
  D14():
    deopt 59 [r35, l5, r33, z4];
  D26():
    deopt 101 [collabs5, r59];
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(1.0, dx);
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(r33, dx4);
  L48():
    z5 = force? z4;
    ___1 = ldf `[<-` in base;
    r38 = dyn ___1(l5, r33, z5);
    goto L9(r35, r38);
  L68():
    st x = r59;
    l10 = ld x;
    class__ = ldf `class<-`;
    check L69() else D27();
  D27():
    deopt 106 ["mtable", l10, "mtable"];
  L69():
    r60 = dyn class__(l10, NULL, "mtable");
    check L70() else D28();
  D28():
    deopt 108 ["mtable", r60];
  L70():
    st x = r60;
    x11 = ld x;
    check L71() else D29();
  D29():
    deopt 110 [x11];
  L71():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  }
}