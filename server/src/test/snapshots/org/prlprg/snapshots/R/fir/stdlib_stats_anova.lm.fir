fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg LifeCycleSavings:*, reg LifeCycleSavings1:V, reg p1:p(V +), reg r4:V, reg anova:cls, reg fit:*, reg fit1:V, reg p2:p(V +), reg r6:V, reg lm1:cls, reg __1:cls, reg r7:V, reg p3:p(V +), reg LifeCycleSavings2:*, reg LifeCycleSavings3:V, reg p4:p(V +), reg r10:V, reg update:cls, reg fit2:*, reg fit3:V, reg p5:p(V +), reg __2:cls, reg r12:V, reg p6:p(V +), reg r14:V, reg update1:cls, reg fit4:*, reg fit5:V, reg p7:p(V +), reg __3:cls, reg r16:V, reg p8:p(V +), reg r18:V, reg update2:cls, reg fit6:*, reg fit7:V, reg p9:p(V +), reg __4:cls, reg r20:V, reg p10:p(V +), reg r22:V, reg update3:cls, reg fit8:*, reg fit9:V, reg p11:p(V +), reg __5:cls, reg r24:V, reg p12:p(V +), reg r26:V, reg anova1:cls, reg fit10:*, reg fit11:V, reg p13:p(V +), reg fit12:*, reg fit13:V, reg p14:p(V +), reg fit14:*, reg fit15:V, reg p15:p(V +), reg fit16:*, reg fit17:V, reg p16:p(V +), reg fit18:*, reg fit19:V, reg p17:p(V +), reg r32:V, reg anova2:cls, reg fit20:*, reg fit21:V, reg p18:p(V +), reg fit22:*, reg fit23:V, reg p19:p(V +), reg fit24:*, reg fit25:V, reg p20:p(V +), reg r36:V |
    mkenv;
    r = clos inner64320599;
    st `anova.lm` = r;
    lm = ldf lm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym sr>, <sym .>);
      return r1;
    };
    p1 = prom<V +>{
      LifeCycleSavings = ld LifeCycleSavings;
      LifeCycleSavings1 = force? LifeCycleSavings;
      checkMissing(LifeCycleSavings1);
      return LifeCycleSavings1;
    };
    r4 = dyn lm[, data](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    st fit = r4;
    anova = ldf anova;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p2 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r6 = dyn anova(p2);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    lm1 = ldf lm;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      __1 = ldf `~` in base;
      r7 = dyn __1(<sym sr>, 1.0);
      return r7;
    };
    p4 = prom<V +>{
      LifeCycleSavings2 = ld LifeCycleSavings;
      LifeCycleSavings3 = force? LifeCycleSavings2;
      checkMissing(LifeCycleSavings3);
      return LifeCycleSavings3;
    };
    r10 = dyn lm1[, data](p3, p4);
    check L5() else D5();
  D5():
    deopt 19 [r10];
  L5():
    st fit0 = r10;
    update = ldf update;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p5 = prom<V +>{
      fit2 = ld fit0;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    p6 = prom<V +>{
      __2 = ldf `~` in base;
      r12 = dyn __2(<sym .>, <lang `+`(., pop15)>);
      return r12;
    };
    r14 = dyn update(p5, p6);
    check L7() else D7();
  D7():
    deopt 25 [r14];
  L7():
    st fit1 = r14;
    update1 = ldf update;
    check L8() else D8();
  D8():
    deopt 28 [];
  L8():
    p7 = prom<V +>{
      fit4 = ld fit1;
      fit5 = force? fit4;
      checkMissing(fit5);
      return fit5;
    };
    p8 = prom<V +>{
      __3 = ldf `~` in base;
      r16 = dyn __3(<sym .>, <lang `+`(., pop75)>);
      return r16;
    };
    r18 = dyn update1(p7, p8);
    check L9() else D9();
  D9():
    deopt 31 [r18];
  L9():
    st fit2 = r18;
    update2 = ldf update;
    check L10() else D10();
  D10():
    deopt 34 [];
  L10():
    p9 = prom<V +>{
      fit6 = ld fit2;
      fit7 = force? fit6;
      checkMissing(fit7);
      return fit7;
    };
    p10 = prom<V +>{
      __4 = ldf `~` in base;
      r20 = dyn __4(<sym .>, <lang `+`(., dpi)>);
      return r20;
    };
    r22 = dyn update2(p9, p10);
    check L11() else D11();
  D11():
    deopt 37 [r22];
  L11():
    st fit3 = r22;
    update3 = ldf update;
    check L12() else D12();
  D12():
    deopt 40 [];
  L12():
    p11 = prom<V +>{
      fit8 = ld fit3;
      fit9 = force? fit8;
      checkMissing(fit9);
      return fit9;
    };
    p12 = prom<V +>{
      __5 = ldf `~` in base;
      r24 = dyn __5(<sym .>, <lang `+`(., ddpi)>);
      return r24;
    };
    r26 = dyn update3(p11, p12);
    check L13() else D13();
  D13():
    deopt 43 [r26];
  L13():
    st fit4 = r26;
    anova1 = ldf anova;
    check L14() else D14();
  D14():
    deopt 46 [];
  L14():
    p13 = prom<V +>{
      fit10 = ld fit0;
      fit11 = force? fit10;
      checkMissing(fit11);
      return fit11;
    };
    p14 = prom<V +>{
      fit12 = ld fit1;
      fit13 = force? fit12;
      checkMissing(fit13);
      return fit13;
    };
    p15 = prom<V +>{
      fit14 = ld fit2;
      fit15 = force? fit14;
      checkMissing(fit15);
      return fit15;
    };
    p16 = prom<V +>{
      fit16 = ld fit3;
      fit17 = force? fit16;
      checkMissing(fit17);
      return fit17;
    };
    p17 = prom<V +>{
      fit18 = ld fit4;
      fit19 = force? fit18;
      checkMissing(fit19);
      return fit19;
    };
    r32 = dyn anova1[, , , , , test](p13, p14, p15, p16, p17, "F");
    check L15() else D15();
  D15():
    deopt 54 [r32];
  L15():
    anova2 = ldf anova;
    check L16() else D16();
  D16():
    deopt 56 [];
  L16():
    p18 = prom<V +>{
      fit20 = ld fit4;
      fit21 = force? fit20;
      checkMissing(fit21);
      return fit21;
    };
    p19 = prom<V +>{
      fit22 = ld fit2;
      fit23 = force? fit22;
      checkMissing(fit23);
      return fit23;
    };
    p20 = prom<V +>{
      fit24 = ld fit0;
      fit25 = force? fit24;
      checkMissing(fit25);
      return fit25;
    };
    r36 = dyn anova2[, , , test](p18, p19, p20, "F");
    check L17() else D17();
  D17():
    deopt 62 [r36];
  L17():
    popenv;
    return r36;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg anova_lmlist:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg ddd2:dots?, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg object5:*, reg object6:V, reg inherits:cls, reg r14:V, reg r15:V, reg c1:L, reg warning:cls, reg r16:V, reg object7:*, reg object8:V, reg c2:L, reg object10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg w:*, reg w1:V, reg c3:V, reg c4:L, reg object11:*, reg object12:V, reg c5:L, reg object14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r23:V, reg r24:V, reg r25:V, reg w2:*, reg w3:V, reg object15:*, reg object16:V, reg c6:L, reg w5:V, reg object18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg w7:V, reg dx5:V, reg r26:V, reg r27:V, reg r28:V, reg sum:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg w8:*, reg w9:V, reg c7:V, reg c8:L, reg object19:*, reg object20:V, reg c9:L, reg object22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r34:V, reg r35:V, reg r36:V, reg w10:*, reg w11:V, reg object23:*, reg object24:V, reg c10:L, reg w13:V, reg object26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg w15:V, reg dx9:V, reg r37:V, reg r38:V, reg r39:V, reg sum1:cls, reg r40:V, reg ssr:*, reg ssr1:V, reg mss:*, reg mss1:V, reg r41:V, reg r42:V, reg c11:L, reg warning1:cls, reg r43:V, reg df_residual:cls, reg object27:*, reg object28:V, reg p2:p(V +), reg r46:V, reg object29:*, reg object30:V, reg c12:L, reg object32:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r47:V, reg p3:*, reg p4:V, reg r48:V, reg c13:L, reg p5:*, reg p6:V, reg r49:V, reg object33:*, reg object34:V, reg c14:L, reg object36:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r50:V, reg c15:L, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg p7:*, reg p8:V, reg __:cls, reg r51:V, reg object37:*, reg object38:V, reg c16:L, reg object40:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r52:V, reg c17:L, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg qr_lm:cls, reg object41:*, reg object42:V, reg p9:p(V +), reg r54:V, reg c18:L, reg dx25:V, reg r56:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg dx29:V, reg r57:V, reg __1:cls, reg r58:V, reg c19:L, reg dx31:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg p10:*, reg p11:V, reg __2:cls, reg r59:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg object43:*, reg object44:V, reg c20:L, reg object46:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg r64:V, reg attr:cls, reg r65:V, reg c21:cls, reg r66:V, reg nmeffects:*, reg nmeffects1:V, reg c22:L, reg nmeffects3:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg unique:cls, reg asgn:*, reg asgn1:V, reg p12:p(V +), reg r68:V, reg r69:V, reg __3:cls, reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg vapply:cls, reg split:cls, reg comp:*, reg comp1:V, reg r73:V, reg p13:p(V +), reg asgn2:*, reg asgn3:V, reg p14:p(V +), reg r76:V, reg p15:p(V +), reg sum2:*, reg sum3:V, reg p16:p(V +), reg r79:V, reg ssr2:*, reg ssr3:V, reg c23:cls, reg r80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg lengths:cls, reg split1:cls, reg asgn4:*, reg asgn5:V, reg p17:p(V +), reg asgn6:*, reg asgn7:V, reg p18:p(V +), reg r85:V, reg p19:p(V +), reg r87:V, reg dfr:*, reg dfr1:V, reg c24:cls, reg r88:V, reg ssr4:*, reg ssr5:V, reg dfr2:*, reg dfr3:V, reg character:cls, reg r90:V, reg ss:*, reg ss1:V, reg df:*, reg df1:V, reg r91:V, reg ms:*, reg ms1:V, reg ssr6:*, reg ssr7:V, reg dfr4:*, reg dfr5:V, reg r92:V, reg r93:V, reg pf:cls, reg f:*, reg f1:V, reg p20:p(V +), reg df2:*, reg df3:V, reg p21:p(V +), reg dfr6:*, reg dfr7:V, reg p22:p(V +), reg r97:V, reg data_frame:cls, reg df4:*, reg df5:V, reg p23:p(V +), reg ss2:*, reg ss3:V, reg p24:p(V +), reg ms2:*, reg ms3:V, reg p25:p(V +), reg f2:*, reg f3:V, reg p26:p(V +), reg P:*, reg P1:V, reg p27:p(V +), reg r103:V, reg l:*, reg c25:L, reg r105:L, reg l2:*, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r112:V, reg r113:L, reg l5:*, reg r114:L, reg r115:V, reg P2:*, reg P3:V, reg length1:cls, reg r116:V, reg ___:cls, reg r117:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r118:V, reg r119:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r120:V, reg r121:V, reg tlabels:*, reg tlabels1:V, reg c26:cls, reg r122:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r123:V, reg r124:V, reg c27:cls, reg r125:V, reg list1:cls, reg r126:V, reg l6:*, reg dimnames__:cls, reg r127:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r128:V, reg r129:V, reg object47:*, reg object48:V, reg c28:L, reg object50:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg r130:V, reg attr1:cls, reg r131:V, reg c29:L, reg table:*, reg table1:V, reg c30:L, reg dr32:V, reg dc16:L, reg dx42:V, reg dx43:V, reg __4:cls, reg r132:V, reg structure:cls, reg table4:*, reg table5:V, reg p28:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r134:V, reg r135:V, reg paste:cls, reg deparse:cls, reg formula:cls, reg object51:*, reg object52:V, reg p29:p(V +), reg r137:V, reg c31:L, reg r139:V, reg dr34:V, reg dc17:L, reg dx45:V, reg dx46:V, reg __5:cls, reg r140:V, reg p30:p(V +), reg r142:V, reg p31:p(V +), reg r144:V, reg c32:cls, reg r145:V, reg p32:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r147:V, reg r148:V, reg c33:cls, reg r149:V, reg p33:p(V +), reg r151:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L0(r1):
    r7 = `>`(r1, 1);
    c = `as.logical`(r7);
    if c then L43() else L2();
  L36():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L37():
    r = dyn base(<lang list(object, ...)>);
    goto L0(r);
  L1(r3):
    length = ldf length in base;
    r6 = dyn length(r3);
    check L42() else D2();
  L2():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L38():
    list = ldf list;
    check L40() else D0();
  L39():
    r2 = dyn base1(<sym object>, <sym ...>);
    goto L1(r2);
  L43():
    anova_lmlist = ldf `anova.lmlist`;
    check L44() else D3();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [r6];
  D3():
    deopt 13 [];
  L4(r13):
    r15 = `!`(r13);
    c1 = `as.logical`(r15);
    if c1 then L52() else L5();
  L40():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    ddd1 = ld `...`;
    r5 = dyn list[, `...`](p, ddd1);
    check L41() else D1();
  L42():
    goto L0(r6);
  L44():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    ddd2 = ld `...`;
    r9 = dyn anova_lmlist[, `...`](p1, ddd2);
    check L45() else D4();
  L48():
    object5 = ld object;
    check L50() else D5();
  L49():
    r12 = dyn base2(<sym object>, "lm");
    goto L4(r12);
  D1():
    deopt 7 [r5];
  D4():
    deopt 16 [r9];
  D5():
    deopt 22 [object5];
  L5():
    goto L6();
  L6():
    object7 = ld object;
    check L56() else D9();
  L41():
    goto L1(r5);
  L45():
    popenv;
    return r9;
  L50():
    object6 = force? object5;
    checkMissing(object6);
    inherits = ldf inherits in base;
    r14 = dyn inherits(object6, "lm", FALSE);
    check L51() else D6();
  L52():
    warning = ldf warning;
    check L53() else D7();
  D6():
    deopt 27 [r14];
  D7():
    deopt 30 [];
  D9():
    deopt 35 [object7];
  L51():
    goto L4(r14);
  L53():
    r16 = dyn warning("calling anova.lm(<fake-lm-object>) ...");
    check L54() else D8();
  L56():
    object8 = force? object7;
    checkMissing(object8);
    c2 = `is.object`(object8);
    if c2 then L58() else L59(object8);
  D8():
    deopt 32 [r16];
  L54():
    goto L6();
  L57(dx1):
    st w = dx1;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L58():
    dr = tryDispatchBuiltin.1("$", object8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(object10):
    r18 = `$`(object10, <sym weights>);
    goto L57(r18);
  L7(r20):
    st ssr = r20;
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L57(dx);
  L61():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L62():
    r19 = dyn base3(<lang if(is.null(w), `^`(`$`(object, residuals), 2.0), `*`(w, `^`(`$`(object, residuals), 2.0)))>);
    goto L7(r19);
  L8(r22):
    c4 = `as.logical`(r22);
    if c4 then L66() else L9();
  L11(r31):
    st mss = r31;
    ssr = ld ssr;
    check L99() else D20();
  L63():
    w = ld w;
    check L65() else D10();
  L64():
    r21 = dyn base4(<sym w>);
    goto L8(r21);
  L80():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L81():
    r30 = dyn base5(<lang if(is.null(w), `^`(`$`(object, fitted.values), 2.0), `*`(w, `^`(`$`(object, fitted.values), 2.0)))>);
    goto L11(r30);
  D10():
    deopt 42 [w];
  D20():
    deopt 81 [ssr];
  L9():
    w2 = ld w;
    check L73() else D12();
  L10(r25):
    sum = ldf sum in base;
    r29 = dyn sum(r25);
    check L79() else D14();
  L12(r33):
    c8 = `as.logical`(r33);
    if c8 then L85() else L13();
  L65():
    w1 = force? w;
    checkMissing(w1);
    c3 = `==`(w1, NULL);
    goto L8(c3);
  L66():
    object11 = ld object;
    check L67() else D11();
  L82():
    w8 = ld w;
    check L84() else D15();
  L83():
    r32 = dyn base6(<sym w>);
    goto L12(r32);
  L99():
    ssr1 = force? ssr;
    checkMissing(ssr1);
    mss = ld mss;
    check L100() else D21();
  D11():
    deopt 45 [object11];
  D12():
    deopt 50 [w2];
  D14():
    deopt 58 [r29];
  D15():
    deopt 63 [w8];
  D21():
    deopt 83 [ssr1, 1.0E-10, mss];
  L13():
    w10 = ld w;
    check L92() else D17();
  L14(r36):
    sum1 = ldf sum in base;
    r40 = dyn sum1(r36);
    check L98() else D19();
  L67():
    object12 = force? object11;
    checkMissing(object12);
    c5 = `is.object`(object12);
    if c5 then L69() else L70(object12);
  L73():
    w3 = force? w2;
    checkMissing(w3);
    object15 = ld object;
    check L74() else D13();
  L79():
    goto L7(r29);
  L84():
    w9 = force? w8;
    checkMissing(w9);
    c7 = `==`(w9, NULL);
    goto L12(c7);
  L85():
    object19 = ld object;
    check L86() else D16();
  L100():
    mss1 = force? mss;
    checkMissing(mss1);
    r41 = `*`(1.0E-10, mss1);
    r42 = `<`(ssr1, r41);
    c11 = `as.logical`(r42);
    if c11 then L101() else L15();
  D13():
    deopt 51 [w3, object15];
  D16():
    deopt 66 [object19];
  D17():
    deopt 71 [w10];
  D19():
    deopt 79 [r40];
  L15():
    goto L16();
  L16():
    df_residual = ldf `df.residual`;
    check L105() else D24();
  L68(dx3):
    r24 = `^`(dx3, 2.0);
    goto L10(r24);
  L69():
    dr2 = tryDispatchBuiltin.1("$", object12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(dr2);
  L70(object14):
    r23 = `$`(object14, <sym residuals>);
    goto L68(r23);
  L74():
    object16 = force? object15;
    checkMissing(object16);
    c6 = `is.object`(object16);
    if c6 then L76() else L77(w3, object16);
  L86():
    object20 = force? object19;
    checkMissing(object20);
    c9 = `is.object`(object20);
    if c9 then L88() else L89(object20);
  L92():
    w11 = force? w10;
    checkMissing(w11);
    object23 = ld object;
    check L93() else D18();
  L98():
    goto L11(r40);
  L101():
    warning1 = ldf warning;
    check L102() else D22();
  D18():
    deopt 72 [w11, object23];
  D22():
    deopt 88 [];
  D24():
    deopt 94 [];
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L68(dx2);
  L75(w7, dx5):
    r27 = `^`(dx5, 2.0);
    r28 = `*`(w7, r27);
    goto L10(r28);
  L76():
    dr4 = tryDispatchBuiltin.1("$", object16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L78() else L77(w3, dr4);
  L77(w5, object18):
    r26 = `$`(object18, <sym residuals>);
    goto L75(w5, r26);
  L87(dx7):
    r35 = `^`(dx7, 2.0);
    goto L14(r35);
  L88():
    dr6 = tryDispatchBuiltin.1("$", object20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L90() else L89(dr6);
  L89(object22):
    r34 = `$`(object22, <sym fitted.values>);
    goto L87(r34);
  L93():
    object24 = force? object23;
    checkMissing(object24);
    c10 = `is.object`(object24);
    if c10 then L95() else L96(w11, object24);
  L102():
    r43 = dyn warning1("ANOVA F-tests on an essentially perfect fit are unreliable");
    check L103() else D23();
  L105():
    p2 = prom<V +>{
      object27 = ld object;
      object28 = force? object27;
      checkMissing(object28);
      return object28;
    };
    r46 = dyn df_residual(p2);
    check L106() else D25();
  D23():
    deopt 90 [r43];
  D25():
    deopt 96 [r46];
  L78():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L75(w3, dx4);
  L90():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L87(dx6);
  L94(w15, dx9):
    r38 = `^`(dx9, 2.0);
    r39 = `*`(w15, r38);
    goto L14(r39);
  L95():
    dr8 = tryDispatchBuiltin.1("$", object24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L97() else L96(w11, dr8);
  L96(w13, object26):
    r37 = `$`(object26, <sym fitted.values>);
    goto L94(w13, r37);
  L103():
    goto L16();
  L106():
    st dfr = r46;
    object29 = ld object;
    check L107() else D26();
  D26():
    deopt 98 [object29];
  L97():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L94(w11, dx8);
  L107():
    object30 = force? object29;
    checkMissing(object30);
    c12 = `is.object`(object30);
    if c12 then L109() else L110(object30);
  L108(dx11):
    st p = dx11;
    p3 = ld p;
    check L112() else D27();
  L109():
    dr10 = tryDispatchBuiltin.1("$", object30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L111() else L110(dr10);
  L110(object32):
    r47 = `$`(object32, <sym rank>);
    goto L108(r47);
  D27():
    deopt 102 [p3];
  L111():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L108(dx10);
  L112():
    p4 = force? p3;
    checkMissing(p4);
    r48 = `>`(p4, 0);
    c13 = `as.logical`(r48);
    if c13 then L113() else L17();
  L17():
    ssr4 = ld ssr;
    check L172() else D49();
  L26():
    ss = ld ss;
    check L176() else D53();
  L113():
    p5 = ld p;
    check L114() else D28();
  D28():
    deopt 107 [1, p5];
  D49():
    deopt 179 [ssr4];
  D53():
    deopt 189 [ss];
  L114():
    p6 = force? p5;
    checkMissing(p6);
    r49 = `:`(1, p6);
    st p1 = r49;
    object33 = ld object;
    check L115() else D29();
  L172():
    ssr5 = force? ssr4;
    checkMissing(ssr5);
    st ss = ssr5;
    dfr2 = ld dfr;
    check L173() else D50();
  L176():
    ss1 = force? ss;
    checkMissing(ss1);
    df = ld df;
    check L177() else D54();
  D29():
    deopt 111 [object33];
  D50():
    deopt 182 [dfr2];
  D54():
    deopt 190 [ss1, df];
  L115():
    object34 = force? object33;
    checkMissing(object34);
    c14 = `is.object`(object34);
    if c14 then L117() else L118(object34);
  L173():
    dfr3 = force? dfr2;
    checkMissing(dfr3);
    st df = dfr3;
    character = ldf character;
    check L174() else D51();
  L177():
    df1 = force? df;
    checkMissing(df1);
    r91 = `/`(ss1, df1);
    st ms = r91;
    ms = ld ms;
    check L178() else D55();
  D51():
    deopt 186 [];
  D55():
    deopt 194 [ms];
  L116(dx13):
    c15 = `is.object`(dx13);
    if c15 then L120() else L121(dx13);
  L117():
    dr12 = tryDispatchBuiltin.1("$", object34);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L119() else L118(dr12);
  L118(object36):
    r50 = `$`(object36, <sym effects>);
    goto L116(r50);
  L174():
    r90 = dyn character();
    check L175() else D52();
  L178():
    ms1 = force? ms;
    checkMissing(ms1);
    ssr6 = ld ssr;
    check L179() else D56();
  D52():
    deopt 187 [r90];
  D56():
    deopt 195 [ms1, ssr6];
  L18(dx17):
    st comp = dx17;
    object37 = ld object;
    check L124() else D31();
  L119():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L116(dx12);
  L120():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L122() else L121(dr14);
  L121(dx15):
    p7 = ld p1;
    check L123() else D30();
  L175():
    st tlabels = r90;
    goto L26();
  L179():
    ssr7 = force? ssr6;
    checkMissing(ssr7);
    dfr4 = ld dfr;
    check L180() else D57();
  D30():
    deopt 114 [dx15, p7];
  D31():
    deopt 118 [object37];
  D57():
    deopt 196 [ms1, ssr7, dfr4];
  L122():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx16);
  L123():
    p8 = force? p7;
    __ = ldf `[` in base;
    r51 = dyn __(dx15, p8);
    goto L18(r51);
  L124():
    object38 = force? object37;
    checkMissing(object38);
    c16 = `is.object`(object38);
    if c16 then L126() else L127(object38);
  L180():
    dfr5 = force? dfr4;
    checkMissing(dfr5);
    r92 = `/`(ssr7, dfr5);
    r93 = `/`(ms1, r92);
    st f = r93;
    pf = ldf pf;
    check L181() else D58();
  D58():
    deopt 202 [];
  L125(dx19):
    c17 = `is.object`(dx19);
    if c17 then L129() else L130(dx19);
  L126():
    dr16 = tryDispatchBuiltin.1("$", object38);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L128() else L127(dr16);
  L127(object40):
    r52 = `$`(object40, <sym assign>);
    goto L125(r52);
  L181():
    p20 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p21 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    p22 = prom<V +>{
      dfr6 = ld dfr;
      dfr7 = force? dfr6;
      checkMissing(dfr7);
      return dfr7;
    };
    r97 = dyn pf[, , , `lower.tail`](p20, p21, p22, FALSE);
    check L182() else D59();
  D59():
    deopt 208 [r97];
  L19(dx23):
    c19 = `is.object`(dx23);
    if c19 then L138() else L139(dx23);
  L128():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L125(dx18);
  L129():
    dr18 = tryDispatchBuiltin.1("[", dx19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L131() else L130(dr18);
  L130(dx21):
    qr_lm = ldf `qr.lm`;
    check L132() else D32();
  L182():
    st P = r97;
    data_frame = ldf `data.frame`;
    check L183() else D60();
  D32():
    deopt 122 [dx21];
  D60():
    deopt 211 [];
  L20(dx33):
    st asgn = dx33;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L142() else L143();
  L131():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L19(dx22);
  L132():
    p9 = prom<V +>{
      object41 = ld object;
      object42 = force? object41;
      checkMissing(object42);
      return object42;
    };
    r54 = dyn qr_lm(p9);
    check L133() else D33();
  L138():
    dr22 = tryDispatchBuiltin.1("[", dx23);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L140() else L139(dr22);
  L139(dx31):
    p10 = ld p1;
    check L141() else D34();
  L183():
    p23 = prom<V +>{
      df4 = ld df;
      df5 = force? df4;
      checkMissing(df5);
      return df5;
    };
    p24 = prom<V +>{
      ss2 = ld ss;
      ss3 = force? ss2;
      checkMissing(ss3);
      return ss3;
    };
    p25 = prom<V +>{
      ms2 = ld ms;
      ms3 = force? ms2;
      checkMissing(ms3);
      return ms3;
    };
    p26 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p27 = prom<V +>{
      P = ld P;
      P1 = force? P;
      checkMissing(P1);
      return P1;
    };
    r103 = dyn data_frame(p23, p24, p25, p26, p27);
    check L184() else D61();
  D33():
    deopt 124 [dx21, r54];
  D34():
    deopt 127 [dx31, p10];
  D61():
    deopt 217 [r103];
  L21(r61):
    st nmeffects = r61;
    nmeffects = ld nmeffects;
    check L153() else D38();
  L133():
    c18 = `is.object`(r54);
    if c18 then L135() else L136(dx21, r54);
  L140():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L20(dx32);
  L141():
    p11 = force? p10;
    __2 = ldf `[` in base;
    r59 = dyn __2(dx31, p11);
    goto L20(r59);
  L142():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L144() else L145();
  L143():
    r60 = dyn base7("(Intercept)", <lang attr(`$`(object, terms), "term.labels")>);
    goto L21(r60);
  L184():
    st table = r103;
    l = ld table;
    c25 = `is.object`(l);
    if c25 then L185() else L186(NA_LGL, l);
  D38():
    deopt 145 [nmeffects];
  L22(r63):
    c21 = ldf c in base;
    r66 = dyn c21("(Intercept)", r63);
    check L152() else D37();
  L27(dx39):
    st table = dx39;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L192() else L193();
  L134(dx28, dx29):
    __1 = ldf `[` in base;
    r58 = dyn __1(dx28, dx29);
    goto L19(r58);
  L135():
    dr20 = tryDispatchBuiltin.1("$", r54);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L137() else L136(dx21, dr20);
  L136(dx25, r56):
    r57 = `$`(r56, <sym pivot>);
    goto L134(dx25, r57);
  L144():
    object43 = ld object;
    check L146() else D35();
  L145():
    r62 = dyn base8(<lang `$`(object, terms)>, "term.labels");
    goto L22(r62);
  L153():
    nmeffects1 = force? nmeffects;
    checkMissing(nmeffects1);
    c22 = `is.object`(nmeffects1);
    if c22 then L154() else L155(nmeffects1);
  L185():
    dr28 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L187() else L186(NA_LGL, dr28);
  L186(r105, l2):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L188() else L189();
  D35():
    deopt 136 [object43];
  D37():
    deopt 143 [r66];
  L23(dx37):
    st tlabels = dx37;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L159() else L160();
  L28(r113, l5, r114, r115):
    ___ = ldf `[<-` in base;
    r117 = dyn ___(l5, r114, r115, <int 4, 5>);
    goto L27(r117);
  L29(r119):
    l6 = ld table;
    dimnames__ = ldf `dimnames<-`;
    check L202() else D68();
  L137():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L134(dx21, dx27);
  L146():
    object44 = force? object43;
    checkMissing(object44);
    c20 = `is.object`(object44);
    if c20 then L148() else L149(object44);
  L152():
    goto L21(r66);
  L154():
    dr26 = tryDispatchBuiltin.1("[", nmeffects1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L156() else L155(dr26);
  L155(nmeffects3):
    unique = ldf unique;
    check L157() else D39();
  L187():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L27(dx38);
  L188():
    P2 = ld P;
    check L190() else D62();
  L189():
    r112 = dyn base11(<sym P>);
    goto L28(r105, l2, NA_LGL, r112);
  L192():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L194() else L195();
  L193():
    r118 = dyn base12(<lang c(tlabels, "Residuals")>, <lang c("Df", "Sum Sq", "Mean Sq", "F value", "Pr(>F)")>);
    goto L29(r118);
  D39():
    deopt 149 [nmeffects3, 1.0];
  D62():
    deopt 224 [r105, l2, NA_LGL, P2];
  D68():
    deopt 252 [r119, l6, r119];
  L24(r72):
    st ss = r72;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L165() else L166();
  L30(r121):
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L198() else L199();
  L147(dx35):
    attr = ldf attr in base;
    r65 = dyn attr(dx35, "term.labels");
    check L151() else D36();
  L148():
    dr24 = tryDispatchBuiltin.1("$", object44);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L150() else L149(dr24);
  L149(object46):
    r64 = `$`(object46, <sym terms>);
    goto L147(r64);
  L156():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L23(dx36);
  L157():
    p12 = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      return asgn1;
    };
    r68 = dyn unique(p12);
    check L158() else D40();
  L159():
    vapply = ldf vapply;
    check L161() else D41();
  L160():
    r71 = dyn base9(<lang vapply(split(`^`(comp, 2.0), asgn), sum, 1.0)>, <sym ssr>);
    goto L24(r71);
  L190():
    P3 = force? P2;
    checkMissing(P3);
    length1 = ldf length in base;
    r116 = dyn length1(P3);
    check L191() else D63();
  L194():
    tlabels = ld tlabels;
    check L196() else D64();
  L195():
    r120 = dyn base13(<sym tlabels>, "Residuals");
    goto L30(r120);
  L202():
    r127 = dyn dimnames__(l6, NULL, r119);
    check L203() else D69();
  D36():
    deopt 141 [r65];
  D40():
    deopt 151 [nmeffects3, 1.0, r68];
  D41():
    deopt 158 [];
  D63():
    deopt 227 [r105, l2, NA_LGL, r116];
  D64():
    deopt 235 [tlabels];
  D69():
    deopt 254 [r119, r127];
  L25(r82):
    st df = r82;
    goto L26();
  L31(r124):
    list1 = ldf list in base;
    r126 = dyn list1(r121, r124);
    check L201() else D67();
  L150():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L147(dx34);
  L151():
    goto L22(r65);
  L158():
    r69 = `+`(1.0, r68);
    __3 = ldf `[` in base;
    r70 = dyn __3(nmeffects3, r69);
    goto L23(r70);
  L161():
    p15 = prom<V +>{
      split = ldf split;
      p13 = prom<V +>{
        comp = ld comp;
        comp1 = force? comp;
        checkMissing(comp1);
        r73 = `^`(comp1, 2.0);
        return r73;
      };
      p14 = prom<V +>{
        asgn2 = ld asgn;
        asgn3 = force? asgn2;
        checkMissing(asgn3);
        return asgn3;
      };
      r76 = dyn split(p13, p14);
      return r76;
    };
    p16 = prom<V +>{
      sum2 = ld sum;
      sum3 = force? sum2;
      checkMissing(sum3);
      return sum3;
    };
    r79 = dyn vapply(p15, p16, 1.0);
    check L162() else D42();
  L165():
    lengths = ldf lengths;
    check L167() else D45();
  L166():
    r81 = dyn base10(<lang lengths(split(asgn, asgn))>, <sym dfr>);
    goto L25(r81);
  L191():
    goto L28(r105, l2, NA_LGL, r116);
  L196():
    tlabels1 = force? tlabels;
    checkMissing(tlabels1);
    c26 = ldf c in base;
    r122 = dyn c26(tlabels1, "Residuals");
    check L197() else D65();
  L198():
    c27 = ldf c in base;
    r125 = dyn c27("Df", "Sum Sq", "Mean Sq", "F value", "Pr(>F)");
    check L200() else D66();
  L199():
    r123 = dyn base14("Df", "Sum Sq", "Mean Sq", "F value", "Pr(>F)");
    goto L31(r123);
  L203():
    st table = r127;
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L204() else L205();
  D42():
    deopt 162 [r79];
  D45():
    deopt 171 [];
  D65():
    deopt 239 [r122];
  D66():
    deopt 248 [r125];
  D67():
    deopt 250 [r126];
  L32(r129):
    c29 = `as.logical`(r129);
    if c29 then L212() else L33();
  L162():
    ssr2 = ld ssr;
    check L163() else D43();
  L167():
    p19 = prom<V +>{
      split1 = ldf split;
      p17 = prom<V +>{
        asgn4 = ld asgn;
        asgn5 = force? asgn4;
        checkMissing(asgn5);
        return asgn5;
      };
      p18 = prom<V +>{
        asgn6 = ld asgn;
        asgn7 = force? asgn6;
        checkMissing(asgn7);
        return asgn7;
      };
      r85 = dyn split1(p17, p18);
      return r85;
    };
    r87 = dyn lengths(p19);
    check L168() else D46();
  L197():
    goto L30(r122);
  L200():
    goto L31(r125);
  L201():
    goto L29(r126);
  L204():
    object47 = ld object;
    check L206() else D70();
  L205():
    r128 = dyn base15(<lang `$`(object, terms)>, "intercept");
    goto L32(r128);
  D43():
    deopt 163 [ssr2];
  D46():
    deopt 173 [r87];
  D70():
    deopt 258 [object47];
  L33():
    goto L35();
  L35():
    structure = ldf structure;
    check L218() else D73();
  L163():
    ssr3 = force? ssr2;
    checkMissing(ssr3);
    c23 = ldf c in base;
    r80 = dyn c23(r79, ssr3);
    check L164() else D44();
  L168():
    dfr = ld dfr;
    check L169() else D47();
  L206():
    object48 = force? object47;
    checkMissing(object48);
    c28 = `is.object`(object48);
    if c28 then L208() else L209(object48);
  L212():
    table = ld table;
    check L213() else D72();
  D44():
    deopt 166 [r80];
  D47():
    deopt 174 [dfr];
  D72():
    deopt 264 [table];
  D73():
    deopt 275 [];
  L164():
    goto L24(r80);
  L169():
    dfr1 = force? dfr;
    checkMissing(dfr1);
    c24 = ldf c in base;
    r88 = dyn c24(r87, dfr1);
    check L170() else D48();
  L207(dx41):
    attr1 = ldf attr in base;
    r131 = dyn attr1(dx41, "intercept");
    check L211() else D71();
  L208():
    dr30 = tryDispatchBuiltin.1("$", object48);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L210() else L209(dr30);
  L209(object50):
    r130 = `$`(object50, <sym terms>);
    goto L207(r130);
  L213():
    table1 = force? table;
    checkMissing(table1);
    c30 = `is.object`(table1);
    if c30 then L214() else L215();
  L218():
    p28 = prom<V +>{
      table4 = ld table;
      table5 = force? table4;
      checkMissing(table5);
      return table5;
    };
    p32 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r135):
      return r135;
    L1():
      paste = ldf paste;
      p31 = prom<V +>{
        deparse = ldf deparse;
        p30 = prom<V +>{
          formula = ldf formula;
          p29 = prom<V +>{
            object51 = ld object;
            object52 = force? object51;
            checkMissing(object52);
            return object52;
          };
          r137 = dyn formula(p29);
          c31 = `is.object`(r137);
          if c31 then L1() else L2(r137);
        L0(dx46):
          return dx46;
        L1():
          dr34 = tryDispatchBuiltin.1("[[", r137);
          dc17 = getTryDispatchBuiltinDispatched(dr34);
          if dc17 then L3() else L2(dr34);
        L2(r139):
          __5 = ldf `[[` in base;
          r140 = dyn __5(r139, 2);
          goto L0(r140);
        L3():
          dx45 = getTryDispatchBuiltinValue(dr34);
          goto L0(dx45);
        };
        r142 = dyn deparse(p30);
        return r142;
      };
      r144 = dyn paste("Response:", p31);
      c32 = ldf c in base;
      r145 = dyn c32("Analysis of Variance Table\n", r144);
      goto L0(r145);
    L2():
      r134 = dyn base16("Analysis of Variance Table\n", <lang paste("Response:", deparse(`[[`(formula(object), 2)))>);
      goto L0(r134);
    };
    p33 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r148):
      return r148;
    L1():
      c33 = ldf c in base;
      r149 = dyn c33("anova", "data.frame");
      goto L0(r149);
    L2():
      r147 = dyn base17("anova", "data.frame");
      goto L0(r147);
    };
    r151 = dyn structure[, heading, class](p28, p32, p33);
    check L219() else D74();
  D48():
    deopt 177 [r88];
  D71():
    deopt 263 [r131];
  D74():
    deopt 281 [r151];
  L34(dx43):
    st table = dx43;
    goto L35();
  L170():
    goto L25(r88);
  L210():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L207(dx40);
  L211():
    goto L32(r131);
  L214():
    dr32 = tryDispatchBuiltin.1("[", table1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L216() else L215();
  L215():
    __4 = ldf `[` in base;
    r132 = dyn __4(table1, -1.0, <missing>);
    goto L34(r132);
  L219():
    popenv;
    return r151;
  L216():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L34(dx42);
  }
}