fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1597541859;
    st `anovalist.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1597541859(object, `...`, test) {
  (reg object:*, reg ddd:dots, reg test:*) -+> V { var object:*, var `...`:dots?, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg lapply:cls, reg objects:*, reg objects1:V, reg p1:p(V +), reg r7:cls, reg p2:p(V +), reg r9:V, reg as_character:cls, reg r10:V, reg responses:*, reg responses1:V, reg responses2:*, reg responses3:V, reg c:L, reg responses6:V, reg responses7:V, reg dr:V, reg dc:L, reg dx:V, reg responses9:V, reg dx1:V, reg __:cls, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sameresp:*, reg sameresp1:V, reg all:cls, reg r15:V, reg r16:V, reg c1:L, reg objects2:*, reg objects3:V, reg c2:L, reg objects5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sameresp2:*, reg sameresp3:V, reg __1:cls, reg r17:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg deparse:cls, reg responses10:*, reg responses11:V, reg c3:L, reg responses13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sameresp4:*, reg sameresp5:V, reg r18:V, reg __2:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg objects6:*, reg objects7:V, reg length:cls, reg r31:V, reg nmodels:*, reg nmodels1:V, reg r32:V, reg c4:L, reg stop:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg lapply1:cls, reg objects8:*, reg objects9:V, reg p7:p(V +), reg r38:cls, reg p8:p(V +), reg r40:V, reg as_character1:cls, reg r41:V, reg unlist:cls, reg lapply2:cls, reg objects10:*, reg objects11:V, reg p9:p(V +), reg df_residual:*, reg df_residual1:V, reg p10:p(V +), reg r44:V, reg p11:p(V +), reg r46:V, reg unlist1:cls, reg lapply3:cls, reg objects12:*, reg objects13:V, reg p12:p(V +), reg deviance:*, reg deviance1:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg diff:cls, reg df_r:*, reg df_r1:V, reg p15:p(V +), reg r55:V, reg r56:V, reg c5:cls, reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg diff1:cls, reg ss_r:*, reg ss_r1:V, reg p16:p(V +), reg r61:V, reg r62:V, reg c6:cls, reg r63:V, reg ss:*, reg ss1:V, reg df:*, reg df1:V, reg r64:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg nmodels2:*, reg nmodels3:V, reg rep_len:cls, reg r67:V, reg nmodels4:*, reg nmodels5:V, reg r68:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg df2:*, reg df3:V, reg c8:L, reg i6:I, reg df5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg i9:*, reg i10:V, reg __3:cls, reg r69:V, reg r70:V, reg c9:L, reg ms:*, reg ms1:V, reg c10:L, reg i14:I, reg ms3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i16:I, reg dx9:V, reg i17:*, reg i18:V, reg __4:cls, reg r71:V, reg ss_r2:*, reg ss_r3:V, reg c11:L, reg i20:I, reg dx11:V, reg ss_r5:V, reg dr10:V, reg dc5:L, reg dx13:V, reg i22:I, reg dx14:V, reg dx15:V, reg i23:*, reg i24:V, reg __5:cls, reg r72:V, reg df_r2:*, reg df_r3:V, reg c12:L, reg i26:I, reg dx18:V, reg dx19:V, reg df_r5:V, reg dr12:V, reg dc6:L, reg dx22:V, reg i28:I, reg dx23:V, reg dx24:V, reg dx25:V, reg i29:*, reg i30:V, reg __6:cls, reg r73:V, reg r74:V, reg r75:V, reg l1:*, reg c13:L, reg i32:I, reg r77:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx26:V, reg i34:I, reg dx27:V, reg i35:*, reg i36:V, reg ___:cls, reg r80:V, reg pf:cls, reg f:*, reg f1:V, reg c14:L, reg f3:V, reg dr16:V, reg dc8:L, reg dx28:V, reg dx29:V, reg i37:*, reg i38:V, reg __7:cls, reg r81:V, reg p17:p(V +), reg df6:*, reg df7:V, reg c15:L, reg df9:V, reg dr18:V, reg dc9:L, reg dx30:V, reg dx31:V, reg i39:*, reg i40:V, reg __8:cls, reg r83:V, reg p18:p(V +), reg df_r6:*, reg df_r7:V, reg c16:L, reg df_r9:V, reg dr20:V, reg dc10:L, reg dx32:V, reg dx33:V, reg i41:*, reg i42:V, reg __9:cls, reg r85:V, reg p19:p(V +), reg r87:V, reg l4:*, reg c17:L, reg i44:I, reg r89:V, reg l6:*, reg dr22:V, reg dc11:L, reg dx34:V, reg i46:I, reg r91:V, reg dx35:V, reg i47:*, reg i48:V, reg ___1:cls, reg r92:V, reg i49:I, reg df10:*, reg df11:V, reg c18:L, reg i51:I, reg df13:V, reg dr24:V, reg dc12:L, reg dx36:V, reg i53:I, reg dx37:V, reg i54:*, reg i55:V, reg __10:cls, reg r94:V, reg r95:V, reg c19:L, reg ms4:*, reg ms5:V, reg c20:L, reg i59:I, reg ms7:V, reg dr26:V, reg dc13:L, reg dx38:V, reg i61:I, reg dx39:V, reg i62:*, reg i63:V, reg __11:cls, reg r96:V, reg ss_r6:*, reg ss_r7:V, reg c21:L, reg i65:I, reg dx41:V, reg ss_r9:V, reg dr28:V, reg dc14:L, reg dx43:V, reg i67:I, reg dx44:V, reg dx45:V, reg i68:*, reg i69:V, reg r97:V, reg __12:cls, reg r98:V, reg df_r10:*, reg df_r11:V, reg c22:L, reg i71:I, reg dx48:V, reg dx49:V, reg df_r13:V, reg dr30:V, reg dc15:L, reg dx52:V, reg i73:I, reg dx53:V, reg dx54:V, reg dx55:V, reg i74:*, reg i75:V, reg r99:V, reg __13:cls, reg r100:V, reg r101:V, reg r102:V, reg l7:*, reg c23:L, reg i77:I, reg r104:V, reg l9:*, reg dr32:V, reg dc16:L, reg dx56:V, reg i79:I, reg dx57:V, reg i80:*, reg i81:V, reg ___2:cls, reg r107:V, reg pf1:cls, reg f4:*, reg f5:V, reg c24:L, reg f7:V, reg dr34:V, reg dc17:L, reg dx58:V, reg dx59:V, reg i82:*, reg i83:V, reg __14:cls, reg r108:V, reg p20:p(V +), reg df14:*, reg df15:V, reg c25:L, reg df17:V, reg dr36:V, reg dc18:L, reg dx60:V, reg dx61:V, reg i84:*, reg i85:V, reg __15:cls, reg r110:V, reg r111:V, reg p21:p(V +), reg df_r14:*, reg df_r15:V, reg c26:L, reg df_r17:V, reg dr38:V, reg dc19:L, reg dx62:V, reg dx63:V, reg i86:*, reg i87:V, reg r113:V, reg __16:cls, reg r114:V, reg p22:p(V +), reg r116:V, reg l10:*, reg c27:L, reg i89:I, reg r118:V, reg l12:*, reg dr40:V, reg dc20:L, reg dx64:V, reg i91:I, reg r120:V, reg dx65:V, reg i92:*, reg i93:V, reg ___3:cls, reg r121:V, reg l13:*, reg c28:L, reg i95:I, reg r123:R, reg l15:*, reg dr42:V, reg dc21:L, reg dx66:V, reg i97:I, reg r125:R, reg dx67:V, reg i98:*, reg i99:V, reg ___4:cls, reg r126:V, reg data_frame:cls, reg df_r18:*, reg df_r19:V, reg p23:p(V +), reg ss_r10:*, reg ss_r11:V, reg p24:p(V +), reg df18:*, reg df19:V, reg p25:p(V +), reg ss2:*, reg ss3:V, reg p26:p(V +), reg f8:*, reg f9:V, reg p27:p(V +), reg p28:*, reg p29:V, reg p30:p(V +), reg r133:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r134:V, reg r135:V, reg nmodels6:*, reg nmodels7:V, reg r136:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r137:V, reg r138:V, reg c29:cls, reg r139:V, reg list1:cls, reg r140:V, reg l16:*, reg dimnames__:cls, reg r141:V, reg paste0:cls, reg format:cls, reg nmodels8:*, reg nmodels9:V, reg r142:V, reg p31:p(V +), reg r144:V, reg p32:p(V +), reg models:*, reg models1:V, reg p33:p(V +), reg r147:V, reg structure:cls, reg table:*, reg table1:V, reg p34:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r149:V, reg r150:V, reg title:*, reg title1:V, reg topnote:*, reg topnote1:V, reg c30:cls, reg r151:V, reg p35:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r153:V, reg r154:V, reg c31:cls, reg r155:V, reg p36:p(V +), reg r157:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    test_isMissing = missing.0(test);
    if test_isMissing then L0(NULL) else L0(test);
  L0(test_orDefault):
    st test = test_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L1(r1):
    st objects = r1;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L35():
    list = ldf list;
    check L37() else D0();
  L36():
    r = dyn base(<sym object>, <sym ...>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2(r5):
    st responses = r5;
    responses = ld responses;
    check L44() else D5();
  L37():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    ddd1 = ld `...`;
    r3 = dyn list[, `...`](p, ddd1);
    check L38() else D1();
  L39():
    lapply = ldf lapply;
    check L41() else D2();
  L40():
    r4 = dyn base1(<lang lapply(objects, function((x=), `[[`(formula(x), 2), NULL))>);
    goto L2(r4);
  D1():
    deopt 5 [r3];
  D2():
    deopt 10 [];
  D5():
    deopt 17 [responses];
  L38():
    goto L1(r3);
  L41():
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
    check L42() else D3();
  L44():
    responses1 = force? responses;
    checkMissing(responses1);
    responses2 = ld responses;
    check L45() else D6();
  D3():
    deopt 13 [r9];
  D6():
    deopt 18 [responses1, responses2];
  L42():
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(r9);
    check L43() else D4();
  L45():
    responses3 = force? responses2;
    checkMissing(responses3);
    c = `is.object`(responses3);
    if c then L46() else L47(responses1, responses3);
  D4():
    deopt 15 [r10];
  L3(responses9, dx1):
    r12 = `==`(responses9, dx1);
    st sameresp = r12;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L43():
    goto L2(r10);
  L46():
    dr = tryDispatchBuiltin.1("[", responses3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(responses1, dr);
  L47(responses6, responses7):
    __ = ldf `[` in base;
    r11 = dyn __(responses7, 1);
    goto L3(responses6, r11);
  L4(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L53() else L5();
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(responses1, dx);
  L49():
    sameresp = ld sameresp;
    check L51() else D7();
  L50():
    r13 = dyn base2(<sym sameresp>);
    goto L4(r13);
  D7():
    deopt 27 [sameresp];
  L5():
    goto L7();
  L7():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L51():
    sameresp1 = force? sameresp;
    checkMissing(sameresp1);
    all = ldf all in base;
    r15 = dyn all(sameresp1);
    check L52() else D8();
  L53():
    objects2 = ld objects;
    check L54() else D9();
  D8():
    deopt 30 [r15];
  D9():
    deopt 32 [objects2];
  L8(r30):
    st nmodels = r30;
    nmodels = ld nmodels;
    check L66() else D15();
  L52():
    goto L4(r15);
  L54():
    objects3 = force? objects2;
    checkMissing(objects3);
    c2 = `is.object`(objects3);
    if c2 then L55() else L56(objects3);
  L62():
    objects6 = ld objects;
    check L64() else D13();
  L63():
    r29 = dyn base3(<sym objects>);
    goto L8(r29);
  D13():
    deopt 48 [objects6];
  D15():
    deopt 53 [nmodels];
  L6(dx3):
    st objects = dx3;
    warning = ldf warning;
    check L59() else D11();
  L55():
    dr2 = tryDispatchBuiltin.1("[", objects3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(objects5):
    sameresp2 = ld sameresp;
    check L58() else D10();
  L64():
    objects7 = force? objects6;
    checkMissing(objects7);
    length = ldf length in base;
    r31 = dyn length(objects7);
    check L65() else D14();
  L66():
    nmodels1 = force? nmodels;
    checkMissing(nmodels1);
    r32 = `==`(nmodels1, 1);
    c4 = `as.logical`(r32);
    if c4 then L67() else L9();
  D10():
    deopt 34 [objects5, sameresp2];
  D11():
    deopt 39 [];
  D14():
    deopt 51 [r31];
  L9():
    goto L10();
  L10():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L58():
    sameresp3 = force? sameresp2;
    __1 = ldf `[` in base;
    r17 = dyn __1(objects5, sameresp3);
    goto L6(r17);
  L59():
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
    check L60() else D12();
  L65():
    goto L8(r31);
  L67():
    stop = ldf stop;
    check L68() else D16();
  D12():
    deopt 43 [r27];
  D16():
    deopt 58 [];
  L11(r36):
    st models = r36;
    unlist = ldf unlist;
    check L76() else D21();
  L60():
    goto L7();
  L68():
    r33 = dyn stop("'anova' is only defined for sequences of \"nls\" objects");
    check L69() else D17();
  L71():
    lapply1 = ldf lapply;
    check L73() else D18();
  L72():
    r35 = dyn base4(<lang lapply(objects, function((x=), formula(x), NULL))>);
    goto L11(r35);
  D17():
    deopt 60 [r33];
  D18():
    deopt 66 [];
  D21():
    deopt 74 [];
  L69():
    goto L10();
  L73():
    p7 = prom<V +>{
      objects8 = ld objects;
      objects9 = force? objects8;
      checkMissing(objects9);
      return objects9;
    };
    p8 = prom<V +>{
      r38 = clos inner2501545716;
      return r38;
    };
    r40 = dyn lapply1(p7, p8);
    check L74() else D19();
  L76():
    p11 = prom<V +>{
      lapply2 = ldf lapply;
      p9 = prom<V +>{
        objects10 = ld objects;
        objects11 = force? objects10;
        checkMissing(objects11);
        return objects11;
      };
      p10 = prom<V +>{
        df_residual = ld `df.residual`;
        df_residual1 = force? df_residual;
        checkMissing(df_residual1);
        return df_residual1;
      };
      r44 = dyn lapply2(p9, p10);
      return r44;
    };
    r46 = dyn unlist(p11);
    check L77() else D22();
  D19():
    deopt 69 [r40];
  D22():
    deopt 76 [r46];
  L74():
    as_character1 = ldf `as.character` in base;
    r41 = dyn as_character1(r40);
    check L75() else D20();
  L77():
    st `df.r` = r46;
    unlist1 = ldf unlist;
    check L78() else D23();
  D20():
    deopt 71 [r41];
  D23():
    deopt 79 [];
  L75():
    goto L11(r41);
  L78():
    p14 = prom<V +>{
      lapply3 = ldf lapply;
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
      r49 = dyn lapply3(p12, p13);
      return r49;
    };
    r51 = dyn unlist1(p14);
    check L79() else D24();
  D24():
    deopt 81 [r51];
  L79():
    st `ss.r` = r51;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L12(r53):
    st df = r53;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L80():
    diff = ldf diff;
    check L82() else D25();
  L81():
    r52 = dyn base5(NA_LGL, <lang `-`(diff(df.r))>);
    goto L12(r52);
  D25():
    deopt 87 [];
  L13(r59):
    st ss = r59;
    ss = ld ss;
    check L90() else D31();
  L82():
    p15 = prom<V +>{
      df_r = ld `df.r`;
      df_r1 = force? df_r;
      checkMissing(df_r1);
      return df_r1;
    };
    r55 = dyn diff(p15);
    check L83() else D26();
  L85():
    diff1 = ldf diff;
    check L87() else D28();
  L86():
    r58 = dyn base6(NA_LGL, <lang `-`(diff(ss.r))>);
    goto L13(r58);
  D26():
    deopt 89 [r55];
  D28():
    deopt 98 [];
  D31():
    deopt 105 [ss];
  L83():
    r56 = `-`(<missing>, r55);
    c5 = ldf c in base;
    r57 = dyn c5(NA_LGL, r56);
    check L84() else D27();
  L87():
    p16 = prom<V +>{
      ss_r = ld `ss.r`;
      ss_r1 = force? ss_r;
      checkMissing(ss_r1);
      return ss_r1;
    };
    r61 = dyn diff1(p16);
    check L88() else D29();
  L90():
    ss1 = force? ss;
    checkMissing(ss1);
    df = ld df;
    check L91() else D32();
  D27():
    deopt 92 [r57];
  D29():
    deopt 100 [r61];
  D32():
    deopt 106 [ss1, df];
  L84():
    goto L12(r57);
  L88():
    r62 = `-`(<missing>, r61);
    c6 = ldf c in base;
    r63 = dyn c6(NA_LGL, r62);
    check L89() else D30();
  L91():
    df1 = force? df;
    checkMissing(df1);
    r64 = `/`(ss1, df1);
    st ms = r64;
    sym7 = ldf rep_len;
    base7 = ldf rep_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L92() else L93();
  D30():
    deopt 103 [r63];
  L14(r66):
    st p = r66;
    st f = r66;
    nmodels4 = ld nmodels;
    check L96() else D35();
  L89():
    goto L13(r63);
  L92():
    nmodels2 = ld nmodels;
    check L94() else D33();
  L93():
    r65 = dyn base7(NA_REAL, <sym nmodels>);
    goto L14(r65);
  D33():
    deopt 113 [nmodels2];
  D35():
    deopt 120 [2.0, nmodels4];
  L94():
    nmodels3 = force? nmodels2;
    checkMissing(nmodels3);
    rep_len = ldf rep_len in base;
    r67 = dyn rep_len(NA_REAL, nmodels3);
    check L95() else D34();
  L96():
    nmodels5 = force? nmodels4;
    checkMissing(nmodels5);
    r68 = `:`(2.0, nmodels5);
    s = toForSeq(r68);
    l = length(s);
    i = 0;
    goto L15(i);
  D34():
    deopt 116 [r67];
  L15(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L97() else L32();
  L95():
    goto L14(r67);
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    df2 = ld df;
    check L98() else D36();
  L97():
    data_frame = ldf `data.frame`;
    check L166() else D61();
  D36():
    deopt 123 [i2, df2];
  D61():
    deopt 218 [];
  L98():
    df3 = force? df2;
    checkMissing(df3);
    c8 = `is.object`(df3);
    if c8 then L99() else L100(i2, df3);
  L166():
    p23 = prom<V +>{
      df_r18 = ld `df.r`;
      df_r19 = force? df_r18;
      checkMissing(df_r19);
      return df_r19;
    };
    p24 = prom<V +>{
      ss_r10 = ld `ss.r`;
      ss_r11 = force? ss_r10;
      checkMissing(ss_r11);
      return ss_r11;
    };
    p25 = prom<V +>{
      df18 = ld df;
      df19 = force? df18;
      checkMissing(df19);
      return df19;
    };
    p26 = prom<V +>{
      ss2 = ld ss;
      ss3 = force? ss2;
      checkMissing(ss3);
      return ss3;
    };
    p27 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p30 = prom<V +>{
      p28 = ld p;
      p29 = force? p28;
      checkMissing(p29);
      return p29;
    };
    r133 = dyn data_frame(p23, p24, p25, p26, p27, p30);
    check L167() else D62();
  D62():
    deopt 225 [r133];
  L16(i8, dx7):
    r70 = `>`(dx7, 0.0);
    c9 = `as.logical`(r70);
    if c9 then L103() else L17();
  L99():
    dr6 = tryDispatchBuiltin.1("[", df3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L101() else L100(i2, dr6);
  L100(i6, df5):
    i9 = ld i;
    check L102() else D37();
  L167():
    st table = r133;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L168() else L169();
  D37():
    deopt 125 [i6, df5, i9];
  L17():
    df10 = ld df;
    check L130() else D48();
  L23(i49):
    goto L15(i49);
  L33(r135):
    l16 = ld table;
    dimnames__ = ldf `dimnames<-`;
    check L175() else D66();
  L101():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i2, dx6);
  L102():
    i10 = force? i9;
    __3 = ldf `[` in base;
    r69 = dyn __3(df5, i10);
    goto L16(i6, r69);
  L103():
    ms = ld ms;
    check L104() else D38();
  L168():
    nmodels6 = ld nmodels;
    check L170() else D63();
  L169():
    r134 = dyn base8(<lang `:`(1, nmodels)>, <lang c("Res.Df", "Res.Sum Sq", "Df", "Sum Sq", "F value", "Pr(>F)")>);
    goto L33(r134);
  D38():
    deopt 130 [i8, ms];
  D48():
    deopt 163 [i8, df10];
  D63():
    deopt 230 [1, nmodels6];
  D66():
    deopt 246 [r135, l16, r135];
  L104():
    ms1 = force? ms;
    checkMissing(ms1);
    c10 = `is.object`(ms1);
    if c10 then L105() else L106(i8, ms1);
  L130():
    df11 = force? df10;
    checkMissing(df11);
    c18 = `is.object`(df11);
    if c18 then L131() else L132(i8, df11);
  L170():
    nmodels7 = force? nmodels6;
    checkMissing(nmodels7);
    r136 = `:`(1, nmodels7);
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L171() else L172();
  L175():
    r141 = dyn dimnames__(l16, NULL, r135);
    check L176() else D67();
  D67():
    deopt 248 [r135, r141];
  L18(i16, dx9):
    ss_r2 = ld `ss.r`;
    check L109() else D40();
  L24(i53, dx37):
    r95 = `<`(dx37, 0.0);
    c19 = `as.logical`(r95);
    if c19 then L135() else L25();
  L34(r138):
    list1 = ldf list in base;
    r140 = dyn list1(r136, r138);
    check L174() else D65();
  L105():
    dr8 = tryDispatchBuiltin.1("[", ms1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L107() else L106(i8, dr8);
  L106(i14, ms3):
    i17 = ld i;
    check L108() else D39();
  L131():
    dr24 = tryDispatchBuiltin.1("[", df11);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L133() else L132(i8, dr24);
  L132(i51, df13):
    i54 = ld i;
    check L134() else D49();
  L171():
    c29 = ldf c in base;
    r139 = dyn c29("Res.Df", "Res.Sum Sq", "Df", "Sum Sq", "F value", "Pr(>F)");
    check L173() else D64();
  L172():
    r137 = dyn base9("Res.Df", "Res.Sum Sq", "Df", "Sum Sq", "F value", "Pr(>F)");
    goto L34(r137);
  L176():
    st table = r141;
    st title = "Analysis of Variance Table\n";
    paste0 = ldf paste0;
    check L177() else D68();
  D39():
    deopt 132 [i14, ms3, i17];
  D40():
    deopt 134 [i16, dx9, ss_r2];
  D49():
    deopt 165 [i51, df13, i54];
  D64():
    deopt 242 [r139];
  D65():
    deopt 244 [r140];
  D68():
    deopt 254 [];
  L25():
    l13 = ld ss;
    c28 = `is.object`(l13);
    if c28 then L162() else L163(i53, 0.0, l13);
  L107():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(i8, dx8);
  L108():
    i18 = force? i17;
    __4 = ldf `[` in base;
    r71 = dyn __4(ms3, i18);
    goto L18(i14, r71);
  L109():
    ss_r3 = force? ss_r2;
    checkMissing(ss_r3);
    c11 = `is.object`(ss_r3);
    if c11 then L110() else L111(i16, dx9, ss_r3);
  L133():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L24(i8, dx36);
  L134():
    i55 = force? i54;
    __10 = ldf `[` in base;
    r94 = dyn __10(df13, i55);
    goto L24(i51, r94);
  L135():
    ms4 = ld ms;
    check L136() else D50();
  L173():
    goto L34(r139);
  L174():
    goto L33(r140);
  L177():
    p32 = prom<V +>{
      format = ldf format;
      p31 = prom<V +>{
        nmodels8 = ld nmodels;
        nmodels9 = force? nmodels8;
        checkMissing(nmodels9);
        r142 = `:`(1, nmodels9);
        return r142;
      };
      r144 = dyn format(p31);
      return r144;
    };
    p33 = prom<V +>{
      models = ld models;
      models1 = force? models;
      checkMissing(models1);
      return models1;
    };
    r147 = dyn paste0[, , , , collapse]("Model ", p32, ": ", p33, "\n");
    check L178() else D69();
  D50():
    deopt 170 [i53, ms4];
  D69():
    deopt 261 [r147];
  L19(i22, dx14, dx15):
    df_r2 = ld `df.r`;
    check L114() else D42();
  L31(i97, r125, dx67):
    st ss = dx67;
    goto L23(i97);
  L110():
    dr10 = tryDispatchBuiltin.1("[", ss_r3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L112() else L111(i16, dx9, dr10);
  L111(i20, dx11, ss_r5):
    i23 = ld i;
    check L113() else D41();
  L136():
    ms5 = force? ms4;
    checkMissing(ms5);
    c20 = `is.object`(ms5);
    if c20 then L137() else L138(i53, ms5);
  L162():
    dr42 = tryDispatchBuiltin.0("[<-", l13, 0.0);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L164() else L163(i53, 0.0, dr42);
  L163(i95, r123, l15):
    i98 = ld i;
    check L165() else D60();
  L178():
    st topnote = r147;
    structure = ldf structure;
    check L179() else D70();
  D41():
    deopt 136 [i20, dx11, ss_r5, i23];
  D42():
    deopt 138 [i22, dx14, dx15, df_r2];
  D60():
    deopt 210 [i95, r123, l15, 0.0, i98];
  D70():
    deopt 264 [];
  L26(i61, dx39):
    ss_r6 = ld `ss.r`;
    check L141() else D52();
  L112():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L19(i16, dx9, dx13);
  L113():
    i24 = force? i23;
    __5 = ldf `[` in base;
    r72 = dyn __5(ss_r5, i24);
    goto L19(i20, dx11, r72);
  L114():
    df_r3 = force? df_r2;
    checkMissing(df_r3);
    c12 = `is.object`(df_r3);
    if c12 then L115() else L116(i22, dx14, dx15, df_r3);
  L137():
    dr26 = tryDispatchBuiltin.1("[", ms5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L139() else L138(i53, dr26);
  L138(i59, ms7):
    i62 = ld i;
    check L140() else D51();
  L164():
    dx66 = getTryDispatchBuiltinValue(dr42);
    goto L31(i53, 0.0, dx66);
  L165():
    i99 = force? i98;
    ___4 = ldf `[<-` in base;
    r126 = dyn ___4(l15, 0.0, i99);
    goto L31(i95, r123, r126);
  L179():
    p34 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p35 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r150):
      return r150;
    L1():
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      topnote = ld topnote;
      topnote1 = force? topnote;
      checkMissing(topnote1);
      c30 = ldf c in base;
      r151 = dyn c30(title1, topnote1);
      goto L0(r151);
    L2():
      r149 = dyn base10(<sym title>, <sym topnote>);
      goto L0(r149);
    };
    p36 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r154):
      return r154;
    L1():
      c31 = ldf c in base;
      r155 = dyn c31("anova", "data.frame");
      goto L0(r155);
    L2():
      r153 = dyn base11("anova", "data.frame");
      goto L0(r153);
    };
    r157 = dyn structure[, heading, class](p34, p35, p36);
    check L180() else D71();
  D51():
    deopt 172 [i59, ms7, i62];
  D52():
    deopt 174 [i61, dx39, ss_r6];
  D71():
    deopt 270 [r157];
  L20(i28, dx23, dx24, dx25):
    r74 = `/`(dx24, dx25);
    r75 = `/`(dx23, r74);
    l1 = ld f;
    c13 = `is.object`(l1);
    if c13 then L119() else L120(i28, r75, l1);
  L115():
    dr12 = tryDispatchBuiltin.1("[", df_r3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L117() else L116(i22, dx14, dx15, dr12);
  L116(i26, dx18, dx19, df_r5):
    i29 = ld i;
    check L118() else D43();
  L139():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L26(i53, dx38);
  L140():
    i63 = force? i62;
    __11 = ldf `[` in base;
    r96 = dyn __11(ms7, i63);
    goto L26(i59, r96);
  L141():
    ss_r7 = force? ss_r6;
    checkMissing(ss_r7);
    c21 = `is.object`(ss_r7);
    if c21 then L142() else L143(i61, dx39, ss_r7);
  L180():
    popenv;
    return r157;
  D43():
    deopt 140 [i26, dx18, dx19, df_r5, i29];
  L21(i34, dx27):
    st f = dx27;
    pf = ldf pf;
    check L123() else D45();
  L27(i67, dx44, dx45):
    df_r10 = ld `df.r`;
    check L146() else D54();
  L117():
    dx22 = getTryDispatchBuiltinValue(dr12);
    goto L20(i22, dx14, dx15, dx22);
  L118():
    i30 = force? i29;
    __6 = ldf `[` in base;
    r73 = dyn __6(df_r5, i30);
    goto L20(i26, dx18, dx19, r73);
  L119():
    dr14 = tryDispatchBuiltin.0("[<-", l1, r75);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L121() else L120(i28, r75, dr14);
  L120(i32, r77, l3):
    i35 = ld i;
    check L122() else D44();
  L142():
    dr28 = tryDispatchBuiltin.1("[", ss_r7);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L144() else L143(i61, dx39, dr28);
  L143(i65, dx41, ss_r9):
    i68 = ld i;
    check L145() else D53();
  D44():
    deopt 146 [i32, r77, l3, r75, i35];
  D45():
    deopt 151 [i34];
  D53():
    deopt 176 [i65, dx41, ss_r9, i68];
  D54():
    deopt 180 [i67, dx44, dx45, df_r10];
  L121():
    dx26 = getTryDispatchBuiltinValue(dr14);
    goto L21(i28, dx26);
  L122():
    i36 = force? i35;
    ___ = ldf `[<-` in base;
    r80 = dyn ___(l3, r75, i36);
    goto L21(i32, r80);
  L123():
    p17 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      c14 = `is.object`(f1);
      if c14 then L1() else L2(f1);
    L0(dx29):
      return dx29;
    L1():
      dr16 = tryDispatchBuiltin.1("[", f1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(f3):
      i37 = ld i;
      i38 = force? i37;
      __7 = ldf `[` in base;
      r81 = dyn __7(f3, i38);
      goto L0(r81);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx28);
    };
    p18 = prom<V +>{
      df6 = ld df;
      df7 = force? df6;
      checkMissing(df7);
      c15 = `is.object`(df7);
      if c15 then L1() else L2(df7);
    L0(dx31):
      return dx31;
    L1():
      dr18 = tryDispatchBuiltin.1("[", df7);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(df9):
      i39 = ld i;
      i40 = force? i39;
      __8 = ldf `[` in base;
      r83 = dyn __8(df9, i40);
      goto L0(r83);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx30);
    };
    p19 = prom<V +>{
      df_r6 = ld `df.r`;
      df_r7 = force? df_r6;
      checkMissing(df_r7);
      c16 = `is.object`(df_r7);
      if c16 then L1() else L2(df_r7);
    L0(dx33):
      return dx33;
    L1():
      dr20 = tryDispatchBuiltin.1("[", df_r7);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(df_r9):
      i41 = ld i;
      i42 = force? i41;
      __9 = ldf `[` in base;
      r85 = dyn __9(df_r9, i42);
      goto L0(r85);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx32);
    };
    r87 = dyn pf[, , , `lower.tail`](p17, p18, p19, FALSE);
    check L124() else D46();
  L144():
    dx43 = getTryDispatchBuiltinValue(dr28);
    goto L27(i61, dx39, dx43);
  L145():
    i69 = force? i68;
    checkMissing(i69);
    r97 = `-`(i69, 1.0);
    __12 = ldf `[` in base;
    r98 = dyn __12(ss_r9, r97);
    goto L27(i65, dx41, r98);
  L146():
    df_r11 = force? df_r10;
    checkMissing(df_r11);
    c22 = `is.object`(df_r11);
    if c22 then L147() else L148(i67, dx44, dx45, df_r11);
  D46():
    deopt 157 [i34, r87];
  L28(i73, dx53, dx54, dx55):
    r101 = `/`(dx54, dx55);
    r102 = `/`(dx53, r101);
    l7 = ld f;
    c23 = `is.object`(l7);
    if c23 then L151() else L152(i73, r102, l7);
  L124():
    l4 = ld p;
    c17 = `is.object`(l4);
    if c17 then L125() else L126(i34, r87, l4);
  L147():
    dr30 = tryDispatchBuiltin.1("[", df_r11);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L149() else L148(i67, dx44, dx45, dr30);
  L148(i71, dx48, dx49, df_r13):
    i74 = ld i;
    check L150() else D55();
  D55():
    deopt 182 [i71, dx48, dx49, df_r13, i74];
  L22(i46, r91, dx35):
    st p = dx35;
    goto L23(i46);
  L29(i79, dx57):
    st f = dx57;
    pf1 = ldf pf;
    check L155() else D57();
  L125():
    dr22 = tryDispatchBuiltin.0("[<-", l4, r87);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L127() else L126(i34, r87, dr22);
  L126(i44, r89, l6):
    i47 = ld i;
    check L128() else D47();
  L149():
    dx52 = getTryDispatchBuiltinValue(dr30);
    goto L28(i67, dx44, dx45, dx52);
  L150():
    i75 = force? i74;
    checkMissing(i75);
    r99 = `-`(i75, 1.0);
    __13 = ldf `[` in base;
    r100 = dyn __13(df_r13, r99);
    goto L28(i71, dx48, dx49, r100);
  L151():
    dr32 = tryDispatchBuiltin.0("[<-", l7, r102);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L153() else L152(i73, r102, dr32);
  L152(i77, r104, l9):
    i80 = ld i;
    check L154() else D56();
  D47():
    deopt 159 [i44, r89, l6, r87, i47];
  D56():
    deopt 190 [i77, r104, l9, r102, i80];
  D57():
    deopt 195 [i79];
  L127():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L22(i34, r87, dx34);
  L128():
    i48 = force? i47;
    ___1 = ldf `[<-` in base;
    r92 = dyn ___1(l6, r87, i48);
    goto L22(i44, r89, r92);
  L153():
    dx56 = getTryDispatchBuiltinValue(dr32);
    goto L29(i73, dx56);
  L154():
    i81 = force? i80;
    ___2 = ldf `[<-` in base;
    r107 = dyn ___2(l9, r102, i81);
    goto L29(i77, r107);
  L155():
    p20 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      c24 = `is.object`(f5);
      if c24 then L1() else L2(f5);
    L0(dx59):
      return dx59;
    L1():
      dr34 = tryDispatchBuiltin.1("[", f5);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(f7):
      i82 = ld i;
      i83 = force? i82;
      __14 = ldf `[` in base;
      r108 = dyn __14(f7, i83);
      goto L0(r108);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx58);
    };
    p21 = prom<V +>{
      df14 = ld df;
      df15 = force? df14;
      checkMissing(df15);
      c25 = `is.object`(df15);
      if c25 then L1() else L2(df15);
    L0(dx61):
      r111 = `-`(<missing>, dx61);
      return r111;
    L1():
      dr36 = tryDispatchBuiltin.1("[", df15);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(df17):
      i84 = ld i;
      i85 = force? i84;
      __15 = ldf `[` in base;
      r110 = dyn __15(df17, i85);
      goto L0(r110);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx60);
    };
    p22 = prom<V +>{
      df_r14 = ld `df.r`;
      df_r15 = force? df_r14;
      checkMissing(df_r15);
      c26 = `is.object`(df_r15);
      if c26 then L1() else L2(df_r15);
    L0(dx63):
      return dx63;
    L1():
      dr38 = tryDispatchBuiltin.1("[", df_r15);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(df_r17):
      i86 = ld i;
      i87 = force? i86;
      checkMissing(i87);
      r113 = `-`(i87, 1.0);
      __16 = ldf `[` in base;
      r114 = dyn __16(df_r17, r113);
      goto L0(r114);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx62);
    };
    r116 = dyn pf1[, , , `lower.tail`](p20, p21, p22, FALSE);
    check L156() else D58();
  D58():
    deopt 201 [i79, r116];
  L156():
    l10 = ld p;
    c27 = `is.object`(l10);
    if c27 then L157() else L158(i79, r116, l10);
  L30(i91, r120, dx65):
    st p = dx65;
    goto L23(i91);
  L157():
    dr40 = tryDispatchBuiltin.0("[<-", l10, r116);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L159() else L158(i79, r116, dr40);
  L158(i89, r118, l12):
    i92 = ld i;
    check L160() else D59();
  D59():
    deopt 203 [i89, r118, l12, r116, i92];
  L159():
    dx64 = getTryDispatchBuiltinValue(dr40);
    goto L30(i79, r116, dx64);
  L160():
    i93 = force? i92;
    ___3 = ldf `[<-` in base;
    r121 = dyn ___3(l12, r116, i93);
    goto L30(i89, r118, r121);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg formula:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V |
    mkenv;
    st x = x;
    formula = ldf formula;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn formula(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[[` in base;
    r4 = dyn __(r3, 2);
    goto L0(r4);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}