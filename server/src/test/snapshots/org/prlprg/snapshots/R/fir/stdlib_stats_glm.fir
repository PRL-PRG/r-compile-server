fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1562623109;
    st glm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1562623109(formula, family, data, weights, subset, `na.action`, start, etastart, mustart, offset, control, model, method, x, y, `singular.ok`, contrasts, `...`) {
  (reg formula:*, reg family:*, reg data:*, reg weights:*, reg subset:*, reg na_action:*, reg start:*, reg etastart:*, reg mustart:*, reg offset:*, reg control:*, reg model:*, reg method:*, reg x:*, reg y:*, reg singular_ok:*, reg contrasts:*, reg ddd:dots) -+> V { var formula:*, var family:*, reg family_isMissing:L, reg family_orDefault:*, reg gaussian:*, reg gaussian1:V, reg p:p(V +), var data:*, var weights:*, var subset:*, var `na.action`:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, var etastart:*, var mustart:*, var offset:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:*, reg r3:V, reg p1:p(V +), var model:*, reg model_isMissing:L, reg model_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var x:*, reg x_isMissing:L, reg x_orDefault:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var `singular.ok`:*, reg singular_ok_isMissing:L, reg singular_ok_orDefault:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var `...`:dots?, reg match_call:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg family1:*, reg family2:V, reg c:L, reg c1:L, reg get:cls, reg family3:*, reg family4:V, reg p2:p(V +), reg parent_frame:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg family5:*, reg family6:V, reg is_function:cls, reg r15:V, reg c2:L, reg family7:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg family8:*, reg family9:V, reg c3:L, reg family11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg c4:V, reg c5:L, reg print:cls, reg family12:*, reg family13:V, reg p4:p(V +), reg r22:V, reg stop:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c6:L, reg environment:cls, reg formula1:*, reg formula2:V, reg p5:p(V +), reg r29:V, reg match_call1:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg c7:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg mf:*, reg mf1:V, reg names:cls, reg r39:V, reg match:cls, reg r40:V, reg mf2:*, reg mf3:V, reg c8:L, reg mf5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg mf8:V, reg r42:V, reg m:*, reg m1:V, reg c9:cls, reg r43:V, reg __:cls, reg r44:V, reg l:*, reg c10:L, reg r46:L, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg quote:cls, reg r52:V, reg l3:*, reg c11:L, reg r54:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r57:V, reg eval:cls, reg mf9:*, reg mf10:V, reg p6:p(V +), reg parent_frame1:cls, reg r59:V, reg p7:p(V +), reg r61:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg method1:*, reg method2:V, reg identical:cls, reg r64:V, reg c12:L, reg mf11:*, reg mf12:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg method3:*, reg method4:V, reg c13:L, reg r69:V, reg c14:L, reg c16:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg c19:L, reg r71:V, reg method5:*, reg method6:V, reg is_function1:cls, reg r72:V, reg r73:V, reg c20:L, reg c21:V, reg c23:L, reg stop1:cls, reg r74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg method7:*, reg method8:V, reg identical1:cls, reg r78:V, reg c24:L, reg do_call:cls, reg control1:*, reg control2:V, reg p8:p(V +), reg r80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg r83:V, reg mf13:*, reg mf14:V, reg attr:cls, reg r84:V, reg model_response:cls, reg mf15:*, reg mf16:V, reg p9:p(V +), reg r86:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r87:V, reg r88:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg Y:*, reg Y1:V, reg dim:cls, reg r91:V, reg length:cls, reg r92:V, reg r93:V, reg c25:L, reg rownames:cls, reg Y2:*, reg Y3:V, reg p10:p(V +), reg r95:V, reg l6:*, reg dim__:cls, reg r96:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r97:V, reg r98:V, reg nm:*, reg nm1:V, reg c26:V, reg r99:V, reg c27:L, reg nm2:*, reg nm3:V, reg l7:*, reg names__:cls, reg r100:V, reg nm4:V, reg is_empty_model:cls, reg mt:*, reg mt1:V, reg p11:p(V +), reg r102:V, reg r103:V, reg c28:L, reg model_matrix:cls, reg mt2:*, reg mt3:V, reg p12:p(V +), reg mf17:*, reg mf18:V, reg p13:p(V +), reg contrasts1:*, reg contrasts2:V, reg p14:p(V +), reg r107:V, reg r108:V, reg matrix:cls, reg NROW:cls, reg Y4:*, reg Y5:V, reg p15:p(V +), reg r110:V, reg p16:p(V +), reg r112:V, reg as_vector:cls, reg model_weights:cls, reg mf19:*, reg mf20:V, reg p17:p(V +), reg r114:V, reg p18:p(V +), reg r116:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r117:V, reg r118:V, reg weights1:*, reg weights2:V, reg c29:V, reg r119:V, reg c30:L, reg c32:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r120:V, reg c35:L, reg r121:V, reg weights3:*, reg weights4:V, reg is_numeric:cls, reg r122:V, reg r123:V, reg c36:L, reg c37:V, reg c39:L, reg stop2:cls, reg r124:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r126:V, reg r127:V, reg weights5:*, reg weights6:V, reg c40:V, reg r128:V, reg c41:L, reg c43:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r129:V, reg c46:L, reg r130:V, reg weights7:*, reg weights8:V, reg r131:V, reg any:cls, reg r132:V, reg c47:L, reg c48:V, reg c50:L, reg stop3:cls, reg r133:V, reg as_vector1:cls, reg model_offset:cls, reg mf21:*, reg mf22:V, reg p19:p(V +), reg r136:V, reg p20:p(V +), reg r138:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r139:V, reg r140:V, reg offset1:*, reg offset2:V, reg c51:V, reg r141:V, reg c52:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r142:V, reg r143:V, reg offset3:*, reg offset4:V, reg length1:cls, reg r144:V, reg NROW1:cls, reg Y6:*, reg Y7:V, reg p21:p(V +), reg r146:V, reg r147:V, reg c53:L, reg stop4:cls, reg gettextf:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r148:V, reg r149:V, reg offset5:*, reg offset6:V, reg length2:cls, reg r150:V, reg p22:p(V +), reg NROW2:cls, reg Y8:*, reg Y9:V, reg p23:p(V +), reg r153:V, reg p24:p(V +), reg r155:V, reg p25:p(V +), reg r157:V, reg r158:V, reg model_extract:cls, reg mf23:*, reg mf24:V, reg p26:p(V +), reg r161:V, reg model_extract1:cls, reg mf25:*, reg mf26:V, reg p27:p(V +), reg r163:V, reg eval1:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r164:V, reg r165:V, reg call:cls, reg r166:V, reg p28:p(V +), reg r168:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r169:V, reg r170:V, reg offset7:*, reg offset8:V, reg length3:cls, reg r171:V, reg c54:L, reg c56:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r172:V, reg c59:L, reg r173:V, reg mt4:*, reg mt5:V, reg attr1:cls, reg r174:V, reg r175:V, reg c60:L, reg c61:V, reg c63:L, reg eval2:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r176:V, reg r177:V, reg call1:cls, reg r178:V, reg p29:p(V +), reg r180:V, reg fit2:*, reg fit3:V, reg c64:L, reg fit5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r181:V, reg r182:V, reg c65:L, reg warning:cls, reg r183:V, reg fit6:*, reg fit7:V, reg c66:L, reg fit9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r185:V, reg l8:*, reg c67:L, reg dx13:V, reg l10:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg r186:V, reg model1:*, reg model2:V, reg c68:L, reg mf27:*, reg mf28:V, reg l11:*, reg c69:L, reg mf30:V, reg l13:*, reg dr14:V, reg dc7:L, reg dx19:V, reg mf32:V, reg dx20:V, reg r187:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r188:V, reg r189:V, reg mf34:*, reg mf35:V, reg attr2:cls, reg r190:V, reg l14:*, reg c70:L, reg r192:V, reg l16:*, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg r195:V, reg x1:*, reg x2:V, reg c71:L, reg X:*, reg X1:V, reg l17:*, reg c72:L, reg X3:V, reg l19:*, reg dr18:V, reg dc9:L, reg dx23:V, reg X5:V, reg dx24:V, reg r196:V, reg y1:*, reg y2:V, reg r197:V, reg c73:L, reg l20:*, reg c74:L, reg r199:dots, reg l22:*, reg dr20:V, reg dc10:L, reg dx25:V, reg r201:dots, reg dx26:V, reg r202:V, reg structure:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r204:V, reg r205:V, reg fit10:*, reg fit11:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r206:V, reg r207:V, reg cal:*, reg cal1:V, reg formula3:*, reg formula4:V, reg mt6:*, reg mt7:V, reg data1:*, reg data2:V, reg offset9:*, reg offset10:V, reg control3:*, reg control4:V, reg method9:*, reg method10:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r208:V, reg r209:V, reg X7:*, reg X8:V, reg attr3:cls, reg r210:V, reg _getXlevels:cls, reg mt8:*, reg mt9:V, reg p30:p(V +), reg mf36:*, reg mf37:V, reg p31:p(V +), reg r213:V, reg list1:cls, reg r214:V, reg c75:cls, reg r215:V, reg p32:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r217:V, reg r218:V, reg fit12:*, reg fit13:V, reg c76:L, reg fit15:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg r219:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r220:V, reg r221:V, reg c77:cls, reg r222:V, reg c78:cls, reg r223:V, reg p33:p(V +), reg r225:V |
    mkenv;
    st formula = formula;
    family_isMissing = missing.0(family);
    if family_isMissing then L0() else L1(family);
  L0():
    p = prom<V +>{
      gaussian = ld gaussian;
      gaussian1 = force? gaussian;
      checkMissing(gaussian1);
      return gaussian1;
    };
    goto L1(p);
  L1(family_orDefault):
    st family = family_orDefault;
    st data = data;
    st weights = weights;
    st subset = subset;
    st `na.action` = na_action;
    start_isMissing = missing.0(start);
    if start_isMissing then L2(NULL) else L2(start);
  L2(start_orDefault):
    st start = start_orDefault;
    st etastart = etastart;
    st mustart = mustart;
    st offset = offset;
    control_isMissing = missing.0(control);
    if control_isMissing then L3() else L4(control);
  L3():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r3 = dyn list[`...`](ddd1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym ...>);
      goto L0(r1);
    };
    goto L4(p1);
  L4(control_orDefault):
    st control = control_orDefault;
    model_isMissing = missing.0(model);
    if model_isMissing then L5(TRUE) else L5(model);
  L5(model_orDefault):
    st model = model_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L6("glm.fit") else L6(method);
  L6(method_orDefault):
    st method = method_orDefault;
    x_isMissing = missing.0(x);
    if x_isMissing then L7(FALSE) else L7(x);
  L7(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L8(TRUE) else L8(y);
  L8(y_orDefault):
    st y = y_orDefault;
    singular_ok_isMissing = missing.0(singular_ok);
    if singular_ok_isMissing then L9(TRUE) else L9(singular_ok);
  L9(singular_ok_orDefault):
    st `singular.ok` = singular_ok_orDefault;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L10(NULL) else L10(contrasts);
  L10(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    st `...` = ddd;
    match_call = ldf `match.call`;
    check L81() else D0();
  D0():
    deopt 1 [];
  L81():
    r5 = dyn match_call();
    check L82() else D1();
  D1():
    deopt 2 [r5];
  L82():
    st cal = r5;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L83() else L84();
  L11(r7):
    c1 = `as.logical`(r7);
    if c1 then L86() else L12();
  L83():
    family1 = ld family;
    check L85() else D2();
  L84():
    r6 = dyn base1(<sym family>);
    goto L11(r6);
  D2():
    deopt 5 [family1];
  L12():
    goto L13();
  L13():
    sym2 = ldf `is.function`;
    base2 = ldf `is.function` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L90() else L91();
  L85():
    family2 = force? family1;
    checkMissing(family2);
    c = `is.character`(family2);
    goto L11(c);
  L86():
    get = ldf get;
    check L87() else D3();
  D3():
    deopt 9 [];
  L14(r14):
    c2 = `as.logical`(r14);
    if c2 then L94() else L15();
  L87():
    p2 = prom<V +>{
      family3 = ld family;
      family4 = force? family3;
      checkMissing(family4);
      return family4;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r9 = dyn parent_frame();
      return r9;
    };
    r11 = dyn get[, mode, envir](p2, "function", p3);
    check L88() else D4();
  L90():
    family5 = ld family;
    check L92() else D5();
  L91():
    r13 = dyn base2(<sym family>);
    goto L14(r13);
  D4():
    deopt 15 [r11];
  D5():
    deopt 21 [family5];
  L15():
    goto L16();
  L16():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L88():
    st family = r11;
    goto L13();
  L92():
    family6 = force? family5;
    checkMissing(family6);
    is_function = ldf `is.function` in base;
    r15 = dyn is_function(family6);
    check L93() else D6();
  L94():
    family7 = ldf family;
    check L95() else D7();
  D6():
    deopt 24 [r15];
  D7():
    deopt 26 [];
  L17(r19):
    c5 = `as.logical`(r19);
    if c5 then L105() else L18();
  L93():
    goto L14(r15);
  L95():
    r16 = dyn family7();
    check L96() else D8();
  L98():
    family8 = ld family;
    check L100() else D9();
  L99():
    r18 = dyn base3(<lang `$`(family, family)>);
    goto L17(r18);
  D8():
    deopt 27 [r16];
  D9():
    deopt 32 [family8];
  L18():
    goto L19();
  L19():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L111() else L112();
  L96():
    st family = r16;
    goto L16();
  L100():
    family9 = force? family8;
    checkMissing(family9);
    c3 = `is.object`(family9);
    if c3 then L102() else L103(family9);
  L105():
    print = ldf print;
    check L106() else D10();
  D10():
    deopt 37 [];
  L20(r26):
    c6 = `as.logical`(r26);
    if c6 then L113() else L21();
  L101(dx1):
    c4 = `==`(dx1, NULL);
    goto L17(c4);
  L102():
    dr = tryDispatchBuiltin.1("$", family9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L104() else L103(dr);
  L103(family11):
    r20 = `$`(family11, <sym family>);
    goto L101(r20);
  L106():
    p4 = prom<V +>{
      family12 = ld family;
      family13 = force? family12;
      checkMissing(family13);
      return family13;
    };
    r22 = dyn print(p4);
    check L107() else D11();
  L111():
    missing = ldf missing in base;
    r27 = dyn missing(<sym data>);
    goto L20(r27);
  L112():
    r25 = dyn base4(<sym data>);
    goto L20(r25);
  D11():
    deopt 39 [r22];
  L21():
    goto L22();
  L22():
    match_call1 = ldf `match.call`;
    check L117() else D16();
  L104():
    dx = getTryDispatchBuiltinValue(dr);
    goto L101(dx);
  L107():
    stop = ldf stop;
    check L108() else D12();
  L113():
    environment = ldf environment;
    check L114() else D14();
  D12():
    deopt 41 [];
  D14():
    deopt 50 [];
  D16():
    deopt 57 [];
  L108():
    r23 = dyn stop("'family' not recognized");
    check L109() else D13();
  L114():
    p5 = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    r29 = dyn environment(p5);
    check L115() else D15();
  L117():
    r31 = dyn match_call1[`expand.dots`](FALSE);
    check L118() else D17();
  D13():
    deopt 43 [r23];
  D15():
    deopt 52 [r29];
  D17():
    deopt 60 [r31];
  L109():
    goto L19();
  L115():
    st data = r29;
    goto L22();
  L118():
    st mf = r31;
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L119() else L120();
  L23(r33):
    st m = r33;
    mf2 = ld mf;
    check L129() else D22();
  L119():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L121() else L122();
  L120():
    r32 = dyn base5(<lang c("formula", "data", "subset", "weights", "na.action", "etastart", "mustart", "offset")>, <lang names(mf)>, 0);
    goto L23(r32);
  D22():
    deopt 87 [mf2];
  L24(r35):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L124() else L125();
  L121():
    c7 = ldf c in base;
    r36 = dyn c7("formula", "data", "subset", "weights", "na.action", "etastart", "mustart", "offset");
    check L123() else D18();
  L122():
    r34 = dyn base6("formula", "data", "subset", "weights", "na.action", "etastart", "mustart", "offset");
    goto L24(r34);
  L129():
    mf3 = force? mf2;
    checkMissing(mf3);
    c8 = `is.object`(mf3);
    if c8 then L130() else L131(mf3);
  D18():
    deopt 75 [r36];
  L25(r38):
    match = ldf match in base;
    r40 = dyn match(r35, r38, 0, NULL);
    check L128() else D21();
  L26(dx3):
    st mf = dx3;
    l = ld mf;
    c10 = `is.object`(l);
    if c10 then L138() else L139(TRUE, l);
  L123():
    goto L24(r36);
  L124():
    mf = ld mf;
    check L126() else D19();
  L125():
    r37 = dyn base7(<sym mf>);
    goto L25(r37);
  L130():
    dr2 = tryDispatchBuiltin.1("[", mf3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L132() else L131(dr2);
  L131(mf5):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L133() else L134();
  D19():
    deopt 78 [mf];
  D21():
    deopt 85 [r40];
  L27(mf8, r42):
    __ = ldf `[` in base;
    r44 = dyn __(mf8, r42);
    goto L26(r44);
  L126():
    mf1 = force? mf;
    checkMissing(mf1);
    names = ldf names in base;
    r39 = dyn names(mf1);
    check L127() else D20();
  L128():
    goto L23(r40);
  L132():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L133():
    m = ld m;
    check L135() else D23();
  L134():
    r41 = dyn base8(1, <sym m>);
    goto L27(mf5, r41);
  L137(dx5):
    st mf = dx5;
    sym9 = ldf quote;
    base9 = ldf quote in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L141() else L142();
  L138():
    dr4 = tryDispatchBuiltin.0("$<-", l, TRUE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(TRUE, dr4);
  L139(r46, l2):
    r49 = `$<-`(l2, <sym drop.unused.levels>, TRUE);
    goto L137(r49);
  D20():
    deopt 81 [r39];
  D23():
    deopt 92 [mf5, m];
  L28(r51):
    l3 = ld mf;
    c11 = `is.object`(l3);
    if c11 then L143() else L144(r51, l3);
  L127():
    goto L25(r39);
  L135():
    m1 = force? m;
    checkMissing(m1);
    c9 = ldf c in base;
    r43 = dyn c9(1, m1);
    check L136() else D24();
  L140():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L137(dx4);
  L141():
    quote = ldf quote in base;
    r52 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L28(r52);
  L142():
    r50 = dyn base9(<lang `::`(stats, model.frame)>);
    goto L28(r50);
  D24():
    deopt 95 [mf5, r43];
  L29(dx7):
    st mf = dx7;
    eval = ldf eval;
    check L146() else D25();
  L136():
    goto L27(mf5, r43);
  L143():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r51);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L145() else L144(r51, dr6);
  L144(r54, l5):
    ____ = ldf `[[<-` in base;
    r57 = dyn ____(l5, r51, 1);
    goto L29(r57);
  D25():
    deopt 112 [];
  L145():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L29(dx6);
  L146():
    p6 = prom<V +>{
      mf9 = ld mf;
      mf10 = force? mf9;
      checkMissing(mf10);
      return mf10;
    };
    p7 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r59 = dyn parent_frame1();
      return r59;
    };
    r61 = dyn eval(p6, p7);
    check L147() else D26();
  D26():
    deopt 115 [r61];
  L147():
    st mf = r61;
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L148() else L149();
  L30(r63):
    c12 = `as.logical`(r63);
    if c12 then L152() else L31();
  L148():
    method1 = ld method;
    check L150() else D27();
  L149():
    r62 = dyn base10(<sym method>, "model.frame");
    goto L30(r62);
  D27():
    deopt 119 [method1];
  L31():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L150():
    method2 = force? method1;
    checkMissing(method2);
    identical = ldf identical in base;
    r64 = dyn identical(method2, "model.frame", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L151() else D28();
  L152():
    mf11 = ld mf;
    check L153() else D29();
  D28():
    deopt 130 [r64];
  D29():
    deopt 131 [mf11];
  L33(r68):
    r69 = `!`(r68);
    c14 = `as.logical`(r69);
    if c14 then L159() else L34(c14);
  L151():
    goto L30(r64);
  L153():
    mf12 = force? mf11;
    checkMissing(mf12);
    popenv;
    return mf12;
  L156():
    method3 = ld method;
    check L158() else D30();
  L157():
    r67 = dyn base11(<sym method>);
    goto L33(r67);
  D30():
    deopt 137 [method3];
  L34(c16):
    c23 = `as.logical`(c16);
    if c23 then L165() else L36();
  L158():
    method4 = force? method3;
    checkMissing(method4);
    c13 = `is.character`(method4);
    goto L33(c13);
  L159():
    sym12 = ldf `is.function`;
    base12 = ldf `is.function` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L160() else L161();
  L35(c19, r71):
    r73 = `!`(r71);
    c20 = `as.logical`(r73);
    c21 = `&&`(c19, c20);
    goto L34(c21);
  L36():
    goto L37();
  L37():
    sym13 = ldf identical;
    base13 = ldf identical in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L169() else L170();
  L160():
    method5 = ld method;
    check L162() else D31();
  L161():
    r70 = dyn base12(<sym method>);
    goto L35(c14, r70);
  L165():
    stop1 = ldf stop;
    check L166() else D33();
  D31():
    deopt 143 [c14, method5];
  D33():
    deopt 150 [];
  L38(r77):
    c24 = `as.logical`(r77);
    if c24 then L173() else L39();
  L162():
    method6 = force? method5;
    checkMissing(method6);
    is_function1 = ldf `is.function` in base;
    r72 = dyn is_function1(method6);
    check L163() else D32();
  L166():
    r74 = dyn stop1("invalid 'method' argument");
    check L167() else D34();
  L169():
    method7 = ld method;
    check L171() else D35();
  L170():
    r76 = dyn base13(<sym method>, "glm.fit");
    goto L38(r76);
  D32():
    deopt 146 [c14, r72];
  D34():
    deopt 152 [r74];
  D35():
    deopt 157 [method7];
  L39():
    goto L40();
  L40():
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L177() else L178();
  L163():
    goto L35(c14, r72);
  L167():
    goto L37();
  L171():
    method8 = force? method7;
    checkMissing(method8);
    identical1 = ldf identical in base;
    r78 = dyn identical1(method8, "glm.fit", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L172() else D36();
  L173():
    do_call = ldf `do.call`;
    check L174() else D37();
  D36():
    deopt 168 [r78];
  D37():
    deopt 170 [];
  L41(r83):
    st mt = r83;
    model_response = ldf `model.response`;
    check L181() else D41();
  L172():
    goto L38(r78);
  L174():
    p8 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    r80 = dyn do_call("glm.control", p8);
    check L175() else D38();
  L177():
    mf13 = ld mf;
    check L179() else D39();
  L178():
    r82 = dyn base14(<sym mf>, "terms");
    goto L41(r82);
  D38():
    deopt 173 [r80];
  D39():
    deopt 179 [mf13];
  D41():
    deopt 186 [];
  L175():
    st control = r80;
    goto L40();
  L179():
    mf14 = force? mf13;
    checkMissing(mf14);
    attr = ldf attr in base;
    r84 = dyn attr(mf14, "terms");
    check L180() else D40();
  L181():
    p9 = prom<V +>{
      mf15 = ld mf;
      mf16 = force? mf15;
      checkMissing(mf16);
      return mf16;
    };
    r86 = dyn model_response(p9, "any");
    check L182() else D42();
  D40():
    deopt 183 [r84];
  D42():
    deopt 189 [r86];
  L180():
    goto L41(r84);
  L182():
    st Y = r86;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L183() else L184();
  L42(r88):
    r93 = `==`(r88, 1);
    c25 = `as.logical`(r93);
    if c25 then L190() else L44();
  L183():
    sym16 = ldf dim;
    base16 = ldf dim in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L185() else L186();
  L184():
    r87 = dyn base15(<lang dim(Y)>);
    goto L42(r87);
  L43(r90):
    length = ldf length in base;
    r92 = dyn length(r90);
    check L189() else D45();
  L44():
    goto L48();
  L48():
    is_empty_model = ldf `is.empty.model`;
    check L204() else D54();
  L185():
    Y = ld Y;
    check L187() else D43();
  L186():
    r89 = dyn base16(<sym Y>);
    goto L43(r89);
  L190():
    rownames = ldf rownames;
    check L191() else D46();
  D43():
    deopt 195 [Y];
  D45():
    deopt 200 [r92];
  D46():
    deopt 204 [];
  D54():
    deopt 232 [];
  L187():
    Y1 = force? Y;
    checkMissing(Y1);
    dim = ldf dim in base;
    r91 = dyn dim(Y1);
    check L188() else D44();
  L189():
    goto L42(r92);
  L191():
    p10 = prom<V +>{
      Y2 = ld Y;
      Y3 = force? Y2;
      checkMissing(Y3);
      return Y3;
    };
    r95 = dyn rownames(p10);
    check L192() else D47();
  L204():
    p11 = prom<V +>{
      mt = ld mt;
      mt1 = force? mt;
      checkMissing(mt1);
      return mt1;
    };
    r102 = dyn is_empty_model(p11);
    check L205() else D55();
  D44():
    deopt 198 [r91];
  D47():
    deopt 206 [r95];
  D55():
    deopt 234 [r102];
  L188():
    goto L43(r91);
  L192():
    st nm = r95;
    l6 = ld Y;
    dim__ = ldf `dim<-`;
    check L193() else D48();
  L205():
    r103 = `!`(r102);
    c28 = `as.logical`(r103);
    if c28 then L206() else L49();
  D48():
    deopt 211 [NULL, l6, NULL];
  L49():
    matrix = ldf matrix;
    check L210() else D58();
  L50(r108):
    st X = r108;
    as_vector = ldf `as.vector`;
    check L212() else D60();
  L193():
    r96 = dyn dim__(l6, NULL, NULL);
    check L194() else D49();
  L206():
    model_matrix = ldf `model.matrix`;
    check L207() else D56();
  D49():
    deopt 213 [NULL, r96];
  D56():
    deopt 237 [];
  D58():
    deopt 243 [];
  D60():
    deopt 250 [];
  L194():
    st Y = r96;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L195() else L196();
  L207():
    p12 = prom<V +>{
      mt2 = ld mt;
      mt3 = force? mt2;
      checkMissing(mt3);
      return mt3;
    };
    p13 = prom<V +>{
      mf17 = ld mf;
      mf18 = force? mf17;
      checkMissing(mf18);
      return mf18;
    };
    p14 = prom<V +>{
      contrasts1 = ld contrasts;
      contrasts2 = force? contrasts1;
      checkMissing(contrasts2);
      return contrasts2;
    };
    r107 = dyn model_matrix(p12, p13, p14);
    check L208() else D57();
  L210():
    p16 = prom<V +>{
      NROW = ldf NROW;
      p15 = prom<V +>{
        Y4 = ld Y;
        Y5 = force? Y4;
        checkMissing(Y5);
        return Y5;
      };
      r110 = dyn NROW(p15);
      return r110;
    };
    r112 = dyn matrix(<missing>, p16, 0);
    check L211() else D59();
  L212():
    p18 = prom<V +>{
      model_weights = ldf `model.weights`;
      p17 = prom<V +>{
        mf19 = ld mf;
        mf20 = force? mf19;
        checkMissing(mf20);
        return mf20;
      };
      r114 = dyn model_weights(p17);
      return r114;
    };
    r116 = dyn as_vector(p18);
    check L213() else D61();
  D57():
    deopt 241 [r107];
  D59():
    deopt 247 [r112];
  D61():
    deopt 252 [r116];
  L45(r98):
    r99 = `!`(r98);
    c27 = `as.logical`(r99);
    if c27 then L198() else L46();
  L195():
    nm = ld nm;
    check L197() else D50();
  L196():
    r97 = dyn base17(<sym nm>);
    goto L45(r97);
  L208():
    goto L50(r107);
  L211():
    goto L50(r112);
  L213():
    st weights = r116;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L214() else L215();
  D50():
    deopt 216 [nm];
  L46():
    goto L47(NULL);
  L47(nm4):
    goto L48();
  L51(r118):
    r119 = `!`(r118);
    c30 = `as.logical`(r119);
    if c30 then L217() else L52(c30);
  L197():
    nm1 = force? nm;
    checkMissing(nm1);
    c26 = `==`(nm1, NULL);
    goto L45(c26);
  L198():
    nm2 = ld nm;
    check L199() else D51();
  L214():
    weights1 = ld weights;
    check L216() else D62();
  L215():
    r117 = dyn base18(<sym weights>);
    goto L51(r117);
  D51():
    deopt 220 [nm2];
  D62():
    deopt 255 [weights1];
  L52(c32):
    c39 = `as.logical`(c32);
    if c39 then L223() else L54();
  L199():
    nm3 = force? nm2;
    checkMissing(nm3);
    l7 = ld Y;
    names__ = ldf `names<-`;
    check L200() else D52();
  L216():
    weights2 = force? weights1;
    checkMissing(weights2);
    c29 = `==`(weights2, NULL);
    goto L51(c29);
  L217():
    sym19 = ldf `is.numeric`;
    base19 = ldf `is.numeric` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L218() else L219();
  D52():
    deopt 223 [nm3, l7, nm3];
  L53(c35, r121):
    r123 = `!`(r121);
    c36 = `as.logical`(r123);
    c37 = `&&`(c35, c36);
    goto L52(c37);
  L54():
    goto L55();
  L55():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L227() else L228();
  L200():
    r100 = dyn names__(l7, NULL, nm3);
    check L201() else D53();
  L218():
    weights3 = ld weights;
    check L220() else D63();
  L219():
    r120 = dyn base19(<sym weights>);
    goto L53(c30, r120);
  L223():
    stop2 = ldf stop;
    check L224() else D65();
  D53():
    deopt 225 [nm3, r100];
  D63():
    deopt 261 [c30, weights3];
  D65():
    deopt 268 [];
  L56(r127):
    r128 = `!`(r127);
    c41 = `as.logical`(r128);
    if c41 then L230() else L57(c41);
  L201():
    st Y = r100;
    goto L47(nm3);
  L220():
    weights4 = force? weights3;
    checkMissing(weights4);
    is_numeric = ldf `is.numeric` in base;
    r122 = dyn is_numeric(weights4);
    check L221() else D64();
  L224():
    r124 = dyn stop2("'weights' must be a numeric vector");
    check L225() else D66();
  L227():
    weights5 = ld weights;
    check L229() else D67();
  L228():
    r126 = dyn base20(<sym weights>);
    goto L56(r126);
  D64():
    deopt 264 [c30, r122];
  D66():
    deopt 270 [r124];
  D67():
    deopt 274 [weights5];
  L57(c43):
    c50 = `as.logical`(c43);
    if c50 then L236() else L59();
  L221():
    goto L53(c30, r122);
  L225():
    goto L55();
  L229():
    weights6 = force? weights5;
    checkMissing(weights6);
    c40 = `==`(weights6, NULL);
    goto L56(c40);
  L230():
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L231() else L232();
  L58(c46, r130):
    c47 = `as.logical`(r130);
    c48 = `&&`(c46, c47);
    goto L57(c48);
  L59():
    goto L60();
  L60():
    as_vector1 = ldf `as.vector`;
    check L240() else D72();
  L231():
    weights7 = ld weights;
    check L233() else D68();
  L232():
    r129 = dyn base21(<lang `<`(weights, 0.0)>);
    goto L58(c41, r129);
  L236():
    stop3 = ldf stop;
    check L237() else D70();
  D68():
    deopt 280 [c41, weights7];
  D70():
    deopt 288 [];
  D72():
    deopt 294 [];
  L233():
    weights8 = force? weights7;
    checkMissing(weights8);
    r131 = `<`(weights8, 0.0);
    any = ldf any in base;
    r132 = dyn any(r131);
    check L234() else D69();
  L237():
    r133 = dyn stop3("negative weights not allowed");
    check L238() else D71();
  L240():
    p20 = prom<V +>{
      model_offset = ldf `model.offset`;
      p19 = prom<V +>{
        mf21 = ld mf;
        mf22 = force? mf21;
        checkMissing(mf22);
        return mf22;
      };
      r136 = dyn model_offset(p19);
      return r136;
    };
    r138 = dyn as_vector1(p20);
    check L241() else D73();
  D69():
    deopt 285 [c41, r132];
  D71():
    deopt 290 [r133];
  D73():
    deopt 296 [r138];
  L234():
    goto L58(c41, r132);
  L238():
    goto L60();
  L241():
    st offset = r138;
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L242() else L243();
  L61(r140):
    r141 = `!`(r140);
    c52 = `as.logical`(r141);
    if c52 then L245() else L62();
  L242():
    offset1 = ld offset;
    check L244() else D74();
  L243():
    r139 = dyn base22(<sym offset>);
    goto L61(r139);
  D74():
    deopt 299 [offset1];
  L62():
    goto L66();
  L66():
    model_extract = ldf `model.extract`;
    check L257() else D81();
  L244():
    offset2 = force? offset1;
    checkMissing(offset2);
    c51 = `==`(offset2, NULL);
    goto L61(c51);
  L245():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L246() else L247();
  D81():
    deopt 324 [];
  L63(r143):
    NROW1 = ldf NROW;
    check L250() else D77();
  L246():
    offset3 = ld offset;
    check L248() else D75();
  L247():
    r142 = dyn base23(<sym offset>);
    goto L63(r142);
  L257():
    p26 = prom<V +>{
      mf23 = ld mf;
      mf24 = force? mf23;
      checkMissing(mf24);
      return mf24;
    };
    r161 = dyn model_extract(p26, "mustart");
    check L258() else D82();
  D75():
    deopt 305 [offset3];
  D77():
    deopt 309 [r143];
  D82():
    deopt 327 [r161];
  L248():
    offset4 = force? offset3;
    checkMissing(offset4);
    length1 = ldf length in base;
    r144 = dyn length1(offset4);
    check L249() else D76();
  L250():
    p21 = prom<V +>{
      Y6 = ld Y;
      Y7 = force? Y6;
      checkMissing(Y7);
      return Y7;
    };
    r146 = dyn NROW1(p21);
    check L251() else D78();
  L258():
    st mustart = r161;
    model_extract1 = ldf `model.extract`;
    check L259() else D83();
  D76():
    deopt 308 [r144];
  D78():
    deopt 311 [r143, r146];
  D83():
    deopt 330 [];
  L249():
    goto L63(r144);
  L251():
    r147 = `!=`(r143, r146);
    c53 = `as.logical`(r147);
    if c53 then L252() else L64();
  L259():
    p27 = prom<V +>{
      mf25 = ld mf;
      mf26 = force? mf25;
      checkMissing(mf26);
      return mf26;
    };
    r163 = dyn model_extract1(p27, "etastart");
    check L260() else D84();
  D84():
    deopt 333 [r163];
  L64():
    goto L65(NULL);
  L65(r158):
    goto L66();
  L252():
    stop4 = ldf stop;
    check L253() else D79();
  L260():
    st etastart = r163;
    eval1 = ldf eval;
    check L261() else D85();
  D79():
    deopt 314 [];
  D85():
    deopt 336 [];
  L253():
    p25 = prom<V +>{
      gettextf = ldf gettextf;
      p22 = prom<V +>{
        sym24 = ldf length;
        base24 = ldf length in base;
        guard24 = `==`.4(sym24, base24);
        if guard24 then L1() else L2();
      L0(r149):
        return r149;
      L1():
        offset5 = ld offset;
        offset6 = force? offset5;
        checkMissing(offset6);
        length2 = ldf length in base;
        r150 = dyn length2(offset6);
        goto L0(r150);
      L2():
        r148 = dyn base24(<sym offset>);
        goto L0(r148);
      };
      p24 = prom<V +>{
        NROW2 = ldf NROW;
        p23 = prom<V +>{
          Y8 = ld Y;
          Y9 = force? Y8;
          checkMissing(Y9);
          return Y9;
        };
        r153 = dyn NROW2(p23);
        return r153;
      };
      r155 = dyn gettextf("number of offsets is %d should equal %d (number of observations)", p22, p24);
      return r155;
    };
    r157 = dyn stop4[, domain](p25, NA_LGL);
    check L254() else D80();
  L261():
    p28 = prom<V +>{
      sym25 = ldf call;
      base25 = ldf call in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r165):
      return r165;
    L1():
      call = ldf call in base;
      r166 = dyn call(<lang if(is.function(method), "method", method)>, <sym X>, <sym Y>, <sym weights>, <sym start>, <sym etastart>, <sym mustart>, <sym offset>, <sym family>, <sym control>, <lang `>`(attr(mt, "intercept"), 0)>, <sym singular.ok>);
      goto L0(r166);
    L2():
      r164 = dyn base25[, x, y, weights, start, etastart, mustart, offset, family, control, intercept, `singular.ok`](<lang if(is.function(method), "method", method)>, <sym X>, <sym Y>, <sym weights>, <sym start>, <sym etastart>, <sym mustart>, <sym offset>, <sym family>, <sym control>, <lang `>`(attr(mt, "intercept"), 0)>, <sym singular.ok>);
      goto L0(r164);
    };
    r168 = dyn eval1(p28);
    check L262() else D86();
  D80():
    deopt 318 [r157];
  D86():
    deopt 338 [r168];
  L254():
    goto L65(r157);
  L262():
    st fit = r168;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L263() else L264();
  L67(r170):
    c54 = `as.logical`(r170);
    if c54 then L267() else L68(c54);
  L263():
    offset7 = ld offset;
    check L265() else D87();
  L264():
    r169 = dyn base26(<sym offset>);
    goto L67(r169);
  D87():
    deopt 342 [offset7];
  L68(c56):
    c63 = `as.logical`(c56);
    if c63 then L273() else L70();
  L265():
    offset8 = force? offset7;
    checkMissing(offset8);
    length3 = ldf length in base;
    r171 = dyn length3(offset8);
    check L266() else D88();
  L267():
    sym27 = ldf attr;
    base27 = ldf attr in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L268() else L269();
  D88():
    deopt 345 [r171];
  L69(c59, r173):
    r175 = `>`(r173, 0);
    c60 = `as.logical`(r175);
    c61 = `&&`(c59, c60);
    goto L68(c61);
  L70():
    goto L73();
  L73():
    model1 = ld model;
    check L295() else D97();
  L266():
    goto L67(r171);
  L268():
    mt4 = ld mt;
    check L270() else D89();
  L269():
    r172 = dyn base27(<sym mt>, "intercept");
    goto L69(c54, r172);
  L273():
    eval2 = ldf eval;
    check L274() else D91();
  D89():
    deopt 348 [c54, mt4];
  D91():
    deopt 357 [];
  D97():
    deopt 379 [model1];
  L270():
    mt5 = force? mt4;
    checkMissing(mt5);
    attr1 = ldf attr in base;
    r174 = dyn attr1(mt5, "intercept");
    check L271() else D90();
  L274():
    p29 = prom<V +>{
      sym28 = ldf call;
      base28 = ldf call in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      call1 = ldf call in base;
      r178 = dyn call1(<lang if(is.function(method), "method", method)>, <lang `[`(X, , "(Intercept)", drop=FALSE)>, <sym Y>, <lang `$`(fit, fitted.values)>, <sym weights>, <sym offset>, <sym family>, <sym control>, TRUE);
      goto L0(r178);
    L2():
      r176 = dyn base28[, x, y, mustart, weights, offset, family, control, intercept](<lang if(is.function(method), "method", method)>, <lang `[`(X, , "(Intercept)", drop=FALSE)>, <sym Y>, <lang `$`(fit, fitted.values)>, <sym weights>, <sym offset>, <sym family>, <sym control>, TRUE);
      goto L0(r176);
    };
    r180 = dyn eval2(p29);
    check L275() else D92();
  L295():
    model2 = force? model1;
    checkMissing(model2);
    c68 = `as.logical`(model2);
    if c68 then L296() else L74();
  D90():
    deopt 352 [c54, r174];
  D92():
    deopt 359 [r180];
  L74():
    goto L75();
  L75():
    sym29 = ldf attr;
    base29 = ldf attr in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L303() else L304();
  L271():
    goto L69(c54, r174);
  L275():
    st fit2 = r180;
    fit2 = ld fit2;
    check L276() else D93();
  L296():
    mf27 = ld mf;
    check L297() else D98();
  D93():
    deopt 361 [fit2];
  D98():
    deopt 381 [mf27];
  L76(r189):
    l14 = ld fit;
    c70 = `is.object`(l14);
    if c70 then L308() else L309(r189, l14);
  L276():
    fit3 = force? fit2;
    checkMissing(fit3);
    c64 = `is.object`(fit3);
    if c64 then L278() else L279(fit3);
  L297():
    mf28 = force? mf27;
    checkMissing(mf28);
    l11 = ld fit;
    c69 = `is.object`(l11);
    if c69 then L299() else L300(mf28, l11);
  L303():
    mf34 = ld mf;
    check L305() else D99();
  L304():
    r188 = dyn base29(<sym mf>, "na.action");
    goto L76(r188);
  D99():
    deopt 390 [mf34];
  L277(dx9):
    r182 = `!`(dx9);
    c65 = `as.logical`(r182);
    if c65 then L281() else L71();
  L278():
    dr8 = tryDispatchBuiltin.1("$", fit3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L280() else L279(dr8);
  L279(fit5):
    r181 = `$`(fit5, <sym converged>);
    goto L277(r181);
  L298(mf32, dx20):
    st fit = dx20;
    goto L75();
  L299():
    dr14 = tryDispatchBuiltin.0("$<-", l11, mf28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L301() else L300(mf28, dr14);
  L300(mf30, l13):
    r187 = `$<-`(l13, <sym model>, mf28);
    goto L298(mf30, r187);
  L305():
    mf35 = force? mf34;
    checkMissing(mf35);
    attr2 = ldf attr in base;
    r190 = dyn attr2(mf35, "na.action");
    check L306() else D100();
  L307(dx22):
    st fit = dx22;
    x1 = ld x;
    check L311() else D101();
  L308():
    dr16 = tryDispatchBuiltin.0("$<-", l14, r189);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L310() else L309(r189, dr16);
  L309(r192, l16):
    r195 = `$<-`(l16, <sym na.action>, r189);
    goto L307(r195);
  D100():
    deopt 394 [r190];
  D101():
    deopt 398 [x1];
  L71():
    goto L72();
  L72():
    fit6 = ld fit2;
    check L285() else D96();
  L280():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L277(dx8);
  L281():
    warning = ldf warning;
    check L282() else D94();
  L301():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L298(mf28, dx19);
  L306():
    goto L76(r190);
  L310():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L307(dx21);
  L311():
    x2 = force? x1;
    checkMissing(x2);
    c71 = `as.logical`(x2);
    if c71 then L312() else L77();
  D94():
    deopt 366 [];
  D96():
    deopt 371 [fit6];
  L77():
    goto L78();
  L78():
    y1 = ld y;
    check L319() else D103();
  L282():
    r183 = dyn warning("fitting to calculate the null deviance did not converge -- increase 'maxit'?");
    check L283() else D95();
  L285():
    fit7 = force? fit6;
    checkMissing(fit7);
    c66 = `is.object`(fit7);
    if c66 then L287() else L288(fit7);
  L312():
    X = ld X;
    check L313() else D102();
  D95():
    deopt 368 [r183];
  D102():
    deopt 400 [X];
  D103():
    deopt 407 [y1];
  L283():
    goto L72();
  L286(dx11):
    l8 = ld fit;
    c67 = `is.object`(l8);
    if c67 then L291() else L292(dx11, l8);
  L287():
    dr10 = tryDispatchBuiltin.1("$", fit7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L289() else L288(dr10);
  L288(fit9):
    r185 = `$`(fit9, <sym deviance>);
    goto L286(r185);
  L313():
    X1 = force? X;
    checkMissing(X1);
    l17 = ld fit;
    c72 = `is.object`(l17);
    if c72 then L315() else L316(X1, l17);
  L319():
    y2 = force? y1;
    checkMissing(y2);
    r197 = `!`(y2);
    c73 = `as.logical`(r197);
    if c73 then L320() else L79();
  L79():
    goto L80();
  L80():
    structure = ldf structure;
    check L326() else D104();
  L289():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L286(dx10);
  L290(dx16, dx17):
    st fit = dx17;
    goto L73();
  L291():
    dr12 = tryDispatchBuiltin.0("$<-", l8, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L293() else L292(dx11, dr12);
  L292(dx13, l10):
    r186 = `$<-`(l10, <sym null.deviance>, dx11);
    goto L290(dx13, r186);
  L314(X5, dx24):
    st fit = dx24;
    goto L78();
  L315():
    dr18 = tryDispatchBuiltin.0("$<-", l17, X1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L317() else L316(X1, dr18);
  L316(X3, l19):
    r196 = `$<-`(l19, <sym x>, X1);
    goto L314(X3, r196);
  L320():
    l20 = ld fit;
    c74 = `is.object`(l20);
    if c74 then L322() else L323(NULL, l20);
  D104():
    deopt 418 [];
  L293():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L290(dx11, dx15);
  L317():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L314(X1, dx23);
  L321(r201, dx26):
    st fit = dx26;
    goto L80();
  L322():
    dr20 = tryDispatchBuiltin.0("$<-", l20, NULL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L324() else L323(NULL, dr20);
  L323(r199, l22):
    r202 = `$<-`(l22, <sym y>, NULL);
    goto L321(r199, r202);
  L326():
    p32 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L3() else L4();
    L0(r205):
      return r205;
    L3():
      fit10 = ld fit;
      fit11 = force? fit10;
      checkMissing(fit11);
      sym31 = ldf list;
      base31 = ldf list in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L5() else L6();
    L4():
      r204 = dyn base30(<sym fit>, <lang list(call=cal, formula=formula, terms=mt, data=data, offset=offset, control=control, method=method, contrasts=attr(X, "contrasts"), xlevels=.getXlevels(mt, mf))>);
      goto L0(r204);
    L1(r207):
      c75 = ldf c in base;
      r215 = dyn c75(fit11, r207);
      goto L0(r215);
    L5():
      cal = ld cal;
      cal1 = force? cal;
      checkMissing(cal1);
      formula3 = ld formula;
      formula4 = force? formula3;
      checkMissing(formula4);
      mt6 = ld mt;
      mt7 = force? mt6;
      checkMissing(mt7);
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      offset9 = ld offset;
      offset10 = force? offset9;
      checkMissing(offset10);
      control3 = ld control;
      control4 = force? control3;
      checkMissing(control4);
      method9 = ld method;
      method10 = force? method9;
      checkMissing(method10);
      sym32 = ldf attr;
      base32 = ldf attr in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L7() else L8();
    L6():
      r206 = dyn base31[call, formula, terms, data, offset, control, method, contrasts, xlevels](<sym cal>, <sym formula>, <sym mt>, <sym data>, <sym offset>, <sym control>, <sym method>, <lang attr(X, "contrasts")>, <lang .getXlevels(mt, mf)>);
      goto L1(r206);
    L2(r209):
      _getXlevels = ldf `.getXlevels`;
      p30 = prom<V +>{
        mt8 = ld mt;
        mt9 = force? mt8;
        checkMissing(mt9);
        return mt9;
      };
      p31 = prom<V +>{
        mf36 = ld mf;
        mf37 = force? mf36;
        checkMissing(mf37);
        return mf37;
      };
      r213 = dyn _getXlevels(p30, p31);
      list1 = ldf list in base;
      r214 = dyn list1(cal1, formula4, mt7, data2, offset10, control4, method10, r209, r213);
      goto L1(r214);
    L7():
      X7 = ld X;
      X8 = force? X7;
      checkMissing(X8);
      attr3 = ldf attr in base;
      r210 = dyn attr3(X8, "contrasts");
      goto L2(r210);
    L8():
      r208 = dyn base32(<sym X>, "contrasts");
      goto L2(r208);
    };
    p33 = prom<V +>{
      sym33 = ldf c;
      base33 = ldf c in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L2() else L3();
    L0(r218):
      return r218;
    L2():
      fit12 = ld fit;
      fit13 = force? fit12;
      checkMissing(fit13);
      c76 = `is.object`(fit13);
      if c76 then L5() else L6(fit13);
    L3():
      r217 = dyn base33(<lang `$`(fit, class)>, <lang c("glm", "lm")>);
      goto L0(r217);
    L4(dx28):
      sym34 = ldf c;
      base34 = ldf c in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L8() else L9();
    L5():
      dr22 = tryDispatchBuiltin.1("$", fit13);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(fit15):
      r219 = `$`(fit15, <sym class>);
      goto L4(r219);
    L1(r221):
      c78 = ldf c in base;
      r223 = dyn c78(dx28, r221);
      goto L0(r223);
    L7():
      dx27 = getTryDispatchBuiltinValue(dr22);
      goto L4(dx27);
    L8():
      c77 = ldf c in base;
      r222 = dyn c77("glm", "lm");
      goto L1(r222);
    L9():
      r220 = dyn base34("glm", "lm");
      goto L1(r220);
    };
    r225 = dyn structure[, class](p32, p33);
    check L327() else D105();
  D105():
    deopt 422 [r225];
  L324():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L321(NULL, dx25);
  L327():
    popenv;
    return r225;
  }
}