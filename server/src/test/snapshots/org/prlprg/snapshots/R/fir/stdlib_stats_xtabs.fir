fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2472534755;
    st xtabs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2472534755(formula, data, subset, sparse, `na.action`, `na.rm`, addNA, exclude, `drop.unused.levels`) {
  (reg formula:*, reg data:*, reg subset:*, reg sparse:*, reg na_action:*, reg na_rm:*, reg addNA:*, reg exclude:*, reg drop_unused_levels:*) -+> V { var formula:*, reg formula_isMissing:L, reg formula_orDefault:*, reg __:cls, reg r:V, reg p:p(V +), var data:*, reg data_isMissing:L, reg data_orDefault:*, reg parent_frame:cls, reg r2:V, reg p1:p(V +), var subset:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, var `na.action`:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var addNA:*, reg addNA_isMissing:L, reg addNA_orDefault:*, var exclude:*, reg exclude_isMissing:L, reg exclude_orDefault:*, reg addNA1:*, reg addNA2:V, reg r4:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p2:p(V +), var `drop.unused.levels`:*, reg drop_unused_levels_isMissing:L, reg drop_unused_levels_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c7:L, reg r13:V, reg missing1:cls, reg r14:V, reg c8:L, reg c9:V, reg c11:L, reg stop:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg missing2:cls, reg r19:V, reg r20:V, reg c12:L, reg as_formula:cls, reg formula1:*, reg formula2:V, reg p3:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg formula3:*, reg formula4:V, reg inherits:cls, reg r25:V, reg r26:V, reg c13:L, reg stop1:cls, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg terms:cls, reg formula5:*, reg formula6:V, reg p4:p(V +), reg data1:*, reg data2:V, reg p5:p(V +), reg r36:V, reg attr:cls, reg r37:V, reg r38:V, reg any:cls, reg r39:V, reg c14:L, reg stop2:cls, reg r40:V, reg match_call:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg eval:cls, reg m:*, reg m1:V, reg c15:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r45:V, reg p6:p(V +), reg parent_frame1:cls, reg r47:V, reg p7:p(V +), reg r49:V, reg is_matrix:cls, reg r50:V, reg c16:L, reg as_data_frame:cls, reg data3:*, reg data4:V, reg p8:p(V +), reg r52:V, reg l:*, reg c17:L, reg r54:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r56:V, reg dx3:V, reg r57:V, reg l3:*, reg c18:L, reg r60:dots, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r62:dots, reg dx5:V, reg r63:V, reg l6:*, reg c19:L, reg r65:dots, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r67:dots, reg dx7:V, reg r68:V, reg l9:*, reg c20:L, reg r70:dots, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r72:dots, reg dx9:V, reg r73:V, reg l12:*, reg c21:L, reg r75:dots, reg l14:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r77:dots, reg dx11:V, reg r78:V, reg l15:*, reg c22:L, reg r80:dots, reg l17:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r82:dots, reg dx13:V, reg r83:V, reg l18:*, reg ___:cls, reg ddd:*, reg r84:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:V, reg missing3:cls, reg r87:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r88:V, reg r89:V, reg quote:cls, reg r90:V, reg l19:*, reg c24:L, reg r92:V, reg l21:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r94:V, reg dx15:V, reg r95:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg quote1:cls, reg r99:V, reg l22:*, reg c25:L, reg r101:V, reg l24:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ____:cls, reg r104:V, reg eval1:cls, reg m4:*, reg m5:V, reg p9:p(V +), reg parent_frame2:cls, reg r106:V, reg p10:p(V +), reg r108:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg formula7:*, reg formula8:V, reg length:cls, reg r111:V, reg r112:V, reg c26:L, reg mf:*, reg mf1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r114:V, reg r115:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r116:V, reg r117:V, reg mf2:*, reg mf3:V, reg attr1:cls, reg r118:V, reg attr2:cls, reg r119:V, reg mf4:*, reg mf5:V, reg c27:L, reg mf7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg i:*, reg i1:V, reg r120:V, reg __1:cls, reg r121:V, reg mf8:*, reg mf9:V, reg c28:L, reg mf11:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg i2:*, reg i3:V, reg __2:cls, reg r122:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r123:V, reg r124:V, reg missing4:cls, reg r125:V, reg r126:V, reg lapply:cls, reg by:*, reg by1:V, reg p11:p(V +), reg r128:cls, reg p12:p(V +), reg r130:V, reg sparse1:*, reg sparse2:V, reg r131:V, reg c29:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r132:V, reg r133:V, reg y:*, reg y1:V, reg c30:V, reg c31:L, reg table:cls, reg by2:*, reg by3:V, reg p13:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r135:V, reg r136:V, reg by4:*, reg by5:V, reg names:cls, reg r137:V, reg p14:p(V +), reg r139:V, reg r140:V, reg NCOL:cls, reg y2:*, reg y3:V, reg p15:p(V +), reg r142:V, reg r143:V, reg c32:L, reg tapply:cls, reg y4:*, reg y5:V, reg p16:p(V +), reg by6:*, reg by7:V, reg p17:p(V +), reg sum:*, reg sum1:V, reg p18:p(V +), reg na_rm1:*, reg na_rm2:V, reg p19:p(V +), reg r148:V, reg lapply1:cls, reg as_data_frame1:cls, reg y6:*, reg y7:V, reg p20:p(V +), reg r150:V, reg p21:p(V +), reg tapply1:*, reg tapply2:V, reg p22:p(V +), reg by8:*, reg by9:V, reg p23:p(V +), reg sum2:*, reg sum3:V, reg p24:p(V +), reg na_rm3:*, reg na_rm4:V, reg p25:p(V +), reg r156:V, reg array:cls, reg unlist:cls, reg z:*, reg z1:V, reg p26:p(V +), reg r158:V, reg p27:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r160:V, reg r161:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r162:V, reg r163:V, reg z2:*, reg z3:V, reg c33:L, reg z5:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __3:cls, reg r164:V, reg dim:cls, reg r165:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r166:V, reg r167:V, reg z6:*, reg z7:V, reg length1:cls, reg r168:V, reg c34:cls, reg r169:V, reg p28:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r171:V, reg r172:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r173:V, reg r174:V, reg z8:*, reg z9:V, reg c35:L, reg z11:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __4:cls, reg r175:V, reg dimnames:cls, reg r176:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r177:V, reg r178:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r179:V, reg r180:V, reg z12:*, reg z13:V, reg names1:cls, reg r181:V, reg list:cls, reg r182:V, reg c36:cls, reg r183:V, reg p29:p(V +), reg r185:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r186:V, reg r187:V, reg c37:cls, reg r188:V, reg l25:*, reg class__:cls, reg r189:V, reg match_call1:cls, reg r190:V, reg l26:*, reg attr__:cls, reg r191:V, reg x:*, reg x1:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r192:V, reg r193:V, reg by10:*, reg by11:V, reg length2:cls, reg r194:V, reg r195:V, reg c38:L, reg stop3:cls, reg gettextf:cls, reg r196:V, reg p30:p(V +), reg r198:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r200:V, reg r201:V, reg tryCatch:cls, reg loadNamespace:cls, reg r202:V, reg p31:p(V +), reg r204:cls, reg p32:p(V +), reg r206:V, reg c39:V, reg c40:L, reg stop4:cls, reg gettextf1:cls, reg r207:V, reg p33:p(V +), reg r209:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r211:V, reg r212:V, reg unique:cls, reg unlist1:cls, reg lapply2:cls, reg by12:*, reg by13:V, reg p34:p(V +), reg r214:cls, reg p35:p(V +), reg r216:V, reg p36:p(V +), reg r218:V, reg p37:p(V +), reg r220:V, reg length3:cls, reg r221:V, reg c41:L, reg lapply3:cls, reg by14:*, reg by15:V, reg p38:p(V +), reg __5:*, reg __6:V, reg p39:p(V +), reg i_ex:*, reg i_ex1:V, reg r224:V, reg p40:p(V +), reg r226:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r227:V, reg r228:V, reg y8:*, reg y9:V, reg c42:V, reg r229:V, reg c43:L, reg y10:*, reg y11:V, reg c44:L, reg y13:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg i_ex2:*, reg i_ex3:V, reg r230:V, reg __7:cls, reg r231:V, reg dx28:V, reg na_rm5:*, reg na_rm6:V, reg c45:L, reg c47:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r232:V, reg c50:L, reg r233:V, reg y14:*, reg y15:V, reg c51:V, reg r234:V, reg c52:L, reg c53:V, reg c55:L, reg c57:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r235:V, reg c60:L, reg r236:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r237:V, reg c63:L, reg r238:V, reg y16:*, reg y17:V, reg is_na:cls, reg r239:V, reg any1:cls, reg r240:V, reg c64:L, reg c65:V, reg c67:L, reg isN:*, reg isN1:V, reg r241:V, reg lapply4:cls, reg by16:*, reg by17:V, reg p41:p(V +), reg __8:*, reg __9:V, reg p42:p(V +), reg ok:*, reg ok1:V, reg p43:p(V +), reg r245:V, reg y18:*, reg y19:V, reg c68:L, reg y21:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg ok2:*, reg ok3:V, reg __10:cls, reg r246:V, reg by18:*, reg by19:V, reg c69:L, reg by21:V, reg dr30:V, reg dc15:L, reg dx33:V, reg dx34:V, reg __11:cls, reg r247:V, reg by22:*, reg by23:V, reg c70:L, reg by25:V, reg dr32:V, reg dc16:L, reg dx35:V, reg dx36:V, reg __12:cls, reg r248:V, reg lapply5:cls, reg by26:*, reg by27:V, reg p44:p(V +), reg levels:*, reg levels1:V, reg p45:p(V +), reg r251:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r252:V, reg r253:V, reg y22:*, reg y23:V, reg c71:V, reg c72:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r254:V, reg r255:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r256:V, reg r257:V, reg rows:*, reg rows1:V, reg length4:cls, reg r258:V, reg rep_int:cls, reg r259:V, reg r260:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r261:V, reg y24:*, reg y25:V, reg as_double:cls, reg r262:V, reg __13:cls, reg r263:V, reg r264:cls, reg __14:cls, reg r265:V, reg r266:cls, reg x2:*, reg x3:V, reg p46:p(V +), reg dnms:*, reg dnms1:V, reg p47:p(V +), reg sym36:cls, reg base36:cls, reg guard36:L, reg r269:V, reg r270:V, reg rows2:*, reg rows3:V, reg as_integer:cls, reg r271:V, reg r272:V, reg p48:p(V +), reg sym37:cls, reg base37:cls, reg guard37:L, reg r274:V, reg r275:V, reg cols:*, reg cols1:V, reg as_integer1:cls, reg r276:V, reg r277:V, reg p49:p(V +), reg lengths:cls, reg dnms2:*, reg dnms3:V, reg p50:p(V +), reg r280:V, reg p51:p(V +), reg r282:V, reg p52:p(V +), reg r284:V |
    mkenv;
    formula_isMissing = missing.0(formula);
    if formula_isMissing then L0() else L1(formula);
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r = dyn __(<sym .>);
      return r;
    };
    goto L1(p);
  L1(formula_orDefault):
    st formula = formula_orDefault;
    data_isMissing = missing.0(data);
    if data_isMissing then L2() else L3(data);
  L2():
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r2 = dyn parent_frame();
      return r2;
    };
    goto L3(p1);
  L3(data_orDefault):
    st data = data_orDefault;
    st subset = subset;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L4(FALSE) else L4(sparse);
  L4(sparse_orDefault):
    st sparse = sparse_orDefault;
    st `na.action` = na_action;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L5(FALSE) else L5(na_rm);
  L5(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    addNA_isMissing = missing.0(addNA);
    if addNA_isMissing then L6(FALSE) else L6(addNA);
  L6(addNA_orDefault):
    st addNA = addNA_orDefault;
    exclude_isMissing = missing.0(exclude);
    if exclude_isMissing then L7() else L8(exclude);
  L7():
    p2 = prom<V +>{
      addNA1 = ld addNA;
      addNA2 = force? addNA1;
      checkMissing(addNA2);
      r4 = `!`(addNA2);
      c = `as.logical`(r4);
      if c then L2() else L0();
    L0():
      invisible.0();
      return NULL;
    L2():
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L1(r6):
      return r6;
    L3():
      c1 = ldf c in base;
      r7 = dyn c1(NA_LGL, NA_REAL);
      goto L1(r7);
    L4():
      r5 = dyn base(NA_LGL, NA_REAL);
      goto L1(r5);
    };
    goto L8(p2);
  L8(exclude_orDefault):
    st exclude = exclude_orDefault;
    drop_unused_levels_isMissing = missing.0(drop_unused_levels);
    if drop_unused_levels_isMissing then L9(FALSE) else L9(drop_unused_levels);
  L9(drop_unused_levels_orDefault):
    st `drop.unused.levels` = drop_unused_levels_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L76() else L77();
  L10(r10):
    c2 = `as.logical`(r10);
    if c2 then L78() else L11(c2);
  L76():
    missing = ldf missing in base;
    r11 = dyn missing(<sym formula>);
    goto L10(r11);
  L77():
    r9 = dyn base1(<sym formula>);
    goto L10(r9);
  L11(c4):
    c11 = `as.logical`(c4);
    if c11 then L82() else L13();
  L78():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L12(c7, r13):
    c8 = `as.logical`(r13);
    c9 = `&&`(c7, c8);
    goto L11(c9);
  L13():
    goto L14();
  L14():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L86() else L87();
  L79():
    missing1 = ldf missing in base;
    r14 = dyn missing1(<sym data>);
    goto L12(c2, r14);
  L80():
    r12 = dyn base2(<sym data>);
    goto L12(c2, r12);
  L82():
    stop = ldf stop;
    check L83() else D0();
  D0():
    deopt 8 [];
  L15(r18):
    r20 = `!`(r18);
    c12 = `as.logical`(r20);
    if c12 then L88() else L16();
  L83():
    r15 = dyn stop("must supply 'formula' or 'data'");
    check L84() else D1();
  L86():
    missing2 = ldf missing in base;
    r19 = dyn missing2(<sym formula>);
    goto L15(r19);
  L87():
    r17 = dyn base3(<sym formula>);
    goto L15(r17);
  D1():
    deopt 10 [r15];
  L16():
    goto L20();
  L20():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L84():
    goto L14();
  L88():
    as_formula = ldf `as.formula`;
    check L89() else D2();
  D2():
    deopt 18 [];
  L21(r31):
    c14 = `as.logical`(r31);
    if c14 then L108() else L23();
  L89():
    p3 = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    r22 = dyn as_formula(p3);
    check L90() else D3();
  L100():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L102() else L103();
  L101():
    r30 = dyn base5(<lang `>`(attr(terms(formula, data=data), "order"), 1.0)>);
    goto L21(r30);
  D3():
    deopt 20 [r22];
  L22(r33):
    r38 = `>`(r33, 1.0);
    any = ldf any in base;
    r39 = dyn any(r38);
    check L107() else D11();
  L23():
    goto L24();
  L24():
    match_call = ldf `match.call`;
    check L112() else D14();
  L90():
    st formula = r22;
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L102():
    terms = ldf terms;
    check L104() else D8();
  L103():
    r32 = dyn base6(<lang terms(formula, data=data)>, "order");
    goto L22(r32);
  L108():
    stop2 = ldf stop;
    check L109() else D12();
  D8():
    deopt 44 [];
  D11():
    deopt 55 [r39];
  D12():
    deopt 57 [];
  D14():
    deopt 63 [];
  L17(r24):
    r26 = `!`(r24);
    c13 = `as.logical`(r26);
    if c13 then L95() else L18();
  L91():
    formula3 = ld formula;
    check L93() else D4();
  L92():
    r23 = dyn base4(<sym formula>, "formula");
    goto L17(r23);
  L104():
    p4 = prom<V +>{
      formula5 = ld formula;
      formula6 = force? formula5;
      checkMissing(formula6);
      return formula6;
    };
    p5 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r36 = dyn terms[, data](p4, p5);
    check L105() else D9();
  L107():
    goto L21(r39);
  L109():
    r40 = dyn stop2("interactions are not allowed");
    check L110() else D13();
  L112():
    r42 = dyn match_call[`expand.dots`](FALSE);
    check L113() else D15();
  D4():
    deopt 24 [formula3];
  D9():
    deopt 48 [r36];
  D13():
    deopt 59 [r40];
  D15():
    deopt 66 [r42];
  L18():
    goto L19(NULL);
  L19(r28):
    goto L20();
  L93():
    formula4 = force? formula3;
    checkMissing(formula4);
    inherits = ldf inherits in base;
    r25 = dyn inherits(formula4, "formula", FALSE);
    check L94() else D5();
  L95():
    stop1 = ldf stop;
    check L96() else D6();
  L105():
    attr = ldf attr in base;
    r37 = dyn attr(r36, "order");
    check L106() else D10();
  L110():
    goto L24();
  L113():
    st m = r42;
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L114() else L115();
  D5():
    deopt 29 [r25];
  D6():
    deopt 32 [];
  D10():
    deopt 51 [r37];
  L25(r44):
    c16 = `as.logical`(r44);
    if c16 then L119() else L26();
  L94():
    goto L17(r25);
  L96():
    r27 = dyn stop1("'formula' missing or incorrect");
    check L97() else D7();
  L106():
    goto L22(r37);
  L114():
    eval = ldf eval;
    check L116() else D16();
  L115():
    r43 = dyn base7(<lang eval(`$`(m, data), parent.frame())>);
    goto L25(r43);
  D7():
    deopt 34 [r27];
  D16():
    deopt 71 [];
  L26():
    goto L27();
  L27():
    l3 = ld m;
    c18 = `is.object`(l3);
    if c18 then L128() else L129(NULL, l3);
  L97():
    goto L19(r27);
  L116():
    p6 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c15 = `is.object`(m1);
      if c15 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r45 = `$`(m3, <sym data>);
      goto L0(r45);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r47 = dyn parent_frame1();
      return r47;
    };
    r49 = dyn eval(p6, p7);
    check L117() else D17();
  L119():
    as_data_frame = ldf `as.data.frame`;
    check L120() else D19();
  D17():
    deopt 74 [r49];
  D19():
    deopt 78 [];
  L117():
    is_matrix = ldf `is.matrix` in base;
    r50 = dyn is_matrix(r49);
    check L118() else D18();
  L120():
    p8 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r52 = dyn as_data_frame(p8);
    check L121() else D20();
  L127(r62, dx5):
    st m = dx5;
    l6 = ld m;
    c19 = `is.object`(l6);
    if c19 then L132() else L133(r62, l6);
  L128():
    dr4 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L130() else L129(NULL, dr4);
  L129(r60, l5):
    r63 = `$<-`(l5, <sym addNA>, NULL);
    goto L127(r60, r63);
  D18():
    deopt 76 [r50];
  D20():
    deopt 80 [r52];
  L118():
    goto L25(r50);
  L121():
    l = ld m;
    c17 = `is.object`(l);
    if c17 then L123() else L124(r52, l);
  L130():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L127(NULL, dx4);
  L131(r67, dx7):
    st m = dx7;
    l9 = ld m;
    c20 = `is.object`(l9);
    if c20 then L136() else L137(r67, l9);
  L132():
    dr6 = tryDispatchBuiltin.0("$<-", l6, r62);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L134() else L133(r62, dr6);
  L133(r65, l8):
    r68 = `$<-`(l8, <sym na.rm>, r62);
    goto L131(r65, r68);
  L122(r56, dx3):
    st m = dx3;
    goto L27();
  L123():
    dr2 = tryDispatchBuiltin.0("$<-", l, r52);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L125() else L124(r52, dr2);
  L124(r54, l2):
    r57 = `$<-`(l2, <sym data>, r52);
    goto L122(r54, r57);
  L134():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L131(r62, dx6);
  L135(r72, dx9):
    st m = dx9;
    l12 = ld m;
    c21 = `is.object`(l12);
    if c21 then L140() else L141(r72, l12);
  L136():
    dr8 = tryDispatchBuiltin.0("$<-", l9, r67);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L138() else L137(r67, dr8);
  L137(r70, l11):
    r73 = `$<-`(l11, <sym sparse>, r67);
    goto L135(r70, r73);
  L125():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L122(r52, dx2);
  L138():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L135(r67, dx8);
  L139(r77, dx11):
    st m = dx11;
    l15 = ld m;
    c22 = `is.object`(l15);
    if c22 then L144() else L145(r77, l15);
  L140():
    dr10 = tryDispatchBuiltin.0("$<-", l12, r72);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L142() else L141(r72, dr10);
  L141(r75, l14):
    r78 = `$<-`(l14, <sym drop.unused.levels>, r72);
    goto L139(r75, r78);
  L142():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L139(r72, dx10);
  L143(r82, dx13):
    st m = dx13;
    l18 = ld m;
    ___ = ldf `$<-`;
    check L147() else D21();
  L144():
    dr12 = tryDispatchBuiltin.0("$<-", l15, r77);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L146() else L145(r77, dr12);
  L145(r80, l17):
    r83 = `$<-`(l17, <sym exclude>, r77);
    goto L143(r80, r83);
  D21():
    deopt 104 [r82, l18, r82];
  L146():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L143(r77, dx12);
  L147():
    ddd = ld `...`;
    r84 = dyn ___[, , `...`, ](l18, NULL, ddd, r82);
    check L148() else D22();
  D22():
    deopt 107 [r82, r84];
  L148():
    st m = r84;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L149() else L150();
  L28(r86):
    c23 = `as.logical`(r86);
    if c23 then L151() else L29();
  L149():
    missing3 = ldf missing in base;
    r87 = dyn missing3(<sym na.action>);
    goto L28(r87);
  L150():
    r85 = dyn base8(<sym na.action>);
    goto L28(r85);
  L29():
    goto L31();
  L31():
    sym10 = ldf quote;
    base10 = ldf quote in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L159() else L160();
  L151():
    sym9 = ldf quote;
    base9 = ldf quote in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L152() else L153();
  L30(r89):
    l19 = ld m;
    c24 = `is.object`(l19);
    if c24 then L155() else L156(r89, l19);
  L32(r98):
    l22 = ld m;
    c25 = `is.object`(l22);
    if c25 then L161() else L162(r98, l22);
  L152():
    quote = ldf quote in base;
    r90 = dyn quote(<sym na.pass>);
    goto L30(r90);
  L153():
    r88 = dyn base9(<sym na.pass>);
    goto L30(r88);
  L159():
    quote1 = ldf quote in base;
    r99 = dyn quote1(<lang `::`(stats, model.frame)>);
    goto L32(r99);
  L160():
    r97 = dyn base10(<lang `::`(stats, model.frame)>);
    goto L32(r97);
  L33(dx17):
    st m = dx17;
    eval1 = ldf eval;
    check L164() else D23();
  L154(r94, dx15):
    st m = dx15;
    goto L31();
  L155():
    dr14 = tryDispatchBuiltin.0("$<-", l19, r89);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L157() else L156(r89, dr14);
  L156(r92, l21):
    r95 = `$<-`(l21, <sym na.action>, r89);
    goto L154(r92, r95);
  L161():
    dr16 = tryDispatchBuiltin.0("[[<-", l22, r98);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L163() else L162(r98, dr16);
  L162(r101, l24):
    ____ = ldf `[[<-` in base;
    r104 = dyn ____(l24, r98, 1);
    goto L33(r104);
  D23():
    deopt 129 [];
  L157():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L154(r89, dx14);
  L163():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L33(dx16);
  L164():
    p9 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p10 = prom<V +>{
      parent_frame2 = ldf `parent.frame`;
      r106 = dyn parent_frame2();
      return r106;
    };
    r108 = dyn eval1(p9, p10);
    check L165() else D24();
  D24():
    deopt 132 [r108];
  L165():
    st mf = r108;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L166() else L167();
  L34(r110):
    r112 = `==`(r110, 2);
    c26 = `as.logical`(r112);
    if c26 then L170() else L35();
  L166():
    formula7 = ld formula;
    check L168() else D25();
  L167():
    r109 = dyn base11(<sym formula>);
    goto L34(r109);
  D25():
    deopt 136 [formula7];
  L35():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L173() else L174();
  L36():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L190() else L191();
  L168():
    formula8 = force? formula7;
    checkMissing(formula8);
    length = ldf length in base;
    r111 = dyn length(formula8);
    check L169() else D26();
  L170():
    mf = ld mf;
    check L171() else D27();
  D26():
    deopt 139 [r111];
  D27():
    deopt 142 [mf];
  L37(r115):
    st i = r115;
    mf4 = ld mf;
    check L180() else D31();
  L41(r124):
    r126 = `!`(r124);
    st `has.exclude` = r126;
    lapply = ldf lapply;
    check L192() else D35();
  L169():
    goto L34(r111);
  L171():
    mf1 = force? mf;
    checkMissing(mf1);
    st by = mf1;
    st y = NULL;
    goto L36();
  L173():
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L175() else L176();
  L174():
    r114 = dyn base12(<lang attr(mf, "terms")>, "response");
    goto L37(r114);
  L190():
    missing4 = ldf missing in base;
    r125 = dyn missing4(<sym exclude>);
    goto L41(r125);
  L191():
    r123 = dyn base14(<sym exclude>);
    goto L41(r123);
  D31():
    deopt 161 [mf4];
  D35():
    deopt 180 [];
  L38(r117):
    attr2 = ldf attr in base;
    r119 = dyn attr2(r117, "response");
    check L179() else D30();
  L175():
    mf2 = ld mf;
    check L177() else D28();
  L176():
    r116 = dyn base13(<sym mf>, "terms");
    goto L38(r116);
  L180():
    mf5 = force? mf4;
    checkMissing(mf5);
    c27 = `is.object`(mf5);
    if c27 then L181() else L182(mf5);
  L192():
    p11 = prom<V +>{
      by = ld by;
      by1 = force? by;
      checkMissing(by1);
      return by1;
    };
    p12 = prom<V +>{
      r128 = clos inner883694641;
      return r128;
    };
    r130 = dyn lapply(p11, p12);
    check L193() else D36();
  D28():
    deopt 152 [mf2];
  D30():
    deopt 159 [r119];
  D36():
    deopt 183 [r130];
  L39(dx19):
    st by = dx19;
    mf8 = ld mf;
    check L185() else D33();
  L177():
    mf3 = force? mf2;
    checkMissing(mf3);
    attr1 = ldf attr in base;
    r118 = dyn attr1(mf3, "terms");
    check L178() else D29();
  L179():
    goto L37(r119);
  L181():
    dr18 = tryDispatchBuiltin.1("[", mf5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L183() else L182(dr18);
  L182(mf7):
    i = ld i;
    check L184() else D32();
  L193():
    st by = r130;
    sparse1 = ld sparse;
    check L194() else D37();
  D29():
    deopt 156 [r118];
  D32():
    deopt 163 [mf7, i];
  D33():
    deopt 168 [mf8];
  D37():
    deopt 185 [sparse1];
  L178():
    goto L38(r118);
  L183():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L39(dx18);
  L184():
    i1 = force? i;
    checkMissing(i1);
    r120 = `-`(<missing>, i1);
    __1 = ldf `[` in base;
    r121 = dyn __1(mf7, r120);
    goto L39(r121);
  L185():
    mf9 = force? mf8;
    checkMissing(mf9);
    c28 = `is.object`(mf9);
    if c28 then L186() else L187(mf9);
  L194():
    sparse2 = force? sparse1;
    checkMissing(sparse2);
    r131 = `!`(sparse2);
    c29 = `as.logical`(r131);
    if c29 then L195() else L42();
  L40(dx21):
    st y = dx21;
    goto L36();
  L42():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L224() else L225();
  L186():
    dr20 = tryDispatchBuiltin.1("[[", mf9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L188() else L187(dr20);
  L187(mf11):
    i2 = ld i;
    check L189() else D34();
  L195():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L196() else L197();
  D34():
    deopt 170 [mf11, i2];
  L43(r133):
    c31 = `as.logical`(r133);
    if c31 then L199() else L44();
  L48(r193):
    r195 = `!=`(r193, 2);
    c38 = `as.logical`(r195);
    if c38 then L228() else L49();
  L188():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L40(dx20);
  L189():
    i3 = force? i2;
    __2 = ldf `[[` in base;
    r122 = dyn __2(mf11, i3);
    goto L40(r122);
  L196():
    y = ld y;
    check L198() else D38();
  L197():
    r132 = dyn base15(<sym y>);
    goto L43(r132);
  L224():
    by10 = ld by;
    check L226() else D57();
  L225():
    r192 = dyn base25(<sym by>);
    goto L48(r192);
  D38():
    deopt 189 [y];
  D57():
    deopt 259 [by10];
  L44():
    NCOL = ldf NCOL;
    check L203() else D41();
  L45(r140):
    st x = r140;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L213() else L214();
  L49():
    goto L50();
  L50():
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L232() else L233();
  L198():
    y1 = force? y;
    checkMissing(y1);
    c30 = `==`(y1, NULL);
    goto L43(c30);
  L199():
    table = ldf table;
    check L200() else D39();
  L226():
    by11 = force? by10;
    checkMissing(by11);
    length2 = ldf length in base;
    r194 = dyn length2(by11);
    check L227() else D58();
  L228():
    stop3 = ldf stop;
    check L229() else D59();
  D39():
    deopt 193 [];
  D41():
    deopt 199 [];
  D58():
    deopt 262 [r194];
  D59():
    deopt 266 [];
  L47(r187):
    l25 = ld x;
    class__ = ldf `class<-`;
    check L216() else D50();
  L51(r201):
    c40 = `as.logical`(r201);
    if c40 then L236() else L52();
  L200():
    p13 = prom<V +>{
      by2 = ld by;
      by3 = force? by2;
      checkMissing(by3);
      return by3;
    };
    p14 = prom<V +>{
      sym16 = ldf names;
      base16 = ldf names in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r136):
      return r136;
    L1():
      by4 = ld by;
      by5 = force? by4;
      checkMissing(by5);
      names = ldf names in base;
      r137 = dyn names(by5);
      goto L0(r137);
    L2():
      r135 = dyn base16(<sym by>);
      goto L0(r135);
    };
    r139 = dyn table[, dnn](p13, p14);
    check L201() else D40();
  L203():
    p15 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r142 = dyn NCOL(p15);
    check L204() else D42();
  L213():
    c37 = ldf c in base;
    r188 = dyn c37("xtabs", "table");
    check L215() else D49();
  L214():
    r186 = dyn base24("xtabs", "table");
    goto L47(r186);
  L227():
    goto L48(r194);
  L229():
    p30 = prom<V +>{
      gettextf = ldf gettextf;
      r196 = dyn gettextf("%s applies only to two-way tables", "xtabs(*, sparse=TRUE)");
      return r196;
    };
    r198 = dyn stop3[, domain](p30, NA_LGL);
    check L230() else D60();
  L232():
    tryCatch = ldf tryCatch;
    check L234() else D61();
  L233():
    r200 = dyn base26(<lang tryCatch(loadNamespace("Matrix"), error=function((e=), NULL, NULL))>);
    goto L51(r200);
  D40():
    deopt 197 [r139];
  D42():
    deopt 201 [r142];
  D49():
    deopt 240 [r188];
  D50():
    deopt 242 [r187, l25, r187];
  D60():
    deopt 270 [r198];
  D61():
    deopt 275 [];
  L52():
    goto L53();
  L53():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L240() else L241();
  L201():
    goto L45(r139);
  L204():
    r143 = `==`(r142, 1);
    c32 = `as.logical`(r143);
    if c32 then L205() else L46();
  L215():
    goto L47(r188);
  L216():
    r189 = dyn class__(l25, NULL, r187);
    check L217() else D51();
  L230():
    goto L50();
  L234():
    p31 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      r202 = dyn loadNamespace("Matrix");
      return r202;
    };
    p32 = prom<V +>{
      r204 = clos inner3708401697;
      return r204;
    };
    r206 = dyn tryCatch[, error](p31, p32);
    check L235() else D62();
  L236():
    stop4 = ldf stop;
    check L237() else D63();
  D51():
    deopt 244 [r187, r189];
  D62():
    deopt 279 [r206];
  D63():
    deopt 282 [];
  L46():
    lapply1 = ldf lapply;
    check L209() else D45();
  L54(r212):
    c41 = `as.logical`(r212);
    if c41 then L245() else L55();
  L205():
    tapply = ldf tapply;
    check L206() else D43();
  L217():
    st x = r189;
    match_call1 = ldf `match.call`;
    check L218() else D52();
  L235():
    c39 = `==`(r206, NULL);
    goto L51(c39);
  L237():
    p33 = prom<V +>{
      gettextf1 = ldf gettextf;
      r207 = dyn gettextf1("%s needs package 'Matrix' correctly installed", "xtabs(*, sparse=TRUE)");
      return r207;
    };
    r209 = dyn stop4[, domain](p33, NA_LGL);
    check L238() else D64();
  L240():
    unique = ldf unique;
    check L242() else D65();
  L241():
    r211 = dyn base27(<lang `<-`(i.ex, unique(unlist(lapply(by, function((f=), which(is.na(f)), NULL)))))>);
    goto L54(r211);
  D43():
    deopt 205 [];
  D45():
    deopt 215 [];
  D52():
    deopt 247 [];
  D64():
    deopt 286 [r209];
  D65():
    deopt 292 [];
  L55():
    goto L60();
  L60():
    na_rm5 = ld `na.rm`;
    check L259() else D73();
  L206():
    p16 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p17 = prom<V +>{
      by6 = ld by;
      by7 = force? by6;
      checkMissing(by7);
      return by7;
    };
    p18 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    p19 = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r148 = dyn tapply[, , , `na.rm`, default](p16, p17, p18, p19, 0);
    check L207() else D44();
  L209():
    p21 = prom<V +>{
      as_data_frame1 = ldf `as.data.frame`;
      p20 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r150 = dyn as_data_frame1(p20);
      return r150;
    };
    p22 = prom<V +>{
      tapply1 = ld tapply;
      tapply2 = force? tapply1;
      checkMissing(tapply2);
      return tapply2;
    };
    p23 = prom<V +>{
      by8 = ld by;
      by9 = force? by8;
      checkMissing(by9);
      return by9;
    };
    p24 = prom<V +>{
      sum2 = ld sum;
      sum3 = force? sum2;
      checkMissing(sum3);
      return sum3;
    };
    p25 = prom<V +>{
      na_rm3 = ld `na.rm`;
      na_rm4 = force? na_rm3;
      checkMissing(na_rm4);
      return na_rm4;
    };
    r156 = dyn lapply1[, , , , `na.rm`, default](p21, p22, p23, p24, p25, 0);
    check L210() else D46();
  L218():
    r190 = dyn match_call1();
    check L219() else D53();
  L238():
    goto L53();
  L242():
    p37 = prom<V +>{
      unlist1 = ldf unlist;
      p36 = prom<V +>{
        lapply2 = ldf lapply;
        p34 = prom<V +>{
          by12 = ld by;
          by13 = force? by12;
          checkMissing(by13);
          return by13;
        };
        p35 = prom<V +>{
          r214 = clos inner1384373858;
          return r214;
        };
        r216 = dyn lapply2(p34, p35);
        return r216;
      };
      r218 = dyn unlist1(p36);
      return r218;
    };
    r220 = dyn unique(p37);
    check L243() else D66();
  L245():
    lapply3 = ldf lapply;
    check L246() else D68();
  D44():
    deopt 213 [r148];
  D46():
    deopt 224 [r156];
  D53():
    deopt 248 [r190];
  D66():
    deopt 294 [r220];
  D68():
    deopt 299 [];
  D73():
    deopt 321 [na_rm5];
  L207():
    goto L45(r148);
  L210():
    st z = r156;
    array = ldf array;
    check L211() else D47();
  L219():
    l26 = ld x;
    attr__ = ldf `attr<-`;
    check L220() else D54();
  L243():
    st `i.ex` = r220;
    length3 = ldf length in base;
    r221 = dyn length3(r220);
    check L244() else D67();
  L246():
    p38 = prom<V +>{
      by14 = ld by;
      by15 = force? by14;
      checkMissing(by15);
      return by15;
    };
    p39 = prom<V +>{
      __5 = ld `[`;
      __6 = force? __5;
      checkMissing(__6);
      return __6;
    };
    p40 = prom<V +>{
      i_ex = ld `i.ex`;
      i_ex1 = force? i_ex;
      checkMissing(i_ex1);
      r224 = `-`(<missing>, i_ex1);
      return r224;
    };
    r226 = dyn lapply3(p38, p39, p40);
    check L247() else D69();
  L259():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    c45 = `as.logical`(na_rm6);
    if c45 then L260() else L61(c45);
  D47():
    deopt 227 [];
  D54():
    deopt 250 [r190, l26, r190];
  D67():
    deopt 297 [r221];
  D69():
    deopt 303 [r226];
  L61(c47):
    c55 = `as.logical`(c47);
    if c55 then L265() else L63(c55);
  L211():
    p27 = prom<V +>{
      unlist = ldf unlist;
      p26 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        return z1;
      };
      r158 = dyn unlist(p26);
      return r158;
    };
    p28 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L4() else L5();
    L0(r161):
      return r161;
    L4():
      sym18 = ldf dim;
      base18 = ldf dim in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L6() else L7();
    L5():
      r160 = dyn base17(<lang dim(`[[`(z, 1))>, <lang length(z)>);
      goto L0(r160);
    L1(r163):
      sym19 = ldf length;
      base19 = ldf length in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L11() else L12();
    L6():
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      c33 = `is.object`(z3);
      if c33 then L8() else L9(z3);
    L7():
      r162 = dyn base18(<lang `[[`(z, 1)>);
      goto L1(r162);
    L2(dx23):
      dim = ldf dim in base;
      r165 = dyn dim(dx23);
      goto L1(r165);
    L3(r167):
      c34 = ldf c in base;
      r169 = dyn c34(r163, r167);
      goto L0(r169);
    L8():
      dr22 = tryDispatchBuiltin.1("[[", z3);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L10() else L9(dr22);
    L9(z5):
      __3 = ldf `[[` in base;
      r164 = dyn __3(z5, 1);
      goto L2(r164);
    L11():
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      length1 = ldf length in base;
      r168 = dyn length1(z7);
      goto L3(r168);
    L12():
      r166 = dyn base19(<sym z>);
      goto L3(r166);
    L10():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx22);
    };
    p29 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L5() else L6();
    L0(r172):
      return r172;
    L5():
      sym21 = ldf dimnames;
      base21 = ldf dimnames in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L7() else L8();
    L6():
      r171 = dyn base20(<lang dimnames(`[[`(z, 1))>, <lang list(names(z))>);
      goto L0(r171);
    L1(r174):
      sym22 = ldf list;
      base22 = ldf list in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L12() else L13();
    L7():
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c35 = `is.object`(z9);
      if c35 then L9() else L10(z9);
    L8():
      r173 = dyn base21(<lang `[[`(z, 1)>);
      goto L1(r173);
    L2(dx25):
      dimnames = ldf dimnames in base;
      r176 = dyn dimnames(dx25);
      goto L1(r176);
    L3(r178):
      c36 = ldf c in base;
      r183 = dyn c36(r174, r178);
      goto L0(r183);
    L9():
      dr24 = tryDispatchBuiltin.1("[[", z9);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L11() else L10(dr24);
    L10(z11):
      __4 = ldf `[[` in base;
      r175 = dyn __4(z11, 1);
      goto L2(r175);
    L12():
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L14() else L15();
    L13():
      r177 = dyn base22(<lang names(z)>);
      goto L3(r177);
    L4(r180):
      list = ldf list in base;
      r182 = dyn list(r180);
      goto L3(r182);
    L11():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L2(dx24);
    L14():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      names1 = ldf names in base;
      r181 = dyn names1(z13);
      goto L4(r181);
    L15():
      r179 = dyn base23(<sym z>);
      goto L4(r179);
    };
    r185 = dyn array[, dim, dimnames](p27, p28, p29);
    check L212() else D48();
  L220():
    r191 = dyn attr__(l26, NULL, "call", r190);
    check L221() else D55();
  L244():
    goto L54(r221);
  L247():
    st by = r226;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L248() else L249();
  L260():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L261() else L262();
  D48():
    deopt 233 [r185];
  D55():
    deopt 253 [r190, r191];
  L56(r228):
    r229 = `!`(r228);
    c43 = `as.logical`(r229);
    if c43 then L251() else L57();
  L62(c50, r233):
    r234 = `!`(r233);
    c52 = `as.logical`(r234);
    c53 = `&&`(c50, c52);
    goto L61(c53);
  L63(c57):
    c67 = `as.logical`(c57);
    if c67 then L274() else L66();
  L212():
    goto L45(r185);
  L221():
    st x = r191;
    x = ld x;
    check L222() else D56();
  L248():
    y8 = ld y;
    check L250() else D70();
  L249():
    r227 = dyn base28(<sym y>);
    goto L56(r227);
  L261():
    y14 = ld y;
    check L263() else D74();
  L262():
    r232 = dyn base29(<sym y>);
    goto L62(c45, r232);
  L265():
    sym30 = ldf any;
    base30 = ldf any in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L266() else L267();
  D56():
    deopt 255 [x];
  D70():
    deopt 306 [y8];
  D74():
    deopt 324 [c45, y14];
  L57():
    goto L59(NULL);
  L59(dx28):
    goto L60();
  L64(c60, r236):
    c64 = `as.logical`(r236);
    c65 = `&&`(c60, c64);
    goto L63(c65);
  L66():
    goto L68();
  L68():
    by18 = ld by;
    check L284() else D83();
  L222():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  L250():
    y9 = force? y8;
    checkMissing(y9);
    c42 = `==`(y9, NULL);
    goto L56(c42);
  L251():
    y10 = ld y;
    check L252() else D71();
  L263():
    y15 = force? y14;
    checkMissing(y15);
    c51 = `==`(y15, NULL);
    goto L62(c45, c51);
  L266():
    sym31 = ldf `is.na`;
    base31 = ldf `is.na` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L268() else L269();
  L267():
    r235 = dyn base30(<lang `<-`(isN, is.na(y))>);
    goto L64(c55, r235);
  L274():
    isN = ld isN;
    check L275() else D78();
  D71():
    deopt 310 [y10];
  D78():
    deopt 341 [isN];
  D83():
    deopt 360 [by18];
  L65(c63, r238):
    st isN = r238;
    any1 = ldf any in base;
    r240 = dyn any1(r238);
    check L272() else D77();
  L252():
    y11 = force? y10;
    checkMissing(y11);
    c44 = `is.object`(y11);
    if c44 then L253() else L254(y11);
  L268():
    y16 = ld y;
    check L270() else D75();
  L269():
    r237 = dyn base31(<sym y>);
    goto L65(c55, r237);
  L275():
    isN1 = force? isN;
    checkMissing(isN1);
    r241 = `!`(isN1);
    st ok = r241;
    lapply4 = ldf lapply;
    check L276() else D79();
  L284():
    by19 = force? by18;
    checkMissing(by19);
    c69 = `is.object`(by19);
    if c69 then L285() else L286(by19);
  D75():
    deopt 333 [c55, y16];
  D77():
    deopt 339 [c63, r240];
  D79():
    deopt 346 [];
  L58(dx27):
    st y = dx27;
    goto L59(dx27);
  L69(dx34):
    st rows = dx34;
    by22 = ld by;
    check L288() else D84();
  L253():
    dr26 = tryDispatchBuiltin.1("[", y11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L255() else L254(dr26);
  L254(y13):
    i_ex2 = ld `i.ex`;
    check L256() else D72();
  L270():
    y17 = force? y16;
    checkMissing(y17);
    is_na = ldf `is.na` in base;
    r239 = dyn is_na(y17);
    check L271() else D76();
  L272():
    goto L64(c63, r240);
  L276():
    p41 = prom<V +>{
      by16 = ld by;
      by17 = force? by16;
      checkMissing(by17);
      return by17;
    };
    p42 = prom<V +>{
      __8 = ld `[`;
      __9 = force? __8;
      checkMissing(__9);
      return __9;
    };
    p43 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r245 = dyn lapply4(p41, p42, p43);
    check L277() else D80();
  L285():
    dr30 = tryDispatchBuiltin.1("[[", by19);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L287() else L286(dr30);
  L286(by21):
    __11 = ldf `[[` in base;
    r247 = dyn __11(by21, 1);
    goto L69(r247);
  D72():
    deopt 312 [y13, i_ex2];
  D76():
    deopt 336 [c55, r239];
  D80():
    deopt 350 [r245];
  D84():
    deopt 366 [by22];
  L255():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L58(dx26);
  L256():
    i_ex3 = force? i_ex2;
    checkMissing(i_ex3);
    r230 = `-`(<missing>, i_ex3);
    __7 = ldf `[` in base;
    r231 = dyn __7(y13, r230);
    goto L58(r231);
  L271():
    goto L65(c55, r239);
  L277():
    st by = r245;
    y18 = ld y;
    check L278() else D81();
  L287():
    dx33 = getTryDispatchBuiltinValue(dr30);
    goto L69(dx33);
  L288():
    by23 = force? by22;
    checkMissing(by23);
    c70 = `is.object`(by23);
    if c70 then L289() else L290(by23);
  D81():
    deopt 352 [y18];
  L70(dx36):
    st cols = dx36;
    lapply5 = ldf lapply;
    check L292() else D85();
  L278():
    y19 = force? y18;
    checkMissing(y19);
    c68 = `is.object`(y19);
    if c68 then L279() else L280(y19);
  L289():
    dr32 = tryDispatchBuiltin.1("[[", by23);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L291() else L290(dr32);
  L290(by25):
    __12 = ldf `[[` in base;
    r248 = dyn __12(by25, 2);
    goto L70(r248);
  D85():
    deopt 373 [];
  L67(dx31):
    st y = dx31;
    goto L68();
  L279():
    dr28 = tryDispatchBuiltin.1("[", y19);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L281() else L280(dr28);
  L280(y21):
    ok2 = ld ok;
    check L282() else D82();
  L291():
    dx35 = getTryDispatchBuiltinValue(dr32);
    goto L70(dx35);
  L292():
    p44 = prom<V +>{
      by26 = ld by;
      by27 = force? by26;
      checkMissing(by27);
      return by27;
    };
    p45 = prom<V +>{
      levels = ld levels;
      levels1 = force? levels;
      checkMissing(levels1);
      return levels1;
    };
    r251 = dyn lapply5(p44, p45);
    check L293() else D86();
  D82():
    deopt 354 [y21, ok2];
  D86():
    deopt 376 [r251];
  L281():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L67(dx30);
  L282():
    ok3 = force? ok2;
    __10 = ldf `[` in base;
    r246 = dyn __10(y21, ok3);
    goto L67(r246);
  L293():
    st dnms = r251;
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L294() else L295();
  L71(r253):
    c72 = `as.logical`(r253);
    if c72 then L297() else L72();
  L294():
    y22 = ld y;
    check L296() else D87();
  L295():
    r252 = dyn base32(<sym y>);
    goto L71(r252);
  D87():
    deopt 379 [y22];
  L72():
    sym35 = ldf `as.double`;
    base35 = ldf `as.double` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L306() else L307();
  L75(r260):
    st x = r260;
    __13 = ldf `::`;
    check L310() else D93();
  L296():
    y23 = force? y22;
    checkMissing(y23);
    c71 = `==`(y23, NULL);
    goto L71(c71);
  L297():
    sym33 = ldf `rep.int`;
    base33 = ldf `rep.int` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L298() else L299();
  D93():
    deopt 401 [];
  L73(r255):
    goto L75(r255);
  L298():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L300() else L301();
  L299():
    r254 = dyn base33(1.0, <lang length(rows)>);
    goto L73(r254);
  L306():
    y24 = ld y;
    check L308() else D91();
  L307():
    r261 = dyn base35(<sym y>);
    goto L75(r261);
  L310():
    r263 = dyn __13("methods", "as");
    check L311() else D94();
  D91():
    deopt 395 [y24];
  D94():
    deopt 404 [r263];
  L74(r257):
    rep_int = ldf `rep.int` in base;
    r259 = dyn rep_int(1.0, r257);
    check L304() else D90();
  L300():
    rows = ld rows;
    check L302() else D88();
  L301():
    r256 = dyn base34(<sym rows>);
    goto L74(r256);
  L308():
    y25 = force? y24;
    checkMissing(y25);
    as_double = ldf `as.double` in base;
    r262 = dyn as_double(y25);
    check L309() else D92();
  L311():
    checkFun.0(r263);
    r264 = r263 as cls;
    p52 = prom<V +>{
      __14 = ldf `::`;
      r265 = dyn __14("methods", "new");
      checkFun.0(r265);
      r266 = r265 as cls;
      p46 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      p47 = prom<V +>{
        dnms = ld dnms;
        dnms1 = force? dnms;
        checkMissing(dnms1);
        return dnms1;
      };
      p48 = prom<V +>{
        sym36 = ldf `as.integer`;
        base36 = ldf `as.integer` in base;
        guard36 = `==`.4(sym36, base36);
        if guard36 then L1() else L2();
      L0(r270):
        r272 = `-`(r270, 1);
        return r272;
      L1():
        rows2 = ld rows;
        rows3 = force? rows2;
        checkMissing(rows3);
        as_integer = ldf `as.integer` in base;
        r271 = dyn as_integer(rows3);
        goto L0(r271);
      L2():
        r269 = dyn base36(<sym rows>);
        goto L0(r269);
      };
      p49 = prom<V +>{
        sym37 = ldf `as.integer`;
        base37 = ldf `as.integer` in base;
        guard37 = `==`.4(sym37, base37);
        if guard37 then L1() else L2();
      L0(r275):
        r277 = `-`(r275, 1);
        return r277;
      L1():
        cols = ld cols;
        cols1 = force? cols;
        checkMissing(cols1);
        as_integer1 = ldf `as.integer` in base;
        r276 = dyn as_integer1(cols1);
        goto L0(r276);
      L2():
        r274 = dyn base37(<sym cols>);
        goto L0(r274);
      };
      p51 = prom<V +>{
        lengths = ldf lengths;
        p50 = prom<V +>{
          dnms2 = ld dnms;
          dnms3 = force? dnms2;
          checkMissing(dnms3);
          return dnms3;
        };
        r280 = dyn lengths[, `use.names`](p50, FALSE);
        return r280;
      };
      r282 = dyn r266[, x, Dimnames, i, j, Dim]("dgTMatrix", p46, p47, p48, p49, p51);
      return r282;
    };
    r284 = dyn r264(p52, "CsparseMatrix");
    check L312() else D95();
  D88():
    deopt 387 [rows];
  D90():
    deopt 392 [r259];
  D92():
    deopt 398 [r262];
  D95():
    deopt 408 [r284];
  L302():
    rows1 = force? rows;
    checkMissing(rows1);
    length4 = ldf length in base;
    r258 = dyn length4(rows1);
    check L303() else D89();
  L304():
    goto L73(r259);
  L309():
    goto L75(r262);
  L312():
    popenv;
    return r284;
  D89():
    deopt 390 [r258];
  L303():
    goto L74(r258);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg is_factor:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg factor:cls, reg u3:*, reg u4:V, reg p1:p(V +), reg exclude:*, reg exclude1:V, reg p2:p(V +), reg r5:V, reg has_exclude:*, reg has_exclude1:V, reg c1:L, reg factor1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg u5:*, reg u6:V, reg as_character:cls, reg r9:V, reg p3:p(V +), reg setdiff:cls, reg levels:cls, reg u7:*, reg u8:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg exclude2:*, reg exclude3:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg addNA:*, reg addNA1:V, reg c2:L, reg addNA2:cls, reg u9:*, reg u10:V, reg p8:p(V +), reg r19:V, reg u11:*, reg u12:V, reg c3:L, reg u14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg drop_unused_levels:*, reg drop_unused_levels1:V, reg __:cls, reg r21:V |
    mkenv;
    st u = u;
    is_factor = ldf `is.factor`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r1 = dyn is_factor(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L8() else L0();
  L0():
    has_exclude = ld `has.exclude`;
    check L12() else D4();
  L1():
    addNA = ld addNA;
    check L17() else D7();
  L8():
    factor = ldf factor;
    check L9() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [has_exclude];
  D7():
    deopt 25 [addNA];
  L9():
    p1 = prom<V +>{
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    p2 = prom<V +>{
      exclude = ld exclude;
      exclude1 = force? exclude;
      checkMissing(exclude1);
      return exclude1;
    };
    r5 = dyn factor[, exclude](p1, p2);
    check L10() else D3();
  L12():
    has_exclude1 = force? has_exclude;
    checkMissing(has_exclude1);
    c1 = `as.logical`(has_exclude1);
    if c1 then L13() else L2();
  L17():
    addNA1 = force? addNA;
    checkMissing(addNA1);
    c2 = `as.logical`(addNA1);
    if c2 then L18() else L3();
  D3():
    deopt 10 [r5];
  L2():
    goto L1();
  L3():
    goto L4();
  L4():
    u11 = ld u;
    check L22() else D10();
  L10():
    st u = r5;
    goto L1();
  L13():
    factor1 = ldf factor;
    check L14() else D5();
  L18():
    addNA2 = ldf addNA;
    check L19() else D8();
  D5():
    deopt 15 [];
  D8():
    deopt 28 [];
  D10():
    deopt 36 [u11];
  L14():
    p3 = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      u5 = ld u;
      u6 = force? u5;
      checkMissing(u6);
      as_character = ldf `as.character` in base;
      r9 = dyn as_character(u6);
      goto L0(r9);
    L2():
      r7 = dyn base(<sym u>);
      goto L0(r7);
    };
    p7 = prom<V +>{
      setdiff = ldf setdiff;
      p5 = prom<V +>{
        levels = ldf levels;
        p4 = prom<V +>{
          u7 = ld u;
          u8 = force? u7;
          checkMissing(u8);
          return u8;
        };
        r12 = dyn levels(p4);
        return r12;
      };
      p6 = prom<V +>{
        exclude2 = ld exclude;
        exclude3 = force? exclude2;
        checkMissing(exclude3);
        return exclude3;
      };
      r15 = dyn setdiff(p5, p6);
      return r15;
    };
    r17 = dyn factor1[, levels, exclude](p3, p7, NULL);
    check L15() else D6();
  L19():
    p8 = prom<V +>{
      u9 = ld u;
      u10 = force? u9;
      checkMissing(u10);
      return u10;
    };
    r19 = dyn addNA2[, ifany](p8, TRUE);
    check L20() else D9();
  L22():
    u12 = force? u11;
    checkMissing(u12);
    c3 = `is.object`(u12);
    if c3 then L23() else L24(u12);
  D6():
    deopt 21 [r17];
  D9():
    deopt 32 [r19];
  L5(dx1):
    popenv;
    return dx1;
  L15():
    st u = r17;
    goto L1();
  L20():
    st u = r19;
    goto L4();
  L23():
    dr = tryDispatchBuiltin.1("[", u12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(u14):
    drop_unused_levels = ld `drop.unused.levels`;
    check L26() else D11();
  D11():
    deopt 39 [u14, drop_unused_levels];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    drop_unused_levels1 = force? drop_unused_levels;
    __ = ldf `[` in base;
    r21 = dyn __(u12, <missing>, drop_unused_levels1);
    goto L5(r21);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg which:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg is_na:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st f = f;
    which = ldf which;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      is_na = ldf `is.na` in base;
      r2 = dyn is_na(f2);
      goto L0(r2);
    L2():
      r = dyn base(<sym f>);
      goto L0(r);
    };
    r4 = dyn which(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}