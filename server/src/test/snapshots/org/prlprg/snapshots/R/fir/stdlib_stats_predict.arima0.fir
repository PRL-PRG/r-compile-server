fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1768932914;
    st `predict.arima0` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1768932914(object, `n.ahead`, newxreg, `se.fit`, `...`) {
  (reg object:*, reg n_ahead:*, reg newxreg:*, reg se_fit:*, reg ddd:dots) -+> V { var object:*, var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var newxreg:*, reg newxreg_isMissing:L, reg newxreg_orDefault:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var `...`:dots?, reg r:cls, reg eval_parent:cls, reg str2lang:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg xr:*, reg xr1:V, reg c3:V, reg r10:V, reg c4:L, reg eval_parent1:cls, reg xr2:*, reg xr3:V, reg p2:p(V +), reg r12:V, reg r13:V, reg myNCOL:cls, reg xreg:*, reg xreg1:V, reg p3:p(V +), reg r15:V, reg myNCOL1:cls, reg newxreg1:*, reg newxreg2:V, reg p4:p(V +), reg r17:V, reg ncxreg:*, reg ncxreg1:V, reg r18:V, reg c5:L, reg stop:cls, reg r19:V, reg l:*, reg class__:cls, reg r21:V, reg tsp:cls, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r22:V, reg p5:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg data:*, reg data1:V, reg length:cls, reg r27:V, reg object13:*, reg object14:V, reg c7:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r28:V, reg object17:*, reg object18:V, reg c8:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg arma:*, reg arma1:V, reg c9:L, reg arma3:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __:cls, reg r32:V, reg sum:cls, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg coefs:*, reg coefs1:V, reg length1:cls, reg r36:V, reg narma:*, reg narma1:V, reg r37:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg coefs2:*, reg coefs3:V, reg names:cls, reg r40:V, reg c11:L, reg r42:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg narma2:*, reg narma3:V, reg r43:V, reg __1:cls, reg r44:V, reg r45:V, reg c12:L, reg cbind:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg n:*, reg n1:V, reg rep_len:cls, reg r48:V, reg p6:p(V +), reg xreg2:*, reg xreg3:V, reg p7:p(V +), reg r51:V, reg cbind1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg n_ahead1:*, reg n_ahead2:V, reg rep_len1:cls, reg r54:V, reg p8:p(V +), reg newxreg3:*, reg newxreg4:V, reg p9:p(V +), reg r57:V, reg ncxreg2:*, reg ncxreg3:V, reg r58:V, reg data2:*, reg data3:V, reg as_matrix:cls, reg xreg4:*, reg xreg5:V, reg p10:p(V +), reg r61:V, reg coefs4:*, reg coefs5:V, reg c13:L, reg data5:V, reg coefs7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg data7:V, reg dx19:V, reg narma4:*, reg narma5:V, reg r62:V, reg r63:V, reg __2:cls, reg r64:V, reg ___:cls, reg r65:V, reg r66:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r67:V, reg r68:V, reg as_matrix1:cls, reg newxreg5:*, reg newxreg6:V, reg p11:p(V +), reg r70:V, reg coefs8:*, reg coefs9:V, reg c14:L, reg coefs11:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg narma6:*, reg narma7:V, reg r71:V, reg r72:V, reg __3:cls, reg r73:V, reg ___1:cls, reg r74:V, reg drop:cls, reg r75:V, reg arma4:*, reg arma5:V, reg c15:L, reg arma7:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __4:cls, reg r77:V, reg r78:V, reg c16:L, reg coefs12:*, reg coefs13:V, reg c17:L, reg coefs15:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg arma8:*, reg arma9:V, reg c18:L, reg coefs17:V, reg arma11:V, reg dr24:V, reg dc12:L, reg dx26:V, reg coefs19:V, reg dx27:V, reg __5:cls, reg r79:V, reg arma12:*, reg arma13:V, reg c19:L, reg coefs21:V, reg dx29:V, reg r81:I, reg arma15:V, reg dr26:V, reg dc13:L, reg dx31:V, reg coefs23:V, reg dx32:V, reg r83:I, reg dx33:V, reg __6:cls, reg r84:V, reg r85:V, reg r86:V, reg __7:cls, reg r87:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r88:V, reg r89:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r92:V, reg r93:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r94:V, reg r95:V, reg ma:*, reg ma1:V, reg c20:cls, reg r96:V, reg polyroot:cls, reg r97:V, reg Mod:cls, reg r98:V, reg r99:V, reg any:cls, reg r100:V, reg c21:L, reg warning:cls, reg r101:V, reg r102:V, reg arma16:*, reg arma17:V, reg c22:L, reg arma19:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg __8:cls, reg r104:V, reg r105:V, reg c23:L, reg coefs24:*, reg coefs25:V, reg c24:L, reg coefs27:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r106:V, reg coefs30:V, reg r107:V, reg arma20:*, reg arma21:V, reg c25:L, reg coefs32:V, reg arma23:V, reg dr32:V, reg dc16:L, reg dx38:V, reg coefs34:V, reg dx39:V, reg __9:cls, reg r108:V, reg sum1:cls, reg r109:V, reg arma24:*, reg arma25:V, reg c26:L, reg coefs36:V, reg r112:V, reg r113:I, reg arma27:V, reg dr34:V, reg dc17:L, reg dx40:V, reg coefs38:V, reg r116:V, reg r117:I, reg dx41:V, reg __10:cls, reg r118:V, reg r119:V, reg r120:V, reg __11:cls, reg r121:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r124:V, reg r125:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r126:V, reg r127:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r128:V, reg r129:V, reg ma2:*, reg ma3:V, reg c27:cls, reg r130:V, reg polyroot1:cls, reg r131:V, reg Mod1:cls, reg r132:V, reg r133:V, reg any1:cls, reg r134:V, reg c28:L, reg warning1:cls, reg r135:V, reg r136:V, reg l1:*, reg storage_mode__:cls, reg r138:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r139:V, reg r140:V, reg C_setup_starma:*, reg C_setup_starma1:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r141:V, reg C_setup_starma4:V, reg r142:V, reg arma28:*, reg arma29:V, reg as_integer:cls, reg r143:V, reg data8:*, reg data9:V, reg n2:*, reg n3:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r146:V, reg C_setup_starma7:V, reg r147:V, reg data12:V, reg n6:V, reg r148:V, reg n7:*, reg n8:V, reg rep_len2:cls, reg r149:V, reg vargs:dots, reg r150:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r151:V, reg on_exit:cls, reg r153:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r154:V, reg C_Starma_method:*, reg C_Starma_method1:V, reg G:*, reg G1:V, reg vargs1:dots, reg r156:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r157:V, reg C_arma0fa:*, reg C_arma0fa1:V, reg G2:*, reg G3:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r159:V, reg C_arma0fa4:V, reg G6:V, reg r160:V, reg coefs39:*, reg coefs40:V, reg as_double:cls, reg r161:V, reg vargs2:dots, reg r162:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r163:V, reg r164:V, reg C_arma0_kfore:*, reg C_arma0_kfore1:V, reg G7:*, reg G8:V, reg arma30:*, reg arma31:V, reg c29:L, reg C_arma0_kfore3:V, reg G10:V, reg arma33:V, reg dr36:V, reg dc18:L, reg dx42:V, reg C_arma0_kfore5:V, reg G12:V, reg dx43:V, reg __12:cls, reg r165:V, reg arma34:*, reg arma35:V, reg c30:L, reg C_arma0_kfore7:V, reg G14:V, reg dx45:V, reg arma37:V, reg dr38:V, reg dc19:L, reg dx47:V, reg C_arma0_kfore9:V, reg G16:V, reg dx48:V, reg dx49:V, reg __13:cls, reg r166:V, reg n_ahead3:*, reg n_ahead4:V, reg vargs3:dots, reg r167:V, reg ts:cls, reg z:*, reg z1:V, reg c31:L, reg z3:V, reg dr40:V, reg dc20:L, reg dx50:V, reg dx51:V, reg __14:cls, reg r168:V, reg xm:*, reg xm1:V, reg r169:V, reg p12:p(V +), reg xtsp:*, reg xtsp1:V, reg c32:L, reg xtsp3:V, reg dr42:V, reg dc21:L, reg dx52:V, reg dx53:V, reg __15:cls, reg r171:V, reg deltat:cls, reg data13:*, reg data14:V, reg p13:p(V +), reg r173:V, reg r174:V, reg p14:p(V +), reg xtsp4:*, reg xtsp5:V, reg c33:L, reg xtsp7:V, reg dr44:V, reg dc22:L, reg dx54:V, reg dx55:V, reg __16:cls, reg r176:V, reg p15:p(V +), reg r178:V, reg se_fit1:*, reg se_fit2:V, reg c34:L, reg ts1:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r179:V, reg r180:V, reg z4:*, reg z5:V, reg c35:L, reg z7:V, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg __17:cls, reg r181:V, reg r182:V, reg p16:p(V +), reg xtsp8:*, reg xtsp9:V, reg c36:L, reg xtsp11:V, reg dr48:V, reg dc24:L, reg dx58:V, reg dx59:V, reg __18:cls, reg r184:V, reg deltat1:cls, reg data15:*, reg data16:V, reg p17:p(V +), reg r186:V, reg r187:V, reg p18:p(V +), reg xtsp12:*, reg xtsp13:V, reg c37:L, reg xtsp15:V, reg dr50:V, reg dc25:L, reg dx60:V, reg dx61:V, reg __19:cls, reg r189:V, reg p19:p(V +), reg r191:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r192:V, reg r193:V, reg pred:*, reg pred1:V, reg se:*, reg se1:V, reg list:cls, reg r194:V, reg pred2:*, reg pred3:V |
    mkenv;
    st object = object;
    n_ahead_isMissing = missing.0(n_ahead);
    if n_ahead_isMissing then L0(1) else L0(n_ahead);
  L0(n_ahead_orDefault):
    st `n.ahead` = n_ahead_orDefault;
    newxreg_isMissing = missing.0(newxreg);
    if newxreg_isMissing then L1(NULL) else L1(newxreg);
  L1(newxreg_orDefault):
    st newxreg = newxreg_orDefault;
    se_fit_isMissing = missing.0(se_fit);
    if se_fit_isMissing then L2(TRUE) else L2(se_fit);
  L2(se_fit_orDefault):
    st `se.fit` = se_fit_orDefault;
    st `...` = ddd;
    r = clos inner2501545716;
    st myNCOL = r;
    eval_parent = ldf `eval.parent`;
    check L58() else D0();
  D0():
    deopt 4 [];
  L58():
    p1 = prom<V +>{
      str2lang = ldf str2lang;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        c = `is.object`(object2);
        if c then L1() else L2(object2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", object2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(object4):
        r1 = `$`(object4, <sym series>);
        goto L0(r1);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r3 = dyn str2lang(p);
      return r3;
    };
    r5 = dyn eval_parent(p1);
    check L59() else D1();
  D1():
    deopt 6 [r5];
  L59():
    st data = r5;
    object5 = ld object;
    check L60() else D2();
  D2():
    deopt 8 [object5];
  L60():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L62() else L63(object6);
  L61(dx3):
    c2 = `is.object`(dx3);
    if c2 then L66() else L67(dx3);
  L62():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(object8):
    r6 = `$`(object8, <sym call>);
    goto L61(r6);
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L61(dx2);
  L65(dx7):
    st xr = dx7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L69() else L70();
  L66():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L68() else L67(dr4);
  L67(dx5):
    r7 = `$`(dx5, <sym xreg>);
    goto L65(r7);
  L3(r9):
    r10 = `!`(r9);
    c4 = `as.logical`(r10);
    if c4 then L72() else L4();
  L68():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L65(dx6);
  L69():
    xr = ld xr;
    check L71() else D3();
  L70():
    r8 = dyn base(<sym xr>);
    goto L3(r8);
  D3():
    deopt 14 [xr];
  L4():
    goto L5(NULL);
  L5(r13):
    st xreg = r13;
    myNCOL = ldf myNCOL;
    check L76() else D6();
  L71():
    xr1 = force? xr;
    checkMissing(xr1);
    c3 = `==`(xr1, NULL);
    goto L3(c3);
  L72():
    eval_parent1 = ldf `eval.parent`;
    check L73() else D4();
  D4():
    deopt 19 [];
  D6():
    deopt 26 [];
  L73():
    p2 = prom<V +>{
      xr2 = ld xr;
      xr3 = force? xr2;
      checkMissing(xr3);
      return xr3;
    };
    r12 = dyn eval_parent1(p2);
    check L74() else D5();
  L76():
    p3 = prom<V +>{
      xreg = ld xreg;
      xreg1 = force? xreg;
      checkMissing(xreg1);
      return xreg1;
    };
    r15 = dyn myNCOL(p3);
    check L77() else D7();
  D5():
    deopt 21 [r12];
  D7():
    deopt 28 [r15];
  L74():
    goto L5(r12);
  L77():
    st ncxreg = r15;
    myNCOL1 = ldf myNCOL;
    check L78() else D8();
  D8():
    deopt 31 [];
  L78():
    p4 = prom<V +>{
      newxreg1 = ld newxreg;
      newxreg2 = force? newxreg1;
      checkMissing(newxreg2);
      return newxreg2;
    };
    r17 = dyn myNCOL1(p4);
    check L79() else D9();
  D9():
    deopt 33 [r17];
  L79():
    ncxreg = ld ncxreg;
    check L80() else D10();
  D10():
    deopt 33 [r17, ncxreg];
  L80():
    ncxreg1 = force? ncxreg;
    checkMissing(ncxreg1);
    r18 = `!=`(r17, ncxreg1);
    c5 = `as.logical`(r18);
    if c5 then L81() else L6();
  L6():
    goto L7();
  L7():
    l = ld xreg;
    class__ = ldf `class<-`;
    check L85() else D13();
  L81():
    stop = ldf stop;
    check L82() else D11();
  D11():
    deopt 37 [];
  D13():
    deopt 45 [NULL, l, NULL];
  L82():
    r19 = dyn stop("'xreg' and 'newxreg' have different numbers of columns");
    check L83() else D12();
  L85():
    r21 = dyn class__(l, NULL, NULL);
    check L86() else D14();
  D12():
    deopt 39 [r19];
  D14():
    deopt 47 [NULL, r21];
  L83():
    goto L7();
  L86():
    st xreg = r21;
    tsp = ldf tsp;
    check L87() else D15();
  D15():
    deopt 50 [];
  L87():
    p5 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c6 = `is.object`(object10);
      if c6 then L1() else L2(object10);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object12):
      r22 = `$`(object12, <sym residuals>);
      goto L0(r22);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r24 = dyn tsp(p5);
    check L88() else D16();
  D16():
    deopt 52 [r24];
  L88():
    st xtsp = r24;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L89() else L90();
  L8(r26):
    st n = r26;
    object13 = ld object;
    check L93() else D19();
  L89():
    data = ld data;
    check L91() else D17();
  L90():
    r25 = dyn base1(<sym data>);
    goto L8(r25);
  D17():
    deopt 56 [data];
  D19():
    deopt 61 [object13];
  L91():
    data1 = force? data;
    checkMissing(data1);
    length = ldf length in base;
    r27 = dyn length(data1);
    check L92() else D18();
  L93():
    object14 = force? object13;
    checkMissing(object14);
    c7 = `is.object`(object14);
    if c7 then L95() else L96(object14);
  D18():
    deopt 59 [r27];
  L92():
    goto L8(r27);
  L94(dx11):
    st arma = dx11;
    object17 = ld object;
    check L98() else D20();
  L95():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L97() else L96(dr8);
  L96(object16):
    r28 = `$`(object16, <sym arma>);
    goto L94(r28);
  D20():
    deopt 65 [object17];
  L97():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L94(dx10);
  L98():
    object18 = force? object17;
    checkMissing(object18);
    c8 = `is.object`(object18);
    if c8 then L100() else L101(object18);
  L99(dx13):
    st coefs = dx13;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L103() else L104();
  L100():
    dr10 = tryDispatchBuiltin.1("$", object18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L102() else L101(dr10);
  L101(object20):
    r29 = `$`(object20, <sym coef>);
    goto L99(r29);
  L9(r31):
    st narma = r31;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L110() else L111();
  L102():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L99(dx12);
  L103():
    arma = ld arma;
    check L105() else D21();
  L104():
    r30 = dyn base2(<lang `[`(arma, `:`(1, 4))>);
    goto L9(r30);
  D21():
    deopt 71 [arma];
  L11(r35):
    narma = ld narma;
    check L114() else D25();
  L105():
    arma1 = force? arma;
    checkMissing(arma1);
    c9 = `is.object`(arma1);
    if c9 then L106() else L107(arma1);
  L110():
    coefs = ld coefs;
    check L112() else D23();
  L111():
    r34 = dyn base3(<sym coefs>);
    goto L11(r34);
  D23():
    deopt 81 [coefs];
  D25():
    deopt 84 [r35, narma];
  L10(dx15):
    sum = ldf sum in base;
    r33 = dyn sum(dx15);
    check L109() else D22();
  L106():
    dr12 = tryDispatchBuiltin.1("[", arma1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L108() else L107(dr12);
  L107(arma3):
    __ = ldf `[` in base;
    r32 = dyn __(arma3, <int 1, 2, 3, 4>);
    goto L10(r32);
  L112():
    coefs1 = force? coefs;
    checkMissing(coefs1);
    length1 = ldf length in base;
    r36 = dyn length1(coefs1);
    check L113() else D24();
  L114():
    narma1 = force? narma;
    checkMissing(narma1);
    r37 = `>`(r35, narma1);
    c10 = `as.logical`(r37);
    if c10 then L115() else L12();
  D22():
    deopt 77 [r33];
  D24():
    deopt 84 [r36];
  L12():
    st xm = 0.0;
    goto L20();
  L20():
    arma4 = ld arma;
    check L152() else D46();
  L108():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx14);
  L109():
    goto L9(r33);
  L113():
    goto L11(r36);
  L115():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L116() else L117();
  D46():
    deopt 162 [arma4];
  L13(r39):
    c11 = `is.object`(r39);
    if c11 then L120() else L121(r39);
  L116():
    coefs2 = ld coefs;
    check L118() else D26();
  L117():
    r38 = dyn base4(<sym coefs>);
    goto L13(r38);
  L152():
    arma5 = force? arma4;
    checkMissing(arma5);
    c15 = `is.object`(arma5);
    if c15 then L153() else L154(arma5);
  D26():
    deopt 89 [coefs2];
  L14(dx17):
    r45 = `==`(dx17, "intercept");
    c12 = `as.logical`(r45);
    if c12 then L124() else L15();
  L21(dx23):
    r78 = `>`(dx23, 0.0);
    c16 = `as.logical`(r78);
    if c16 then L156() else L22();
  L118():
    coefs3 = force? coefs2;
    checkMissing(coefs3);
    names = ldf names in base;
    r40 = dyn names(coefs3);
    check L119() else D27();
  L120():
    dr14 = tryDispatchBuiltin.1("[", r39);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L122() else L121(dr14);
  L121(r42):
    narma2 = ld narma;
    check L123() else D28();
  L153():
    dr20 = tryDispatchBuiltin.1("[", arma5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L155() else L154(dr20);
  L154(arma7):
    __4 = ldf `[` in base;
    r77 = dyn __4(arma7, 2);
    goto L21(r77);
  D27():
    deopt 92 [r40];
  D28():
    deopt 93 [r42, narma2];
  L15():
    goto L16();
  L16():
    data2 = ld data;
    check L131() else D34();
  L22():
    goto L32();
  L32():
    arma16 = ld arma;
    check L187() else D57();
  L119():
    goto L13(r40);
  L122():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L14(dx16);
  L123():
    narma3 = force? narma2;
    checkMissing(narma3);
    r43 = `+`(narma3, 1.0);
    __1 = ldf `[` in base;
    r44 = dyn __1(r42, r43);
    goto L14(r44);
  L124():
    cbind = ldf cbind;
    check L125() else D29();
  L155():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L21(dx22);
  L156():
    coefs12 = ld coefs;
    check L157() else D47();
  D29():
    deopt 101 [];
  D34():
    deopt 121 [data2];
  D47():
    deopt 169 [coefs12];
  D57():
    deopt 214 [arma16];
  L125():
    p6 = prom<V +>{
      sym5 = ldf rep_len;
      base5 = ldf rep_len in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      rep_len = ldf rep_len in base;
      r48 = dyn rep_len(1.0, n1);
      goto L0(r48);
    L2():
      r46 = dyn base5(1.0, <sym n>);
      goto L0(r46);
    };
    p7 = prom<V +>{
      xreg2 = ld xreg;
      xreg3 = force? xreg2;
      checkMissing(xreg3);
      return xreg3;
    };
    r51 = dyn cbind[intercept, ](p6, p7);
    check L126() else D30();
  L131():
    data3 = force? data2;
    checkMissing(data3);
    as_matrix = ldf `as.matrix`;
    check L132() else D35();
  L157():
    coefs13 = force? coefs12;
    checkMissing(coefs13);
    c17 = `is.object`(coefs13);
    if c17 then L158() else L159(coefs13);
  L187():
    arma17 = force? arma16;
    checkMissing(arma17);
    c22 = `is.object`(arma17);
    if c22 then L188() else L189(arma17);
  D30():
    deopt 105 [r51];
  D35():
    deopt 124 [data3];
  L23(dx25):
    st ma = dx25;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L169() else L170();
  L33(dx35):
    r105 = `>`(dx35, 0.0);
    c23 = `as.logical`(r105);
    if c23 then L191() else L34();
  L126():
    st xreg = r51;
    cbind1 = ldf cbind;
    check L127() else D31();
  L132():
    p10 = prom<V +>{
      xreg4 = ld xreg;
      xreg5 = force? xreg4;
      checkMissing(xreg5);
      return xreg5;
    };
    r61 = dyn as_matrix(p10);
    check L133() else D36();
  L158():
    dr22 = tryDispatchBuiltin.1("[", coefs13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L160() else L159(dr22);
  L159(coefs15):
    arma8 = ld arma;
    check L161() else D48();
  L188():
    dr28 = tryDispatchBuiltin.1("[", arma17);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L190() else L189(dr28);
  L189(arma19):
    __8 = ldf `[` in base;
    r104 = dyn __8(arma19, 4);
    goto L33(r104);
  D31():
    deopt 108 [];
  D36():
    deopt 126 [data3, r61];
  D48():
    deopt 171 [coefs15, arma8];
  L26(r89):
    c21 = `as.logical`(r89);
    if c21 then L182() else L30();
  L34():
    goto L45();
  L45():
    l1 = ld data;
    storage_mode__ = ldf `storage.mode<-`;
    check L225() else D69();
  L127():
    p8 = prom<V +>{
      sym6 = ldf rep_len;
      base6 = ldf rep_len in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      n_ahead1 = ld `n.ahead`;
      n_ahead2 = force? n_ahead1;
      checkMissing(n_ahead2);
      rep_len1 = ldf rep_len in base;
      r54 = dyn rep_len1(1.0, n_ahead2);
      goto L0(r54);
    L2():
      r52 = dyn base6(1.0, <sym n.ahead>);
      goto L0(r52);
    };
    p9 = prom<V +>{
      newxreg3 = ld newxreg;
      newxreg4 = force? newxreg3;
      checkMissing(newxreg4);
      return newxreg4;
    };
    r57 = dyn cbind1[intercept, ](p8, p9);
    check L128() else D32();
  L133():
    coefs4 = ld coefs;
    check L134() else D37();
  L160():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L23(dx24);
  L161():
    arma9 = force? arma8;
    checkMissing(arma9);
    c18 = `is.object`(arma9);
    if c18 then L162() else L163(coefs15, arma9);
  L169():
    sym9 = ldf Mod;
    base9 = ldf Mod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L171() else L172();
  L170():
    r88 = dyn base8(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>);
    goto L26(r88);
  L190():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L33(dx34);
  L191():
    coefs24 = ld coefs;
    check L192() else D58();
  D32():
    deopt 112 [r57];
  D37():
    deopt 127 [data3, coefs4];
  D58():
    deopt 221 [coefs24];
  D69():
    deopt 273 ["double", l1, "double"];
  L24(coefs19, dx27):
    arma12 = ld arma;
    check L165() else D49();
  L27(r91):
    r99 = `<`(r91, 1.0);
    any = ldf any in base;
    r100 = dyn any(r99);
    check L181() else D54();
  L30():
    goto L31(NULL);
  L31(r102):
    goto L32();
  L128():
    st newxreg = r57;
    ncxreg2 = ld ncxreg;
    check L129() else D33();
  L134():
    coefs5 = force? coefs4;
    checkMissing(coefs5);
    c13 = `is.object`(coefs5);
    if c13 then L135() else L136(data3, coefs5);
  L162():
    dr24 = tryDispatchBuiltin.1("[", arma9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L164() else L163(coefs15, dr24);
  L163(coefs17, arma11):
    __5 = ldf `[` in base;
    r79 = dyn __5(arma11, 1);
    goto L24(coefs17, r79);
  L171():
    sym10 = ldf polyroot;
    base10 = ldf polyroot in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L173() else L174();
  L172():
    r90 = dyn base9(<lang polyroot(c(1.0, ma))>);
    goto L27(r90);
  L182():
    warning = ldf warning;
    check L183() else D55();
  L192():
    coefs25 = force? coefs24;
    checkMissing(coefs25);
    c24 = `is.object`(coefs25);
    if c24 then L193() else L194(coefs25);
  L225():
    r138 = dyn storage_mode__(l1, NULL, "double");
    check L226() else D70();
  D33():
    deopt 114 [ncxreg2];
  D49():
    deopt 176 [coefs19, dx27, 1, arma12];
  D54():
    deopt 205 [r100];
  D55():
    deopt 207 [];
  D70():
    deopt 275 ["double", r138];
  L17(data7, dx19):
    ___ = ldf `%*%` in base;
    r65 = dyn ___(r61, dx19);
    check L139() else D39();
  L28(r93):
    Mod = ldf Mod in base;
    r98 = dyn Mod(r93);
    check L180() else D53();
  L35(dx37):
    st ma = dx37;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L207() else L208();
  L129():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r58 = `+`(ncxreg3, 1.0);
    st ncxreg = r58;
    goto L16();
  L135():
    dr16 = tryDispatchBuiltin.1("[", coefs5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L137() else L136(data3, dr16);
  L136(data5, coefs7):
    narma4 = ld narma;
    check L138() else D38();
  L164():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L24(coefs15, dx26);
  L165():
    arma13 = force? arma12;
    checkMissing(arma13);
    c19 = `is.object`(arma13);
    if c19 then L166() else L167(coefs19, dx27, 1, arma13);
  L173():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L175() else L176();
  L174():
    r92 = dyn base10(<lang c(1.0, ma)>);
    goto L28(r92);
  L181():
    goto L26(r100);
  L183():
    r101 = dyn warning("MA part of model is not invertible");
    check L184() else D56();
  L193():
    dr30 = tryDispatchBuiltin.1("[", coefs25);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L195() else L194(dr30);
  L194(coefs27):
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L196() else L197();
  L226():
    st data = r138;
    sym17 = ldf `.Call`;
    base17 = ldf `.Call` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L227() else L228();
  D38():
    deopt 130 [data5, coefs7, 1, narma4];
  D39():
    deopt 136 [data7, r65];
  D53():
    deopt 201 [r98];
  D56():
    deopt 209 [r101];
  L25(coefs23, dx32, r83, dx33):
    r85 = `:`(r83, dx33);
    r86 = `+`(dx32, r85);
    __7 = ldf `[` in base;
    r87 = dyn __7(coefs23, r86);
    goto L23(r87);
  L29(r95):
    polyroot = ldf polyroot in base;
    r97 = dyn polyroot(r95);
    check L179() else D52();
  L36(coefs30, r107):
    arma24 = ld arma;
    check L203() else D61();
  L39(r123):
    c28 = `as.logical`(r123);
    if c28 then L220() else L43();
  L46(r140):
    st G = r140;
    sym20 = ldf `on.exit`;
    base20 = ldf `on.exit` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L240() else L241();
  L137():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L17(data3, dx18);
  L138():
    narma5 = force? narma4;
    checkMissing(narma5);
    r62 = `:`(1, narma5);
    r63 = `-`(<missing>, r62);
    __2 = ldf `[` in base;
    r64 = dyn __2(coefs7, r63);
    goto L17(data5, r64);
  L139():
    r66 = `-`(data7, r65);
    st data = r66;
    sym7 = ldf drop;
    base7 = ldf drop in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L140() else L141();
  L166():
    dr26 = tryDispatchBuiltin.1("[", arma13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L168() else L167(coefs19, dx27, 1, dr26);
  L167(coefs21, dx29, r81, arma15):
    __6 = ldf `[` in base;
    r84 = dyn __6(arma15, 2);
    goto L25(coefs21, dx29, r81, r84);
  L175():
    ma = ld ma;
    check L177() else D50();
  L176():
    r94 = dyn base11(1.0, <sym ma>);
    goto L29(r94);
  L180():
    goto L27(r98);
  L184():
    goto L31(r101);
  L195():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L35(dx36);
  L196():
    arma20 = ld arma;
    check L198() else D59();
  L197():
    r106 = dyn base12(<lang `[`(arma, `:`(1, 3))>);
    goto L36(coefs27, r106);
  L207():
    sym14 = ldf Mod;
    base14 = ldf Mod in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L209() else L210();
  L208():
    r122 = dyn base13(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>);
    goto L39(r122);
  L227():
    C_setup_starma = ld C_setup_starma;
    check L229() else D71();
  L228():
    r139 = dyn base17(<sym C_setup_starma>, <lang as.integer(arma)>, <sym data>, <sym n>, <lang rep_len(0.0, n)>, 0.0, <lang `-`(1.0)>, 0.0, 0.0);
    goto L46(r139);
  D50():
    deopt 194 [ma];
  D52():
    deopt 199 [r97];
  D59():
    deopt 225 [coefs27, arma20];
  D61():
    deopt 232 [coefs30, r107, 1, arma24];
  D71():
    deopt 278 [C_setup_starma];
  L18(r68):
    st xm = r68;
    goto L20();
  L40(r125):
    r133 = `<`(r125, 1.0);
    any1 = ldf any in base;
    r134 = dyn any1(r133);
    check L219() else D66();
  L43():
    goto L44(NULL);
  L44(r136):
    goto L45();
  L49():
    sym21 = ldf `.Call`;
    base21 = ldf `.Call` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L242() else L243();
  L140():
    as_matrix1 = ldf `as.matrix`;
    check L142() else D40();
  L141():
    r67 = dyn base7(<lang `%*%`(as.matrix(newxreg), `[`(coefs, `-`(`(`(`:`(1, narma)))))>);
    goto L18(r67);
  L168():
    dx31 = getTryDispatchBuiltinValue(dr26);
    goto L25(coefs19, dx27, 1, dx31);
  L177():
    ma1 = force? ma;
    checkMissing(ma1);
    c20 = ldf c in base;
    r96 = dyn c20(1.0, ma1);
    check L178() else D51();
  L179():
    goto L28(r97);
  L198():
    arma21 = force? arma20;
    checkMissing(arma21);
    c25 = `is.object`(arma21);
    if c25 then L199() else L200(coefs27, arma21);
  L203():
    arma25 = force? arma24;
    checkMissing(arma25);
    c26 = `is.object`(arma25);
    if c26 then L204() else L205(coefs30, r107, 1, arma25);
  L209():
    sym15 = ldf polyroot;
    base15 = ldf polyroot in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L211() else L212();
  L210():
    r124 = dyn base14(<lang polyroot(c(1.0, ma))>);
    goto L40(r124);
  L220():
    warning1 = ldf warning;
    check L221() else D67();
  L229():
    C_setup_starma1 = force? C_setup_starma;
    checkMissing(C_setup_starma1);
    sym18 = ldf `as.integer`;
    base18 = ldf `as.integer` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L230() else L231();
  L240():
    on_exit = ldf `on.exit` in base;
    r153 = dyn on_exit(<lang .Call(C_free_starma, G)>);
    goto L49();
  L241():
    r151 = dyn base20(<lang .Call(C_free_starma, G)>);
    goto L49();
  D40():
    deopt 143 [];
  D51():
    deopt 197 [r96];
  D66():
    deopt 261 [r134];
  D67():
    deopt 263 [];
  L37(coefs34, dx39):
    sum1 = ldf sum in base;
    r109 = dyn sum1(dx39);
    check L202() else D60();
  L38(coefs38, r116, r117, dx41):
    r119 = `:`(r117, dx41);
    r120 = `+`(r116, r119);
    __11 = ldf `[` in base;
    r121 = dyn __11(coefs38, r120);
    goto L35(r121);
  L41(r127):
    Mod1 = ldf Mod in base;
    r132 = dyn Mod1(r127);
    check L218() else D65();
  L47(C_setup_starma4, r142):
    data8 = ld data;
    check L234() else D74();
  L50():
    sym22 = ldf `.Call`;
    base22 = ldf `.Call` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L246() else L247();
  L142():
    p11 = prom<V +>{
      newxreg5 = ld newxreg;
      newxreg6 = force? newxreg5;
      checkMissing(newxreg6);
      return newxreg6;
    };
    r70 = dyn as_matrix1(p11);
    check L143() else D41();
  L178():
    goto L29(r96);
  L199():
    dr32 = tryDispatchBuiltin.1("[", arma21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L201() else L200(coefs27, dr32);
  L200(coefs32, arma23):
    __9 = ldf `[` in base;
    r108 = dyn __9(arma23, <int 1, 2, 3>);
    goto L37(coefs32, r108);
  L204():
    dr34 = tryDispatchBuiltin.1("[", arma25);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L206() else L205(coefs30, r107, 1, dr34);
  L205(coefs36, r112, r113, arma27):
    __10 = ldf `[` in base;
    r118 = dyn __10(arma27, 4);
    goto L38(coefs36, r112, r113, r118);
  L211():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L213() else L214();
  L212():
    r126 = dyn base15(<lang c(1.0, ma)>);
    goto L41(r126);
  L219():
    goto L39(r134);
  L221():
    r135 = dyn warning1("seasonal MA part of model is not invertible");
    check L222() else D68();
  L230():
    arma28 = ld arma;
    check L232() else D72();
  L231():
    r141 = dyn base18(<sym arma>);
    goto L47(C_setup_starma1, r141);
  L242():
    C_Starma_method = ld C_Starma_method;
    check L244() else D78();
  L243():
    r154 = dyn base21(<sym C_Starma_method>, <sym G>, TRUE);
    goto L50();
  D41():
    deopt 145 [r70];
  D60():
    deopt 231 [coefs34, r109];
  D65():
    deopt 257 [r132];
  D68():
    deopt 265 [r135];
  D72():
    deopt 281 [C_setup_starma1, arma28];
  D74():
    deopt 284 [C_setup_starma4, r142, data8];
  D78():
    deopt 303 [C_Starma_method];
  L42(r129):
    polyroot1 = ldf polyroot in base;
    r131 = dyn polyroot1(r129);
    check L217() else D64();
  L51():
    sym24 = ldf `.Call`;
    base24 = ldf `.Call` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L254() else L255();
  L143():
    coefs8 = ld coefs;
    check L144() else D42();
  L201():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L37(coefs27, dx38);
  L202():
    goto L36(coefs34, r109);
  L206():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L38(coefs30, r107, 1, dx40);
  L213():
    ma2 = ld ma;
    check L215() else D62();
  L214():
    r128 = dyn base16(1.0, <sym ma>);
    goto L42(r128);
  L218():
    goto L40(r132);
  L222():
    goto L44(r135);
  L232():
    arma29 = force? arma28;
    checkMissing(arma29);
    as_integer = ldf `as.integer` in base;
    r143 = dyn as_integer(arma29);
    check L233() else D73();
  L234():
    data9 = force? data8;
    checkMissing(data9);
    n2 = ld n;
    check L235() else D75();
  L244():
    C_Starma_method1 = force? C_Starma_method;
    checkMissing(C_Starma_method1);
    G = ld G;
    check L245() else D79();
  L246():
    C_arma0fa = ld C_arma0fa;
    check L248() else D80();
  L247():
    r157 = dyn base22(<sym C_arma0fa>, <sym G>, <lang as.double(coefs)>);
    goto L51();
  D42():
    deopt 146 [coefs8];
  D62():
    deopt 250 [ma2];
  D64():
    deopt 255 [r131];
  D73():
    deopt 284 [C_setup_starma1, r143];
  D75():
    deopt 285 [C_setup_starma4, r142, data9, n2];
  D79():
    deopt 304 [C_Starma_method1, G];
  D80():
    deopt 309 [C_arma0fa];
  L53(r164):
    st z = r164;
    ts = ldf ts;
    check L267() else D89();
  L144():
    coefs9 = force? coefs8;
    checkMissing(coefs9);
    c14 = `is.object`(coefs9);
    if c14 then L145() else L146(coefs9);
  L215():
    ma3 = force? ma2;
    checkMissing(ma3);
    c27 = ldf c in base;
    r130 = dyn c27(1.0, ma3);
    check L216() else D63();
  L217():
    goto L41(r131);
  L233():
    goto L47(C_setup_starma1, r143);
  L235():
    n3 = force? n2;
    checkMissing(n3);
    sym19 = ldf rep_len;
    base19 = ldf rep_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L236() else L237();
  L245():
    G1 = force? G;
    checkMissing(G1);
    vargs1 = dots[G1, TRUE];
    r156 = `.Call`(C_Starma_method1, vargs1, <missing>);
    goto L50();
  L248():
    C_arma0fa1 = force? C_arma0fa;
    checkMissing(C_arma0fa1);
    G2 = ld G;
    check L249() else D81();
  L254():
    C_arma0_kfore = ld C_arma0_kfore;
    check L256() else D84();
  L255():
    r163 = dyn base24(<sym C_arma0_kfore>, <sym G>, <lang `[`(arma, 6)>, <lang `[`(arma, 7)>, <sym n.ahead>);
    goto L53(r163);
  D63():
    deopt 253 [r130];
  D81():
    deopt 310 [C_arma0fa1, G2];
  D84():
    deopt 319 [C_arma0_kfore];
  D89():
    deopt 334 [];
  L19(dx21):
    ___1 = ldf `%*%` in base;
    r74 = dyn ___1(r70, dx21);
    check L149() else D44();
  L48(C_setup_starma7, r147, data12, n6, r148):
    vargs = dots[r147, data12, n6, r148, 0.0, -1.0, 0.0, 0.0];
    r150 = `.Call`(C_setup_starma7, vargs, <missing>);
    goto L46(r150);
  L145():
    dr18 = tryDispatchBuiltin.1("[", coefs9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L147() else L146(dr18);
  L146(coefs11):
    narma6 = ld narma;
    check L148() else D43();
  L216():
    goto L42(r130);
  L236():
    n7 = ld n;
    check L238() else D76();
  L237():
    r146 = dyn base19(0.0, <sym n>);
    goto L48(C_setup_starma4, r142, data9, n3, r146);
  L249():
    G3 = force? G2;
    checkMissing(G3);
    sym23 = ldf `as.double`;
    base23 = ldf `as.double` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L250() else L251();
  L256():
    C_arma0_kfore1 = force? C_arma0_kfore;
    checkMissing(C_arma0_kfore1);
    G7 = ld G;
    check L257() else D85();
  L267():
    p12 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c31 = `is.object`(z1);
      if c31 then L1() else L2(z1);
    L0(dx51):
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      r169 = `+`(dx51, xm1);
      return r169;
    L1():
      dr40 = tryDispatchBuiltin.1("[[", z1);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(z3):
      __14 = ldf `[[` in base;
      r168 = dyn __14(z3, 1);
      goto L0(r168);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx50);
    };
    p14 = prom<V +>{
      xtsp = ld xtsp;
      xtsp1 = force? xtsp;
      checkMissing(xtsp1);
      c32 = `is.object`(xtsp1);
      if c32 then L1() else L2(xtsp1);
    L0(dx53):
      deltat = ldf deltat;
      p13 = prom<V +>{
        data13 = ld data;
        data14 = force? data13;
        checkMissing(data14);
        return data14;
      };
      r173 = dyn deltat(p13);
      r174 = `+`(dx53, r173);
      return r174;
    L1():
      dr42 = tryDispatchBuiltin.1("[", xtsp1);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(xtsp3):
      __15 = ldf `[` in base;
      r171 = dyn __15(xtsp3, 2);
      goto L0(r171);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx52);
    };
    p15 = prom<V +>{
      xtsp4 = ld xtsp;
      xtsp5 = force? xtsp4;
      checkMissing(xtsp5);
      c33 = `is.object`(xtsp5);
      if c33 then L1() else L2(xtsp5);
    L0(dx55):
      return dx55;
    L1():
      dr44 = tryDispatchBuiltin.1("[", xtsp5);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(xtsp7):
      __16 = ldf `[` in base;
      r176 = dyn __16(xtsp7, 3);
      goto L0(r176);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx54);
    };
    r178 = dyn ts[, start, frequency](p12, p14, p15);
    check L268() else D90();
  D43():
    deopt 149 [coefs11, 1, narma6];
  D44():
    deopt 155 [r74];
  D76():
    deopt 289 [C_setup_starma4, r142, data9, n3, n7];
  D85():
    deopt 320 [C_arma0_kfore1, G7];
  D90():
    deopt 340 [r178];
  L52(C_arma0fa4, G6, r160):
    vargs2 = dots[G6, r160];
    r162 = `.Call`(C_arma0fa4, vargs2, <missing>);
    goto L51();
  L147():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L19(dx20);
  L148():
    narma7 = force? narma6;
    checkMissing(narma7);
    r71 = `:`(1, narma7);
    r72 = `-`(<missing>, r71);
    __3 = ldf `[` in base;
    r73 = dyn __3(coefs11, r72);
    goto L19(r73);
  L149():
    drop = ldf drop in base;
    r75 = dyn drop(r74);
    check L150() else D45();
  L238():
    n8 = force? n7;
    checkMissing(n8);
    rep_len2 = ldf rep_len in base;
    r149 = dyn rep_len2(0.0, n8);
    check L239() else D77();
  L250():
    coefs39 = ld coefs;
    check L252() else D82();
  L251():
    r159 = dyn base23(<sym coefs>);
    goto L52(C_arma0fa1, G3, r159);
  L257():
    G8 = force? G7;
    checkMissing(G8);
    arma30 = ld arma;
    check L258() else D86();
  L268():
    st pred = r178;
    se_fit1 = ld `se.fit`;
    check L269() else D91();
  D45():
    deopt 157 [r75];
  D77():
    deopt 292 [C_setup_starma4, r142, data9, n3, r149];
  D82():
    deopt 313 [C_arma0fa1, G3, coefs39];
  D86():
    deopt 321 [C_arma0_kfore1, G8, arma30];
  D91():
    deopt 342 [se_fit1];
  L150():
    goto L18(r75);
  L239():
    goto L48(C_setup_starma4, r142, data9, n3, r149);
  L252():
    coefs40 = force? coefs39;
    checkMissing(coefs40);
    as_double = ldf `as.double` in base;
    r161 = dyn as_double(coefs40);
    check L253() else D83();
  L258():
    arma31 = force? arma30;
    checkMissing(arma31);
    c29 = `is.object`(arma31);
    if c29 then L259() else L260(C_arma0_kfore1, G8, arma31);
  L269():
    se_fit2 = force? se_fit1;
    checkMissing(se_fit2);
    c34 = `as.logical`(se_fit2);
    if c34 then L270() else L56();
  D83():
    deopt 316 [C_arma0fa1, G3, r161];
  L54(C_arma0_kfore5, G12, dx43):
    arma34 = ld arma;
    check L262() else D87();
  L56():
    pred2 = ld pred;
    check L279() else D97();
  L253():
    goto L52(C_arma0fa1, G3, r161);
  L259():
    dr36 = tryDispatchBuiltin.1("[", arma31);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L261() else L260(C_arma0_kfore1, G8, dr36);
  L260(C_arma0_kfore3, G10, arma33):
    __12 = ldf `[` in base;
    r165 = dyn __12(arma33, 6);
    goto L54(C_arma0_kfore3, G10, r165);
  L270():
    ts1 = ldf ts;
    check L271() else D92();
  D87():
    deopt 325 [C_arma0_kfore5, G12, dx43, arma34];
  D92():
    deopt 345 [];
  D97():
    deopt 363 [pred2];
  L261():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L54(C_arma0_kfore1, G8, dx42);
  L262():
    arma35 = force? arma34;
    checkMissing(arma35);
    c30 = `is.object`(arma35);
    if c30 then L263() else L264(C_arma0_kfore5, G12, dx43, arma35);
  L271():
    p16 = prom<V +>{
      sym25 = ldf sqrt;
      base25 = ldf sqrt in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L2() else L3();
    L0(r180):
      return r180;
    L2():
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c35 = `is.object`(z5);
      if c35 then L4() else L5(z5);
    L3():
      r179 = dyn base25(<lang `[[`(z, 2)>);
      goto L0(r179);
    L1(dx57):
      r182 = sqrt(dx57);
      goto L0(r182);
    L4():
      dr46 = tryDispatchBuiltin.1("[[", z5);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L6() else L5(dr46);
    L5(z7):
      __17 = ldf `[[` in base;
      r181 = dyn __17(z7, 2);
      goto L1(r181);
    L6():
      dx56 = getTryDispatchBuiltinValue(dr46);
      goto L1(dx56);
    };
    p18 = prom<V +>{
      xtsp8 = ld xtsp;
      xtsp9 = force? xtsp8;
      checkMissing(xtsp9);
      c36 = `is.object`(xtsp9);
      if c36 then L1() else L2(xtsp9);
    L0(dx59):
      deltat1 = ldf deltat;
      p17 = prom<V +>{
        data15 = ld data;
        data16 = force? data15;
        checkMissing(data16);
        return data16;
      };
      r186 = dyn deltat1(p17);
      r187 = `+`(dx59, r186);
      return r187;
    L1():
      dr48 = tryDispatchBuiltin.1("[", xtsp9);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(xtsp11):
      __18 = ldf `[` in base;
      r184 = dyn __18(xtsp11, 2);
      goto L0(r184);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx58);
    };
    p19 = prom<V +>{
      xtsp12 = ld xtsp;
      xtsp13 = force? xtsp12;
      checkMissing(xtsp13);
      c37 = `is.object`(xtsp13);
      if c37 then L1() else L2(xtsp13);
    L0(dx61):
      return dx61;
    L1():
      dr50 = tryDispatchBuiltin.1("[", xtsp13);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(xtsp15):
      __19 = ldf `[` in base;
      r189 = dyn __19(xtsp15, 3);
      goto L0(r189);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx60);
    };
    r191 = dyn ts1[, start, frequency](p16, p18, p19);
    check L272() else D93();
  L279():
    pred3 = force? pred2;
    checkMissing(pred3);
    popenv;
    return pred3;
  D93():
    deopt 351 [r191];
  L55(C_arma0_kfore9, G16, dx48, dx49):
    n_ahead3 = ld `n.ahead`;
    check L266() else D88();
  L263():
    dr38 = tryDispatchBuiltin.1("[", arma35);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L265() else L264(C_arma0_kfore5, G12, dx43, dr38);
  L264(C_arma0_kfore7, G14, dx45, arma37):
    __13 = ldf `[` in base;
    r166 = dyn __13(arma37, 7);
    goto L55(C_arma0_kfore7, G14, dx45, r166);
  L272():
    st se = r191;
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L273() else L274();
  D88():
    deopt 329 [C_arma0_kfore9, G16, dx48, dx49, n_ahead3];
  L57(r193):
    popenv;
    return r193;
  L265():
    dx47 = getTryDispatchBuiltinValue(dr38);
    goto L55(C_arma0_kfore5, G12, dx43, dx47);
  L266():
    n_ahead4 = force? n_ahead3;
    checkMissing(n_ahead4);
    vargs3 = dots[G16, dx48, dx49, n_ahead4];
    r167 = `.Call`(C_arma0_kfore9, vargs3, <missing>);
    goto L53(r167);
  L273():
    pred = ld pred;
    check L275() else D94();
  L274():
    r192 = dyn base26[pred, se](<sym pred>, <sym se>);
    goto L57(r192);
  D94():
    deopt 355 [pred];
  L275():
    pred1 = force? pred;
    checkMissing(pred1);
    se = ld se;
    check L276() else D95();
  D95():
    deopt 358 [se];
  L276():
    se1 = force? se;
    checkMissing(se1);
    list = ldf list in base;
    r194 = dyn list(pred1, se1);
    check L277() else D96();
  D96():
    deopt 362 [r194];
  L277():
    goto L57(r194);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg NCOL:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r3:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    NCOL = ldf NCOL;
    check L7() else D1();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L5():
    popenv;
    return 0.0;
  D1():
    deopt 7 [];
  L7():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn NCOL(p);
    check L8() else D2();
  D2():
    deopt 9 [r3];
  L8():
    popenv;
    return r3;
  }
}