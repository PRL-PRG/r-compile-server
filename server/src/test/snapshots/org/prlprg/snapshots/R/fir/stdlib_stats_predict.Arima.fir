fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg predict:cls, reg arima:cls, reg lh:*, reg lh1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg arima1:cls, reg USAccDeaths:*, reg USAccDeaths1:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg list:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg predict1:cls, reg fit:*, reg fit1:V, reg p6:p(V +), reg r24:V, reg options1:cls, reg od:*, reg od1:V, reg p7:p(V +), reg r26:V |
    mkenv;
    r = clos inner1768932914;
    st `predict.Arima` = r;
    options = ldf options;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn options[digits](5.0);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    st od = r1;
    predict = ldf predict;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      arima = ldf arima;
      p = prom<V +>{
        lh = ld lh;
        lh1 = force? lh;
        checkMissing(lh1);
        return lh1;
      };
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r4):
        return r4;
      L1():
        c = ldf c in base;
        r5 = dyn c(3.0, 0.0, 0.0);
        goto L0(r5);
      L2():
        r3 = dyn base(3.0, 0.0, 0.0);
        goto L0(r3);
      };
      r7 = dyn arima[, order](p, p1);
      return r7;
    };
    r9 = dyn predict[, `n.ahead`](p2, 12.0);
    check L3() else D3();
  D3():
    deopt 14 [r9];
  L3():
    arima1 = ldf arima;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p3 = prom<V +>{
      USAccDeaths = ld USAccDeaths;
      USAccDeaths1 = force? USAccDeaths;
      checkMissing(USAccDeaths1);
      return USAccDeaths1;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1(0.0, 1.0, 1.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(0.0, 1.0, 1.0);
      goto L0(r11);
    };
    p5 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r16):
      return r16;
    L2():
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r15 = dyn base2[order](<lang c(0.0, 1.0, 1.0)>);
      goto L0(r15);
    L1(r18):
      list = ldf list in base;
      r20 = dyn list(r18);
      goto L0(r20);
    L4():
      c2 = ldf c in base;
      r19 = dyn c2(0.0, 1.0, 1.0);
      goto L1(r19);
    L5():
      r17 = dyn base3(0.0, 1.0, 1.0);
      goto L1(r17);
    };
    r22 = dyn arima1[, order, seasonal](p3, p4, p5);
    check L5() else D5();
  D5():
    deopt 22 [r22];
  L5():
    st fit = r22;
    predict1 = ldf predict;
    check L6() else D6();
  D6():
    deopt 25 [];
  L6():
    p6 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r24 = dyn predict1[, `n.ahead`](p6, 6.0);
    check L7() else D7();
  D7():
    deopt 29 [r24];
  L7():
    options1 = ldf options;
    check L8() else D8();
  D8():
    deopt 31 [];
  L8():
    p7 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r26 = dyn options1(p7);
    check L9() else D9();
  D9():
    deopt 33 [r26];
  L9():
    popenv;
    return r26;
  }
}
fun inner1768932914(object, `n.ahead`, newxreg, `se.fit`, `...`) {
  (reg object:*, reg n_ahead:*, reg newxreg:*, reg se_fit:*, reg ddd:dots) -+> V { var object:*, var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var newxreg:*, reg newxreg_isMissing:L, reg newxreg_orDefault:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var `...`:dots?, reg r:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg xr:*, reg xr1:V, reg c3:V, reg r6:V, reg c4:L, reg eval_parent:cls, reg xr2:*, reg xr3:V, reg p:p(V +), reg r8:V, reg r9:V, reg myNCOL:cls, reg xreg:*, reg xreg1:V, reg p1:p(V +), reg r11:V, reg myNCOL1:cls, reg newxreg1:*, reg newxreg2:V, reg p2:p(V +), reg r13:V, reg ncxreg:*, reg ncxreg1:V, reg r14:V, reg c5:L, reg stop:cls, reg r15:V, reg tsp:cls, reg rsd:*, reg rsd1:V, reg p3:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg rsd2:*, reg rsd3:V, reg length:cls, reg r21:V, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r22:V, reg object13:*, reg object14:V, reg c7:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg arma:*, reg arma1:V, reg c8:L, reg arma3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __:cls, reg r26:V, reg sum:cls, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg coefs:*, reg coefs1:V, reg length1:cls, reg r30:V, reg narma:*, reg narma1:V, reg r31:V, reg c9:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg coefs2:*, reg coefs3:V, reg names:cls, reg r34:V, reg c10:L, reg r36:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg narma2:*, reg narma3:V, reg r37:V, reg __1:cls, reg r38:V, reg r39:V, reg c11:L, reg cbind:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg rep:cls, reg r42:V, reg p4:p(V +), reg newxreg3:*, reg newxreg4:V, reg p5:p(V +), reg r45:V, reg ncxreg2:*, reg ncxreg3:V, reg r46:V, reg narma4:*, reg narma5:V, reg r48:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg as_matrix:cls, reg newxreg5:*, reg newxreg6:V, reg p6:p(V +), reg r52:V, reg coefs4:*, reg coefs5:V, reg ___:cls, reg r53:V, reg drop:cls, reg r54:V, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg as_matrix1:cls, reg newxreg7:*, reg newxreg8:V, reg p7:p(V +), reg r58:V, reg coefs6:*, reg coefs7:V, reg c13:L, reg coefs9:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg narma6:*, reg narma7:V, reg r59:V, reg r60:V, reg __2:cls, reg r61:V, reg ___1:cls, reg r62:V, reg drop1:cls, reg r63:V, reg arma4:*, reg arma5:V, reg c14:L, reg arma7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __3:cls, reg r65:V, reg r66:V, reg c15:L, reg coefs10:*, reg coefs11:V, reg c16:L, reg coefs13:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg arma8:*, reg arma9:V, reg c17:L, reg coefs15:V, reg arma11:V, reg dr20:V, reg dc10:L, reg dx22:V, reg coefs17:V, reg dx23:V, reg __4:cls, reg r67:V, reg arma12:*, reg arma13:V, reg c18:L, reg coefs19:V, reg dx25:V, reg r69:I, reg arma15:V, reg dr22:V, reg dc11:L, reg dx27:V, reg coefs21:V, reg dx28:V, reg r71:I, reg dx29:V, reg __5:cls, reg r72:V, reg r73:V, reg r74:V, reg __6:cls, reg r75:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r80:V, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg ma:*, reg ma1:V, reg c19:cls, reg r84:V, reg polyroot:cls, reg r85:V, reg Mod:cls, reg r86:V, reg r87:V, reg any:cls, reg r88:V, reg c20:L, reg warning:cls, reg r89:V, reg r90:V, reg arma16:*, reg arma17:V, reg c21:L, reg arma19:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg __7:cls, reg r92:V, reg r93:V, reg c22:L, reg coefs22:*, reg coefs23:V, reg c23:L, reg coefs25:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg coefs28:V, reg r95:V, reg arma20:*, reg arma21:V, reg c24:L, reg coefs30:V, reg arma23:V, reg dr28:V, reg dc14:L, reg dx34:V, reg coefs32:V, reg dx35:V, reg __8:cls, reg r96:V, reg sum1:cls, reg r97:V, reg arma24:*, reg arma25:V, reg c25:L, reg coefs34:V, reg r100:V, reg r101:I, reg arma27:V, reg dr30:V, reg dc15:L, reg dx36:V, reg coefs36:V, reg r104:V, reg r105:I, reg dx37:V, reg __9:cls, reg r106:V, reg r107:V, reg r108:V, reg __10:cls, reg r109:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r110:V, reg r111:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r112:V, reg r113:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r114:V, reg r115:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r116:V, reg r117:V, reg ma2:*, reg ma3:V, reg c26:cls, reg r118:V, reg polyroot1:cls, reg r119:V, reg Mod1:cls, reg r120:V, reg r121:V, reg any1:cls, reg r122:V, reg c27:L, reg warning1:cls, reg r123:V, reg r124:V, reg KalmanForecast:cls, reg n_ahead1:*, reg n_ahead2:V, reg p8:p(V +), reg object17:*, reg object18:V, reg c28:L, reg object20:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg r127:V, reg p9:p(V +), reg r129:V, reg ts:cls, reg z:*, reg z1:V, reg c29:L, reg z3:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg __11:cls, reg r130:V, reg xm:*, reg xm1:V, reg r131:V, reg p10:p(V +), reg xtsp:*, reg xtsp1:V, reg c30:L, reg xtsp3:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg __12:cls, reg r133:V, reg deltat:cls, reg rsd4:*, reg rsd5:V, reg p11:p(V +), reg r135:V, reg r136:V, reg p12:p(V +), reg xtsp4:*, reg xtsp5:V, reg c31:L, reg xtsp7:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg __13:cls, reg r138:V, reg p13:p(V +), reg r140:V, reg se_fit1:*, reg se_fit2:V, reg c32:L, reg ts1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r141:V, reg r142:V, reg z4:*, reg z5:V, reg c33:L, reg z7:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg __14:cls, reg r143:V, reg object21:*, reg object22:V, reg c34:L, reg dx49:V, reg object24:V, reg dr42:V, reg dc21:L, reg dx51:V, reg dx52:V, reg dx53:V, reg r144:V, reg r145:V, reg r146:V, reg p14:p(V +), reg xtsp8:*, reg xtsp9:V, reg c35:L, reg xtsp11:V, reg dr44:V, reg dc22:L, reg dx54:V, reg dx55:V, reg __15:cls, reg r148:V, reg deltat1:cls, reg rsd6:*, reg rsd7:V, reg p15:p(V +), reg r150:V, reg r151:V, reg p16:p(V +), reg xtsp12:*, reg xtsp13:V, reg c36:L, reg xtsp15:V, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg __16:cls, reg r153:V, reg p17:p(V +), reg r155:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r156:V, reg r157:V, reg pred:*, reg pred1:V, reg se:*, reg se1:V, reg list:cls, reg r158:V, reg pred2:*, reg pred3:V |
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
    object1 = ld object;
    check L49() else D0();
  D0():
    deopt 3 [object1];
  L49():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L51() else L52(object2);
  L50(dx1):
    st rsd = dx1;
    object5 = ld object;
    check L54() else D1();
  L51():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(object4):
    r1 = `$`(object4, <sym residuals>);
    goto L50(r1);
  D1():
    deopt 7 [object5];
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L50(dx);
  L54():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L56() else L57(object6);
  L55(dx3):
    c2 = `is.object`(dx3);
    if c2 then L60() else L61(dx3);
  L56():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(dr2);
  L57(object8):
    r2 = `$`(object8, <sym call>);
    goto L55(r2);
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L55(dx2);
  L59(dx7):
    st xr = dx7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L60():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(dx5):
    r3 = `$`(dx5, <sym xreg>);
    goto L59(r3);
  L3(r5):
    r6 = `!`(r5);
    c4 = `as.logical`(r6);
    if c4 then L66() else L4();
  L62():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx6);
  L63():
    xr = ld xr;
    check L65() else D2();
  L64():
    r4 = dyn base(<sym xr>);
    goto L3(r4);
  D2():
    deopt 13 [xr];
  L4():
    goto L5(NULL);
  L5(r9):
    st xreg = r9;
    myNCOL = ldf myNCOL;
    check L70() else D5();
  L65():
    xr1 = force? xr;
    checkMissing(xr1);
    c3 = `==`(xr1, NULL);
    goto L3(c3);
  L66():
    eval_parent = ldf `eval.parent`;
    check L67() else D3();
  D3():
    deopt 18 [];
  D5():
    deopt 25 [];
  L67():
    p = prom<V +>{
      xr2 = ld xr;
      xr3 = force? xr2;
      checkMissing(xr3);
      return xr3;
    };
    r8 = dyn eval_parent(p);
    check L68() else D4();
  L70():
    p1 = prom<V +>{
      xreg = ld xreg;
      xreg1 = force? xreg;
      checkMissing(xreg1);
      return xreg1;
    };
    r11 = dyn myNCOL(p1);
    check L71() else D6();
  D4():
    deopt 20 [r8];
  D6():
    deopt 27 [r11];
  L68():
    goto L5(r8);
  L71():
    st ncxreg = r11;
    myNCOL1 = ldf myNCOL;
    check L72() else D7();
  D7():
    deopt 30 [];
  L72():
    p2 = prom<V +>{
      newxreg1 = ld newxreg;
      newxreg2 = force? newxreg1;
      checkMissing(newxreg2);
      return newxreg2;
    };
    r13 = dyn myNCOL1(p2);
    check L73() else D8();
  D8():
    deopt 32 [r13];
  L73():
    ncxreg = ld ncxreg;
    check L74() else D9();
  D9():
    deopt 32 [r13, ncxreg];
  L74():
    ncxreg1 = force? ncxreg;
    checkMissing(ncxreg1);
    r14 = `!=`(r13, ncxreg1);
    c5 = `as.logical`(r14);
    if c5 then L75() else L6();
  L6():
    goto L7();
  L7():
    tsp = ldf tsp;
    check L79() else D12();
  L75():
    stop = ldf stop;
    check L76() else D10();
  D10():
    deopt 36 [];
  D12():
    deopt 42 [];
  L76():
    r15 = dyn stop("'xreg' and 'newxreg' have different numbers of columns");
    check L77() else D11();
  L79():
    p3 = prom<V +>{
      rsd = ld rsd;
      rsd1 = force? rsd;
      checkMissing(rsd1);
      return rsd1;
    };
    r18 = dyn tsp(p3);
    check L80() else D13();
  D11():
    deopt 38 [r15];
  D13():
    deopt 44 [r18];
  L77():
    goto L7();
  L80():
    st xtsp = r18;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L81() else L82();
  L8(r20):
    st n = r20;
    object9 = ld object;
    check L85() else D16();
  L81():
    rsd2 = ld rsd;
    check L83() else D14();
  L82():
    r19 = dyn base1(<sym rsd>);
    goto L8(r19);
  D14():
    deopt 48 [rsd2];
  D16():
    deopt 53 [object9];
  L83():
    rsd3 = force? rsd2;
    checkMissing(rsd3);
    length = ldf length in base;
    r21 = dyn length(rsd3);
    check L84() else D15();
  L85():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L87() else L88(object10);
  D15():
    deopt 51 [r21];
  L84():
    goto L8(r21);
  L86(dx9):
    st arma = dx9;
    object13 = ld object;
    check L90() else D17();
  L87():
    dr6 = tryDispatchBuiltin.1("$", object10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(dr6);
  L88(object12):
    r22 = `$`(object12, <sym arma>);
    goto L86(r22);
  D17():
    deopt 57 [object13];
  L89():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L86(dx8);
  L90():
    object14 = force? object13;
    checkMissing(object14);
    c7 = `is.object`(object14);
    if c7 then L92() else L93(object14);
  L91(dx11):
    st coefs = dx11;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L95() else L96();
  L92():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L94() else L93(dr8);
  L93(object16):
    r23 = `$`(object16, <sym coef>);
    goto L91(r23);
  L9(r25):
    st narma = r25;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L102() else L103();
  L94():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L91(dx10);
  L95():
    arma = ld arma;
    check L97() else D18();
  L96():
    r24 = dyn base2(<lang `[`(arma, `:`(1, 4))>);
    goto L9(r24);
  D18():
    deopt 63 [arma];
  L11(r29):
    narma = ld narma;
    check L106() else D22();
  L97():
    arma1 = force? arma;
    checkMissing(arma1);
    c8 = `is.object`(arma1);
    if c8 then L98() else L99(arma1);
  L102():
    coefs = ld coefs;
    check L104() else D20();
  L103():
    r28 = dyn base3(<sym coefs>);
    goto L11(r28);
  D20():
    deopt 73 [coefs];
  D22():
    deopt 76 [r29, narma];
  L10(dx13):
    sum = ldf sum in base;
    r27 = dyn sum(dx13);
    check L101() else D19();
  L98():
    dr10 = tryDispatchBuiltin.1("[", arma1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L100() else L99(dr10);
  L99(arma3):
    __ = ldf `[` in base;
    r26 = dyn __(arma3, <int 1, 2, 3, 4>);
    goto L10(r26);
  L104():
    coefs1 = force? coefs;
    checkMissing(coefs1);
    length1 = ldf length in base;
    r30 = dyn length1(coefs1);
    check L105() else D21();
  L106():
    narma1 = force? narma;
    checkMissing(narma1);
    r31 = `>`(r29, narma1);
    c9 = `as.logical`(r31);
    if c9 then L107() else L12();
  D19():
    deopt 69 [r27];
  D21():
    deopt 76 [r30];
  L12():
    st xm = 0.0;
    goto L21();
  L21():
    arma4 = ld arma;
    check L143() else D41();
  L100():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx12);
  L101():
    goto L9(r27);
  L105():
    goto L11(r30);
  L107():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L108() else L109();
  D41():
    deopt 146 [arma4];
  L13(r33):
    c10 = `is.object`(r33);
    if c10 then L112() else L113(r33);
  L108():
    coefs2 = ld coefs;
    check L110() else D23();
  L109():
    r32 = dyn base4(<sym coefs>);
    goto L13(r32);
  L143():
    arma5 = force? arma4;
    checkMissing(arma5);
    c14 = `is.object`(arma5);
    if c14 then L144() else L145(arma5);
  D23():
    deopt 81 [coefs2];
  L14(dx15):
    r39 = `==`(dx15, "intercept");
    c11 = `as.logical`(r39);
    if c11 then L116() else L15();
  L22(dx19):
    r66 = `>`(dx19, 0);
    c15 = `as.logical`(r66);
    if c15 then L147() else L23();
  L110():
    coefs3 = force? coefs2;
    checkMissing(coefs3);
    names = ldf names in base;
    r34 = dyn names(coefs3);
    check L111() else D24();
  L112():
    dr12 = tryDispatchBuiltin.1("[", r33);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L114() else L113(dr12);
  L113(r36):
    narma2 = ld narma;
    check L115() else D25();
  L144():
    dr16 = tryDispatchBuiltin.1("[", arma5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L146() else L145(dr16);
  L145(arma7):
    __3 = ldf `[` in base;
    r65 = dyn __3(arma7, 2);
    goto L22(r65);
  D24():
    deopt 84 [r34];
  D25():
    deopt 85 [r36, narma2];
  L15():
    goto L16();
  L16():
    narma4 = ld narma;
    check L121() else D29();
  L23():
    goto L33();
  L33():
    arma16 = ld arma;
    check L178() else D52();
  L111():
    goto L13(r34);
  L114():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L14(dx14);
  L115():
    narma3 = force? narma2;
    checkMissing(narma3);
    r37 = `+`(narma3, 1);
    __1 = ldf `[` in base;
    r38 = dyn __1(r36, r37);
    goto L14(r38);
  L116():
    cbind = ldf cbind;
    check L117() else D26();
  L146():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L22(dx18);
  L147():
    coefs10 = ld coefs;
    check L148() else D42();
  D26():
    deopt 93 [];
  D29():
    deopt 106 [narma4];
  D42():
    deopt 153 [coefs10];
  D52():
    deopt 198 [arma16];
  L117():
    p4 = prom<V +>{
      sym5 = ldf rep;
      base5 = ldf rep in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      rep = ldf rep in base;
      r42 = dyn rep(1.0, <sym n.ahead>);
      goto L0(r42);
    L2():
      r40 = dyn base5(1.0, <sym n.ahead>);
      goto L0(r40);
    };
    p5 = prom<V +>{
      newxreg3 = ld newxreg;
      newxreg4 = force? newxreg3;
      checkMissing(newxreg4);
      return newxreg4;
    };
    r45 = dyn cbind[intercept, ](p4, p5);
    check L118() else D27();
  L121():
    narma5 = force? narma4;
    checkMissing(narma5);
    r48 = `==`(narma5, 0.0);
    c12 = `as.logical`(r48);
    if c12 then L122() else L17();
  L148():
    coefs11 = force? coefs10;
    checkMissing(coefs11);
    c16 = `is.object`(coefs11);
    if c16 then L149() else L150(coefs11);
  L178():
    arma17 = force? arma16;
    checkMissing(arma17);
    c21 = `is.object`(arma17);
    if c21 then L179() else L180(arma17);
  D27():
    deopt 97 [r45];
  L17():
    sym7 = ldf drop;
    base7 = ldf drop in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L131() else L132();
  L19(r55):
    st xm = r55;
    goto L21();
  L24(dx21):
    st ma = dx21;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L160() else L161();
  L34(dx31):
    r93 = `>`(dx31, 0);
    c22 = `as.logical`(r93);
    if c22 then L182() else L35();
  L118():
    st newxreg = r45;
    ncxreg2 = ld ncxreg;
    check L119() else D28();
  L122():
    sym6 = ldf drop;
    base6 = ldf drop in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L123() else L124();
  L149():
    dr18 = tryDispatchBuiltin.1("[", coefs11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L151() else L150(dr18);
  L150(coefs13):
    arma8 = ld arma;
    check L152() else D43();
  L179():
    dr24 = tryDispatchBuiltin.1("[", arma17);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L181() else L180(dr24);
  L180(arma19):
    __7 = ldf `[` in base;
    r92 = dyn __7(arma19, 4);
    goto L34(r92);
  D28():
    deopt 99 [ncxreg2];
  D43():
    deopt 155 [coefs13, arma8];
  L18(r50):
    goto L19(r50);
  L27(r77):
    c20 = `as.logical`(r77);
    if c20 then L173() else L31();
  L35():
    goto L46();
  L46():
    KalmanForecast = ldf KalmanForecast;
    check L216() else D64();
  L119():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r46 = `+`(ncxreg3, 1);
    st ncxreg = r46;
    goto L16();
  L123():
    as_matrix = ldf `as.matrix`;
    check L125() else D30();
  L124():
    r49 = dyn base6(<lang `%*%`(as.matrix(newxreg), coefs)>);
    goto L18(r49);
  L131():
    as_matrix1 = ldf `as.matrix`;
    check L133() else D35();
  L132():
    r56 = dyn base7(<lang `%*%`(as.matrix(newxreg), `[`(coefs, `-`(`(`(`:`(1, narma)))))>);
    goto L19(r56);
  L151():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L24(dx20);
  L152():
    arma9 = force? arma8;
    checkMissing(arma9);
    c17 = `is.object`(arma9);
    if c17 then L153() else L154(coefs13, arma9);
  L160():
    sym9 = ldf Mod;
    base9 = ldf Mod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L162() else L163();
  L161():
    r76 = dyn base8(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>);
    goto L27(r76);
  L181():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L34(dx30);
  L182():
    coefs22 = ld coefs;
    check L183() else D53();
  D30():
    deopt 114 [];
  D35():
    deopt 127 [];
  D53():
    deopt 205 [coefs22];
  D64():
    deopt 255 [];
  L25(coefs17, dx23):
    arma12 = ld arma;
    check L156() else D44();
  L28(r79):
    r87 = `<`(r79, 1.0);
    any = ldf any in base;
    r88 = dyn any(r87);
    check L172() else D49();
  L31():
    goto L32(NULL);
  L32(r90):
    goto L33();
  L125():
    p6 = prom<V +>{
      newxreg5 = ld newxreg;
      newxreg6 = force? newxreg5;
      checkMissing(newxreg6);
      return newxreg6;
    };
    r52 = dyn as_matrix(p6);
    check L126() else D31();
  L133():
    p7 = prom<V +>{
      newxreg7 = ld newxreg;
      newxreg8 = force? newxreg7;
      checkMissing(newxreg8);
      return newxreg8;
    };
    r58 = dyn as_matrix1(p7);
    check L134() else D36();
  L153():
    dr20 = tryDispatchBuiltin.1("[", arma9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L155() else L154(coefs13, dr20);
  L154(coefs15, arma11):
    __4 = ldf `[` in base;
    r67 = dyn __4(arma11, 1);
    goto L25(coefs15, r67);
  L162():
    sym10 = ldf polyroot;
    base10 = ldf polyroot in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L164() else L165();
  L163():
    r78 = dyn base9(<lang polyroot(c(1.0, ma))>);
    goto L28(r78);
  L173():
    warning = ldf warning;
    check L174() else D50();
  L183():
    coefs23 = force? coefs22;
    checkMissing(coefs23);
    c23 = `is.object`(coefs23);
    if c23 then L184() else L185(coefs23);
  L216():
    p8 = prom<V +>{
      n_ahead1 = ld `n.ahead`;
      n_ahead2 = force? n_ahead1;
      checkMissing(n_ahead2);
      return n_ahead2;
    };
    p9 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c28 = `is.object`(object18);
      if c28 then L1() else L2(object18);
    L0(dx39):
      return dx39;
    L1():
      dr32 = tryDispatchBuiltin.1("$", object18);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(object20):
      r127 = `$`(object20, <sym model>);
      goto L0(r127);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    r129 = dyn KalmanForecast(p8, p9);
    check L217() else D65();
  D31():
    deopt 116 [r52];
  D36():
    deopt 129 [r58];
  D44():
    deopt 160 [coefs17, dx23, 1, arma12];
  D49():
    deopt 189 [r88];
  D50():
    deopt 191 [];
  D65():
    deopt 258 [r129];
  L29(r81):
    Mod = ldf Mod in base;
    r86 = dyn Mod(r81);
    check L171() else D48();
  L36(dx33):
    st ma = dx33;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L198() else L199();
  L126():
    coefs4 = ld coefs;
    check L127() else D32();
  L134():
    coefs6 = ld coefs;
    check L135() else D37();
  L155():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L25(coefs13, dx22);
  L156():
    arma13 = force? arma12;
    checkMissing(arma13);
    c18 = `is.object`(arma13);
    if c18 then L157() else L158(coefs17, dx23, 1, arma13);
  L164():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L166() else L167();
  L165():
    r80 = dyn base10(<lang c(1.0, ma)>);
    goto L29(r80);
  L172():
    goto L27(r88);
  L174():
    r89 = dyn warning("MA part of model is not invertible");
    check L175() else D51();
  L184():
    dr26 = tryDispatchBuiltin.1("[", coefs23);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L186() else L185(dr26);
  L185(coefs25):
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L187() else L188();
  L217():
    st z = r129;
    ts = ldf ts;
    check L218() else D66();
  D32():
    deopt 117 [coefs4];
  D37():
    deopt 130 [coefs6];
  D48():
    deopt 185 [r86];
  D51():
    deopt 193 [r89];
  D66():
    deopt 261 [];
  L26(coefs21, dx28, r71, dx29):
    r73 = `:`(r71, dx29);
    r74 = `+`(dx28, r73);
    __6 = ldf `[` in base;
    r75 = dyn __6(coefs21, r74);
    goto L24(r75);
  L30(r83):
    polyroot = ldf polyroot in base;
    r85 = dyn polyroot(r83);
    check L170() else D47();
  L37(coefs28, r95):
    arma24 = ld arma;
    check L194() else D56();
  L40(r111):
    c27 = `as.logical`(r111);
    if c27 then L211() else L44();
  L127():
    coefs5 = force? coefs4;
    checkMissing(coefs5);
    ___ = ldf `%*%` in base;
    r53 = dyn ___(r52, coefs5);
    check L128() else D33();
  L135():
    coefs7 = force? coefs6;
    checkMissing(coefs7);
    c13 = `is.object`(coefs7);
    if c13 then L136() else L137(coefs7);
  L157():
    dr22 = tryDispatchBuiltin.1("[", arma13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L159() else L158(coefs17, dx23, 1, dr22);
  L158(coefs19, dx25, r69, arma15):
    __5 = ldf `[` in base;
    r72 = dyn __5(arma15, 2);
    goto L26(coefs19, dx25, r69, r72);
  L166():
    ma = ld ma;
    check L168() else D45();
  L167():
    r82 = dyn base11(1.0, <sym ma>);
    goto L30(r82);
  L171():
    goto L28(r86);
  L175():
    goto L32(r89);
  L186():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L36(dx32);
  L187():
    arma20 = ld arma;
    check L189() else D54();
  L188():
    r94 = dyn base12(<lang `[`(arma, `:`(1, 3))>);
    goto L37(coefs25, r94);
  L198():
    sym14 = ldf Mod;
    base14 = ldf Mod in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L200() else L201();
  L199():
    r110 = dyn base13(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>);
    goto L40(r110);
  L218():
    p10 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c29 = `is.object`(z1);
      if c29 then L1() else L2(z1);
    L0(dx41):
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      r131 = `+`(dx41, xm1);
      return r131;
    L1():
      dr34 = tryDispatchBuiltin.1("[[", z1);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(z3):
      __11 = ldf `[[` in base;
      r130 = dyn __11(z3, 1);
      goto L0(r130);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx40);
    };
    p12 = prom<V +>{
      xtsp = ld xtsp;
      xtsp1 = force? xtsp;
      checkMissing(xtsp1);
      c30 = `is.object`(xtsp1);
      if c30 then L1() else L2(xtsp1);
    L0(dx43):
      deltat = ldf deltat;
      p11 = prom<V +>{
        rsd4 = ld rsd;
        rsd5 = force? rsd4;
        checkMissing(rsd5);
        return rsd5;
      };
      r135 = dyn deltat(p11);
      r136 = `+`(dx43, r135);
      return r136;
    L1():
      dr36 = tryDispatchBuiltin.1("[", xtsp1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(xtsp3):
      __12 = ldf `[` in base;
      r133 = dyn __12(xtsp3, 2);
      goto L0(r133);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx42);
    };
    p13 = prom<V +>{
      xtsp4 = ld xtsp;
      xtsp5 = force? xtsp4;
      checkMissing(xtsp5);
      c31 = `is.object`(xtsp5);
      if c31 then L1() else L2(xtsp5);
    L0(dx45):
      return dx45;
    L1():
      dr38 = tryDispatchBuiltin.1("[", xtsp5);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(xtsp7):
      __13 = ldf `[` in base;
      r138 = dyn __13(xtsp7, 3);
      goto L0(r138);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx44);
    };
    r140 = dyn ts[, start, frequency](p10, p12, p13);
    check L219() else D67();
  D33():
    deopt 120 [r53];
  D45():
    deopt 178 [ma];
  D47():
    deopt 183 [r85];
  D54():
    deopt 209 [coefs25, arma20];
  D56():
    deopt 216 [coefs28, r95, 1, arma24];
  D67():
    deopt 267 [r140];
  L20(dx17):
    ___1 = ldf `%*%` in base;
    r62 = dyn ___1(r58, dx17);
    check L140() else D39();
  L41(r113):
    r121 = `<`(r113, 1.0);
    any1 = ldf any in base;
    r122 = dyn any1(r121);
    check L210() else D61();
  L44():
    goto L45(NULL);
  L45(r124):
    goto L46();
  L128():
    drop = ldf drop in base;
    r54 = dyn drop(r53);
    check L129() else D34();
  L136():
    dr14 = tryDispatchBuiltin.1("[", coefs7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L138() else L137(dr14);
  L137(coefs9):
    narma6 = ld narma;
    check L139() else D38();
  L159():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L26(coefs17, dx23, 1, dx27);
  L168():
    ma1 = force? ma;
    checkMissing(ma1);
    c19 = ldf c in base;
    r84 = dyn c19(1.0, ma1);
    check L169() else D46();
  L170():
    goto L29(r85);
  L189():
    arma21 = force? arma20;
    checkMissing(arma21);
    c24 = `is.object`(arma21);
    if c24 then L190() else L191(coefs25, arma21);
  L194():
    arma25 = force? arma24;
    checkMissing(arma25);
    c25 = `is.object`(arma25);
    if c25 then L195() else L196(coefs28, r95, 1, arma25);
  L200():
    sym15 = ldf polyroot;
    base15 = ldf polyroot in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L202() else L203();
  L201():
    r112 = dyn base14(<lang polyroot(c(1.0, ma))>);
    goto L41(r112);
  L211():
    warning1 = ldf warning;
    check L212() else D62();
  L219():
    st pred = r140;
    se_fit1 = ld `se.fit`;
    check L220() else D68();
  D34():
    deopt 122 [r54];
  D38():
    deopt 133 [coefs9, 1, narma6];
  D39():
    deopt 139 [r62];
  D46():
    deopt 181 [r84];
  D61():
    deopt 245 [r122];
  D62():
    deopt 247 [];
  D68():
    deopt 269 [se_fit1];
  L38(coefs32, dx35):
    sum1 = ldf sum in base;
    r97 = dyn sum1(dx35);
    check L193() else D55();
  L39(coefs36, r104, r105, dx37):
    r107 = `:`(r105, dx37);
    r108 = `+`(r104, r107);
    __10 = ldf `[` in base;
    r109 = dyn __10(coefs36, r108);
    goto L36(r109);
  L42(r115):
    Mod1 = ldf Mod in base;
    r120 = dyn Mod1(r115);
    check L209() else D60();
  L129():
    goto L18(r54);
  L138():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L20(dx16);
  L139():
    narma7 = force? narma6;
    checkMissing(narma7);
    r59 = `:`(1, narma7);
    r60 = `-`(<missing>, r59);
    __2 = ldf `[` in base;
    r61 = dyn __2(coefs9, r60);
    goto L20(r61);
  L140():
    drop1 = ldf drop in base;
    r63 = dyn drop1(r62);
    check L141() else D40();
  L169():
    goto L30(r84);
  L190():
    dr28 = tryDispatchBuiltin.1("[", arma21);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L192() else L191(coefs25, dr28);
  L191(coefs30, arma23):
    __8 = ldf `[` in base;
    r96 = dyn __8(arma23, <int 1, 2, 3>);
    goto L38(coefs30, r96);
  L195():
    dr30 = tryDispatchBuiltin.1("[", arma25);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L197() else L196(coefs28, r95, 1, dr30);
  L196(coefs34, r100, r101, arma27):
    __9 = ldf `[` in base;
    r106 = dyn __9(arma27, 4);
    goto L39(coefs34, r100, r101, r106);
  L202():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L204() else L205();
  L203():
    r114 = dyn base15(<lang c(1.0, ma)>);
    goto L42(r114);
  L210():
    goto L40(r122);
  L212():
    r123 = dyn warning1("seasonal MA part of model is not invertible");
    check L213() else D63();
  L220():
    se_fit2 = force? se_fit1;
    checkMissing(se_fit2);
    c32 = `as.logical`(se_fit2);
    if c32 then L221() else L47();
  D40():
    deopt 141 [r63];
  D55():
    deopt 215 [coefs32, r97];
  D60():
    deopt 241 [r120];
  D63():
    deopt 249 [r123];
  L43(r117):
    polyroot1 = ldf polyroot in base;
    r119 = dyn polyroot1(r117);
    check L208() else D59();
  L47():
    pred2 = ld pred;
    check L230() else D74();
  L141():
    goto L19(r63);
  L192():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L38(coefs25, dx34);
  L193():
    goto L37(coefs32, r97);
  L197():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L39(coefs28, r95, 1, dx36);
  L204():
    ma2 = ld ma;
    check L206() else D57();
  L205():
    r116 = dyn base16(1.0, <sym ma>);
    goto L43(r116);
  L209():
    goto L41(r120);
  L213():
    goto L45(r123);
  L221():
    ts1 = ldf ts;
    check L222() else D69();
  D57():
    deopt 234 [ma2];
  D59():
    deopt 239 [r119];
  D69():
    deopt 272 [];
  D74():
    deopt 290 [pred2];
  L206():
    ma3 = force? ma2;
    checkMissing(ma3);
    c26 = ldf c in base;
    r118 = dyn c26(1.0, ma3);
    check L207() else D58();
  L208():
    goto L42(r119);
  L222():
    p14 = prom<V +>{
      sym17 = ldf sqrt;
      base17 = ldf sqrt in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L2() else L3();
    L0(r142):
      return r142;
    L2():
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c33 = `is.object`(z5);
      if c33 then L4() else L5(z5);
    L3():
      r141 = dyn base17(<lang `*`(`[[`(z, 2), `$`(object, sigma2))>);
      goto L0(r141);
    L1(dx47):
      object21 = ld object;
      object22 = force? object21;
      checkMissing(object22);
      c34 = `is.object`(object22);
      if c34 then L8() else L9(dx47, object22);
    L4():
      dr40 = tryDispatchBuiltin.1("[[", z5);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L6() else L5(dr40);
    L5(z7):
      __14 = ldf `[[` in base;
      r143 = dyn __14(z7, 2);
      goto L1(r143);
    L6():
      dx46 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx46);
    L7(dx52, dx53):
      r145 = `*`(dx52, dx53);
      r146 = sqrt(r145);
      goto L0(r146);
    L8():
      dr42 = tryDispatchBuiltin.1("$", object22);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L10() else L9(dx47, dr42);
    L9(dx49, object24):
      r144 = `$`(object24, <sym sigma2>);
      goto L7(dx49, r144);
    L10():
      dx51 = getTryDispatchBuiltinValue(dr42);
      goto L7(dx47, dx51);
    };
    p16 = prom<V +>{
      xtsp8 = ld xtsp;
      xtsp9 = force? xtsp8;
      checkMissing(xtsp9);
      c35 = `is.object`(xtsp9);
      if c35 then L1() else L2(xtsp9);
    L0(dx55):
      deltat1 = ldf deltat;
      p15 = prom<V +>{
        rsd6 = ld rsd;
        rsd7 = force? rsd6;
        checkMissing(rsd7);
        return rsd7;
      };
      r150 = dyn deltat1(p15);
      r151 = `+`(dx55, r150);
      return r151;
    L1():
      dr44 = tryDispatchBuiltin.1("[", xtsp9);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(xtsp11):
      __15 = ldf `[` in base;
      r148 = dyn __15(xtsp11, 2);
      goto L0(r148);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx54);
    };
    p17 = prom<V +>{
      xtsp12 = ld xtsp;
      xtsp13 = force? xtsp12;
      checkMissing(xtsp13);
      c36 = `is.object`(xtsp13);
      if c36 then L1() else L2(xtsp13);
    L0(dx57):
      return dx57;
    L1():
      dr46 = tryDispatchBuiltin.1("[", xtsp13);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(xtsp15):
      __16 = ldf `[` in base;
      r153 = dyn __16(xtsp15, 3);
      goto L0(r153);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx56);
    };
    r155 = dyn ts1[, start, frequency](p14, p16, p17);
    check L223() else D70();
  L230():
    pred3 = force? pred2;
    checkMissing(pred3);
    popenv;
    return pred3;
  D58():
    deopt 237 [r118];
  D70():
    deopt 278 [r155];
  L207():
    goto L43(r118);
  L223():
    st se = r155;
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L224() else L225();
  L48(r157):
    popenv;
    return r157;
  L224():
    pred = ld pred;
    check L226() else D71();
  L225():
    r156 = dyn base18[pred, se](<sym pred>, <sym se>);
    goto L48(r156);
  D71():
    deopt 282 [pred];
  L226():
    pred1 = force? pred;
    checkMissing(pred1);
    se = ld se;
    check L227() else D72();
  D72():
    deopt 285 [se];
  L227():
    se1 = force? se;
    checkMissing(se1);
    list = ldf list in base;
    r158 = dyn list(pred1, se1);
    check L228() else D73();
  D73():
    deopt 289 [r158];
  L228():
    goto L48(r158);
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