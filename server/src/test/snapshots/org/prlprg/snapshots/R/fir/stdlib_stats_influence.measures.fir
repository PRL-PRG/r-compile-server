fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1507081864;
    st `influence.measures` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1507081864(model, infl) {
  (reg model:*, reg infl:*) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:cls, reg model3:*, reg model4:V, reg c:L, reg model6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg weighted_residuals:cls, reg model7:*, reg model8:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg e:*, reg e1:V, reg r11:V, reg sum:cls, reg r12:V, reg df_residual:cls, reg model9:*, reg model10:V, reg p3:p(V +), reg r14:V, reg r15:V, reg r16:V, reg qr_lm:cls, reg model11:*, reg model12:V, reg p4:p(V +), reg r18:V, reg chol2inv:cls, reg mqr:*, reg mqr1:V, reg c1:L, reg mqr3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg p5:p(V +), reg mqr4:*, reg mqr5:V, reg c2:L, reg mqr7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg p6:p(V +), reg r23:V, reg infl1:*, reg infl2:V, reg c3:L, reg infl4:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r24:V, reg infl5:*, reg infl6:V, reg c4:L, reg infl8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg e2:*, reg e3:V, reg is_matrix:cls, reg r28:V, reg is_mlm:*, reg is_mlm1:V, reg c5:L, reg aperm:cls, reg infl9:*, reg infl10:V, reg c6:L, reg infl12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r29:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg c7:cls, reg r33:V, reg p8:p(V +), reg r35:V, reg r36:V, reg infl13:*, reg infl14:V, reg c8:L, reg infl16:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r37:V, reg cf:*, reg cf1:V, reg outer:cls, reg infl17:*, reg infl18:V, reg c9:L, reg infl20:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r38:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg diag:cls, reg xxi:*, reg xxi1:V, reg p10:p(V +), reg r43:V, reg r44:V, reg p11:p(V +), reg r46:V, reg r47:V, reg variable_names:cls, reg model13:*, reg model14:V, reg p12:p(V +), reg r49:V, reg l:*, reg c10:L, reg r51:S, reg l2:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg vn:*, reg vn1:V, reg r54:V, reg ___:cls, reg r55:V, reg paste0:cls, reg abbreviate:cls, reg vn2:*, reg vn3:V, reg p13:p(V +), reg r57:V, reg p14:p(V +), reg r59:V, reg l3:*, reg dimnames:cls, reg r60:V, reg c11:L, reg r63:V, reg l5:*, reg r64:V, reg dr18:V, reg dc9:L, reg dx18:V, reg r66:V, reg l7:*, reg dx19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r73:V, reg r74:V, reg l10:*, reg r75:V, reg r76:V, reg r77:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r84:V, reg r85:V, reg l13:*, reg r86:V, reg r87:V, reg r88:V, reg dfbetas:*, reg dfbetas1:V, reg dim:cls, reg r89:V, reg length:cls, reg r90:V, reg ____:cls, reg r91:V, reg dimnames__:cls, reg r92:V, reg e4:*, reg e5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r93:V, reg e8:V, reg r94:V, reg h:*, reg h1:V, reg r95:V, reg r96:V, reg si:*, reg si1:V, reg h2:*, reg h3:V, reg r97:V, reg r98:V, reg r99:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r100:V, reg r101:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r102:V, reg r103:V, reg dffits:*, reg dffits1:V, reg is_infinite:cls, reg r104:V, reg any:cls, reg r105:V, reg c12:L, reg l14:*, reg c13:L, reg r107:R, reg l16:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r109:R, reg dx21:V, reg ii:*, reg ii1:V, reg ___1:cls, reg r110:V, reg si2:*, reg si3:V, reg s:*, reg s1:V, reg r112:V, reg p15:*, reg p16:V, reg r113:V, reg r114:V, reg h4:*, reg h5:V, reg r115:V, reg r116:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r117:V, reg r118:V, reg model15:*, reg model16:V, reg inherits:cls, reg r119:V, reg c14:L, reg infl21:*, reg infl22:V, reg c15:L, reg infl24:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r120:V, reg h6:*, reg h7:V, reg r121:V, reg r122:V, reg r123:V, reg h8:*, reg h9:V, reg r124:V, reg summary:cls, reg model17:*, reg model18:V, reg p17:p(V +), reg r126:V, reg c16:L, reg r129:V, reg r130:V, reg dr24:V, reg dc12:L, reg dx24:V, reg r132:V, reg dx25:V, reg r133:V, reg p18:*, reg p19:V, reg r134:V, reg r135:V, reg r136:V, reg e9:*, reg e10:V, reg s2:*, reg s3:V, reg h10:*, reg h11:V, reg r137:V, reg r138:V, reg r139:V, reg r140:V, reg h12:*, reg h13:V, reg r141:V, reg p20:*, reg p21:V, reg r142:V, reg is_mlm2:*, reg is_mlm3:V, reg c17:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r143:V, reg r144:V, reg dfbetas2:*, reg dfbetas3:V, reg dimnames1:cls, reg r145:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r146:V, reg r147:V, reg dns:*, reg dns1:V, reg c18:L, reg dns3:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __:cls, reg r148:V, reg c19:cls, reg r149:V, reg l17:*, reg c20:L, reg r151:V, reg l19:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg ____1:cls, reg r154:V, reg array:cls, reg dfbetas4:*, reg dfbetas5:V, reg p22:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r156:V, reg r157:V, reg dfbetas6:*, reg dfbetas7:V, reg dim1:cls, reg r158:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r161:V, reg r162:V, reg r163:V, reg c21:cls, reg r164:V, reg r165:V, reg p23:p(V +), reg dns4:*, reg dns5:V, reg p24:p(V +), reg r168:V, reg dffits2:*, reg dffits3:V, reg l20:*, reg c22:L, reg dffits5:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg ___2:cls, reg r169:V, reg cov_ratio:*, reg cov_ratio1:V, reg l23:*, reg c23:L, reg cov_ratio3:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg ___3:cls, reg r170:V, reg cooks_d:*, reg cooks_d1:V, reg l26:*, reg c24:L, reg cooks_d3:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg ___4:cls, reg r171:V, reg h14:*, reg h15:V, reg l29:*, reg c25:L, reg h17:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg ___5:cls, reg r172:V, reg a:*, reg a1:V, reg a2:V, reg cbind:cls, reg dfbetas8:*, reg dfbetas9:V, reg p25:p(V +), reg dffits8:*, reg dffits9:V, reg p26:p(V +), reg cov_ratio6:*, reg cov_ratio7:V, reg p27:p(V +), reg cooks_d6:*, reg cooks_d7:V, reg p28:p(V +), reg h20:*, reg h21:V, reg p29:p(V +), reg r178:V, reg l32:*, reg c26:L, reg r180:R, reg l34:*, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r187:V, reg r188:R, reg l37:*, reg r189:R, reg r190:V, reg infmat:*, reg infmat1:V, reg is_infinite1:cls, reg r191:V, reg ___6:cls, reg r192:V, reg is_influential:cls, reg infmat2:*, reg infmat3:V, reg p30:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r194:V, reg r195:V, reg h22:*, reg h23:V, reg r196:V, reg sum1:cls, reg r197:V, reg p31:p(V +), reg r199:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r200:V, reg r201:V, reg infmat4:*, reg infmat5:V, reg is_inf:*, reg is_inf1:V, reg model19:*, reg model20:V, reg c27:L, reg model22:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r202:V, reg list:cls, reg r203:V, reg l38:*, reg class__:cls, reg r204:V, reg ans:*, reg ans1:V |
    mkenv;
    st model = model;
    infl_isMissing = missing.0(infl);
    if infl_isMissing then L0() else L1(infl);
  L0():
    p1 = prom<V +>{
      influence = ldf influence;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn influence(p);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    r3 = clos inner785282679;
    st `is.influential` = r3;
    model3 = ld model;
    check L33() else D0();
  D0():
    deopt 3 [model3];
  L33():
    model4 = force? model3;
    checkMissing(model4);
    c = `is.object`(model4);
    if c then L35() else L36(model4);
  L34(dx1):
    st p = dx1;
    weighted_residuals = ldf `weighted.residuals`;
    check L38() else D1();
  L35():
    dr = tryDispatchBuiltin.1("$", model4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(model6):
    r4 = `$`(model6, <sym rank>);
    goto L34(r4);
  D1():
    deopt 8 [];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L38():
    p2 = prom<V +>{
      model7 = ld model;
      model8 = force? model7;
      checkMissing(model8);
      return model8;
    };
    r6 = dyn weighted_residuals(p2);
    check L39() else D2();
  D2():
    deopt 10 [r6];
  L39():
    st e = r6;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L2(r8):
    st s = r8;
    qr_lm = ldf `qr.lm`;
    check L48() else D7();
  L40():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L41():
    r7 = dyn base(<lang `/`(sum(`^`(e, 2.0), na.rm=TRUE), df.residual(model))>);
    goto L2(r7);
  D7():
    deopt 30 [];
  L3(r10):
    df_residual = ldf `df.residual`;
    check L46() else D5();
  L42():
    e = ld e;
    check L44() else D3();
  L43():
    r9 = dyn base1[, `na.rm`](<lang `^`(e, 2.0)>, TRUE);
    goto L3(r9);
  L48():
    p4 = prom<V +>{
      model11 = ld model;
      model12 = force? model11;
      checkMissing(model12);
      return model12;
    };
    r18 = dyn qr_lm(p4);
    check L49() else D8();
  D3():
    deopt 15 [e];
  D5():
    deopt 23 [r10];
  D8():
    deopt 32 [r18];
  L44():
    e1 = force? e;
    checkMissing(e1);
    r11 = `^`(e1, 2.0);
    sum = ldf sum in base;
    r12 = dyn sum(r11, TRUE);
    check L45() else D4();
  L46():
    p3 = prom<V +>{
      model9 = ld model;
      model10 = force? model9;
      checkMissing(model10);
      return model10;
    };
    r14 = dyn df_residual(p3);
    check L47() else D6();
  L49():
    st mqr = r18;
    chol2inv = ldf chol2inv;
    check L50() else D9();
  D4():
    deopt 22 [r12];
  D6():
    deopt 25 [r10, r14];
  D9():
    deopt 35 [];
  L45():
    goto L3(r12);
  L47():
    r15 = `/`(r10, r14);
    r16 = sqrt(r15);
    goto L2(r16);
  L50():
    p5 = prom<V +>{
      mqr = ld mqr;
      mqr1 = force? mqr;
      checkMissing(mqr1);
      c1 = `is.object`(mqr1);
      if c1 then L1() else L2(mqr1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", mqr1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(mqr3):
      r19 = `$`(mqr3, <sym qr>);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      mqr4 = ld mqr;
      mqr5 = force? mqr4;
      checkMissing(mqr5);
      c2 = `is.object`(mqr5);
      if c2 then L1() else L2(mqr5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", mqr5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(mqr7):
      r21 = `$`(mqr7, <sym rank>);
      goto L0(r21);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r23 = dyn chol2inv(p5, p6);
    check L51() else D10();
  D10():
    deopt 38 [r23];
  L51():
    st xxi = r23;
    infl1 = ld infl;
    check L52() else D11();
  D11():
    deopt 40 [infl1];
  L52():
    infl2 = force? infl1;
    checkMissing(infl2);
    c3 = `is.object`(infl2);
    if c3 then L54() else L55(infl2);
  L53(dx7):
    st si = dx7;
    infl5 = ld infl;
    check L57() else D12();
  L54():
    dr6 = tryDispatchBuiltin.1("$", infl2);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(infl4):
    r24 = `$`(infl4, <sym sigma>);
    goto L53(r24);
  D12():
    deopt 44 [infl5];
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L53(dx6);
  L57():
    infl6 = force? infl5;
    checkMissing(infl6);
    c4 = `is.object`(infl6);
    if c4 then L59() else L60(infl6);
  L58(dx9):
    st h = dx9;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L59():
    dr8 = tryDispatchBuiltin.1("$", infl6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L61() else L60(dr8);
  L60(infl8):
    r25 = `$`(infl8, <sym hat>);
    goto L58(r25);
  L4(r27):
    st `is.mlm` = r27;
    is_mlm = ld `is.mlm`;
    check L66() else D15();
  L61():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L58(dx8);
  L62():
    e2 = ld e;
    check L64() else D13();
  L63():
    r26 = dyn base2(<sym e>);
    goto L4(r26);
  D13():
    deopt 50 [e2];
  D15():
    deopt 55 [is_mlm];
  L64():
    e3 = force? e2;
    checkMissing(e3);
    is_matrix = ldf `is.matrix` in base;
    r28 = dyn is_matrix(e3);
    check L65() else D14();
  L66():
    is_mlm1 = force? is_mlm;
    checkMissing(is_mlm1);
    c5 = `as.logical`(is_mlm1);
    if c5 then L67() else L5();
  D14():
    deopt 53 [r28];
  L5():
    infl13 = ld infl;
    check L71() else D18();
  L6(r36):
    st cf = r36;
    cf = ld cf;
    check L76() else D19();
  L65():
    goto L4(r28);
  L67():
    aperm = ldf aperm;
    check L68() else D16();
  D16():
    deopt 58 [];
  D18():
    deopt 62 [infl13];
  D19():
    deopt 66 [cf];
  L68():
    p7 = prom<V +>{
      infl9 = ld infl;
      infl10 = force? infl9;
      checkMissing(infl10);
      c6 = `is.object`(infl10);
      if c6 then L1() else L2(infl10);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", infl10);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(infl12):
      r29 = `$`(infl12, <sym coefficients>);
      goto L0(r29);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      c7 = ldf c in base;
      r33 = dyn c7(1, <int 3, 2>);
      goto L0(r33);
    L2():
      r31 = dyn base3(1, <lang `:`(3.0, 2.0)>);
      goto L0(r31);
    };
    r35 = dyn aperm(p7, p8);
    check L69() else D17();
  L71():
    infl14 = force? infl13;
    checkMissing(infl14);
    c8 = `is.object`(infl14);
    if c8 then L73() else L74(infl14);
  L76():
    cf1 = force? cf;
    checkMissing(cf1);
    outer = ldf outer;
    check L77() else D20();
  D17():
    deopt 61 [r35];
  D20():
    deopt 68 [cf1];
  L69():
    goto L6(r35);
  L72(dx13):
    goto L6(dx13);
  L73():
    dr12 = tryDispatchBuiltin.1("$", infl14);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L75() else L74(dr12);
  L74(infl16):
    r37 = `$`(infl16, <sym coefficients>);
    goto L72(r37);
  L77():
    p9 = prom<V +>{
      infl17 = ld infl;
      infl18 = force? infl17;
      checkMissing(infl18);
      c9 = `is.object`(infl18);
      if c9 then L1() else L2(infl18);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", infl18);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(infl20):
      r38 = `$`(infl20, <sym sigma>);
      goto L0(r38);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p11 = prom<V +>{
      sym4 = ldf sqrt;
      base4 = ldf sqrt in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      diag = ldf diag;
      p10 = prom<V +>{
        xxi = ld xxi;
        xxi1 = force? xxi;
        checkMissing(xxi1);
        return xxi1;
      };
      r43 = dyn diag(p10);
      r44 = sqrt(r43);
      goto L0(r44);
    L2():
      r40 = dyn base4(<lang diag(xxi)>);
      goto L0(r40);
    };
    r46 = dyn outer(p9, p11);
    check L78() else D21();
  D21():
    deopt 71 [cf1, r46];
  L75():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L72(dx12);
  L78():
    r47 = `/`(cf1, r46);
    st dfbetas = r47;
    variable_names = ldf `variable.names`;
    check L79() else D22();
  D22():
    deopt 75 [];
  L79():
    p12 = prom<V +>{
      model13 = ld model;
      model14 = force? model13;
      checkMissing(model14);
      return model14;
    };
    r49 = dyn variable_names(p12);
    check L80() else D23();
  D23():
    deopt 77 [r49];
  L80():
    st vn = r49;
    l = ld vn;
    c10 = `is.object`(l);
    if c10 then L81() else L82("1_", l);
  L7(dx17):
    st vn = dx17;
    paste0 = ldf paste0;
    check L85() else D25();
  L81():
    dr16 = tryDispatchBuiltin.0("[<-", l, "1_");
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L83() else L82("1_", dr16);
  L82(r51, l2):
    vn = ld vn;
    check L84() else D24();
  D24():
    deopt 82 [r51, l2, "1_", vn];
  D25():
    deopt 89 [];
  L83():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L7(dx16);
  L84():
    vn1 = force? vn;
    checkMissing(vn1);
    r54 = `==`(vn1, "(Intercept)");
    ___ = ldf `[<-` in base;
    r55 = dyn ___(l2, "1_", r54);
    goto L7(r55);
  L85():
    p14 = prom<V +>{
      abbreviate = ldf abbreviate;
      p13 = prom<V +>{
        vn2 = ld vn;
        vn3 = force? vn2;
        checkMissing(vn3);
        return vn3;
      };
      r57 = dyn abbreviate(p13);
      return r57;
    };
    r59 = dyn paste0("dfb.", p14);
    check L86() else D26();
  D26():
    deopt 92 [r59];
  L86():
    l3 = ld dfbetas;
    dimnames = ldf dimnames;
    check L87() else D27();
  D27():
    deopt 94 [r59, l3, r59];
  L87():
    r60 = dyn dimnames(r59, NULL);
    check L88() else D28();
  D28():
    deopt 96 [r59, l3, r59, r60];
  L88():
    c11 = `is.object`(r60);
    if c11 then L89() else L90(r59, l3, r60);
  L8(r66, l7, dx19):
    dimnames__ = ldf `dimnames<-`;
    check L99() else D32();
  L89():
    dr18 = tryDispatchBuiltin.0("[[<-", r60, r59);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L91() else L90(r59, l3, dr18);
  L90(r63, l5, r64):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  D32():
    deopt 109 [r66, l7, dx19];
  L9(r74, l10, r75, r76, r77):
    ____ = ldf `[[<-` in base;
    r91 = dyn ____(r75, r76, r77);
    goto L8(r74, l10, r91);
  L91():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L8(r59, l3, dx18);
  L92():
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L93():
    r73 = dyn base5(<lang dim(dfbetas)>);
    goto L9(r63, l5, r64, r59, r73);
  L99():
    r92 = dyn dimnames__(l7, NULL, dx19);
    check L100() else D33();
  D33():
    deopt 111 [r66, r92];
  L10(r85, l13, r86, r87, r88):
    length = ldf length in base;
    r90 = dyn length(r88);
    check L98() else D31();
  L94():
    dfbetas = ld dfbetas;
    check L96() else D29();
  L95():
    r84 = dyn base6(<sym dfbetas>);
    goto L10(r63, l5, r64, r59, r84);
  L100():
    st dfbetas = r92;
    e4 = ld e;
    check L101() else D34();
  D29():
    deopt 102 [r63, l5, r64, r59, dfbetas];
  D31():
    deopt 107 [r85, l13, r86, r87, r90];
  D34():
    deopt 113 [e4];
  L96():
    dfbetas1 = force? dfbetas;
    checkMissing(dfbetas1);
    dim = ldf dim in base;
    r89 = dyn dim(dfbetas1);
    check L97() else D30();
  L98():
    goto L9(r85, l13, r86, r87, r90);
  L101():
    e5 = force? e4;
    checkMissing(e5);
    sym7 = ldf sqrt;
    base7 = ldf sqrt in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L102() else L103();
  D30():
    deopt 105 [r63, l5, r64, r59, r89];
  L11(e8, r94):
    r96 = `*`(e8, r94);
    si = ld si;
    check L105() else D36();
  L97():
    goto L10(r63, l5, r64, r59, r89);
  L102():
    h = ld h;
    check L104() else D35();
  L103():
    r93 = dyn base7(<sym h>);
    goto L11(e5, r93);
  D35():
    deopt 115 [e5, h];
  D36():
    deopt 118 [r96, si];
  L104():
    h1 = force? h;
    checkMissing(h1);
    r95 = sqrt(h1);
    goto L11(e5, r95);
  L105():
    si1 = force? si;
    checkMissing(si1);
    h2 = ld h;
    check L106() else D37();
  D37():
    deopt 120 [r96, si1, 1.0, h2];
  L106():
    h3 = force? h2;
    checkMissing(h3);
    r97 = `-`(1.0, h3);
    r98 = `*`(si1, r97);
    r99 = `/`(r96, r98);
    st dffits = r99;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  L12(r101):
    c12 = `as.logical`(r101);
    if c12 then L114() else L14();
  L107():
    sym9 = ldf `is.infinite`;
    base9 = ldf `is.infinite` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L108():
    r100 = dyn base8(<lang `<-`(ii, is.infinite(dffits))>);
    goto L12(r100);
  L13(r103):
    st ii = r103;
    any = ldf any in base;
    r105 = dyn any(r103);
    check L113() else D40();
  L14():
    goto L16();
  L16():
    si2 = ld si;
    check L120() else D42();
  L109():
    dffits = ld dffits;
    check L111() else D38();
  L110():
    r102 = dyn base9(<sym dffits>);
    goto L13(r102);
  L114():
    l14 = ld dffits;
    c13 = `is.object`(l14);
    if c13 then L115() else L116(NA_REAL, l14);
  D38():
    deopt 130 [dffits];
  D40():
    deopt 136 [r105];
  D42():
    deopt 146 [si2];
  L15(r109, dx21):
    st dffits = dx21;
    goto L16();
  L111():
    dffits1 = force? dffits;
    checkMissing(dffits1);
    is_infinite = ldf `is.infinite` in base;
    r104 = dyn is_infinite(dffits1);
    check L112() else D39();
  L113():
    goto L12(r105);
  L115():
    dr20 = tryDispatchBuiltin.0("[<-", l14, NA_REAL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L117() else L116(NA_REAL, dr20);
  L116(r107, l16):
    ii = ld ii;
    check L118() else D41();
  L120():
    si3 = force? si2;
    checkMissing(si3);
    s = ld s;
    check L121() else D43();
  D39():
    deopt 133 [r104];
  D41():
    deopt 140 [r107, l16, NA_REAL, ii];
  D43():
    deopt 147 [si3, s];
  L112():
    goto L13(r104);
  L117():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L15(NA_REAL, dx20);
  L118():
    ii1 = force? ii;
    ___1 = ldf `[<-` in base;
    r110 = dyn ___1(l16, NA_REAL, ii1);
    goto L15(r107, r110);
  L121():
    s1 = force? s;
    checkMissing(s1);
    r112 = `/`(si3, s1);
    p15 = ld p;
    check L122() else D44();
  D44():
    deopt 150 [r112, 2.0, p15];
  L122():
    p16 = force? p15;
    checkMissing(p16);
    r113 = `*`(2.0, p16);
    r114 = `^`(r112, r113);
    h4 = ld h;
    check L123() else D45();
  D45():
    deopt 154 [r114, 1.0, h4];
  L123():
    h5 = force? h4;
    checkMissing(h5);
    r115 = `-`(1.0, h5);
    r116 = `/`(r114, r115);
    st `cov.ratio` = r116;
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L124() else L125();
  L17(r118):
    c14 = `as.logical`(r118);
    if c14 then L128() else L18();
  L124():
    model15 = ld model;
    check L126() else D46();
  L125():
    r117 = dyn base10(<sym model>, "glm");
    goto L17(r117);
  D46():
    deopt 161 [model15];
  L18():
    e9 = ld e;
    check L144() else D54();
  L19(r136):
    st `cooks.d` = r136;
    is_mlm2 = ld `is.mlm`;
    check L149() else D59();
  L126():
    model16 = force? model15;
    checkMissing(model16);
    inherits = ldf inherits in base;
    r119 = dyn inherits(model16, "glm", FALSE);
    check L127() else D47();
  L128():
    infl21 = ld infl;
    check L129() else D48();
  D47():
    deopt 166 [r119];
  D48():
    deopt 167 [infl21];
  D54():
    deopt 185 [e9];
  D59():
    deopt 200 [is_mlm2];
  L127():
    goto L17(r119);
  L129():
    infl22 = force? infl21;
    checkMissing(infl22);
    c15 = `is.object`(infl22);
    if c15 then L131() else L132(infl22);
  L144():
    e10 = force? e9;
    checkMissing(e10);
    s2 = ld s;
    check L145() else D55();
  L149():
    is_mlm3 = force? is_mlm2;
    checkMissing(is_mlm3);
    c17 = `as.logical`(is_mlm3);
    if c17 then L150() else L20();
  D55():
    deopt 186 [e10, s2];
  L20():
    cbind = ldf cbind;
    check L185() else D71();
  L29(a2):
    st infmat = a2;
    l32 = ld infmat;
    c26 = `is.object`(l32);
    if c26 then L187() else L188(NA_REAL, l32);
  L130(dx23):
    h6 = ld h;
    check L134() else D49();
  L131():
    dr22 = tryDispatchBuiltin.1("$", infl22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L133() else L132(dr22);
  L132(infl24):
    r120 = `$`(infl24, <sym pear.res>);
    goto L130(r120);
  L145():
    s3 = force? s2;
    checkMissing(s3);
    h10 = ld h;
    check L146() else D56();
  L150():
    sym11 = ldf dimnames;
    base11 = ldf dimnames in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L151() else L152();
  D49():
    deopt 170 [dx23, 1.0, h6];
  D56():
    deopt 188 [e10, s3, 1.0, h10];
  D71():
    deopt 275 [];
  L21(r144):
    st dns = r144;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L155() else L156();
  L30(dx39):
    st infmat = dx39;
    is_influential = ldf `is.influential`;
    check L194() else D75();
  L133():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L130(dx22);
  L134():
    h7 = force? h6;
    checkMissing(h7);
    r121 = `-`(1.0, h7);
    r122 = `/`(dx23, r121);
    r123 = `^`(r122, 2.0);
    h8 = ld h;
    check L135() else D50();
  L146():
    h11 = force? h10;
    checkMissing(h11);
    r137 = `-`(1.0, h11);
    r138 = `*`(s3, r137);
    r139 = `/`(e10, r138);
    r140 = `^`(r139, 2.0);
    h12 = ld h;
    check L147() else D57();
  L151():
    dfbetas2 = ld dfbetas;
    check L153() else D60();
  L152():
    r143 = dyn base11(<sym dfbetas>);
    goto L21(r143);
  L185():
    p25 = prom<V +>{
      dfbetas8 = ld dfbetas;
      dfbetas9 = force? dfbetas8;
      checkMissing(dfbetas9);
      return dfbetas9;
    };
    p26 = prom<V +>{
      dffits8 = ld dffits;
      dffits9 = force? dffits8;
      checkMissing(dffits9);
      return dffits9;
    };
    p27 = prom<V +>{
      cov_ratio6 = ld `cov.ratio`;
      cov_ratio7 = force? cov_ratio6;
      checkMissing(cov_ratio7);
      return cov_ratio7;
    };
    p28 = prom<V +>{
      cooks_d6 = ld `cooks.d`;
      cooks_d7 = force? cooks_d6;
      checkMissing(cooks_d7);
      return cooks_d7;
    };
    p29 = prom<V +>{
      h20 = ld h;
      h21 = force? h20;
      checkMissing(h21);
      return h21;
    };
    r178 = dyn cbind[, dffit, `cov.r`, `cook.d`, hat](p25, p26, p27, p28, p29);
    check L186() else D72();
  L187():
    dr38 = tryDispatchBuiltin.0("[<-", l32, NA_REAL);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L189() else L188(NA_REAL, dr38);
  L188(r180, l34):
    sym15 = ldf `is.infinite`;
    base15 = ldf `is.infinite` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L190() else L191();
  D50():
    deopt 175 [r123, h8];
  D57():
    deopt 194 [r140, h12];
  D60():
    deopt 204 [dfbetas2];
  D72():
    deopt 285 [r178];
  D75():
    deopt 299 [];
  L22(r147):
    l17 = ld dns;
    c20 = `is.object`(l17);
    if c20 then L162() else L163(r147, l17);
  L31(r188, l37, r189, r190):
    ___6 = ldf `[<-` in base;
    r192 = dyn ___6(l37, r189, r190);
    goto L30(r192);
  L135():
    h9 = force? h8;
    checkMissing(h9);
    r124 = `*`(r123, h9);
    summary = ldf summary;
    check L136() else D51();
  L147():
    h13 = force? h12;
    checkMissing(h13);
    r141 = `*`(r140, h13);
    p20 = ld p;
    check L148() else D58();
  L153():
    dfbetas3 = force? dfbetas2;
    checkMissing(dfbetas3);
    dimnames1 = ldf dimnames in base;
    r145 = dyn dimnames1(dfbetas3);
    check L154() else D61();
  L155():
    dns = ld dns;
    check L157() else D62();
  L156():
    r146 = dyn base12(<lang `[[`(dns, 3.0)>, "dffit", "cov.r", "cook.d", "hat");
    goto L22(r146);
  L186():
    goto L29(r178);
  L189():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L30(dx38);
  L190():
    infmat = ld infmat;
    check L192() else D73();
  L191():
    r187 = dyn base15(<sym infmat>);
    goto L31(r180, l34, NA_REAL, r187);
  L194():
    p30 = prom<V +>{
      infmat2 = ld infmat;
      infmat3 = force? infmat2;
      checkMissing(infmat3);
      return infmat3;
    };
    p31 = prom<V +>{
      sym16 = ldf sum;
      base16 = ldf sum in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r195):
      return r195;
    L1():
      h22 = ld h;
      h23 = force? h22;
      checkMissing(h23);
      r196 = `>`(h23, 0.0);
      sum1 = ldf sum in base;
      r197 = dyn sum1(r196);
      goto L0(r197);
    L2():
      r194 = dyn base16(<lang `>`(h, 0.0)>);
      goto L0(r194);
    };
    r199 = dyn is_influential(p30, p31);
    check L195() else D76();
  D51():
    deopt 178 [r124];
  D58():
    deopt 196 [r141, p20];
  D61():
    deopt 207 [r145];
  D62():
    deopt 211 [dns];
  D73():
    deopt 292 [r180, l34, NA_REAL, infmat];
  D76():
    deopt 302 [r199];
  L24(dx29):
    st dns = dx29;
    array = ldf array;
    check L165() else D64();
  L136():
    p17 = prom<V +>{
      model17 = ld model;
      model18 = force? model17;
      checkMissing(model18);
      return model18;
    };
    r126 = dyn summary(p17);
    check L137() else D52();
  L148():
    p21 = force? p20;
    checkMissing(p21);
    r142 = `/`(r141, p21);
    goto L19(r142);
  L154():
    goto L21(r145);
  L157():
    dns1 = force? dns;
    checkMissing(dns1);
    c18 = `is.object`(dns1);
    if c18 then L158() else L159(dns1);
  L162():
    dr28 = tryDispatchBuiltin.0("[[<-", l17, r147);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L164() else L163(r147, dr28);
  L163(r151, l19):
    ____1 = ldf `[[<-` in base;
    r154 = dyn ____1(l19, r147, 3.0);
    goto L24(r154);
  L192():
    infmat1 = force? infmat;
    checkMissing(infmat1);
    is_infinite1 = ldf `is.infinite` in base;
    r191 = dyn is_infinite1(infmat1);
    check L193() else D74();
  L195():
    st `is.inf` = r199;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L196() else L197();
  D52():
    deopt 180 [r124, r126];
  D64():
    deopt 228 [];
  D74():
    deopt 295 [r180, l34, NA_REAL, r191];
  L23(dx27):
    c19 = ldf c in base;
    r149 = dyn c19(dx27, "dffit", "cov.r", "cook.d", "hat");
    check L161() else D63();
  L32(r201):
    st ans = r201;
    l38 = ld ans;
    class__ = ldf `class<-`;
    check L206() else D81();
  L137():
    c16 = `is.object`(r126);
    if c16 then L139() else L140(r124, r126);
  L158():
    dr26 = tryDispatchBuiltin.1("[[", dns1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L160() else L159(dr26);
  L159(dns3):
    __ = ldf `[[` in base;
    r148 = dyn __(dns3, 3.0);
    goto L23(r148);
  L164():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L24(dx28);
  L165():
    p22 = prom<V +>{
      dfbetas4 = ld dfbetas;
      dfbetas5 = force? dfbetas4;
      checkMissing(dfbetas5);
      return dfbetas5;
    };
    p23 = prom<V +>{
      sym13 = ldf dim;
      base13 = ldf dim in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r157):
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L4() else L5();
    L2():
      dfbetas6 = ld dfbetas;
      dfbetas7 = force? dfbetas6;
      checkMissing(dfbetas7);
      dim1 = ldf dim in base;
      r158 = dyn dim1(dfbetas7);
      goto L0(r158);
    L3():
      r156 = dyn base13(<sym dfbetas>);
      goto L0(r156);
    L1(r162, r163):
      r165 = `+`(r162, r163);
      return r165;
    L4():
      c21 = ldf c in base;
      r164 = dyn c21(0.0, 0.0, 4.0);
      goto L1(r157, r164);
    L5():
      r161 = dyn base14(0.0, 0.0, <lang `+`(3.0, 1.0)>);
      goto L1(r157, r161);
    };
    p24 = prom<V +>{
      dns4 = ld dns;
      dns5 = force? dns4;
      checkMissing(dns5);
      return dns5;
    };
    r168 = dyn array[, dim, dimnames](p22, p23, p24);
    check L166() else D65();
  L193():
    goto L31(r180, l34, NA_REAL, r191);
  L196():
    infmat4 = ld infmat;
    check L198() else D77();
  L197():
    r200 = dyn base17[infmat, `is.inf`, call](<sym infmat>, <sym is.inf>, <lang `$`(model, call)>);
    goto L32(r200);
  D63():
    deopt 221 [r149];
  D65():
    deopt 234 [r168];
  D77():
    deopt 306 [infmat4];
  D81():
    deopt 322 ["infl", l38, "infl"];
  L138(r132, dx25):
    p18 = ld p;
    check L142() else D53();
  L139():
    dr24 = tryDispatchBuiltin.1("$", r126);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L141() else L140(r124, dr24);
  L140(r129, r130):
    r133 = `$`(r130, <sym dispersion>);
    goto L138(r129, r133);
  L160():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L23(dx26);
  L161():
    goto L22(r149);
  L166():
    st a = r168;
    dffits2 = ld dffits;
    check L167() else D66();
  L198():
    infmat5 = force? infmat4;
    checkMissing(infmat5);
    is_inf = ld `is.inf`;
    check L199() else D78();
  L206():
    r204 = dyn class__(l38, NULL, "infl");
    check L207() else D82();
  D53():
    deopt 181 [r132, dx25, p18];
  D66():
    deopt 236 [dffits2];
  D78():
    deopt 309 [is_inf];
  D82():
    deopt 324 ["infl", r204];
  L141():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L138(r124, dx24);
  L142():
    p19 = force? p18;
    checkMissing(p19);
    r134 = `*`(dx25, p19);
    r135 = `/`(r132, r134);
    goto L19(r135);
  L167():
    dffits3 = force? dffits2;
    checkMissing(dffits3);
    l20 = ld a;
    c22 = `is.object`(l20);
    if c22 then L168() else L169(dffits3);
  L199():
    is_inf1 = force? is_inf;
    checkMissing(is_inf1);
    model19 = ld model;
    check L200() else D79();
  L207():
    st ans = r204;
    ans = ld ans;
    check L208() else D83();
  D79():
    deopt 312 [model19];
  D83():
    deopt 326 [ans];
  L25(dx31):
    st a = dx31;
    cov_ratio = ld `cov.ratio`;
    check L171() else D67();
  L168():
    dr30 = tryDispatchBuiltin.0("[<-", l20, dffits3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L170() else L169(dffits3);
  L169(dffits5):
    ___2 = ldf `[<-` in base;
    r169 = dyn ___2(l20, <missing>, <missing>, "dffit", dffits3);
    goto L25(r169);
  L200():
    model20 = force? model19;
    checkMissing(model20);
    c27 = `is.object`(model20);
    if c27 then L202() else L203(model20);
  L208():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D67():
    deopt 245 [cov_ratio];
  L170():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L25(dx30);
  L171():
    cov_ratio1 = force? cov_ratio;
    checkMissing(cov_ratio1);
    l23 = ld a;
    c23 = `is.object`(l23);
    if c23 then L172() else L173(cov_ratio1);
  L201(dx41):
    list = ldf list in base;
    r203 = dyn list(infmat5, is_inf1, dx41);
    check L205() else D80();
  L202():
    dr40 = tryDispatchBuiltin.1("$", model20);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L204() else L203(dr40);
  L203(model22):
    r202 = `$`(model22, <sym call>);
    goto L201(r202);
  D80():
    deopt 317 [r203];
  L26(dx33):
    st a = dx33;
    cooks_d = ld `cooks.d`;
    check L175() else D68();
  L172():
    dr32 = tryDispatchBuiltin.0("[<-", l23, cov_ratio1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L174() else L173(cov_ratio1);
  L173(cov_ratio3):
    ___3 = ldf `[<-` in base;
    r170 = dyn ___3(l23, <missing>, <missing>, "cov.r", cov_ratio1);
    goto L26(r170);
  L204():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L201(dx40);
  L205():
    goto L32(r203);
  D68():
    deopt 254 [cooks_d];
  L174():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L26(dx32);
  L175():
    cooks_d1 = force? cooks_d;
    checkMissing(cooks_d1);
    l26 = ld a;
    c24 = `is.object`(l26);
    if c24 then L176() else L177(cooks_d1);
  L27(dx35):
    st a = dx35;
    h14 = ld h;
    check L179() else D69();
  L176():
    dr34 = tryDispatchBuiltin.0("[<-", l26, cooks_d1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L178() else L177(cooks_d1);
  L177(cooks_d3):
    ___4 = ldf `[<-` in base;
    r171 = dyn ___4(l26, <missing>, <missing>, "cook.d", cooks_d1);
    goto L27(r171);
  D69():
    deopt 263 [h14];
  L178():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L27(dx34);
  L179():
    h15 = force? h14;
    checkMissing(h15);
    l29 = ld a;
    c25 = `is.object`(l29);
    if c25 then L180() else L181(h15);
  L28(dx37):
    st a = dx37;
    a = ld a;
    check L183() else D70();
  L180():
    dr36 = tryDispatchBuiltin.0("[<-", l29, h15);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L182() else L181(h15);
  L181(h17):
    ___5 = ldf `[<-` in base;
    r172 = dyn ___5(l29, <missing>, <missing>, "hat", h15);
    goto L28(r172);
  D70():
    deopt 272 [a];
  L182():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L28(dx36);
  L183():
    a1 = force? a;
    checkMissing(a1);
    goto L29(a1);
  }
}
fun inner785282679(infmat, n) {
  (reg infmat:*, reg n:*) -+> V { var infmat:*, var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg infmat1:*, reg infmat2:V, reg dim:cls, reg r2:V, reg d:*, reg d1:V, reg c:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg d6:V, reg r4:V, reg d7:*, reg d8:V, reg length:cls, reg r5:V, reg __:cls, reg r6:V, reg r7:V, reg n1:*, reg n2:V, reg k:*, reg k1:V, reg r8:V, reg c1:L, reg stop:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg infmat3:*, reg infmat4:V, reg abs:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg infmat5:*, reg infmat6:V, reg is_matrix:cls, reg r16:V, reg c2:L, reg cbind:cls, reg absmat:*, reg absmat1:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg k2:*, reg k3:V, reg r17:V, reg __1:cls, reg r18:V, reg r19:V, reg p:p(V +), reg absmat4:*, reg absmat5:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg k4:*, reg k5:V, reg r21:V, reg __2:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg dx8:V, reg r26:R, reg r27:V, reg k6:*, reg k7:V, reg n3:*, reg n4:V, reg k8:*, reg k9:V, reg r28:V, reg r29:V, reg r30:V, reg r31:V, reg r32:V, reg p1:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg infmat7:*, reg infmat8:V, reg c5:L, reg r37:R, reg dr6:V, reg dc3:L, reg dx9:V, reg r39:R, reg dx10:V, reg k10:*, reg k11:V, reg r40:V, reg __3:cls, reg r41:V, reg r42:V, reg abs1:cls, reg r43:V, reg k12:*, reg k13:V, reg r44:V, reg n5:*, reg n6:V, reg k14:*, reg k15:V, reg r45:V, reg r46:V, reg r47:V, reg p2:p(V +), reg pf:cls, reg infmat11:*, reg infmat12:V, reg c6:L, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg k16:*, reg k17:V, reg r49:V, reg __4:cls, reg r50:V, reg p3:p(V +), reg k18:*, reg k19:V, reg p4:p(V +), reg n7:*, reg n8:V, reg k20:*, reg k21:V, reg r53:V, reg p5:p(V +), reg r55:V, reg r56:V, reg p6:p(V +), reg infmat15:*, reg infmat16:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg k22:*, reg k23:V, reg r58:V, reg __5:cls, reg r59:V, reg k24:*, reg k25:V, reg r60:V, reg n9:*, reg n10:V, reg r61:V, reg r62:V, reg p7:p(V +), reg r64:V, reg r65:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg absmat8:*, reg absmat9:V, reg c8:L, reg absmat11:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg k26:*, reg k27:V, reg r67:V, reg __6:cls, reg r68:V, reg r69:V, reg absmat12:*, reg absmat13:V, reg c9:L, reg absmat15:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg k28:*, reg k29:V, reg r70:V, reg __7:cls, reg r71:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg dx21:V, reg r75:R, reg r76:V, reg k30:*, reg k31:V, reg n11:*, reg n12:V, reg k32:*, reg k33:V, reg r77:V, reg r78:V, reg r79:V, reg r80:V, reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg infmat19:*, reg infmat20:V, reg c10:L, reg r85:R, reg infmat22:V, reg dr16:V, reg dc8:L, reg dx22:V, reg r87:R, reg dx23:V, reg k34:*, reg k35:V, reg r88:V, reg __8:cls, reg r89:V, reg r90:V, reg abs2:cls, reg r91:V, reg k36:*, reg k37:V, reg r92:V, reg n13:*, reg n14:V, reg k38:*, reg k39:V, reg r93:V, reg r94:V, reg r95:V, reg pf1:cls, reg infmat23:*, reg infmat24:V, reg c11:L, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg k40:*, reg k41:V, reg r96:V, reg __9:cls, reg r97:V, reg p8:p(V +), reg k42:*, reg k43:V, reg p9:p(V +), reg n15:*, reg n16:V, reg k44:*, reg k45:V, reg r100:V, reg p10:p(V +), reg r102:V, reg r103:V, reg infmat27:*, reg infmat28:V, reg c12:L, reg infmat30:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg k46:*, reg k47:V, reg r104:V, reg __10:cls, reg r105:V, reg k48:*, reg k49:V, reg r106:V, reg n17:*, reg n18:V, reg r107:V, reg r108:V, reg c13:cls, reg r109:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r110:V, reg r111:V, reg infmat31:*, reg infmat32:V, reg attributes:cls, reg r112:V, reg l:*, reg attributes__:cls, reg r113:V, reg r114:*, reg r115:V |
    mkenv;
    st infmat = infmat;
    st n = n;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st d = r1;
    d = ld d;
    check L20() else D2();
  L16():
    infmat1 = ld infmat;
    check L18() else D0();
  L17():
    r = dyn base(<sym infmat>);
    goto L0(r);
  D0():
    deopt 2 [infmat1];
  D2():
    deopt 7 [d];
  L18():
    infmat2 = force? infmat1;
    checkMissing(infmat2);
    dim = ldf dim in base;
    r2 = dyn dim(infmat2);
    check L19() else D1();
  L20():
    d1 = force? d;
    checkMissing(d1);
    c = `is.object`(d1);
    if c then L21() else L22(d1);
  D1():
    deopt 5 [r2];
  L1(dx1):
    r7 = `-`(dx1, 4);
    st k = r7;
    n1 = ld n;
    check L28() else D5();
  L19():
    goto L0(r2);
  L21():
    dr = tryDispatchBuiltin.1("[[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(d3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D5():
    deopt 19 [n1];
  L2(d6, r4):
    __ = ldf `[[` in base;
    r6 = dyn __(d6, r4);
    goto L1(r6);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L24():
    d7 = ld d;
    check L26() else D3();
  L25():
    r3 = dyn base1(<sym d>);
    goto L2(d3, r3);
  L28():
    n2 = force? n1;
    checkMissing(n2);
    k = ld k;
    check L29() else D6();
  D3():
    deopt 11 [d3, d7];
  D6():
    deopt 20 [n2, k];
  L26():
    d8 = force? d7;
    checkMissing(d8);
    length = ldf length in base;
    r5 = dyn length(d8);
    check L27() else D4();
  L29():
    k1 = force? k;
    checkMissing(k1);
    r8 = `<=`(n2, k1);
    c1 = `as.logical`(r8);
    if c1 then L30() else L3();
  D4():
    deopt 14 [d3, r5];
  L3():
    goto L4();
  L4():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L27():
    goto L2(d3, r5);
  L30():
    stop = ldf stop;
    check L31() else D7();
  D7():
    deopt 24 [];
  L5(r12):
    st absmat = r12;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L31():
    r9 = dyn stop("too few cases i with h_ii > 0), n < k");
    check L32() else D8();
  L34():
    infmat3 = ld infmat;
    check L36() else D9();
  L35():
    r11 = dyn base2(<sym infmat>);
    goto L5(r11);
  D8():
    deopt 26 [r9];
  D9():
    deopt 31 [infmat3];
  L6(r15):
    c2 = `as.logical`(r15);
    if c2 then L42() else L7();
  L32():
    goto L4();
  L36():
    infmat4 = force? infmat3;
    checkMissing(infmat4);
    abs = ldf abs in base;
    r13 = dyn abs(infmat4);
    check L37() else D10();
  L38():
    infmat5 = ld infmat;
    check L40() else D11();
  L39():
    r14 = dyn base3(<sym infmat>);
    goto L6(r14);
  D10():
    deopt 34 [r13];
  D11():
    deopt 38 [infmat5];
  L7():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  L8(r65):
    st r = r65;
    sym9 = ldf attributes;
    base9 = ldf attributes in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L37():
    goto L5(r13);
  L40():
    infmat6 = force? infmat5;
    checkMissing(infmat6);
    is_matrix = ldf `is.matrix` in base;
    r16 = dyn is_matrix(infmat6);
    check L41() else D12();
  L42():
    cbind = ldf cbind;
    check L43() else D13();
  D12():
    deopt 41 [r16];
  D13():
    deopt 43 [];
  L15(r111):
    l = ld r;
    attributes__ = ldf `attributes<-`;
    check L88() else D37();
  L41():
    goto L6(r16);
  L43():
    p = prom<V +>{
      absmat = ld absmat;
      absmat1 = force? absmat;
      checkMissing(absmat1);
      c3 = `is.object`(absmat1);
      if c3 then L1() else L2();
    L0(dx3):
      r19 = `>`(dx3, 1.0);
      return r19;
    L1():
      dr2 = tryDispatchBuiltin.1("[", absmat1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      r17 = `:`(1, k3);
      __1 = ldf `[` in base;
      r18 = dyn __1(absmat1, <missing>, r17);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      absmat4 = ld absmat;
      absmat5 = force? absmat4;
      checkMissing(absmat5);
      c4 = `is.object`(absmat5);
      if c4 then L2() else L3();
    L0(dx5):
      sym4 = ldf sqrt;
      base4 = ldf sqrt in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L2():
      dr4 = tryDispatchBuiltin.1("[", absmat5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3();
    L3():
      k4 = ld k;
      k5 = force? k4;
      checkMissing(k5);
      r21 = `+`(k5, 1.0);
      __2 = ldf `[` in base;
      r22 = dyn __2(absmat5, <missing>, r21);
      goto L0(r22);
    L1(dx8, r26, r27):
      r31 = `*`(r26, r27);
      r32 = `>`(dx8, r31);
      return r32;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      k6 = ld k;
      k7 = force? k6;
      checkMissing(k7);
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      k8 = ld k;
      k9 = force? k8;
      checkMissing(k9);
      r28 = `-`(n4, k9);
      r29 = `/`(k7, r28);
      r30 = sqrt(r29);
      goto L1(dx5, 3.0, r30);
    L6():
      r25 = dyn base4(<lang `/`(k, `(`(`-`(n, k)))>);
      goto L1(dx5, 3.0, r25);
    };
    p2 = prom<V +>{
      sym5 = ldf abs;
      base5 = ldf abs in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r35):
      k12 = ld k;
      k13 = force? k12;
      checkMissing(k13);
      r44 = `*`(3.0, k13);
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      k14 = ld k;
      k15 = force? k14;
      checkMissing(k15);
      r45 = `-`(n6, k15);
      r46 = `/`(r44, r45);
      r47 = `>`(r35, r46);
      return r47;
    L2():
      infmat7 = ld infmat;
      infmat8 = force? infmat7;
      checkMissing(infmat8);
      c5 = `is.object`(infmat8);
      if c5 then L4() else L5(1.0);
    L3():
      r34 = dyn base5(<lang `-`(1.0, `[`(infmat, , `+`(k, 2.0)))>);
      goto L0(r34);
    L1(r39, dx10):
      r42 = `-`(r39, dx10);
      abs1 = ldf abs in base;
      r43 = dyn abs1(r42);
      goto L0(r43);
    L4():
      dr6 = tryDispatchBuiltin.1("[", infmat8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(1.0);
    L5(r37):
      k10 = ld k;
      k11 = force? k10;
      checkMissing(k11);
      r40 = `+`(k11, 2.0);
      __3 = ldf `[` in base;
      r41 = dyn __3(infmat8, <missing>, r40);
      goto L1(r37, r41);
    L6():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L1(1.0, dx9);
    };
    p6 = prom<V +>{
      pf = ldf pf;
      p3 = prom<V +>{
        infmat11 = ld infmat;
        infmat12 = force? infmat11;
        checkMissing(infmat12);
        c6 = `is.object`(infmat12);
        if c6 then L1() else L2();
      L0(dx12):
        return dx12;
      L1():
        dr8 = tryDispatchBuiltin.1("[", infmat12);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        k16 = ld k;
        k17 = force? k16;
        checkMissing(k17);
        r49 = `+`(k17, 3.0);
        __4 = ldf `[` in base;
        r50 = dyn __4(infmat12, <missing>, r49);
        goto L0(r50);
      L3():
        dx11 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx11);
      };
      p4 = prom<V +>{
        k18 = ld k;
        k19 = force? k18;
        checkMissing(k19);
        return k19;
      };
      p5 = prom<V +>{
        n7 = ld n;
        n8 = force? n7;
        checkMissing(n8);
        k20 = ld k;
        k21 = force? k20;
        checkMissing(k21);
        r53 = `-`(n8, k21);
        return r53;
      };
      r55 = dyn pf(p3, p4, p5);
      r56 = `>`(r55, 0.5);
      return r56;
    };
    p7 = prom<V +>{
      infmat15 = ld infmat;
      infmat16 = force? infmat15;
      checkMissing(infmat16);
      c7 = `is.object`(infmat16);
      if c7 then L1() else L2();
    L0(dx14):
      k24 = ld k;
      k25 = force? k24;
      checkMissing(k25);
      r60 = `*`(3.0, k25);
      n9 = ld n;
      n10 = force? n9;
      checkMissing(n10);
      r61 = `/`(r60, n10);
      r62 = `>`(dx14, r61);
      return r62;
    L1():
      dr10 = tryDispatchBuiltin.1("[", infmat16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      k22 = ld k;
      k23 = force? k22;
      checkMissing(k23);
      r58 = `+`(k23, 4.0);
      __5 = ldf `[` in base;
      r59 = dyn __5(infmat16, <missing>, r58);
      goto L0(r59);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx13);
    };
    r64 = dyn cbind(p, p1, p2, p6, p7);
    check L44() else D14();
  L46():
    absmat8 = ld absmat;
    check L48() else D15();
  L47():
    r66 = dyn base6(<lang `>`(`[`(absmat, , , `:`(1, k)), 1.0)>, <lang `>`(`[`(absmat, , , `+`(k, 1.0)), `*`(3.0, sqrt(`/`(k, `(`(`-`(n, k))))))>, <lang `>`(abs(`-`(1.0, `[`(infmat, , , `+`(k, 2.0)))), `/`(`(`(`*`(3.0, k)), `(`(`-`(n, k))))>, <lang `>`(pf(`[`(infmat, , , `+`(k, 3.0)), k, `-`(n, k)), 0.5)>, <lang `>`(`[`(infmat, , , `+`(k, 4.0)), `/`(`(`(`*`(3.0, k)), n))>);
    goto L8(r66);
  L84():
    infmat31 = ld infmat;
    check L86() else D35();
  L85():
    r110 = dyn base9(<sym infmat>);
    goto L15(r110);
  D14():
    deopt 49 [r64];
  D15():
    deopt 52 [absmat8];
  D35():
    deopt 137 [infmat31];
  D37():
    deopt 142 [r111, l, r111];
  L44():
    goto L8(r64);
  L48():
    absmat9 = force? absmat8;
    checkMissing(absmat9);
    c8 = `is.object`(absmat9);
    if c8 then L49() else L50(absmat9);
  L86():
    infmat32 = force? infmat31;
    checkMissing(infmat32);
    attributes = ldf attributes in base;
    r112 = dyn attributes(infmat32);
    check L87() else D36();
  L88():
    r113 = dyn attributes__(l, NULL, r111);
    check L89() else D38();
  D36():
    deopt 140 [r112];
  D38():
    deopt 144 [r111, r113];
  L9(dx16):
    r69 = `>`(dx16, 1.0);
    absmat12 = ld absmat;
    check L53() else D17();
  L49():
    dr12 = tryDispatchBuiltin.1("[", absmat9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L51() else L50(dr12);
  L50(absmat11):
    k26 = ld k;
    check L52() else D16();
  L87():
    goto L15(r112);
  L89():
    st r = r113;
    r114 = ld r;
    check L90() else D39();
  D16():
    deopt 57 [absmat11, 1, k26];
  D17():
    deopt 64 [absmat12];
  D39():
    deopt 146 [r114];
  L51():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L9(dx15);
  L52():
    k27 = force? k26;
    checkMissing(k27);
    r67 = `:`(1, k27);
    __6 = ldf `[` in base;
    r68 = dyn __6(absmat9, <missing>, <missing>, r67);
    goto L9(r68);
  L53():
    absmat13 = force? absmat12;
    checkMissing(absmat13);
    c9 = `is.object`(absmat13);
    if c9 then L54() else L55(absmat13);
  L90():
    r115 = force? r114;
    checkMissing(r115);
    popenv;
    return r115;
  L10(dx18):
    sym7 = ldf sqrt;
    base7 = ldf sqrt in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L54():
    dr14 = tryDispatchBuiltin.1("[", absmat13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L56() else L55(dr14);
  L55(absmat15):
    k28 = ld k;
    check L57() else D18();
  D18():
    deopt 68 [absmat15, k28];
  L11(dx21, r75, r76):
    r80 = `*`(r75, r76);
    r81 = `>`(dx21, r80);
    sym8 = ldf abs;
    base8 = ldf abs in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L63() else L64();
  L56():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L10(dx17);
  L57():
    k29 = force? k28;
    checkMissing(k29);
    r70 = `+`(k29, 1.0);
    __7 = ldf `[` in base;
    r71 = dyn __7(absmat13, <missing>, <missing>, r70);
    goto L10(r71);
  L58():
    k30 = ld k;
    check L60() else D19();
  L59():
    r74 = dyn base7(<lang `/`(k, `(`(`-`(n, k)))>);
    goto L11(dx18, 3.0, r74);
  D19():
    deopt 75 [dx18, 3.0, k30];
  L12(r83):
    k36 = ld k;
    check L71() else D25();
  L60():
    k31 = force? k30;
    checkMissing(k31);
    n11 = ld n;
    check L61() else D20();
  L63():
    infmat19 = ld infmat;
    check L65() else D22();
  L64():
    r82 = dyn base8(<lang `-`(1.0, `[`(infmat, , , `+`(k, 2.0)))>);
    goto L12(r82);
  D20():
    deopt 76 [dx18, 3.0, k31, n11];
  D22():
    deopt 87 [1.0, infmat19];
  D25():
    deopt 100 [r83, 3.0, k36];
  L61():
    n12 = force? n11;
    checkMissing(n12);
    k32 = ld k;
    check L62() else D21();
  L65():
    infmat20 = force? infmat19;
    checkMissing(infmat20);
    c10 = `is.object`(infmat20);
    if c10 then L66() else L67(1.0, infmat20);
  L71():
    k37 = force? k36;
    checkMissing(k37);
    r92 = `*`(3.0, k37);
    n13 = ld n;
    check L72() else D26();
  D21():
    deopt 77 [dx18, 3.0, k31, n12, k32];
  D26():
    deopt 102 [r83, r92, n13];
  L13(r87, dx23):
    r90 = `-`(r87, dx23);
    abs2 = ldf abs in base;
    r91 = dyn abs2(r90);
    check L70() else D24();
  L62():
    k33 = force? k32;
    checkMissing(k33);
    r77 = `-`(n12, k33);
    r78 = `/`(k31, r77);
    r79 = sqrt(r78);
    goto L11(dx18, 3.0, r79);
  L66():
    dr16 = tryDispatchBuiltin.1("[", infmat20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L68() else L67(1.0, dr16);
  L67(r85, infmat22):
    k34 = ld k;
    check L69() else D23();
  L72():
    n14 = force? n13;
    checkMissing(n14);
    k38 = ld k;
    check L73() else D27();
  D23():
    deopt 91 [r85, infmat22, k34];
  D24():
    deopt 99 [r91];
  D27():
    deopt 103 [r83, r92, n14, k38];
  L68():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L13(1.0, dx22);
  L69():
    k35 = force? k34;
    checkMissing(k35);
    r88 = `+`(k35, 2.0);
    __8 = ldf `[` in base;
    r89 = dyn __8(infmat20, <missing>, <missing>, r88);
    goto L13(r85, r89);
  L70():
    goto L12(r91);
  L73():
    k39 = force? k38;
    checkMissing(k39);
    r93 = `-`(n14, k39);
    r94 = `/`(r92, r93);
    r95 = `>`(r83, r94);
    pf1 = ldf pf;
    check L74() else D28();
  D28():
    deopt 109 [];
  L74():
    p8 = prom<V +>{
      infmat23 = ld infmat;
      infmat24 = force? infmat23;
      checkMissing(infmat24);
      c11 = `is.object`(infmat24);
      if c11 then L1() else L2();
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("[", infmat24);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      k40 = ld k;
      k41 = force? k40;
      checkMissing(k41);
      r96 = `+`(k41, 3.0);
      __9 = ldf `[` in base;
      r97 = dyn __9(infmat24, <missing>, <missing>, r96);
      goto L0(r97);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    p9 = prom<V +>{
      k42 = ld k;
      k43 = force? k42;
      checkMissing(k43);
      return k43;
    };
    p10 = prom<V +>{
      n15 = ld n;
      n16 = force? n15;
      checkMissing(n16);
      k44 = ld k;
      k45 = force? k44;
      checkMissing(k45);
      r100 = `-`(n16, k45);
      return r100;
    };
    r102 = dyn pf1(p8, p9, p10);
    check L75() else D29();
  D29():
    deopt 113 [r102];
  L75():
    r103 = `>`(r102, 0.5);
    infmat27 = ld infmat;
    check L76() else D30();
  D30():
    deopt 116 [infmat27];
  L76():
    infmat28 = force? infmat27;
    checkMissing(infmat28);
    c12 = `is.object`(infmat28);
    if c12 then L77() else L78(infmat28);
  L14(dx27):
    k48 = ld k;
    check L81() else D32();
  L77():
    dr20 = tryDispatchBuiltin.1("[", infmat28);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L79() else L78(dr20);
  L78(infmat30):
    k46 = ld k;
    check L80() else D31();
  D31():
    deopt 120 [infmat30, k46];
  D32():
    deopt 126 [dx27, 3.0, k48];
  L79():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L14(dx26);
  L80():
    k47 = force? k46;
    checkMissing(k47);
    r104 = `+`(k47, 4.0);
    __10 = ldf `[` in base;
    r105 = dyn __10(infmat28, <missing>, <missing>, r104);
    goto L14(r105);
  L81():
    k49 = force? k48;
    checkMissing(k49);
    r106 = `*`(3.0, k49);
    n17 = ld n;
    check L82() else D33();
  D33():
    deopt 128 [dx27, r106, n17];
  L82():
    n18 = force? n17;
    checkMissing(n18);
    r107 = `/`(r106, n18);
    r108 = `>`(dx27, r107);
    c13 = ldf c in base;
    r109 = dyn c13(r69, r81, r95, r103, r108);
    check L83() else D34();
  D34():
    deopt 133 [r109];
  L83():
    goto L8(r109);
  }
}