fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg lag_plot:cls, reg nhtemp:*, reg nhtemp1:V, reg p1:p(V +), reg r6:V, reg lag_plot1:cls, reg nhtemp2:*, reg nhtemp3:V, reg p2:p(V +), reg r8:V, reg lag_plot2:cls, reg nhtemp4:*, reg nhtemp5:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg lag_plot3:cls, reg freeny_x:*, reg freeny_x1:V, reg p5:p(V +), reg r16:V, reg lag_plot4:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg sunspots:*, reg sunspots1:V, reg r19:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c1:cls, reg r23:V, reg p7:p(V +), reg r25:V |
    mkenv;
    r = clos inner2460269160;
    st `lag.plot` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    lag_plot = ldf `lag.plot`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      nhtemp = ld nhtemp;
      nhtemp1 = force? nhtemp;
      checkMissing(nhtemp1);
      return nhtemp1;
    };
    r6 = dyn lag_plot[, , `diag.col`](p1, 8.0, "forest green");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r6];
  L4():
    goto L0();
  L6():
    lag_plot1 = ldf `lag.plot`;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p2 = prom<V +>{
      nhtemp2 = ld nhtemp;
      nhtemp3 = force? nhtemp2;
      checkMissing(nhtemp3);
      return nhtemp3;
    };
    r8 = dyn lag_plot1[, , main](p2, 5.0, "Average Temperatures in New Haven");
    check L8() else D5();
  D5():
    deopt 21 [r8];
  L8():
    lag_plot2 = ldf `lag.plot`;
    check L9() else D6();
  D6():
    deopt 23 [];
  L9():
    p3 = prom<V +>{
      nhtemp4 = ld nhtemp;
      nhtemp5 = force? nhtemp4;
      checkMissing(nhtemp5);
      return nhtemp5;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c = ldf c in base;
      r12 = dyn c(2.0, 1.0);
      goto L0(r12);
    L2():
      r10 = dyn base1(2.0, 1.0);
      goto L0(r10);
    };
    r14 = dyn lag_plot2[, , layout, asp, main, `col.main`](p3, 6.0, p4, NA_LGL, "New Haven Temperatures", "blue");
    check L10() else D7();
  D7():
    deopt 34 [r14];
  L10():
    lag_plot3 = ldf `lag.plot`;
    check L11() else D8();
  D8():
    deopt 36 [];
  L11():
    p5 = prom<V +>{
      freeny_x = ld `freeny.x`;
      freeny_x1 = force? freeny_x;
      checkMissing(freeny_x1);
      return freeny_x1;
    };
    r16 = dyn lag_plot3[, lags](p5, 3.0);
    check L12() else D9();
  D9():
    deopt 40 [r16];
  L12():
    lag_plot4 = ldf `lag.plot`;
    check L13() else D10();
  D10():
    deopt 42 [];
  L13():
    p6 = prom<V +>{
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      sunspots = ld sunspots;
      sunspots1 = force? sunspots;
      checkMissing(sunspots1);
      r19 = sqrt(sunspots1);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym sunspots>);
      goto L0(r17);
    };
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c1 = ldf c in base;
      r23 = dyn c1(<int 1, 2, 3, 4>, <int 9, 10, 11, 12>);
      goto L0(r23);
    L2():
      r21 = dyn base3(<lang `:`(1.0, 4.0)>, <lang `:`(9.0, 12.0)>);
      goto L0(r21);
    };
    r25 = dyn lag_plot4[, `set.lags`, pch, col](p6, p7, ".", "gold");
    check L14() else D11();
  D11():
    deopt 50 [r25];
  L14():
    popenv;
    return r25;
  }
}
fun inner2460269160(x, lags, layout, `set.lags`, main, asp, diag, `diag.col`, type, oma, ask, `do.lines`, labels, `...`) {
  (reg x:*, reg lags:*, reg layout:*, reg set_lags:*, reg main:*, reg asp:*, reg diag:*, reg diag_col:*, reg type:*, reg oma:*, reg ask:*, reg do_lines:*, reg labels:*, reg ddd:dots) -+> V { var x:*, var lags:*, reg lags_isMissing:L, reg lags_orDefault:*, var layout:*, reg layout_isMissing:L, reg layout_orDefault:*, var `set.lags`:*, reg set_lags_isMissing:L, reg set_lags_orDefault:*, reg lags1:*, reg lags2:V, reg r:V, reg p:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, var `diag.col`:*, reg diag_col_isMissing:L, reg diag_col_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var oma:*, reg oma_isMissing:L, reg oma_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, var `do.lines`:*, reg do_lines_isMissing:L, reg do_lines_orDefault:*, reg n:*, reg n1:V, reg r2:V, reg p1:p(V +), var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg do_lines1:*, reg do_lines2:V, reg p2:p(V +), var `...`:dots?, reg r5:cls, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg ncol:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r14:V, reg c:V, reg r15:V, reg ncol1:cls, reg as_ts:cls, reg as_matrix:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg nrow:cls, reg x5:*, reg x6:V, reg p8:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg missing:cls, reg r26:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c6:L, reg r28:V, reg missing1:cls, reg r29:V, reg r30:V, reg c7:L, reg c8:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg set_lags1:*, reg set_lags2:V, reg as_integer:cls, reg r35:V, reg length:cls, reg r36:V, reg nser:*, reg nser1:V, reg lags3:*, reg lags4:V, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg ask1:*, reg ask2:V, reg c11:V, reg c12:L, reg _Device:*, reg _Device1:V, reg r41:V, reg c13:L, reg dev_new:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg layout1:*, reg layout2:V, reg c14:V, reg c15:L, reg par:cls, reg r46:V, reg r47:V, reg dev_interactive:cls, reg r48:V, reg c16:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg c20:L, reg r50:V, reg layout3:*, reg layout4:V, reg prod:cls, reg r51:V, reg tot_lags:*, reg tot_lags1:V, reg r52:V, reg c21:L, reg c22:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg layout5:*, reg layout6:V, reg c24:V, reg c25:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg par1:cls, reg r58:V, reg prod1:cls, reg r59:V, reg tot_lags2:*, reg tot_lags3:V, reg r60:V, reg c26:L, reg pmf:*, reg pmf1:V, reg pmf2:V, reg n2mfrow:cls, reg tot_lags4:*, reg tot_lags5:V, reg p9:p(V +), reg r62:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r63:V, reg r64:V, reg layout7:*, reg layout8:V, reg r65:V, reg any:cls, reg r66:V, reg mlayout:*, reg mlayout1:V, reg c27:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg list:cls, reg ddd1:dots?, reg r69:V, reg ____:cls, reg dots:*, reg dots1:V, reg c28:L, reg dots3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r70:V, reg p10:p(V +), reg par2:cls, reg r72:V, reg p11:p(V +), reg r74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r75:V, reg r76:V, reg oma1:*, reg oma2:V, reg c29:V, reg c30:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg rep:cls, reg r79:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg main1:*, reg main2:V, reg c31:V, reg r82:V, reg c32:L, reg oma3:*, reg oma4:V, reg c33:L, reg oma6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r83:V, reg cex_main:*, reg cex_main1:V, reg r84:V, reg r85:V, reg l:*, reg c34:L, reg r87:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r89:V, reg dx5:V, reg ___:cls, reg r90:V, reg r91:V, reg par3:cls, reg layout9:*, reg layout10:V, reg p12:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r94:V, reg r95:V, reg c35:cls, reg r96:V, reg is_mat:*, reg is_mat1:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r99:V, reg r100:V, reg is_mat4:V, reg r101:V, reg c36:cls, reg r102:V, reg r103:V, reg r104:V, reg p13:p(V +), reg oma7:*, reg oma8:V, reg p14:p(V +), reg ask3:*, reg ask4:V, reg p15:p(V +), reg r108:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r109:V, reg r110:V, reg on_exit:cls, reg r111:V, reg layout11:*, reg layout12:V, reg c37:L, reg layout14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r113:V, reg layout15:*, reg layout16:V, reg c38:L, reg layout18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r114:V, reg nser2:*, reg nser3:V, reg r115:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c39:L, reg x7:V, reg x8:*, reg x9:V, reg c40:L, reg i6:I, reg x11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i8:I, reg dx11:V, reg i9:*, reg i10:V, reg __3:cls, reg r116:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r117:V, reg i13:I, reg r118:V, reg X:*, reg X1:V, reg range:cls, reg r119:V, reg is_mat5:*, reg is_mat6:V, reg c41:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r120:V, reg i18:I, reg r121:V, reg x12:*, reg x13:V, reg dimnames:cls, reg r122:V, reg c42:L, reg i20:I, reg r124:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i22:I, reg dx13:V, reg __4:cls, reg r125:V, reg c43:L, reg i24:I, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i26:I, reg dx17:V, reg i27:*, reg i28:V, reg __5:cls, reg r126:V, reg i29:I, reg dx18:V, reg xnam:*, reg xnam1:V, reg is_mat7:*, reg is_mat8:V, reg set_lags3:*, reg set_lags4:V, reg s1:V, reg l4:I, reg i30:I, reg i31:I, reg i32:I, reg i33:I, reg c44:L, reg x14:V, reg jj:*, reg jj1:V, reg nC:*, reg nC1:V, reg __6:cls, reg r127:V, reg r128:V, reg jj2:*, reg jj3:V, reg r129:V, reg c45:L, reg ii:*, reg ii1:V, reg nR:*, reg nR1:V, reg __7:cls, reg r130:V, reg r131:V, reg i42:I, reg i43:I, reg mlayout2:*, reg mlayout3:V, reg c46:L, reg plot:cls, reg lag:cls, reg X2:*, reg X3:V, reg p16:p(V +), reg ll:*, reg ll1:V, reg p17:p(V +), reg r135:V, reg p18:p(V +), reg X4:*, reg X5:V, reg p19:p(V +), reg xl:*, reg xl1:V, reg p20:p(V +), reg xl2:*, reg xl3:V, reg p21:p(V +), reg asp1:*, reg asp2:V, reg p22:p(V +), reg paste:cls, reg ll2:*, reg ll3:V, reg p23:p(V +), reg r142:V, reg p24:p(V +), reg nam:*, reg nam1:V, reg p25:p(V +), reg mlayout4:*, reg mlayout5:V, reg c47:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r145:V, reg r146:V, reg c48:cls, reg r147:V, reg p26:p(V +), reg type1:*, reg type2:V, reg p27:p(V +), reg do_lines3:*, reg do_lines4:V, reg p28:p(V +), reg labels1:*, reg labels2:V, reg p29:p(V +), reg newX:*, reg newX1:V, reg c49:L, reg p30:p(V +), reg newX2:*, reg newX3:V, reg c50:L, reg p31:p(V +), reg ddd2:dots?, reg r154:V, reg box:cls, reg ddd3:dots?, reg r155:V, reg jj4:*, reg jj5:V, reg r156:V, reg c51:L, reg i50:I, reg i51:I, reg c53:V, reg ii2:*, reg ii3:V, reg __8:cls, reg r157:V, reg r158:V, reg c54:L, reg c55:V, reg c57:L, reg i56:I, reg i57:I, reg c59:V, reg newX4:*, reg newX5:V, reg r159:V, reg c60:L, reg c61:V, reg c63:L, reg lAxis:cls, reg ddd4:dots?, reg r160:V, reg i64:I, reg i65:I, reg ii4:*, reg ii5:V, reg r162:V, reg c64:L, reg i68:I, reg i69:I, reg c66:V, reg jj6:*, reg jj7:V, reg __9:cls, reg r163:V, reg r164:V, reg c67:L, reg c68:V, reg c70:L, reg lAxis1:cls, reg ddd5:dots?, reg r165:V, reg i76:I, reg i77:I, reg ii6:*, reg ii7:V, reg __10:cls, reg r167:V, reg r168:V, reg c71:L, reg i80:I, reg i81:I, reg c73:V, reg jj8:*, reg jj9:V, reg nC2:*, reg nC3:V, reg r169:V, reg c74:L, reg i82:I, reg i83:I, reg c75:L, reg c76:V, reg i86:*, reg i87:V, reg nser4:*, reg nser5:V, reg r170:V, reg c79:L, reg i90:I, reg i91:I, reg c83:L, reg c84:L, reg c85:V, reg ll4:*, reg ll5:V, reg set_lags5:*, reg set_lags6:V, reg c86:L, reg i94:I, reg i95:I, reg c90:L, reg c91:L, reg c92:L, reg ll7:V, reg set_lags8:V, reg dr16:V, reg dc8:L, reg dx19:V, reg i98:I, reg i99:I, reg c96:L, reg c97:L, reg c98:L, reg ll9:V, reg dx20:V, reg lags5:*, reg lags6:V, reg __11:cls, reg r171:V, reg r172:V, reg c99:L, reg c100:V, reg c104:L, reg c105:V, reg c108:L, reg c109:V, reg do_4:*, reg do_5:V, reg c111:L, reg lAxis2:cls, reg ddd6:dots?, reg r173:V, reg i110:I, reg i111:I, reg jj10:*, reg jj11:V, reg __12:cls, reg r175:V, reg r176:V, reg c112:L, reg i114:I, reg i115:I, reg c114:V, reg ii8:*, reg ii9:V, reg nR2:*, reg nR3:V, reg r177:V, reg c115:L, reg c116:V, reg c118:L, reg lAxis3:cls, reg ddd7:dots?, reg r178:V, reg i122:I, reg i123:I, reg newX6:*, reg newX7:V, reg c119:L, reg do_6:*, reg do_7:V, reg r180:V, reg c120:L, reg lAxis4:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r181:V, reg r182:V, reg c121:cls, reg r183:V, reg p32:p(V +), reg ddd8:dots?, reg r185:V, reg i132:I, reg i133:I, reg r186:V, reg i134:I, reg i135:I, reg r187:V, reg i136:I, reg i137:I, reg plot1:cls, reg lag1:cls, reg X6:*, reg X7:V, reg p33:p(V +), reg ll10:*, reg ll11:V, reg p34:p(V +), reg r191:V, reg p35:p(V +), reg X8:*, reg X9:V, reg p36:p(V +), reg xl4:*, reg xl5:V, reg p37:p(V +), reg xl6:*, reg xl7:V, reg p38:p(V +), reg asp3:*, reg asp4:V, reg p39:p(V +), reg paste1:cls, reg ll12:*, reg ll13:V, reg p40:p(V +), reg r198:V, reg p41:p(V +), reg nam2:*, reg nam3:V, reg p42:p(V +), reg type3:*, reg type4:V, reg p43:p(V +), reg do_lines5:*, reg do_lines6:V, reg p44:p(V +), reg labels3:*, reg labels4:V, reg p45:p(V +), reg main3:*, reg main4:V, reg p46:p(V +), reg ddd9:dots?, reg r205:V, reg diag1:*, reg diag2:V, reg c122:L, reg abline:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r206:V, reg r207:V, reg c123:cls, reg r208:V, reg p47:p(V +), reg diag_col1:*, reg diag_col2:V, reg p48:p(V +), reg r211:V, reg i142:I, reg i143:I, reg mlayout6:*, reg mlayout7:V, reg c124:L, reg i146:I, reg i147:I, reg c126:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r213:V, reg i152:I, reg i153:I, reg c129:L, reg r214:V, reg main5:*, reg main6:V, reg c130:V, reg r215:V, reg c131:L, reg c132:V, reg c134:L, reg ____1:cls, reg dots4:*, reg dots5:V, reg c135:L, reg dots7:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg r216:V, reg p49:p(V +), reg par4:cls, reg r218:V, reg p50:p(V +), reg r220:V, reg jj12:*, reg jj13:V, reg nC4:*, reg nC5:V, reg r221:V, reg c136:L, reg i162:I, reg i163:I, reg c138:V, reg ii10:*, reg ii11:V, reg nR4:*, reg nR5:V, reg r222:V, reg c139:L, reg c140:V, reg c142:L, reg i166:I, reg i167:I, reg c143:V, reg ll14:*, reg ll15:V, reg set_lags9:*, reg set_lags10:V, reg c145:L, reg i172:I, reg i173:I, reg c147:L, reg ll17:V, reg set_lags12:V, reg dr20:V, reg dc10:L, reg dx23:V, reg i176:I, reg i177:I, reg c149:L, reg ll19:V, reg dx24:V, reg lags7:*, reg lags8:V, reg __13:cls, reg r223:V, reg r224:V, reg c150:L, reg c151:V, reg c153:L, reg mtext:cls, reg main7:*, reg main8:V, reg p51:p(V +), reg cex_main2:*, reg cex_main3:V, reg p52:p(V +), reg font_main:*, reg font_main1:V, reg p53:p(V +), reg r228:V, reg i184:I, reg i185:I, reg r229:V, reg i186:I, reg i187:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r231:V, reg r232:V, reg invisible:cls, reg r233:V |
    mkenv;
    st x = x;
    lags_isMissing = missing.0(lags);
    if lags_isMissing then L0(1.0) else L0(lags);
  L0(lags_orDefault):
    st lags = lags_orDefault;
    layout_isMissing = missing.0(layout);
    if layout_isMissing then L1(NULL) else L1(layout);
  L1(layout_orDefault):
    st layout = layout_orDefault;
    set_lags_isMissing = missing.0(set_lags);
    if set_lags_isMissing then L2() else L3(set_lags);
  L2():
    p = prom<V +>{
      lags1 = ld lags;
      lags2 = force? lags1;
      checkMissing(lags2);
      r = `:`(1, lags2);
      return r;
    };
    goto L3(p);
  L3(set_lags_orDefault):
    st `set.lags` = set_lags_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L4(NULL) else L4(main);
  L4(main_orDefault):
    st main = main_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L5(1.0) else L5(asp);
  L5(asp_orDefault):
    st asp = asp_orDefault;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L6(TRUE) else L6(diag);
  L6(diag_orDefault):
    st diag = diag_orDefault;
    diag_col_isMissing = missing.0(diag_col);
    if diag_col_isMissing then L7("gray") else L7(diag_col);
  L7(diag_col_orDefault):
    st `diag.col` = diag_col_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L8("p") else L8(type);
  L8(type_orDefault):
    st type = type_orDefault;
    oma_isMissing = missing.0(oma);
    if oma_isMissing then L9(NULL) else L9(oma);
  L9(oma_orDefault):
    st oma = oma_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L10(NULL) else L10(ask);
  L10(ask_orDefault):
    st ask = ask_orDefault;
    do_lines_isMissing = missing.0(do_lines);
    if do_lines_isMissing then L11() else L12(do_lines);
  L11():
    p1 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r2 = `<=`(n1, 150.0);
      visible.0();
      return r2;
    };
    goto L12(p1);
  L12(do_lines_orDefault):
    st `do.lines` = do_lines_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L13() else L14(labels);
  L13():
    p2 = prom<V +>{
      do_lines1 = ld `do.lines`;
      do_lines2 = force? do_lines1;
      checkMissing(do_lines2);
      return do_lines2;
    };
    goto L14(p2);
  L14(labels_orDefault):
    st labels = labels_orDefault;
    st `...` = ddd;
    r5 = clos inner1205718407;
    st lAxis = r5;
    deparse1 = ldf deparse1;
    check L101() else D0();
  D0():
    deopt 4 [];
  L101():
    p3 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      substitute = ldf substitute in base;
      r8 = dyn substitute(<sym x>);
      goto L0(r8);
    L2():
      r6 = dyn base(<sym x>);
      goto L0(r6);
    };
    r10 = dyn deparse1(p3);
    check L102() else D1();
  D1():
    deopt 6 [r10];
  L102():
    st xnam = r10;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L103() else L104();
  L15(r12):
    r15 = `!`(r12);
    st `is.mat` = r15;
    ncol1 = ldf ncol;
    check L107() else D4();
  L103():
    ncol = ldf ncol;
    check L105() else D2();
  L104():
    r11 = dyn base1(<lang ncol(x)>);
    goto L15(r11);
  D2():
    deopt 10 [];
  D4():
    deopt 17 [];
  L105():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r14 = dyn ncol(p4);
    check L106() else D3();
  L107():
    p7 = prom<V +>{
      as_ts = ldf `as.ts`;
      p6 = prom<V +>{
        as_matrix = ldf `as.matrix`;
        p5 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r17 = dyn as_matrix(p5);
        return r17;
      };
      r19 = dyn as_ts(p6);
      st x = r19;
      invisible.0();
      return r19;
    };
    r21 = dyn ncol1(p7);
    check L108() else D5();
  D3():
    deopt 12 [r14];
  D5():
    deopt 19 [r21];
  L106():
    c = `==`(r14, NULL);
    goto L15(c);
  L108():
    st nser = r21;
    nrow = ldf nrow;
    check L109() else D6();
  D6():
    deopt 22 [];
  L109():
    p8 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r23 = dyn nrow(p8);
    check L110() else D7();
  D7():
    deopt 24 [r23];
  L110():
    st n = r23;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L111() else L112();
  L16(r25):
    c1 = `as.logical`(r25);
    if c1 then L113() else L17(c1);
  L111():
    missing = ldf missing in base;
    r26 = dyn missing(<sym lags>);
    goto L16(r26);
  L112():
    r24 = dyn base2(<sym lags>);
    goto L16(r24);
  L17(c3):
    c10 = `as.logical`(c3);
    if c10 then L117() else L19();
  L113():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  L18(c6, r28):
    r30 = `!`(r28);
    c7 = `as.logical`(r30);
    c8 = `&&`(c6, c7);
    goto L17(c8);
  L19():
    goto L22();
  L22():
    nser = ld nser;
    check L126() else D11();
  L114():
    missing1 = ldf missing in base;
    r29 = dyn missing1(<sym set.lags>);
    goto L18(c1, r29);
  L115():
    r27 = dyn base3(<sym set.lags>);
    goto L18(c1, r27);
  L117():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L118() else L119();
  D11():
    deopt 48 [nser];
  L20(r32):
    st lags = r32;
    goto L22();
  L118():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L120() else L121();
  L119():
    r31 = dyn base4(<lang `<-`(set.lags, as.integer(set.lags))>);
    goto L20(r31);
  L126():
    nser1 = force? nser;
    checkMissing(nser1);
    lags3 = ld lags;
    check L127() else D12();
  D12():
    deopt 49 [nser1, lags3];
  L21(r34):
    st `set.lags` = r34;
    length = ldf length in base;
    r36 = dyn length(r34);
    check L124() else D10();
  L120():
    set_lags1 = ld `set.lags`;
    check L122() else D8();
  L121():
    r33 = dyn base5(<sym set.lags>);
    goto L21(r33);
  L127():
    lags4 = force? lags3;
    checkMissing(lags4);
    r38 = `*`(nser1, lags4);
    st `tot.lags` = r38;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L128() else L129();
  D8():
    deopt 38 [set_lags1];
  D10():
    deopt 44 [r36];
  L23(r40):
    c12 = `as.logical`(r40);
    if c12 then L131() else L24();
  L122():
    set_lags2 = force? set_lags1;
    checkMissing(set_lags2);
    as_integer = ldf `as.integer` in base;
    r35 = dyn as_integer(set_lags2);
    check L123() else D9();
  L124():
    goto L20(r36);
  L128():
    ask1 = ld ask;
    check L130() else D13();
  L129():
    r39 = dyn base6(<sym ask>);
    goto L23(r39);
  D9():
    deopt 41 [r35];
  D13():
    deopt 54 [ask1];
  L24():
    goto L31();
  L31():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L154() else L155();
  L123():
    goto L21(r35);
  L130():
    ask2 = force? ask1;
    checkMissing(ask2);
    c11 = `==`(ask2, NULL);
    goto L23(c11);
  L131():
    _Device = ld `.Device`;
    check L132() else D14();
  D14():
    deopt 57 [_Device];
  L32(r55):
    c25 = `as.logical`(r55);
    if c25 then L157() else L33();
  L132():
    _Device1 = force? _Device;
    checkMissing(_Device1);
    r41 = `==`(_Device1, "null device");
    c13 = `as.logical`(r41);
    if c13 then L133() else L25();
  L154():
    layout5 = ld layout;
    check L156() else D25();
  L155():
    r54 = dyn base9(<sym layout>);
    goto L32(r54);
  D25():
    deopt 90 [layout5];
  L25():
    goto L26();
  L26():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L137() else L138();
  L33():
    goto L37();
  L37():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L133():
    dev_new = ldf `dev.new`;
    check L134() else D15();
  L156():
    layout6 = force? layout5;
    checkMissing(layout6);
    c24 = `==`(layout6, NULL);
    goto L32(c24);
  L157():
    sym10 = ldf prod;
    base10 = ldf prod in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L158() else L159();
  D15():
    deopt 62 [];
  L27(r45):
    c15 = `as.logical`(r45);
    if c15 then L140() else L28();
  L34(r57):
    tot_lags2 = ld `tot.lags`;
    check L163() else D29();
  L38(r64):
    st mlayout = r64;
    mlayout = ld mlayout;
    check L174() else D35();
  L134():
    r42 = dyn dev_new();
    check L135() else D16();
  L137():
    layout1 = ld layout;
    check L139() else D17();
  L138():
    r44 = dyn base7(<sym layout>);
    goto L27(r44);
  L158():
    par1 = ldf par;
    check L160() else D26();
  L159():
    r56 = dyn base10(<lang `<-`(pmf, par("mfrow"))>);
    goto L34(r56);
  L170():
    layout7 = ld layout;
    check L172() else D33();
  L171():
    r63 = dyn base11(<lang `>`(layout, 1.0)>);
    goto L38(r63);
  D16():
    deopt 63 [r42];
  D17():
    deopt 67 [layout1];
  D26():
    deopt 96 [];
  D29():
    deopt 101 [r57, tot_lags2];
  D33():
    deopt 115 [layout7];
  D35():
    deopt 122 [mlayout];
  L28():
    dev_interactive = ldf `dev.interactive`;
    check L144() else D20();
  L29(r47):
    st ask = r47;
    goto L31();
  L135():
    goto L26();
  L139():
    layout2 = force? layout1;
    checkMissing(layout2);
    c14 = `==`(layout2, NULL);
    goto L27(c14);
  L140():
    par = ldf par;
    check L141() else D18();
  L160():
    r58 = dyn par1("mfrow");
    check L161() else D27();
  L163():
    tot_lags3 = force? tot_lags2;
    checkMissing(tot_lags3);
    r60 = `>=`(r57, tot_lags3);
    c26 = `as.logical`(r60);
    if c26 then L164() else L35();
  L172():
    layout8 = force? layout7;
    checkMissing(layout8);
    r65 = `>`(layout8, 1.0);
    any = ldf any in base;
    r66 = dyn any(r65);
    check L173() else D34();
  L174():
    mlayout1 = force? mlayout;
    checkMissing(mlayout1);
    c27 = `as.logical`(mlayout1);
    if c27 then L175() else L39();
  D18():
    deopt 71 [];
  D20():
    deopt 75 [];
  D27():
    deopt 98 [r58];
  D34():
    deopt 120 [r66];
  L35():
    n2mfrow = ldf n2mfrow;
    check L167() else D31();
  L36(pmf2):
    st layout = pmf2;
    goto L37();
  L39():
    goto L51();
  L51():
    layout11 = ld layout;
    check L207() else D46();
  L141():
    r46 = dyn par("ask");
    check L142() else D19();
  L144():
    r48 = dyn dev_interactive();
    check L145() else D21();
  L161():
    st pmf = r58;
    prod1 = ldf prod in base;
    r59 = dyn prod1(r58);
    check L162() else D28();
  L164():
    pmf = ld pmf;
    check L165() else D30();
  L173():
    goto L38(r66);
  L175():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L176() else L177();
  D19():
    deopt 73 [r46];
  D21():
    deopt 76 [r48];
  D28():
    deopt 101 [r59];
  D30():
    deopt 104 [pmf];
  D31():
    deopt 107 [];
  D46():
    deopt 184 [layout11];
  L40(r68):
    st dots = r68;
    ____ = ldf `%||%`;
    check L180() else D38();
  L142():
    goto L29(r46);
  L145():
    c16 = `as.logical`(r48);
    if c16 then L146() else L29(c16);
  L162():
    goto L34(r59);
  L165():
    pmf1 = force? pmf;
    checkMissing(pmf1);
    goto L36(pmf1);
  L167():
    p9 = prom<V +>{
      tot_lags4 = ld `tot.lags`;
      tot_lags5 = force? tot_lags4;
      checkMissing(tot_lags5);
      return tot_lags5;
    };
    r62 = dyn n2mfrow(p9);
    check L168() else D32();
  L176():
    list = ldf list;
    check L178() else D36();
  L177():
    r67 = dyn base12(<sym ...>);
    goto L40(r67);
  L207():
    layout12 = force? layout11;
    checkMissing(layout12);
    c37 = `is.object`(layout12);
    if c37 then L208() else L209(layout12);
  D32():
    deopt 109 [r62];
  D36():
    deopt 126 [];
  D38():
    deopt 131 [];
  L52(dx7):
    st nR = dx7;
    layout15 = ld layout;
    check L211() else D47();
  L146():
    sym8 = ldf prod;
    base8 = ldf prod in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L147() else L148();
  L168():
    goto L36(r62);
  L178():
    ddd1 = ld `...`;
    r69 = dyn list[`...`](ddd1);
    check L179() else D37();
  L180():
    p10 = prom<V +>{
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      c28 = `is.object`(dots1);
      if c28 then L1() else L2(dots1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", dots1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dots3):
      r70 = `$`(dots3, <sym cex.main>);
      goto L0(r70);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p11 = prom<V +>{
      par2 = ldf par;
      r72 = dyn par2("cex.main");
      return r72;
    };
    r74 = dyn ____(p10, p11);
    check L181() else D39();
  L208():
    dr6 = tryDispatchBuiltin.1("[", layout12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L210() else L209(dr6);
  L209(layout14):
    __1 = ldf `[` in base;
    r113 = dyn __1(layout14, 1);
    goto L52(r113);
  D37():
    deopt 128 [r69];
  D39():
    deopt 134 [r74];
  D47():
    deopt 190 [layout15];
  L30(c20, r50):
    tot_lags = ld `tot.lags`;
    check L151() else D24();
  L147():
    layout3 = ld layout;
    check L149() else D22();
  L148():
    r49 = dyn base8(<sym layout>);
    goto L30(c16, r49);
  L179():
    goto L40(r69);
  L181():
    st `cex.main` = r74;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L182() else L183();
  L210():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L52(dx6);
  L211():
    layout16 = force? layout15;
    checkMissing(layout16);
    c38 = `is.object`(layout16);
    if c38 then L212() else L213(layout16);
  D22():
    deopt 79 [c16, layout3];
  D24():
    deopt 82 [c20, r50, tot_lags];
  L41(r76):
    c30 = `as.logical`(r76);
    if c30 then L185() else L42();
  L53(dx9):
    st nC = dx9;
    st jj = 0.0;
    st ii = 0.0;
    nser2 = ld nser;
    check L215() else D48();
  L149():
    layout4 = force? layout3;
    checkMissing(layout4);
    prod = ldf prod in base;
    r51 = dyn prod(layout4);
    check L150() else D23();
  L151():
    tot_lags1 = force? tot_lags;
    checkMissing(tot_lags1);
    r52 = `<`(r50, tot_lags1);
    c21 = `as.logical`(r52);
    c22 = `&&`(c20, c21);
    goto L29(c22);
  L182():
    oma1 = ld oma;
    check L184() else D40();
  L183():
    r75 = dyn base13(<sym oma>);
    goto L41(r75);
  L212():
    dr8 = tryDispatchBuiltin.1("[", layout16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L214() else L213(dr8);
  L213(layout18):
    __2 = ldf `[` in base;
    r114 = dyn __2(layout18, 2);
    goto L53(r114);
  D23():
    deopt 82 [c16, r51];
  D40():
    deopt 137 [oma1];
  D48():
    deopt 201 [1, nser2];
  L42():
    goto L49();
  L49():
    par3 = ldf par;
    check L202() else D44();
  L150():
    goto L30(c16, r51);
  L184():
    oma2 = force? oma1;
    checkMissing(oma2);
    c29 = `==`(oma2, NULL);
    goto L41(c29);
  L185():
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L186() else L187();
  L214():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx8);
  L215():
    nser3 = force? nser2;
    checkMissing(nser3);
    r115 = `:`(1, nser3);
    s = toForSeq(r115);
    l3 = length(s);
    i = 0;
    goto L54(i);
  D44():
    deopt 168 [];
  L43(r78):
    st oma = r78;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L188() else L189();
  L54(i1):
    i2 = `+`.1(i1, 1);
    c39 = `<`.1(l3, i2);
    if c39 then L216() else L99();
  L186():
    rep = ldf rep in base;
    r79 = dyn rep(2.0, 4.0);
    goto L43(r79);
  L187():
    r77 = dyn base14(2.0, 4.0);
    goto L43(r77);
  L202():
    p12 = prom<V +>{
      layout9 = ld layout;
      layout10 = force? layout9;
      checkMissing(layout10);
      return layout10;
    };
    p13 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L2() else L3();
    L0(r95):
      is_mat = ld `is.mat`;
      is_mat1 = force? is_mat;
      checkMissing(is_mat1);
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L4() else L5();
    L2():
      c35 = ldf c in base;
      r96 = dyn c35(1.1, 1.1, 0.5, 0.5);
      goto L0(r96);
    L3():
      r94 = dyn base16(1.1, 1.1, 0.5, 0.5);
      goto L0(r94);
    L1(r100, is_mat4, r101):
      r103 = `*`(is_mat4, r101);
      r104 = `+`(r100, r103);
      return r104;
    L4():
      c36 = ldf c in base;
      r102 = dyn c36(0.0, 0.5, 0.0, 0.5);
      goto L1(r95, is_mat1, r102);
    L5():
      r99 = dyn base17(0.0, 0.5, 0.0, 0.5);
      goto L1(r95, is_mat1, r99);
    };
    p14 = prom<V +>{
      oma7 = ld oma;
      oma8 = force? oma7;
      checkMissing(oma8);
      return oma8;
    };
    p15 = prom<V +>{
      ask3 = ld ask;
      ask4 = force? ask3;
      checkMissing(ask4);
      return ask4;
    };
    r108 = dyn par3[mfrow, mar, oma, ask](p12, p13, p14, p15);
    check L203() else D45();
  D45():
    deopt 177 [r108];
  L44(r81):
    r82 = `!`(r81);
    c32 = `as.logical`(r82);
    if c32 then L191() else L45();
  L99():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    x8 = ld x;
    check L217() else D49();
  L188():
    main1 = ld main;
    check L190() else D41();
  L189():
    r80 = dyn base15(<sym main>);
    goto L44(r80);
  L203():
    st opar = r108;
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L204() else L205();
  L216():
    sym25 = ldf invisible;
    base25 = ldf invisible in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L357() else L358();
  D41():
    deopt 145 [main1];
  D49():
    deopt 204 [i2, x8];
  L45():
    goto L48(NULL);
  L48(r91):
    goto L49();
  L50(r110):
    goto L51();
  L100(r232):
    popenv;
    return r232;
  L190():
    main2 = force? main1;
    checkMissing(main2);
    c31 = `==`(main2, NULL);
    goto L44(c31);
  L191():
    oma3 = ld oma;
    check L192() else D42();
  L204():
    on_exit = ldf `on.exit` in base;
    r111 = dyn on_exit(<lang par(opar)>);
    goto L50(r111);
  L205():
    r109 = dyn base18(<lang par(opar)>);
    goto L50(r109);
  L217():
    x9 = force? x8;
    checkMissing(x9);
    c40 = `is.object`(x9);
    if c40 then L218() else L219(i2, x9);
  L357():
    invisible = ldf invisible in base;
    r233 = dyn invisible(NULL);
    check L359() else D123();
  L358():
    r231 = dyn base25(NULL);
    goto L100(r231);
  D42():
    deopt 149 [oma3];
  D123():
    deopt 517 [r233];
  L55(i8, dx11):
    st X = dx11;
    sym19 = ldf range;
    base19 = ldf range in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L222() else L223();
  L192():
    oma4 = force? oma3;
    checkMissing(oma4);
    c33 = `is.object`(oma4);
    if c33 then L193() else L194(oma4);
  L218():
    dr10 = tryDispatchBuiltin.1("[", x9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L220() else L219(i2, dr10);
  L219(i6, x11):
    i9 = ld i;
    check L221() else D50();
  L359():
    goto L100(r233);
  D50():
    deopt 207 [i6, x11, i9];
  L46(dx3):
    cex_main = ld `cex.main`;
    check L196() else D43();
  L56(i13, r118):
    st xl = r118;
    is_mat5 = ld `is.mat`;
    check L226() else D53();
  L193():
    dr2 = tryDispatchBuiltin.1("[", oma4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L195() else L194(dr2);
  L194(oma6):
    __ = ldf `[` in base;
    r83 = dyn __(oma6, 3);
    goto L46(r83);
  L220():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L55(i2, dx10);
  L221():
    i10 = force? i9;
    __3 = ldf `[` in base;
    r116 = dyn __3(x9, <missing>, i10);
    goto L55(i6, r116);
  L222():
    X = ld X;
    check L224() else D51();
  L223():
    r117 = dyn base19(<sym X>);
    goto L56(i8, r117);
  D43():
    deopt 154 [dx3, 3.0, cex_main];
  D51():
    deopt 214 [i8, X];
  D53():
    deopt 219 [i13, is_mat5];
  L195():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L46(dx2);
  L196():
    cex_main1 = force? cex_main;
    checkMissing(cex_main1);
    r84 = `*`(3.0, cex_main1);
    r85 = `+`(dx3, r84);
    l = ld oma;
    c34 = `is.object`(l);
    if c34 then L197() else L198(r85, l);
  L224():
    X1 = force? X;
    checkMissing(X1);
    range = ldf range in base;
    r119 = dyn range(X1);
    check L225() else D52();
  L226():
    is_mat6 = force? is_mat5;
    checkMissing(is_mat6);
    c41 = `as.logical`(is_mat6);
    if c41 then L227() else L57();
  D52():
    deopt 217 [i8, r119];
  L47(r89, dx5):
    st oma = dx5;
    goto L48(r89);
  L57():
    xnam = ld xnam;
    check L240() else D57();
  L61(i29, dx18):
    st nam = dx18;
    is_mat7 = ld `is.mat`;
    check L241() else D58();
  L197():
    dr4 = tryDispatchBuiltin.0("[<-", l, r85);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L199() else L198(r85, dr4);
  L198(r87, l2):
    ___ = ldf `[<-` in base;
    r90 = dyn ___(l2, r85, 3);
    goto L47(r87, r90);
  L225():
    goto L56(i8, r119);
  L227():
    sym20 = ldf dimnames;
    base20 = ldf dimnames in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L228() else L229();
  D57():
    deopt 233 [i13, xnam];
  D58():
    deopt 236 [i29, is_mat7];
  L58(i18, r121):
    c42 = `is.object`(r121);
    if c42 then L232() else L233(i18, r121);
  L199():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L47(r85, dx4);
  L228():
    x12 = ld x;
    check L230() else D54();
  L229():
    r120 = dyn base20(<sym x>);
    goto L58(i13, r120);
  L240():
    xnam1 = force? xnam;
    checkMissing(xnam1);
    goto L61(i13, xnam1);
  L241():
    is_mat8 = force? is_mat7;
    checkMissing(is_mat8);
    st newX = is_mat8;
    set_lags3 = ld `set.lags`;
    check L242() else D59();
  D54():
    deopt 223 [i13, x12];
  D59():
    deopt 239 [i29, set_lags3];
  L59(i22, dx13):
    c43 = `is.object`(dx13);
    if c43 then L235() else L236(i22, dx13);
  L230():
    x13 = force? x12;
    checkMissing(x13);
    dimnames = ldf dimnames in base;
    r122 = dyn dimnames(x13);
    check L231() else D55();
  L232():
    dr12 = tryDispatchBuiltin.1("[[", r121);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L234() else L233(i18, dr12);
  L233(i20, r124):
    __4 = ldf `[[` in base;
    r125 = dyn __4(r124, 2);
    goto L59(i20, r125);
  L242():
    set_lags4 = force? set_lags3;
    checkMissing(set_lags4);
    s1 = toForSeq(set_lags4);
    l4 = length(s1);
    i30 = 0;
    goto L62(i29, i30);
  D55():
    deopt 226 [i13, r122];
  L60(i26, dx17):
    goto L61(i26, dx17);
  L62(i31, i32):
    i33 = `+`.1(i32, 1);
    c44 = `<`.1(l4, i33);
    if c44 then L243() else L98();
  L231():
    goto L58(i13, r122);
  L234():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L59(i18, dx12);
  L235():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L237() else L236(i22, dr14);
  L236(i24, dx15):
    i27 = ld i;
    check L238() else D56();
  D56():
    deopt 230 [i24, dx15, i27];
  L98():
    x14 = `[[`(s1, i33, NULL, TRUE);
    st ll = x14;
    jj = ld jj;
    check L244() else D60();
  L237():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L60(i22, dx16);
  L238():
    i28 = force? i27;
    __5 = ldf `[` in base;
    r126 = dyn __5(dx15, i28);
    goto L60(i24, r126);
  L243():
    goto L54(i31);
  D60():
    deopt 243 [i31, i33, 1.0, jj];
  L244():
    jj1 = force? jj;
    checkMissing(jj1);
    nC = ld nC;
    check L245() else D61();
  D61():
    deopt 245 [i31, i33, 1.0, nC];
  L245():
    nC1 = force? nC;
    checkMissing(nC1);
    __6 = ldf `%%` in base;
    r127 = dyn __6(jj1, nC1);
    check L246() else D62();
  D62():
    deopt 248 [i31, i33, 1.0, r127];
  L246():
    r128 = `+`(1.0, r127);
    st jj = r128;
    jj2 = ld jj;
    check L247() else D63();
  D63():
    deopt 251 [i31, i33, jj2];
  L247():
    jj3 = force? jj2;
    checkMissing(jj3);
    r129 = `==`(jj3, 1.0);
    c45 = `as.logical`(r129);
    if c45 then L248() else L63();
  L63():
    goto L64(i31, i33);
  L64(i42, i43):
    mlayout2 = ld mlayout;
    check L253() else D67();
  L248():
    ii = ld ii;
    check L249() else D64();
  D64():
    deopt 257 [i31, i33, 1.0, ii];
  D67():
    deopt 267 [i42, i43, mlayout2];
  L249():
    ii1 = force? ii;
    checkMissing(ii1);
    nR = ld nR;
    check L250() else D65();
  L253():
    mlayout3 = force? mlayout2;
    checkMissing(mlayout3);
    c46 = `as.logical`(mlayout3);
    if c46 then L254() else L65();
  D65():
    deopt 259 [i31, i33, 1.0, nR];
  L65():
    plot1 = ldf plot;
    check L322() else D105();
  L86(i136, i137):
    diag1 = ld diag;
    check L324() else D107();
  L250():
    nR1 = force? nR;
    checkMissing(nR1);
    __7 = ldf `%%` in base;
    r130 = dyn __7(ii1, nR1);
    check L251() else D66();
  L254():
    plot = ldf plot;
    check L255() else D68();
  D66():
    deopt 262 [i31, i33, 1.0, r130];
  D68():
    deopt 270 [i42, i43];
  D105():
    deopt 423 [i42, i43];
  D107():
    deopt 446 [i136, i137, diag1];
  L251():
    r131 = `+`(1.0, r130);
    st ii = r131;
    goto L64(i31, i33);
  L255():
    p18 = prom<V +>{
      lag = ldf lag;
      p16 = prom<V +>{
        X2 = ld X;
        X3 = force? X2;
        checkMissing(X3);
        return X3;
      };
      p17 = prom<V +>{
        ll = ld ll;
        ll1 = force? ll;
        checkMissing(ll1);
        return ll1;
      };
      r135 = dyn lag(p16, p17);
      return r135;
    };
    p19 = prom<V +>{
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      return X5;
    };
    p20 = prom<V +>{
      xl = ld xl;
      xl1 = force? xl;
      checkMissing(xl1);
      return xl1;
    };
    p21 = prom<V +>{
      xl2 = ld xl;
      xl3 = force? xl2;
      checkMissing(xl3);
      return xl3;
    };
    p22 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    p24 = prom<V +>{
      paste = ldf paste;
      p23 = prom<V +>{
        ll2 = ld ll;
        ll3 = force? ll2;
        checkMissing(ll3);
        return ll3;
      };
      r142 = dyn paste("lag", p23);
      return r142;
    };
    p25 = prom<V +>{
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      return nam1;
    };
    p26 = prom<V +>{
      mlayout4 = ld mlayout;
      mlayout5 = force? mlayout4;
      checkMissing(mlayout5);
      c47 = `as.logical`(mlayout5);
      if c47 then L2() else L0();
    L0():
      invisible.0();
      return NULL;
    L2():
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L3() else L4();
    L1(r146):
      return r146;
    L3():
      c48 = ldf c in base;
      r147 = dyn c48(0.0, 0.0, 0.0);
      goto L1(r147);
    L4():
      r145 = dyn base21(0.0, 0.0, 0.0);
      goto L1(r145);
    };
    p27 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p28 = prom<V +>{
      do_lines3 = ld `do.lines`;
      do_lines4 = force? do_lines3;
      checkMissing(do_lines4);
      return do_lines4;
    };
    p29 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    p30 = prom<V +>{
      newX = ld newX;
      newX1 = force? newX;
      checkMissing(newX1);
      c49 = `as.logical`(newX1);
      if c49 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "red";
    };
    p31 = prom<V +>{
      newX2 = ld newX;
      newX3 = force? newX2;
      checkMissing(newX3);
      c50 = `as.logical`(newX3);
      if c50 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return 2.0;
    };
    ddd2 = ld `...`;
    r154 = dyn plot[, , xlim, ylim, asp, xlab, ylab, mgp, axes, type, `xy.lines`, `xy.labels`, `col.lab`, `font.lab`, `...`](p18, p19, p20, p21, p22, p24, p25, p26, FALSE, p27, p28, p29, p30, p31, ddd2);
    check L256() else D69();
  L322():
    p35 = prom<V +>{
      lag1 = ldf lag;
      p33 = prom<V +>{
        X6 = ld X;
        X7 = force? X6;
        checkMissing(X7);
        return X7;
      };
      p34 = prom<V +>{
        ll10 = ld ll;
        ll11 = force? ll10;
        checkMissing(ll11);
        return ll11;
      };
      r191 = dyn lag1(p33, p34);
      return r191;
    };
    p36 = prom<V +>{
      X8 = ld X;
      X9 = force? X8;
      checkMissing(X9);
      return X9;
    };
    p37 = prom<V +>{
      xl4 = ld xl;
      xl5 = force? xl4;
      checkMissing(xl5);
      return xl5;
    };
    p38 = prom<V +>{
      xl6 = ld xl;
      xl7 = force? xl6;
      checkMissing(xl7);
      return xl7;
    };
    p39 = prom<V +>{
      asp3 = ld asp;
      asp4 = force? asp3;
      checkMissing(asp4);
      return asp4;
    };
    p41 = prom<V +>{
      paste1 = ldf paste;
      p40 = prom<V +>{
        ll12 = ld ll;
        ll13 = force? ll12;
        checkMissing(ll13);
        return ll13;
      };
      r198 = dyn paste1("lag", p40);
      return r198;
    };
    p42 = prom<V +>{
      nam2 = ld nam;
      nam3 = force? nam2;
      checkMissing(nam3);
      return nam3;
    };
    p43 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p44 = prom<V +>{
      do_lines5 = ld `do.lines`;
      do_lines6 = force? do_lines5;
      checkMissing(do_lines6);
      return do_lines6;
    };
    p45 = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      return labels4;
    };
    p46 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    ddd9 = ld `...`;
    r205 = dyn plot1[, , xlim, ylim, asp, xlab, ylab, type, `xy.lines`, `xy.labels`, main, `...`](p35, p36, p37, p38, p39, p41, p42, p43, p44, p45, p46, ddd9);
    check L323() else D106();
  L324():
    diag2 = force? diag1;
    checkMissing(diag2);
    c122 = `as.logical`(diag2);
    if c122 then L325() else L87();
  D69():
    deopt 298 [i42, i43, r154];
  D106():
    deopt 445 [i42, i43, r205];
  L87():
    goto L88(i136, i137);
  L88(i142, i143):
    mlayout6 = ld mlayout;
    check L329() else D110();
  L256():
    box = ldf box;
    check L257() else D70();
  L323():
    goto L86(i42, i43);
  L325():
    abline = ldf abline;
    check L326() else D108();
  D70():
    deopt 300 [i42, i43];
  D108():
    deopt 449 [i136, i137];
  D110():
    deopt 458 [i142, i143, mlayout6];
  L257():
    ddd3 = ld `...`;
    r155 = dyn box[`...`](ddd3);
    check L258() else D71();
  L326():
    p47 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r207):
      return r207;
    L1():
      c123 = ldf c in base;
      r208 = dyn c123(0.0, 1.0);
      goto L0(r208);
    L2():
      r206 = dyn base23(0.0, 1.0);
      goto L0(r206);
    };
    p48 = prom<V +>{
      diag_col1 = ld `diag.col`;
      diag_col2 = force? diag_col1;
      checkMissing(diag_col2);
      return diag_col2;
    };
    r211 = dyn abline[, lty, col](p47, 2.0, p48);
    check L327() else D109();
  L329():
    mlayout7 = force? mlayout6;
    checkMissing(mlayout7);
    c124 = `as.logical`(mlayout7);
    if c124 then L330() else L89(i142, i143, c124);
  D71():
    deopt 302 [i42, i43, r155];
  D109():
    deopt 455 [i136, i137, r211];
  L89(i146, i147, c126):
    c134 = `as.logical`(c126);
    if c134 then L335() else L91();
  L258():
    jj4 = ld jj;
    check L259() else D72();
  L327():
    goto L88(i136, i137);
  L330():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L331() else L332();
  D72():
    deopt 303 [i42, i43, jj4];
  L90(i152, i153, c129, r214):
    r215 = `!`(r214);
    c131 = `as.logical`(r215);
    c132 = `&&`(c129, c131);
    goto L89(i152, i153, c132);
  L91():
    goto L97(i146, i147);
  L97(i186, i187):
    goto L62(i186, i187);
  L259():
    jj5 = force? jj4;
    checkMissing(jj5);
    r156 = `==`(jj5, 1.0);
    c51 = `as.logical`(r156);
    if c51 then L260() else L66(i42, i43, c51);
  L331():
    main5 = ld main;
    check L333() else D111();
  L332():
    r213 = dyn base24(<sym main>);
    goto L90(i142, i143, c124, r213);
  L335():
    ____1 = ldf `%||%`;
    check L336() else D112();
  D111():
    deopt 461 [i142, i143, c124, main5];
  D112():
    deopt 467 [i146, i147];
  L66(i50, i51, c53):
    c57 = `as.logical`(c53);
    if c57 then L264() else L67(i50, i51, c57);
  L260():
    ii2 = ld ii;
    check L261() else D73();
  L333():
    main6 = force? main5;
    checkMissing(main6);
    c130 = `==`(main6, NULL);
    goto L90(i142, i143, c124, c130);
  L336():
    p49 = prom<V +>{
      dots4 = ld dots;
      dots5 = force? dots4;
      checkMissing(dots5);
      c135 = `is.object`(dots5);
      if c135 then L1() else L2(dots5);
    L0(dx22):
      return dx22;
    L1():
      dr18 = tryDispatchBuiltin.1("$", dots5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(dots7):
      r216 = `$`(dots7, <sym font.main>);
      goto L0(r216);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    p50 = prom<V +>{
      par4 = ldf par;
      r218 = dyn par4("font.main");
      return r218;
    };
    r220 = dyn ____1(p49, p50);
    check L337() else D113();
  D73():
    deopt 308 [i42, i43, c51, ii2];
  D113():
    deopt 470 [i146, i147, r220];
  L67(i56, i57, c59):
    c63 = `as.logical`(c59);
    if c63 then L267() else L68();
  L261():
    ii3 = force? ii2;
    checkMissing(ii3);
    __8 = ldf `%%` in base;
    r157 = dyn __8(ii3, 2.0);
    check L262() else D74();
  L264():
    newX4 = ld newX;
    check L265() else D75();
  L337():
    st `font.main` = r220;
    jj12 = ld jj;
    check L338() else D114();
  D74():
    deopt 312 [i42, i43, c51, r157];
  D75():
    deopt 316 [i50, i51, c57, newX4];
  D114():
    deopt 472 [i146, i147, jj12];
  L68():
    goto L69(i56, i57);
  L69(i64, i65):
    ii4 = ld ii;
    check L271() else D78();
  L262():
    r158 = `==`(r157, 1.0);
    c54 = `as.logical`(r158);
    c55 = `&&`(c51, c54);
    goto L66(i42, i43, c55);
  L265():
    newX5 = force? newX4;
    checkMissing(newX5);
    r159 = `!`(newX5);
    c60 = `as.logical`(r159);
    c61 = `&&`(c57, c60);
    goto L67(i50, i51, c61);
  L267():
    lAxis = ldf lAxis;
    check L268() else D76();
  L338():
    jj13 = force? jj12;
    checkMissing(jj13);
    nC4 = ld nC;
    check L339() else D115();
  D76():
    deopt 321 [i56, i57];
  D78():
    deopt 327 [i64, i65, ii4];
  D115():
    deopt 473 [i146, i147, jj13, nC4];
  L268():
    ddd4 = ld `...`;
    r160 = dyn lAxis[, `...`](2.0, ddd4);
    check L269() else D77();
  L271():
    ii5 = force? ii4;
    checkMissing(ii5);
    r162 = `==`(ii5, 1.0);
    c64 = `as.logical`(r162);
    if c64 then L272() else L70(i64, i65, c64);
  L339():
    nC5 = force? nC4;
    checkMissing(nC5);
    r221 = `==`(jj13, nC5);
    c136 = `as.logical`(r221);
    if c136 then L340() else L92(i146, i147, c136);
  D77():
    deopt 324 [i56, i57, r160];
  L70(i68, i69, c66):
    c70 = `as.logical`(c66);
    if c70 then L276() else L71();
  L92(i162, i163, c138):
    c142 = `as.logical`(c138);
    if c142 then L93(i162, i163, c142) else L344();
  L269():
    goto L69(i56, i57);
  L272():
    jj6 = ld jj;
    check L273() else D79();
  L340():
    ii10 = ld ii;
    check L341() else D116();
  D79():
    deopt 332 [i64, i65, c64, jj6];
  D116():
    deopt 476 [i146, i147, c136, ii10];
  L71():
    goto L72(i68, i69);
  L72(i76, i77):
    ii6 = ld ii;
    check L280() else D83();
  L93(i166, i167, c143):
    c153 = `as.logical`(c143);
    if c153 then L352() else L95();
  L273():
    jj7 = force? jj6;
    checkMissing(jj7);
    __9 = ldf `%%` in base;
    r163 = dyn __9(jj7, 2.0);
    check L274() else D80();
  L276():
    lAxis1 = ldf lAxis;
    check L277() else D81();
  L341():
    ii11 = force? ii10;
    checkMissing(ii11);
    nR4 = ld nR;
    check L342() else D117();
  L344():
    ll14 = ld ll;
    check L345() else D118();
  D80():
    deopt 336 [i64, i65, c64, r163];
  D81():
    deopt 341 [i68, i69];
  D83():
    deopt 348 [i76, i77, ii6];
  D117():
    deopt 477 [i146, i147, c136, ii11, nR4];
  D118():
    deopt 481 [i162, i163, c142, ll14];
  L95():
    goto L96(i166, i167, NULL);
  L96(i184, i185, r229):
    goto L97(i184, i185);
  L274():
    r164 = `==`(r163, 1.0);
    c67 = `as.logical`(r164);
    c68 = `&&`(c64, c67);
    goto L70(i64, i65, c68);
  L277():
    ddd5 = ld `...`;
    r165 = dyn lAxis1[, `...`](3.0, ddd5);
    check L278() else D82();
  L280():
    ii7 = force? ii6;
    checkMissing(ii7);
    __10 = ldf `%%` in base;
    r167 = dyn __10(ii7, 2.0);
    check L281() else D84();
  L342():
    nR5 = force? nR4;
    checkMissing(nR5);
    r222 = `==`(ii11, nR5);
    c139 = `as.logical`(r222);
    c140 = `&&`(c136, c139);
    goto L92(i146, i147, c140);
  L345():
    ll15 = force? ll14;
    checkMissing(ll15);
    set_lags9 = ld `set.lags`;
    check L346() else D119();
  L352():
    mtext = ldf mtext;
    check L353() else D121();
  D82():
    deopt 344 [i68, i69, r165];
  D84():
    deopt 352 [i76, i77, r167];
  D119():
    deopt 482 [i162, i163, c142, ll15, set_lags9];
  D121():
    deopt 490 [i166, i167];
  L278():
    goto L72(i68, i69);
  L281():
    r168 = `==`(r167, 0.0);
    c71 = `as.logical`(r168);
    if c71 then L282() else L73(i76, i77, c71);
  L346():
    set_lags10 = force? set_lags9;
    checkMissing(set_lags10);
    c145 = `is.object`(set_lags10);
    if c145 then L347() else L348(i162, i163, c142, ll15, set_lags10);
  L353():
    p51 = prom<V +>{
      main7 = ld main;
      main8 = force? main7;
      checkMissing(main8);
      return main8;
    };
    p52 = prom<V +>{
      cex_main2 = ld `cex.main`;
      cex_main3 = force? cex_main2;
      checkMissing(cex_main3);
      return cex_main3;
    };
    p53 = prom<V +>{
      font_main = ld `font.main`;
      font_main1 = force? font_main;
      checkMissing(font_main1);
      return font_main1;
    };
    r228 = dyn mtext[, , , outer, at, cex, font](p51, 3.0, 3.0, TRUE, 0.5, p52, p53);
    check L354() else D122();
  D122():
    deopt 502 [i166, i167, r228];
  L73(i80, i81, c73):
    st `do.4` = c73;
    do_4 = ld `do.4`;
    check L298() else D92();
  L94(i176, i177, c149, ll19, dx24):
    r224 = `==`(ll19, dx24);
    c150 = `as.logical`(r224);
    c151 = `||`(c149, c150);
    goto L93(i176, i177, c151);
  L282():
    jj8 = ld jj;
    check L283() else D85();
  L347():
    dr20 = tryDispatchBuiltin.1("[", set_lags10);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L349() else L348(i162, i163, c142, ll15, dr20);
  L348(i172, i173, c147, ll17, set_lags12):
    lags7 = ld lags;
    check L350() else D120();
  L354():
    goto L96(i166, i167, r228);
  D85():
    deopt 355 [i76, i77, c71, jj8];
  D92():
    deopt 374 [i80, i81, do_4];
  D120():
    deopt 484 [i172, i173, c147, ll17, set_lags12, lags7];
  L283():
    jj9 = force? jj8;
    checkMissing(jj9);
    nC2 = ld nC;
    check L284() else D86();
  L298():
    do_5 = force? do_4;
    checkMissing(do_5);
    c111 = `as.logical`(do_5);
    if c111 then L299() else L77();
  L349():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L94(i162, i163, c142, ll15, dx23);
  L350():
    lags8 = force? lags7;
    __13 = ldf `[` in base;
    r223 = dyn __13(set_lags12, lags8);
    goto L94(i172, i173, c147, ll17, r223);
  D86():
    deopt 356 [i76, i77, c71, jj9, nC2];
  L77():
    goto L78(i80, i81);
  L78(i110, i111):
    jj10 = ld jj;
    check L303() else D95();
  L284():
    nC3 = force? nC2;
    checkMissing(nC3);
    r169 = `==`(jj9, nC3);
    c74 = `as.logical`(r169);
    if c74 then L74(i76, i77, c71, c74) else L285();
  L299():
    lAxis2 = ldf lAxis;
    check L300() else D93();
  D93():
    deopt 377 [i80, i81];
  D95():
    deopt 384 [i110, i111, jj10];
  L74(i82, i83, c75, c76):
    c108 = `as.logical`(c76);
    c109 = `&&`(c75, c108);
    goto L73(i82, i83, c109);
  L285():
    i86 = ld i;
    check L286() else D87();
  L300():
    ddd6 = ld `...`;
    r173 = dyn lAxis2[, `...`](4.0, ddd6);
    check L301() else D94();
  L303():
    jj11 = force? jj10;
    checkMissing(jj11);
    __12 = ldf `%%` in base;
    r175 = dyn __12(jj11, 2.0);
    check L304() else D96();
  D87():
    deopt 359 [i76, i77, c71, c74, i86];
  D94():
    deopt 380 [i80, i81, r173];
  D96():
    deopt 388 [i110, i111, r175];
  L286():
    i87 = force? i86;
    checkMissing(i87);
    nser4 = ld nser;
    check L287() else D88();
  L301():
    goto L78(i80, i81);
  L304():
    r176 = `==`(r175, 0.0);
    c112 = `as.logical`(r176);
    if c112 then L305() else L79(i110, i111, c112);
  D88():
    deopt 360 [i76, i77, c71, c74, i87, nser4];
  L79(i114, i115, c114):
    c118 = `as.logical`(c114);
    if c118 then L309() else L80();
  L287():
    nser5 = force? nser4;
    checkMissing(nser5);
    r170 = `==`(i87, nser5);
    c79 = `as.logical`(r170);
    if c79 then L288() else L75(i76, i77, c71, c74, c79);
  L305():
    ii8 = ld ii;
    check L306() else D97();
  D97():
    deopt 391 [i110, i111, c112, ii8];
  L75(i90, i91, c83, c84, c85):
    c104 = `as.logical`(c85);
    c105 = `||`(c84, c104);
    goto L74(i90, i91, c83, c105);
  L80():
    goto L81(i114, i115);
  L81(i122, i123):
    newX6 = ld newX;
    check L313() else D101();
  L288():
    ll4 = ld ll;
    check L289() else D89();
  L306():
    ii9 = force? ii8;
    checkMissing(ii9);
    nR2 = ld nR;
    check L307() else D98();
  L309():
    lAxis3 = ldf lAxis;
    check L310() else D99();
  D89():
    deopt 363 [i76, i77, c71, c74, c79, ll4];
  D98():
    deopt 392 [i110, i111, c112, ii9, nR2];
  D99():
    deopt 397 [i114, i115];
  D101():
    deopt 403 [i122, i123, newX6];
  L289():
    ll5 = force? ll4;
    checkMissing(ll5);
    set_lags5 = ld `set.lags`;
    check L290() else D90();
  L307():
    nR3 = force? nR2;
    checkMissing(nR3);
    r177 = `==`(ii9, nR3);
    c115 = `as.logical`(r177);
    c116 = `&&`(c112, c115);
    goto L79(i110, i111, c116);
  L310():
    ddd7 = ld `...`;
    r178 = dyn lAxis3[, `...`](1.0, ddd7);
    check L311() else D100();
  L313():
    newX7 = force? newX6;
    checkMissing(newX7);
    c119 = `as.logical`(newX7);
    if c119 then L314() else L82();
  D90():
    deopt 364 [i76, i77, c71, c74, c79, ll5, set_lags5];
  D100():
    deopt 400 [i114, i115, r178];
  L82():
    goto L85(i122, i123, NULL);
  L85(i134, i135, r187):
    goto L86(i134, i135);
  L290():
    set_lags6 = force? set_lags5;
    checkMissing(set_lags6);
    c86 = `is.object`(set_lags6);
    if c86 then L291() else L292(i76, i77, c71, c74, c79, ll5, set_lags6);
  L311():
    goto L81(i114, i115);
  L314():
    st newX = FALSE;
    do_6 = ld `do.4`;
    check L315() else D102();
  D102():
    deopt 408 [i122, i123, do_6];
  L76(i98, i99, c96, c97, c98, ll9, dx20):
    r172 = `==`(ll9, dx20);
    c99 = `as.logical`(r172);
    c100 = `&&`(c98, c99);
    goto L75(i98, i99, c96, c97, c100);
  L291():
    dr16 = tryDispatchBuiltin.1("[", set_lags6);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L293() else L292(i76, i77, c71, c74, c79, ll5, dr16);
  L292(i94, i95, c90, c91, c92, ll7, set_lags8):
    lags5 = ld lags;
    check L294() else D91();
  L315():
    do_7 = force? do_6;
    checkMissing(do_7);
    r180 = `!`(do_7);
    c120 = `as.logical`(r180);
    if c120 then L316() else L83();
  D91():
    deopt 366 [i94, i95, c90, c91, c92, ll7, set_lags8, lags5];
  L83():
    goto L84(i122, i123, NULL);
  L84(i132, i133, r186):
    goto L85(i132, i133, r186);
  L293():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L76(i76, i77, c71, c74, c79, ll5, dx19);
  L294():
    lags6 = force? lags5;
    __11 = ldf `[` in base;
    r171 = dyn __11(set_lags8, lags6);
    goto L76(i94, i95, c90, c91, c92, ll7, r171);
  L316():
    lAxis4 = ldf lAxis;
    check L317() else D103();
  D103():
    deopt 412 [i122, i123];
  L317():
    p32 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r182):
      return r182;
    L1():
      c121 = ldf c in base;
      r183 = dyn c121(0.0, 0.6, 0.0);
      goto L0(r183);
    L2():
      r181 = dyn base22(0.0, 0.6, 0.0);
      goto L0(r181);
    };
    ddd8 = ld `...`;
    r185 = dyn lAxis4[, Mgp, `...`](4.0, p32, ddd8);
    check L318() else D104();
  D104():
    deopt 417 [i122, i123, r185];
  L318():
    goto L84(i122, i123, r185);
  }
}
fun inner1205718407(side, `...`, mgp, xpd, panel, Mgp) {
  (reg side:*, reg ddd:dots, reg mgp:*, reg xpd:*, reg panel:*, reg Mgp:*) -+> V { var side:*, var `...`:dots?, var mgp:*, var xpd:*, var panel:*, var Mgp:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg axis:cls, reg side1:*, reg side2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg axis1:cls, reg side3:*, reg side4:V, reg p1:p(V +), reg ddd2:dots?, reg Mgp1:*, reg Mgp2:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st side = side;
    st `...` = ddd;
    st mgp = mgp;
    st xpd = xpd;
    st panel = panel;
    st Mgp = Mgp;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L4() else L1();
  L2():
    missing = ldf missing in base;
    r2 = dyn missing(<sym Mgp>);
    goto L0(r2);
  L3():
    r = dyn base(<sym Mgp>);
    goto L0(r);
  L1():
    axis1 = ldf axis;
    check L8() else D2();
  L4():
    axis = ldf axis;
    check L5() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 11 [];
  L5():
    p = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    ddd1 = ld `...`;
    r4 = dyn axis[, `...`, xpd](p, ddd1, NA_LGL);
    check L6() else D1();
  L8():
    p1 = prom<V +>{
      side3 = ld side;
      side4 = force? side3;
      checkMissing(side4);
      return side4;
    };
    ddd2 = ld `...`;
    p2 = prom<V +>{
      Mgp1 = ld Mgp;
      Mgp2 = force? Mgp1;
      checkMissing(Mgp2);
      return Mgp2;
    };
    r7 = dyn axis1[, `...`, xpd, mgp](p1, ddd2, NA_LGL, p2);
    check L9() else D3();
  D1():
    deopt 9 [r4];
  D3():
    deopt 18 [r7];
  L6():
    popenv;
    return r4;
  L9():
    popenv;
    return r7;
  }
}