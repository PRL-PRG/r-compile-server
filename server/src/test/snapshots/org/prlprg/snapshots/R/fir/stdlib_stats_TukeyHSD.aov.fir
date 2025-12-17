fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3898212664;
    st `TukeyHSD.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3898212664(x, which, ordered, `conf.level`, `...`) {
  (reg x:*, reg which:*, reg ordered:*, reg conf_level:*, reg ddd:dots) -+> V { var x:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tabs:*, reg tabs1:V, reg r2:I, reg p:p(V +), var ordered:*, reg ordered_isMissing:L, reg ordered_orDefault:*, var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var `...`:dots?, reg model_tables:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg mm:*, reg mm1:V, reg c:L, reg mm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg c1:V, reg c2:L, reg stop:cls, reg r9:V, reg mm4:*, reg mm5:V, reg c3:L, reg mm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg tabs2:*, reg tabs3:V, reg names:cls, reg r14:V, reg c4:L, reg r16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r17:V, reg r18:V, reg c5:L, reg tabs4:*, reg tabs5:V, reg c6:L, reg tabs7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r19:V, reg tabs8:*, reg tabs9:V, reg c7:L, reg tabs11:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg which1:*, reg which2:V, reg __2:cls, reg r20:V, reg mm8:*, reg mm9:V, reg c8:L, reg mm11:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r21:V, reg c9:L, reg dx14:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg dx19:V, reg r23:V, reg tabs12:*, reg tabs13:V, reg names1:cls, reg r24:V, reg __3:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg nn:*, reg nn1:V, reg is_na:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg nn_na:*, reg nn_na1:V, reg all:cls, reg r31:V, reg c10:L, reg stop1:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg nn_na2:*, reg nn_na3:V, reg any:cls, reg r36:V, reg c11:L, reg warning:cls, reg r37:V, reg tabs14:*, reg tabs15:V, reg c12:L, reg tabs17:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg nn_na4:*, reg nn_na5:V, reg r38:V, reg __4:cls, reg r39:V, reg nn2:*, reg nn3:V, reg c13:L, reg nn5:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg nn_na6:*, reg nn_na7:V, reg r40:V, reg __5:cls, reg r41:V, reg setNames:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg tabs18:*, reg tabs19:V, reg length:cls, reg r46:V, reg vector:cls, reg r47:V, reg p2:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg tabs20:*, reg tabs21:V, reg names2:cls, reg r51:V, reg p3:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg x3:*, reg x4:V, reg c14:L, reg x6:V, reg dr18:V, reg dc9:L, reg dx25:V, reg dx26:V, reg r56:V, reg r57:V, reg sum:cls, reg r58:V, reg x7:*, reg x8:V, reg c15:L, reg r60:V, reg x10:V, reg dr20:V, reg dc10:L, reg dx27:V, reg r62:V, reg dx28:V, reg r63:V, reg r64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg tabs22:*, reg tabs23:V, reg names3:cls, reg r67:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x11:V, reg tabs24:*, reg tabs25:V, reg c17:L, reg i6:I, reg tabs27:V, reg dr22:V, reg dc11:L, reg dx29:V, reg i8:I, reg dx30:V, reg nm:*, reg nm1:V, reg __6:cls, reg r68:V, reg as_vector:cls, reg tab:*, reg tab1:V, reg p4:p(V +), reg r70:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg i11:I, reg r72:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg i14:I, reg r74:V, reg tab2:*, reg tab3:V, reg dim:cls, reg r75:V, reg length1:cls, reg r76:V, reg r77:V, reg c18:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg i19:I, reg r79:V, reg tab4:*, reg tab5:V, reg dimnames:cls, reg r80:V, reg apply:cls, reg do_call:cls, reg dn:*, reg dn1:V, reg p5:p(V +), reg r82:V, reg p6:p(V +), reg paste:*, reg paste1:V, reg p7:p(V +), reg r85:V, reg i20:I, reg r86:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r87:V, reg tab6:*, reg tab7:V, reg names4:cls, reg r88:V, reg nn6:*, reg nn7:V, reg c19:L, reg i24:I, reg nn9:V, reg dr24:V, reg dc12:L, reg dx31:V, reg i26:I, reg dx32:V, reg nm2:*, reg nm3:V, reg __7:cls, reg r89:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg i29:I, reg r91:V, reg n:*, reg n1:V, reg length2:cls, reg r92:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r95:V, reg i32:I, reg r96:V, reg r97:V, reg means:*, reg means1:V, reg length3:cls, reg r98:V, reg r99:V, reg c20:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r100:V, reg i37:I, reg r101:V, reg n2:*, reg n3:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r102:V, reg i40:I, reg r103:V, reg means2:*, reg means3:V, reg length4:cls, reg r104:V, reg rep_int:cls, reg r105:V, reg i41:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r107:V, reg i44:I, reg r108:V, reg ordered1:*, reg ordered2:V, reg as_logical:cls, reg r109:V, reg c21:L, reg order:cls, reg means4:*, reg means5:V, reg p8:p(V +), reg r111:V, reg means6:*, reg means7:V, reg c22:L, reg i48:I, reg means9:V, reg dr26:V, reg dc13:L, reg dx33:V, reg i50:I, reg dx34:V, reg ord:*, reg ord1:V, reg __8:cls, reg r112:V, reg n4:*, reg n5:V, reg c23:L, reg i52:I, reg n7:V, reg dr28:V, reg dc14:L, reg dx35:V, reg i54:I, reg dx36:V, reg ord2:*, reg ord3:V, reg __9:cls, reg r113:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r114:V, reg i57:I, reg r115:V, reg nms:*, reg nms1:V, reg c24:V, reg r116:V, reg c25:L, reg nms2:*, reg nms3:V, reg c26:L, reg i61:I, reg nms5:V, reg dr30:V, reg dc15:L, reg dx37:V, reg i63:I, reg dx38:V, reg ord4:*, reg ord5:V, reg __10:cls, reg r117:V, reg i64:I, reg dx39:V, reg i65:I, reg outer:cls, reg means10:*, reg means11:V, reg p9:p(V +), reg means12:*, reg means13:V, reg p10:p(V +), reg __11:*, reg __12:V, reg p11:p(V +), reg r121:V, reg lower_tri:cls, reg center:*, reg center1:V, reg p12:p(V +), reg r123:V, reg center2:*, reg center3:V, reg c27:L, reg i67:I, reg center5:V, reg dr32:V, reg dc16:L, reg dx41:V, reg i69:I, reg dx42:V, reg keep:*, reg keep1:V, reg __13:cls, reg r124:V, reg qtukey:cls, reg conf_level1:*, reg conf_level2:V, reg p13:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r126:V, reg r127:V, reg means14:*, reg means15:V, reg length5:cls, reg r128:V, reg p14:p(V +), reg x12:*, reg x13:V, reg c28:L, reg x15:V, reg dr34:V, reg dc17:L, reg dx43:V, reg dx44:V, reg r130:V, reg p15:p(V +), reg r132:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r135:V, reg i72:I, reg r136:V, reg r137:V, reg MSE:*, reg MSE1:V, reg r138:V, reg outer1:cls, reg n8:*, reg n9:V, reg r139:V, reg p16:p(V +), reg n10:*, reg n11:V, reg r141:V, reg p17:p(V +), reg __14:*, reg __15:V, reg p18:p(V +), reg r144:V, reg r145:V, reg r146:V, reg c29:L, reg i74:I, reg r149:V, reg r150:V, reg dr36:V, reg dc18:L, reg dx45:V, reg i76:I, reg r152:V, reg dx46:V, reg keep2:*, reg keep3:V, reg __16:cls, reg r153:V, reg r154:V, reg center6:*, reg center7:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r155:V, reg i79:I, reg center10:V, reg r156:V, reg MSE2:*, reg MSE3:V, reg r157:V, reg outer2:cls, reg n12:*, reg n13:V, reg r158:V, reg p19:p(V +), reg n14:*, reg n15:V, reg r160:V, reg p20:p(V +), reg __17:*, reg __18:V, reg p21:p(V +), reg r163:V, reg r164:V, reg r165:V, reg c30:L, reg i81:I, reg center12:V, reg r167:V, reg dr38:V, reg dc19:L, reg dx47:V, reg i83:I, reg center14:V, reg dx48:V, reg keep4:*, reg keep5:V, reg __19:cls, reg r168:V, reg r169:V, reg ptukey:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r170:V, reg r171:V, reg est:*, reg est1:V, reg abs:cls, reg r172:V, reg p22:p(V +), reg sym26:cls, reg base26:cls, reg guard26:L, reg r174:V, reg r175:V, reg means16:*, reg means17:V, reg length6:cls, reg r176:V, reg p23:p(V +), reg x16:*, reg x17:V, reg c31:L, reg x19:V, reg dr40:V, reg dc20:L, reg dx49:V, reg dx50:V, reg r178:V, reg p24:p(V +), reg r180:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r181:V, reg i86:I, reg r182:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r183:V, reg i89:I, reg r184:V, reg c32:cls, reg r185:V, reg list:cls, reg r186:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r187:V, reg i92:I, reg r188:V, reg nms6:*, reg nms7:V, reg c33:V, reg r189:V, reg c34:L, reg outer3:cls, reg nms8:*, reg nms9:V, reg p25:p(V +), reg nms10:*, reg nms11:V, reg p26:p(V +), reg paste2:*, reg paste3:V, reg p27:p(V +), reg r193:V, reg c35:L, reg i96:I, reg r195:V, reg dr42:V, reg dc21:L, reg dx51:V, reg i98:I, reg dx52:V, reg keep6:*, reg keep7:V, reg __20:cls, reg r196:V, reg l1:*, reg c36:L, reg i100:I, reg dx54:V, reg l3:*, reg dr44:V, reg dc22:L, reg dx56:V, reg i102:I, reg dx57:V, reg dx58:V, reg ____:cls, reg r197:V, reg i103:I, reg array:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r198:V, reg r199:V, reg center15:*, reg center16:V, reg center17:*, reg center18:V, reg width:*, reg width1:V, reg r200:V, reg center19:*, reg center20:V, reg width2:*, reg width3:V, reg r201:V, reg pvals:*, reg pvals1:V, reg c37:cls, reg r202:V, reg p28:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r204:V, reg r205:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r206:V, reg r207:V, reg width4:*, reg width5:V, reg length7:cls, reg r208:V, reg c38:cls, reg r209:V, reg p29:p(V +), reg dnames:*, reg dnames1:V, reg p30:p(V +), reg r212:V, reg l4:*, reg c39:L, reg i105:I, reg r214:V, reg l6:*, reg dr46:V, reg dc23:L, reg dx60:V, reg i107:I, reg dx61:V, reg nm4:*, reg nm5:V, reg ____1:cls, reg r217:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r218:V, reg r219:V, reg c40:cls, reg r220:V, reg l7:*, reg class__:cls, reg r221:V, reg x20:*, reg x21:V, reg c41:L, reg x23:V, reg dr48:V, reg dc24:L, reg dx62:V, reg dx63:V, reg r222:V, reg l8:*, reg attr__:cls, reg r223:V, reg conf_level3:*, reg conf_level4:V, reg l9:*, reg attr__1:cls, reg r224:V, reg ordered3:*, reg ordered4:V, reg l10:*, reg attr__2:cls, reg r225:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    which_isMissing = missing.0(which);
    if which_isMissing then L0() else L1(which);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      tabs = ld tabs;
      tabs1 = force? tabs;
      checkMissing(tabs1);
      r2 = seq_along(tabs1);
      goto L0(r2);
    L2():
      r = dyn base(<sym tabs>);
      goto L0(r);
    };
    goto L1(p);
  L1(which_orDefault):
    st which = which_orDefault;
    ordered_isMissing = missing.0(ordered);
    if ordered_isMissing then L2(FALSE) else L2(ordered);
  L2(ordered_orDefault):
    st ordered = ordered_orDefault;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L3(0.95) else L3(conf_level);
  L3(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    st `...` = ddd;
    model_tables = ldf `model.tables`;
    check L64() else D0();
  D0():
    deopt 1 [];
  L64():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn model_tables(p1, "means");
    check L65() else D1();
  D1():
    deopt 4 [r5];
  L65():
    st mm = r5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L4(r7):
    c2 = `as.logical`(r7);
    if c2 then L73() else L5();
  L66():
    mm = ld mm;
    check L68() else D2();
  L67():
    r6 = dyn base1(<lang `$`(mm, n)>);
    goto L4(r6);
  D2():
    deopt 7 [mm];
  L5():
    goto L6();
  L6():
    mm4 = ld mm;
    check L77() else D5();
  L68():
    mm1 = force? mm;
    checkMissing(mm1);
    c = `is.object`(mm1);
    if c then L70() else L71(mm1);
  L73():
    stop = ldf stop;
    check L74() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 17 [mm4];
  L69(dx1):
    c1 = `==`(dx1, NULL);
    goto L4(c1);
  L70():
    dr = tryDispatchBuiltin.1("$", mm1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L72() else L71(dr);
  L71(mm3):
    r8 = `$`(mm3, <sym n>);
    goto L69(r8);
  L74():
    r9 = dyn stop("no factors in the fitted model");
    check L75() else D4();
  L77():
    mm5 = force? mm4;
    checkMissing(mm5);
    c3 = `is.object`(mm5);
    if c3 then L79() else L80(mm5);
  D4():
    deopt 14 [r9];
  L72():
    dx = getTryDispatchBuiltinValue(dr);
    goto L69(dx);
  L75():
    goto L6();
  L78(dx3):
    st tabs = dx3;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  L79():
    dr2 = tryDispatchBuiltin.1("$", mm5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L81() else L80(dr2);
  L80(mm7):
    r11 = `$`(mm7, <sym tables>);
    goto L78(r11);
  L7(r13):
    c4 = `is.object`(r13);
    if c4 then L86() else L87(r13);
  L81():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L78(dx2);
  L82():
    tabs2 = ld tabs;
    check L84() else D6();
  L83():
    r12 = dyn base2(<sym tabs>);
    goto L7(r12);
  D6():
    deopt 23 [tabs2];
  L8(dx5):
    r18 = `==`(dx5, "Grand mean");
    c5 = `as.logical`(r18);
    if c5 then L89() else L9();
  L84():
    tabs3 = force? tabs2;
    checkMissing(tabs3);
    names = ldf names in base;
    r14 = dyn names(tabs3);
    check L85() else D7();
  L86():
    dr4 = tryDispatchBuiltin.1("[", r13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L88() else L87(dr4);
  L87(r16):
    __ = ldf `[` in base;
    r17 = dyn __(r16, 1);
    goto L8(r17);
  D7():
    deopt 26 [r14];
  L9():
    goto L11();
  L11():
    tabs8 = ld tabs;
    check L95() else D9();
  L85():
    goto L7(r14);
  L88():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L89():
    tabs4 = ld tabs;
    check L90() else D8();
  D8():
    deopt 32 [tabs4];
  D9():
    deopt 40 [tabs8];
  L90():
    tabs5 = force? tabs4;
    checkMissing(tabs5);
    c6 = `is.object`(tabs5);
    if c6 then L91() else L92(tabs5);
  L95():
    tabs9 = force? tabs8;
    checkMissing(tabs9);
    c7 = `is.object`(tabs9);
    if c7 then L96() else L97(tabs9);
  L10(dx7):
    st tabs = dx7;
    goto L11();
  L12(dx10):
    st tabs = dx10;
    mm8 = ld mm;
    check L100() else D11();
  L91():
    dr6 = tryDispatchBuiltin.1("[", tabs5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L93() else L92(dr6);
  L92(tabs7):
    __1 = ldf `[` in base;
    r19 = dyn __1(tabs7, -1);
    goto L10(r19);
  L96():
    dr8 = tryDispatchBuiltin.1("[", tabs9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L98() else L97(dr8);
  L97(tabs11):
    which1 = ld which;
    check L99() else D10();
  D10():
    deopt 42 [tabs11, which1];
  D11():
    deopt 46 [mm8];
  L93():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L98():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx9);
  L99():
    which2 = force? which1;
    __2 = ldf `[` in base;
    r20 = dyn __2(tabs11, which2);
    goto L12(r20);
  L100():
    mm9 = force? mm8;
    checkMissing(mm9);
    c8 = `is.object`(mm9);
    if c8 then L102() else L103(mm9);
  L101(dx12):
    c9 = `is.object`(dx12);
    if c9 then L105() else L106(dx12);
  L102():
    dr10 = tryDispatchBuiltin.1("$", mm9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(dr10);
  L103(mm11):
    r21 = `$`(mm11, <sym n>);
    goto L101(r21);
  L13(dx16):
    st nn = dx16;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L112() else L113();
  L104():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L101(dx11);
  L105():
    dr12 = tryDispatchBuiltin.1("[", dx12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L107() else L106(dr12);
  L106(dx14):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L108() else L109();
  L14(dx19, r23):
    __3 = ldf `[` in base;
    r25 = dyn __3(dx19, r23);
    goto L13(r25);
  L15(r27):
    st nn_na = r27;
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L107():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L13(dx15);
  L108():
    tabs12 = ld tabs;
    check L110() else D12();
  L109():
    r22 = dyn base3(<sym tabs>);
    goto L14(dx14, r22);
  L112():
    nn = ld nn;
    check L114() else D14();
  L113():
    r26 = dyn base4(<sym nn>);
    goto L15(r26);
  D12():
    deopt 51 [dx14, tabs12];
  D14():
    deopt 59 [nn];
  L16(r30):
    c10 = `as.logical`(r30);
    if c10 then L120() else L17();
  L110():
    tabs13 = force? tabs12;
    checkMissing(tabs13);
    names1 = ldf names in base;
    r24 = dyn names1(tabs13);
    check L111() else D13();
  L114():
    nn1 = force? nn;
    checkMissing(nn1);
    is_na = ldf `is.na` in base;
    r28 = dyn is_na(nn1);
    check L115() else D15();
  L116():
    nn_na = ld nn_na;
    check L118() else D16();
  L117():
    r29 = dyn base5(<sym nn_na>);
    goto L16(r29);
  D13():
    deopt 54 [dx14, r24];
  D15():
    deopt 62 [r28];
  D16():
    deopt 66 [nn_na];
  L17():
    goto L18();
  L18():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L124() else L125();
  L111():
    goto L14(dx14, r24);
  L115():
    goto L15(r28);
  L118():
    nn_na1 = force? nn_na;
    checkMissing(nn_na1);
    all = ldf all in base;
    r31 = dyn all(nn_na1);
    check L119() else D17();
  L120():
    stop1 = ldf stop;
    check L121() else D18();
  D17():
    deopt 69 [r31];
  D18():
    deopt 71 [];
  L19(r35):
    c11 = `as.logical`(r35);
    if c11 then L128() else L20();
  L119():
    goto L16(r31);
  L121():
    r32 = dyn stop1("'which' specified no factors");
    check L122() else D19();
  L124():
    nn_na2 = ld nn_na;
    check L126() else D20();
  L125():
    r34 = dyn base6(<sym nn_na>);
    goto L19(r34);
  D19():
    deopt 73 [r32];
  D20():
    deopt 78 [nn_na2];
  L20():
    goto L23();
  L23():
    setNames = ldf setNames;
    check L142() else D28();
  L122():
    goto L18();
  L126():
    nn_na3 = force? nn_na2;
    checkMissing(nn_na3);
    any = ldf any in base;
    r36 = dyn any(nn_na3);
    check L127() else D21();
  L128():
    warning = ldf warning;
    check L129() else D22();
  D21():
    deopt 81 [r36];
  D22():
    deopt 83 [];
  D28():
    deopt 103 [];
  L127():
    goto L19(r36);
  L129():
    r37 = dyn warning("'which' specified some non-factors which will be dropped");
    check L130() else D23();
  L142():
    p2 = prom<V +>{
      sym7 = ldf vector;
      base7 = ldf vector in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r43):
      return r43;
    L2():
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r42 = dyn base7("list", <lang length(tabs)>);
      goto L0(r42);
    L1(r45):
      vector = ldf vector in base;
      r47 = dyn vector("list", r45);
      goto L0(r47);
    L4():
      tabs18 = ld tabs;
      tabs19 = force? tabs18;
      checkMissing(tabs19);
      length = ldf length in base;
      r46 = dyn length(tabs19);
      goto L1(r46);
    L5():
      r44 = dyn base8(<sym tabs>);
      goto L1(r44);
    };
    p3 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      tabs20 = ld tabs;
      tabs21 = force? tabs20;
      checkMissing(tabs21);
      names2 = ldf names in base;
      r51 = dyn names2(tabs21);
      goto L0(r51);
    L2():
      r49 = dyn base9(<sym tabs>);
      goto L0(r49);
    };
    r53 = dyn setNames(p2, p3);
    check L143() else D29();
  D23():
    deopt 85 [r37];
  D29():
    deopt 106 [r53];
  L130():
    tabs14 = ld tabs;
    check L131() else D24();
  L143():
    st out = r53;
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L144() else L145();
  D24():
    deopt 86 [tabs14];
  L24(r55):
    x7 = ld x;
    check L152() else D32();
  L131():
    tabs15 = force? tabs14;
    checkMissing(tabs15);
    c12 = `is.object`(tabs15);
    if c12 then L132() else L133(tabs15);
  L144():
    x3 = ld x;
    check L146() else D30();
  L145():
    r54 = dyn base10(<lang `^`(`$`(x, residuals), 2.0)>);
    goto L24(r54);
  D30():
    deopt 110 [x3];
  D32():
    deopt 116 [r55, x7];
  L21(dx21):
    st tabs = dx21;
    nn2 = ld nn;
    check L136() else D26();
  L132():
    dr14 = tryDispatchBuiltin.1("[", tabs15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dr14);
  L133(tabs17):
    nn_na4 = ld nn_na;
    check L135() else D25();
  L146():
    x4 = force? x3;
    checkMissing(x4);
    c14 = `is.object`(x4);
    if c14 then L148() else L149(x4);
  L152():
    x8 = force? x7;
    checkMissing(x8);
    c15 = `is.object`(x8);
    if c15 then L154() else L155(r55, x8);
  D25():
    deopt 88 [tabs17, nn_na4];
  D26():
    deopt 93 [nn2];
  L134():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx20);
  L135():
    nn_na5 = force? nn_na4;
    checkMissing(nn_na5);
    r38 = `!`(nn_na5);
    __4 = ldf `[` in base;
    r39 = dyn __4(tabs17, r38);
    goto L21(r39);
  L136():
    nn3 = force? nn2;
    checkMissing(nn3);
    c13 = `is.object`(nn3);
    if c13 then L137() else L138(nn3);
  L147(dx26):
    r57 = `^`(dx26, 2.0);
    sum = ldf sum in base;
    r58 = dyn sum(r57);
    check L151() else D31();
  L148():
    dr18 = tryDispatchBuiltin.1("$", x4);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L150() else L149(dr18);
  L149(x6):
    r56 = `$`(x6, <sym residuals>);
    goto L147(r56);
  L153(r62, dx28):
    r64 = `/`(r62, dx28);
    st MSE = r64;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L157() else L158();
  L154():
    dr20 = tryDispatchBuiltin.1("$", x8);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L156() else L155(r55, dr20);
  L155(r60, x10):
    r63 = `$`(x10, <sym df.residual>);
    goto L153(r60, r63);
  D31():
    deopt 116 [r58];
  L22(dx23):
    st nn = dx23;
    goto L23();
  L25(r66):
    s = toForSeq(r66);
    l = length(s);
    i = 0;
    goto L26(i);
  L137():
    dr16 = tryDispatchBuiltin.1("[", nn3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L139() else L138(dr16);
  L138(nn5):
    nn_na6 = ld nn_na;
    check L140() else D27();
  L150():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L147(dx25);
  L151():
    goto L24(r58);
  L156():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L153(r55, dx27);
  L157():
    tabs22 = ld tabs;
    check L159() else D33();
  L158():
    r65 = dyn base11(<sym tabs>);
    goto L25(r65);
  D27():
    deopt 95 [nn5, nn_na6];
  D33():
    deopt 123 [tabs22];
  L26(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l, i2);
    if c16 then L161() else L62();
  L139():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L22(dx22);
  L140():
    nn_na7 = force? nn_na6;
    checkMissing(nn_na7);
    r40 = `!`(nn_na7);
    __5 = ldf `[` in base;
    r41 = dyn __5(nn5, r40);
    goto L22(r41);
  L159():
    tabs23 = force? tabs22;
    checkMissing(tabs23);
    names3 = ldf names in base;
    r67 = dyn names3(tabs23);
    check L160() else D34();
  D34():
    deopt 126 [r67];
  L62():
    x11 = `[[`(s, i2, NULL, TRUE);
    st nm = x11;
    tabs24 = ld tabs;
    check L162() else D35();
  L160():
    goto L25(r67);
  L161():
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L297() else L298();
  D35():
    deopt 127 [i2, tabs24];
  L63(r219):
    l7 = ld out;
    class__ = ldf `class<-`;
    check L300() else D98();
  L162():
    tabs25 = force? tabs24;
    checkMissing(tabs25);
    c17 = `is.object`(tabs25);
    if c17 then L163() else L164(i2, tabs25);
  L297():
    c40 = ldf c in base;
    r220 = dyn c40("TukeyHSD", "multicomp");
    check L299() else D97();
  L298():
    r218 = dyn base33("TukeyHSD", "multicomp");
    goto L63(r218);
  D97():
    deopt 366 [r220];
  D98():
    deopt 368 [r219, l7, r219];
  L27(i8, dx30):
    st tab = dx30;
    as_vector = ldf `as.vector`;
    check L167() else D37();
  L163():
    dr22 = tryDispatchBuiltin.1("[[", tabs25);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L165() else L164(i2, dr22);
  L164(i6, tabs27):
    nm = ld nm;
    check L166() else D36();
  L299():
    goto L63(r220);
  L300():
    r221 = dyn class__(l7, NULL, r219);
    check L301() else D99();
  D36():
    deopt 129 [i6, tabs27, nm];
  D37():
    deopt 134 [i8];
  D99():
    deopt 370 [r219, r221];
  L165():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L27(i2, dx29);
  L166():
    nm1 = force? nm;
    __6 = ldf `[[` in base;
    r68 = dyn __6(tabs27, nm1);
    goto L27(i6, r68);
  L167():
    p4 = prom<V +>{
      tab = ld tab;
      tab1 = force? tab;
      checkMissing(tab1);
      return tab1;
    };
    r70 = dyn as_vector(p4);
    check L168() else D38();
  L301():
    st out = r221;
    x20 = ld x;
    check L302() else D100();
  D38():
    deopt 136 [i8, r70];
  D100():
    deopt 372 [x20];
  L168():
    st means = r70;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L169() else L170();
  L302():
    x21 = force? x20;
    checkMissing(x21);
    c41 = `is.object`(x21);
    if c41 then L304() else L305(x21);
  L28(i11, r72):
    r77 = `>`(r72, 1);
    c18 = `as.logical`(r77);
    if c18 then L176() else L30();
  L169():
    sym13 = ldf dim;
    base13 = ldf dim in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L171() else L172();
  L170():
    r71 = dyn base12(<lang dim(tab)>);
    goto L28(i8, r71);
  L303(dx63):
    l8 = ld out;
    attr__ = ldf `attr<-`;
    check L307() else D101();
  L304():
    dr48 = tryDispatchBuiltin.1("$", x21);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L306() else L305(dr48);
  L305(x23):
    r222 = `$`(x23, <sym call>);
    goto L303(r222);
  D101():
    deopt 376 [dx63, l8, dx63];
  L29(i14, r74):
    length1 = ldf length in base;
    r76 = dyn length1(r74);
    check L175() else D41();
  L30():
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L184() else L185();
  L32(i20, r86):
    st nms = r86;
    nn6 = ld nn;
    check L188() else D48();
  L171():
    tab2 = ld tab;
    check L173() else D39();
  L172():
    r73 = dyn base13(<sym tab>);
    goto L29(i8, r73);
  L176():
    sym14 = ldf dimnames;
    base14 = ldf dimnames in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L177() else L178();
  L306():
    dx62 = getTryDispatchBuiltinValue(dr48);
    goto L303(dx62);
  L307():
    r223 = dyn attr__(l8, NULL, "orig.call", dx63);
    check L308() else D102();
  D39():
    deopt 142 [i8, tab2];
  D41():
    deopt 147 [i14, r76];
  D48():
    deopt 172 [i20, nn6];
  D102():
    deopt 379 [dx63, r223];
  L31(i19, r79):
    st dn = r79;
    apply = ldf apply;
    check L181() else D44();
  L173():
    tab3 = force? tab2;
    checkMissing(tab3);
    dim = ldf dim in base;
    r75 = dyn dim(tab3);
    check L174() else D40();
  L175():
    goto L28(i14, r76);
  L177():
    tab4 = ld tab;
    check L179() else D42();
  L178():
    r78 = dyn base14(<sym tab>);
    goto L31(i11, r78);
  L184():
    tab6 = ld tab;
    check L186() else D46();
  L185():
    r87 = dyn base15(<sym tab>);
    goto L32(i11, r87);
  L188():
    nn7 = force? nn6;
    checkMissing(nn7);
    c19 = `is.object`(nn7);
    if c19 then L189() else L190(i20, nn7);
  L308():
    st out = r223;
    conf_level3 = ld `conf.level`;
    check L309() else D103();
  D40():
    deopt 145 [i8, r75];
  D42():
    deopt 152 [i11, tab4];
  D44():
    deopt 158 [i19];
  D46():
    deopt 167 [i11, tab6];
  D103():
    deopt 381 [conf_level3];
  L33(i26, dx32):
    st n = dx32;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L193() else L194();
  L174():
    goto L29(i8, r75);
  L179():
    tab5 = force? tab4;
    checkMissing(tab5);
    dimnames = ldf dimnames in base;
    r80 = dyn dimnames(tab5);
    check L180() else D43();
  L181():
    p6 = prom<V +>{
      do_call = ldf `do.call`;
      p5 = prom<V +>{
        dn = ld dn;
        dn1 = force? dn;
        checkMissing(dn1);
        return dn1;
      };
      r82 = dyn do_call("expand.grid", p5);
      return r82;
    };
    p7 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r85 = dyn apply[, , , collapse](p6, 1, p7, ":");
    check L182() else D45();
  L186():
    tab7 = force? tab6;
    checkMissing(tab7);
    names4 = ldf names in base;
    r88 = dyn names4(tab7);
    check L187() else D47();
  L189():
    dr24 = tryDispatchBuiltin.1("[[", nn7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L191() else L190(i20, dr24);
  L190(i24, nn9):
    nm2 = ld nm;
    check L192() else D49();
  L309():
    conf_level4 = force? conf_level3;
    checkMissing(conf_level4);
    l9 = ld out;
    attr__1 = ldf `attr<-`;
    check L310() else D104();
  D43():
    deopt 155 [i11, r80];
  D45():
    deopt 164 [i19, r85];
  D47():
    deopt 170 [i11, r88];
  D49():
    deopt 174 [i24, nn9, nm2];
  D104():
    deopt 384 [conf_level4, l9, conf_level4];
  L34(i29, r91):
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L197() else L198();
  L180():
    goto L31(i11, r80);
  L182():
    goto L32(i19, r85);
  L187():
    goto L32(i11, r88);
  L191():
    dx31 = getTryDispatchBuiltinValue(dr24);
    goto L33(i20, dx31);
  L192():
    nm3 = force? nm2;
    __7 = ldf `[[` in base;
    r89 = dyn __7(nn9, nm3);
    goto L33(i24, r89);
  L193():
    n = ld n;
    check L195() else D50();
  L194():
    r90 = dyn base16(<sym n>);
    goto L34(i26, r90);
  L310():
    r224 = dyn attr__1(l9, NULL, "conf.level", conf_level4);
    check L311() else D105();
  D50():
    deopt 180 [i26, n];
  D105():
    deopt 387 [conf_level4, r224];
  L35(i32, r96, r97):
    r99 = `<`(r96, r97);
    c20 = `as.logical`(r99);
    if c20 then L201() else L36();
  L195():
    n1 = force? n;
    checkMissing(n1);
    length2 = ldf length in base;
    r92 = dyn length2(n1);
    check L196() else D51();
  L197():
    means = ld means;
    check L199() else D52();
  L198():
    r95 = dyn base17(<sym means>);
    goto L35(i29, r91, r95);
  L311():
    st out = r224;
    ordered3 = ld ordered;
    check L312() else D106();
  D51():
    deopt 183 [i26, r92];
  D52():
    deopt 185 [i29, r91, means];
  D106():
    deopt 389 [ordered3];
  L36():
    goto L39(i32);
  L39(i41):
    sym20 = ldf `as.logical`;
    base20 = ldf `as.logical` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L211() else L212();
  L196():
    goto L34(i26, r92);
  L199():
    means1 = force? means;
    checkMissing(means1);
    length3 = ldf length in base;
    r98 = dyn length3(means1);
    check L200() else D53();
  L201():
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L202() else L203();
  L312():
    ordered4 = force? ordered3;
    checkMissing(ordered4);
    l10 = ld out;
    attr__2 = ldf `attr<-`;
    check L313() else D107();
  D53():
    deopt 188 [i29, r91, r98];
  D107():
    deopt 392 [ordered4, l10, ordered4];
  L37(i37, r101):
    st n = r101;
    goto L39(i37);
  L40(i44, r108):
    c21 = `as.logical`(r108);
    if c21 then L215() else L41();
  L200():
    goto L35(i29, r91, r98);
  L202():
    n2 = ld n;
    check L204() else D54();
  L203():
    r100 = dyn base18(<sym n>, <lang length(means)>);
    goto L37(i32, r100);
  L211():
    ordered1 = ld ordered;
    check L213() else D58();
  L212():
    r107 = dyn base20(<sym ordered>);
    goto L40(i41, r107);
  L313():
    r225 = dyn attr__2(l10, NULL, "ordered", ordered4);
    check L314() else D108();
  D54():
    deopt 192 [i32, n2];
  D58():
    deopt 207 [i41, ordered1];
  D108():
    deopt 395 [ordered4, r225];
  L41():
    goto L48(i44);
  L48(i65):
    outer = ldf outer;
    check L239() else D69();
  L204():
    n3 = force? n2;
    checkMissing(n3);
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L205() else L206();
  L213():
    ordered2 = force? ordered1;
    checkMissing(ordered2);
    as_logical = ldf `as.logical` in base;
    r109 = dyn as_logical(ordered2);
    check L214() else D59();
  L215():
    order = ldf order;
    check L216() else D60();
  L314():
    st out = r225;
    out = ld out;
    check L315() else D109();
  D59():
    deopt 210 [i41, r109];
  D60():
    deopt 212 [i44];
  D69():
    deopt 244 [i65];
  D109():
    deopt 397 [out];
  L38(i40, r103):
    rep_int = ldf `rep.int` in base;
    r105 = dyn rep_int(n3, r103);
    check L209() else D57();
  L205():
    means2 = ld means;
    check L207() else D55();
  L206():
    r102 = dyn base19(<sym means>);
    goto L38(i32, r102);
  L214():
    goto L40(i41, r109);
  L216():
    p8 = prom<V +>{
      means4 = ld means;
      means5 = force? means4;
      checkMissing(means5);
      return means5;
    };
    r111 = dyn order(p8);
    check L217() else D61();
  L239():
    p9 = prom<V +>{
      means10 = ld means;
      means11 = force? means10;
      checkMissing(means11);
      return means11;
    };
    p10 = prom<V +>{
      means12 = ld means;
      means13 = force? means12;
      checkMissing(means13);
      return means13;
    };
    p11 = prom<V +>{
      __11 = ld `-`;
      __12 = force? __11;
      checkMissing(__12);
      return __12;
    };
    r121 = dyn outer(p9, p10, p11);
    check L240() else D70();
  L315():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D55():
    deopt 196 [i32, means2];
  D57():
    deopt 201 [i40, r105];
  D61():
    deopt 214 [i44, r111];
  D70():
    deopt 248 [i65, r121];
  L207():
    means3 = force? means2;
    checkMissing(means3);
    length4 = ldf length in base;
    r104 = dyn length4(means3);
    check L208() else D56();
  L209():
    goto L37(i40, r105);
  L217():
    st ord = r111;
    means6 = ld means;
    check L218() else D62();
  L240():
    st center = r121;
    lower_tri = ldf `lower.tri`;
    check L241() else D71();
  D56():
    deopt 199 [i32, r104];
  D62():
    deopt 216 [i44, means6];
  D71():
    deopt 251 [i65];
  L208():
    goto L38(i32, r104);
  L218():
    means7 = force? means6;
    checkMissing(means7);
    c22 = `is.object`(means7);
    if c22 then L219() else L220(i44, means7);
  L241():
    p12 = prom<V +>{
      center = ld center;
      center1 = force? center;
      checkMissing(center1);
      return center1;
    };
    r123 = dyn lower_tri(p12);
    check L242() else D72();
  D72():
    deopt 253 [i65, r123];
  L42(i50, dx34):
    st means = dx34;
    n4 = ld n;
    check L223() else D64();
  L219():
    dr26 = tryDispatchBuiltin.1("[", means7);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L221() else L220(i44, dr26);
  L220(i48, means9):
    ord = ld ord;
    check L222() else D63();
  L242():
    st keep = r123;
    center2 = ld center;
    check L243() else D73();
  D63():
    deopt 218 [i48, means9, ord];
  D64():
    deopt 222 [i50, n4];
  D73():
    deopt 255 [i65, center2];
  L221():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L42(i44, dx33);
  L222():
    ord1 = force? ord;
    __8 = ldf `[` in base;
    r112 = dyn __8(means9, ord1);
    goto L42(i48, r112);
  L223():
    n5 = force? n4;
    checkMissing(n5);
    c23 = `is.object`(n5);
    if c23 then L224() else L225(i50, n5);
  L243():
    center3 = force? center2;
    checkMissing(center3);
    c27 = `is.object`(center3);
    if c27 then L244() else L245(i65, center3);
  L43(i54, dx36):
    st n = dx36;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L228() else L229();
  L49(i69, dx42):
    st center = dx42;
    qtukey = ldf qtukey;
    check L248() else D75();
  L224():
    dr28 = tryDispatchBuiltin.1("[", n5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L226() else L225(i50, dr28);
  L225(i52, n7):
    ord2 = ld ord;
    check L227() else D65();
  L244():
    dr32 = tryDispatchBuiltin.1("[", center3);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L246() else L245(i65, dr32);
  L245(i67, center5):
    keep = ld keep;
    check L247() else D74();
  D65():
    deopt 224 [i52, n7, ord2];
  D74():
    deopt 257 [i67, center5, keep];
  D75():
    deopt 262 [i69];
  L44(i57, r115):
    r116 = `!`(r115);
    c25 = `as.logical`(r116);
    if c25 then L231() else L45();
  L226():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L43(i50, dx35);
  L227():
    ord3 = force? ord2;
    __9 = ldf `[` in base;
    r113 = dyn __9(n7, ord3);
    goto L43(i52, r113);
  L228():
    nms = ld nms;
    check L230() else D66();
  L229():
    r114 = dyn base21(<sym nms>);
    goto L44(i54, r114);
  L246():
    dx41 = getTryDispatchBuiltinValue(dr32);
    goto L49(i65, dx41);
  L247():
    keep1 = force? keep;
    __13 = ldf `[` in base;
    r124 = dyn __13(center5, keep1);
    goto L49(i67, r124);
  L248():
    p13 = prom<V +>{
      conf_level1 = ld `conf.level`;
      conf_level2 = force? conf_level1;
      checkMissing(conf_level2);
      return conf_level2;
    };
    p14 = prom<V +>{
      sym22 = ldf length;
      base22 = ldf length in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r127):
      return r127;
    L1():
      means14 = ld means;
      means15 = force? means14;
      checkMissing(means15);
      length5 = ldf length in base;
      r128 = dyn length5(means15);
      goto L0(r128);
    L2():
      r126 = dyn base22(<sym means>);
      goto L0(r126);
    };
    p15 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c28 = `is.object`(x13);
      if c28 then L1() else L2(x13);
    L0(dx44):
      return dx44;
    L1():
      dr34 = tryDispatchBuiltin.1("$", x13);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(x15):
      r130 = `$`(x15, <sym df.residual>);
      goto L0(r130);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx43);
    };
    r132 = dyn qtukey(p13, p14, p15);
    check L249() else D76();
  D66():
    deopt 229 [i54, nms];
  D76():
    deopt 266 [i69, r132];
  L45():
    goto L47(i57, NULL);
  L47(i64, dx39):
    goto L48(i64);
  L230():
    nms1 = force? nms;
    checkMissing(nms1);
    c24 = `==`(nms1, NULL);
    goto L44(i54, c24);
  L231():
    nms2 = ld nms;
    check L232() else D67();
  L249():
    sym23 = ldf sqrt;
    base23 = ldf sqrt in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L250() else L251();
  D67():
    deopt 233 [i57, nms2];
  L50(i72, r136, r137):
    c29 = `is.object`(r137);
    if c29 then L255() else L256(i72, r136, r137);
  L232():
    nms3 = force? nms2;
    checkMissing(nms3);
    c26 = `is.object`(nms3);
    if c26 then L233() else L234(i57, nms3);
  L250():
    MSE = ld MSE;
    check L252() else D77();
  L251():
    r135 = dyn base23(<lang `*`(`(`(`/`(MSE, 2.0)), outer(`/`(1.0, n), `/`(1.0, n), `+`))>);
    goto L50(i69, r132, r135);
  D77():
    deopt 267 [i69, r132, MSE];
  L46(i63, dx38):
    st nms = dx38;
    goto L47(i63, dx38);
  L51(i76, r152, dx46):
    r154 = `*`(r152, dx46);
    st width = r154;
    center6 = ld center;
    check L259() else D81();
  L233():
    dr30 = tryDispatchBuiltin.1("[", nms3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L235() else L234(i57, dr30);
  L234(i61, nms5):
    ord4 = ld ord;
    check L236() else D68();
  L252():
    MSE1 = force? MSE;
    checkMissing(MSE1);
    r138 = `/`(MSE1, 2.0);
    outer1 = ldf outer;
    check L253() else D78();
  L255():
    dr36 = tryDispatchBuiltin.1("[", r137);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L257() else L256(i72, r136, dr36);
  L256(i74, r149, r150):
    keep2 = ld keep;
    check L258() else D80();
  D68():
    deopt 235 [i61, nms5, ord4];
  D78():
    deopt 271 [i69, r132, r138];
  D80():
    deopt 278 [i74, r149, r150, keep2];
  D81():
    deopt 283 [i76, center6];
  L235():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L46(i57, dx37);
  L236():
    ord5 = force? ord4;
    __10 = ldf `[` in base;
    r117 = dyn __10(nms5, ord5);
    goto L46(i61, r117);
  L253():
    p16 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      r139 = `/`(1.0, n9);
      return r139;
    };
    p17 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      r141 = `/`(1.0, n11);
      return r141;
    };
    p18 = prom<V +>{
      __14 = ld `+`;
      __15 = force? __14;
      checkMissing(__15);
      return __15;
    };
    r144 = dyn outer1(p16, p17, p18);
    check L254() else D79();
  L257():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L51(i72, r136, dx45);
  L258():
    keep3 = force? keep2;
    __16 = ldf `[` in base;
    r153 = dyn __16(r150, keep3);
    goto L51(i74, r149, r153);
  L259():
    center7 = force? center6;
    checkMissing(center7);
    sym24 = ldf sqrt;
    base24 = ldf sqrt in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L260() else L261();
  D79():
    deopt 275 [i69, r132, r138, r144];
  L52(i79, center10, r156):
    c30 = `is.object`(r156);
    if c30 then L265() else L266(i79, center10, r156);
  L254():
    r145 = `*`(r138, r144);
    r146 = sqrt(r145);
    goto L50(i69, r132, r146);
  L260():
    MSE2 = ld MSE;
    check L262() else D82();
  L261():
    r155 = dyn base24(<lang `*`(`(`(`/`(MSE, 2.0)), outer(`/`(1.0, n), `/`(1.0, n), `+`))>);
    goto L52(i76, center7, r155);
  D82():
    deopt 285 [i76, center7, MSE2];
  L53(i83, center14, dx48):
    r169 = `/`(center14, dx48);
    st est = r169;
    ptukey = ldf ptukey;
    check L269() else D86();
  L262():
    MSE3 = force? MSE2;
    checkMissing(MSE3);
    r157 = `/`(MSE3, 2.0);
    outer2 = ldf outer;
    check L263() else D83();
  L265():
    dr38 = tryDispatchBuiltin.1("[", r156);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L267() else L266(i79, center10, dr38);
  L266(i81, center12, r167):
    keep4 = ld keep;
    check L268() else D85();
  D83():
    deopt 289 [i76, center7, r157];
  D85():
    deopt 296 [i81, center12, r167, keep4];
  D86():
    deopt 302 [i83];
  L263():
    p19 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      r158 = `/`(1.0, n13);
      return r158;
    };
    p20 = prom<V +>{
      n14 = ld n;
      n15 = force? n14;
      checkMissing(n15);
      r160 = `/`(1.0, n15);
      return r160;
    };
    p21 = prom<V +>{
      __17 = ld `+`;
      __18 = force? __17;
      checkMissing(__18);
      return __18;
    };
    r163 = dyn outer2(p19, p20, p21);
    check L264() else D84();
  L267():
    dx47 = getTryDispatchBuiltinValue(dr38);
    goto L53(i79, center10, dx47);
  L268():
    keep5 = force? keep4;
    __19 = ldf `[` in base;
    r168 = dyn __19(r167, keep5);
    goto L53(i81, center12, r168);
  L269():
    p22 = prom<V +>{
      sym25 = ldf abs;
      base25 = ldf abs in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r171):
      return r171;
    L1():
      est = ld est;
      est1 = force? est;
      checkMissing(est1);
      abs = ldf abs in base;
      r172 = dyn abs(est1);
      goto L0(r172);
    L2():
      r170 = dyn base25(<sym est>);
      goto L0(r170);
    };
    p23 = prom<V +>{
      sym26 = ldf length;
      base26 = ldf length in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r175):
      return r175;
    L1():
      means16 = ld means;
      means17 = force? means16;
      checkMissing(means17);
      length6 = ldf length in base;
      r176 = dyn length6(means17);
      goto L0(r176);
    L2():
      r174 = dyn base26(<sym means>);
      goto L0(r174);
    };
    p24 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      c31 = `is.object`(x17);
      if c31 then L1() else L2(x17);
    L0(dx50):
      return dx50;
    L1():
      dr40 = tryDispatchBuiltin.1("$", x17);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(x19):
      r178 = `$`(x19, <sym df.residual>);
      goto L0(r178);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx49);
    };
    r180 = dyn ptukey[, , , `lower.tail`](p22, p23, p24, FALSE);
    check L270() else D87();
  D84():
    deopt 293 [i76, center7, r157, r163];
  D87():
    deopt 308 [i83, r180];
  L264():
    r164 = `*`(r157, r163);
    r165 = sqrt(r164);
    goto L52(i76, center7, r165);
  L270():
    st pvals = r180;
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L271() else L272();
  L54(i86, r182):
    st dnames = r182;
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L277() else L278();
  L271():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L273() else L274();
  L272():
    r181 = dyn base27(NULL, <lang c("diff", "lwr", "upr", "p adj")>);
    goto L54(i83, r181);
  L55(i89, r184):
    list = ldf list in base;
    r186 = dyn list(NULL, r184);
    check L276() else D89();
  L56(i92, r188):
    r189 = `!`(r188);
    c34 = `as.logical`(r189);
    if c34 then L280() else L57();
  L273():
    c32 = ldf c in base;
    r185 = dyn c32("diff", "lwr", "upr", "p adj");
    check L275() else D88();
  L274():
    r183 = dyn base28("diff", "lwr", "upr", "p adj");
    goto L55(i83, r183);
  L277():
    nms6 = ld nms;
    check L279() else D90();
  L278():
    r187 = dyn base29(<sym nms>);
    goto L56(i86, r187);
  D88():
    deopt 320 [i83, r185];
  D89():
    deopt 322 [i89, r186];
  D90():
    deopt 325 [i86, nms6];
  L57():
    goto L60(i92);
  L60(i103):
    array = ldf array;
    check L291() else D94();
  L275():
    goto L55(i83, r185);
  L276():
    goto L54(i89, r186);
  L279():
    nms7 = force? nms6;
    checkMissing(nms7);
    c33 = `==`(nms7, NULL);
    goto L56(i86, c33);
  L280():
    outer3 = ldf outer;
    check L281() else D91();
  D91():
    deopt 330 [i92];
  D94():
    deopt 348 [i103];
  L281():
    p25 = prom<V +>{
      nms8 = ld nms;
      nms9 = force? nms8;
      checkMissing(nms9);
      return nms9;
    };
    p26 = prom<V +>{
      nms10 = ld nms;
      nms11 = force? nms10;
      checkMissing(nms11);
      return nms11;
    };
    p27 = prom<V +>{
      paste2 = ld paste;
      paste3 = force? paste2;
      checkMissing(paste3);
      return paste3;
    };
    r193 = dyn outer3[, , , sep](p25, p26, p27, "-");
    check L282() else D92();
  L291():
    p28 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r199):
      return r199;
    L1():
      center15 = ld center;
      center16 = force? center15;
      checkMissing(center16);
      center17 = ld center;
      center18 = force? center17;
      checkMissing(center18);
      width = ld width;
      width1 = force? width;
      checkMissing(width1);
      r200 = `-`(center18, width1);
      center19 = ld center;
      center20 = force? center19;
      checkMissing(center20);
      width2 = ld width;
      width3 = force? width2;
      checkMissing(width3);
      r201 = `+`(center20, width3);
      pvals = ld pvals;
      pvals1 = force? pvals;
      checkMissing(pvals1);
      c37 = ldf c in base;
      r202 = dyn c37(center16, r200, r201, pvals1);
      goto L0(r202);
    L2():
      r198 = dyn base30(<sym center>, <lang `-`(center, width)>, <lang `+`(center, width)>, <sym pvals>);
      goto L0(r198);
    };
    p29 = prom<V +>{
      sym31 = ldf c;
      base31 = ldf c in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L2() else L3();
    L0(r205):
      return r205;
    L2():
      sym32 = ldf length;
      base32 = ldf length in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L4() else L5();
    L3():
      r204 = dyn base31(<lang length(width)>, 4);
      goto L0(r204);
    L1(r207):
      c38 = ldf c in base;
      r209 = dyn c38(r207, 4);
      goto L0(r209);
    L4():
      width4 = ld width;
      width5 = force? width4;
      checkMissing(width5);
      length7 = ldf length in base;
      r208 = dyn length7(width5);
      goto L1(r208);
    L5():
      r206 = dyn base32(<sym width>);
      goto L1(r206);
    };
    p30 = prom<V +>{
      dnames = ld dnames;
      dnames1 = force? dnames;
      checkMissing(dnames1);
      return dnames1;
    };
    r212 = dyn array(p28, p29, p30);
    check L292() else D95();
  D92():
    deopt 336 [i92, r193];
  D95():
    deopt 352 [i103, r212];
  L282():
    c35 = `is.object`(r193);
    if c35 then L283() else L284(i92, r193);
  L292():
    l4 = ld out;
    c39 = `is.object`(l4);
    if c39 then L293() else L294(i103, r212, l4);
  L58(i98, dx52):
    l1 = ld dnames;
    c36 = `is.object`(l1);
    if c36 then L287() else L288(i98, dx52, l1);
  L61(i107, dx61):
    st out = dx61;
    goto L26(i107);
  L283():
    dr42 = tryDispatchBuiltin.1("[", r193);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L285() else L284(i92, dr42);
  L284(i96, r195):
    keep6 = ld keep;
    check L286() else D93();
  L293():
    dr46 = tryDispatchBuiltin.0("[[<-", l4, r212);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L295() else L294(i103, r212, dr46);
  L294(i105, r214, l6):
    nm4 = ld nm;
    check L296() else D96();
  D93():
    deopt 337 [i96, r195, keep6];
  D96():
    deopt 354 [i105, r214, l6, r212, nm4];
  L59(i102, dx57, dx58):
    st dnames = dx58;
    goto L60(i102);
  L285():
    dx51 = getTryDispatchBuiltinValue(dr42);
    goto L58(i92, dx51);
  L286():
    keep7 = force? keep6;
    __20 = ldf `[` in base;
    r196 = dyn __20(r195, keep7);
    goto L58(i96, r196);
  L287():
    dr44 = tryDispatchBuiltin.0("[[<-", l1, dx52);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L289() else L288(i98, dx52, dr44);
  L288(i100, dx54, l3):
    ____ = ldf `[[<-` in base;
    r197 = dyn ____(l3, dx52, 1);
    goto L59(i100, dx54, r197);
  L295():
    dx60 = getTryDispatchBuiltinValue(dr46);
    goto L61(i103, dx60);
  L296():
    nm5 = force? nm4;
    ____1 = ldf `[[<-` in base;
    r217 = dyn ____1(l6, r212, nm5);
    goto L61(i105, r217);
  L289():
    dx56 = getTryDispatchBuiltinValue(dr44);
    goto L59(i98, dx52, dx56);
  }
}