fun main() {
  () -+> V { reg r:cls, reg Titanic:*, reg Titanic1:V, reg ftable:cls, reg __:cls, reg r1:V, reg p:p(V +), reg Titanic2:*, reg Titanic3:V, reg p1:p(V +), reg r4:V, reg x:*, reg x1:V, reg ftable1:cls, reg __1:cls, reg r5:V, reg p2:p(V +), reg x2:*, reg x3:V, reg p3:p(V +), reg r8:V |
    mkenv;
    r = clos inner4130229875;
    st `ftable.formula` = r;
    Titanic = ld Titanic;
    check L0() else D0();
  D0():
    deopt 3 [Titanic];
  L0():
    Titanic1 = force? Titanic;
    checkMissing(Titanic1);
    ftable = ldf ftable;
    check L1() else D1();
  D1():
    deopt 6 [];
  L1():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym Survived>, <sym .>);
      return r1;
    };
    p1 = prom<V +>{
      Titanic2 = ld Titanic;
      Titanic3 = force? Titanic2;
      checkMissing(Titanic3);
      return Titanic3;
    };
    r4 = dyn ftable[, data](p, p1);
    check L2() else D2();
  D2():
    deopt 10 [r4];
  L2():
    st x = r4;
    x = ld x;
    check L3() else D3();
  D3():
    deopt 12 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    ftable1 = ldf ftable;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p2 = prom<V +>{
      __1 = ldf `~` in base;
      r5 = dyn __1(<sym Sex>, <lang `+`(Class, Age)>);
      return r5;
    };
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r8 = dyn ftable1[, data](p2, p3);
    check L5() else D5();
  D5():
    deopt 19 [r8];
  L5():
    popenv;
    return r8;
  }
}
fun inner4130229875(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg inherits:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg formula3:*, reg formula4:V, reg length:cls, reg r11:V, reg r12:V, reg c10:L, reg stop1:cls, reg r13:V, reg is_data_frame:cls, reg data1:*, reg data2:V, reg p:p(V +), reg r16:V, reg c11:L, reg terms:cls, reg formula5:*, reg formula6:V, reg p1:p(V +), reg data3:*, reg data4:V, reg p2:p(V +), reg r19:V, reg r20:V, reg terms1:cls, reg formula7:*, reg formula8:V, reg p3:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg tt:*, reg tt1:V, reg attr:cls, reg r27:V, reg r28:V, reg any:cls, reg r29:V, reg c12:L, reg stop2:cls, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg terms2:cls, reg formula9:*, reg formula10:V, reg c13:L, reg formula12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r34:V, reg p4:p(V +), reg r36:V, reg attr1:cls, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg terms3:cls, reg formula13:*, reg formula14:V, reg c14:L, reg formula16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r40:V, reg p5:p(V +), reg r42:V, reg attr2:cls, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg rvars:*, reg rvars1:V, reg r46:V, reg any1:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg cvars:*, reg cvars1:V, reg r50:V, reg any2:cls, reg r51:V, reg lhs_has_dot:*, reg lhs_has_dot1:V, reg c15:L, reg c17:V, reg rhs_has_dot:*, reg rhs_has_dot1:V, reg c18:L, reg c19:V, reg c21:L, reg stop3:cls, reg r52:V, reg match_call:cls, reg r54:V, reg eval:cls, reg m:*, reg m1:V, reg c22:L, reg m3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r55:V, reg p6:p(V +), reg parent_frame:cls, reg r57:V, reg p7:p(V +), reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg edata:*, reg edata1:V, reg inherits1:cls, reg r62:V, reg c23:L, reg c24:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg c28:L, reg r64:V, reg edata2:*, reg edata3:V, reg inherits2:cls, reg r65:V, reg c29:L, reg c30:V, reg c32:L, reg c33:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg c37:L, reg r67:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg c40:L, reg r69:V, reg edata4:*, reg edata5:V, reg dim:cls, reg r70:V, reg length1:cls, reg r71:V, reg r72:V, reg c41:L, reg c42:V, reg c44:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg edata6:*, reg edata7:V, reg inherits3:cls, reg r75:V, reg c45:L, reg as_table:cls, reg data5:*, reg data6:V, reg p8:p(V +), reg r77:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r79:V, reg r80:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg r82:V, reg data7:*, reg data8:V, reg dimnames:cls, reg r83:V, reg names:cls, reg r84:V, reg rhs_has_dot2:*, reg rhs_has_dot3:V, reg c46:L, reg pmatch:cls, reg rvars2:*, reg rvars3:V, reg p9:p(V +), reg varnames:*, reg varnames1:V, reg p10:p(V +), reg r88:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg i:*, reg i1:V, reg anyNA:cls, reg r91:V, reg c47:L, reg stop4:cls, reg r92:V, reg i2:*, reg i3:V, reg lhs_has_dot2:*, reg lhs_has_dot3:V, reg c48:L, reg pmatch1:cls, reg cvars2:*, reg cvars3:V, reg p11:p(V +), reg varnames2:*, reg varnames3:V, reg p12:p(V +), reg r97:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r98:V, reg r99:V, reg i4:*, reg i5:V, reg anyNA1:cls, reg r100:V, reg c49:L, reg stop5:cls, reg r101:V, reg i6:*, reg i7:V, reg ftable:cls, reg data9:*, reg data10:V, reg p13:p(V +), reg rvars4:*, reg rvars5:V, reg p14:p(V +), reg cvars4:*, reg cvars5:V, reg p15:p(V +), reg r106:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r107:V, reg r108:V, reg edata8:*, reg edata9:V, reg is_matrix:cls, reg r109:V, reg c50:L, reg as_data_frame:cls, reg data11:*, reg data12:V, reg p16:p(V +), reg r111:V, reg l:*, reg c51:L, reg r113:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r115:V, reg dx7:V, reg r116:V, reg l3:*, reg ___:cls, reg ddd1:dots?, reg r118:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r119:V, reg r120:V, reg data13:*, reg data14:V, reg c52:V, reg r121:V, reg c53:L, reg c55:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r122:V, reg c58:L, reg r123:V, reg data15:*, reg data16:V, reg is_environment:cls, reg r124:V, reg c59:L, reg c60:V, reg c62:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r125:V, reg r126:V, reg data17:*, reg data18:V, reg names1:cls, reg r127:V, reg rhs_has_dot4:*, reg rhs_has_dot5:V, reg c63:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r128:V, reg r129:V, reg varnames4:*, reg varnames5:V, reg r130:I, reg c64:L, reg r132:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg cvars6:*, reg cvars7:V, reg r133:V, reg __2:cls, reg r134:V, reg lhs_has_dot4:*, reg lhs_has_dot5:V, reg c65:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r135:V, reg r136:V, reg varnames6:*, reg varnames7:V, reg r137:I, reg c66:L, reg r139:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg rvars6:*, reg rvars7:V, reg r140:V, reg __3:cls, reg r141:V, reg dx13:V, reg lhs_has_dot6:*, reg lhs_has_dot7:V, reg c67:L, reg c68:V, reg rhs_has_dot6:*, reg rhs_has_dot7:V, reg c70:L, reg c71:V, reg c73:L, reg stop6:cls, reg r142:V, reg as_formula:cls, reg paste:cls, reg paste1:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r143:V, reg r144:V, reg rvars8:*, reg rvars9:V, reg cvars8:*, reg cvars9:V, reg c74:cls, reg r145:V, reg p17:p(V +), reg r147:V, reg p18:p(V +), reg r149:V, reg p19:p(V +), reg environment:cls, reg formula17:*, reg formula18:V, reg p20:p(V +), reg r152:V, reg p21:p(V +), reg r154:V, reg l4:*, reg c75:L, reg r156:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r159:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r160:V, reg r161:V, reg quote:cls, reg r162:V, reg l7:*, reg c76:L, reg r164:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg ____:cls, reg r167:V, reg eval1:cls, reg m4:*, reg m5:V, reg p22:p(V +), reg parent_frame1:cls, reg r169:V, reg p23:p(V +), reg r171:V, reg ftable1:cls, reg mf:*, reg mf1:V, reg p24:p(V +), reg rvars10:*, reg rvars11:V, reg p25:p(V +), reg cvars10:*, reg cvars11:V, reg p26:p(V +), reg ddd2:dots?, reg r175:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L65() else L66();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L67();
  L65():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L1(r2);
  L66():
    r = dyn base(<sym formula>);
    goto L1(r);
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L73() else L4();
  L67():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L3(c5, r4):
    r6 = `!`(r4);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L68():
    formula1 = ld formula;
    check L70() else D0();
  L69():
    r3 = dyn base1(<sym formula>, "formula");
    goto L3(c, r3);
  L73():
    stop = ldf stop;
    check L74() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 14 [];
  L6(r10):
    r12 = `!=`(r10, 3);
    c10 = `as.logical`(r12);
    if c10 then L81() else L7();
  L70():
    formula2 = force? formula1;
    checkMissing(formula2);
    inherits = ldf inherits in base;
    r5 = dyn inherits(formula2, "formula", FALSE);
    check L71() else D1();
  L74():
    r7 = dyn stop("'formula' missing or incorrect");
    check L75() else D3();
  L77():
    formula3 = ld formula;
    check L79() else D4();
  L78():
    r9 = dyn base2(<sym formula>);
    goto L6(r9);
  D1():
    deopt 10 [c, r5];
  D3():
    deopt 16 [r7];
  D4():
    deopt 21 [formula3];
  L7():
    goto L8();
  L8():
    is_data_frame = ldf `is.data.frame`;
    check L85() else D8();
  L71():
    goto L3(c, r5);
  L75():
    goto L5();
  L79():
    formula4 = force? formula3;
    checkMissing(formula4);
    length = ldf length in base;
    r11 = dyn length(formula4);
    check L80() else D5();
  L81():
    stop1 = ldf stop;
    check L82() else D6();
  D5():
    deopt 24 [r11];
  D6():
    deopt 28 [];
  D8():
    deopt 34 [];
  L80():
    goto L6(r11);
  L82():
    r13 = dyn stop1("'formula' must have both left and right hand sides");
    check L83() else D7();
  L85():
    p = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r16 = dyn is_data_frame(p);
    check L86() else D9();
  D7():
    deopt 30 [r13];
  D9():
    deopt 36 [r16];
  L83():
    goto L8();
  L86():
    c11 = `as.logical`(r16);
    if c11 then L87() else L9();
  L9():
    terms1 = ldf terms;
    check L91() else D12();
  L10(r20):
    st tt = r20;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L87():
    terms = ldf terms;
    check L88() else D10();
  D10():
    deopt 38 [];
  D12():
    deopt 44 [];
  L11(r24):
    c12 = `as.logical`(r24);
    if c12 then L100() else L13();
  L88():
    p1 = prom<V +>{
      formula5 = ld formula;
      formula6 = force? formula5;
      checkMissing(formula6);
      return formula6;
    };
    p2 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r19 = dyn terms[, data](p1, p2);
    check L89() else D11();
  L91():
    p3 = prom<V +>{
      formula7 = ld formula;
      formula8 = force? formula7;
      checkMissing(formula8);
      return formula8;
    };
    r22 = dyn terms1[, allowDotAsName](p3, TRUE);
    check L92() else D13();
  L93():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L94():
    r23 = dyn base3(<lang `>`(attr(tt, "order"), 1.0)>);
    goto L11(r23);
  D11():
    deopt 42 [r19];
  D13():
    deopt 48 [r22];
  L12(r26):
    r28 = `>`(r26, 1.0);
    any = ldf any in base;
    r29 = dyn any(r28);
    check L99() else D16();
  L13():
    goto L14();
  L14():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L89():
    goto L10(r19);
  L92():
    goto L10(r22);
  L95():
    tt = ld tt;
    check L97() else D14();
  L96():
    r25 = dyn base4(<sym tt>, "order");
    goto L12(r25);
  L100():
    stop2 = ldf stop;
    check L101() else D17();
  D14():
    deopt 54 [tt];
  D16():
    deopt 62 [r29];
  D17():
    deopt 64 [];
  L15(r33):
    st rvars = r33;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L109() else L110();
  L97():
    tt1 = force? tt;
    checkMissing(tt1);
    attr = ldf attr in base;
    r27 = dyn attr(tt1, "order");
    check L98() else D15();
  L99():
    goto L11(r29);
  L101():
    r30 = dyn stop2("interactions are not allowed");
    check L102() else D18();
  L104():
    terms2 = ldf terms;
    check L106() else D19();
  L105():
    r32 = dyn base5(<lang terms(`[`(formula, `-`(2)), allowDotAsName=TRUE)>, "term.labels");
    goto L15(r32);
  D15():
    deopt 58 [r27];
  D18():
    deopt 66 [r30];
  D19():
    deopt 72 [];
  L16(r39):
    st cvars = r39;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L114() else L115();
  L98():
    goto L12(r27);
  L102():
    goto L14();
  L106():
    p4 = prom<V +>{
      formula9 = ld formula;
      formula10 = force? formula9;
      checkMissing(formula10);
      c13 = `is.object`(formula10);
      if c13 then L1() else L2(formula10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", formula10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(formula12):
      __ = ldf `[` in base;
      r34 = dyn __(formula12, -2);
      goto L0(r34);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r36 = dyn terms2[, allowDotAsName](p4, TRUE);
    check L107() else D20();
  L109():
    terms3 = ldf terms;
    check L111() else D22();
  L110():
    r38 = dyn base6(<lang terms(`[`(formula, `-`(3)), allowDotAsName=TRUE)>, "term.labels");
    goto L16(r38);
  D20():
    deopt 76 [r36];
  D22():
    deopt 84 [];
  L17(r45):
    st `rhs.has.dot` = r45;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  L107():
    attr1 = ldf attr in base;
    r37 = dyn attr1(r36, "term.labels");
    check L108() else D21();
  L111():
    p5 = prom<V +>{
      formula13 = ld formula;
      formula14 = force? formula13;
      checkMissing(formula14);
      c14 = `is.object`(formula14);
      if c14 then L1() else L2(formula14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", formula14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(formula16):
      __1 = ldf `[` in base;
      r40 = dyn __1(formula16, -3);
      goto L0(r40);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r42 = dyn terms3[, allowDotAsName](p5, TRUE);
    check L112() else D23();
  L114():
    rvars = ld rvars;
    check L116() else D25();
  L115():
    r44 = dyn base7(<lang `==`(rvars, ".")>);
    goto L17(r44);
  D21():
    deopt 79 [r37];
  D23():
    deopt 88 [r42];
  D25():
    deopt 95 [rvars];
  L18(r49):
    st `lhs.has.dot` = r49;
    lhs_has_dot = ld `lhs.has.dot`;
    check L122() else D29();
  L108():
    goto L15(r37);
  L112():
    attr2 = ldf attr in base;
    r43 = dyn attr2(r42, "term.labels");
    check L113() else D24();
  L116():
    rvars1 = force? rvars;
    checkMissing(rvars1);
    r46 = `==`(rvars1, ".");
    any1 = ldf any in base;
    r47 = dyn any1(r46);
    check L117() else D26();
  L118():
    cvars = ld cvars;
    check L120() else D27();
  L119():
    r48 = dyn base8(<lang `==`(cvars, ".")>);
    goto L18(r48);
  D24():
    deopt 91 [r43];
  D26():
    deopt 100 [r47];
  D27():
    deopt 104 [cvars];
  D29():
    deopt 111 [lhs_has_dot];
  L113():
    goto L16(r43);
  L117():
    goto L17(r47);
  L120():
    cvars1 = force? cvars;
    checkMissing(cvars1);
    r50 = `==`(cvars1, ".");
    any2 = ldf any in base;
    r51 = dyn any2(r50);
    check L121() else D28();
  L122():
    lhs_has_dot1 = force? lhs_has_dot;
    checkMissing(lhs_has_dot1);
    c15 = `as.logical`(lhs_has_dot1);
    if c15 then L123() else L19(c15);
  D28():
    deopt 109 [r51];
  L19(c17):
    c21 = `as.logical`(c17);
    if c21 then L126() else L20();
  L121():
    goto L18(r51);
  L123():
    rhs_has_dot = ld `rhs.has.dot`;
    check L124() else D30();
  D30():
    deopt 113 [c15, rhs_has_dot];
  L20():
    goto L21();
  L21():
    match_call = ldf `match.call`;
    check L130() else D33();
  L124():
    rhs_has_dot1 = force? rhs_has_dot;
    checkMissing(rhs_has_dot1);
    c18 = `as.logical`(rhs_has_dot1);
    c19 = `&&`(c15, c18);
    goto L19(c19);
  L126():
    stop3 = ldf stop;
    check L127() else D31();
  D31():
    deopt 117 [];
  D33():
    deopt 123 [];
  L127():
    r52 = dyn stop3("'formula' has '.' in both left and right hand sides");
    check L128() else D32();
  L130():
    r54 = dyn match_call[`expand.dots`](FALSE);
    check L131() else D34();
  D32():
    deopt 119 [r52];
  D34():
    deopt 126 [r54];
  L128():
    goto L21();
  L131():
    st m = r54;
    eval = ldf eval;
    check L132() else D35();
  D35():
    deopt 129 [];
  L132():
    p6 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c22 = `is.object`(m1);
      if c22 then L1() else L2(m1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", m1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(m3):
      r55 = `$`(m3, <sym data>);
      goto L0(r55);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p7 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r57 = dyn parent_frame();
      return r57;
    };
    r59 = dyn eval(p6, p7);
    check L133() else D36();
  D36():
    deopt 132 [r59];
  L133():
    st edata = r59;
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L134() else L135();
  L22(r61):
    c23 = `as.logical`(r61);
    if c23 then L23(c23) else L138();
  L134():
    edata = ld edata;
    check L136() else D37();
  L135():
    r60 = dyn base9(<sym edata>, "ftable");
    goto L22(r60);
  D37():
    deopt 136 [edata];
  L23(c24):
    c32 = `as.logical`(c24);
    if c32 then L25(c32) else L144();
  L136():
    edata1 = force? edata;
    checkMissing(edata1);
    inherits1 = ldf inherits in base;
    r62 = dyn inherits1(edata1, "ftable", FALSE);
    check L137() else D38();
  L138():
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L139() else L140();
  D38():
    deopt 141 [r62];
  L24(c28, r64):
    c29 = `as.logical`(r64);
    c30 = `||`(c28, c29);
    goto L23(c30);
  L25(c33):
    c44 = `as.logical`(c33);
    if c44 then L153() else L28();
  L137():
    goto L22(r62);
  L139():
    edata2 = ld edata;
    check L141() else D39();
  L140():
    r63 = dyn base10(<sym edata>, "table");
    goto L24(c23, r63);
  L144():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L145() else L146();
  D39():
    deopt 144 [c23, edata2];
  L26(c37, r67):
    r72 = `>`(r67, 2);
    c41 = `as.logical`(r72);
    c42 = `||`(c37, c41);
    goto L25(c42);
  L28():
    sym18 = ldf `is.matrix`;
    base18 = ldf `is.matrix` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L200() else L201();
  L141():
    edata3 = force? edata2;
    checkMissing(edata3);
    inherits2 = ldf inherits in base;
    r65 = dyn inherits2(edata3, "table", FALSE);
    check L142() else D40();
  L145():
    sym12 = ldf dim;
    base12 = ldf dim in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L147() else L148();
  L146():
    r66 = dyn base11(<lang dim(edata)>);
    goto L26(c32, r66);
  L153():
    sym13 = ldf inherits;
    base13 = ldf inherits in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L154() else L155();
  D40():
    deopt 149 [c23, r65];
  L27(c40, r69):
    length1 = ldf length in base;
    r71 = dyn length1(r69);
    check L151() else D43();
  L29(r74):
    c45 = `as.logical`(r74);
    if c45 then L158() else L30();
  L44(r108):
    c50 = `as.logical`(r108);
    if c50 then L204() else L45();
  L142():
    goto L24(c23, r65);
  L147():
    edata4 = ld edata;
    check L149() else D41();
  L148():
    r68 = dyn base12(<sym edata>);
    goto L27(c32, r68);
  L154():
    edata6 = ld edata;
    check L156() else D44();
  L155():
    r73 = dyn base13(<sym edata>, "ftable");
    goto L29(r73);
  L200():
    edata8 = ld edata;
    check L202() else D69();
  L201():
    r107 = dyn base18(<sym edata>);
    goto L44(r107);
  D41():
    deopt 155 [c32, edata4];
  D43():
    deopt 160 [c40, r71];
  D44():
    deopt 166 [edata6];
  D69():
    deopt 252 [edata8];
  L30():
    goto L31();
  L31():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L162() else L163();
  L45():
    goto L46();
  L46():
    l3 = ld m;
    ___ = ldf `$<-`;
    check L212() else D73();
  L149():
    edata5 = force? edata4;
    checkMissing(edata5);
    dim = ldf dim in base;
    r70 = dyn dim(edata5);
    check L150() else D42();
  L151():
    goto L26(c40, r71);
  L156():
    edata7 = force? edata6;
    checkMissing(edata7);
    inherits3 = ldf inherits in base;
    r75 = dyn inherits3(edata7, "ftable", FALSE);
    check L157() else D45();
  L158():
    as_table = ldf `as.table`;
    check L159() else D46();
  L202():
    edata9 = force? edata8;
    checkMissing(edata9);
    is_matrix = ldf `is.matrix` in base;
    r109 = dyn is_matrix(edata9);
    check L203() else D70();
  L204():
    as_data_frame = ldf `as.data.frame`;
    check L205() else D71();
  D42():
    deopt 158 [c32, r70];
  D45():
    deopt 171 [r75];
  D46():
    deopt 173 [];
  D70():
    deopt 255 [r109];
  D71():
    deopt 257 [];
  D73():
    deopt 268 [NULL, l3, NULL];
  L32(r80):
    st varnames = r80;
    rhs_has_dot2 = ld `rhs.has.dot`;
    check L169() else D51();
  L150():
    goto L27(c32, r70);
  L157():
    goto L29(r75);
  L159():
    p8 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r77 = dyn as_table(p8);
    check L160() else D47();
  L162():
    sym15 = ldf dimnames;
    base15 = ldf dimnames in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L164() else L165();
  L163():
    r79 = dyn base14(<lang dimnames(data)>);
    goto L32(r79);
  L203():
    goto L44(r109);
  L205():
    p16 = prom<V +>{
      data11 = ld data;
      data12 = force? data11;
      checkMissing(data12);
      return data12;
    };
    r111 = dyn as_data_frame(p16);
    check L206() else D72();
  L212():
    ddd1 = ld `...`;
    r118 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL);
    check L213() else D74();
  D47():
    deopt 175 [r77];
  D51():
    deopt 190 [rhs_has_dot2];
  D72():
    deopt 259 [r111];
  D74():
    deopt 271 [NULL, r118];
  L33(r82):
    names = ldf names in base;
    r84 = dyn names(r82);
    check L168() else D50();
  L160():
    st data = r77;
    goto L31();
  L164():
    data7 = ld data;
    check L166() else D48();
  L165():
    r81 = dyn base15(<sym data>);
    goto L33(r81);
  L169():
    rhs_has_dot3 = force? rhs_has_dot2;
    checkMissing(rhs_has_dot3);
    c46 = `as.logical`(rhs_has_dot3);
    if c46 then L170() else L34();
  L206():
    l = ld m;
    c51 = `is.object`(l);
    if c51 then L208() else L209(r111, l);
  L213():
    st m = r118;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L214() else L215();
  D48():
    deopt 183 [data7];
  D50():
    deopt 188 [r84];
  L34():
    pmatch = ldf pmatch;
    check L172() else D52();
  L35():
    lhs_has_dot2 = ld `lhs.has.dot`;
    check L183() else D59();
  L47(r120):
    r121 = `!`(r120);
    c53 = `as.logical`(r121);
    if c53 then L217() else L48(c53);
  L166():
    data8 = force? data7;
    checkMissing(data8);
    dimnames = ldf dimnames in base;
    r83 = dyn dimnames(data8);
    check L167() else D49();
  L168():
    goto L32(r84);
  L170():
    st rvars = NULL;
    goto L35();
  L207(r115, dx7):
    st m = dx7;
    goto L46();
  L208():
    dr6 = tryDispatchBuiltin.0("$<-", l, r111);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L210() else L209(r111, dr6);
  L209(r113, l2):
    r116 = `$<-`(l2, <sym data>, r111);
    goto L207(r113, r116);
  L214():
    data13 = ld data;
    check L216() else D75();
  L215():
    r119 = dyn base19(<sym data>);
    goto L47(r119);
  D49():
    deopt 186 [r83];
  D52():
    deopt 196 [];
  D59():
    deopt 216 [lhs_has_dot2];
  D75():
    deopt 274 [data13];
  L48(c55):
    c62 = `as.logical`(c55);
    if c62 then L223() else L50();
  L167():
    goto L33(r83);
  L172():
    p9 = prom<V +>{
      rvars2 = ld rvars;
      rvars3 = force? rvars2;
      checkMissing(rvars3);
      return rvars3;
    };
    p10 = prom<V +>{
      varnames = ld varnames;
      varnames1 = force? varnames;
      checkMissing(varnames1);
      return varnames1;
    };
    r88 = dyn pmatch(p9, p10);
    check L173() else D53();
  L183():
    lhs_has_dot3 = force? lhs_has_dot2;
    checkMissing(lhs_has_dot3);
    c48 = `as.logical`(lhs_has_dot3);
    if c48 then L184() else L39();
  L210():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L207(r111, dx6);
  L216():
    data14 = force? data13;
    checkMissing(data14);
    c52 = `==`(data14, NULL);
    goto L47(c52);
  L217():
    sym20 = ldf `is.environment`;
    base20 = ldf `is.environment` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L218() else L219();
  D53():
    deopt 199 [r88];
  L39():
    pmatch1 = ldf pmatch;
    check L186() else D60();
  L40():
    ftable = ldf ftable;
    check L197() else D67();
  L49(c58, r123):
    c59 = `as.logical`(r123);
    c60 = `&&`(c58, c59);
    goto L48(c60);
  L50():
    lhs_has_dot6 = ld `lhs.has.dot`;
    check L249() else D86();
  L60():
    as_formula = ldf `as.formula`;
    check L257() else D90();
  L173():
    st i = r88;
    sym16 = ldf anyNA;
    base16 = ldf anyNA in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L174() else L175();
  L184():
    st cvars = NULL;
    goto L40();
  L218():
    data15 = ld data;
    check L220() else D76();
  L219():
    r122 = dyn base20(<sym data>);
    goto L49(c53, r122);
  L223():
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L224() else L225();
  D60():
    deopt 222 [];
  D67():
    deopt 243 [];
  D76():
    deopt 280 [c53, data15];
  D86():
    deopt 318 [lhs_has_dot6];
  D90():
    deopt 330 [];
  L36(r90):
    c47 = `as.logical`(r90);
    if c47 then L178() else L37();
  L51(r126):
    st varnames = r126;
    rhs_has_dot4 = ld `rhs.has.dot`;
    check L228() else D80();
  L174():
    i = ld i;
    check L176() else D54();
  L175():
    r89 = dyn base16(<sym i>);
    goto L36(r89);
  L186():
    p11 = prom<V +>{
      cvars2 = ld cvars;
      cvars3 = force? cvars2;
      checkMissing(cvars3);
      return cvars3;
    };
    p12 = prom<V +>{
      varnames2 = ld varnames;
      varnames3 = force? varnames2;
      checkMissing(varnames3);
      return varnames3;
    };
    r97 = dyn pmatch1(p11, p12);
    check L187() else D61();
  L197():
    p13 = prom<V +>{
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      return data10;
    };
    p14 = prom<V +>{
      rvars4 = ld rvars;
      rvars5 = force? rvars4;
      checkMissing(rvars5);
      return rvars5;
    };
    p15 = prom<V +>{
      cvars4 = ld cvars;
      cvars5 = force? cvars4;
      checkMissing(cvars5);
      return cvars5;
    };
    r106 = dyn ftable[, `row.vars`, `col.vars`](p13, p14, p15);
    check L198() else D68();
  L220():
    data16 = force? data15;
    checkMissing(data16);
    is_environment = ldf `is.environment` in base;
    r124 = dyn is_environment(data16);
    check L221() else D77();
  L224():
    data17 = ld data;
    check L226() else D78();
  L225():
    r125 = dyn base21(<sym data>);
    goto L51(r125);
  L249():
    lhs_has_dot7 = force? lhs_has_dot6;
    checkMissing(lhs_has_dot7);
    c67 = `as.logical`(lhs_has_dot7);
    if c67 then L61(c67) else L250();
  L257():
    p19 = prom<V +>{
      paste = ldf paste;
      p18 = prom<V +>{
        paste1 = ldf paste;
        p17 = prom<V +>{
          sym24 = ldf c;
          base24 = ldf c in base;
          guard24 = `==`.4(sym24, base24);
          if guard24 then L1() else L2();
        L0(r144):
          return r144;
        L1():
          rvars8 = ld rvars;
          rvars9 = force? rvars8;
          checkMissing(rvars9);
          cvars8 = ld cvars;
          cvars9 = force? cvars8;
          checkMissing(cvars9);
          c74 = ldf c in base;
          r145 = dyn c74(rvars9, cvars9);
          goto L0(r145);
        L2():
          r143 = dyn base24(<sym rvars>, <sym cvars>);
          goto L0(r143);
        };
        r147 = dyn paste1[, collapse](p17, "+");
        return r147;
      };
      r149 = dyn paste("~", p18);
      return r149;
    };
    p21 = prom<V +>{
      environment = ldf environment;
      p20 = prom<V +>{
        formula17 = ld formula;
        formula18 = force? formula17;
        checkMissing(formula18);
        return formula18;
      };
      r152 = dyn environment(p20);
      return r152;
    };
    r154 = dyn as_formula[, env](p19, p21);
    check L258() else D91();
  D54():
    deopt 203 [i];
  D61():
    deopt 225 [r97];
  D68():
    deopt 249 [r106];
  D77():
    deopt 283 [c53, r124];
  D78():
    deopt 287 [data17];
  D80():
    deopt 292 [rhs_has_dot4];
  D91():
    deopt 334 [r154];
  L37():
    goto L38();
  L38():
    i2 = ld i;
    check L182() else D58();
  L61(c68):
    c73 = `as.logical`(c68);
    if c73 then L253() else L62();
  L176():
    i1 = force? i;
    checkMissing(i1);
    anyNA = ldf anyNA in base;
    r91 = dyn anyNA(i1);
    check L177() else D55();
  L178():
    stop4 = ldf stop;
    check L179() else D56();
  L187():
    st i = r97;
    sym17 = ldf anyNA;
    base17 = ldf anyNA in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L188() else L189();
  L198():
    popenv;
    return r106;
  L221():
    goto L49(c53, r124);
  L226():
    data18 = force? data17;
    checkMissing(data18);
    names1 = ldf names in base;
    r127 = dyn names1(data18);
    check L227() else D79();
  L228():
    rhs_has_dot5 = force? rhs_has_dot4;
    checkMissing(rhs_has_dot5);
    c63 = `as.logical`(rhs_has_dot5);
    if c63 then L229() else L52();
  L250():
    rhs_has_dot6 = ld `rhs.has.dot`;
    check L251() else D87();
  L258():
    l4 = ld m;
    c75 = `is.object`(l4);
    if c75 then L260() else L261(r154, l4);
  D55():
    deopt 206 [r91];
  D56():
    deopt 208 [];
  D58():
    deopt 213 [i2];
  D79():
    deopt 290 [r127];
  D87():
    deopt 320 [c67, rhs_has_dot6];
  L41(r99):
    c49 = `as.logical`(r99);
    if c49 then L192() else L42();
  L52():
    goto L55();
  L55():
    lhs_has_dot4 = ld `lhs.has.dot`;
    check L238() else D83();
  L62():
    goto L60();
  L177():
    goto L36(r91);
  L179():
    r92 = dyn stop4("incorrect variable names in rhs of formula");
    check L180() else D57();
  L182():
    i3 = force? i2;
    checkMissing(i3);
    st rvars = i3;
    goto L35();
  L188():
    i4 = ld i;
    check L190() else D62();
  L189():
    r98 = dyn base17(<sym i>);
    goto L41(r98);
  L227():
    goto L51(r127);
  L229():
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L230() else L231();
  L251():
    rhs_has_dot7 = force? rhs_has_dot6;
    checkMissing(rhs_has_dot7);
    c70 = `as.logical`(rhs_has_dot7);
    c71 = `||`(c67, c70);
    goto L61(c71);
  L253():
    stop6 = ldf stop;
    check L254() else D88();
  L259(dx16):
    st m = dx16;
    sym25 = ldf quote;
    base25 = ldf quote in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L263() else L264();
  L260():
    dr12 = tryDispatchBuiltin.0("$<-", l4, r154);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L262() else L261(r154, dr12);
  L261(r156, l6):
    r159 = `$<-`(l6, <sym formula>, r154);
    goto L259(r159);
  D57():
    deopt 210 [r92];
  D62():
    deopt 229 [i4];
  D83():
    deopt 305 [lhs_has_dot4];
  D88():
    deopt 324 [];
  L42():
    goto L43();
  L43():
    i6 = ld i;
    check L196() else D66();
  L53(r129):
    c64 = `is.object`(r129);
    if c64 then L233() else L234(r129);
  L63(r161):
    l7 = ld m;
    c76 = `is.object`(l7);
    if c76 then L265() else L266(r161, l7);
  L180():
    goto L38();
  L190():
    i5 = force? i4;
    checkMissing(i5);
    anyNA1 = ldf anyNA in base;
    r100 = dyn anyNA1(i5);
    check L191() else D63();
  L192():
    stop5 = ldf stop;
    check L193() else D64();
  L230():
    varnames4 = ld varnames;
    check L232() else D81();
  L231():
    r128 = dyn base22(<sym varnames>);
    goto L53(r128);
  L238():
    lhs_has_dot5 = force? lhs_has_dot4;
    checkMissing(lhs_has_dot5);
    c65 = `as.logical`(lhs_has_dot5);
    if c65 then L239() else L56();
  L254():
    r142 = dyn stop6("cannot use dots in formula with given data");
    check L255() else D89();
  L262():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L259(dx15);
  L263():
    quote = ldf quote in base;
    r162 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L63(r162);
  L264():
    r160 = dyn base25(<lang `::`(stats, model.frame)>);
    goto L63(r160);
  D63():
    deopt 232 [r100];
  D64():
    deopt 234 [];
  D66():
    deopt 239 [i6];
  D81():
    deopt 295 [varnames4];
  D89():
    deopt 326 [r142];
  L54(dx9):
    st rvars = dx9;
    goto L55();
  L56():
    goto L59(NULL);
  L59(dx13):
    goto L60();
  L64(dx18):
    st m = dx18;
    eval1 = ldf eval;
    check L268() else D92();
  L191():
    goto L41(r100);
  L193():
    r101 = dyn stop5("incorrect variable names in lhs of formula");
    check L194() else D65();
  L196():
    i7 = force? i6;
    checkMissing(i7);
    st cvars = i7;
    goto L40();
  L232():
    varnames5 = force? varnames4;
    checkMissing(varnames5);
    r130 = seq_along(varnames5);
    goto L53(r130);
  L233():
    dr8 = tryDispatchBuiltin.1("[", r129);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L235() else L234(dr8);
  L234(r132):
    cvars6 = ld cvars;
    check L236() else D82();
  L239():
    sym23 = ldf seq_along;
    base23 = ldf seq_along in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L240() else L241();
  L255():
    goto L60();
  L265():
    dr14 = tryDispatchBuiltin.0("[[<-", l7, r161);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L267() else L266(r161, dr14);
  L266(r164, l9):
    ____ = ldf `[[<-` in base;
    r167 = dyn ____(l9, r161, 1);
    goto L64(r167);
  D65():
    deopt 236 [r101];
  D82():
    deopt 298 [r132, cvars6];
  D92():
    deopt 347 [];
  L57(r136):
    c66 = `is.object`(r136);
    if c66 then L243() else L244(r136);
  L194():
    goto L43();
  L235():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L54(dx8);
  L236():
    cvars7 = force? cvars6;
    checkMissing(cvars7);
    r133 = `-`(<missing>, cvars7);
    __2 = ldf `[` in base;
    r134 = dyn __2(r132, r133);
    goto L54(r134);
  L240():
    varnames6 = ld varnames;
    check L242() else D84();
  L241():
    r135 = dyn base23(<sym varnames>);
    goto L57(r135);
  L267():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L64(dx17);
  L268():
    p22 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p23 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r169 = dyn parent_frame1();
      return r169;
    };
    r171 = dyn eval1(p22, p23);
    check L269() else D93();
  D84():
    deopt 308 [varnames6];
  D93():
    deopt 350 [r171];
  L58(dx12):
    st cvars = dx12;
    goto L59(dx12);
  L242():
    varnames7 = force? varnames6;
    checkMissing(varnames7);
    r137 = seq_along(varnames7);
    goto L57(r137);
  L243():
    dr10 = tryDispatchBuiltin.1("[", r136);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L245() else L244(dr10);
  L244(r139):
    rvars6 = ld rvars;
    check L246() else D85();
  L269():
    st mf = r171;
    ftable1 = ldf ftable;
    check L270() else D94();
  D85():
    deopt 311 [r139, rvars6];
  D94():
    deopt 353 [];
  L245():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L58(dx11);
  L246():
    rvars7 = force? rvars6;
    checkMissing(rvars7);
    r140 = `-`(<missing>, rvars7);
    __3 = ldf `[` in base;
    r141 = dyn __3(r139, r140);
    goto L58(r141);
  L270():
    p24 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    p25 = prom<V +>{
      rvars10 = ld rvars;
      rvars11 = force? rvars10;
      checkMissing(rvars11);
      return rvars11;
    };
    p26 = prom<V +>{
      cvars10 = ld cvars;
      cvars11 = force? cvars10;
      checkMissing(cvars11);
      return cvars11;
    };
    ddd2 = ld `...`;
    r175 = dyn ftable1[, `row.vars`, `col.vars`, `...`](p24, p25, p26, ddd2);
    check L271() else D95();
  D95():
    deopt 360 [r175];
  L271():
    popenv;
    return r175;
  }
}