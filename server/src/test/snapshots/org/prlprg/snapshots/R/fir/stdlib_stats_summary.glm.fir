fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3265645067;
    st `summary.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3265645067(object, dispersion, correlation, `symbolic.cor`, `...`) {
  (reg object:*, reg dispersion:*, reg correlation:*, reg symbolic_cor:*, reg ddd:dots) -+> V { var object:*, var dispersion:*, reg dispersion_isMissing:L, reg dispersion_orDefault:*, var correlation:*, reg correlation_isMissing:L, reg correlation_orDefault:*, var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg dispersion1:*, reg dispersion2:V, reg c1:V, reg c2:L, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg fam:*, reg fam1:V, reg c4:L, reg fam3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg c5:V, reg r7:V, reg c6:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c11:L, reg r9:V, reg fam4:*, reg fam5:V, reg c12:L, reg c14:L, reg fam7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c16:L, reg dx7:V, reg r10:V, reg is_na:cls, reg r11:V, reg r12:V, reg c17:L, reg c18:V, reg c20:L, reg fam8:*, reg fam9:V, reg c21:L, reg fam11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r13:V, reg dx10:V, reg _in_:cls, reg fam12:*, reg fam13:V, reg c22:L, reg fam15:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r14:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c23:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg c24:L, reg df_r:*, reg df_r1:V, reg r21:V, reg c25:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg object9:*, reg object10:V, reg c26:L, reg object12:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r24:V, reg r25:V, reg any:cls, reg r26:V, reg c27:L, reg warning:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg object13:*, reg object14:V, reg c28:L, reg object16:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r31:V, reg object17:*, reg object18:V, reg c29:L, reg dx18:V, reg object20:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r32:V, reg r33:V, reg r34:V, reg c30:L, reg r36:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg object21:*, reg object22:V, reg c31:L, reg r38:V, reg object24:V, reg dr20:V, reg dc10:L, reg dx25:V, reg r40:V, reg dx26:V, reg r41:V, reg r42:V, reg __:cls, reg r43:V, reg sum:cls, reg r44:V, reg df_r2:*, reg df_r3:V, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg coef:cls, reg object25:*, reg object26:V, reg p2:p(V +), reg r49:V, reg is_na1:cls, reg r50:V, reg object27:*, reg object28:V, reg c32:L, reg object30:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r51:V, reg p3:*, reg p4:V, reg r52:V, reg c33:L, reg p5:*, reg p6:V, reg r53:V, reg qr_lm:cls, reg object31:*, reg object32:V, reg p7:p(V +), reg r55:V, reg object33:*, reg object34:V, reg c34:L, reg object36:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r56:V, reg c35:L, reg dx33:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg Qr:*, reg Qr1:V, reg c36:L, reg dx37:V, reg Qr3:V, reg dr28:V, reg dc14:L, reg dx39:V, reg dx40:V, reg dx41:V, reg r57:V, reg c37:L, reg dx44:V, reg dx45:V, reg dr30:V, reg dc15:L, reg dx47:V, reg dx48:V, reg dx49:V, reg p8:*, reg p9:V, reg __1:cls, reg r58:V, reg __2:cls, reg r59:V, reg chol2inv:cls, reg Qr4:*, reg Qr5:V, reg c38:L, reg Qr7:V, reg dr32:V, reg dc16:L, reg dx50:V, reg dx51:V, reg r60:V, reg c39:L, reg dr34:V, reg dc17:L, reg dx54:V, reg dx55:V, reg p10:*, reg p11:V, reg p12:*, reg p13:V, reg __3:cls, reg r61:V, reg p14:p(V +), reg r63:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg coef_p:*, reg coef_p1:V, reg names:cls, reg r68:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg coef_p2:*, reg coef_p3:V, reg names1:cls, reg r71:V, reg list:cls, reg r72:V, reg l:*, reg dimnames__:cls, reg r73:V, reg dispersion3:*, reg dispersion4:V, reg covmat_unscaled:*, reg covmat_unscaled1:V, reg r74:V, reg diag:cls, reg covmat:*, reg covmat1:V, reg p15:p(V +), reg r76:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r77:V, reg r78:V, reg var_cf:*, reg var_cf1:V, reg r79:V, reg coef_p4:*, reg coef_p5:V, reg s_err:*, reg s_err1:V, reg r80:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r82:V, reg c40:cls, reg r83:V, reg est_disp:*, reg est_disp1:V, reg r84:V, reg c41:L, reg pnorm:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg tvalue:*, reg tvalue1:V, reg abs:cls, reg r87:V, reg r88:V, reg p16:p(V +), reg r90:V, reg r91:V, reg cbind:cls, reg coef_p6:*, reg coef_p7:V, reg p17:p(V +), reg s_err2:*, reg s_err3:V, reg p18:p(V +), reg tvalue2:*, reg tvalue3:V, reg p19:p(V +), reg pvalue:*, reg pvalue1:V, reg p20:p(V +), reg r96:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg r100:V, reg coef_p8:*, reg coef_p9:V, reg names2:cls, reg r101:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r102:V, reg r103:V, reg dn:*, reg dn1:V, reg c42:cls, reg r104:V, reg list1:cls, reg r105:V, reg l1:*, reg dimnames__1:cls, reg r106:V, reg df_r4:*, reg df_r5:V, reg r108:V, reg c43:L, reg pt:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r109:V, reg r110:V, reg tvalue4:*, reg tvalue5:V, reg abs1:cls, reg r111:V, reg r112:V, reg p21:p(V +), reg df_r6:*, reg df_r7:V, reg p22:p(V +), reg r115:V, reg r116:V, reg cbind1:cls, reg coef_p10:*, reg coef_p11:V, reg p23:p(V +), reg s_err4:*, reg s_err5:V, reg p24:p(V +), reg tvalue6:*, reg tvalue7:V, reg p25:p(V +), reg pvalue2:*, reg pvalue3:V, reg p26:p(V +), reg r121:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r122:V, reg r123:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r124:V, reg r125:V, reg coef_p12:*, reg coef_p13:V, reg names3:cls, reg r126:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r127:V, reg r128:V, reg dn2:*, reg dn3:V, reg c44:cls, reg r129:V, reg list2:cls, reg r130:V, reg l2:*, reg dimnames__2:cls, reg r131:V, reg cbind2:cls, reg coef_p14:*, reg coef_p15:V, reg p27:p(V +), reg r133:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r134:V, reg r135:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r136:V, reg r137:V, reg coef_p16:*, reg coef_p17:V, reg names4:cls, reg r138:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r139:V, reg r140:V, reg dn4:*, reg dn5:V, reg c45:cls, reg r141:V, reg list3:cls, reg r142:V, reg l3:*, reg dimnames__3:cls, reg r143:V, reg NCOL:cls, reg Qr8:*, reg Qr9:V, reg c46:L, reg Qr11:V, reg dr36:V, reg dc18:L, reg dx56:V, reg dx57:V, reg r144:V, reg p28:p(V +), reg r146:V, reg matrix:cls, reg r148:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r149:V, reg r150:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r151:V, reg r152:V, reg c47:cls, reg r153:V, reg list4:cls, reg r154:V, reg l4:*, reg dimnames__4:cls, reg r155:V, reg matrix1:cls, reg r156:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r157:V, reg r158:V, reg aliased:*, reg aliased1:V, reg length:cls, reg r159:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r160:V, reg r161:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r162:V, reg r163:V, reg c48:cls, reg r164:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r165:V, reg r166:V, reg object37:*, reg object38:V, reg names5:cls, reg r167:V, reg match:cls, reg r168:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r169:V, reg r170:V, reg object39:*, reg object40:V, reg c49:L, reg object42:V, reg dr38:V, reg dc19:L, reg dx58:V, reg dx59:V, reg keep:*, reg keep1:V, reg __4:cls, reg r171:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r172:V, reg r173:V, reg residuals:cls, reg object43:*, reg object44:V, reg p29:p(V +), reg r175:V, reg coef_table:*, reg coef_table1:V, reg aliased2:*, reg aliased3:V, reg dispersion5:*, reg dispersion6:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r176:V, reg r177:V, reg object45:*, reg object46:V, reg c50:L, reg object48:V, reg dr40:V, reg dc20:L, reg dx60:V, reg dx61:V, reg r178:V, reg df_r8:*, reg df_r9:V, reg df_f:*, reg df_f1:V, reg c51:cls, reg r179:V, reg covmat_unscaled2:*, reg covmat_unscaled3:V, reg covmat2:*, reg covmat3:V, reg list5:cls, reg r180:V, reg c52:cls, reg r181:V, reg correlation1:*, reg correlation2:V, reg c53:L, reg c55:V, reg p30:*, reg p31:V, reg r182:V, reg c56:L, reg c57:V, reg c59:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r183:V, reg r184:V, reg diag1:cls, reg covmat_unscaled4:*, reg covmat_unscaled5:V, reg p32:p(V +), reg r186:V, reg r187:V, reg covmat_unscaled6:*, reg covmat_unscaled7:V, reg outer:cls, reg dd:*, reg dd1:V, reg p33:p(V +), reg dd2:*, reg dd3:V, reg p34:p(V +), reg r190:V, reg r191:V, reg l5:*, reg c60:L, reg r193:V, reg l7:*, reg dr42:V, reg dc21:L, reg dx62:V, reg dx63:V, reg r196:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg l8:*, reg c61:L, reg symbolic_cor4:V, reg l10:*, reg dr44:V, reg dc22:L, reg dx64:V, reg symbolic_cor6:V, reg dx65:V, reg r197:V, reg l11:*, reg class__:cls, reg r198:V, reg ans:*, reg ans1:V |
    mkenv;
    st object = object;
    dispersion_isMissing = missing.0(dispersion);
    if dispersion_isMissing then L0(NULL) else L0(dispersion);
  L0(dispersion_orDefault):
    st dispersion = dispersion_orDefault;
    correlation_isMissing = missing.0(correlation);
    if correlation_isMissing then L1(FALSE) else L1(correlation);
  L1(correlation_orDefault):
    st correlation = correlation_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L2(FALSE) else L2(symbolic_cor);
  L2(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    st `...` = ddd;
    st `est.disp` = FALSE;
    object1 = ld object;
    check L54() else D0();
  D0():
    deopt 3 [object1];
  L54():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L56() else L57(object2);
  L55(dx1):
    st `df.r` = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L59() else L60();
  L56():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L58() else L57(dr);
  L57(object4):
    r = `$`(object4, <sym df.residual>);
    goto L55(r);
  L3(r2):
    c2 = `as.logical`(r2);
    if c2 then L62() else L4();
  L58():
    dx = getTryDispatchBuiltinValue(dr);
    goto L55(dx);
  L59():
    dispersion1 = ld dispersion;
    check L61() else D1();
  L60():
    r1 = dyn base(<sym dispersion>);
    goto L3(r1);
  D1():
    deopt 8 [dispersion1];
  L4():
    goto L17();
  L17():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L134() else L135();
  L61():
    dispersion2 = force? dispersion1;
    checkMissing(dispersion2);
    c1 = `==`(dispersion2, NULL);
    goto L3(c1);
  L62():
    object5 = ld object;
    check L63() else D2();
  D2():
    deopt 11 [object5];
  L18(r47):
    st aliased = r47;
    object27 = ld object;
    check L139() else D22();
  L63():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L65() else L66(object6);
  L134():
    coef = ldf coef;
    check L136() else D19();
  L135():
    r46 = dyn base6(<lang coef(object)>);
    goto L18(r46);
  D19():
    deopt 93 [];
  D22():
    deopt 99 [object27];
  L64(dx3):
    st fam = dx3;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L65():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(dr2);
  L66(object8):
    r3 = `$`(object8, <sym family>);
    goto L64(r3);
  L136():
    p2 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      return object26;
    };
    r49 = dyn coef(p2);
    check L137() else D20();
  L139():
    object28 = force? object27;
    checkMissing(object28);
    c32 = `is.object`(object28);
    if c32 then L141() else L142(object28);
  D20():
    deopt 95 [r49];
  L5(r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    if c6 then L75() else L6(c6);
  L67():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L64(dx2);
  L68():
    fam = ld fam;
    check L70() else D3();
  L69():
    r4 = dyn base1(<lang `$`(fam, dispersion)>);
    goto L5(r4);
  L137():
    is_na1 = ldf `is.na` in base;
    r50 = dyn is_na1(r49);
    check L138() else D21();
  L140(dx29):
    st p = dx29;
    p3 = ld p;
    check L144() else D23();
  L141():
    dr22 = tryDispatchBuiltin.1("$", object28);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L143() else L142(dr22);
  L142(object30):
    r51 = `$`(object30, <sym rank>);
    goto L140(r51);
  D3():
    deopt 16 [fam];
  D21():
    deopt 97 [r50];
  D23():
    deopt 103 [p3];
  L6(c8):
    c20 = `as.logical`(c8);
    if c20 then L85() else L8();
  L70():
    fam1 = force? fam;
    checkMissing(fam1);
    c4 = `is.object`(fam1);
    if c4 then L72() else L73(fam1);
  L75():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L76() else L77();
  L138():
    goto L18(r50);
  L143():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L140(dx28);
  L144():
    p4 = force? p3;
    checkMissing(p4);
    r52 = `>`(p4, 0.0);
    c33 = `as.logical`(r52);
    if c33 then L145() else L19();
  L7(c11, r9):
    r12 = `!`(r9);
    c17 = `as.logical`(r12);
    c18 = `&&`(c11, c17);
    goto L6(c18);
  L8():
    _in_ = ldf `%in%`;
    check L92() else D7();
  L9(dx10):
    st dispersion = dx10;
    goto L17();
  L19():
    matrix = ldf matrix;
    check L251() else D82();
  L39():
    sym26 = ldf match;
    base26 = ldf match in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L267() else L268();
  L71(dx5):
    c5 = `==`(dx5, NULL);
    goto L5(c5);
  L72():
    dr4 = tryDispatchBuiltin.1("$", fam1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(dr4);
  L73(fam3):
    r6 = `$`(fam3, <sym dispersion>);
    goto L71(r6);
  L76():
    fam4 = ld fam;
    check L78() else D4();
  L77():
    r8 = dyn base2(<lang `$`(fam, dispersion)>);
    goto L7(c6, r8);
  L85():
    fam8 = ld fam;
    check L86() else D6();
  L145():
    p5 = ld p;
    check L146() else D24();
  D4():
    deopt 23 [c6, fam4];
  D6():
    deopt 30 [fam8];
  D7():
    deopt 34 [];
  D24():
    deopt 108 [1, p5];
  D82():
    deopt 302 [];
  L43(r161):
    st keep = r161;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L277() else L278();
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L71(dx4);
  L78():
    fam5 = force? fam4;
    checkMissing(fam5);
    c12 = `is.object`(fam5);
    if c12 then L80() else L81(c6, fam5);
  L86():
    fam9 = force? fam8;
    checkMissing(fam9);
    c21 = `is.object`(fam9);
    if c21 then L88() else L89(fam9);
  L92():
    p = prom<V +>{
      fam12 = ld fam;
      fam13 = force? fam12;
      checkMissing(fam13);
      c22 = `is.object`(fam13);
      if c22 then L1() else L2(fam13);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", fam13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(fam15):
      r14 = `$`(fam15, <sym family>);
      goto L0(r14);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c23 = ldf c in base;
      r18 = dyn c23("poisson", "binomial");
      goto L0(r18);
    L2():
      r16 = dyn base3("poisson", "binomial");
      goto L0(r16);
    };
    r20 = dyn _in_(p, p1);
    check L93() else D8();
  L146():
    p6 = force? p5;
    checkMissing(p6);
    r53 = `:`(1, p6);
    st p1 = r53;
    qr_lm = ldf `qr.lm`;
    check L147() else D25();
  L251():
    r148 = dyn matrix(<missing>, 0, 4);
    check L252() else D83();
  L267():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L269() else L270();
  L268():
    r160 = dyn base26(<lang c("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action")>, <lang names(object)>, 0);
    goto L43(r160);
  D8():
    deopt 37 [r20];
  D25():
    deopt 113 [];
  D83():
    deopt 306 [r148];
  L44(r163):
    sym28 = ldf names;
    base28 = ldf names in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L272() else L273();
  L46(r170):
    st ans = r170;
    correlation1 = ld correlation;
    check L305() else D111();
  L79(c16, dx7):
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(dx7);
    check L83() else D5();
  L80():
    dr6 = tryDispatchBuiltin.1("$", fam5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(c6, dr6);
  L81(c14, fam7):
    r10 = `$`(fam7, <sym dispersion>);
    goto L79(c14, r10);
  L87(dx9):
    goto L9(dx9);
  L88():
    dr8 = tryDispatchBuiltin.1("$", fam9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(dr8);
  L89(fam11):
    r13 = `$`(fam11, <sym dispersion>);
    goto L87(r13);
  L93():
    c24 = `as.logical`(r20);
    if c24 then L94() else L10();
  L147():
    p7 = prom<V +>{
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      return object32;
    };
    r55 = dyn qr_lm(p7);
    check L148() else D26();
  L252():
    st `coef.table` = r148;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L253() else L254();
  L269():
    c48 = ldf c in base;
    r164 = dyn c48("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action");
    check L271() else D92();
  L270():
    r162 = dyn base27("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action");
    goto L44(r162);
  L277():
    object39 = ld object;
    check L279() else D96();
  L278():
    r169 = dyn base29(<lang `[`(object, keep)>, <lang list(deviance.resid=residuals(object, type="deviance"), coefficients=coef.table, aliased=aliased, dispersion=dispersion, df=c(`$`(object, rank), df.r, df.f), cov.unscaled=covmat.unscaled, cov.scaled=covmat)>);
    goto L46(r169);
  D5():
    deopt 27 [c16, r11];
  D26():
    deopt 115 [r55];
  D92():
    deopt 357 [r164];
  D96():
    deopt 371 [object39];
  D111():
    deopt 417 [correlation1];
  L10():
    df_r = ld `df.r`;
    check L96() else D9();
  L40(r150):
    l4 = ld `coef.table`;
    dimnames__4 = ldf `dimnames<-`;
    check L259() else D86();
  L45(r166):
    match = ldf match in base;
    r168 = dyn match(r163, r166, 0, NULL);
    check L276() else D95();
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L79(c6, dx6);
  L83():
    goto L7(c16, r11);
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L87(dx8);
  L94():
    goto L9(1.0);
  L148():
    st Qr = r55;
    object33 = ld object;
    check L149() else D27();
  L253():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L255() else L256();
  L254():
    r149 = dyn base23(NULL, <lang c("Estimate", "Std. Error", "t value", "Pr(>|t|)")>);
    goto L40(r149);
  L271():
    goto L44(r164);
  L272():
    object37 = ld object;
    check L274() else D93();
  L273():
    r165 = dyn base28(<sym object>);
    goto L45(r165);
  L279():
    object40 = force? object39;
    checkMissing(object40);
    c49 = `is.object`(object40);
    if c49 then L280() else L281(object40);
  L305():
    correlation2 = force? correlation1;
    checkMissing(correlation2);
    c53 = `as.logical`(correlation2);
    if c53 then L306() else L50(c53);
  D9():
    deopt 40 [df_r];
  D27():
    deopt 117 [object33];
  D86():
    deopt 322 [r150, l4, r150];
  D93():
    deopt 360 [object37];
  D95():
    deopt 367 [r168];
  L41(r152):
    list4 = ldf list in base;
    r154 = dyn list4(NULL, r152);
    check L258() else D85();
  L47(dx59):
    sym30 = ldf list;
    base30 = ldf list in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L284() else L285();
  L50(c55):
    c59 = `as.logical`(c55);
    if c59 then L309() else L51();
  L96():
    df_r1 = force? df_r;
    checkMissing(df_r1);
    r21 = `>`(df_r1, 0.0);
    c25 = `as.logical`(r21);
    if c25 then L97() else L11();
  L149():
    object34 = force? object33;
    checkMissing(object34);
    c34 = `is.object`(object34);
    if c34 then L151() else L152(object34);
  L255():
    c47 = ldf c in base;
    r153 = dyn c47("Estimate", "Std. Error", "t value", "Pr(>|t|)");
    check L257() else D84();
  L256():
    r151 = dyn base24("Estimate", "Std. Error", "t value", "Pr(>|t|)");
    goto L41(r151);
  L259():
    r155 = dyn dimnames__4(l4, NULL, r150);
    check L260() else D87();
  L274():
    object38 = force? object37;
    checkMissing(object38);
    names5 = ldf names in base;
    r167 = dyn names5(object38);
    check L275() else D94();
  L276():
    goto L43(r168);
  L280():
    dr38 = tryDispatchBuiltin.1("[", object40);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L282() else L281(dr38);
  L281(object42):
    keep = ld keep;
    check L283() else D97();
  L306():
    p30 = ld p;
    check L307() else D112();
  D84():
    deopt 318 [r153];
  D85():
    deopt 320 [r154];
  D87():
    deopt 324 [r150, r155];
  D94():
    deopt 363 [r167];
  D97():
    deopt 373 [object42, keep];
  D112():
    deopt 419 [c53, p30];
  L11():
    st `est.disp` = TRUE;
    goto L9(NA_REAL);
  L48(r173):
    c52 = ldf c in base;
    r181 = dyn c52(dx59, r173);
    check L304() else D110();
  L51():
    goto L53();
  L53():
    l11 = ld ans;
    class__ = ldf `class<-`;
    check L327() else D119();
  L97():
    st `est.disp` = TRUE;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L150(dx31):
    c35 = `is.object`(dx31);
    if c35 then L154() else L155(dx31);
  L151():
    dr24 = tryDispatchBuiltin.1("$", object34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L153() else L152(dr24);
  L152(object36):
    r56 = `$`(object36, <sym coefficients>);
    goto L150(r56);
  L257():
    goto L41(r153);
  L258():
    goto L40(r154);
  L260():
    st `coef.table` = r155;
    matrix1 = ldf matrix;
    check L261() else D88();
  L275():
    goto L45(r167);
  L282():
    dx58 = getTryDispatchBuiltinValue(dr38);
    goto L47(dx58);
  L283():
    keep1 = force? keep;
    __4 = ldf `[` in base;
    r171 = dyn __4(object42, keep1);
    goto L47(r171);
  L284():
    residuals = ldf residuals;
    check L286() else D98();
  L285():
    r172 = dyn base30[`deviance.resid`, coefficients, aliased, dispersion, df, `cov.unscaled`, `cov.scaled`](<lang residuals(object, type="deviance")>, <sym coef.table>, <sym aliased>, <sym dispersion>, <lang c(`$`(object, rank), df.r, df.f)>, <sym covmat.unscaled>, <sym covmat>);
    goto L48(r172);
  L307():
    p31 = force? p30;
    checkMissing(p31);
    r182 = `>`(p31, 0.0);
    c56 = `as.logical`(r182);
    c57 = `&&`(c53, c56);
    goto L50(c57);
  L309():
    sym32 = ldf sqrt;
    base32 = ldf sqrt in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L310() else L311();
  D88():
    deopt 327 [];
  D98():
    deopt 379 [];
  D110():
    deopt 415 [r181];
  D119():
    deopt 451 ["summary.glm", l11, "summary.glm"];
  L12(r23):
    c27 = `as.logical`(r23);
    if c27 then L106() else L13();
  L20(dx35):
    st `coef.p` = dx35;
    chol2inv = ldf chol2inv;
    check L166() else D30();
  L52(r184):
    st dd = r184;
    covmat_unscaled6 = ld `covmat.unscaled`;
    check L314() else D115();
  L98():
    object9 = ld object;
    check L100() else D10();
  L99():
    r22 = dyn base4(<lang `==`(`$`(object, weights), 0.0)>);
    goto L12(r22);
  L153():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L150(dx30);
  L154():
    dr26 = tryDispatchBuiltin.1("[", dx31);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L156() else L155(dr26);
  L155(dx33):
    Qr = ld Qr;
    check L157() else D28();
  L261():
    r156 = dyn matrix1(<missing>, 0, 0);
    check L262() else D89();
  L286():
    p29 = prom<V +>{
      object43 = ld object;
      object44 = force? object43;
      checkMissing(object44);
      return object44;
    };
    r175 = dyn residuals[, type](p29, "deviance");
    check L287() else D99();
  L304():
    goto L46(r181);
  L310():
    diag1 = ldf diag;
    check L312() else D113();
  L311():
    r183 = dyn base32(<lang diag(covmat.unscaled)>);
    goto L52(r183);
  L327():
    r198 = dyn class__(l11, NULL, "summary.glm");
    check L328() else D120();
  D10():
    deopt 49 [object9];
  D28():
    deopt 120 [dx33, Qr];
  D30():
    deopt 129 [];
  D89():
    deopt 331 [r156];
  D99():
    deopt 383 [r175];
  D113():
    deopt 426 [];
  D115():
    deopt 431 [covmat_unscaled6];
  D120():
    deopt 453 ["summary.glm", r198];
  L13():
    goto L14();
  L14():
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L110() else L111();
  L100():
    object10 = force? object9;
    checkMissing(object10);
    c26 = `is.object`(object10);
    if c26 then L102() else L103(object10);
  L106():
    warning = ldf warning;
    check L107() else D12();
  L156():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L20(dx34);
  L157():
    Qr1 = force? Qr;
    checkMissing(Qr1);
    c36 = `is.object`(Qr1);
    if c36 then L159() else L160(dx33, Qr1);
  L166():
    p14 = prom<V +>{
      Qr4 = ld Qr;
      Qr5 = force? Qr4;
      checkMissing(Qr5);
      c38 = `is.object`(Qr5);
      if c38 then L2() else L3(Qr5);
    L1(dx51):
      c39 = `is.object`(dx51);
      if c39 then L5() else L6();
    L2():
      dr32 = tryDispatchBuiltin.1("$", Qr5);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L4() else L3(dr32);
    L3(Qr7):
      r60 = `$`(Qr7, <sym qr>);
      goto L1(r60);
    L0(dx55):
      return dx55;
    L4():
      dx50 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx50);
    L5():
      dr34 = tryDispatchBuiltin.1("[", dx51);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L7() else L6();
    L6():
      p10 = ld p1;
      p11 = force? p10;
      p12 = ld p1;
      p13 = force? p12;
      __3 = ldf `[` in base;
      r61 = dyn __3(dx51, p11, p13, FALSE);
      goto L0(r61);
    L7():
      dx54 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx54);
    };
    r63 = dyn chol2inv(p14);
    check L167() else D31();
  L262():
    st covmat = r156;
    st `covmat.unscaled` = r156;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L263() else L264();
  L287():
    coef_table = ld `coef.table`;
    check L288() else D100();
  L312():
    p32 = prom<V +>{
      covmat_unscaled4 = ld `covmat.unscaled`;
      covmat_unscaled5 = force? covmat_unscaled4;
      checkMissing(covmat_unscaled5);
      return covmat_unscaled5;
    };
    r186 = dyn diag1(p32);
    check L313() else D114();
  L314():
    covmat_unscaled7 = force? covmat_unscaled6;
    checkMissing(covmat_unscaled7);
    outer = ldf outer;
    check L315() else D116();
  L328():
    st ans = r198;
    ans = ld ans;
    check L329() else D121();
  D12():
    deopt 57 [];
  D31():
    deopt 131 [r63];
  D100():
    deopt 385 [coef_table];
  D114():
    deopt 428 [r186];
  D116():
    deopt 433 [covmat_unscaled7];
  D121():
    deopt 455 [ans];
  L15(r30):
    df_r2 = ld `df.r`;
    check L131() else D18();
  L42(r158):
    st `df.f` = r158;
    goto L39();
  L101(dx14):
    r25 = `==`(dx14, 0.0);
    any = ldf any in base;
    r26 = dyn any(r25);
    check L105() else D11();
  L102():
    dr12 = tryDispatchBuiltin.1("$", object10);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L104() else L103(dr12);
  L103(object12):
    r24 = `$`(object12, <sym weights>);
    goto L101(r24);
  L107():
    r27 = dyn warning("observations with zero weight not used for calculating dispersion");
    check L108() else D13();
  L110():
    object13 = ld object;
    check L112() else D14();
  L111():
    r29 = dyn base5(<lang `[`(`(`(`*`(`$`(object, weights), `^`(`$`(object, residuals), 2.0))), `>`(`$`(object, weights), 0.0))>);
    goto L15(r29);
  L158(dx40, dx41):
    c37 = `is.object`(dx41);
    if c37 then L162() else L163(dx40, dx41);
  L159():
    dr28 = tryDispatchBuiltin.1("$", Qr1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L161() else L160(dx33, dr28);
  L160(dx37, Qr3):
    r57 = `$`(Qr3, <sym pivot>);
    goto L158(dx37, r57);
  L167():
    st `covmat.unscaled` = r63;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  L263():
    aliased = ld aliased;
    check L265() else D90();
  L264():
    r157 = dyn base25(<sym aliased>);
    goto L42(r157);
  L288():
    coef_table1 = force? coef_table;
    checkMissing(coef_table1);
    aliased2 = ld aliased;
    check L289() else D101();
  L313():
    r187 = sqrt(r186);
    goto L52(r187);
  L315():
    p33 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    p34 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    r190 = dyn outer(p33, p34);
    check L316() else D117();
  L329():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D11():
    deopt 55 [r26];
  D13():
    deopt 59 [r27];
  D14():
    deopt 64 [object13];
  D18():
    deopt 79 [r30, df_r2];
  D90():
    deopt 336 [aliased];
  D101():
    deopt 388 [aliased2];
  D117():
    deopt 436 [covmat_unscaled7, r190];
  L21(dx48, dx49):
    __2 = ldf `[` in base;
    r59 = dyn __2(dx48, dx49);
    goto L20(r59);
  L22(r65):
    l = ld `covmat.unscaled`;
    dimnames__ = ldf `dimnames<-`;
    check L179() else D37();
  L104():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L101(dx13);
  L105():
    goto L12(r26);
  L108():
    goto L14();
  L112():
    object14 = force? object13;
    checkMissing(object14);
    c28 = `is.object`(object14);
    if c28 then L114() else L115(object14);
  L131():
    df_r3 = force? df_r2;
    checkMissing(df_r3);
    r45 = `/`(r30, df_r3);
    goto L9(r45);
  L161():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L158(dx33, dx39);
  L162():
    dr30 = tryDispatchBuiltin.1("[", dx41);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L164() else L163(dx40, dr30);
  L163(dx44, dx45):
    p8 = ld p1;
    check L165() else D29();
  L168():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L170() else L171();
  L169():
    r64 = dyn base7(<lang names(coef.p)>, <lang names(coef.p)>);
    goto L22(r64);
  L265():
    aliased1 = force? aliased;
    checkMissing(aliased1);
    length = ldf length in base;
    r159 = dyn length(aliased1);
    check L266() else D91();
  L289():
    aliased3 = force? aliased2;
    checkMissing(aliased3);
    dispersion5 = ld dispersion;
    check L290() else D102();
  L316():
    r191 = `/`(covmat_unscaled7, r190);
    l5 = ld ans;
    c60 = `is.object`(l5);
    if c60 then L318() else L319(r191, l5);
  D29():
    deopt 123 [dx44, dx45, p8];
  D37():
    deopt 150 [r65, l, r65];
  D91():
    deopt 339 [r159];
  D102():
    deopt 391 [dispersion5];
  L23(r67):
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L174() else L175();
  L113(dx16):
    object17 = ld object;
    check L117() else D15();
  L114():
    dr14 = tryDispatchBuiltin.1("$", object14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L116() else L115(dr14);
  L115(object16):
    r31 = `$`(object16, <sym weights>);
    goto L113(r31);
  L164():
    dx47 = getTryDispatchBuiltinValue(dr30);
    goto L21(dx40, dx47);
  L165():
    p9 = force? p8;
    __1 = ldf `[` in base;
    r58 = dyn __1(dx45, p9);
    goto L21(dx44, r58);
  L170():
    coef_p = ld `coef.p`;
    check L172() else D32();
  L171():
    r66 = dyn base8(<sym coef.p>);
    goto L23(r66);
  L179():
    r73 = dyn dimnames__(l, NULL, r65);
    check L180() else D38();
  L266():
    goto L42(r159);
  L290():
    dispersion6 = force? dispersion5;
    checkMissing(dispersion6);
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L291() else L292();
  L317(dx63):
    st ans = dx63;
    symbolic_cor1 = ld `symbolic.cor`;
    check L321() else D118();
  L318():
    dr42 = tryDispatchBuiltin.0("$<-", l5, r191);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L320() else L319(r191, dr42);
  L319(r193, l7):
    r196 = `$<-`(l7, <sym correlation>, r191);
    goto L317(r196);
  D15():
    deopt 66 [dx16, object17];
  D32():
    deopt 137 [coef_p];
  D38():
    deopt 152 [r65, r73];
  D118():
    deopt 441 [symbolic_cor1];
  L24(r70):
    list = ldf list in base;
    r72 = dyn list(r67, r70);
    check L178() else D36();
  L49(r177):
    covmat_unscaled2 = ld `covmat.unscaled`;
    check L301() else D107();
  L116():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L113(dx15);
  L117():
    object18 = force? object17;
    checkMissing(object18);
    c29 = `is.object`(object18);
    if c29 then L119() else L120(dx16, object18);
  L172():
    coef_p1 = force? coef_p;
    checkMissing(coef_p1);
    names = ldf names in base;
    r68 = dyn names(coef_p1);
    check L173() else D33();
  L174():
    coef_p2 = ld `coef.p`;
    check L176() else D34();
  L175():
    r69 = dyn base9(<sym coef.p>);
    goto L24(r69);
  L180():
    st `covmat.unscaled` = r73;
    dispersion3 = ld dispersion;
    check L181() else D39();
  L291():
    object45 = ld object;
    check L293() else D103();
  L292():
    r176 = dyn base31(<lang `$`(object, rank)>, <sym df.r>, <sym df.f>);
    goto L49(r176);
  L320():
    dx62 = getTryDispatchBuiltinValue(dr42);
    goto L317(dx62);
  L321():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    l8 = ld ans;
    c61 = `is.object`(l8);
    if c61 then L323() else L324(symbolic_cor2, l8);
  D33():
    deopt 140 [r68];
  D34():
    deopt 143 [coef_p2];
  D36():
    deopt 148 [r72];
  D39():
    deopt 154 [dispersion3];
  D103():
    deopt 396 [object45];
  D107():
    deopt 406 [covmat_unscaled2];
  L118(dx21, dx22):
    r33 = `^`(dx22, 2.0);
    r34 = `*`(dx21, r33);
    c30 = `is.object`(r34);
    if c30 then L122() else L123(r34);
  L119():
    dr16 = tryDispatchBuiltin.1("$", object18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L121() else L120(dx16, dr16);
  L120(dx18, object20):
    r32 = `$`(object20, <sym residuals>);
    goto L118(dx18, r32);
  L173():
    goto L23(r68);
  L176():
    coef_p3 = force? coef_p2;
    checkMissing(coef_p3);
    names1 = ldf names in base;
    r71 = dyn names1(coef_p3);
    check L177() else D35();
  L178():
    goto L22(r72);
  L181():
    dispersion4 = force? dispersion3;
    checkMissing(dispersion4);
    covmat_unscaled = ld `covmat.unscaled`;
    check L182() else D40();
  L293():
    object46 = force? object45;
    checkMissing(object46);
    c50 = `is.object`(object46);
    if c50 then L295() else L296(object46);
  L301():
    covmat_unscaled3 = force? covmat_unscaled2;
    checkMissing(covmat_unscaled3);
    covmat2 = ld covmat;
    check L302() else D108();
  L322(symbolic_cor6, dx65):
    st ans = dx65;
    goto L53();
  L323():
    dr44 = tryDispatchBuiltin.0("$<-", l8, symbolic_cor2);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L325() else L324(symbolic_cor2, dr44);
  L324(symbolic_cor4, l10):
    r197 = `$<-`(l10, <sym symbolic.cor>, symbolic_cor2);
    goto L322(symbolic_cor4, r197);
  D35():
    deopt 146 [r71];
  D40():
    deopt 155 [dispersion4, covmat_unscaled];
  D108():
    deopt 409 [covmat2];
  L16(dx24):
    sum = ldf sum in base;
    r44 = dyn sum(dx24);
    check L130() else D17();
  L121():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L118(dx16, dx20);
  L122():
    dr18 = tryDispatchBuiltin.1("[", r34);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L124() else L123(dr18);
  L123(r36):
    object21 = ld object;
    check L125() else D16();
  L177():
    goto L24(r71);
  L182():
    covmat_unscaled1 = force? covmat_unscaled;
    checkMissing(covmat_unscaled1);
    r74 = `*`(dispersion4, covmat_unscaled1);
    st covmat = r74;
    diag = ldf diag;
    check L183() else D41();
  L294(dx61):
    df_r8 = ld `df.r`;
    check L298() else D104();
  L295():
    dr40 = tryDispatchBuiltin.1("$", object46);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L297() else L296(dr40);
  L296(object48):
    r178 = `$`(object48, <sym rank>);
    goto L294(r178);
  L302():
    covmat3 = force? covmat2;
    checkMissing(covmat3);
    list5 = ldf list in base;
    r180 = dyn list5(r175, coef_table1, aliased3, dispersion6, r177, covmat_unscaled3, covmat3);
    check L303() else D109();
  L325():
    dx64 = getTryDispatchBuiltinValue(dr44);
    goto L322(symbolic_cor2, dx64);
  D16():
    deopt 72 [r36, object21];
  D17():
    deopt 79 [r44];
  D41():
    deopt 160 [];
  D104():
    deopt 399 [df_r8];
  D109():
    deopt 413 [r180];
  L124():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L16(dx23);
  L125():
    object22 = force? object21;
    checkMissing(object22);
    c31 = `is.object`(object22);
    if c31 then L127() else L128(r36, object22);
  L130():
    goto L15(r44);
  L183():
    p15 = prom<V +>{
      covmat = ld covmat;
      covmat1 = force? covmat;
      checkMissing(covmat1);
      return covmat1;
    };
    r76 = dyn diag(p15);
    check L184() else D42();
  L297():
    dx60 = getTryDispatchBuiltinValue(dr40);
    goto L294(dx60);
  L298():
    df_r9 = force? df_r8;
    checkMissing(df_r9);
    df_f = ld `df.f`;
    check L299() else D105();
  L303():
    goto L48(r180);
  D42():
    deopt 162 [r76];
  D105():
    deopt 401 [df_f];
  L126(r40, dx26):
    r42 = `>`(dx26, 0.0);
    __ = ldf `[` in base;
    r43 = dyn __(r40, r42);
    goto L16(r43);
  L127():
    dr20 = tryDispatchBuiltin.1("$", object22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L129() else L128(r36, dr20);
  L128(r38, object24):
    r41 = `$`(object24, <sym weights>);
    goto L126(r38, r41);
  L184():
    st `var.cf` = r76;
    sym10 = ldf sqrt;
    base10 = ldf sqrt in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L185() else L186();
  L299():
    df_f1 = force? df_f;
    checkMissing(df_f1);
    c51 = ldf c in base;
    r179 = dyn c51(dx61, df_r9, df_f1);
    check L300() else D106();
  D106():
    deopt 404 [r179];
  L25(r78):
    st `s.err` = r78;
    coef_p4 = ld `coef.p`;
    check L188() else D44();
  L129():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L126(r36, dx25);
  L185():
    var_cf = ld `var.cf`;
    check L187() else D43();
  L186():
    r77 = dyn base10(<sym var.cf>);
    goto L25(r77);
  L300():
    goto L49(r179);
  D43():
    deopt 165 [var_cf];
  D44():
    deopt 169 [coef_p4];
  L187():
    var_cf1 = force? var_cf;
    checkMissing(var_cf1);
    r79 = sqrt(var_cf1);
    goto L25(r79);
  L188():
    coef_p5 = force? coef_p4;
    checkMissing(coef_p5);
    s_err = ld `s.err`;
    check L189() else D45();
  D45():
    deopt 170 [coef_p5, s_err];
  L189():
    s_err1 = force? s_err;
    checkMissing(s_err1);
    r80 = `/`(coef_p5, s_err1);
    st tvalue = r80;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L190() else L191();
  L26(r82):
    st dn = r82;
    est_disp = ld `est.disp`;
    check L193() else D47();
  L190():
    c40 = ldf c in base;
    r83 = dyn c40("Estimate", "Std. Error");
    check L192() else D46();
  L191():
    r81 = dyn base11("Estimate", "Std. Error");
    goto L26(r81);
  D46():
    deopt 179 [r83];
  D47():
    deopt 181 [est_disp];
  L192():
    goto L26(r83);
  L193():
    est_disp1 = force? est_disp;
    checkMissing(est_disp1);
    r84 = `!`(est_disp1);
    c41 = `as.logical`(r84);
    if c41 then L194() else L27();
  L27():
    df_r4 = ld `df.r`;
    check L213() else D59();
  L31():
    NCOL = ldf NCOL;
    check L248() else D80();
  L194():
    pnorm = ldf pnorm;
    check L195() else D48();
  D48():
    deopt 186 [2.0];
  D59():
    deopt 222 [df_r4];
  D80():
    deopt 297 [];
  L195():
    p16 = prom<V +>{
      sym12 = ldf abs;
      base12 = ldf abs in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r86):
      r88 = `-`(<missing>, r86);
      return r88;
    L1():
      tvalue = ld tvalue;
      tvalue1 = force? tvalue;
      checkMissing(tvalue1);
      abs = ldf abs in base;
      r87 = dyn abs(tvalue1);
      goto L0(r87);
    L2():
      r85 = dyn base12(<sym tvalue>);
      goto L0(r85);
    };
    r90 = dyn pnorm(p16);
    check L196() else D49();
  L213():
    df_r5 = force? df_r4;
    checkMissing(df_r5);
    r108 = `>`(df_r5, 0.0);
    c43 = `as.logical`(r108);
    if c43 then L214() else L32();
  L248():
    p28 = prom<V +>{
      Qr8 = ld Qr;
      Qr9 = force? Qr8;
      checkMissing(Qr9);
      c46 = `is.object`(Qr9);
      if c46 then L1() else L2(Qr9);
    L0(dx57):
      return dx57;
    L1():
      dr36 = tryDispatchBuiltin.1("$", Qr9);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(Qr11):
      r144 = `$`(Qr11, <sym qr>);
      goto L0(r144);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx56);
    };
    r146 = dyn NCOL(p28);
    check L249() else D81();
  D49():
    deopt 188 [2.0, r90];
  D81():
    deopt 299 [r146];
  L32():
    cbind2 = ldf cbind;
    check L233() else D71();
  L196():
    r91 = `*`(2.0, r90);
    st pvalue = r91;
    cbind = ldf cbind;
    check L197() else D50();
  L214():
    pt = ldf pt;
    check L215() else D60();
  L249():
    st `df.f` = r146;
    goto L39();
  D50():
    deopt 192 [];
  D60():
    deopt 228 [2.0];
  D71():
    deopt 266 [];
  L197():
    p17 = prom<V +>{
      coef_p6 = ld `coef.p`;
      coef_p7 = force? coef_p6;
      checkMissing(coef_p7);
      return coef_p7;
    };
    p18 = prom<V +>{
      s_err2 = ld `s.err`;
      s_err3 = force? s_err2;
      checkMissing(s_err3);
      return s_err3;
    };
    p19 = prom<V +>{
      tvalue2 = ld tvalue;
      tvalue3 = force? tvalue2;
      checkMissing(tvalue3);
      return tvalue3;
    };
    p20 = prom<V +>{
      pvalue = ld pvalue;
      pvalue1 = force? pvalue;
      checkMissing(pvalue1);
      return pvalue1;
    };
    r96 = dyn cbind(p17, p18, p19, p20);
    check L198() else D51();
  L215():
    p21 = prom<V +>{
      sym16 = ldf abs;
      base16 = ldf abs in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r110):
      r112 = `-`(<missing>, r110);
      return r112;
    L1():
      tvalue4 = ld tvalue;
      tvalue5 = force? tvalue4;
      checkMissing(tvalue5);
      abs1 = ldf abs in base;
      r111 = dyn abs1(tvalue5);
      goto L0(r111);
    L2():
      r109 = dyn base16(<sym tvalue>);
      goto L0(r109);
    };
    p22 = prom<V +>{
      df_r6 = ld `df.r`;
      df_r7 = force? df_r6;
      checkMissing(df_r7);
      return df_r7;
    };
    r115 = dyn pt(p21, p22);
    check L216() else D61();
  L233():
    p27 = prom<V +>{
      coef_p14 = ld `coef.p`;
      coef_p15 = force? coef_p14;
      checkMissing(coef_p15);
      return coef_p15;
    };
    r133 = dyn cbind2(p27, NA_REAL, NA_REAL, NA_REAL);
    check L234() else D72();
  D51():
    deopt 197 [r96];
  D61():
    deopt 231 [2.0, r115];
  D72():
    deopt 271 [r133];
  L198():
    st `coef.table` = r96;
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L199() else L200();
  L216():
    r116 = `*`(2.0, r115);
    st pvalue = r116;
    cbind1 = ldf cbind;
    check L217() else D62();
  L234():
    st `coef.table` = r133;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L235() else L236();
  D62():
    deopt 235 [];
  L28(r98):
    l1 = ld `coef.table`;
    dimnames__1 = ldf `dimnames<-`;
    check L210() else D57();
  L36(r135):
    l3 = ld `coef.table`;
    dimnames__3 = ldf `dimnames<-`;
    check L246() else D78();
  L199():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L201() else L202();
  L200():
    r97 = dyn base13(<lang names(coef.p)>, <lang c(dn, "z value", "Pr(>|z|)")>);
    goto L28(r97);
  L217():
    p23 = prom<V +>{
      coef_p10 = ld `coef.p`;
      coef_p11 = force? coef_p10;
      checkMissing(coef_p11);
      return coef_p11;
    };
    p24 = prom<V +>{
      s_err4 = ld `s.err`;
      s_err5 = force? s_err4;
      checkMissing(s_err5);
      return s_err5;
    };
    p25 = prom<V +>{
      tvalue6 = ld tvalue;
      tvalue7 = force? tvalue6;
      checkMissing(tvalue7);
      return tvalue7;
    };
    p26 = prom<V +>{
      pvalue2 = ld pvalue;
      pvalue3 = force? pvalue2;
      checkMissing(pvalue3);
      return pvalue3;
    };
    r121 = dyn cbind1(p23, p24, p25, p26);
    check L218() else D63();
  L235():
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L237() else L238();
  L236():
    r134 = dyn base20(<lang names(coef.p)>, <lang c(dn, "t value", "Pr(>|t|)")>);
    goto L36(r134);
  D57():
    deopt 218 [r98, l1, r98];
  D63():
    deopt 240 [r121];
  D78():
    deopt 292 [r135, l3, r135];
  L29(r100):
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L205() else L206();
  L37(r137):
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L241() else L242();
  L201():
    coef_p8 = ld `coef.p`;
    check L203() else D52();
  L202():
    r99 = dyn base14(<sym coef.p>);
    goto L29(r99);
  L210():
    r106 = dyn dimnames__1(l1, NULL, r98);
    check L211() else D58();
  L218():
    st `coef.table` = r121;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L219() else L220();
  L237():
    coef_p16 = ld `coef.p`;
    check L239() else D73();
  L238():
    r136 = dyn base21(<sym coef.p>);
    goto L37(r136);
  L246():
    r143 = dyn dimnames__3(l3, NULL, r135);
    check L247() else D79();
  D52():
    deopt 203 [coef_p8];
  D58():
    deopt 220 [r98, r106];
  D73():
    deopt 277 [coef_p16];
  D79():
    deopt 294 [r135, r143];
  L30(r103):
    list1 = ldf list in base;
    r105 = dyn list1(r100, r103);
    check L209() else D56();
  L33(r123):
    l2 = ld `coef.table`;
    dimnames__2 = ldf `dimnames<-`;
    check L230() else D69();
  L38(r140):
    list3 = ldf list in base;
    r142 = dyn list3(r137, r140);
    check L245() else D77();
  L203():
    coef_p9 = force? coef_p8;
    checkMissing(coef_p9);
    names2 = ldf names in base;
    r101 = dyn names2(coef_p9);
    check L204() else D53();
  L205():
    dn = ld dn;
    check L207() else D54();
  L206():
    r102 = dyn base15(<sym dn>, "z value", "Pr(>|z|)");
    goto L30(r102);
  L211():
    st `coef.table` = r106;
    goto L31();
  L219():
    sym18 = ldf names;
    base18 = ldf names in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L221() else L222();
  L220():
    r122 = dyn base17(<lang names(coef.p)>, <lang c(dn, "t value", "Pr(>|t|)")>);
    goto L33(r122);
  L239():
    coef_p17 = force? coef_p16;
    checkMissing(coef_p17);
    names4 = ldf names in base;
    r138 = dyn names4(coef_p17);
    check L240() else D74();
  L241():
    dn4 = ld dn;
    check L243() else D75();
  L242():
    r139 = dyn base22(<sym dn>, "t value", "Pr(>|t|)");
    goto L38(r139);
  L247():
    st `coef.table` = r143;
    goto L31();
  D53():
    deopt 206 [r101];
  D54():
    deopt 209 [dn];
  D56():
    deopt 216 [r105];
  D69():
    deopt 261 [r123, l2, r123];
  D74():
    deopt 280 [r138];
  D75():
    deopt 283 [dn4];
  D77():
    deopt 290 [r142];
  L34(r125):
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L225() else L226();
  L204():
    goto L29(r101);
  L207():
    dn1 = force? dn;
    checkMissing(dn1);
    c42 = ldf c in base;
    r104 = dyn c42(dn1, "z value", "Pr(>|z|)");
    check L208() else D55();
  L209():
    goto L28(r105);
  L221():
    coef_p12 = ld `coef.p`;
    check L223() else D64();
  L222():
    r124 = dyn base18(<sym coef.p>);
    goto L34(r124);
  L230():
    r131 = dyn dimnames__2(l2, NULL, r123);
    check L231() else D70();
  L240():
    goto L37(r138);
  L243():
    dn5 = force? dn4;
    checkMissing(dn5);
    c45 = ldf c in base;
    r141 = dyn c45(dn5, "t value", "Pr(>|t|)");
    check L244() else D76();
  L245():
    goto L36(r142);
  D55():
    deopt 214 [r104];
  D64():
    deopt 246 [coef_p12];
  D70():
    deopt 263 [r123, r131];
  D76():
    deopt 288 [r141];
  L35(r128):
    list2 = ldf list in base;
    r130 = dyn list2(r125, r128);
    check L229() else D68();
  L208():
    goto L30(r104);
  L223():
    coef_p13 = force? coef_p12;
    checkMissing(coef_p13);
    names3 = ldf names in base;
    r126 = dyn names3(coef_p13);
    check L224() else D65();
  L225():
    dn2 = ld dn;
    check L227() else D66();
  L226():
    r127 = dyn base19(<sym dn>, "t value", "Pr(>|t|)");
    goto L35(r127);
  L231():
    st `coef.table` = r131;
    goto L31();
  L244():
    goto L38(r141);
  D65():
    deopt 249 [r126];
  D66():
    deopt 252 [dn2];
  D68():
    deopt 259 [r130];
  L224():
    goto L34(r126);
  L227():
    dn3 = force? dn2;
    checkMissing(dn3);
    c44 = ldf c in base;
    r129 = dyn c44(dn3, "t value", "Pr(>|t|)");
    check L228() else D67();
  L229():
    goto L33(r130);
  D67():
    deopt 257 [r129];
  L228():
    goto L35(r129);
  }
}