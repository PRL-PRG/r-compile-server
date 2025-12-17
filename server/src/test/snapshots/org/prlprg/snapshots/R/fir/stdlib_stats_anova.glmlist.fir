fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3950183433;
    st `anova.glmlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3950183433(object, `...`, dispersion, test) {
  (reg object:*, reg ddd:dots, reg dispersion:*, reg test:*) -+> V { var object:*, var `...`:dots?, var dispersion:*, reg dispersion_isMissing:L, reg dispersion_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg test1:*, reg test2:V, reg c:V, reg r2:V, reg c1:L, reg c3:V, reg isTRUE:cls, reg test3:*, reg test4:V, reg r3:V, reg p:p(V +), reg r5:V, reg c4:L, reg c5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg lapply:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r9:cls, reg p2:p(V +), reg r11:V, reg as_character:cls, reg r12:V, reg responses:*, reg responses1:V, reg responses2:*, reg responses3:V, reg c7:L, reg responses6:V, reg responses7:V, reg dr:V, reg dc:L, reg dx:V, reg responses9:V, reg dx1:V, reg __:cls, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg sameresp:*, reg sameresp1:V, reg all:cls, reg r17:V, reg r18:V, reg c8:L, reg object3:*, reg object4:V, reg c9:L, reg object6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sameresp2:*, reg sameresp3:V, reg __1:cls, reg r19:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg deparse:cls, reg responses10:*, reg responses11:V, reg c10:L, reg responses13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sameresp4:*, reg sameresp5:V, reg r20:V, reg __2:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg sapply:cls, reg object7:*, reg object8:V, reg p7:p(V +), reg r32:cls, reg p8:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg ns:*, reg ns1:V, reg ns2:*, reg ns3:V, reg c11:L, reg ns6:V, reg ns7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg ns9:V, reg dx7:V, reg __3:cls, reg r37:V, reg r38:V, reg any:cls, reg r39:V, reg c12:L, reg stop:cls, reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg object9:*, reg object10:V, reg length:cls, reg r44:V, reg nmodels:*, reg nmodels1:V, reg r45:V, reg c13:L, reg anova_glm:cls, reg object11:*, reg object12:V, reg c14:L, reg object14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r46:V, reg p9:p(V +), reg dispersion1:*, reg dispersion2:V, reg p10:p(V +), reg test5:*, reg test6:V, reg p11:p(V +), reg r50:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg lapply1:cls, reg object15:*, reg object16:V, reg p12:p(V +), reg r56:cls, reg p13:p(V +), reg r58:V, reg as_numeric:cls, reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg lapply2:cls, reg object17:*, reg object18:V, reg p14:p(V +), reg r63:cls, reg p15:p(V +), reg r65:V, reg as_numeric1:cls, reg r66:V, reg doscore:*, reg doscore1:V, reg c15:L, reg numeric:cls, reg nmodels2:*, reg nmodels3:V, reg p16:p(V +), reg r68:V, reg l:*, reg c16:L, reg r70:L, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ___:cls, reg r73:V, reg diff:cls, reg resdf:*, reg resdf1:V, reg p17:p(V +), reg r75:V, reg r76:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r77:V, reg r78:V, reg nmodels4:*, reg nmodels5:V, reg r79:V, reg r80:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x:V, reg df:*, reg df1:V, reg c18:L, reg i6:I, reg df3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i8:I, reg dx13:V, reg i9:*, reg i10:V, reg __5:cls, reg r81:V, reg r82:V, reg c19:L, reg object19:*, reg object20:V, reg c20:L, reg i14:I, reg object22:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i16:I, reg dx15:V, reg i17:*, reg i18:V, reg __6:cls, reg r83:V, reg i19:I, reg dx16:V, reg object23:*, reg object24:V, reg c21:L, reg i21:I, reg object26:V, reg dr16:V, reg dc8:L, reg dx17:V, reg i23:*, reg i24:V, reg r84:V, reg __7:cls, reg r85:V, reg df4:*, reg df5:V, reg c22:L, reg i26:I, reg df7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i28:I, reg dx19:V, reg i29:*, reg i30:V, reg __8:cls, reg r86:V, reg r87:V, reg c23:L, reg object27:*, reg object28:V, reg c24:L, reg i34:I, reg object30:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i36:I, reg dx21:V, reg i37:*, reg i38:V, reg r88:V, reg __9:cls, reg r89:V, reg i39:I, reg dx22:V, reg object31:*, reg object32:V, reg c25:L, reg i41:I, reg object34:V, reg dr22:V, reg dc11:L, reg dx23:V, reg i43:*, reg i44:V, reg __10:cls, reg r90:V, reg m1:*, reg m2:V, reg c26:L, reg i46:I, reg m4:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i48:I, reg dx25:V, reg r91:V, reg m5:*, reg m6:V, reg c27:L, reg i50:I, reg m8:V, reg dr26:V, reg dc13:L, reg dx26:V, reg i52:I, reg dx27:V, reg r92:V, reg m9:*, reg m10:V, reg c28:L, reg i54:I, reg m12:V, reg dr28:V, reg dc14:L, reg dx28:V, reg i56:I, reg dx29:V, reg r93:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r94:V, reg i59:I, reg r95:V, reg m13:*, reg m14:V, reg c29:L, reg i61:I, reg m16:V, reg dr30:V, reg dc15:L, reg dx30:V, reg i63:I, reg dx31:V, reg r96:V, reg attr:cls, reg r97:V, reg eval:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r98:V, reg r99:V, reg call:cls, reg r100:V, reg p18:p(V +), reg r102:V, reg zz:*, reg zz1:V, reg c30:L, reg i65:I, reg zz3:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i67:I, reg dx33:V, reg r103:V, reg zz4:*, reg zz5:V, reg c31:L, reg i69:I, reg dx35:V, reg zz7:V, reg dr34:V, reg dc17:L, reg dx37:V, reg i71:I, reg dx38:V, reg dx39:V, reg r104:V, reg r105:V, reg l4:*, reg c32:L, reg i73:I, reg r107:V, reg l6:*, reg dr36:V, reg dc18:L, reg dx40:V, reg i75:I, reg dx41:V, reg i76:*, reg i77:V, reg r110:V, reg ___1:cls, reg r111:V, reg df8:*, reg df9:V, reg c33:L, reg i79:I, reg df11:V, reg dr38:V, reg dc19:L, reg dx42:V, reg i81:I, reg dx43:V, reg i82:*, reg i83:V, reg __11:cls, reg r112:V, reg r113:V, reg c34:L, reg score:*, reg score1:V, reg c35:L, reg i87:I, reg score3:V, reg dr40:V, reg dc20:L, reg dx44:V, reg i89:I, reg dx45:V, reg i90:*, reg i91:V, reg r114:V, reg __12:cls, reg r115:V, reg r116:V, reg l7:*, reg c36:L, reg i93:I, reg r118:V, reg l9:*, reg dr42:V, reg dc21:L, reg dx46:V, reg i95:I, reg r120:V, reg dx47:V, reg i96:*, reg i97:V, reg r121:V, reg ___2:cls, reg r122:V, reg i98:I, reg data_frame:cls, reg resdf2:*, reg resdf3:V, reg p19:p(V +), reg resdev:*, reg resdev1:V, reg p20:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r126:V, reg r127:V, reg diff1:cls, reg resdf4:*, reg resdf5:V, reg p21:p(V +), reg r129:V, reg r130:V, reg c37:cls, reg r131:V, reg p22:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r133:V, reg r134:V, reg diff2:cls, reg resdev2:*, reg resdev3:V, reg p23:p(V +), reg r136:V, reg r137:V, reg c38:cls, reg r138:V, reg p24:p(V +), reg r140:V, reg lapply3:cls, reg object35:*, reg object36:V, reg p25:p(V +), reg r142:cls, reg p26:p(V +), reg r144:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r145:V, reg r146:V, reg nmodels6:*, reg nmodels7:V, reg r147:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r148:V, reg r149:V, reg c39:cls, reg r150:V, reg list:cls, reg r151:V, reg l10:*, reg dimnames__:cls, reg r152:V, reg doscore2:*, reg doscore3:V, reg c40:L, reg cbind:cls, reg table:*, reg table1:V, reg p27:p(V +), reg score4:*, reg score5:V, reg p28:p(V +), reg r155:V, reg paste0:cls, reg format:cls, reg nmodels8:*, reg nmodels9:V, reg r157:V, reg p29:p(V +), reg r159:V, reg p30:p(V +), reg variables:*, reg variables1:V, reg p31:p(V +), reg r162:V, reg object37:*, reg object38:V, reg c41:L, reg object40:V, reg dr44:V, reg dc22:L, reg dx48:V, reg dx49:V, reg order:cls, reg resdf6:*, reg resdf7:V, reg p32:p(V +), reg r164:V, reg c42:L, reg object42:V, reg r166:V, reg dr46:V, reg dc23:L, reg dx50:V, reg object44:V, reg dx51:V, reg __13:cls, reg r167:V, reg __14:cls, reg r168:V, reg bigmodel:*, reg bigmodel1:V, reg c43:L, reg bigmodel3:V, reg dr48:V, reg dc24:L, reg dx52:V, reg dx53:V, reg r169:V, reg c44:L, reg dx55:V, reg dr50:V, reg dc25:L, reg dx56:V, reg dx57:V, reg r170:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r171:V, reg r172:V, reg test7:*, reg test8:V, reg c45:V, reg c46:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r173:V, reg r174:V, reg dispersion3:*, reg dispersion4:V, reg c47:V, reg r175:V, reg c48:L, reg r176:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r177:V, reg r178:V, reg bigdispersion:*, reg bigdispersion1:V, reg c49:V, reg r179:V, reg c50:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r180:V, reg r181:V, reg bigdispersion2:*, reg bigdispersion3:V, reg is_na:cls, reg r182:V, reg c51:L, reg r183:S, reg isFALSE:cls, reg test9:*, reg test10:V, reg p33:p(V +), reg r186:V, reg r187:V, reg c52:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r188:V, reg r189:V, reg dispersion5:*, reg dispersion6:V, reg c53:V, reg c54:L, reg summary:cls, reg bigmodel4:*, reg bigmodel5:V, reg p34:p(V +), reg r191:V, reg c55:L, reg r193:V, reg dr52:V, reg dc26:L, reg dx58:V, reg dx59:V, reg r194:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r195:V, reg r196:V, reg bigdispersion4:*, reg bigdispersion5:V, reg c56:V, reg r197:V, reg c57:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r198:V, reg r199:V, reg bigdispersion6:*, reg bigdispersion7:V, reg is_na1:cls, reg r200:V, reg c58:L, reg bigmodel6:*, reg bigmodel7:V, reg c59:L, reg bigmodel9:V, reg dr54:V, reg dc27:L, reg dx61:V, reg dx62:V, reg r201:V, reg dx63:V, reg dx64:V, reg isTRUE1:cls, reg dispersion7:*, reg dispersion8:V, reg r202:V, reg p35:p(V +), reg r204:V, reg c60:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r205:V, reg resdf8:*, reg resdf9:V, reg min:cls, reg r206:V, reg isTRUE2:cls, reg test11:*, reg test12:V, reg r207:V, reg p36:p(V +), reg r209:V, reg c61:L, reg c63:V, reg df_dispersion:*, reg df_dispersion1:V, reg r210:V, reg c64:L, reg c65:V, reg c67:L, reg r211:V, reg isFALSE1:cls, reg test13:*, reg test14:V, reg p37:p(V +), reg r214:V, reg r215:V, reg c68:L, reg isTRUE3:cls, reg test15:*, reg test16:V, reg r216:V, reg p38:p(V +), reg r218:V, reg c69:L, reg c71:V, reg df_dispersion2:*, reg df_dispersion3:V, reg r219:V, reg c72:L, reg c73:V, reg c75:L, reg bigmodel10:*, reg bigmodel11:V, reg c76:L, reg bigmodel13:V, reg dr56:V, reg dc28:L, reg dx65:V, reg dx66:V, reg r220:V, reg c77:L, reg dx68:V, reg dr58:V, reg dc29:L, reg dx69:V, reg dx70:V, reg r221:V, reg fam:*, reg fam1:V, reg r222:V, reg c78:L, reg c79:V, reg fam2:*, reg fam3:V, reg r223:V, reg c81:L, reg c82:V, reg c84:L, reg warning1:cls, reg gettextf1:cls, reg fam4:*, reg fam5:V, reg p39:p(V +), reg r225:V, reg p40:p(V +), reg r227:V, reg r228:V, reg warning2:cls, reg r229:V, reg stat_anova:cls, reg table2:*, reg table3:V, reg p41:p(V +), reg test17:*, reg test18:V, reg p42:p(V +), reg dispersion9:*, reg dispersion10:V, reg p43:p(V +), reg df_dispersion4:*, reg df_dispersion5:V, reg p44:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r235:V, reg r236:V, reg bigmodel14:*, reg bigmodel15:V, reg c85:L, reg bigmodel17:V, reg dr60:V, reg dc30:L, reg dx71:V, reg dx72:V, reg r237:V, reg length1:cls, reg r238:V, reg p45:p(V +), reg r240:V, reg structure:cls, reg table4:*, reg table5:V, reg p46:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r243:V, reg r244:V, reg title:*, reg title1:V, reg topnote:*, reg topnote1:V, reg c86:cls, reg r245:V, reg p47:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r247:V, reg r248:V, reg c87:cls, reg r249:V, reg p48:p(V +), reg r251:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    dispersion_isMissing = missing.0(dispersion);
    if dispersion_isMissing then L0(NULL) else L0(dispersion);
  L0(dispersion_orDefault):
    st dispersion = dispersion_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1(NULL) else L1(test);
  L1(test_orDefault):
    st test = test_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L82() else L83();
  L2(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L85() else L3(c1);
  L82():
    test1 = ld test;
    check L84() else D0();
  L83():
    r = dyn base(<sym test>);
    goto L2(r);
  D0():
    deopt 1 [test1];
  L3(c3):
    st doscore = c3;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L89() else L90();
  L84():
    test2 = force? test1;
    checkMissing(test2);
    c = `==`(test2, NULL);
    goto L2(c);
  L85():
    isTRUE = ldf isTRUE;
    check L86() else D1();
  D1():
    deopt 6 [c1];
  L4(r7):
    st responses = r7;
    responses = ld responses;
    check L94() else D6();
  L86():
    p = prom<V +>{
      test3 = ld test;
      test4 = force? test3;
      checkMissing(test4);
      r3 = `==`(test4, "Rao");
      return r3;
    };
    r5 = dyn isTRUE(p);
    check L87() else D2();
  L89():
    lapply = ldf lapply;
    check L91() else D3();
  L90():
    r6 = dyn base1(<lang lapply(object, function((x=), {
          deparse(`[[`(formula(x), 2))
        }, NULL))>);
    goto L4(r6);
  D2():
    deopt 8 [c1, r5];
  D3():
    deopt 14 [];
  D6():
    deopt 21 [responses];
  L87():
    c4 = `as.logical`(r5);
    c5 = `&&`(c1, c4);
    goto L3(c5);
  L91():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p2 = prom<V +>{
      r9 = clos inner2501545716;
      return r9;
    };
    r11 = dyn lapply(p1, p2);
    check L92() else D4();
  L94():
    responses1 = force? responses;
    checkMissing(responses1);
    responses2 = ld responses;
    check L95() else D7();
  D4():
    deopt 17 [r11];
  D7():
    deopt 22 [responses1, responses2];
  L92():
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(r11);
    check L93() else D5();
  L95():
    responses3 = force? responses2;
    checkMissing(responses3);
    c7 = `is.object`(responses3);
    if c7 then L96() else L97(responses1, responses3);
  D5():
    deopt 19 [r12];
  L5(responses9, dx1):
    r14 = `==`(responses9, dx1);
    st sameresp = r14;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L99() else L100();
  L93():
    goto L4(r12);
  L96():
    dr = tryDispatchBuiltin.1("[", responses3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L98() else L97(responses1, dr);
  L97(responses6, responses7):
    __ = ldf `[` in base;
    r13 = dyn __(responses7, 1);
    goto L5(responses6, r13);
  L6(r16):
    r18 = `!`(r16);
    c8 = `as.logical`(r18);
    if c8 then L103() else L7();
  L98():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(responses1, dx);
  L99():
    sameresp = ld sameresp;
    check L101() else D8();
  L100():
    r15 = dyn base2(<sym sameresp>);
    goto L6(r15);
  D8():
    deopt 31 [sameresp];
  L7():
    goto L9();
  L9():
    sapply = ldf sapply;
    check L112() else D14();
  L101():
    sameresp1 = force? sameresp;
    checkMissing(sameresp1);
    all = ldf all in base;
    r17 = dyn all(sameresp1);
    check L102() else D9();
  L103():
    object3 = ld object;
    check L104() else D10();
  D9():
    deopt 34 [r17];
  D10():
    deopt 36 [object3];
  D14():
    deopt 51 [];
  L102():
    goto L6(r17);
  L104():
    object4 = force? object3;
    checkMissing(object4);
    c9 = `is.object`(object4);
    if c9 then L105() else L106(object4);
  L112():
    p7 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    p8 = prom<V +>{
      r32 = clos inner2501545716;
      return r32;
    };
    r34 = dyn sapply(p7, p8);
    check L113() else D15();
  D15():
    deopt 54 [r34];
  L8(dx3):
    st object = dx3;
    warning = ldf warning;
    check L109() else D12();
  L105():
    dr2 = tryDispatchBuiltin.1("[", object4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L107() else L106(dr2);
  L106(object6):
    sameresp2 = ld sameresp;
    check L108() else D11();
  L113():
    st ns = r34;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  D11():
    deopt 38 [object6, sameresp2];
  D12():
    deopt 43 [];
  L10(r36):
    c12 = `as.logical`(r36);
    if c12 then L122() else L12();
  L107():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L108():
    sameresp3 = force? sameresp2;
    __1 = ldf `[` in base;
    r19 = dyn __1(object6, sameresp3);
    goto L8(r19);
  L109():
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
            c10 = `is.object`(responses11);
            if c10 then L1() else L2(responses11);
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
            r20 = `!`(sameresp5);
            __2 = ldf `[` in base;
            r21 = dyn __2(responses13, r20);
            goto L0(r21);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r23 = dyn deparse(p3);
          return r23;
        };
        r25 = dyn sQuote(p4);
        return r25;
      };
      r27 = dyn gettextf("models with response %s removed because response differs from model 1", p5);
      return r27;
    };
    r29 = dyn warning[, domain](p6, NA_LGL);
    check L110() else D13();
  L114():
    ns = ld ns;
    check L116() else D16();
  L115():
    r35 = dyn base3(<lang `!=`(ns, `[`(ns, 1))>);
    goto L10(r35);
  D13():
    deopt 47 [r29];
  D16():
    deopt 58 [ns];
  L12():
    goto L13();
  L13():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L126() else L127();
  L110():
    goto L9();
  L116():
    ns1 = force? ns;
    checkMissing(ns1);
    ns2 = ld ns;
    check L117() else D17();
  L122():
    stop = ldf stop;
    check L123() else D19();
  D17():
    deopt 59 [ns1, ns2];
  D19():
    deopt 68 [];
  L14(r43):
    st nmodels = r43;
    nmodels = ld nmodels;
    check L130() else D23();
  L117():
    ns3 = force? ns2;
    checkMissing(ns3);
    c11 = `is.object`(ns3);
    if c11 then L118() else L119(ns1, ns3);
  L123():
    r40 = dyn stop("models were not all fitted to the same size of dataset");
    check L124() else D20();
  L126():
    object9 = ld object;
    check L128() else D21();
  L127():
    r42 = dyn base4(<sym object>);
    goto L14(r42);
  D20():
    deopt 70 [r40];
  D21():
    deopt 75 [object9];
  D23():
    deopt 80 [nmodels];
  L11(ns9, dx7):
    r38 = `!=`(ns9, dx7);
    any = ldf any in base;
    r39 = dyn any(r38);
    check L121() else D18();
  L118():
    dr6 = tryDispatchBuiltin.1("[", ns3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L120() else L119(ns1, dr6);
  L119(ns6, ns7):
    __3 = ldf `[` in base;
    r37 = dyn __3(ns7, 1);
    goto L11(ns6, r37);
  L124():
    goto L13();
  L128():
    object10 = force? object9;
    checkMissing(object10);
    length = ldf length in base;
    r44 = dyn length(object10);
    check L129() else D22();
  L130():
    nmodels1 = force? nmodels;
    checkMissing(nmodels1);
    r45 = `==`(nmodels1, 1.0);
    c13 = `as.logical`(r45);
    if c13 then L131() else L15();
  D18():
    deopt 66 [r39];
  D22():
    deopt 78 [r44];
  L15():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L136() else L137();
  L120():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(ns1, dx6);
  L121():
    goto L10(r39);
  L129():
    goto L14(r44);
  L131():
    anova_glm = ldf `anova.glm`;
    check L132() else D24();
  D24():
    deopt 85 [];
  L17(r54):
    st resdf = r54;
    sym6 = ldf `as.numeric`;
    base6 = ldf `as.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L141() else L142();
  L132():
    p9 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      c14 = `is.object`(object12);
      if c14 then L1() else L2(object12);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", object12);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object14):
      __4 = ldf `[[` in base;
      r46 = dyn __4(object14, 1);
      goto L0(r46);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p10 = prom<V +>{
      dispersion1 = ld dispersion;
      dispersion2 = force? dispersion1;
      checkMissing(dispersion2);
      return dispersion2;
    };
    p11 = prom<V +>{
      test5 = ld test;
      test6 = force? test5;
      checkMissing(test6);
      return test6;
    };
    r50 = dyn anova_glm[, dispersion, test](p9, p10, p11);
    check L133() else D25();
  L136():
    lapply1 = ldf lapply;
    check L138() else D26();
  L137():
    r53 = dyn base5(<lang lapply(object, function((x=), `$`(x, df.residual), NULL))>);
    goto L17(r53);
  D25():
    deopt 91 [r50];
  D26():
    deopt 98 [];
  L18(r61):
    st resdev = r61;
    doscore = ld doscore;
    check L146() else D32();
  L133():
    popenv;
    return r50;
  L138():
    p12 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      return object16;
    };
    p13 = prom<V +>{
      r56 = clos inner2501545716;
      return r56;
    };
    r58 = dyn lapply1(p12, p13);
    check L139() else D27();
  L141():
    lapply2 = ldf lapply;
    check L143() else D29();
  L142():
    r60 = dyn base6(<lang lapply(object, function((x=), `$`(x, deviance), NULL))>);
    goto L18(r60);
  D27():
    deopt 101 [r58];
  D29():
    deopt 108 [];
  D32():
    deopt 115 [doscore];
  L139():
    as_numeric = ldf `as.numeric` in base;
    r59 = dyn as_numeric(r58);
    check L140() else D28();
  L143():
    p14 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      return object18;
    };
    p15 = prom<V +>{
      r63 = clos inner2501545716;
      return r63;
    };
    r65 = dyn lapply2(p14, p15);
    check L144() else D30();
  L146():
    doscore1 = force? doscore;
    checkMissing(doscore1);
    c15 = `as.logical`(doscore1);
    if c15 then L147() else L19();
  D28():
    deopt 103 [r59];
  D30():
    deopt 111 [r65];
  L19():
    goto L41();
  L41():
    data_frame = ldf `data.frame`;
    check L248() else D65();
  L140():
    goto L17(r59);
  L144():
    as_numeric1 = ldf `as.numeric` in base;
    r66 = dyn as_numeric1(r65);
    check L145() else D31();
  L147():
    numeric = ldf numeric;
    check L148() else D33();
  D31():
    deopt 113 [r66];
  D33():
    deopt 118 [];
  D65():
    deopt 253 [];
  L145():
    goto L18(r66);
  L148():
    p16 = prom<V +>{
      nmodels2 = ld nmodels;
      nmodels3 = force? nmodels2;
      checkMissing(nmodels3);
      return nmodels3;
    };
    r68 = dyn numeric(p16);
    check L149() else D34();
  L248():
    p19 = prom<V +>{
      resdf2 = ld resdf;
      resdf3 = force? resdf2;
      checkMissing(resdf3);
      return resdf3;
    };
    p20 = prom<V +>{
      resdev = ld resdev;
      resdev1 = force? resdev;
      checkMissing(resdev1);
      return resdev1;
    };
    p22 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r127):
      return r127;
    L1():
      diff1 = ldf diff;
      p21 = prom<V +>{
        resdf4 = ld resdf;
        resdf5 = force? resdf4;
        checkMissing(resdf5);
        return resdf5;
      };
      r129 = dyn diff1(p21);
      r130 = `-`(<missing>, r129);
      c37 = ldf c in base;
      r131 = dyn c37(NA_LGL, r130);
      goto L0(r131);
    L2():
      r126 = dyn base10(NA_LGL, <lang `-`(diff(resdf))>);
      goto L0(r126);
    };
    p24 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r134):
      return r134;
    L1():
      diff2 = ldf diff;
      p23 = prom<V +>{
        resdev2 = ld resdev;
        resdev3 = force? resdev2;
        checkMissing(resdev3);
        return resdev3;
      };
      r136 = dyn diff2(p23);
      r137 = `-`(<missing>, r136);
      c38 = ldf c in base;
      r138 = dyn c38(NA_LGL, r137);
      goto L0(r138);
    L2():
      r133 = dyn base11(NA_LGL, <lang `-`(diff(resdev))>);
      goto L0(r133);
    };
    r140 = dyn data_frame(p19, p20, p22, p24);
    check L249() else D66();
  D34():
    deopt 120 [r68];
  D66():
    deopt 258 [r140];
  L149():
    st score = r68;
    l = ld score;
    c16 = `is.object`(l);
    if c16 then L150() else L151(NA_LGL, l);
  L249():
    st table = r140;
    lapply3 = ldf lapply;
    check L250() else D67();
  D67():
    deopt 261 [];
  L20(dx11):
    st score = dx11;
    diff = ldf diff;
    check L153() else D35();
  L150():
    dr10 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L152() else L151(NA_LGL, dr10);
  L151(r70, l2):
    ___ = ldf `[<-` in base;
    r73 = dyn ___(l2, NA_LGL, 1.0);
    goto L20(r73);
  L250():
    p25 = prom<V +>{
      object35 = ld object;
      object36 = force? object35;
      checkMissing(object36);
      return object36;
    };
    p26 = prom<V +>{
      r142 = clos inner2501545716;
      return r142;
    };
    r144 = dyn lapply3(p25, p26);
    check L251() else D68();
  D35():
    deopt 130 [];
  D68():
    deopt 264 [r144];
  L152():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L20(dx10);
  L153():
    p17 = prom<V +>{
      resdf = ld resdf;
      resdf1 = force? resdf;
      checkMissing(resdf1);
      return resdf1;
    };
    r75 = dyn diff(p17);
    check L154() else D36();
  L251():
    st variables = r144;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L252() else L253();
  D36():
    deopt 132 [r75];
  L42(r146):
    l10 = ld table;
    dimnames__ = ldf `dimnames<-`;
    check L259() else D72();
  L154():
    r76 = `-`(<missing>, r75);
    st df = r76;
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L155() else L156();
  L252():
    nmodels6 = ld nmodels;
    check L254() else D69();
  L253():
    r145 = dyn base12(<lang `:`(1, nmodels)>, <lang c("Resid. Df", "Resid. Dev", "Df", "Deviance")>);
    goto L42(r145);
  D69():
    deopt 269 [1, nmodels6];
  D72():
    deopt 283 [r146, l10, r146];
  L21(r78):
    s = toForSeq(r78);
    l3 = length(s);
    i = 0;
    goto L24(i);
  L155():
    nmodels4 = ld nmodels;
    check L157() else D37();
  L156():
    r77 = dyn base7(<lang `-`(nmodels, 1.0)>);
    goto L21(r77);
  L254():
    nmodels7 = force? nmodels6;
    checkMissing(nmodels7);
    r147 = `:`(1, nmodels7);
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L255() else L256();
  L259():
    r152 = dyn dimnames__(l10, NULL, r146);
    check L260() else D73();
  D37():
    deopt 136 [nmodels4];
  D73():
    deopt 285 [r146, r152];
  L24(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l3, i2);
    if c17 then L23() else L40();
  L43(r149):
    list = ldf list in base;
    r151 = dyn list(r147, r149);
    check L258() else D71();
  L157():
    nmodels5 = force? nmodels4;
    checkMissing(nmodels5);
    r79 = `-`(nmodels5, 1.0);
    r80 = seq_len(r79);
    goto L21(r80);
  L255():
    c39 = ldf c in base;
    r150 = dyn c39("Resid. Df", "Resid. Dev", "Df", "Deviance");
    check L257() else D70();
  L256():
    r148 = dyn base13("Resid. Df", "Resid. Dev", "Df", "Deviance");
    goto L43(r148);
  L260():
    st table = r152;
    doscore2 = ld doscore;
    check L261() else D74();
  D70():
    deopt 279 [r150];
  D71():
    deopt 281 [r151];
  D74():
    deopt 287 [doscore2];
  L23():
    goto L41();
  L40():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    df = ld df;
    check L158() else D38();
  L257():
    goto L43(r150);
  L258():
    goto L42(r151);
  L261():
    doscore3 = force? doscore2;
    checkMissing(doscore3);
    c40 = `as.logical`(doscore3);
    if c40 then L262() else L44();
  D38():
    deopt 143 [i2, df];
  L44():
    goto L45();
  L45():
    st title = "Analysis of Deviance Table\n";
    paste0 = ldf paste0;
    check L266() else D77();
  L158():
    df1 = force? df;
    checkMissing(df1);
    c18 = `is.object`(df1);
    if c18 then L159() else L160(i2, df1);
  L262():
    cbind = ldf cbind;
    check L263() else D75();
  D75():
    deopt 290 [];
  D77():
    deopt 302 [];
  L25(i8, dx13):
    r82 = `>`(dx13, 0.0);
    c19 = `as.logical`(r82);
    if c19 then L163() else L26();
  L159():
    dr12 = tryDispatchBuiltin.1("[", df1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L161() else L160(i2, dr12);
  L160(i6, df3):
    i9 = ld i;
    check L162() else D39();
  L263():
    p27 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p28 = prom<V +>{
      score4 = ld score;
      score5 = force? score4;
      checkMissing(score5);
      return score5;
    };
    r155 = dyn cbind[, Rao](p27, p28);
    check L264() else D76();
  L266():
    p30 = prom<V +>{
      format = ldf format;
      p29 = prom<V +>{
        nmodels8 = ld nmodels;
        nmodels9 = force? nmodels8;
        checkMissing(nmodels9);
        r157 = `:`(1, nmodels9);
        return r157;
      };
      r159 = dyn format(p29);
      return r159;
    };
    p31 = prom<V +>{
      variables = ld variables;
      variables1 = force? variables;
      checkMissing(variables1);
      return variables1;
    };
    r162 = dyn paste0[, , , , collapse]("Model ", p30, ": ", p31, "\n");
    check L267() else D78();
  D39():
    deopt 145 [i6, df3, i9];
  D76():
    deopt 294 [r155];
  D78():
    deopt 309 [r162];
  L26():
    object23 = ld object;
    check L170() else D42();
  L28(i19, dx16):
    st m1 = dx16;
    df4 = ld df;
    check L175() else D44();
  L161():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L25(i2, dx12);
  L162():
    i10 = force? i9;
    __5 = ldf `[` in base;
    r81 = dyn __5(df3, i10);
    goto L25(i6, r81);
  L163():
    object19 = ld object;
    check L164() else D40();
  L264():
    st table = r155;
    goto L45();
  L267():
    st topnote = r162;
    object37 = ld object;
    check L268() else D79();
  D40():
    deopt 150 [i8, object19];
  D42():
    deopt 155 [i8, object23];
  D44():
    deopt 163 [i19, df4];
  D79():
    deopt 311 [object37];
  L164():
    object20 = force? object19;
    checkMissing(object20);
    c20 = `is.object`(object20);
    if c20 then L165() else L166(i8, object20);
  L170():
    object24 = force? object23;
    checkMissing(object24);
    c21 = `is.object`(object24);
    if c21 then L171() else L172(i8, object24);
  L175():
    df5 = force? df4;
    checkMissing(df5);
    c22 = `is.object`(df5);
    if c22 then L176() else L177(i19, df5);
  L268():
    object38 = force? object37;
    checkMissing(object38);
    c41 = `is.object`(object38);
    if c41 then L269() else L270(object38);
  L27(i16, dx15):
    goto L28(i16, dx15);
  L29(i28, dx19):
    r87 = `>`(dx19, 0.0);
    c23 = `as.logical`(r87);
    if c23 then L180() else L30();
  L46(dx49):
    st bigmodel = dx49;
    bigmodel = ld bigmodel;
    check L277() else D82();
  L165():
    dr14 = tryDispatchBuiltin.1("[[", object20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L167() else L166(i8, dr14);
  L166(i14, object22):
    i17 = ld i;
    check L168() else D41();
  L171():
    dr16 = tryDispatchBuiltin.1("[[", object24);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L173() else L172(i8, dr16);
  L172(i21, object26):
    i23 = ld i;
    check L174() else D43();
  L176():
    dr18 = tryDispatchBuiltin.1("[", df5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L178() else L177(i19, dr18);
  L177(i26, df7):
    i29 = ld i;
    check L179() else D45();
  L269():
    dr44 = tryDispatchBuiltin.1("[[", object38);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L271() else L270(dr44);
  L270(object40):
    order = ldf order;
    check L272() else D80();
  D41():
    deopt 152 [i14, object22, i17];
  D43():
    deopt 157 [i21, object26, i23];
  D45():
    deopt 165 [i26, df7, i29];
  D80():
    deopt 314 [object40];
  D82():
    deopt 322 [bigmodel];
  L30():
    object31 = ld object;
    check L187() else D48();
  L32(i39, dx22):
    st m2 = dx22;
    m1 = ld m1;
    check L192() else D50();
  L167():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L27(i8, dx14);
  L168():
    i18 = force? i17;
    __6 = ldf `[[` in base;
    r83 = dyn __6(object22, i18);
    goto L27(i14, r83);
  L173():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L28(i8, dx17);
  L174():
    i24 = force? i23;
    checkMissing(i24);
    r84 = `+`(i24, 1.0);
    __7 = ldf `[[` in base;
    r85 = dyn __7(object26, r84);
    goto L28(i21, r85);
  L178():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L29(i19, dx18);
  L179():
    i30 = force? i29;
    __8 = ldf `[` in base;
    r86 = dyn __8(df7, i30);
    goto L29(i26, r86);
  L180():
    object27 = ld object;
    check L181() else D46();
  L271():
    dx48 = getTryDispatchBuiltinValue(dr44);
    goto L46(dx48);
  L272():
    p32 = prom<V +>{
      resdf6 = ld resdf;
      resdf7 = force? resdf6;
      checkMissing(resdf7);
      return resdf7;
    };
    r164 = dyn order(p32);
    check L273() else D81();
  L277():
    bigmodel1 = force? bigmodel;
    checkMissing(bigmodel1);
    c43 = `is.object`(bigmodel1);
    if c43 then L279() else L280(bigmodel1);
  D46():
    deopt 170 [i28, object27];
  D48():
    deopt 177 [i28, object31];
  D50():
    deopt 183 [i39, m1];
  D81():
    deopt 316 [object40, r164];
  L181():
    object28 = force? object27;
    checkMissing(object28);
    c24 = `is.object`(object28);
    if c24 then L182() else L183(i28, object28);
  L187():
    object32 = force? object31;
    checkMissing(object32);
    c25 = `is.object`(object32);
    if c25 then L188() else L189(i28, object32);
  L192():
    m2 = force? m1;
    checkMissing(m2);
    c26 = `is.object`(m2);
    if c26 then L194() else L195(i39, m2);
  L273():
    c42 = `is.object`(r164);
    if c42 then L274() else L275(object40, r164);
  L278(dx53):
    c44 = `is.object`(dx53);
    if c44 then L283() else L284(dx53);
  L279():
    dr48 = tryDispatchBuiltin.1("$", bigmodel1);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L281() else L280(dr48);
  L280(bigmodel3):
    r169 = `$`(bigmodel3, <sym family>);
    goto L278(r169);
  L31(i36, dx21):
    goto L32(i36, dx21);
  L47(object44, dx51):
    __14 = ldf `[[` in base;
    r168 = dyn __14(object44, dx51);
    goto L46(r168);
  L182():
    dr20 = tryDispatchBuiltin.1("[[", object28);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L184() else L183(i28, dr20);
  L183(i34, object30):
    i37 = ld i;
    check L185() else D47();
  L188():
    dr22 = tryDispatchBuiltin.1("[[", object32);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L190() else L189(i28, dr22);
  L189(i41, object34):
    i43 = ld i;
    check L191() else D49();
  L193(i48, dx25):
    st r = dx25;
    m5 = ld m1;
    check L197() else D51();
  L194():
    dr24 = tryDispatchBuiltin.1("$", m2);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L196() else L195(i39, dr24);
  L195(i46, m4):
    r91 = `$`(m4, <sym residuals>);
    goto L193(i46, r91);
  L274():
    dr46 = tryDispatchBuiltin.1("[", r164);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L276() else L275(object40, dr46);
  L275(object42, r166):
    __13 = ldf `[` in base;
    r167 = dyn __13(r166, 1);
    goto L47(object42, r167);
  L281():
    dx52 = getTryDispatchBuiltinValue(dr48);
    goto L278(dx52);
  L282(dx57):
    st bigdispersion = dx57;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L286() else L287();
  L283():
    dr50 = tryDispatchBuiltin.1("$", dx53);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L285() else L284(dr50);
  L284(dx55):
    r170 = `$`(dx55, <sym dispersion>);
    goto L282(r170);
  D47():
    deopt 172 [i34, object30, i37];
  D49():
    deopt 179 [i41, object34, i43];
  D51():
    deopt 187 [i48, m5];
  L48(r172):
    c46 = `as.logical`(r172);
    if c46 then L289() else L49();
  L184():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L31(i28, dx20);
  L185():
    i38 = force? i37;
    checkMissing(i38);
    r88 = `+`(i38, 1.0);
    __9 = ldf `[[` in base;
    r89 = dyn __9(object30, r88);
    goto L31(i34, r89);
  L190():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L32(i28, dx23);
  L191():
    i44 = force? i43;
    __10 = ldf `[[` in base;
    r90 = dyn __10(object34, i44);
    goto L32(i41, r90);
  L196():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L193(i39, dx24);
  L197():
    m6 = force? m5;
    checkMissing(m6);
    c27 = `is.object`(m6);
    if c27 then L199() else L200(i48, m6);
  L276():
    dx50 = getTryDispatchBuiltinValue(dr46);
    goto L47(object40, dx50);
  L285():
    dx56 = getTryDispatchBuiltinValue(dr50);
    goto L282(dx56);
  L286():
    test7 = ld test;
    check L288() else D83();
  L287():
    r171 = dyn base14(<sym test>);
    goto L48(r171);
  D83():
    deopt 328 [test7];
  L49():
    goto L58();
  L58():
    isFALSE = ldf isFALSE;
    check L307() else D88();
  L198(i52, dx27):
    st w = dx27;
    m9 = ld m2;
    check L202() else D52();
  L199():
    dr26 = tryDispatchBuiltin.1("$", m6);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L201() else L200(i48, dr26);
  L200(i50, m8):
    r92 = `$`(m8, <sym weights>);
    goto L198(i50, r92);
  L288():
    test8 = force? test7;
    checkMissing(test8);
    c45 = `==`(test8, NULL);
    goto L48(c45);
  L289():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L290() else L291();
  D52():
    deopt 191 [i52, m9];
  D88():
    deopt 359 [];
  L50(r174):
    r175 = `!`(r174);
    c48 = `as.logical`(r175);
    if c48 then L293() else L51();
  L201():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L198(i48, dx26);
  L202():
    m10 = force? m9;
    checkMissing(m10);
    c28 = `is.object`(m10);
    if c28 then L204() else L205(i52, m10);
  L290():
    dispersion3 = ld dispersion;
    check L292() else D84();
  L291():
    r173 = dyn base15(<sym dispersion>);
    goto L50(r173);
  L307():
    p33 = prom<V +>{
      test9 = ld test;
      test10 = force? test9;
      checkMissing(test10);
      return test10;
    };
    r186 = dyn isFALSE(p33);
    check L308() else D89();
  D84():
    deopt 332 [dispersion3];
  D89():
    deopt 361 [r186];
  L51():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L295() else L296();
  L52(r176):
    st test = r176;
    goto L58();
  L203(i56, dx29):
    st method = dx29;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L207() else L208();
  L204():
    dr28 = tryDispatchBuiltin.1("$", m10);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L206() else L205(i52, dr28);
  L205(i54, m12):
    r93 = `$`(m12, <sym method>);
    goto L203(i54, r93);
  L292():
    dispersion4 = force? dispersion3;
    checkMissing(dispersion4);
    c47 = `==`(dispersion4, NULL);
    goto L50(c47);
  L293():
    goto L52("Chisq");
  L308():
    r187 = `!`(r186);
    c52 = `as.logical`(r187);
    if c52 then L309() else L59();
  L33(i59, r95):
    st icpt = r95;
    eval = ldf eval;
    check L215() else D55();
  L53(r178):
    r179 = `!`(r178);
    c50 = `as.logical`(r179);
    if c50 then L298() else L54();
  L59():
    goto L73();
  L73():
    isFALSE1 = ldf isFALSE;
    check L353() else D104();
  L206():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L203(i52, dx28);
  L207():
    m13 = ld m1;
    check L209() else D53();
  L208():
    r94 = dyn base8(<lang `$`(m1, terms)>, "intercept");
    goto L33(i56, r94);
  L295():
    bigdispersion = ld bigdispersion;
    check L297() else D85();
  L296():
    r177 = dyn base16(<sym bigdispersion>);
    goto L53(r177);
  L309():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L310() else L311();
  D53():
    deopt 197 [i56, m13];
  D55():
    deopt 205 [i59];
  D85():
    deopt 339 [bigdispersion];
  D104():
    deopt 421 [];
  L54():
    goto L52(FALSE);
  L60(r189):
    c54 = `as.logical`(r189);
    if c54 then L313() else L61();
  L209():
    m14 = force? m13;
    checkMissing(m14);
    c29 = `is.object`(m14);
    if c29 then L211() else L212(i56, m14);
  L215():
    p18 = prom<V +>{
      sym9 = ldf call;
      base9 = ldf call in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      call = ldf call in base;
      r100 = dyn call(<lang if(is.function(method), "method", method)>, <lang model.matrix(m2)>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r100);
    L2():
      r98 = dyn base9[, x, y, weights, intercept](<lang if(is.function(method), "method", method)>, <lang model.matrix(m2)>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r98);
    };
    r102 = dyn eval(p18);
    check L216() else D56();
  L297():
    bigdispersion1 = force? bigdispersion;
    checkMissing(bigdispersion1);
    c49 = `==`(bigdispersion1, NULL);
    goto L53(c49);
  L298():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L299() else L300();
  L310():
    dispersion5 = ld dispersion;
    check L312() else D90();
  L311():
    r188 = dyn base18(<sym dispersion>);
    goto L60(r188);
  L353():
    p37 = prom<V +>{
      test13 = ld test;
      test14 = force? test13;
      checkMissing(test14);
      return test14;
    };
    r214 = dyn isFALSE1(p37);
    check L354() else D105();
  D56():
    deopt 207 [i59, r102];
  D90():
    deopt 364 [dispersion5];
  D105():
    deopt 423 [r214];
  L55(r181):
    c51 = `as.logical`(r181);
    if c51 then L303() else L56();
  L61():
    goto L62();
  L62():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L321() else L322();
  L210(i63, dx31):
    attr = ldf attr in base;
    r97 = dyn attr(dx31, "intercept");
    check L214() else D54();
  L211():
    dr30 = tryDispatchBuiltin.1("$", m14);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L213() else L212(i56, dr30);
  L212(i61, m16):
    r96 = `$`(m16, <sym terms>);
    goto L210(i61, r96);
  L216():
    st zz = r102;
    zz = ld zz;
    check L217() else D57();
  L299():
    bigdispersion2 = ld bigdispersion;
    check L301() else D86();
  L300():
    r180 = dyn base17(<sym bigdispersion>);
    goto L55(r180);
  L312():
    dispersion6 = force? dispersion5;
    checkMissing(dispersion6);
    c53 = `==`(dispersion6, NULL);
    goto L60(c53);
  L313():
    summary = ldf summary;
    check L314() else D91();
  L354():
    r215 = `!`(r214);
    c68 = `as.logical`(r215);
    if c68 then L355() else L74();
  D54():
    deopt 202 [i63, r97];
  D57():
    deopt 209 [i59, zz];
  D86():
    deopt 345 [bigdispersion2];
  D91():
    deopt 368 [];
  L56():
    goto L57("Chisq");
  L57(r183):
    goto L52(r183);
  L63(r196):
    r197 = `!`(r196);
    c57 = `as.logical`(r197);
    if c57 then L324() else L64();
  L74():
    goto L81();
  L81():
    structure = ldf structure;
    check L385() else D118();
  L213():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L210(i56, dx30);
  L214():
    goto L33(i63, r97);
  L217():
    zz1 = force? zz;
    checkMissing(zz1);
    c30 = `is.object`(zz1);
    if c30 then L219() else L220(i59, zz1);
  L301():
    bigdispersion3 = force? bigdispersion2;
    checkMissing(bigdispersion3);
    is_na = ldf `is.na` in base;
    r182 = dyn is_na(bigdispersion3);
    check L302() else D87();
  L303():
    goto L57("F");
  L314():
    p34 = prom<V +>{
      bigmodel4 = ld bigmodel;
      bigmodel5 = force? bigmodel4;
      checkMissing(bigmodel5);
      return bigmodel5;
    };
    r191 = dyn summary(p34);
    check L315() else D92();
  L321():
    bigdispersion4 = ld bigdispersion;
    check L323() else D93();
  L322():
    r195 = dyn base19(<sym bigdispersion>);
    goto L63(r195);
  L355():
    isTRUE3 = ldf isTRUE;
    check L356() else D106();
  D87():
    deopt 348 [r182];
  D92():
    deopt 370 [r191];
  D93():
    deopt 376 [bigdispersion4];
  D106():
    deopt 426 [];
  D118():
    deopt 479 [];
  L64():
    isTRUE1 = ldf isTRUE;
    check L337() else D97();
  L68(dx64):
    st `df.dispersion` = dx64;
    isTRUE2 = ldf isTRUE;
    check L345() else D101();
  L218(i67, dx33):
    zz4 = ld zz;
    check L222() else D58();
  L219():
    dr32 = tryDispatchBuiltin.1("$", zz1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L221() else L220(i59, dr32);
  L220(i65, zz3):
    r103 = `$`(zz3, <sym null.deviance>);
    goto L218(i65, r103);
  L302():
    goto L55(r182);
  L315():
    c55 = `is.object`(r191);
    if c55 then L317() else L318(r191);
  L323():
    bigdispersion5 = force? bigdispersion4;
    checkMissing(bigdispersion5);
    c56 = `==`(bigdispersion5, NULL);
    goto L63(c56);
  L324():
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L325() else L326();
  L356():
    p38 = prom<V +>{
      test15 = ld test;
      test16 = force? test15;
      checkMissing(test16);
      r216 = `==`(test16, "F");
      return r216;
    };
    r218 = dyn isTRUE3(p38);
    check L357() else D107();
  L385():
    p46 = prom<V +>{
      table4 = ld table;
      table5 = force? table4;
      checkMissing(table5);
      return table5;
    };
    p47 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r244):
      return r244;
    L1():
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      topnote = ld topnote;
      topnote1 = force? topnote;
      checkMissing(topnote1);
      c86 = ldf c in base;
      r245 = dyn c86(title1, topnote1);
      goto L0(r245);
    L2():
      r243 = dyn base23(<sym title>, <sym topnote>);
      goto L0(r243);
    };
    p48 = prom<V +>{
      sym24 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r248):
      return r248;
    L1():
      c87 = ldf c in base;
      r249 = dyn c87("anova", "data.frame");
      goto L0(r249);
    L2():
      r247 = dyn base24("anova", "data.frame");
      goto L0(r247);
    };
    r251 = dyn structure[, heading, class](p46, p47, p48);
    check L386() else D119();
  D58():
    deopt 211 [i67, dx33, zz4];
  D97():
    deopt 392 [];
  D101():
    deopt 405 [];
  D107():
    deopt 428 [r218];
  D119():
    deopt 485 [r251];
  L65(r199):
    c58 = `as.logical`(r199);
    if c58 then L329() else L66();
  L221():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L218(i59, dx32);
  L222():
    zz5 = force? zz4;
    checkMissing(zz5);
    c31 = `is.object`(zz5);
    if c31 then L224() else L225(i67, dx33, zz5);
  L316(dx59):
    st dispersion = dx59;
    goto L62();
  L317():
    dr52 = tryDispatchBuiltin.1("$", r191);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L319() else L318(dr52);
  L318(r193):
    r194 = `$`(r193, <sym dispersion>);
    goto L316(r194);
  L325():
    bigdispersion6 = ld bigdispersion;
    check L327() else D94();
  L326():
    r198 = dyn base20(<sym bigdispersion>);
    goto L65(r198);
  L337():
    p35 = prom<V +>{
      dispersion7 = ld dispersion;
      dispersion8 = force? dispersion7;
      checkMissing(dispersion8);
      r202 = `==`(dispersion8, 1.0);
      return r202;
    };
    r204 = dyn isTRUE1(p35);
    check L338() else D98();
  L345():
    p36 = prom<V +>{
      test11 = ld test;
      test12 = force? test11;
      checkMissing(test12);
      r207 = `==`(test12, "F");
      return r207;
    };
    r209 = dyn isTRUE2(p36);
    check L346() else D102();
  L357():
    c69 = `as.logical`(r218);
    if c69 then L358() else L75(c69);
  L386():
    popenv;
    return r251;
  D94():
    deopt 382 [bigdispersion6];
  D98():
    deopt 394 [r204];
  D102():
    deopt 407 [r209];
  L66():
    goto L67(+Infinity);
  L67(dx63):
    goto L68(dx63);
  L75(c71):
    c75 = `as.logical`(c71);
    if c75 then L361() else L76();
  L223(i71, dx38, dx39):
    r105 = `-`(dx38, dx39);
    l4 = ld score;
    c32 = `is.object`(l4);
    if c32 then L227() else L228(i71, r105, l4);
  L224():
    dr34 = tryDispatchBuiltin.1("$", zz5);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L226() else L225(i67, dx33, dr34);
  L225(i69, dx35, zz7):
    r104 = `$`(zz7, <sym deviance>);
    goto L223(i69, dx35, r104);
  L319():
    dx58 = getTryDispatchBuiltinValue(dr52);
    goto L316(dx58);
  L327():
    bigdispersion7 = force? bigdispersion6;
    checkMissing(bigdispersion7);
    is_na1 = ldf `is.na` in base;
    r200 = dyn is_na1(bigdispersion7);
    check L328() else D95();
  L329():
    bigmodel6 = ld bigmodel;
    check L330() else D96();
  L338():
    c60 = `as.logical`(r204);
    if c60 then L339() else L69();
  L346():
    c61 = `as.logical`(r209);
    if c61 then L347() else L70(c61);
  L358():
    df_dispersion2 = ld `df.dispersion`;
    check L359() else D108();
  D95():
    deopt 385 [r200];
  D96():
    deopt 386 [bigmodel6];
  D108():
    deopt 429 [c69, df_dispersion2];
  L34(i75, dx41):
    st score = dx41;
    df8 = ld df;
    check L231() else D60();
  L69():
    sym21 = ldf min;
    base21 = ldf min in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L341() else L342();
  L70(c63):
    c67 = `as.logical`(c63);
    if c67 then L350() else L71();
  L76():
    goto L80();
  L80():
    stat_anova = ldf `stat.anova`;
    check L382() else D116();
  L226():
    dx37 = getTryDispatchBuiltinValue(dr34);
    goto L223(i67, dx33, dx37);
  L227():
    dr36 = tryDispatchBuiltin.0("[<-", l4, r105);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L229() else L228(i71, r105, dr36);
  L228(i73, r107, l6):
    i76 = ld i;
    check L230() else D59();
  L328():
    goto L65(r200);
  L330():
    bigmodel7 = force? bigmodel6;
    checkMissing(bigmodel7);
    c59 = `is.object`(bigmodel7);
    if c59 then L332() else L333(bigmodel7);
  L339():
    goto L68(+Infinity);
  L347():
    df_dispersion = ld `df.dispersion`;
    check L348() else D103();
  L359():
    df_dispersion3 = force? df_dispersion2;
    checkMissing(df_dispersion3);
    r219 = `==`(df_dispersion3, +Infinity);
    c72 = `as.logical`(r219);
    c73 = `&&`(c69, c72);
    goto L75(c73);
  L361():
    bigmodel10 = ld bigmodel;
    check L362() else D109();
  D59():
    deopt 216 [i73, r107, l6, r105, i76];
  D60():
    deopt 222 [i75, df8];
  D103():
    deopt 408 [c61, df_dispersion];
  D109():
    deopt 434 [bigmodel10];
  D116():
    deopt 463 [];
  L71():
    goto L72(NULL);
  L72(r211):
    goto L73();
  L229():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L34(i71, dx40);
  L230():
    i77 = force? i76;
    checkMissing(i77);
    r110 = `+`(i77, 1.0);
    ___1 = ldf `[<-` in base;
    r111 = dyn ___1(l6, r105, r110);
    goto L34(i73, r111);
  L231():
    df9 = force? df8;
    checkMissing(df9);
    c33 = `is.object`(df9);
    if c33 then L232() else L233(i75, df9);
  L331(dx62):
    goto L67(dx62);
  L332():
    dr54 = tryDispatchBuiltin.1("$", bigmodel7);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L334() else L333(dr54);
  L333(bigmodel9):
    r201 = `$`(bigmodel9, <sym df.residual>);
    goto L331(r201);
  L341():
    resdf8 = ld resdf;
    check L343() else D99();
  L342():
    r205 = dyn base21(<sym resdf>);
    goto L68(r205);
  L348():
    df_dispersion1 = force? df_dispersion;
    checkMissing(df_dispersion1);
    r210 = `==`(df_dispersion1, 0.0);
    c64 = `as.logical`(r210);
    c65 = `&&`(c61, c64);
    goto L70(c65);
  L350():
    st test = FALSE;
    goto L72(FALSE);
  L362():
    bigmodel11 = force? bigmodel10;
    checkMissing(bigmodel11);
    c76 = `is.object`(bigmodel11);
    if c76 then L364() else L365(bigmodel11);
  L382():
    p41 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    p42 = prom<V +>{
      test17 = ld test;
      test18 = force? test17;
      checkMissing(test18);
      return test18;
    };
    p43 = prom<V +>{
      dispersion9 = ld dispersion;
      dispersion10 = force? dispersion9;
      checkMissing(dispersion10);
      return dispersion10;
    };
    p44 = prom<V +>{
      df_dispersion4 = ld `df.dispersion`;
      df_dispersion5 = force? df_dispersion4;
      checkMissing(df_dispersion5);
      return df_dispersion5;
    };
    p45 = prom<V +>{
      sym22 = ldf length;
      base22 = ldf length in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r236):
      return r236;
    L1():
      bigmodel14 = ld bigmodel;
      bigmodel15 = force? bigmodel14;
      checkMissing(bigmodel15);
      c85 = `is.object`(bigmodel15);
      if c85 then L4() else L5(bigmodel15);
    L2():
      r235 = dyn base22(<lang `$`(bigmodel, residuals)>);
      goto L0(r235);
    L3(dx72):
      length1 = ldf length in base;
      r238 = dyn length1(dx72);
      goto L0(r238);
    L4():
      dr60 = tryDispatchBuiltin.1("$", bigmodel15);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L6() else L5(dr60);
    L5(bigmodel17):
      r237 = `$`(bigmodel17, <sym residuals>);
      goto L3(r237);
    L6():
      dx71 = getTryDispatchBuiltinValue(dr60);
      goto L3(dx71);
    };
    r240 = dyn stat_anova[table, test, scale, `df.scale`, n](p41, p42, p43, p44, p45);
    check L383() else D117();
  D99():
    deopt 399 [resdf8];
  D117():
    deopt 474 [r240];
  L35(i81, dx43):
    r113 = `<`(dx43, 0.0);
    c34 = `as.logical`(r113);
    if c34 then L236() else L36();
  L232():
    dr38 = tryDispatchBuiltin.1("[", df9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L234() else L233(i75, dr38);
  L233(i79, df11):
    i82 = ld i;
    check L235() else D61();
  L334():
    dx61 = getTryDispatchBuiltinValue(dr54);
    goto L331(dx61);
  L343():
    resdf9 = force? resdf8;
    checkMissing(resdf9);
    min = ldf min in base;
    r206 = dyn min(resdf9);
    check L344() else D100();
  L363(dx66):
    c77 = `is.object`(dx66);
    if c77 then L368() else L369(dx66);
  L364():
    dr56 = tryDispatchBuiltin.1("$", bigmodel11);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L366() else L365(dr56);
  L365(bigmodel13):
    r220 = `$`(bigmodel13, <sym family>);
    goto L363(r220);
  L383():
    st table = r240;
    goto L81();
  D61():
    deopt 224 [i79, df11, i82];
  D100():
    deopt 402 [r206];
  L36():
    goto L39(i81);
  L39(i98):
    goto L24(i98);
  L234():
    dx42 = getTryDispatchBuiltinValue(dr38);
    goto L35(i75, dx42);
  L235():
    i83 = force? i82;
    __11 = ldf `[` in base;
    r112 = dyn __11(df11, i83);
    goto L35(i79, r112);
  L236():
    score = ld score;
    check L237() else D62();
  L344():
    goto L68(r206);
  L366():
    dx65 = getTryDispatchBuiltinValue(dr56);
    goto L363(dx65);
  L367(dx70):
    st fam = dx70;
    fam = ld fam;
    check L371() else D110();
  L368():
    dr58 = tryDispatchBuiltin.1("$", dx66);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L370() else L369(dr58);
  L369(dx68):
    r221 = `$`(dx68, <sym family>);
    goto L367(r221);
  D62():
    deopt 229 [i81, score];
  D110():
    deopt 439 [fam];
  L237():
    score1 = force? score;
    checkMissing(score1);
    c35 = `is.object`(score1);
    if c35 then L238() else L239(i81, score1);
  L370():
    dx69 = getTryDispatchBuiltinValue(dr58);
    goto L367(dx69);
  L371():
    fam1 = force? fam;
    checkMissing(fam1);
    r222 = `==`(fam1, "binomial");
    c78 = `as.logical`(r222);
    if c78 then L77(c78) else L372();
  L37(i89, dx45):
    r116 = `-`(<missing>, dx45);
    l7 = ld score;
    c36 = `is.object`(l7);
    if c36 then L242() else L243(i89, r116, l7);
  L77(c79):
    c84 = `as.logical`(c79);
    if c84 then L375() else L78();
  L238():
    dr40 = tryDispatchBuiltin.1("[", score1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L240() else L239(i81, dr40);
  L239(i87, score3):
    i90 = ld i;
    check L241() else D63();
  L372():
    fam2 = ld fam;
    check L373() else D111();
  D63():
    deopt 231 [i87, score3, i90];
  D111():
    deopt 443 [c78, fam2];
  L38(i95, r120, dx47):
    st score = dx47;
    goto L39(i95);
  L78():
    warning2 = ldf warning;
    check L379() else D114();
  L79(r228):
    goto L80();
  L240():
    dx44 = getTryDispatchBuiltinValue(dr40);
    goto L37(i81, dx44);
  L241():
    i91 = force? i90;
    checkMissing(i91);
    r114 = `+`(i91, 1.0);
    __12 = ldf `[` in base;
    r115 = dyn __12(score3, r114);
    goto L37(i87, r115);
  L242():
    dr42 = tryDispatchBuiltin.0("[<-", l7, r116);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L244() else L243(i89, r116, dr42);
  L243(i93, r118, l9):
    i96 = ld i;
    check L245() else D64();
  L373():
    fam3 = force? fam2;
    checkMissing(fam3);
    r223 = `==`(fam3, "poisson");
    c81 = `as.logical`(r223);
    c82 = `||`(c78, c81);
    goto L77(c82);
  L375():
    warning1 = ldf warning;
    check L376() else D112();
  D64():
    deopt 238 [i93, r118, l9, r116, i96];
  D112():
    deopt 449 [];
  D114():
    deopt 457 [];
  L244():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L38(i89, r116, dx46);
  L245():
    i97 = force? i96;
    checkMissing(i97);
    r121 = `+`(i97, 1.0);
    ___2 = ldf `[<-` in base;
    r122 = dyn ___2(l9, r116, r121);
    goto L38(i93, r118, r122);
  L376():
    p40 = prom<V +>{
      gettextf1 = ldf gettextf;
      p39 = prom<V +>{
        fam4 = ld fam;
        fam5 = force? fam4;
        checkMissing(fam5);
        return fam5;
      };
      r225 = dyn gettextf1("using F test with a '%s' family is inappropriate", p39);
      return r225;
    };
    r227 = dyn warning1[, domain, `call.`](p40, NA_LGL, FALSE);
    check L377() else D113();
  L379():
    r229 = dyn warning2("using F test with a fixed dispersion is inappropriate");
    check L380() else D115();
  D113():
    deopt 455 [r227];
  D115():
    deopt 459 [r229];
  L377():
    goto L79(r227);
  L380():
    goto L79(r229);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse:cls, reg formula:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    deparse = ldf deparse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      formula = ldf formula;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn formula(p);
      c = `is.object`(r1);
      if c then L1() else L2(r1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r3):
      __ = ldf `[[` in base;
      r4 = dyn __(r3, 2);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn deparse(p1);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}