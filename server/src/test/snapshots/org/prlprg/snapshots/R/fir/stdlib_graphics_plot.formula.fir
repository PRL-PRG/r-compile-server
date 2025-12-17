fun main() {
  () -+> V { reg r:cls, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg plot:cls, reg __:cls, reg r6:V, reg p1:p(V +), reg airquality:*, reg airquality1:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg Month:*, reg Month1:V, reg as_character:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg plot1:cls, reg __1:cls, reg r14:V, reg p4:p(V +), reg airquality2:*, reg airquality3:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg Month2:*, reg Month3:V, reg as_character1:cls, reg r19:V, reg p6:p(V +), reg Month4:*, reg Month5:V, reg r21:V, reg p7:p(V +), reg r23:V, reg par1:cls, reg op:*, reg op1:V, reg p8:p(V +), reg r25:V, reg within:cls, reg warpbreaks:*, reg warpbreaks1:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg breaks:*, reg breaks1:V, reg r29:I, reg wool:*, reg wool1:V, reg tension:*, reg tension1:V, reg r30:V, reg p10:p(V +), reg r32:V, reg plot2:cls, reg __2:cls, reg r33:V, reg p11:p(V +), reg wb:*, reg wb1:V, reg p12:p(V +), reg r36:V, reg text:cls, reg __3:cls, reg r37:V, reg p13:p(V +), reg wb2:*, reg wb3:V, reg p14:p(V +), reg W_T:*, reg W_T1:V, reg p15:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:R, reg r45:V, reg wool2:*, reg wool3:V, reg as_integer:cls, reg r46:V, reg r47:V, reg p16:p(V +), reg r49:V |
    mkenv;
    r = clos inner1748793770;
    st `plot.formula` = r;
    par = ldf par;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(2.0, 1.0);
      goto L0(r3);
    L2():
      r1 = dyn base(2.0, 1.0);
      goto L0(r1);
    };
    r5 = dyn par[mfrow](p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    st op = r5;
    plot = ldf plot;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r6 = dyn __(<sym Ozone>, <sym Wind>);
      return r6;
    };
    p2 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p3 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      Month = ld Month;
      Month1 = force? Month;
      checkMissing(Month1);
      as_character = ldf `as.character` in base;
      r11 = dyn as_character(Month1);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym Month>);
      goto L0(r9);
    };
    r13 = dyn plot[, data, pch](p1, p2, p3);
    check L3() else D3();
  D3():
    deopt 16 [r13];
  L3():
    plot1 = ldf plot;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p4 = prom<V +>{
      __1 = ldf `~` in base;
      r14 = dyn __1(<sym Ozone>, <sym Wind>);
      return r14;
    };
    p5 = prom<V +>{
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      return airquality3;
    };
    p6 = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      Month2 = ld Month;
      Month3 = force? Month2;
      checkMissing(Month3);
      as_character1 = ldf `as.character` in base;
      r19 = dyn as_character1(Month3);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym Month>);
      goto L0(r17);
    };
    p7 = prom<V +>{
      Month4 = ld Month;
      Month5 = force? Month4;
      checkMissing(Month5);
      r21 = `!=`(Month5, 7.0);
      return r21;
    };
    r23 = dyn plot1[, data, pch, subset](p4, p5, p6, p7);
    check L5() else D5();
  D5():
    deopt 26 [r23];
  L5():
    par1 = ldf par;
    check L6() else D6();
  D6():
    deopt 28 [];
  L6():
    p8 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r25 = dyn par1(p8);
    check L7() else D7();
  D7():
    deopt 30 [r25];
  L7():
    within = ldf within;
    check L8() else D8();
  D8():
    deopt 32 [];
  L8():
    p9 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    p10 = prom<V +>{
      sym3 = ldf seq_along;
      base3 = ldf seq_along in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      st time = r28;
      wool = ld wool;
      wool1 = force? wool;
      checkMissing(wool1);
      tension = ld tension;
      tension1 = force? tension;
      checkMissing(tension1);
      r30 = `:`(wool1, tension1);
      st `W.T` = r30;
      invisible.0();
      return r30;
    L1():
      breaks = ld breaks;
      breaks1 = force? breaks;
      checkMissing(breaks1);
      r29 = seq_along(breaks1);
      goto L0(r29);
    L2():
      r27 = dyn base3(<sym breaks>);
      goto L0(r27);
    };
    r32 = dyn within(p9, p10);
    check L9() else D9();
  D9():
    deopt 35 [r32];
  L9():
    st wb = r32;
    plot2 = ldf plot;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    p11 = prom<V +>{
      __2 = ldf `~` in base;
      r33 = dyn __2(<sym breaks>, <sym time>);
      return r33;
    };
    p12 = prom<V +>{
      wb = ld wb;
      wb1 = force? wb;
      checkMissing(wb1);
      return wb1;
    };
    r36 = dyn plot2[, data, type](p11, p12, "b");
    check L11() else D11();
  D11():
    deopt 44 [r36];
  L11():
    text = ldf text;
    check L12() else D12();
  D12():
    deopt 46 [];
  L12():
    p13 = prom<V +>{
      __3 = ldf `~` in base;
      r37 = dyn __3(<sym breaks>, <sym time>);
      return r37;
    };
    p14 = prom<V +>{
      wb2 = ld wb;
      wb3 = force? wb2;
      checkMissing(wb3);
      return wb3;
    };
    p15 = prom<V +>{
      W_T = ld `W.T`;
      W_T1 = force? W_T;
      checkMissing(W_T1);
      return W_T1;
    };
    p16 = prom<V +>{
      sym4 = ldf `as.integer`;
      base4 = ldf `as.integer` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r44, r45):
      r47 = `+`(r44, r45);
      return r47;
    L1():
      wool2 = ld wool;
      wool3 = force? wool2;
      checkMissing(wool3);
      as_integer = ldf `as.integer` in base;
      r46 = dyn as_integer(wool3);
      goto L0(1.0, r46);
    L2():
      r43 = dyn base4(<sym wool>);
      goto L0(1.0, r43);
    };
    r49 = dyn text[, data, labels, col](p13, p14, p15, p16);
    check L13() else D13();
  D13():
    deopt 54 [r49];
  L13():
    popenv;
    return r49;
  }
}
fun inner1748793770(formula, data, `...`, subset, ylab, ask) {
  (reg formula:*, reg data:*, reg ddd:dots, reg subset:*, reg ylab:*, reg ask:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `...`:dots?, var subset:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg varnames:*, reg varnames1:V, reg c:L, reg varnames3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg response:*, reg response1:V, reg __:cls, reg r2:V, reg p1:p(V +), var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, reg dev_interactive:cls, reg r4:V, reg p2:p(V +), reg match_call:cls, reg r6:V, reg parent_frame1:cls, reg r7:V, reg eval:cls, reg m:*, reg m1:V, reg c1:L, reg m3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p3:p(V +), reg eframe:*, reg eframe1:V, reg p4:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg md:*, reg md1:V, reg is_matrix:cls, reg r14:V, reg c2:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p5:p(V +), reg r16:V, reg l:*, reg c3:L, reg r18:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r20:V, reg dx5:V, reg r21:V, reg lapply:cls, reg __1:cls, reg r23:V, reg p6:p(V +), reg eval1:*, reg eval2:V, reg p7:p(V +), reg md2:*, reg md3:V, reg p8:p(V +), reg eframe2:*, reg eframe3:V, reg p9:p(V +), reg r28:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg dots:*, reg dots1:V, reg names:cls, reg r31:V, reg nmdots:*, reg nmdots1:V, reg c4:L, reg nmdots3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg nmdots6:V, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg nmdots9:V, reg r35:V, reg c5:cls, reg r36:V, reg nmdots10:*, reg nmdots11:V, reg match:cls, reg r37:V, reg __2:cls, reg r38:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg enquote:cls, reg dots2:*, reg dots3:V, reg c7:L, reg dots5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg nm:*, reg nm1:V, reg __3:cls, reg r39:V, reg p10:p(V +), reg r41:V, reg l4:*, reg c8:L, reg i6:I, reg r43:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i8:I, reg dx11:V, reg nm2:*, reg nm3:V, reg ____:cls, reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg missing:cls, reg r49:V, reg r50:V, reg c9:L, reg enquote1:cls, reg ylab1:*, reg ylab2:V, reg p11:p(V +), reg r52:V, reg l7:*, reg c10:L, reg r55:dots, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r57:dots, reg dx13:V, reg r58:V, reg l10:*, reg ___:cls, reg ddd1:dots?, reg r59:V, reg l11:*, reg c11:L, reg r61:dots, reg l13:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r64:V, reg m4:*, reg m5:V, reg c12:L, reg m7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r65:V, reg l14:*, reg c13:L, reg r67:dots, reg l16:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r70:V, reg as_list:cls, reg m8:*, reg m9:V, reg p12:p(V +), reg r72:V, reg __4:cls, reg r73:V, reg l17:*, reg c14:L, reg r75:V, reg l19:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg ____1:cls, reg r78:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r79:V, reg r80:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r81:V, reg r82:V, reg m10:*, reg m11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r83:V, reg r84:V, reg list:cls, reg r85:V, reg c15:cls, reg r86:V, reg as_call:cls, reg r87:V, reg eval3:cls, reg m12:*, reg m13:V, reg p13:p(V +), reg eframe4:*, reg eframe5:V, reg p14:p(V +), reg r90:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r91:V, reg r92:V, reg missing1:cls, reg r93:V, reg r94:V, reg c16:L, reg eval4:cls, reg subset_expr:*, reg subset_expr1:V, reg p15:p(V +), reg data3:*, reg data4:V, reg p16:p(V +), reg eframe6:*, reg eframe7:V, reg p17:p(V +), reg r98:V, reg nrow:cls, reg mf:*, reg mf1:V, reg p18:p(V +), reg r100:V, reg r101:cls, reg lapply1:cls, reg dots6:*, reg dots7:V, reg p19:p(V +), reg dosub:*, reg dosub1:V, reg p20:p(V +), reg r104:V, reg mf2:*, reg mf3:V, reg c17:L, reg mf5:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg s1:*, reg s2:V, reg __5:cls, reg r105:V, reg _in_:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r106:V, reg r107:V, reg dots8:*, reg dots9:V, reg names1:cls, reg r108:V, reg p21:p(V +), reg r110:V, reg c18:L, reg dots10:*, reg dots11:V, reg c19:L, reg dots13:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg __6:cls, reg r111:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r112:V, reg r113:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r114:V, reg r115:V, reg mf6:*, reg mf7:V, reg attr:cls, reg r116:V, reg attr1:cls, reg r117:V, reg response2:*, reg response3:V, reg c20:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r118:V, reg r119:V, reg mf8:*, reg mf9:V, reg names2:cls, reg r120:V, reg mf10:*, reg mf11:V, reg c21:L, reg mf13:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg response4:*, reg response5:V, reg __7:cls, reg r121:V, reg varnames4:*, reg varnames5:V, reg c22:L, reg varnames7:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg response6:*, reg response7:V, reg r122:V, reg __8:cls, reg r123:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg r125:V, reg y:*, reg y1:V, reg c23:L, reg c24:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r126:V, reg r127:V, reg y2:*, reg y3:V, reg class:cls, reg r128:V, reg s3:V, reg l20:I, reg i9:I, reg i10:I, reg i11:I, reg c25:L, reg x1:V, reg paste0:cls, reg j:*, reg j1:V, reg p22:p(V +), reg r130:V, reg exists:cls, reg funname:*, reg funname1:V, reg p23:p(V +), reg r132:V, reg c26:L, reg found:*, reg found1:V, reg r134:V, reg c27:L, reg r135:dots, reg sym15:cls, reg base15:cls, reg guard15:L, reg r137:V, reg r138:V, reg funname2:*, reg funname3:V, reg c28:V, reg c29:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r140:V, reg r141:V, reg varnames8:*, reg varnames9:V, reg length:cls, reg r142:V, reg r143:V, reg c30:L, reg devAskNewPage:cls, reg ask1:*, reg ask2:V, reg p24:p(V +), reg r145:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r146:V, reg r147:V, reg on_exit:cls, reg r148:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg r151:V, reg xn:*, reg xn1:V, reg length1:cls, reg r152:V, reg c31:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r153:V, reg r154:V, reg dots14:*, reg dots15:V, reg c32:L, reg dots17:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __9:cls, reg r155:V, reg c33:V, reg r156:V, reg c34:L, reg dots18:*, reg dots19:V, reg c35:L, reg dots21:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r157:V, reg dots24:V, reg r158:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r159:V, reg dots27:V, reg r160:V, reg dots28:*, reg dots29:V, reg names3:cls, reg r161:V, reg match1:cls, reg r162:V, reg r163:V, reg __10:cls, reg r164:V, reg xn2:*, reg xn3:V, reg s4:V, reg l21:I, reg i19:I, reg i20:I, reg i21:I, reg c36:L, reg x2:V, reg ____2:cls, reg xlab:*, reg xlab1:V, reg p25:p(V +), reg i24:*, reg i25:V, reg p26:p(V +), reg r167:V, reg ylab3:*, reg ylab4:V, reg horizontal:*, reg horizontal1:V, reg c37:L, reg i27:I, reg c39:V, reg is_factor:cls, reg mf14:*, reg mf15:V, reg c40:L, reg mf17:V, reg dr34:V, reg dc17:L, reg dx37:V, reg dx38:V, reg i28:*, reg i29:V, reg __11:cls, reg r168:V, reg p27:p(V +), reg r170:V, reg c41:L, reg c42:V, reg c44:L, reg xl:*, reg xl1:V, reg ylab5:*, reg ylab6:V, reg i33:I, reg do_call:cls, reg funname4:*, reg funname5:V, reg p28:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r172:V, reg r173:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r174:V, reg r175:V, reg mf18:*, reg mf19:V, reg c45:L, reg mf21:V, reg dr36:V, reg dc18:L, reg dx39:V, reg dx40:V, reg i34:*, reg i35:V, reg __12:cls, reg r176:V, reg y4:*, reg y5:V, reg yl:*, reg yl1:V, reg xl2:*, reg xl3:V, reg list1:cls, reg r177:V, reg dots30:*, reg dots31:V, reg c46:cls, reg r178:V, reg p29:p(V +), reg r180:V, reg i36:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r181:V, reg r182:V, reg varnames10:*, reg varnames11:V, reg length2:cls, reg r183:V, reg r184:V, reg c47:L, reg c49:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r185:V, reg c52:L, reg r186:V, reg formula1:*, reg formula2:V, reg length3:cls, reg r187:V, reg r188:V, reg c53:L, reg c54:V, reg c56:L, reg c58:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r189:V, reg c61:L, reg r190:V, reg formula3:*, reg formula4:V, reg c62:L, reg c64:L, reg formula6:V, reg dr38:V, reg dc19:L, reg dx41:V, reg c66:L, reg dx42:V, reg __13:cls, reg r191:V, reg formula7:*, reg formula8:V, reg c67:L, reg c69:L, reg formula10:V, reg dr40:V, reg dc20:L, reg dx43:V, reg c71:L, reg dx44:V, reg __14:cls, reg r192:V, reg identical:cls, reg r193:V, reg c72:L, reg c73:V, reg c75:L, reg warning:cls, reg gettextf:cls, reg format:cls, reg formula11:*, reg formula12:V, reg p30:p(V +), reg r195:V, reg p31:p(V +), reg format1:cls, reg r197:cls, reg r198:cls, reg r199:V, reg p32:p(V +), reg r201:V, reg p33:p(V +), reg r203:V, reg p34:p(V +), reg r205:V, reg do_call1:cls, reg funname6:*, reg funname7:V, reg p35:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r208:V, reg r209:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r210:V, reg r211:V, reg y6:*, reg y7:V, reg ylab8:*, reg ylab9:V, reg list2:cls, reg r212:V, reg dots32:*, reg dots33:V, reg c76:cls, reg r213:V, reg p36:p(V +), reg r215:V, reg do_call2:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r216:V, reg r217:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r218:V, reg r219:V, reg mf22:*, reg mf23:V, reg list3:cls, reg r220:V, reg dots34:*, reg dots35:V, reg c77:cls, reg r221:V, reg p37:p(V +), reg r223:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r224:V, reg r225:V, reg invisible:cls, reg r226:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0() else L1(data);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    st subset = subset;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2() else L3(ylab);
  L2():
    p1 = prom<V +>{
      varnames = ld varnames;
      varnames1 = force? varnames;
      checkMissing(varnames1);
      c = `is.object`(varnames1);
      if c then L1() else L2(varnames1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", varnames1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(varnames3):
      response = ld response;
      response1 = force? response;
      __ = ldf `[` in base;
      r2 = dyn __(varnames3, response1);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L4() else L5(ask);
  L4():
    p2 = prom<V +>{
      dev_interactive = ldf `dev.interactive`;
      r4 = dyn dev_interactive();
      return r4;
    };
    goto L5(p2);
  L5(ask_orDefault):
    st ask = ask_orDefault;
    match_call = ldf `match.call`;
    check L80() else D0();
  D0():
    deopt 1 [];
  L80():
    r6 = dyn match_call[`expand.dots`](FALSE);
    check L81() else D1();
  D1():
    deopt 4 [r6];
  L81():
    st m = r6;
    parent_frame1 = ldf `parent.frame`;
    check L82() else D2();
  D2():
    deopt 7 [];
  L82():
    r7 = dyn parent_frame1();
    check L83() else D3();
  D3():
    deopt 8 [r7];
  L83():
    st eframe = r7;
    eval = ldf eval;
    check L84() else D4();
  D4():
    deopt 11 [];
  L84():
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c1 = `is.object`(m1);
      if c1 then L1() else L2(m1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", m1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(m3):
      r8 = `$`(m3, <sym data>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      eframe = ld eframe;
      eframe1 = force? eframe;
      checkMissing(eframe1);
      return eframe1;
    };
    r11 = dyn eval(p3, p4);
    check L85() else D5();
  D5():
    deopt 14 [r11];
  L85():
    st md = r11;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L86() else L87();
  L6(r13):
    c2 = `as.logical`(r13);
    if c2 then L90() else L7();
  L86():
    md = ld md;
    check L88() else D6();
  L87():
    r12 = dyn base(<sym md>);
    goto L6(r12);
  D6():
    deopt 18 [md];
  L7():
    goto L8();
  L8():
    lapply = ldf lapply;
    check L98() else D10();
  L88():
    md1 = force? md;
    checkMissing(md1);
    is_matrix = ldf `is.matrix` in base;
    r14 = dyn is_matrix(md1);
    check L89() else D7();
  L90():
    as_data_frame = ldf `as.data.frame`;
    check L91() else D8();
  D7():
    deopt 21 [r14];
  D8():
    deopt 23 [];
  D10():
    deopt 33 [];
  L89():
    goto L6(r14);
  L91():
    p5 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r16 = dyn as_data_frame(p5);
    check L92() else D9();
  L98():
    p6 = prom<V +>{
      __1 = ldf `$` in base;
      r23 = dyn __1(<sym m>, <sym ...>);
      return r23;
    };
    p7 = prom<V +>{
      eval1 = ld eval;
      eval2 = force? eval1;
      checkMissing(eval2);
      return eval2;
    };
    p8 = prom<V +>{
      md2 = ld md;
      md3 = force? md2;
      checkMissing(md3);
      return md3;
    };
    p9 = prom<V +>{
      eframe2 = ld eframe;
      eframe3 = force? eframe2;
      checkMissing(eframe3);
      return eframe3;
    };
    r28 = dyn lapply(p6, p7, p8, p9);
    check L99() else D11();
  D9():
    deopt 25 [r16];
  D11():
    deopt 38 [r28];
  L92():
    st md = r16;
    l = ld m;
    c3 = `is.object`(l);
    if c3 then L94() else L95(r16, l);
  L99():
    st dots = r28;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L100() else L101();
  L9(r30):
    st nmdots = r30;
    nmdots = ld nmdots;
    check L104() else D14();
  L93(r20, dx5):
    st m = dx5;
    goto L8();
  L94():
    dr4 = tryDispatchBuiltin.0("$<-", l, r16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L96() else L95(r16, dr4);
  L95(r18, l2):
    r21 = `$<-`(l2, <sym data>, r16);
    goto L93(r18, r21);
  L100():
    dots = ld dots;
    check L102() else D12();
  L101():
    r29 = dyn base1(<sym dots>);
    goto L9(r29);
  D12():
    deopt 42 [dots];
  D14():
    deopt 47 [nmdots];
  L96():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L93(r16, dx4);
  L102():
    dots1 = force? dots;
    checkMissing(dots1);
    names = ldf names in base;
    r31 = dyn names(dots1);
    check L103() else D13();
  L104():
    nmdots1 = force? nmdots;
    checkMissing(nmdots1);
    c4 = `is.object`(nmdots1);
    if c4 then L105() else L106(nmdots1);
  D13():
    deopt 45 [r31];
  L10(dx7):
    s = toForSeq(dx7);
    l3 = length(s);
    i = 0;
    goto L13(i);
  L103():
    goto L9(r31);
  L105():
    dr6 = tryDispatchBuiltin.1("[", nmdots1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(dr6);
  L106(nmdots3):
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L108() else L109();
  L11(nmdots6, r33):
    __2 = ldf `[` in base;
    r38 = dyn __2(nmdots6, r33);
    goto L10(r38);
  L13(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l3, i2);
    if c6 then L115() else L15();
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L108():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L110() else L111();
  L109():
    r32 = dyn base2(<lang c("main", "sub", "xlab")>, <sym nmdots>, 0);
    goto L11(nmdots3, r32);
  L12(nmdots9, r35):
    nmdots10 = ld nmdots;
    check L113() else D16();
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st nm = x;
    enquote = ldf enquote;
    check L116() else D18();
  L110():
    c5 = ldf c in base;
    r36 = dyn c5("main", "sub", "xlab");
    check L112() else D15();
  L111():
    r34 = dyn base3("main", "sub", "xlab");
    goto L12(nmdots3, r34);
  L115():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L122() else L123();
  D15():
    deopt 57 [nmdots3, r36];
  D16():
    deopt 58 [nmdots9, nmdots10];
  D18():
    deopt 66 [i2];
  L16(r48):
    r50 = `!`(r48);
    c9 = `as.logical`(r50);
    if c9 then L124() else L17();
  L112():
    goto L12(nmdots3, r36);
  L113():
    nmdots11 = force? nmdots10;
    checkMissing(nmdots11);
    match = ldf match in base;
    r37 = dyn match(r35, nmdots11, 0, NULL);
    check L114() else D17();
  L116():
    p10 = prom<V +>{
      dots2 = ld dots;
      dots3 = force? dots2;
      checkMissing(dots3);
      c7 = `is.object`(dots3);
      if c7 then L1() else L2(dots3);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", dots3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(dots5):
      nm = ld nm;
      nm1 = force? nm;
      __3 = ldf `[[` in base;
      r39 = dyn __3(dots5, nm1);
      goto L0(r39);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r41 = dyn enquote(p10);
    check L117() else D19();
  L122():
    missing = ldf missing in base;
    r49 = dyn missing(<sym ylab>);
    goto L16(r49);
  L123():
    r47 = dyn base4(<sym ylab>);
    goto L16(r47);
  D17():
    deopt 63 [nmdots9, r37];
  D19():
    deopt 68 [i2, r41];
  L17():
    goto L18();
  L18():
    l7 = ld m;
    c10 = `is.object`(l7);
    if c10 then L129() else L130(NULL, l7);
  L114():
    goto L11(nmdots9, r37);
  L117():
    l4 = ld dots;
    c8 = `is.object`(l4);
    if c8 then L118() else L119(i2, r41, l4);
  L124():
    enquote1 = ldf enquote;
    check L125() else D21();
  D21():
    deopt 82 [];
  L14(i8, dx11):
    st dots = dx11;
    goto L13(i8);
  L118():
    dr10 = tryDispatchBuiltin.0("[[<-", l4, r41);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L120() else L119(i2, r41, dr10);
  L119(i6, r43, l6):
    nm2 = ld nm;
    check L121() else D20();
  L125():
    p11 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    r52 = dyn enquote1(p11);
    check L126() else D22();
  L128(r57, dx13):
    st m = dx13;
    l10 = ld m;
    ___ = ldf `$<-`;
    check L132() else D23();
  L129():
    dr12 = tryDispatchBuiltin.0("$<-", l7, NULL);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L131() else L130(NULL, dr12);
  L130(r55, l9):
    r58 = `$<-`(l9, <sym ask>, NULL);
    goto L128(r55, r58);
  D20():
    deopt 70 [i6, r43, l6, r41, nm2];
  D22():
    deopt 84 [r52];
  D23():
    deopt 94 [r57, l10, r57];
  L120():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(i2, dx10);
  L121():
    nm3 = force? nm2;
    ____ = ldf `[[<-` in base;
    r46 = dyn ____(l6, r41, nm3);
    goto L14(i6, r46);
  L126():
    st ylab = r52;
    goto L18();
  L131():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L128(NULL, dx12);
  L132():
    ddd1 = ld `...`;
    r59 = dyn ___[, , `...`, ](l10, NULL, ddd1, r57);
    check L133() else D24();
  D24():
    deopt 97 [r57, r59];
  L133():
    st m = r59;
    l11 = ld m;
    c11 = `is.object`(l11);
    if c11 then L135() else L136(r57, l11);
  L134(dx15):
    st m = dx15;
    m4 = ld m;
    check L138() else D25();
  L135():
    dr14 = tryDispatchBuiltin.0("$<-", l11, r57);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L137() else L136(r57, dr14);
  L136(r61, l13):
    r64 = `$<-`(l13, <sym ylab>, r57);
    goto L134(r64);
  D25():
    deopt 102 [m4];
  L137():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L134(dx14);
  L138():
    m5 = force? m4;
    checkMissing(m5);
    c12 = `is.object`(m5);
    if c12 then L140() else L141(m5);
  L139(dx17):
    st `subset.expr` = dx17;
    l14 = ld m;
    c13 = `is.object`(l14);
    if c13 then L144() else L145(NULL, l14);
  L140():
    dr16 = tryDispatchBuiltin.1("$", m5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L142() else L141(dr16);
  L141(m7):
    r65 = `$`(m7, <sym subset>);
    goto L139(r65);
  L142():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L139(dx16);
  L143(dx19):
    st m = dx19;
    as_list = ldf `as.list`;
    check L147() else D26();
  L144():
    dr18 = tryDispatchBuiltin.0("$<-", l14, NULL);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L146() else L145(NULL, dr18);
  L145(r67, l16):
    r70 = `$<-`(l16, <sym subset>, NULL);
    goto L143(r70);
  D26():
    deopt 112 [];
  L146():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L143(dx18);
  L147():
    p12 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    r72 = dyn as_list(p12);
    check L148() else D27();
  D27():
    deopt 114 [r72];
  L148():
    st m = r72;
    __4 = ldf `::`;
    check L149() else D28();
  D28():
    deopt 117 [];
  L149():
    r73 = dyn __4("stats", "model.frame.default");
    check L150() else D29();
  D29():
    deopt 120 [r73];
  L150():
    l17 = ld m;
    c14 = `is.object`(l17);
    if c14 then L151() else L152(r73, l17);
  L19(dx21):
    st m = dx21;
    sym5 = ldf `as.call`;
    base5 = ldf `as.call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L154() else L155();
  L151():
    dr20 = tryDispatchBuiltin.0("[[<-", l17, r73);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L153() else L152(r73, dr20);
  L152(r75, l19):
    ____1 = ldf `[[<-` in base;
    r78 = dyn ____1(l19, r73, 1);
    goto L19(r78);
  L20(r80):
    st m = r80;
    eval3 = ldf eval;
    check L164() else D34();
  L153():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L19(dx20);
  L154():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L156() else L157();
  L155():
    r79 = dyn base5(<lang c(m, list(na.action=NULL))>);
    goto L20(r79);
  D34():
    deopt 144 [];
  L21(r82):
    as_call = ldf `as.call` in base;
    r87 = dyn as_call(r82);
    check L163() else D33();
  L156():
    m10 = ld m;
    check L158() else D30();
  L157():
    r81 = dyn base6(<sym m>, <lang list(na.action=NULL)>);
    goto L21(r81);
  L164():
    p13 = prom<V +>{
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      return m13;
    };
    p14 = prom<V +>{
      eframe4 = ld eframe;
      eframe5 = force? eframe4;
      checkMissing(eframe5);
      return eframe5;
    };
    r90 = dyn eval3(p13, p14);
    check L165() else D35();
  D30():
    deopt 130 [m10];
  D33():
    deopt 141 [r87];
  D35():
    deopt 147 [r90];
  L158():
    m11 = force? m10;
    checkMissing(m11);
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L163():
    goto L20(r87);
  L165():
    st mf = r90;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L166() else L167();
  L22(r84):
    c15 = ldf c in base;
    r86 = dyn c15(m11, r84);
    check L162() else D32();
  L23(r92):
    r94 = `!`(r92);
    c16 = `as.logical`(r94);
    if c16 then L168() else L24();
  L159():
    list = ldf list in base;
    r85 = dyn list(NULL);
    check L161() else D31();
  L160():
    r83 = dyn base7[`na.action`](NULL);
    goto L22(r83);
  L166():
    missing1 = ldf missing in base;
    r93 = dyn missing1(<sym subset>);
    goto L23(r93);
  L167():
    r91 = dyn base8(<sym subset>);
    goto L23(r91);
  D31():
    deopt 137 [r85];
  D32():
    deopt 139 [r86];
  L24():
    goto L26();
  L26():
    st horizontal = FALSE;
    _in_ = ldf `%in%`;
    check L181() else D44();
  L161():
    goto L22(r85);
  L162():
    goto L21(r86);
  L168():
    eval4 = ldf eval;
    check L169() else D36();
  D36():
    deopt 154 [];
  D44():
    deopt 190 [];
  L169():
    p15 = prom<V +>{
      subset_expr = ld `subset.expr`;
      subset_expr1 = force? subset_expr;
      checkMissing(subset_expr1);
      return subset_expr1;
    };
    p16 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p17 = prom<V +>{
      eframe6 = ld eframe;
      eframe7 = force? eframe6;
      checkMissing(eframe7);
      return eframe7;
    };
    r98 = dyn eval4(p15, p16, p17);
    check L170() else D37();
  L181():
    p21 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      dots8 = ld dots;
      dots9 = force? dots8;
      checkMissing(dots9);
      names1 = ldf names in base;
      r108 = dyn names1(dots9);
      goto L0(r108);
    L2():
      r106 = dyn base9(<sym dots>);
      goto L0(r106);
    };
    r110 = dyn _in_("horizontal", p21);
    check L182() else D45();
  D37():
    deopt 158 [r98];
  D45():
    deopt 193 [r110];
  L170():
    st s = r98;
    nrow = ldf nrow;
    check L171() else D38();
  L182():
    c18 = `as.logical`(r110);
    if c18 then L183() else L27();
  D38():
    deopt 161 [];
  L27():
    goto L29();
  L29():
    sym10 = ldf attr;
    base10 = ldf attr in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L189() else L190();
  L171():
    p18 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r100 = dyn nrow(p18);
    check L172() else D39();
  L183():
    dots10 = ld dots;
    check L184() else D46();
  D39():
    deopt 163 [r100];
  D46():
    deopt 194 [dots10];
  L30(r113):
    st response = r113;
    response2 = ld response;
    check L196() else D50();
  L172():
    st l = r100;
    r101 = clos inner2501545716;
    st dosub = r101;
    lapply1 = ldf lapply;
    check L173() else D40();
  L184():
    dots11 = force? dots10;
    checkMissing(dots11);
    c19 = `is.object`(dots11);
    if c19 then L185() else L186(dots11);
  L189():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L191() else L192();
  L190():
    r112 = dyn base10(<lang attr(mf, "terms")>, "response");
    goto L30(r112);
  D40():
    deopt 169 [];
  D50():
    deopt 215 [response2];
  L28(dx26):
    st horizontal = dx26;
    goto L29();
  L31(r115):
    attr1 = ldf attr in base;
    r117 = dyn attr1(r115, "response");
    check L195() else D49();
  L173():
    p19 = prom<V +>{
      dots6 = ld dots;
      dots7 = force? dots6;
      checkMissing(dots7);
      return dots7;
    };
    p20 = prom<V +>{
      dosub = ld dosub;
      dosub1 = force? dosub;
      checkMissing(dosub1);
      return dosub1;
    };
    r104 = dyn lapply1(p19, p20);
    check L174() else D41();
  L185():
    dr24 = tryDispatchBuiltin.1("[[", dots11);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L187() else L186(dr24);
  L186(dots13):
    __6 = ldf `[[` in base;
    r111 = dyn __6(dots13, "horizontal");
    goto L28(r111);
  L191():
    mf6 = ld mf;
    check L193() else D47();
  L192():
    r114 = dyn base11(<sym mf>, "terms");
    goto L31(r114);
  L196():
    response3 = force? response2;
    checkMissing(response3);
    c20 = `as.logical`(response3);
    if c20 then L197() else L32();
  D41():
    deopt 172 [r104];
  D47():
    deopt 206 [mf6];
  D49():
    deopt 213 [r117];
  L32():
    do_call2 = ldf `do.call`;
    check L318() else D99();
  L78():
    sym31 = ldf invisible;
    base31 = ldf invisible in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L320() else L321();
  L174():
    st dots = r104;
    mf2 = ld mf;
    check L175() else D42();
  L187():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L28(dx25);
  L193():
    mf7 = force? mf6;
    checkMissing(mf7);
    attr = ldf attr in base;
    r116 = dyn attr(mf7, "terms");
    check L194() else D48();
  L195():
    goto L30(r117);
  L197():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L198() else L199();
  D42():
    deopt 174 [mf2];
  D48():
    deopt 210 [r116];
  D99():
    deopt 432 [];
  L33(r119):
    st varnames = r119;
    mf10 = ld mf;
    check L202() else D53();
  L79(r225):
    popenv;
    return r225;
  L175():
    mf3 = force? mf2;
    checkMissing(mf3);
    c17 = `is.object`(mf3);
    if c17 then L176() else L177(mf3);
  L194():
    goto L31(r116);
  L198():
    mf8 = ld mf;
    check L200() else D51();
  L199():
    r118 = dyn base12(<sym mf>);
    goto L33(r118);
  L318():
    p37 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L2() else L3();
    L0(r217):
      return r217;
    L2():
      sym30 = ldf list;
      base30 = ldf list in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L4() else L5();
    L3():
      r216 = dyn base29(<lang list(mf)>, <sym dots>);
      goto L0(r216);
    L1(r219):
      dots34 = ld dots;
      dots35 = force? dots34;
      checkMissing(dots35);
      c77 = ldf c in base;
      r221 = dyn c77(r219, dots35);
      goto L0(r221);
    L4():
      mf22 = ld mf;
      mf23 = force? mf22;
      checkMissing(mf23);
      list3 = ldf list in base;
      r220 = dyn list3(mf23);
      goto L1(r220);
    L5():
      r218 = dyn base30(<sym mf>);
      goto L1(r218);
    };
    r223 = dyn do_call2("plot.data.frame", p37);
    check L319() else D100();
  L320():
    invisible = ldf invisible in base;
    r226 = dyn invisible();
    check L322() else D101();
  L321():
    r224 = dyn base31();
    goto L79(r224);
  D51():
    deopt 219 [mf8];
  D53():
    deopt 224 [mf10];
  D100():
    deopt 435 [r223];
  D101():
    deopt 439 [r226];
  L25(dx23):
    st mf = dx23;
    goto L26();
  L176():
    dr22 = tryDispatchBuiltin.1("[", mf3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L178() else L177(dr22);
  L177(mf5):
    s1 = ld s;
    check L179() else D43();
  L200():
    mf9 = force? mf8;
    checkMissing(mf9);
    names2 = ldf names in base;
    r120 = dyn names2(mf9);
    check L201() else D52();
  L202():
    mf11 = force? mf10;
    checkMissing(mf11);
    c21 = `is.object`(mf11);
    if c21 then L203() else L204(mf11);
  L319():
    goto L78();
  L322():
    goto L79(r226);
  D43():
    deopt 176 [mf5, s1];
  D52():
    deopt 222 [r120];
  L34(dx29):
    st y = dx29;
    st funname = NULL;
    varnames4 = ld varnames;
    check L207() else D55();
  L178():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L25(dx22);
  L179():
    s2 = force? s1;
    __5 = ldf `[` in base;
    r105 = dyn __5(mf3, s2, <missing>, FALSE);
    goto L25(r105);
  L201():
    goto L33(r120);
  L203():
    dr26 = tryDispatchBuiltin.1("[[", mf11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L205() else L204(dr26);
  L204(mf13):
    response4 = ld response;
    check L206() else D54();
  D54():
    deopt 226 [mf13, response4];
  D55():
    deopt 233 [varnames4];
  L205():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L34(dx28);
  L206():
    response5 = force? response4;
    __7 = ldf `[[` in base;
    r121 = dyn __7(mf13, response5);
    goto L34(r121);
  L207():
    varnames5 = force? varnames4;
    checkMissing(varnames5);
    c22 = `is.object`(varnames5);
    if c22 then L208() else L209(varnames5);
  L35(dx31):
    st xn = dx31;
    sym13 = ldf `is.object`;
    base13 = ldf `is.object` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L212() else L213();
  L208():
    dr28 = tryDispatchBuiltin.1("[", varnames5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L210() else L209(dr28);
  L209(varnames7):
    response6 = ld response;
    check L211() else D56();
  D56():
    deopt 235 [varnames7, response6];
  L36(r125):
    c24 = `as.logical`(r125);
    if c24 then L215() else L37();
  L210():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L35(dx30);
  L211():
    response7 = force? response6;
    checkMissing(response7);
    r122 = `-`(<missing>, response7);
    __8 = ldf `[` in base;
    r123 = dyn __8(varnames7, r122);
    goto L35(r123);
  L212():
    y = ld y;
    check L214() else D57();
  L213():
    r124 = dyn base13(<sym y>);
    goto L36(r124);
  D57():
    deopt 241 [y];
  L37():
    goto L46();
  L46():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L232() else L233();
  L214():
    y1 = force? y;
    checkMissing(y1);
    c23 = `is.object`(y1);
    goto L36(c23);
  L215():
    st found = FALSE;
    sym14 = ldf class;
    base14 = ldf class in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L216() else L217();
  L38(r127):
    s3 = toForSeq(r127);
    l20 = length(s3);
    i9 = 0;
    goto L39(i9);
  L47(r138):
    c29 = `as.logical`(r138);
    if c29 then L235() else L48();
  L216():
    y2 = ld y;
    check L218() else D58();
  L217():
    r126 = dyn base14(<sym y>);
    goto L38(r126);
  L232():
    funname2 = ld funname;
    check L234() else D65();
  L233():
    r137 = dyn base15(<sym funname>);
    goto L47(r137);
  D58():
    deopt 249 [y2];
  D65():
    deopt 284 [funname2];
  L39(i10):
    i11 = `+`.1(i10, 1);
    c25 = `<`.1(l20, i11);
    if c25 then L220() else L43();
  L48():
    goto L49();
  L49():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L237() else L238();
  L218():
    y3 = force? y2;
    checkMissing(y3);
    class = ldf class in base;
    r128 = dyn class(y3);
    check L219() else D59();
  L234():
    funname3 = force? funname2;
    checkMissing(funname3);
    c28 = `==`(funname3, NULL);
    goto L47(c28);
  L235():
    st funname = "plot";
    goto L49();
  D59():
    deopt 252 [r128];
  L41():
    found = ld found;
    check L228() else D64();
  L43():
    x1 = `[[`(s3, i11, NULL, TRUE);
    st j = x1;
    paste0 = ldf paste0;
    check L221() else D60();
  L50(r141):
    r143 = `>`(r141, 2);
    c30 = `as.logical`(r143);
    if c30 then L241() else L51();
  L219():
    goto L38(r128);
  L220():
    goto L41();
  L237():
    varnames8 = ld varnames;
    check L239() else D66();
  L238():
    r140 = dyn base16(<sym varnames>);
    goto L50(r140);
  D60():
    deopt 254 [i11];
  D64():
    deopt 273 [found];
  D66():
    deopt 294 [varnames8];
  L51():
    goto L53();
  L53():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L247() else L248();
  L221():
    p22 = prom<V +>{
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      return j1;
    };
    r130 = dyn paste0("plot.", p22);
    check L222() else D61();
  L228():
    found1 = force? found;
    checkMissing(found1);
    r134 = `!`(found1);
    c27 = `as.logical`(r134);
    if c27 then L229() else L44();
  L239():
    varnames9 = force? varnames8;
    checkMissing(varnames9);
    length = ldf length in base;
    r142 = dyn length(varnames9);
    check L240() else D67();
  L241():
    devAskNewPage = ldf devAskNewPage;
    check L242() else D68();
  D61():
    deopt 257 [i11, r130];
  D67():
    deopt 297 [r142];
  D68():
    deopt 301 [];
  L44():
    goto L45(NULL);
  L45(r135):
    goto L46();
  L54(r151):
    c31 = `as.logical`(r151);
    if c31 then L251() else L55();
  L222():
    st funname = r130;
    exists = ldf exists;
    check L223() else D62();
  L229():
    st funname = NULL;
    goto L45(NULL);
  L240():
    goto L50(r142);
  L242():
    p24 = prom<V +>{
      ask1 = ld ask;
      ask2 = force? ask1;
      checkMissing(ask2);
      return ask2;
    };
    r145 = dyn devAskNewPage(p24);
    check L243() else D69();
  L247():
    xn = ld xn;
    check L249() else D70();
  L248():
    r150 = dyn base18(<sym xn>);
    goto L54(r150);
  D62():
    deopt 260 [i11];
  D69():
    deopt 303 [r145];
  D70():
    deopt 312 [xn];
  L55():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L288() else L289();
  L68(i36):
    goto L78();
  L223():
    p23 = prom<V +>{
      funname = ld funname;
      funname1 = force? funname;
      checkMissing(funname1);
      return funname1;
    };
    r132 = dyn exists(p23);
    check L224() else D63();
  L243():
    st oask = r145;
    sym17 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L244() else L245();
  L249():
    xn1 = force? xn;
    checkMissing(xn1);
    length1 = ldf length in base;
    r152 = dyn length1(xn1);
    check L250() else D71();
  L251():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L252() else L253();
  D63():
    deopt 262 [i11, r132];
  D71():
    deopt 315 [r152];
  L52(r147):
    goto L53();
  L56(r154):
    r156 = `!`(r154);
    c34 = `as.logical`(r156);
    if c34 then L258() else L58();
  L69(r182):
    r184 = `==`(r182, 1);
    c47 = `as.logical`(r184);
    if c47 then L292() else L70(c47);
  L224():
    c26 = `as.logical`(r132);
    if c26 then L225() else L40();
  L244():
    on_exit = ldf `on.exit` in base;
    r148 = dyn on_exit(<lang devAskNewPage(oask)>);
    goto L52(r148);
  L245():
    r146 = dyn base17(<lang devAskNewPage(oask)>);
    goto L52(r146);
  L250():
    goto L54(r152);
  L252():
    dots14 = ld dots;
    check L254() else D72();
  L253():
    r153 = dyn base19(<lang `<-`(xlab, `[[`(dots, "xlab"))>);
    goto L56(r153);
  L288():
    varnames10 = ld varnames;
    check L290() else D88();
  L289():
    r181 = dyn base24(<sym varnames>);
    goto L69(r181);
  D72():
    deopt 317 [dots14];
  D88():
    deopt 381 [varnames10];
  L40():
    goto L39(i11);
  L58():
    goto L62();
  L62():
    xn2 = ld xn;
    check L271() else D77();
  L70(c49):
    c56 = `as.logical`(c49);
    if c56 then L298() else L72(c56);
  L225():
    st found = TRUE;
    goto L41();
  L254():
    dots15 = force? dots14;
    checkMissing(dots15);
    c32 = `is.object`(dots15);
    if c32 then L255() else L256(dots15);
  L258():
    dots18 = ld dots;
    check L259() else D73();
  L290():
    varnames11 = force? varnames10;
    checkMissing(varnames11);
    length2 = ldf length in base;
    r183 = dyn length2(varnames11);
    check L291() else D89();
  L292():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L293() else L294();
  D73():
    deopt 325 [dots18];
  D77():
    deopt 345 [xn2];
  D89():
    deopt 384 [r183];
  L57(dx33):
    st xlab = dx33;
    c33 = `==`(dx33, NULL);
    goto L56(c33);
  L71(c52, r186):
    r188 = `==`(r186, 3);
    c53 = `as.logical`(r188);
    c54 = `&&`(c52, c53);
    goto L70(c54);
  L72(c58):
    c75 = `as.logical`(c58);
    if c75 then L311() else L76();
  L255():
    dr30 = tryDispatchBuiltin.1("[[", dots15);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L257() else L256(dr30);
  L256(dots17):
    __9 = ldf `[[` in base;
    r155 = dyn __9(dots17, "xlab");
    goto L57(r155);
  L259():
    dots19 = force? dots18;
    checkMissing(dots19);
    c35 = `is.object`(dots19);
    if c35 then L260() else L261(dots19);
  L271():
    xn3 = force? xn2;
    checkMissing(xn3);
    s4 = toForSeq(xn3);
    l21 = length(s4);
    i19 = 0;
    goto L63(i19);
  L291():
    goto L69(r183);
  L293():
    formula1 = ld formula;
    check L295() else D90();
  L294():
    r185 = dyn base25(<sym formula>);
    goto L71(c47, r185);
  L298():
    sym26 = ldf identical;
    base26 = ldf identical in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L299() else L300();
  D90():
    deopt 389 [c47, formula1];
  L59(dx35):
    st dots = dx35;
    goto L62();
  L63(i20):
    i21 = `+`.1(i20, 1);
    c36 = `<`.1(l21, i21);
    if c36 then L272() else L67();
  L73(c61, r190):
    c72 = `as.logical`(r190);
    c73 = `&&`(c61, c72);
    goto L72(c73);
  L76():
    goto L77();
  L77():
    do_call1 = ldf `do.call`;
    check L315() else D97();
  L257():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L57(dx32);
  L260():
    dr32 = tryDispatchBuiltin.1("[", dots19);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L262() else L261(dr32);
  L261(dots21):
    sym20 = ldf match;
    base20 = ldf match in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L263() else L264();
  L295():
    formula2 = force? formula1;
    checkMissing(formula2);
    length3 = ldf length in base;
    r187 = dyn length3(formula2);
    check L296() else D91();
  L299():
    formula3 = ld formula;
    check L301() else D92();
  L300():
    r189 = dyn base26(<lang `[[`(formula, 2)>, <lang `[[`(formula, 3)>);
    goto L73(c56, r189);
  L311():
    warning = ldf warning;
    check L312() else D95();
  D91():
    deopt 392 [c47, r187];
  D92():
    deopt 398 [c56, formula3];
  D95():
    deopt 419 [];
  D97():
    deopt 427 [];
  L60(dots24, r158):
    r163 = `-`(<missing>, r158);
    __10 = ldf `[` in base;
    r164 = dyn __10(dots24, r163);
    goto L59(r164);
  L67():
    x2 = `[[`(s4, i21, NULL, TRUE);
    st i = x2;
    ____2 = ldf `%||%`;
    check L273() else D78();
  L262():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L59(dx34);
  L263():
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L265() else L266();
  L264():
    r157 = dyn base20("xlab", <lang names(dots)>);
    goto L60(dots21, r157);
  L272():
    goto L68(i21);
  L296():
    goto L71(c47, r187);
  L301():
    formula4 = force? formula3;
    checkMissing(formula4);
    c62 = `is.object`(formula4);
    if c62 then L302() else L303(c56, formula4);
  L312():
    p34 = prom<V +>{
      gettextf = ldf gettextf;
      p31 = prom<V +>{
        format = ldf format;
        p30 = prom<V +>{
          formula11 = ld formula;
          formula12 = force? formula11;
          checkMissing(formula12);
          return formula12;
        };
        r195 = dyn format(p30);
        return r195;
      };
      p33 = prom<V +>{
        format1 = ldf format;
        p32 = prom<V +>{
          r197 = clos inner2708337952;
          checkFun.0(r197);
          r198 = r197 as cls;
          r199 = dyn r198();
          return r199;
        };
        r201 = dyn format1(p32);
        return r201;
      };
      r203 = dyn gettextf("the formula '%s' is treated as '%s'", p31, p33);
      return r203;
    };
    r205 = dyn warning[, domain](p34, NA_LGL);
    check L313() else D96();
  L315():
    p35 = prom<V +>{
      funname6 = ld funname;
      funname7 = force? funname6;
      checkMissing(funname7);
      return funname7;
    };
    p36 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L2() else L3();
    L0(r209):
      return r209;
    L2():
      sym28 = ldf list;
      base28 = ldf list in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L4() else L5();
    L3():
      r208 = dyn base27(<lang list(y, ylab=ylab)>, <sym dots>);
      goto L0(r208);
    L1(r211):
      dots32 = ld dots;
      dots33 = force? dots32;
      checkMissing(dots33);
      c76 = ldf c in base;
      r213 = dyn c76(r211, dots33);
      goto L0(r213);
    L4():
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      ylab8 = ld ylab;
      ylab9 = force? ylab8;
      checkMissing(ylab9);
      list2 = ldf list in base;
      r212 = dyn list2(y7, ylab9);
      goto L1(r212);
    L5():
      r210 = dyn base28[, ylab](<sym y>, <sym ylab>);
      goto L1(r210);
    };
    r215 = dyn do_call1(p35, p36);
    check L316() else D98();
  D78():
    deopt 348 [i21];
  D96():
    deopt 423 [r205];
  D98():
    deopt 430 [r215];
  L61(dots27, r160):
    match1 = ldf match in base;
    r162 = dyn match1("xlab", r160, NA_INT, NULL);
    check L269() else D76();
  L74(c66, dx42):
    formula7 = ld formula;
    check L305() else D93();
  L265():
    dots28 = ld dots;
    check L267() else D74();
  L266():
    r159 = dyn base21(<sym dots>);
    goto L61(dots21, r159);
  L273():
    p25 = prom<V +>{
      xlab = ld xlab;
      xlab1 = force? xlab;
      checkMissing(xlab1);
      return xlab1;
    };
    p26 = prom<V +>{
      i24 = ld i;
      i25 = force? i24;
      checkMissing(i25);
      return i25;
    };
    r167 = dyn ____2(p25, p26);
    check L274() else D79();
  L302():
    dr38 = tryDispatchBuiltin.1("[[", formula4);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L304() else L303(c56, dr38);
  L303(c64, formula6):
    __13 = ldf `[[` in base;
    r191 = dyn __13(formula6, 2);
    goto L74(c64, r191);
  L313():
    goto L77();
  L316():
    goto L68(r215);
  D74():
    deopt 332 [dots21, dots28];
  D76():
    deopt 339 [dots27, r162];
  D79():
    deopt 351 [i21, r167];
  D93():
    deopt 403 [c66, formula7];
  L267():
    dots29 = force? dots28;
    checkMissing(dots29);
    names3 = ldf names in base;
    r161 = dyn names3(dots29);
    check L268() else D75();
  L269():
    goto L60(dots27, r162);
  L274():
    st xl = r167;
    ylab3 = ld ylab;
    check L275() else D80();
  L304():
    dx41 = getTryDispatchBuiltinValue(dr38);
    goto L74(c56, dx41);
  L305():
    formula8 = force? formula7;
    checkMissing(formula8);
    c67 = `is.object`(formula8);
    if c67 then L306() else L307(c66, formula8);
  D75():
    deopt 335 [dots21, r161];
  D80():
    deopt 353 [i21, ylab3];
  L75(c71, dx44):
    identical = ldf identical in base;
    r193 = dyn identical(dx42, dx44, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L309() else D94();
  L268():
    goto L61(dots21, r161);
  L275():
    ylab4 = force? ylab3;
    checkMissing(ylab4);
    st yl = ylab4;
    horizontal = ld horizontal;
    check L276() else D81();
  L306():
    dr40 = tryDispatchBuiltin.1("[[", formula8);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L308() else L307(c66, dr40);
  L307(c69, formula10):
    __14 = ldf `[[` in base;
    r192 = dyn __14(formula10, 3);
    goto L75(c69, r192);
  D81():
    deopt 356 [i21, horizontal];
  D94():
    deopt 416 [c71, r193];
  L276():
    horizontal1 = force? horizontal;
    checkMissing(horizontal1);
    c37 = `as.logical`(horizontal1);
    if c37 then L277() else L64(i21, c37);
  L308():
    dx43 = getTryDispatchBuiltinValue(dr40);
    goto L75(c66, dx43);
  L309():
    goto L73(c71, r193);
  L64(i27, c39):
    c44 = `as.logical`(c39);
    if c44 then L281() else L65();
  L277():
    is_factor = ldf `is.factor`;
    check L278() else D82();
  D82():
    deopt 359 [i21, c37];
  L65():
    goto L66(i27);
  L66(i33):
    do_call = ldf `do.call`;
    check L285() else D86();
  L278():
    p27 = prom<V +>{
      mf14 = ld mf;
      mf15 = force? mf14;
      checkMissing(mf15);
      c40 = `is.object`(mf15);
      if c40 then L1() else L2(mf15);
    L0(dx38):
      return dx38;
    L1():
      dr34 = tryDispatchBuiltin.1("[[", mf15);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(mf17):
      i28 = ld i;
      i29 = force? i28;
      __11 = ldf `[[` in base;
      r168 = dyn __11(mf17, i29);
      goto L0(r168);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx37);
    };
    r170 = dyn is_factor(p27);
    check L279() else D83();
  L281():
    xl = ld xl;
    check L282() else D84();
  D83():
    deopt 361 [i21, c37, r170];
  D84():
    deopt 363 [i27, xl];
  D86():
    deopt 372 [i33];
  L279():
    c41 = `as.logical`(r170);
    c42 = `&&`(c37, c41);
    goto L64(i21, c42);
  L282():
    xl1 = force? xl;
    checkMissing(xl1);
    st yl = xl1;
    ylab5 = ld ylab;
    check L283() else D85();
  L285():
    p28 = prom<V +>{
      funname4 = ld funname;
      funname5 = force? funname4;
      checkMissing(funname5);
      return funname5;
    };
    p29 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L3() else L4();
    L0(r173):
      return r173;
    L3():
      sym23 = ldf list;
      base23 = ldf list in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L5() else L6();
    L4():
      r172 = dyn base22(<lang list(`[[`(mf, i), y, ylab=yl, xlab=xl)>, <sym dots>);
      goto L0(r172);
    L1(r175):
      dots30 = ld dots;
      dots31 = force? dots30;
      checkMissing(dots31);
      c46 = ldf c in base;
      r178 = dyn c46(r175, dots31);
      goto L0(r178);
    L5():
      mf18 = ld mf;
      mf19 = force? mf18;
      checkMissing(mf19);
      c45 = `is.object`(mf19);
      if c45 then L7() else L8(mf19);
    L6():
      r174 = dyn base23[, , ylab, xlab](<lang `[[`(mf, i)>, <sym y>, <sym yl>, <sym xl>);
      goto L1(r174);
    L2(dx40):
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      yl = ld yl;
      yl1 = force? yl;
      checkMissing(yl1);
      xl2 = ld xl;
      xl3 = force? xl2;
      checkMissing(xl3);
      list1 = ldf list in base;
      r177 = dyn list1(dx40, y5, yl1, xl3);
      goto L1(r177);
    L7():
      dr36 = tryDispatchBuiltin.1("[[", mf19);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L9() else L8(dr36);
    L8(mf21):
      i34 = ld i;
      i35 = force? i34;
      __12 = ldf `[[` in base;
      r176 = dyn __12(mf21, i35);
      goto L2(r176);
    L9():
      dx39 = getTryDispatchBuiltinValue(dr36);
      goto L2(dx39);
    };
    r180 = dyn do_call(p28, p29);
    check L286() else D87();
  D85():
    deopt 366 [i27, ylab5];
  D87():
    deopt 375 [i33, r180];
  L283():
    ylab6 = force? ylab5;
    checkMissing(ylab6);
    st xl = ylab6;
    goto L66(i27);
  L286():
    goto L63(i33);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg l:*, reg l1:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg s:*, reg s1:V, reg __:cls, reg r4:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    l = ld l;
    check L7() else D2();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 5 [r1, l];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    l1 = force? l;
    checkMissing(l1);
    r3 = `==`(r1, l1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    x7 = ld x;
    check L15() else D5();
  L6():
    goto L0(r2);
  L8():
    x3 = ld x;
    check L9() else D3();
  D3():
    deopt 8 [x3];
  D5():
    deopt 13 [x7];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L10() else L11(x4);
  L15():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L2(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    s = ld s;
    check L13() else D4();
  D4():
    deopt 10 [x6, s];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    s1 = force? s;
    __ = ldf `[` in base;
    r4 = dyn __(x6, s1);
    goto L2(r4);
  }
}
fun inner2708337952() {
  () -+> V { reg formula:*, reg formula1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg quote:cls, reg r2:V, reg l:*, reg c:L, reg r4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r7:V, reg f:*, reg f1:V |
    mkenv;
    formula = ld formula;
    check L2() else D0();
  D0():
    deopt 0 [formula];
  L2():
    formula1 = force? formula;
    checkMissing(formula1);
    st f = formula1;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    l = ld f;
    c = `is.object`(l);
    if c then L5() else L6(r1, l);
  L3():
    quote = ldf quote in base;
    r2 = dyn quote(1.0);
    goto L0(r2);
  L4():
    r = dyn base(1.0);
    goto L0(r);
  L1(dx1):
    st f = dx1;
    f = ld f;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.0("[[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(r1, dr);
  L6(r4, l2):
    ____ = ldf `[[<-` in base;
    r7 = dyn ____(l2, r1, 3);
    goto L1(r7);
  D1():
    deopt 11 [f];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    f1 = force? f;
    checkMissing(f1);
    popenv;
    return f1;
  }
}