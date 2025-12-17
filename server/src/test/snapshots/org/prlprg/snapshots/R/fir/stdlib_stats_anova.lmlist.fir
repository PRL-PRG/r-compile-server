fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4272329527;
    st `anova.lmlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4272329527(object, `...`, scale, test) {
  (reg object:*, reg ddd:dots, reg scale:*, reg test:*) -+> V { var object:*, var `...`:dots?, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg lapply:cls, reg objects:*, reg objects1:V, reg p1:p(V +), reg r7:cls, reg p2:p(V +), reg r9:V, reg as_character:cls, reg r10:V, reg responses:*, reg responses1:V, reg responses2:*, reg responses3:V, reg c:L, reg responses6:V, reg responses7:V, reg dr:V, reg dc:L, reg dx:V, reg responses9:V, reg dx1:V, reg __:cls, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sameresp:*, reg sameresp1:V, reg all:cls, reg r15:V, reg r16:V, reg c1:L, reg objects2:*, reg objects3:V, reg c2:L, reg objects5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sameresp2:*, reg sameresp3:V, reg __1:cls, reg r17:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg deparse:cls, reg responses10:*, reg responses11:V, reg c3:L, reg responses13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sameresp4:*, reg sameresp5:V, reg r18:V, reg __2:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg sapply:cls, reg objects6:*, reg objects7:V, reg p7:p(V +), reg r30:cls, reg p8:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg ns:*, reg ns1:V, reg ns2:*, reg ns3:V, reg c4:L, reg ns6:V, reg ns7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg ns9:V, reg dx7:V, reg __3:cls, reg r35:V, reg r36:V, reg any:cls, reg r37:V, reg c5:L, reg stop:cls, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg objects8:*, reg objects9:V, reg length:cls, reg r42:V, reg nmodels:*, reg nmodels1:V, reg r43:V, reg c6:L, reg anova_lm:cls, reg object3:*, reg object4:V, reg p9:p(V +), reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg lapply1:cls, reg objects10:*, reg objects11:V, reg p10:p(V +), reg df_residual:*, reg df_residual1:V, reg p11:p(V +), reg r52:V, reg as_numeric:cls, reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg lapply2:cls, reg objects12:*, reg objects13:V, reg p12:p(V +), reg deviance:*, reg deviance1:V, reg p13:p(V +), reg r58:V, reg as_numeric1:cls, reg r59:V, reg data_frame:cls, reg resdf:*, reg resdf1:V, reg p14:p(V +), reg resdev:*, reg resdev1:V, reg p15:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg diff:cls, reg resdf2:*, reg resdf3:V, reg p16:p(V +), reg r65:V, reg r66:V, reg c7:cls, reg r67:V, reg p17:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg diff1:cls, reg resdev2:*, reg resdev3:V, reg p18:p(V +), reg r72:V, reg r73:V, reg c8:cls, reg r74:V, reg p19:p(V +), reg r76:V, reg lapply3:cls, reg objects14:*, reg objects15:V, reg p20:p(V +), reg r78:cls, reg p21:p(V +), reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r81:V, reg r82:V, reg nmodels2:*, reg nmodels3:V, reg r83:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r84:V, reg r85:V, reg c9:cls, reg r86:V, reg list1:cls, reg r87:V, reg l:*, reg dimnames__:cls, reg r88:V, reg paste0:cls, reg format:cls, reg nmodels4:*, reg nmodels5:V, reg r89:V, reg p22:p(V +), reg r91:V, reg p23:p(V +), reg variables:*, reg variables1:V, reg p24:p(V +), reg r94:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r95:V, reg r96:V, reg test1:*, reg test2:V, reg c10:V, reg r97:V, reg c11:L, reg order:cls, reg resdf4:*, reg resdf5:V, reg p25:p(V +), reg r99:V, reg c12:L, reg r101:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r102:V, reg scale1:*, reg scale2:V, reg r103:V, reg c13:L, reg scale3:*, reg scale4:V, reg scale5:V, reg resdev4:*, reg resdev5:V, reg c14:L, reg resdev7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg bigmodel:*, reg bigmodel1:V, reg __5:cls, reg r104:V, reg resdf6:*, reg resdf7:V, reg c15:L, reg dx13:V, reg resdf9:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg bigmodel2:*, reg bigmodel3:V, reg __6:cls, reg r105:V, reg r106:V, reg stat_anova:cls, reg table:*, reg table1:V, reg p26:p(V +), reg test3:*, reg test4:V, reg p27:p(V +), reg scale6:*, reg scale7:V, reg p28:p(V +), reg resdf10:*, reg resdf11:V, reg c16:L, reg resdf13:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg bigmodel4:*, reg bigmodel5:V, reg __7:cls, reg r110:V, reg p29:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r112:V, reg r113:V, reg objects16:*, reg objects17:V, reg c17:L, reg objects19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg bigmodel6:*, reg bigmodel7:V, reg __8:cls, reg r114:V, reg c18:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r115:V, reg length1:cls, reg r116:V, reg p30:p(V +), reg r118:V, reg structure:cls, reg table2:*, reg table3:V, reg p31:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r121:V, reg r122:V, reg title:*, reg title1:V, reg topnote:*, reg topnote1:V, reg c19:cls, reg r123:V, reg p32:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r125:V, reg r126:V, reg c20:cls, reg r127:V, reg p33:p(V +), reg r129:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1("F") else L1(test);
  L1(test_orDefault):
    st test = test_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L2(r1):
    st objects = r1;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L28():
    list = ldf list;
    check L30() else D0();
  L29():
    r = dyn base(<sym object>, <sym ...>);
    goto L2(r);
  D0():
    deopt 2 [];
  L3(r5):
    st responses = r5;
    responses = ld responses;
    check L37() else D5();
  L30():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    ddd1 = ld `...`;
    r3 = dyn list[, `...`](p, ddd1);
    check L31() else D1();
  L32():
    lapply = ldf lapply;
    check L34() else D2();
  L33():
    r4 = dyn base1(<lang lapply(objects, function((x=), deparse(`[[`(`$`(x, terms), 2)), NULL))>);
    goto L3(r4);
  D1():
    deopt 5 [r3];
  D2():
    deopt 10 [];
  D5():
    deopt 17 [responses];
  L31():
    goto L2(r3);
  L34():
    p1 = prom<V +>{
      objects = ld objects;
      objects1 = force? objects;
      checkMissing(objects1);
      return objects1;
    };
    p2 = prom<V +>{
      r7 = clos inner2501545716;
      return r7;
    };
    r9 = dyn lapply(p1, p2);
    check L35() else D3();
  L37():
    responses1 = force? responses;
    checkMissing(responses1);
    responses2 = ld responses;
    check L38() else D6();
  D3():
    deopt 13 [r9];
  D6():
    deopt 18 [responses1, responses2];
  L35():
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(r9);
    check L36() else D4();
  L38():
    responses3 = force? responses2;
    checkMissing(responses3);
    c = `is.object`(responses3);
    if c then L39() else L40(responses1, responses3);
  D4():
    deopt 15 [r10];
  L4(responses9, dx1):
    r12 = `==`(responses9, dx1);
    st sameresp = r12;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L36():
    goto L3(r10);
  L39():
    dr = tryDispatchBuiltin.1("[", responses3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(responses1, dr);
  L40(responses6, responses7):
    __ = ldf `[` in base;
    r11 = dyn __(responses7, 1);
    goto L4(responses6, r11);
  L5(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L46() else L6();
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(responses1, dx);
  L42():
    sameresp = ld sameresp;
    check L44() else D7();
  L43():
    r13 = dyn base2(<sym sameresp>);
    goto L5(r13);
  D7():
    deopt 27 [sameresp];
  L6():
    goto L8();
  L8():
    sapply = ldf sapply;
    check L55() else D13();
  L44():
    sameresp1 = force? sameresp;
    checkMissing(sameresp1);
    all = ldf all in base;
    r15 = dyn all(sameresp1);
    check L45() else D8();
  L46():
    objects2 = ld objects;
    check L47() else D9();
  D8():
    deopt 30 [r15];
  D9():
    deopt 32 [objects2];
  D13():
    deopt 47 [];
  L45():
    goto L5(r15);
  L47():
    objects3 = force? objects2;
    checkMissing(objects3);
    c2 = `is.object`(objects3);
    if c2 then L48() else L49(objects3);
  L55():
    p7 = prom<V +>{
      objects6 = ld objects;
      objects7 = force? objects6;
      checkMissing(objects7);
      return objects7;
    };
    p8 = prom<V +>{
      r30 = clos inner2501545716;
      return r30;
    };
    r32 = dyn sapply(p7, p8);
    check L56() else D14();
  D14():
    deopt 50 [r32];
  L7(dx3):
    st objects = dx3;
    warning = ldf warning;
    check L52() else D11();
  L48():
    dr2 = tryDispatchBuiltin.1("[", objects3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(objects5):
    sameresp2 = ld sameresp;
    check L51() else D10();
  L56():
    st ns = r32;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  D10():
    deopt 34 [objects5, sameresp2];
  D11():
    deopt 39 [];
  L9(r34):
    c5 = `as.logical`(r34);
    if c5 then L65() else L11();
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L51():
    sameresp3 = force? sameresp2;
    __1 = ldf `[` in base;
    r17 = dyn __1(objects5, sameresp3);
    goto L7(r17);
  L52():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          deparse = ldf deparse;
          p3 = prom<V +>{
            responses10 = ld responses;
            responses11 = force? responses10;
            checkMissing(responses11);
            c3 = `is.object`(responses11);
            if c3 then L1() else L2(responses11);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("[", responses11);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(responses13):
            sameresp4 = ld sameresp;
            sameresp5 = force? sameresp4;
            checkMissing(sameresp5);
            r18 = `!`(sameresp5);
            __2 = ldf `[` in base;
            r19 = dyn __2(responses13, r18);
            goto L0(r19);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r21 = dyn deparse(p3);
          return r21;
        };
        r23 = dyn sQuote(p4);
        return r23;
      };
      r25 = dyn gettextf("models with response %s removed because response differs from model 1", p5);
      return r25;
    };
    r27 = dyn warning[, domain](p6, NA_LGL);
    check L53() else D12();
  L57():
    ns = ld ns;
    check L59() else D15();
  L58():
    r33 = dyn base3(<lang `!=`(ns, `[`(ns, 1))>);
    goto L9(r33);
  D12():
    deopt 43 [r27];
  D15():
    deopt 54 [ns];
  L11():
    goto L12();
  L12():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L53():
    goto L8();
  L59():
    ns1 = force? ns;
    checkMissing(ns1);
    ns2 = ld ns;
    check L60() else D16();
  L65():
    stop = ldf stop;
    check L66() else D18();
  D16():
    deopt 55 [ns1, ns2];
  D18():
    deopt 64 [];
  L13(r41):
    st nmodels = r41;
    nmodels = ld nmodels;
    check L73() else D22();
  L60():
    ns3 = force? ns2;
    checkMissing(ns3);
    c4 = `is.object`(ns3);
    if c4 then L61() else L62(ns1, ns3);
  L66():
    r38 = dyn stop("models were not all fitted to the same size of dataset");
    check L67() else D19();
  L69():
    objects8 = ld objects;
    check L71() else D20();
  L70():
    r40 = dyn base4(<sym objects>);
    goto L13(r40);
  D19():
    deopt 66 [r38];
  D20():
    deopt 71 [objects8];
  D22():
    deopt 76 [nmodels];
  L10(ns9, dx7):
    r36 = `!=`(ns9, dx7);
    any = ldf any in base;
    r37 = dyn any(r36);
    check L64() else D17();
  L61():
    dr6 = tryDispatchBuiltin.1("[", ns3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(ns1, dr6);
  L62(ns6, ns7):
    __3 = ldf `[` in base;
    r35 = dyn __3(ns7, 1);
    goto L10(ns6, r35);
  L67():
    goto L12();
  L71():
    objects9 = force? objects8;
    checkMissing(objects9);
    length = ldf length in base;
    r42 = dyn length(objects9);
    check L72() else D21();
  L73():
    nmodels1 = force? nmodels;
    checkMissing(nmodels1);
    r43 = `==`(nmodels1, 1.0);
    c6 = `as.logical`(r43);
    if c6 then L74() else L14();
  D17():
    deopt 62 [r37];
  D21():
    deopt 74 [r42];
  L14():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(ns1, dx6);
  L64():
    goto L9(r37);
  L72():
    goto L13(r42);
  L74():
    anova_lm = ldf `anova.lm`;
    check L75() else D23();
  D23():
    deopt 81 [];
  L16(r49):
    st resdf = r49;
    sym6 = ldf `as.numeric`;
    base6 = ldf `as.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L75():
    p9 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r45 = dyn anova_lm(p9);
    check L76() else D24();
  L79():
    lapply1 = ldf lapply;
    check L81() else D25();
  L80():
    r48 = dyn base5(<lang lapply(objects, df.residual)>);
    goto L16(r48);
  D24():
    deopt 83 [r45];
  D25():
    deopt 90 [];
  L17(r55):
    st resdev = r55;
    data_frame = ldf `data.frame`;
    check L89() else D31();
  L76():
    popenv;
    return r45;
  L81():
    p10 = prom<V +>{
      objects10 = ld objects;
      objects11 = force? objects10;
      checkMissing(objects11);
      return objects11;
    };
    p11 = prom<V +>{
      df_residual = ld `df.residual`;
      df_residual1 = force? df_residual;
      checkMissing(df_residual1);
      return df_residual1;
    };
    r52 = dyn lapply1(p10, p11);
    check L82() else D26();
  L84():
    lapply2 = ldf lapply;
    check L86() else D28();
  L85():
    r54 = dyn base6(<lang lapply(objects, deviance)>);
    goto L17(r54);
  D26():
    deopt 93 [r52];
  D28():
    deopt 100 [];
  D31():
    deopt 108 [];
  L82():
    as_numeric = ldf `as.numeric` in base;
    r53 = dyn as_numeric(r52);
    check L83() else D27();
  L86():
    p12 = prom<V +>{
      objects12 = ld objects;
      objects13 = force? objects12;
      checkMissing(objects13);
      return objects13;
    };
    p13 = prom<V +>{
      deviance = ld deviance;
      deviance1 = force? deviance;
      checkMissing(deviance1);
      return deviance1;
    };
    r58 = dyn lapply2(p12, p13);
    check L87() else D29();
  L89():
    p14 = prom<V +>{
      resdf = ld resdf;
      resdf1 = force? resdf;
      checkMissing(resdf1);
      return resdf1;
    };
    p15 = prom<V +>{
      resdev = ld resdev;
      resdev1 = force? resdev;
      checkMissing(resdev1);
      return resdev1;
    };
    p17 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      diff = ldf diff;
      p16 = prom<V +>{
        resdf2 = ld resdf;
        resdf3 = force? resdf2;
        checkMissing(resdf3);
        return resdf3;
      };
      r65 = dyn diff(p16);
      r66 = `-`(<missing>, r65);
      c7 = ldf c in base;
      r67 = dyn c7(NA_LGL, r66);
      goto L0(r67);
    L2():
      r62 = dyn base7(NA_LGL, <lang `-`(diff(resdf))>);
      goto L0(r62);
    };
    p19 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      diff1 = ldf diff;
      p18 = prom<V +>{
        resdev2 = ld resdev;
        resdev3 = force? resdev2;
        checkMissing(resdev3);
        return resdev3;
      };
      r72 = dyn diff1(p18);
      r73 = `-`(<missing>, r72);
      c8 = ldf c in base;
      r74 = dyn c8(NA_LGL, r73);
      goto L0(r74);
    L2():
      r69 = dyn base8(NA_LGL, <lang `-`(diff(resdev))>);
      goto L0(r69);
    };
    r76 = dyn data_frame(p14, p15, p17, p19);
    check L90() else D32();
  D27():
    deopt 95 [r53];
  D29():
    deopt 103 [r58];
  D32():
    deopt 113 [r76];
  L83():
    goto L16(r53);
  L87():
    as_numeric1 = ldf `as.numeric` in base;
    r59 = dyn as_numeric1(r58);
    check L88() else D30();
  L90():
    st table = r76;
    lapply3 = ldf lapply;
    check L91() else D33();
  D30():
    deopt 105 [r59];
  D33():
    deopt 116 [];
  L88():
    goto L17(r59);
  L91():
    p20 = prom<V +>{
      objects14 = ld objects;
      objects15 = force? objects14;
      checkMissing(objects15);
      return objects15;
    };
    p21 = prom<V +>{
      r78 = clos inner2501545716;
      return r78;
    };
    r80 = dyn lapply3(p20, p21);
    check L92() else D34();
  D34():
    deopt 119 [r80];
  L92():
    st variables = r80;
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L93() else L94();
  L18(r82):
    l = ld table;
    dimnames__ = ldf `dimnames<-`;
    check L100() else D38();
  L93():
    nmodels2 = ld nmodels;
    check L95() else D35();
  L94():
    r81 = dyn base9(<lang `:`(1, nmodels)>, <lang c("Res.Df", "RSS", "Df", "Sum of Sq")>);
    goto L18(r81);
  D35():
    deopt 124 [1, nmodels2];
  D38():
    deopt 138 [r82, l, r82];
  L95():
    nmodels3 = force? nmodels2;
    checkMissing(nmodels3);
    r83 = `:`(1, nmodels3);
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L96() else L97();
  L100():
    r88 = dyn dimnames__(l, NULL, r82);
    check L101() else D39();
  D39():
    deopt 140 [r82, r88];
  L19(r85):
    list1 = ldf list in base;
    r87 = dyn list1(r83, r85);
    check L99() else D37();
  L96():
    c9 = ldf c in base;
    r86 = dyn c9("Res.Df", "RSS", "Df", "Sum of Sq");
    check L98() else D36();
  L97():
    r84 = dyn base10("Res.Df", "RSS", "Df", "Sum of Sq");
    goto L19(r84);
  L101():
    st table = r88;
    st title = "Analysis of Variance Table\n";
    paste0 = ldf paste0;
    check L102() else D40();
  D36():
    deopt 134 [r86];
  D37():
    deopt 136 [r87];
  D40():
    deopt 146 [];
  L98():
    goto L19(r86);
  L99():
    goto L18(r87);
  L102():
    p23 = prom<V +>{
      format = ldf format;
      p22 = prom<V +>{
        nmodels4 = ld nmodels;
        nmodels5 = force? nmodels4;
        checkMissing(nmodels5);
        r89 = `:`(1, nmodels5);
        return r89;
      };
      r91 = dyn format(p22);
      return r91;
    };
    p24 = prom<V +>{
      variables = ld variables;
      variables1 = force? variables;
      checkMissing(variables1);
      return variables1;
    };
    r94 = dyn paste0[, , , , collapse]("Model ", p23, ": ", p24, "\n");
    check L103() else D41();
  D41():
    deopt 153 [r94];
  L103():
    st topnote = r94;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  L20(r96):
    r97 = `!`(r96);
    c11 = `as.logical`(r97);
    if c11 then L107() else L21();
  L104():
    test1 = ld test;
    check L106() else D42();
  L105():
    r95 = dyn base11(<sym test>);
    goto L20(r95);
  D42():
    deopt 156 [test1];
  L21():
    goto L27();
  L27():
    structure = ldf structure;
    check L130() else D53();
  L106():
    test2 = force? test1;
    checkMissing(test2);
    c10 = `==`(test2, NULL);
    goto L20(c10);
  L107():
    order = ldf order;
    check L108() else D43();
  D43():
    deopt 161 [];
  D53():
    deopt 202 [];
  L108():
    p25 = prom<V +>{
      resdf4 = ld resdf;
      resdf5 = force? resdf4;
      checkMissing(resdf5);
      return resdf5;
    };
    r99 = dyn order(p25);
    check L109() else D44();
  L130():
    p31 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    p32 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r122):
      return r122;
    L1():
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      topnote = ld topnote;
      topnote1 = force? topnote;
      checkMissing(topnote1);
      c19 = ldf c in base;
      r123 = dyn c19(title1, topnote1);
      goto L0(r123);
    L2():
      r121 = dyn base13(<sym title>, <sym topnote>);
      goto L0(r121);
    };
    p33 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r126):
      return r126;
    L1():
      c20 = ldf c in base;
      r127 = dyn c20("anova", "data.frame");
      goto L0(r127);
    L2():
      r125 = dyn base14("anova", "data.frame");
      goto L0(r125);
    };
    r129 = dyn structure[, heading, class](p31, p32, p33);
    check L131() else D54();
  D44():
    deopt 163 [r99];
  D54():
    deopt 208 [r129];
  L109():
    c12 = `is.object`(r99);
    if c12 then L110() else L111(r99);
  L131():
    popenv;
    return r129;
  L22(dx9):
    st bigmodel = dx9;
    scale1 = ld scale;
    check L113() else D45();
  L110():
    dr8 = tryDispatchBuiltin.1("[", r99);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L112() else L111(dr8);
  L111(r101):
    __4 = ldf `[` in base;
    r102 = dyn __4(r101, 1);
    goto L22(r102);
  D45():
    deopt 168 [scale1];
  L112():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L22(dx8);
  L113():
    scale2 = force? scale1;
    checkMissing(scale2);
    r103 = `>`(scale2, 0.0);
    c13 = `as.logical`(r103);
    if c13 then L114() else L23();
  L23():
    resdev4 = ld resdev;
    check L117() else D47();
  L24(scale5):
    st scale = scale5;
    stat_anova = ldf `stat.anova`;
    check L127() else D51();
  L114():
    scale3 = ld scale;
    check L115() else D46();
  D46():
    deopt 172 [scale3];
  D47():
    deopt 174 [resdev4];
  D51():
    deopt 186 [];
  L115():
    scale4 = force? scale3;
    checkMissing(scale4);
    goto L24(scale4);
  L117():
    resdev5 = force? resdev4;
    checkMissing(resdev5);
    c14 = `is.object`(resdev5);
    if c14 then L118() else L119(resdev5);
  L127():
    p26 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p27 = prom<V +>{
      test3 = ld test;
      test4 = force? test3;
      checkMissing(test4);
      return test4;
    };
    p28 = prom<V +>{
      scale6 = ld scale;
      scale7 = force? scale6;
      checkMissing(scale7);
      return scale7;
    };
    p29 = prom<V +>{
      resdf10 = ld resdf;
      resdf11 = force? resdf10;
      checkMissing(resdf11);
      c16 = `is.object`(resdf11);
      if c16 then L1() else L2(resdf11);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[", resdf11);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(resdf13):
      bigmodel4 = ld bigmodel;
      bigmodel5 = force? bigmodel4;
      __7 = ldf `[` in base;
      r110 = dyn __7(resdf13, bigmodel5);
      goto L0(r110);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    p30 = prom<V +>{
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r113):
      return r113;
    L2():
      objects16 = ld objects;
      objects17 = force? objects16;
      checkMissing(objects17);
      c17 = `is.object`(objects17);
      if c17 then L4() else L5(objects17);
    L3():
      r112 = dyn base12(<lang `$`(`[[`(objects, bigmodel), residuals)>);
      goto L0(r112);
    L1(dx21):
      c18 = `is.object`(dx21);
      if c18 then L8() else L9(dx21);
    L4():
      dr16 = tryDispatchBuiltin.1("[[", objects17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L6() else L5(dr16);
    L5(objects19):
      bigmodel6 = ld bigmodel;
      bigmodel7 = force? bigmodel6;
      __8 = ldf `[[` in base;
      r114 = dyn __8(objects19, bigmodel7);
      goto L1(r114);
    L6():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx20);
    L7(dx25):
      length1 = ldf length in base;
      r116 = dyn length1(dx25);
      goto L0(r116);
    L8():
      dr18 = tryDispatchBuiltin.1("$", dx21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L10() else L9(dr18);
    L9(dx23):
      r115 = `$`(dx23, <sym residuals>);
      goto L7(r115);
    L10():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L7(dx24);
    };
    r118 = dyn stat_anova[table, test, scale, `df.scale`, n](p26, p27, p28, p29, p30);
    check L128() else D52();
  D52():
    deopt 197 [r118];
  L25(dx11):
    resdf6 = ld resdf;
    check L122() else D49();
  L118():
    dr10 = tryDispatchBuiltin.1("[", resdev5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L120() else L119(dr10);
  L119(resdev7):
    bigmodel = ld bigmodel;
    check L121() else D48();
  L128():
    st table = r118;
    goto L27();
  D48():
    deopt 176 [resdev7, bigmodel];
  D49():
    deopt 178 [dx11, resdf6];
  L120():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L25(dx10);
  L121():
    bigmodel1 = force? bigmodel;
    __5 = ldf `[` in base;
    r104 = dyn __5(resdev7, bigmodel1);
    goto L25(r104);
  L122():
    resdf7 = force? resdf6;
    checkMissing(resdf7);
    c15 = `is.object`(resdf7);
    if c15 then L123() else L124(dx11, resdf7);
  L26(dx16, dx17):
    r106 = `/`(dx16, dx17);
    goto L24(r106);
  L123():
    dr12 = tryDispatchBuiltin.1("[", resdf7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L125() else L124(dx11, dr12);
  L124(dx13, resdf9):
    bigmodel2 = ld bigmodel;
    check L126() else D50();
  D50():
    deopt 180 [dx13, resdf9, bigmodel2];
  L125():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L26(dx11, dx15);
  L126():
    bigmodel3 = force? bigmodel2;
    __6 = ldf `[` in base;
    r105 = dyn __6(resdf9, bigmodel3);
    goto L26(dx13, r105);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st x = x;
    deparse = ldf deparse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L2() else L3(x2);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x4):
      r = `$`(x4, <sym terms>);
      goto L1(r);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[[` in base;
      r1 = dyn __(dx3, 2);
      goto L0(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r3 = dyn deparse(p);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}