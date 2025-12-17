fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1385503804;
    st rbind = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1385503804(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg deparse_level1:*, reg deparse_level2:V, reg as_integer:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg deparse_level3:*, reg deparse_level4:V, reg identical:cls, reg r9:V, reg c:L, reg stopifnot:cls, reg deparse_level5:*, reg deparse_level6:V, reg r11:V, reg p:p(V +), reg deparse_level7:*, reg deparse_level8:V, reg r13:V, reg p1:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg list:cls, reg ddd1:dots?, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg nargs:cls, reg r21:V, reg has_dl:*, reg has_dl1:V, reg r22:V, reg na:*, reg na1:V, reg r23:V, reg c1:L, reg c3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c6:L, reg r25:V, reg argl:*, reg argl1:V, reg c7:L, reg c9:L, reg argl3:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg na2:*, reg na3:V, reg __:cls, reg r26:V, reg c12:V, reg c13:L, reg c14:V, reg c16:L, reg argl4:*, reg argl5:V, reg c17:L, reg argl7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg na4:*, reg na5:V, reg r27:V, reg __1:cls, reg r28:V, reg na6:*, reg na7:V, reg r29:V, reg na8:*, reg na9:V, reg r30:V, reg c18:L, reg as_list:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg substitute:cls, reg r35:V, reg p2:p(V +), reg r37:V, reg c19:L, reg r39:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg symarg:*, reg symarg1:V, reg names:cls, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg r46:cls, reg r47:cls, reg r48:cls, reg c20:cls, reg r49:V, reg c21:L, reg r51:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg deparse_level9:*, reg deparse_level10:V, reg r52:V, reg __3:cls, reg r53:V, reg r54:cls, reg na10:*, reg na11:V, reg r55:V, reg c22:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg __4:*, reg __5:V, reg isS4:cls, reg r58:V, reg c23:L, reg rbind2:cls, reg __6:*, reg __7:V, reg p3:p(V +), reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r63:V, reg r64:V, reg __8:*, reg __9:V, reg dim:cls, reg r65:V, reg length:cls, reg r66:V, reg r67:V, reg c24:L, reg c26:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg c29:L, reg r69:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r70:V, reg c32:L, reg r71:V, reg r72:*, reg r73:V, reg dim1:cls, reg r74:V, reg length1:cls, reg r75:V, reg r76:V, reg c33:L, reg c34:V, reg c36:L, reg Nms:cls, reg r77:V, reg l:*, reg rownames__:cls, reg r78:V, reg r80:*, reg r81:V, reg __10:cls, reg r84:V, reg r85:cls, reg ddd2:dots?, reg deparse_level11:*, reg deparse_level12:V, reg p4:p(V +), reg r87:V, reg na12:*, reg na13:V, reg r89:V, reg c37:L, reg unname:cls, reg lapply:cls, reg argl8:*, reg argl9:V, reg p5:p(V +), reg ncol:*, reg ncol1:V, reg p6:p(V +), reg r93:V, reg p7:p(V +), reg r95:V, reg vapply:cls, reg nrs:*, reg nrs1:V, reg p8:p(V +), reg is_null:*, reg is_null1:V, reg p9:p(V +), reg r98:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg r100:V, reg nrs2:*, reg nrs3:V, reg c38:L, reg nrs5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg na14:*, reg na15:V, reg r101:V, reg na16:*, reg na17:V, reg r102:V, reg __11:cls, reg r103:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg r105:V, reg list1:cls, reg r106:V, reg identical1:cls, reg r107:V, reg fix_na:*, reg fix_na1:V, reg c39:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r108:V, reg r109:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg iV:*, reg iV1:V, reg all:cls, reg r112:V, reg c40:L, reg lengths:cls, reg argl10:*, reg argl11:V, reg p10:p(V +), reg r114:V, reg r115:V, reg unlist:cls, reg nrs6:*, reg nrs7:V, reg c41:L, reg nrs9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg iV2:*, reg iV3:V, reg r116:V, reg __12:cls, reg r117:V, reg p11:p(V +), reg r119:V, reg max:cls, reg r120:V, reg rbind3:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r121:V, reg r122:V, reg rep:cls, reg r123:V, reg p12:p(V +), reg r125:V, reg l1:*, reg c42:L, reg r127:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r129:V, reg dx13:V, reg na18:*, reg na19:V, reg ____:cls, reg r130:V, reg fix_na2:*, reg fix_na3:V, reg c43:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r132:V, reg r133:V, reg Nms1:cls, reg na20:*, reg na21:V, reg p13:p(V +), reg r135:V, reg c44:V, reg r136:V, reg r137:cls, reg r138:cls, reg argl12:*, reg argl13:V, reg c45:L, reg argl15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg na22:*, reg na23:V, reg __13:cls, reg r139:V, reg na24:*, reg na25:V, reg r140:V, reg r141:V, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c46:L, reg x:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg i7:I, reg r143:V, reg r144:*, reg r145:V, reg dim2:cls, reg r146:V, reg rbind4:cls, reg argl16:*, reg argl17:V, reg c47:L, reg argl19:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg i8:*, reg i9:V, reg __14:cls, reg r147:V, reg p14:p(V +), reg r149:*, reg r150:V, reg p15:p(V +), reg r152:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r153:V, reg i12:I, reg r154:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r155:V, reg i15:I, reg r156:V, reg argl20:*, reg argl21:V, reg c48:L, reg i17:I, reg argl23:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i19:I, reg dx19:V, reg i20:*, reg i21:V, reg __15:cls, reg r157:V, reg dim3:cls, reg r158:V, reg c49:V, reg r159:V, reg c50:L, reg i23:I, reg c52:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r160:V, reg i26:I, reg c55:L, reg r161:V, reg d1:*, reg d2:V, reg length2:cls, reg r162:V, reg r163:V, reg c56:L, reg c57:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r164:V, reg i30:I, reg r165:V, reg d3:*, reg d4:V, reg c59:V, reg r166:V, reg c60:L, reg i32:I, reg c62:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r167:V, reg i35:I, reg c65:L, reg r168:V, reg d5:*, reg d6:V, reg length3:cls, reg r169:V, reg r170:V, reg c66:L, reg c67:V, reg ism1:*, reg ism2:V, reg c69:L, reg i38:I, reg c71:V, reg ism3:*, reg ism4:V, reg c72:L, reg c73:V, reg c75:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r172:V, reg i46:I, reg r173:V, reg Nrow:cls, reg argl24:*, reg argl25:V, reg c76:L, reg argl27:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg i47:*, reg i48:V, reg __16:cls, reg r174:V, reg p16:p(V +), reg r176:V, reg c77:L, reg i50:I, reg c79:V, reg ism5:*, reg ism6:V, reg r177:V, reg c80:L, reg c81:V, reg c83:L, reg Nms2:cls, reg i54:*, reg i55:V, reg p17:p(V +), reg r179:V, reg i56:I, reg r180:V, reg c84:V, reg r181:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r182:V, reg i59:I, reg r183:V, reg i60:*, reg i61:V, reg na26:*, reg na27:V, reg r184:V, reg r185:V, reg c85:L, reg i63:I, reg c87:V, reg Nrow1:cls, reg argl28:*, reg argl29:V, reg c88:L, reg argl31:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg na28:*, reg na29:V, reg __17:cls, reg r186:V, reg p18:p(V +), reg r188:V, reg c89:L, reg c90:V, reg c92:L, reg i66:I, reg c94:V, reg ism7:*, reg ism8:V, reg r189:V, reg c95:L, reg c96:V, reg c98:L, reg Nms3:cls, reg na30:*, reg na31:V, reg p19:p(V +), reg r191:V, reg i70:I, reg r192:V, reg c99:V, reg r193:V, reg nn1:*, reg nn2:V, reg c100:L, reg i71:I, reg c101:V, reg nn3:*, reg nn4:V, reg c103:L, reg c104:V, reg c106:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r194:V, reg i78:I, reg r195:V, reg rownames:cls, reg r196:*, reg r197:V, reg p20:p(V +), reg r199:V, reg c107:V, reg c108:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r200:V, reg i83:I, reg r201:V, reg nrow:cls, reg r202:*, reg r203:V, reg p21:p(V +), reg r205:V, reg rep_int:cls, reg r206:V, reg l5:*, reg rownames__1:cls, reg r207:V, reg i84:I, reg nn5:*, reg nn6:V, reg c109:L, reg setN:cls, reg N1:*, reg N2:V, reg p22:p(V +), reg r210:V, reg i87:I, reg nn7:*, reg nn8:V, reg c110:L, reg setN1:cls, reg l6:*, reg l7:V, reg r212:V, reg p23:p(V +), reg N3:*, reg N4:V, reg p24:p(V +), reg r215:V, reg i90:I, reg r216:V, reg i91:I, reg fix_na4:*, reg fix_na5:V, reg c111:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r218:V, reg r219:V, reg rownames1:cls, reg r220:*, reg r221:V, reg p25:p(V +), reg r223:V, reg c112:V, reg c113:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r224:V, reg r225:V, reg nrow1:cls, reg r226:*, reg r227:V, reg p26:p(V +), reg r229:V, reg rep_int1:cls, reg r230:V, reg l8:*, reg rownames__2:cls, reg r231:V, reg setN2:cls, reg nrow2:cls, reg r233:*, reg r234:V, reg p27:p(V +), reg r236:V, reg p28:p(V +), reg Nna:*, reg Nna1:V, reg p29:p(V +), reg r239:V, reg r241:*, reg r242:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L1(r1):
    r3 = `!`(r1);
    st `has.dl` = r3;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L89() else L90();
  L87():
    missing = ldf missing in base;
    r2 = dyn missing(<sym deparse.level>);
    goto L1(r2);
  L88():
    r = dyn base(<sym deparse.level>);
    goto L1(r);
  L2(r5):
    st `deparse.level` = r5;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L93() else L94();
  L89():
    deparse_level1 = ld `deparse.level`;
    check L91() else D0();
  L90():
    r4 = dyn base1(<sym deparse.level>);
    goto L2(r4);
  D0():
    deopt 7 [deparse_level1];
  L3(r8):
    c = `as.logical`(r8);
    if c then L97() else L4();
  L91():
    deparse_level2 = force? deparse_level1;
    checkMissing(deparse_level2);
    as_integer = ldf `as.integer` in base;
    r6 = dyn as_integer(deparse_level2);
    check L92() else D1();
  L93():
    deparse_level3 = ld `deparse.level`;
    check L95() else D2();
  L94():
    r7 = dyn base2(<sym deparse.level>, <lang `-`(1)>);
    goto L3(r7);
  D1():
    deopt 10 [r6];
  D2():
    deopt 14 [deparse_level3];
  L4():
    goto L5();
  L5():
    stopifnot = ldf stopifnot;
    check L99() else D4();
  L92():
    goto L2(r6);
  L95():
    deparse_level4 = force? deparse_level3;
    checkMissing(deparse_level4);
    identical = ldf identical in base;
    r9 = dyn identical(deparse_level4, -1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L96() else D3();
  L97():
    st `deparse.level` = 0;
    goto L5();
  D3():
    deopt 26 [r9];
  D4():
    deopt 33 [];
  L96():
    goto L3(r9);
  L99():
    p = prom<V +>{
      deparse_level5 = ld `deparse.level`;
      deparse_level6 = force? deparse_level5;
      checkMissing(deparse_level6);
      r11 = `<=`(0.0, deparse_level6);
      return r11;
    };
    p1 = prom<V +>{
      deparse_level7 = ld `deparse.level`;
      deparse_level8 = force? deparse_level7;
      checkMissing(deparse_level8);
      r13 = `<=`(deparse_level8, 2.0);
      return r13;
    };
    r15 = dyn stopifnot(p, p1);
    check L100() else D5();
  D5():
    deopt 36 [r15];
  L100():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L101() else L102();
  L6(r17):
    st argl = r17;
    sym4 = ldf nargs;
    base4 = ldf nargs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L105() else L106();
  L101():
    list = ldf list;
    check L103() else D6();
  L102():
    r16 = dyn base3(<sym ...>);
    goto L6(r16);
  D6():
    deopt 39 [];
  L7(r20):
    has_dl = ld `has.dl`;
    check L108() else D9();
  L103():
    ddd1 = ld `...`;
    r18 = dyn list[`...`](ddd1);
    check L104() else D7();
  L105():
    nargs = ldf nargs in base;
    r21 = dyn nargs();
    check L107() else D8();
  L106():
    r19 = dyn base4();
    goto L7(r19);
  D7():
    deopt 41 [r18];
  D8():
    deopt 46 [r21];
  D9():
    deopt 46 [r20, has_dl];
  L104():
    goto L6(r18);
  L107():
    goto L7(r21);
  L108():
    has_dl1 = force? has_dl;
    checkMissing(has_dl1);
    r22 = `-`(r20, has_dl1);
    st na = r22;
    goto L13();
  L13():
    na = ld na;
    check L109() else D10();
  D10():
    deopt 50 [na];
  L109():
    na1 = force? na;
    checkMissing(na1);
    r23 = `>`(na1, 0);
    c1 = `as.logical`(r23);
    if c1 then L110() else L8(c1);
  L8(c3):
    c16 = `as.logical`(c3);
    if c16 then L119() else L11();
  L110():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L111() else L112();
  L9(c6, r25):
    c13 = `as.logical`(r25);
    c14 = `&&`(c6, c13);
    goto L8(c14);
  L11():
    na8 = ld na;
    check L127() else D16();
  L111():
    argl = ld argl;
    check L113() else D11();
  L112():
    r24 = dyn base5(<lang `[[`(argl, na)>);
    goto L9(c1, r24);
  L119():
    argl4 = ld argl;
    check L120() else D13();
  D11():
    deopt 55 [c1, argl];
  D13():
    deopt 62 [argl4];
  D16():
    deopt 77 [na8];
  L113():
    argl1 = force? argl;
    checkMissing(argl1);
    c7 = `is.object`(argl1);
    if c7 then L114() else L115(c1, argl1);
  L120():
    argl5 = force? argl4;
    checkMissing(argl5);
    c17 = `is.object`(argl5);
    if c17 then L121() else L122(argl5);
  L127():
    na9 = force? na8;
    checkMissing(na9);
    r30 = `==`(na9, 0.0);
    c18 = `as.logical`(r30);
    if c18 then L128() else L14();
  L10(c11, dx1):
    c12 = `==`(dx1, NULL);
    goto L9(c11, c12);
  L12(dx3):
    st argl = dx3;
    na6 = ld na;
    check L125() else D15();
  L14():
    as_list = ldf `as.list`;
    check L131() else D17();
  L114():
    dr = tryDispatchBuiltin.1("[[", argl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L116() else L115(c1, dr);
  L115(c9, argl3):
    na2 = ld na;
    check L117() else D12();
  L121():
    dr2 = tryDispatchBuiltin.1("[", argl5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L123() else L122(dr2);
  L122(argl7):
    na4 = ld na;
    check L124() else D14();
  L128():
    popenv;
    return NULL;
  D12():
    deopt 57 [c9, argl3, na2];
  D14():
    deopt 64 [argl7, na4];
  D15():
    deopt 69 [na6];
  D17():
    deopt 87 [];
  L116():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(c1, dx);
  L117():
    na3 = force? na2;
    __ = ldf `[[` in base;
    r26 = dyn __(argl3, na3);
    goto L10(c9, r26);
  L123():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L124():
    na5 = force? na4;
    checkMissing(na5);
    r27 = `-`(<missing>, na5);
    __1 = ldf `[` in base;
    r28 = dyn __1(argl7, r27);
    goto L12(r28);
  L125():
    na7 = force? na6;
    checkMissing(na7);
    r29 = `-`(na7, 1);
    st na = r29;
    goto L13();
  L131():
    p2 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      substitute = ldf substitute in base;
      r35 = dyn substitute(<lang list(...)>);
      goto L0(r35);
    L2():
      r33 = dyn base6(<lang list(...)>);
      goto L0(r33);
    };
    r37 = dyn as_list(p2);
    check L132() else D18();
  D18():
    deopt 89 [r37];
  L132():
    c19 = `is.object`(r37);
    if c19 then L133() else L134(r37);
  L16(dx5):
    st symarg = dx5;
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L136() else L137();
  L133():
    dr4 = tryDispatchBuiltin.1("[", r37);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L135() else L134(dr4);
  L134(r39):
    __2 = ldf `[` in base;
    r40 = dyn __2(r39, -1);
    goto L16(r40);
  L17(r42):
    st nmsym = r42;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L140() else L141();
  L135():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L136():
    symarg = ld symarg;
    check L138() else D19();
  L137():
    r41 = dyn base7(<sym symarg>);
    goto L17(r41);
  D19():
    deopt 96 [symarg];
  L18(r45):
    c21 = `is.object`(r45);
    if c21 then L143() else L144(r45);
  L138():
    symarg1 = force? symarg;
    checkMissing(symarg1);
    names = ldf names in base;
    r43 = dyn names(symarg1);
    check L139() else D20();
  L140():
    r46 = clos inner3002224933;
    r47 = clos inner3002224933;
    r48 = clos inner3002224933;
    c20 = ldf c in base;
    r49 = dyn c20(r46, r47, r48);
    check L142() else D21();
  L141():
    r44 = dyn base8(<lang function((i=), NULL, NULL)>, <lang function((i=), if(is.symbol(`<-`(s, `[[`(symarg, i))), deparse(s), NULL), NULL)>, <lang function((i=), `[[`(deparse(`[[`(symarg, i)), 1), NULL)>);
    goto L18(r44);
  D20():
    deopt 99 [r43];
  D21():
    deopt 110 [r49];
  L19(dx7):
    st nm = dx7;
    r54 = clos inner3002224933;
    st Nms = r54;
    na10 = ld na;
    check L147() else D23();
  L139():
    goto L17(r43);
  L142():
    goto L18(r49);
  L143():
    dr6 = tryDispatchBuiltin.1("[[", r45);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L145() else L144(dr6);
  L144(r51):
    deparse_level9 = ld `deparse.level`;
    check L146() else D22();
  D22():
    deopt 112 [r51, 1, deparse_level9];
  D23():
    deopt 120 [na10];
  L145():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(dx6);
  L146():
    deparse_level10 = force? deparse_level9;
    checkMissing(deparse_level10);
    r52 = `+`(1, deparse_level10);
    __3 = ldf `[[` in base;
    r53 = dyn __3(r51, r52);
    goto L19(r53);
  L147():
    na11 = force? na10;
    checkMissing(na11);
    r55 = `==`(na11, 1.0);
    c22 = `as.logical`(r55);
    if c22 then L148() else L20();
  L20():
    na12 = ld na;
    check L186() else D42();
  L148():
    sym9 = ldf isS4;
    base9 = ldf isS4 in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L149() else L150();
  D42():
    deopt 187 [na12];
  L21(r57):
    c23 = `as.logical`(r57);
    if c23 then L153() else L22();
  L149():
    __4 = ld `..1`;
    check L151() else D24();
  L150():
    r56 = dyn base9(<sym ..1>);
    goto L21(r56);
  L186():
    na13 = force? na12;
    checkMissing(na13);
    r89 = `==`(na13, 2.0);
    c37 = `as.logical`(r89);
    if c37 then L187() else L32();
  D24():
    deopt 126 [__4];
  L22():
    __10 = ldf `::`;
    check L181() else D39();
  L32():
    unname = ldf unname;
    check L189() else D43();
  L33():
    r137 = clos inner2501545716;
    st Nrow = r137;
    r138 = clos inner3292214066;
    st setN = r138;
    argl12 = ld argl;
    check L234() else D66();
  L151():
    __5 = force? __4;
    checkMissing(__5);
    isS4 = ldf isS4 in base;
    r58 = dyn isS4(__5);
    check L152() else D25();
  L153():
    rbind2 = ldf rbind2;
    check L154() else D26();
  L187():
    st `fix.na` = FALSE;
    goto L33();
  D25():
    deopt 129 [r58];
  D26():
    deopt 131 [];
  D39():
    deopt 175 [];
  D43():
    deopt 195 [];
  D66():
    deopt 286 [argl12];
  L152():
    goto L21(r58);
  L154():
    p3 = prom<V +>{
      __6 = ld `..1`;
      __7 = force? __6;
      checkMissing(__7);
      return __7;
    };
    r60 = dyn rbind2(p3);
    check L155() else D27();
  L181():
    r84 = dyn __10("base", "rbind");
    check L182() else D40();
  L189():
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        argl8 = ld argl;
        argl9 = force? argl8;
        checkMissing(argl9);
        return argl9;
      };
      p6 = prom<V +>{
        ncol = ld ncol;
        ncol1 = force? ncol;
        checkMissing(ncol1);
        return ncol1;
      };
      r93 = dyn lapply(p5, p6);
      return r93;
    };
    r95 = dyn unname(p7);
    check L190() else D44();
  L234():
    argl13 = force? argl12;
    checkMissing(argl13);
    c45 = `is.object`(argl13);
    if c45 then L235() else L236(argl13);
  D27():
    deopt 133 [r60];
  D40():
    deopt 178 [r84];
  D44():
    deopt 197 [r95];
  L46(dx15):
    st r = dx15;
    na24 = ld na;
    check L239() else D68();
  L155():
    st r = r60;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L156() else L157();
  L182():
    checkFun.0(r84);
    r85 = r84 as cls;
    ddd2 = ld `...`;
    p4 = prom<V +>{
      deparse_level11 = ld `deparse.level`;
      deparse_level12 = force? deparse_level11;
      checkMissing(deparse_level12);
      return deparse_level12;
    };
    r87 = dyn r85[`...`, `deparse.level`](ddd2, p4);
    check L183() else D41();
  L190():
    st nrs = r95;
    vapply = ldf vapply;
    check L191() else D45();
  L235():
    dr14 = tryDispatchBuiltin.1("[[", argl13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L237() else L236(dr14);
  L236(argl15):
    na22 = ld na;
    check L238() else D67();
  D41():
    deopt 183 [r87];
  D45():
    deopt 200 [];
  D67():
    deopt 288 [argl15, na22];
  D68():
    deopt 292 [na24];
  L23(r62):
    r67 = `<`(r62, 2);
    c24 = `as.logical`(r67);
    if c24 then L163() else L25(c24);
  L156():
    sym11 = ldf dim;
    base11 = ldf dim in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L158() else L159();
  L157():
    r61 = dyn base10(<lang dim(..1)>);
    goto L23(r61);
  L183():
    popenv;
    return r87;
  L191():
    p8 = prom<V +>{
      nrs = ld nrs;
      nrs1 = force? nrs;
      checkMissing(nrs1);
      return nrs1;
    };
    p9 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r98 = dyn vapply(p8, p9, NA_LGL);
    check L192() else D46();
  L237():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx14);
  L238():
    na23 = force? na22;
    __13 = ldf `[[` in base;
    r139 = dyn __13(argl15, na23);
    goto L46(r139);
  L239():
    na25 = force? na24;
    checkMissing(na25);
    r140 = `-`(na25, 1);
    r141 = `:`(r140, 1);
    s = toForSeq(r141);
    l4 = length(s);
    i = 0;
    goto L47(i);
  D46():
    deopt 204 [r98];
  L24(r64):
    length = ldf length in base;
    r66 = dyn length(r64);
    check L162() else D30();
  L25(c26):
    c36 = `as.logical`(c26);
    if c36 then L172() else L28();
  L47(i1):
    i2 = `+`.1(i1, 1);
    c46 = `<`.1(l4, i2);
    if c46 then L240() else L80();
  L158():
    __8 = ld `..1`;
    check L160() else D28();
  L159():
    r63 = dyn base11(<sym ..1>);
    goto L24(r63);
  L163():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L164() else L165();
  L192():
    st iV = r98;
    sym14 = ldf identical;
    base14 = ldf identical in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L193() else L194();
  D28():
    deopt 139 [__8];
  D30():
    deopt 144 [r66];
  L26(c29, r69):
    r76 = `==`(r69, 2);
    c33 = `as.logical`(r76);
    c34 = `&&`(c29, c33);
    goto L25(c34);
  L28():
    goto L29();
  L29():
    r80 = ld r;
    check L178() else D38();
  L34(r100):
    st `fix.na` = r100;
    fix_na = ld `fix.na`;
    check L205() else D52();
  L80():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym20 = ldf dim;
    base20 = ldf dim in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L241() else L242();
  L160():
    __9 = force? __8;
    checkMissing(__9);
    dim = ldf dim in base;
    r65 = dyn dim(__9);
    check L161() else D29();
  L162():
    goto L23(r66);
  L164():
    sym13 = ldf dim;
    base13 = ldf dim in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L165():
    r68 = dyn base12(<lang dim(r)>);
    goto L26(c24, r68);
  L172():
    Nms = ldf Nms;
    check L173() else D34();
  L193():
    nrs2 = ld nrs;
    check L195() else D47();
  L194():
    r99 = dyn base14(<lang `[`(nrs, `:`(`(`(`-`(na, 1)), na))>, <lang list(NULL, NULL)>);
    goto L34(r99);
  L240():
    fix_na4 = ld `fix.na`;
    check L334() else D110();
  D29():
    deopt 142 [r65];
  D34():
    deopt 161 [];
  D38():
    deopt 171 [r80];
  D47():
    deopt 208 [nrs2];
  D52():
    deopt 233 [fix_na];
  D110():
    deopt 454 [fix_na4];
  L27(c32, r71):
    length1 = ldf length in base;
    r75 = dyn length1(r71);
    check L170() else D33();
  L48(i7, r143):
    st d2 = r143;
    rbind4 = ldf rbind2;
    check L245() else D71();
  L161():
    goto L24(r65);
  L166():
    r72 = ld r;
    check L168() else D31();
  L167():
    r70 = dyn base13(<sym r>);
    goto L27(c24, r70);
  L173():
    r77 = dyn Nms(1.0);
    check L174() else D35();
  L178():
    r81 = force? r80;
    checkMissing(r81);
    popenv;
    return r81;
  L195():
    nrs3 = force? nrs2;
    checkMissing(nrs3);
    c38 = `is.object`(nrs3);
    if c38 then L196() else L197(nrs3);
  L205():
    fix_na1 = force? fix_na;
    checkMissing(fix_na1);
    c39 = `as.logical`(fix_na1);
    if c39 then L206() else L37();
  L241():
    r144 = ld r;
    check L243() else D69();
  L242():
    r142 = dyn base20(<sym r>);
    goto L48(i2, r142);
  L334():
    fix_na5 = force? fix_na4;
    checkMissing(fix_na5);
    c111 = `as.logical`(fix_na5);
    if c111 then L335() else L81();
  D31():
    deopt 151 [c24, r72];
  D33():
    deopt 156 [c32, r75];
  D35():
    deopt 163 [r77];
  D69():
    deopt 300 [i2, r144];
  D71():
    deopt 306 [i7];
  L35(dx9):
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L201() else L202();
  L37():
    goto L43();
  L43():
    fix_na2 = ld `fix.na`;
    check L227() else D63();
  L81():
    goto L86();
  L86():
    r241 = ld r;
    check L352() else D120();
  L168():
    r73 = force? r72;
    checkMissing(r73);
    dim1 = ldf dim in base;
    r74 = dyn dim1(r73);
    check L169() else D32();
  L170():
    goto L26(c32, r75);
  L174():
    l = ld r;
    rownames__ = ldf `rownames<-`;
    check L175() else D36();
  L196():
    dr8 = tryDispatchBuiltin.1("[", nrs3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L198() else L197(dr8);
  L197(nrs5):
    na14 = ld na;
    check L199() else D48();
  L206():
    sym16 = ldf max;
    base16 = ldf max in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L207() else L208();
  L243():
    r145 = force? r144;
    checkMissing(r145);
    dim2 = ldf dim in base;
    r146 = dyn dim2(r145);
    check L244() else D70();
  L245():
    p14 = prom<V +>{
      argl16 = ld argl;
      argl17 = force? argl16;
      checkMissing(argl17);
      c47 = `is.object`(argl17);
      if c47 then L1() else L2(argl17);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", argl17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(argl19):
      i8 = ld i;
      i9 = force? i8;
      __14 = ldf `[[` in base;
      r147 = dyn __14(argl19, i9);
      goto L0(r147);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p15 = prom<V +>{
      r149 = ld r;
      r150 = force? r149;
      checkMissing(r150);
      return r150;
    };
    r152 = dyn rbind4(p14, p15);
    check L246() else D72();
  L335():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L336() else L337();
  D32():
    deopt 154 [c24, r74];
  D36():
    deopt 165 [r77, l, r77];
  D48():
    deopt 210 [nrs5, na14];
  D63():
    deopt 267 [fix_na2];
  D70():
    deopt 303 [i2, r146];
  D72():
    deopt 309 [i7, r152];
  D120():
    deopt 485 [r241];
  L36(r105):
    identical1 = ldf identical in base;
    r107 = dyn identical1(dx9, r105, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L204() else D51();
  L38(r109):
    st nr = r109;
    rbind3 = ldf rbind;
    check L220() else D60();
  L82(r219):
    c113 = `as.logical`(r219);
    if c113 then L340() else L83();
  L169():
    goto L27(c24, r74);
  L175():
    r78 = dyn rownames__(l, NULL, r77);
    check L176() else D37();
  L198():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L35(dx8);
  L199():
    na15 = force? na14;
    checkMissing(na15);
    r101 = `-`(na15, 1);
    na16 = ld na;
    check L200() else D49();
  L201():
    list1 = ldf list in base;
    r106 = dyn list1(NULL, NULL);
    check L203() else D50();
  L202():
    r104 = dyn base15(NULL, NULL);
    goto L36(r104);
  L207():
    sym17 = ldf all;
    base17 = ldf all in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L209() else L210();
  L208():
    r108 = dyn base16(<lang if(all(iV), lengths(argl), unlist(`[`(nrs, `!`(iV))))>);
    goto L38(r108);
  L227():
    fix_na3 = force? fix_na2;
    checkMissing(fix_na3);
    c43 = `as.logical`(fix_na3);
    if c43 then L228() else L44();
  L244():
    goto L48(i2, r146);
  L246():
    st r = r152;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L247() else L248();
  L336():
    rownames1 = ldf rownames;
    check L338() else D111();
  L337():
    r218 = dyn base30(<lang rownames(r)>);
    goto L82(r218);
  L352():
    r242 = force? r241;
    checkMissing(r242);
    popenv;
    return r242;
  D37():
    deopt 167 [r77, r78];
  D49():
    deopt 213 [nrs5, r101, na16];
  D50():
    deopt 222 [r106];
  D51():
    deopt 231 [r107];
  D60():
    deopt 255 [];
  D111():
    deopt 458 [];
  L39(r111):
    c40 = `as.logical`(r111);
    if c40 then L213() else L40();
  L44():
    goto L33();
  L49(i12, r154):
    r159 = `!`(r154);
    c50 = `as.logical`(r159);
    if c50 then L257() else L52(i12, c50);
  L83():
    goto L85();
  L85():
    setN2 = ldf setN;
    check L349() else D118();
  L176():
    st r = r78;
    goto L29();
  L200():
    na17 = force? na16;
    checkMissing(na17);
    r102 = `:`(r101, na17);
    __11 = ldf `[` in base;
    r103 = dyn __11(nrs5, r102);
    goto L35(r103);
  L203():
    goto L36(r106);
  L204():
    goto L34(r107);
  L209():
    iV = ld iV;
    check L211() else D53();
  L210():
    r110 = dyn base17(<sym iV>);
    goto L39(r110);
  L220():
    p12 = prom<V +>{
      sym18 = ldf rep;
      base18 = ldf rep in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r122):
      return r122;
    L1():
      rep = ldf rep in base;
      r123 = dyn rep(<lang `[[`(argl, na)>, <sym nr>);
      goto L0(r123);
    L2():
      r121 = dyn base18[, `length.out`](<lang `[[`(argl, na)>, <sym nr>);
      goto L0(r121);
    };
    r125 = dyn rbind3[, `deparse.level`](p12, 0.0);
    check L221() else D61();
  L228():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L229() else L230();
  L247():
    sym22 = ldf dim;
    base22 = ldf dim in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L249() else L250();
  L248():
    r153 = dyn base21(<lang `<-`(d1, dim(`[[`(argl, i)))>);
    goto L49(i7, r153);
  L338():
    p25 = prom<V +>{
      r220 = ld r;
      r221 = force? r220;
      checkMissing(r221);
      return r221;
    };
    r223 = dyn rownames1(p25);
    check L339() else D112();
  L340():
    sym31 = ldf `rep.int`;
    base31 = ldf `rep.int` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L341() else L342();
  D53():
    deopt 239 [iV];
  D61():
    deopt 259 [r125];
  D112():
    deopt 460 [r223];
  D118():
    deopt 479 [];
  L40():
    unlist = ldf unlist;
    check L217() else D57();
  L41(r115):
    max = ldf max in base;
    r120 = dyn max(r115);
    check L219() else D59();
  L45(r133):
    r136 = `!`(r133);
    st `fix.na` = r136;
    goto L33();
  L50(i15, r156):
    st d1 = r156;
    c49 = `==`(r156, NULL);
    goto L49(i15, c49);
  L52(i23, c52):
    st ism1 = c52;
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L263() else L264();
  L84(r225):
    l8 = ld r;
    rownames__2 = ldf `rownames<-`;
    check L346() else D116();
  L211():
    iV1 = force? iV;
    checkMissing(iV1);
    all = ldf all in base;
    r112 = dyn all(iV1);
    check L212() else D54();
  L213():
    lengths = ldf lengths;
    check L214() else D55();
  L221():
    l1 = ld argl;
    c42 = `is.object`(l1);
    if c42 then L222() else L223(r125, l1);
  L229():
    Nms1 = ldf Nms;
    check L231() else D64();
  L230():
    r132 = dyn base19(<lang `<-`(Nna, Nms(na))>);
    goto L45(r132);
  L249():
    argl20 = ld argl;
    check L251() else D73();
  L250():
    r155 = dyn base22(<lang `[[`(argl, i)>);
    goto L50(i7, r155);
  L257():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L258() else L259();
  L339():
    c112 = `==`(r223, NULL);
    goto L82(c112);
  L341():
    nrow1 = ldf nrow;
    check L343() else D113();
  L342():
    r224 = dyn base31("", <lang nrow(r)>);
    goto L84(r224);
  L349():
    p28 = prom<V +>{
      nrow2 = ldf nrow;
      p27 = prom<V +>{
        r233 = ld r;
        r234 = force? r233;
        checkMissing(r234);
        return r234;
      };
      r236 = dyn nrow2(p27);
      return r236;
    };
    p29 = prom<V +>{
      Nna = ld Nna;
      Nna1 = force? Nna;
      checkMissing(Nna1);
      return Nna1;
    };
    r239 = dyn setN2(p28, p29);
    check L350() else D119();
  D54():
    deopt 242 [r112];
  D55():
    deopt 244 [];
  D57():
    deopt 248 [];
  D59():
    deopt 252 [r120];
  D64():
    deopt 271 [];
  D73():
    deopt 314 [i7, argl20];
  D113():
    deopt 466 [];
  D116():
    deopt 472 [r225, l8, r225];
  D119():
    deopt 482 [r239];
  L42(r129, dx13):
    st argl = dx13;
    goto L43();
  L53(i26, c55, r161):
    r163 = `==`(r161, 2);
    c56 = `as.logical`(r163);
    c57 = `&&`(c55, c56);
    goto L52(i26, c57);
  L54(i30, r165):
    r166 = `!`(r165);
    c60 = `as.logical`(r166);
    if c60 then L266() else L55(i30, c60);
  L212():
    goto L39(r112);
  L214():
    p10 = prom<V +>{
      argl10 = ld argl;
      argl11 = force? argl10;
      checkMissing(argl11);
      return argl11;
    };
    r114 = dyn lengths(p10);
    check L215() else D56();
  L217():
    p11 = prom<V +>{
      nrs6 = ld nrs;
      nrs7 = force? nrs6;
      checkMissing(nrs7);
      c41 = `is.object`(nrs7);
      if c41 then L1() else L2(nrs7);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", nrs7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(nrs9):
      iV2 = ld iV;
      iV3 = force? iV2;
      checkMissing(iV3);
      r116 = `!`(iV3);
      __12 = ldf `[` in base;
      r117 = dyn __12(nrs9, r116);
      goto L0(r117);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r119 = dyn unlist(p11);
    check L218() else D58();
  L219():
    goto L38(r120);
  L222():
    dr12 = tryDispatchBuiltin.0("[[<-", l1, r125);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L224() else L223(r125, dr12);
  L223(r127, l3):
    na18 = ld na;
    check L225() else D62();
  L231():
    p13 = prom<V +>{
      na20 = ld na;
      na21 = force? na20;
      checkMissing(na21);
      return na21;
    };
    r135 = dyn Nms1(p13);
    check L232() else D65();
  L251():
    argl21 = force? argl20;
    checkMissing(argl21);
    c48 = `is.object`(argl21);
    if c48 then L252() else L253(i7, argl21);
  L258():
    d1 = ld d1;
    check L260() else D76();
  L259():
    r160 = dyn base23(<sym d1>);
    goto L53(i12, c50, r160);
  L263():
    d3 = ld d2;
    check L265() else D78();
  L264():
    r164 = dyn base24(<sym d2>);
    goto L54(i23, r164);
  L343():
    p26 = prom<V +>{
      r226 = ld r;
      r227 = force? r226;
      checkMissing(r227);
      return r227;
    };
    r229 = dyn nrow1(p26);
    check L344() else D114();
  L346():
    r231 = dyn rownames__2(l8, NULL, r225);
    check L347() else D117();
  L350():
    goto L86();
  D56():
    deopt 246 [r114];
  D58():
    deopt 250 [r119];
  D62():
    deopt 261 [r127, l3, r125, na18];
  D65():
    deopt 273 [r135];
  D76():
    deopt 326 [i12, c50, d1];
  D78():
    deopt 335 [i23, d3];
  D114():
    deopt 468 [r229];
  D117():
    deopt 474 [r225, r231];
  L51(i19, dx19):
    dim3 = ldf dim in base;
    r158 = dyn dim3(dx19);
    check L256() else D75();
  L55(i32, c62):
    st ism2 = c62;
    ism1 = ld ism1;
    check L272() else D81();
  L215():
    goto L41(r114);
  L218():
    goto L41(r119);
  L224():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L42(r125, dx12);
  L225():
    na19 = force? na18;
    ____ = ldf `[[<-` in base;
    r130 = dyn ____(l3, r125, na19);
    goto L42(r127, r130);
  L232():
    st Nna = r135;
    c44 = `==`(r135, NULL);
    goto L45(c44);
  L252():
    dr18 = tryDispatchBuiltin.1("[[", argl21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L254() else L253(i7, dr18);
  L253(i17, argl23):
    i20 = ld i;
    check L255() else D74();
  L260():
    d2 = force? d1;
    checkMissing(d2);
    length2 = ldf length in base;
    r162 = dyn length2(d2);
    check L261() else D77();
  L265():
    d4 = force? d3;
    checkMissing(d4);
    c59 = `==`(d4, NULL);
    goto L54(i23, c59);
  L266():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L267() else L268();
  L344():
    rep_int1 = ldf `rep.int` in base;
    r230 = dyn rep_int1("", r229);
    check L345() else D115();
  L347():
    st r = r231;
    goto L85();
  D74():
    deopt 316 [i17, argl23, i20];
  D75():
    deopt 320 [i19, r158];
  D77():
    deopt 329 [i12, c50, r162];
  D81():
    deopt 349 [i32, ism1];
  D115():
    deopt 470 [r230];
  L56(i35, c65, r168):
    r170 = `==`(r168, 2);
    c66 = `as.logical`(r170);
    c67 = `&&`(c65, c66);
    goto L55(i35, c67);
  L254():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L51(i7, dx18);
  L255():
    i21 = force? i20;
    __15 = ldf `[[` in base;
    r157 = dyn __15(argl23, i21);
    goto L51(i17, r157);
  L256():
    goto L50(i19, r158);
  L261():
    goto L53(i12, c50, r162);
  L267():
    d5 = ld d2;
    check L269() else D79();
  L268():
    r167 = dyn base25(<sym d2>);
    goto L56(i30, c60, r167);
  L272():
    ism2 = force? ism1;
    checkMissing(ism2);
    c69 = `as.logical`(ism2);
    if c69 then L273() else L57(i32, c69);
  L345():
    goto L84(r230);
  D79():
    deopt 341 [i30, c60, d5];
  L57(i38, c71):
    c75 = `as.logical`(c71);
    if c75 then L276() else L58();
  L269():
    d6 = force? d5;
    checkMissing(d6);
    length3 = ldf length in base;
    r169 = dyn length3(d6);
    check L270() else D80();
  L273():
    ism3 = ld ism2;
    check L274() else D82();
  D80():
    deopt 344 [i30, c60, r169];
  D82():
    deopt 351 [i32, c69, ism3];
  L58():
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L279() else L280();
  L270():
    goto L56(i30, c60, r169);
  L274():
    ism4 = force? ism3;
    checkMissing(ism4);
    c72 = `as.logical`(ism4);
    c73 = `&&`(c69, c72);
    goto L57(i32, c73);
  L276():
    goto L47(i38);
  L60(i46, r173):
    r181 = `!`(r173);
    st nn1 = r181;
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L290() else L291();
  L279():
    Nrow = ldf Nrow;
    check L281() else D83();
  L280():
    r172 = dyn base26(<lang `<-`(N1, if(`&&`(`(`(`<-`(l1, Nrow(`[[`(argl, i)))), `!`(ism1)), Nms(i)))>);
    goto L60(i38, r172);
  D83():
    deopt 360 [i38];
  L64(i59, r183):
    r193 = `!`(r183);
    st nn2 = r193;
    nn1 = ld nn1;
    check L305() else D95();
  L281():
    p16 = prom<V +>{
      argl24 = ld argl;
      argl25 = force? argl24;
      checkMissing(argl25);
      c76 = `is.object`(argl25);
      if c76 then L1() else L2(argl25);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", argl25);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(argl27):
      i47 = ld i;
      i48 = force? i47;
      __16 = ldf `[[` in base;
      r174 = dyn __16(argl27, i48);
      goto L0(r174);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r176 = dyn Nrow(p16);
    check L282() else D84();
  L290():
    i60 = ld i;
    check L292() else D88();
  L291():
    r182 = dyn base27(<lang `<-`(N2, if(`&&`(`&&`(`==`(i, `-`(na, 1)), Nrow(`[[`(argl, na))), `!`(ism2)), Nms(na)))>);
    goto L64(i46, r182);
  D84():
    deopt 362 [i38, r176];
  D88():
    deopt 379 [i46, i60];
  D95():
    deopt 404 [i59, nn1];
  L282():
    st l1 = r176;
    c77 = `as.logical`(r176);
    if c77 then L283() else L61(i38, c77);
  L292():
    i61 = force? i60;
    checkMissing(i61);
    na26 = ld na;
    check L293() else D89();
  L305():
    nn2 = force? nn1;
    checkMissing(nn2);
    c100 = `as.logical`(nn2);
    if c100 then L69(i59, c100) else L306();
  D89():
    deopt 380 [i46, i61, na26];
  L61(i50, c79):
    c83 = `as.logical`(c79);
    if c83 then L286() else L62();
  L69(i71, c101):
    c106 = `as.logical`(c101);
    if c106 then L309() else L70();
  L283():
    ism5 = ld ism1;
    check L284() else D85();
  L293():
    na27 = force? na26;
    checkMissing(na27);
    r184 = `-`(na27, 1);
    r185 = `==`(i61, r184);
    c85 = `as.logical`(r185);
    if c85 then L294() else L65(i46, c85);
  L306():
    nn3 = ld nn2;
    check L307() else D96();
  D85():
    deopt 364 [i38, c77, ism5];
  D96():
    deopt 406 [i59, c100, nn3];
  L62():
    goto L63(i50, NULL);
  L63(i56, r180):
    st N1 = r180;
    c84 = `==`(r180, NULL);
    goto L60(i56, c84);
  L65(i63, c87):
    c92 = `as.logical`(c87);
    if c92 then L298() else L66(i63, c92);
  L70():
    goto L79(i71);
  L79(i91):
    goto L47(i91);
  L284():
    ism6 = force? ism5;
    checkMissing(ism6);
    r177 = `!`(ism6);
    c80 = `as.logical`(r177);
    c81 = `&&`(c77, c80);
    goto L61(i38, c81);
  L286():
    Nms2 = ldf Nms;
    check L287() else D86();
  L294():
    Nrow1 = ldf Nrow;
    check L295() else D90();
  L307():
    nn4 = force? nn3;
    checkMissing(nn4);
    c103 = `as.logical`(nn4);
    c104 = `||`(c100, c103);
    goto L69(i59, c104);
  L309():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L310() else L311();
  D86():
    deopt 369 [i50];
  D90():
    deopt 386 [i46, c85];
  L66(i66, c94):
    c98 = `as.logical`(c94);
    if c98 then L301() else L67();
  L71(i78, r195):
    c108 = `as.logical`(r195);
    if c108 then L314() else L72();
  L287():
    p17 = prom<V +>{
      i54 = ld i;
      i55 = force? i54;
      checkMissing(i55);
      return i55;
    };
    r179 = dyn Nms2(p17);
    check L288() else D87();
  L295():
    p18 = prom<V +>{
      argl28 = ld argl;
      argl29 = force? argl28;
      checkMissing(argl29);
      c88 = `is.object`(argl29);
      if c88 then L1() else L2(argl29);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", argl29);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(argl31):
      na28 = ld na;
      na29 = force? na28;
      __17 = ldf `[[` in base;
      r186 = dyn __17(argl31, na29);
      goto L0(r186);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r188 = dyn Nrow1(p18);
    check L296() else D91();
  L298():
    ism7 = ld ism2;
    check L299() else D92();
  L310():
    rownames = ldf rownames;
    check L312() else D97();
  L311():
    r194 = dyn base28(<lang rownames(r)>);
    goto L71(i71, r194);
  D87():
    deopt 371 [i50, r179];
  D91():
    deopt 388 [i46, c85, r188];
  D92():
    deopt 390 [i63, c92, ism7];
  D97():
    deopt 411 [i71];
  L67():
    goto L68(i66, NULL);
  L68(i70, r192):
    st N2 = r192;
    c99 = `==`(r192, NULL);
    goto L64(i70, c99);
  L72():
    goto L74(i78);
  L74(i84):
    nn5 = ld nn1;
    check L323() else D104();
  L288():
    goto L63(i50, r179);
  L296():
    c89 = `as.logical`(r188);
    c90 = `&&`(c85, c89);
    goto L65(i46, c90);
  L299():
    ism8 = force? ism7;
    checkMissing(ism8);
    r189 = `!`(ism8);
    c95 = `as.logical`(r189);
    c96 = `&&`(c92, c95);
    goto L66(i63, c96);
  L301():
    Nms3 = ldf Nms;
    check L302() else D93();
  L312():
    p20 = prom<V +>{
      r196 = ld r;
      r197 = force? r196;
      checkMissing(r197);
      return r197;
    };
    r199 = dyn rownames(p20);
    check L313() else D98();
  L314():
    sym29 = ldf `rep.int`;
    base29 = ldf `rep.int` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L315() else L316();
  D93():
    deopt 395 [i66];
  D98():
    deopt 413 [i71, r199];
  D104():
    deopt 431 [i84, nn5];
  L73(i83, r201):
    l5 = ld r;
    rownames__1 = ldf `rownames<-`;
    check L320() else D102();
  L302():
    p19 = prom<V +>{
      na30 = ld na;
      na31 = force? na30;
      checkMissing(na31);
      return na31;
    };
    r191 = dyn Nms3(p19);
    check L303() else D94();
  L313():
    c107 = `==`(r199, NULL);
    goto L71(i71, c107);
  L315():
    nrow = ldf nrow;
    check L317() else D99();
  L316():
    r200 = dyn base29("", <lang nrow(r)>);
    goto L73(i78, r200);
  L323():
    nn6 = force? nn5;
    checkMissing(nn6);
    c109 = `as.logical`(nn6);
    if c109 then L324() else L75();
  D94():
    deopt 397 [i66, r191];
  D99():
    deopt 419 [i78];
  D102():
    deopt 425 [i83, r201, l5, r201];
  L75():
    goto L76(i84);
  L76(i87):
    nn7 = ld nn2;
    check L328() else D107();
  L303():
    goto L68(i66, r191);
  L317():
    p21 = prom<V +>{
      r202 = ld r;
      r203 = force? r202;
      checkMissing(r203);
      return r203;
    };
    r205 = dyn nrow(p21);
    check L318() else D100();
  L320():
    r207 = dyn rownames__1(l5, NULL, r201);
    check L321() else D103();
  L324():
    setN = ldf setN;
    check L325() else D105();
  D100():
    deopt 421 [i78, r205];
  D103():
    deopt 427 [i83, r201, r207];
  D105():
    deopt 434 [i84];
  D107():
    deopt 440 [i87, nn7];
  L318():
    rep_int = ldf `rep.int` in base;
    r206 = dyn rep_int("", r205);
    check L319() else D101();
  L321():
    st r = r207;
    goto L74(i83);
  L325():
    p22 = prom<V +>{
      N1 = ld N1;
      N2 = force? N1;
      checkMissing(N2);
      return N2;
    };
    r210 = dyn setN(1.0, p22);
    check L326() else D106();
  L328():
    nn8 = force? nn7;
    checkMissing(nn8);
    c110 = `as.logical`(nn8);
    if c110 then L329() else L77();
  D101():
    deopt 423 [i78, r206];
  D106():
    deopt 437 [i84, r210];
  L77():
    goto L78(i87, NULL);
  L78(i90, r216):
    goto L79(i90);
  L319():
    goto L73(i78, r206);
  L326():
    goto L76(i84);
  L329():
    setN1 = ldf setN;
    check L330() else D108();
  D108():
    deopt 443 [i87];
  L330():
    p23 = prom<V +>{
      l6 = ld l1;
      l7 = force? l6;
      checkMissing(l7);
      r212 = `+`(1.0, l7);
      return r212;
    };
    p24 = prom<V +>{
      N3 = ld N2;
      N4 = force? N3;
      checkMissing(N4);
      return N4;
    };
    r215 = dyn setN1(p23, p24);
    check L331() else D109();
  D109():
    deopt 446 [i87, r215];
  L331():
    goto L78(i87, r215);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:* |
    mkenv;
    st i = i;
    popenv;
    return NULL;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg d2:*, reg d3:V, reg c1:L, reg d5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg length1:cls, reg r12:V, reg r13:V, reg as_integer:cls, reg r14:V |
    mkenv;
    st x = x;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st d = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r6 = `==`(r4, 2);
    c = `as.logical`(r6);
    if c then L14() else L2();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L9() else D1();
  L10():
    d = ld d;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym d>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [d];
  L2():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L9():
    goto L0(r2);
  L12():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r5 = dyn length(d1);
    check L13() else D3();
  L14():
    d2 = ld d;
    check L15() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [d2];
  L4(r9):
    popenv;
    return r9;
  L13():
    goto L1(r5);
  L15():
    d3 = force? d2;
    checkMissing(d3);
    c1 = `is.object`(d3);
    if c1 then L16() else L17(d3);
  L20():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r8 = dyn base2(<lang `>`(length(x), 0)>);
    goto L4(r8);
  L3(dx1):
    popenv;
    return dx1;
  L5(r11):
    r13 = `>`(r11, 0);
    as_integer = ldf `as.integer` in base;
    r14 = dyn as_integer(r13);
    check L26() else D7();
  L16():
    dr = tryDispatchBuiltin.1("[", d3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(d5):
    __ = ldf `[` in base;
    r7 = dyn __(d5, 1);
    goto L3(r7);
  L22():
    x3 = ld x;
    check L24() else D5();
  L23():
    r10 = dyn base3(<sym x>);
    goto L5(r10);
  D5():
    deopt 24 [x3];
  D7():
    deopt 31 [r14];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L24():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r12 = dyn length1(x4);
    check L25() else D6();
  L26():
    goto L4(r14);
  D6():
    deopt 27 [r12];
  L25():
    goto L5(r12);
  }
}
fun inner3292214066(i, nams) {
  (reg i:*, reg nams:*) -+> V { var i:*, var nams:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nams1:*, reg nams2:V, reg c:V, reg c1:L, reg r2:V, reg nams3:*, reg nams4:V, reg l:*, reg rownames:cls, reg r3:V, reg c2:L, reg r6:V, reg l2:*, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg r9:V, reg l4:*, reg dx1:V, reg i1:*, reg i2:V, reg ___:cls, reg r10:V, reg rownames__:cls, reg r11:V |
    mkenv;
    st i = i;
    st nams = nams;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L1();
  L4():
    nams1 = ld nams;
    check L6() else D0();
  L5():
    r = dyn base(<sym nams>);
    goto L0(r);
  D0():
    deopt 1 [nams1];
  L1():
    nams3 = ld nams;
    check L9() else D1();
  L2(r2):
    l = sld r;
    rownames = ldf rownames;
    check L10() else D2();
  L6():
    nams2 = force? nams1;
    checkMissing(nams2);
    c = `==`(nams2, NULL);
    goto L0(c);
  L7():
    goto L2("");
  D1():
    deopt 6 [nams3];
  D2():
    deopt 9 [r2, l, r2];
  L9():
    nams4 = force? nams3;
    checkMissing(nams4);
    goto L2(nams4);
  L10():
    r3 = dyn rownames(r2, NULL);
    check L11() else D3();
  D3():
    deopt 11 [r2, l, r2, r3];
  L11():
    c2 = `is.object`(r3);
    if c2 then L12() else L13(r2, l, r3);
  L3(r9, l4, dx1):
    rownames__ = ldf `rownames<-`;
    check L16() else D5();
  L12():
    dr = tryDispatchBuiltin.0("[<-", r3, r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(r2, l, dr);
  L13(r6, l2, r7):
    i1 = ld i;
    check L15() else D4();
  D4():
    deopt 13 [r6, l2, r7, r2, i1];
  D5():
    deopt 16 [r9, l4, dx1];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(r2, l, dx);
  L15():
    i2 = force? i1;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(r7, r2, i2);
    goto L3(r6, l2, r10);
  L16():
    r11 = dyn rownames__(l4, NULL, dx1);
    check L17() else D6();
  D6():
    deopt 18 [r9, r11];
  L17():
    sst r = r11;
    invisible.0();
    popenv;
    return r9;
  }
}