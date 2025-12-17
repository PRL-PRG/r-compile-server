fun main() {
  () -+> V { reg r:cls, reg coplot:cls, reg __:cls, reg r1:V, reg p:p(V +), reg quakes:*, reg quakes1:V, reg p1:p(V +), reg r4:V, reg co_intervals:cls, reg quakes2:*, reg quakes3:V, reg c:L, reg quakes5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p2:p(V +), reg r7:V, reg coplot1:cls, reg __1:cls, reg r8:V, reg p3:p(V +), reg quakes6:*, reg quakes7:V, reg p4:p(V +), reg given_depth:*, reg given_depth1:V, reg p5:p(V +), reg r12:V, reg __2:cls, reg r13:V, reg coplot2:cls, reg ll_dm:*, reg ll_dm1:V, reg p6:p(V +), reg quakes8:*, reg quakes9:V, reg p7:p(V +), reg r16:V, reg coplot3:cls, reg ll_dm2:*, reg ll_dm3:V, reg p8:p(V +), reg quakes10:*, reg quakes11:V, reg p9:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg r20:V, reg c1:cls, reg r21:V, reg p10:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg c2:cls, reg r25:V, reg p11:p(V +), reg r27:V, reg coplot4:cls, reg ll_dm4:*, reg ll_dm5:V, reg p12:p(V +), reg quakes12:*, reg quakes13:V, reg p13:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg c3:cls, reg r32:V, reg p14:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg c4:cls, reg r36:V, reg p15:p(V +), reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg nrow:cls, reg warpbreaks:*, reg warpbreaks1:V, reg p16:p(V +), reg r42:V, reg r43:I, reg coplot5:cls, reg __3:cls, reg r44:V, reg p17:p(V +), reg warpbreaks2:*, reg warpbreaks3:V, reg p18:p(V +), reg p19:p(V +), reg r48:V, reg coplot6:cls, reg __4:cls, reg r49:V, reg p20:p(V +), reg warpbreaks4:*, reg warpbreaks5:V, reg p21:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg c5:cls, reg r54:V, reg p22:p(V +), reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg with:cls, reg data_frame:cls, reg state_x77:*, reg state_x78:V, reg p23:p(V +), reg r60:V, reg p24:p(V +), reg coplot7:cls, reg __5:cls, reg r62:V, reg p25:p(V +), reg r64:cls, reg p26:p(V +), reg coplot8:cls, reg __6:cls, reg r67:V, reg p27:p(V +), reg panel_smooth:*, reg panel_smooth1:V, reg p28:p(V +), reg r70:V, reg p29:p(V +), reg r72:V |
    mkenv;
    r = clos inner1082261152;
    st coplot = r;
    coplot = ldf coplot;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym lat>, <lang `|`(long, depth)>);
      return r1;
    };
    p1 = prom<V +>{
      quakes = ld quakes;
      quakes1 = force? quakes;
      checkMissing(quakes1);
      return quakes1;
    };
    r4 = dyn coplot[, data](p, p1);
    check L3() else D1();
  D1():
    deopt 8 [r4];
  L3():
    co_intervals = ldf `co.intervals`;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p2 = prom<V +>{
      quakes2 = ld quakes;
      quakes3 = force? quakes2;
      checkMissing(quakes3);
      c = `is.object`(quakes3);
      if c then L1() else L2(quakes3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", quakes3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(quakes5):
      r5 = `$`(quakes5, <sym depth>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn co_intervals[, number, overlap](p2, 4.0, 0.1);
    check L5() else D3();
  D3():
    deopt 16 [r7];
  L5():
    st `given.depth` = r7;
    coplot1 = ldf coplot;
    check L6() else D4();
  D4():
    deopt 19 [];
  L6():
    p3 = prom<V +>{
      __1 = ldf `~` in base;
      r8 = dyn __1(<sym lat>, <lang `|`(long, depth)>);
      return r8;
    };
    p4 = prom<V +>{
      quakes6 = ld quakes;
      quakes7 = force? quakes6;
      checkMissing(quakes7);
      return quakes7;
    };
    p5 = prom<V +>{
      given_depth = ld `given.depth`;
      given_depth1 = force? given_depth;
      checkMissing(given_depth1);
      return given_depth1;
    };
    r12 = dyn coplot1[, data, `given.values`, rows](p3, p4, p5, 1.0);
    check L7() else D5();
  D5():
    deopt 27 [r12];
  L7():
    __2 = ldf `~` in base;
    r13 = dyn __2(<sym lat>, <lang `|`(long, `*`(depth, mag))>);
    st `ll.dm` = r13;
    coplot2 = ldf coplot;
    check L8() else D6();
  D6():
    deopt 32 [];
  L8():
    p6 = prom<V +>{
      ll_dm = ld `ll.dm`;
      ll_dm1 = force? ll_dm;
      checkMissing(ll_dm1);
      return ll_dm1;
    };
    p7 = prom<V +>{
      quakes8 = ld quakes;
      quakes9 = force? quakes8;
      checkMissing(quakes9);
      return quakes9;
    };
    r16 = dyn coplot2[, data](p6, p7);
    check L9() else D7();
  D7():
    deopt 36 [r16];
  L9():
    coplot3 = ldf coplot;
    check L10() else D8();
  D8():
    deopt 38 [];
  L10():
    p8 = prom<V +>{
      ll_dm2 = ld `ll.dm`;
      ll_dm3 = force? ll_dm2;
      checkMissing(ll_dm3);
      return ll_dm3;
    };
    p9 = prom<V +>{
      quakes10 = ld quakes;
      quakes11 = force? quakes10;
      checkMissing(quakes11);
      return quakes11;
    };
    p10 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c1 = ldf c in base;
      r21 = dyn c1(4.0, 7.0);
      goto L0(r21);
    L2():
      r19 = dyn base(4.0, 7.0);
      goto L0(r19);
    };
    p11 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      c2 = ldf c in base;
      r25 = dyn c2(TRUE, FALSE);
      goto L0(r25);
    L2():
      r23 = dyn base1(TRUE, FALSE);
      goto L0(r23);
    };
    r27 = dyn coplot3[, data, number, `show.given`](p8, p9, p10, p11);
    check L11() else D9();
  D9():
    deopt 46 [r27];
  L11():
    coplot4 = ldf coplot;
    check L12() else D10();
  D10():
    deopt 48 [];
  L12():
    p12 = prom<V +>{
      ll_dm4 = ld `ll.dm`;
      ll_dm5 = force? ll_dm4;
      checkMissing(ll_dm5);
      return ll_dm5;
    };
    p13 = prom<V +>{
      quakes12 = ld quakes;
      quakes13 = force? quakes12;
      checkMissing(quakes13);
      return quakes13;
    };
    p14 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c3 = ldf c in base;
      r32 = dyn c3(3.0, 7.0);
      goto L0(r32);
    L2():
      r30 = dyn base2(3.0, 7.0);
      goto L0(r30);
    };
    p15 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c4 = ldf c in base;
      r36 = dyn c4(-0.5, 0.1);
      goto L0(r36);
    L2():
      r34 = dyn base3(<lang `-`(0.5)>, 0.1);
      goto L0(r34);
    };
    r38 = dyn coplot4[, data, number, overlap](p12, p13, p14, p15);
    check L13() else D11();
  D11():
    deopt 56 [r38];
  L13():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L14() else L15();
  L0(r40):
    st Index = r40;
    coplot5 = ldf coplot;
    check L18() else D14();
  L14():
    nrow = ldf nrow;
    check L16() else D12();
  L15():
    r39 = dyn base4(<lang nrow(warpbreaks)>);
    goto L0(r39);
  D12():
    deopt 59 [];
  D14():
    deopt 65 [];
  L16():
    p16 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    r42 = dyn nrow(p16);
    check L17() else D13();
  L18():
    p17 = prom<V +>{
      __3 = ldf `~` in base;
      r44 = dyn __3(<sym breaks>, <lang `|`(Index, `*`(wool, tension))>);
      return r44;
    };
    p18 = prom<V +>{
      warpbreaks2 = ld warpbreaks;
      warpbreaks3 = force? warpbreaks2;
      checkMissing(warpbreaks3);
      return warpbreaks3;
    };
    p19 = prom<V +>{
      return <int 0, 1>;
    };
    r48 = dyn coplot5[, data, `show.given`](p17, p18, p19);
    check L19() else D15();
  D13():
    deopt 61 [r42];
  D15():
    deopt 71 [r48];
  L17():
    r43 = seq_len(r42);
    goto L0(r43);
  L19():
    coplot6 = ldf coplot;
    check L20() else D16();
  D16():
    deopt 73 [];
  L20():
    p20 = prom<V +>{
      __4 = ldf `~` in base;
      r49 = dyn __4(<sym breaks>, <lang `|`(Index, `*`(wool, tension))>);
      return r49;
    };
    p21 = prom<V +>{
      warpbreaks4 = ld warpbreaks;
      warpbreaks5 = force? warpbreaks4;
      checkMissing(warpbreaks5);
      return warpbreaks5;
    };
    p22 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c5 = ldf c in base;
      r54 = dyn c5("light blue");
      goto L0(r54);
    L2():
      r52 = dyn base5[fac]("light blue");
      goto L0(r52);
    };
    r56 = dyn coplot6[, data, col, bg, pch, `bar.bg`](p20, p21, "red", "pink", 21.0, p22);
    check L21() else D17();
  D17():
    deopt 85 [r56];
  L21():
    sym6 = ldf with;
    base6 = ldf with in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L22() else L23();
  L1(r58):
    popenv;
    return r58;
  L22():
    with = ldf with;
    check L24() else D18();
  L23():
    r57 = dyn base6(<lang data.frame(state.x77)>, <lang {
      coplot(`~`(Life.Exp, `|`(Income, `*`(Illiteracy, state.region))), number=3.0, panel=function((x=, y=, ...=), panel.smooth(x, y, span=0.8, ...), NULL));
      coplot(`~`(Life.Exp, `|`(state.region, `*`(Income, state.division))), panel=panel.smooth)
    }>);
    goto L1(r57);
  D18():
    deopt 88 [];
  L24():
    p24 = prom<V +>{
      data_frame = ldf `data.frame`;
      p23 = prom<V +>{
        state_x77 = ld `state.x77`;
        state_x78 = force? state_x77;
        checkMissing(state_x78);
        return state_x78;
      };
      r60 = dyn data_frame(p23);
      return r60;
    };
    p29 = prom<V +>{
      coplot7 = ldf coplot;
      p25 = prom<V +>{
        __5 = ldf `~` in base;
        r62 = dyn __5(<sym Life.Exp>, <lang `|`(Income, `*`(Illiteracy, state.region))>);
        return r62;
      };
      p26 = prom<V +>{
        r64 = clos inner3924448841;
        return r64;
      };
      dyn coplot7[, number, panel](p25, 3.0, p26);
      coplot8 = ldf coplot;
      p27 = prom<V +>{
        __6 = ldf `~` in base;
        r67 = dyn __6(<sym Life.Exp>, <lang `|`(state.region, `*`(Income, state.division))>);
        return r67;
      };
      p28 = prom<V +>{
        panel_smooth = ld `panel.smooth`;
        panel_smooth1 = force? panel_smooth;
        checkMissing(panel_smooth1);
        return panel_smooth1;
      };
      r70 = dyn coplot8[, panel](p27, p28);
      return r70;
    };
    r72 = dyn with(p24, p29);
    check L25() else D19();
  D19():
    deopt 91 [r72];
  L25():
    goto L1(r72);
  }
}
fun inner1082261152(formula, data, `given.values`, panel, rows, columns, `show.given`, col, pch, `bar.bg`, xlab, ylab, subscripts, axlabels, number, overlap, xlim, ylim, `...`) {
  (reg formula:*, reg data:*, reg given_values:*, reg panel:*, reg rows:*, reg columns:*, reg show_given:*, reg col:*, reg pch:*, reg bar_bg:*, reg xlab:*, reg ylab:*, reg subscripts:*, reg axlabels:*, reg number:*, reg overlap:*, reg xlim:*, reg ylim:*, reg ddd:dots) -+> V { var formula:*, var data:*, var `given.values`:*, var panel:*, reg panel_isMissing:L, reg panel_orDefault:*, reg points:*, reg points1:V, reg p:p(V +), var rows:*, var columns:*, var `show.given`:*, reg show_given_isMissing:L, reg show_given_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r1:V, reg p1:p(V +), var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par1:cls, reg r3:V, reg p2:p(V +), var `bar.bg`:*, reg bar_bg_isMissing:L, reg bar_bg_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg gray:cls, reg r7:V, reg gray1:cls, reg r8:V, reg c:cls, reg r9:V, reg p3:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x_name:*, reg x_name1:V, reg paste:cls, reg a_name:*, reg a_name1:V, reg p4:p(V +), reg r14:V, reg c1:cls, reg r15:V, reg p5:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg y_name:*, reg y_name1:V, reg paste1:cls, reg b_name:*, reg b_name1:V, reg p6:p(V +), reg r20:V, reg c2:cls, reg r21:V, reg p7:p(V +), var subscripts:*, reg subscripts_isMissing:L, reg subscripts_orDefault:*, var axlabels:*, reg axlabels_isMissing:L, reg axlabels_orDefault:*, reg r23:cls, reg p8:p(V +), var number:*, reg number_isMissing:L, reg number_orDefault:*, var overlap:*, reg overlap_isMissing:L, reg overlap_orDefault:*, var xlim:*, var ylim:*, var `...`:dots?, reg r25:cls, reg r26:cls, reg r27:cls, reg r28:cls, reg deparen:cls, reg formula1:*, reg formula2:V, reg p9:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg formula3:*, reg formula4:V, reg inherits:cls, reg r33:V, reg r34:V, reg c3:L, reg bad_formula:cls, reg r35:V, reg deparen1:cls, reg formula5:*, reg formula6:V, reg c4:L, reg formula8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r37:V, reg p10:p(V +), reg r39:V, reg deparen2:cls, reg formula9:*, reg formula10:V, reg c5:L, reg formula12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r40:V, reg p11:p(V +), reg r42:V, reg getOp:cls, reg rhs:*, reg rhs1:V, reg p12:p(V +), reg r44:V, reg r45:V, reg c6:L, reg bad_formula1:cls, reg r46:V, reg deparen3:cls, reg rhs2:*, reg rhs3:V, reg c7:L, reg rhs5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r48:V, reg p13:p(V +), reg r50:V, reg deparen4:cls, reg rhs6:*, reg rhs7:V, reg c8:L, reg rhs9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r51:V, reg p14:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg rhs10:*, reg rhs11:V, reg is_language:cls, reg r56:V, reg c9:L, reg c11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg c14:L, reg r58:V, reg rhs12:*, reg rhs13:V, reg c15:L, reg r59:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg _in_:cls, reg getOp1:cls, reg rhs14:*, reg rhs15:V, reg p15:p(V +), reg r61:V, reg p16:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg c22:cls, reg r65:V, reg p17:p(V +), reg r67:V, reg c23:L, reg c24:V, reg c26:L, reg deparen5:cls, reg rhs16:*, reg rhs17:V, reg c27:L, reg rhs19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r68:V, reg p18:p(V +), reg r70:V, reg deparen6:cls, reg rhs20:*, reg rhs21:V, reg c28:L, reg rhs23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r71:V, reg p19:p(V +), reg r73:V, reg rhs24:*, reg rhs25:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg missing:cls, reg r77:V, reg c29:L, reg parent_frame:cls, reg r78:V, reg deparse:cls, reg x:*, reg x1:V, reg p20:p(V +), reg r81:V, reg eval:cls, reg x2:*, reg x3:V, reg p21:p(V +), reg data1:*, reg data2:V, reg p22:p(V +), reg parent_frame1:cls, reg r84:V, reg p23:p(V +), reg r86:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r87:V, reg r88:V, reg x4:*, reg x5:V, reg length:cls, reg r89:V, reg deparse1:cls, reg y:*, reg y1:V, reg p24:p(V +), reg r91:V, reg eval1:cls, reg y2:*, reg y3:V, reg p25:p(V +), reg data3:*, reg data4:V, reg p26:p(V +), reg parent_frame2:cls, reg r94:V, reg p27:p(V +), reg r96:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r97:V, reg r98:V, reg y4:*, reg y5:V, reg length1:cls, reg r99:V, reg nobs:*, reg nobs1:V, reg r100:V, reg c30:L, reg bad_lengths:cls, reg r101:V, reg deparse2:cls, reg a:*, reg a1:V, reg p28:p(V +), reg r104:V, reg eval2:cls, reg a2:*, reg a3:V, reg p29:p(V +), reg data5:*, reg data6:V, reg p30:p(V +), reg parent_frame3:cls, reg r107:V, reg p31:p(V +), reg r109:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r110:V, reg r111:V, reg a4:*, reg a5:V, reg length2:cls, reg r112:V, reg nobs2:*, reg nobs3:V, reg r113:V, reg c31:L, reg bad_lengths1:cls, reg r114:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r116:V, reg r117:V, reg a6:*, reg a7:V, reg c32:L, reg c33:L, reg as_factor:cls, reg a8:*, reg a9:V, reg p32:p(V +), reg r119:V, reg is_factor:cls, reg a10:*, reg a11:V, reg p33:p(V +), reg r122:V, reg have_b:*, reg have_b1:V, reg c34:L, reg deparse3:cls, reg b:*, reg b1:V, reg p34:p(V +), reg r124:V, reg eval3:cls, reg b2:*, reg b3:V, reg p35:p(V +), reg data7:*, reg data8:V, reg p36:p(V +), reg parent_frame4:cls, reg r127:V, reg p37:p(V +), reg r129:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r130:V, reg r131:V, reg b4:*, reg b5:V, reg length3:cls, reg r132:V, reg nobs4:*, reg nobs5:V, reg r133:V, reg c35:L, reg bad_lengths2:cls, reg r134:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r136:V, reg r137:V, reg b6:*, reg b7:V, reg c36:L, reg c37:L, reg as_factor1:cls, reg b8:*, reg b9:V, reg p38:p(V +), reg r139:V, reg is_factor1:cls, reg b10:*, reg b11:V, reg p39:p(V +), reg r142:V, reg which:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r143:V, reg r144:V, reg x6:*, reg x7:V, reg is_na:cls, reg r145:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r148:V, reg r149:V, reg r150:V, reg y6:*, reg y7:V, reg is_na1:cls, reg r151:V, reg r152:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r155:V, reg r156:V, reg r157:V, reg a12:*, reg a13:V, reg is_na2:cls, reg r158:V, reg r159:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r162:V, reg r163:V, reg r164:V, reg b12:*, reg b13:V, reg is_na3:cls, reg r165:V, reg r166:V, reg p40:p(V +), reg r168:V, reg which1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r170:V, reg r171:V, reg x8:*, reg x9:V, reg is_na4:cls, reg r172:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r175:V, reg r176:V, reg r177:V, reg y8:*, reg y9:V, reg is_na5:cls, reg r178:V, reg r179:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r182:V, reg r183:V, reg r184:V, reg a14:*, reg a15:V, reg is_na6:cls, reg r185:V, reg r186:V, reg p41:p(V +), reg r188:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r189:V, reg r190:V, reg number1:*, reg number2:V, reg as_integer:cls, reg r191:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r192:V, reg r193:V, reg number3:*, reg number4:V, reg length4:cls, reg r194:V, reg r195:V, reg c38:L, reg c39:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r196:V, reg c43:L, reg r197:V, reg number5:*, reg number6:V, reg r198:V, reg any:cls, reg r199:V, reg c44:L, reg c45:V, reg c47:L, reg stop:cls, reg r200:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r202:V, reg r203:V, reg overlap1:*, reg overlap2:V, reg r204:V, reg any1:cls, reg r205:V, reg c48:L, reg stop1:cls, reg r206:V, reg r208:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r209:V, reg r210:V, reg missing1:cls, reg r211:V, reg c49:L, reg a_is_fac:*, reg a_is_fac1:V, reg c50:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r212:V, reg r213:V, reg levels:cls, reg a16:*, reg a17:V, reg p42:p(V +), reg r215:V, reg r216:I, reg sym27:cls, reg base27:cls, reg guard27:L, reg r217:V, reg r218:V, reg a18:*, reg a19:V, reg as_numeric:cls, reg r219:V, reg cbind:cls, reg i:*, reg i1:V, reg r220:V, reg p43:p(V +), reg i2:*, reg i3:V, reg r222:V, reg p44:p(V +), reg r224:V, reg r225:V, reg co_intervals:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r226:V, reg r227:V, reg a20:*, reg a21:V, reg unclass:cls, reg r228:V, reg p45:p(V +), reg number7:*, reg number8:V, reg c51:L, reg number10:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r230:V, reg p46:p(V +), reg overlap3:*, reg overlap4:V, reg c52:L, reg overlap6:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r232:V, reg p47:p(V +), reg r234:V, reg have_b2:*, reg have_b3:V, reg c53:L, reg b_is_fac:*, reg b_is_fac1:V, reg c54:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r235:V, reg r236:V, reg levels1:cls, reg b14:*, reg b15:V, reg p48:p(V +), reg r238:V, reg r239:I, reg sym30:cls, reg base30:cls, reg guard30:L, reg r240:V, reg r241:V, reg b16:*, reg b17:V, reg as_numeric1:cls, reg r242:V, reg cbind1:cls, reg i4:*, reg i5:V, reg r243:V, reg p49:p(V +), reg i6:*, reg i7:V, reg r245:V, reg p50:p(V +), reg r247:V, reg r248:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r249:V, reg r250:V, reg number11:*, reg number12:V, reg length5:cls, reg r251:V, reg r252:V, reg c55:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r253:V, reg r254:V, reg number13:*, reg number14:V, reg rep_int:cls, reg r255:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r257:V, reg r258:V, reg overlap7:*, reg overlap8:V, reg length6:cls, reg r259:V, reg r260:V, reg c56:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r261:V, reg r262:V, reg overlap9:*, reg overlap10:V, reg rep_int1:cls, reg r263:V, reg co_intervals1:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r265:V, reg r266:V, reg b18:*, reg b19:V, reg unclass1:cls, reg r267:V, reg p51:p(V +), reg number15:*, reg number16:V, reg c57:L, reg number18:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r269:V, reg p52:p(V +), reg overlap11:*, reg overlap12:V, reg c58:L, reg overlap14:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __9:cls, reg r271:V, reg p53:p(V +), reg r273:V, reg r274:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r276:V, reg r277:V, reg given_values1:*, reg given_values2:V, reg is_list:cls, reg r278:V, reg r279:V, reg c59:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r280:V, reg r281:V, reg given_values3:*, reg given_values4:V, reg list:cls, reg r282:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r284:V, reg r285:V, reg given_values5:*, reg given_values6:V, reg length7:cls, reg r286:V, reg have_b4:*, reg have_b5:V, reg c60:L, reg r289:V, reg r290:I, reg r291:V, reg c61:L, reg bad_givens:cls, reg r292:V, reg given_values7:*, reg given_values8:V, reg c62:L, reg given_values10:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __10:cls, reg r294:V, reg a_is_fac2:*, reg a_is_fac3:V, reg c63:L, reg levels2:cls, reg a22:*, reg a23:V, reg p54:p(V +), reg r296:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r297:V, reg r298:V, reg a_intervals:*, reg a_intervals1:V, reg c64:L, reg c65:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r299:V, reg r300:V, reg a_intervals2:*, reg a_intervals3:V, reg a_levels:*, reg a_levels1:V, reg match:cls, reg r301:V, reg cbind2:cls, reg a_intervals4:*, reg a_intervals5:V, reg r303:V, reg p55:p(V +), reg a_intervals6:*, reg a_intervals7:V, reg r305:V, reg p56:p(V +), reg r307:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r308:V, reg r309:V, reg a24:*, reg a25:V, reg as_numeric2:cls, reg r310:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r312:V, reg r313:V, reg a26:*, reg a27:V, reg is_numeric:cls, reg r314:V, reg c66:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r315:V, reg r316:V, reg a_intervals8:*, reg a_intervals9:V, reg is_numeric1:cls, reg r317:V, reg r318:V, reg c67:L, reg bad_givens1:cls, reg r319:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r321:V, reg r322:V, reg a_intervals10:*, reg a_intervals11:V, reg is_matrix:cls, reg r323:V, reg r324:V, reg c68:L, reg c69:V, reg ncol:cls, reg a_intervals12:*, reg a_intervals13:V, reg p57:p(V +), reg r326:V, reg r327:V, reg c71:L, reg c72:V, reg c74:L, reg cbind3:cls, reg a_intervals14:*, reg a_intervals15:V, reg r328:V, reg p58:p(V +), reg a_intervals16:*, reg a_intervals17:V, reg r330:V, reg p59:p(V +), reg r332:V, reg r333:V, reg have_b6:*, reg have_b7:V, reg c75:L, reg given_values11:*, reg given_values12:V, reg c76:L, reg given_values14:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __11:cls, reg r334:V, reg b_is_fac2:*, reg b_is_fac3:V, reg c77:L, reg levels3:cls, reg b20:*, reg b21:V, reg p60:p(V +), reg r336:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r337:V, reg r338:V, reg b_intervals:*, reg b_intervals1:V, reg c78:L, reg c79:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r339:V, reg r340:V, reg b_intervals2:*, reg b_intervals3:V, reg b_levels:*, reg b_levels1:V, reg match1:cls, reg r341:V, reg cbind4:cls, reg b_intervals4:*, reg b_intervals5:V, reg r343:V, reg p61:p(V +), reg b_intervals6:*, reg b_intervals7:V, reg r345:V, reg p62:p(V +), reg r347:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r348:V, reg r349:V, reg b22:*, reg b23:V, reg as_numeric3:cls, reg r350:V, reg r351:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r352:V, reg r353:V, reg b24:*, reg b25:V, reg is_numeric2:cls, reg r354:V, reg c80:L, reg sym49:cls, reg base49:cls, reg guard49:L, reg r355:V, reg r356:V, reg b_intervals8:*, reg b_intervals9:V, reg is_numeric3:cls, reg r357:V, reg r358:V, reg c81:L, reg bad_givens2:cls, reg r359:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r361:V, reg r362:V, reg b_intervals10:*, reg b_intervals11:V, reg is_matrix1:cls, reg r363:V, reg r364:V, reg c82:L, reg c83:V, reg ncol1:cls, reg b_intervals12:*, reg b_intervals13:V, reg p63:p(V +), reg r366:V, reg r367:V, reg c85:L, reg c86:V, reg c88:L, reg cbind5:cls, reg b_intervals14:*, reg b_intervals15:V, reg r368:V, reg p64:p(V +), reg b_intervals16:*, reg b_intervals17:V, reg r370:V, reg p65:p(V +), reg r372:V, reg r373:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r374:V, reg r375:V, reg a_intervals18:*, reg a_intervals19:V, reg anyNA:cls, reg r376:V, reg c89:L, reg c90:V, reg have_b8:*, reg have_b9:V, reg c92:L, reg c95:L, reg c96:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r377:V, reg c101:L, reg c102:L, reg r378:V, reg b_intervals18:*, reg b_intervals19:V, reg anyNA1:cls, reg r379:V, reg c103:L, reg c104:V, reg c107:L, reg c108:V, reg c110:L, reg bad_givens3:cls, reg r380:V, reg have_b10:*, reg have_b11:V, reg c111:L, reg nrow:cls, reg b_intervals20:*, reg b_intervals21:V, reg p66:p(V +), reg r383:V, reg nrow1:cls, reg a_intervals20:*, reg a_intervals21:V, reg p67:p(V +), reg r385:V, reg rows1:*, reg rows2:V, reg columns1:*, reg columns2:V, reg r386:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r387:V, reg r388:V, reg show_given1:*, reg show_given2:V, reg length8:cls, reg r389:V, reg r390:V, reg c112:L, reg sym54:cls, reg base54:cls, reg guard54:L, reg r391:V, reg r392:V, reg show_given3:*, reg show_given4:V, reg rep_int2:cls, reg r393:V, reg r394:V, reg nrow2:cls, reg a_intervals22:*, reg a_intervals23:V, reg p68:p(V +), reg r397:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r398:V, reg r399:V, reg missing2:cls, reg r400:V, reg c113:L, reg sym56:cls, reg base56:cls, reg guard56:L, reg r401:V, reg r402:V, reg missing3:cls, reg r403:V, reg c114:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r404:V, reg r405:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r406:V, reg r407:V, reg round:cls, reg r408:V, reg r409:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r410:V, reg r411:V, reg nplots:*, reg nplots1:V, reg rows3:*, reg rows4:V, reg r412:V, reg r413:V, reg r414:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r415:V, reg r416:V, reg nplots2:*, reg nplots3:V, reg columns3:*, reg columns4:V, reg r417:V, reg r418:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r420:V, reg r421:V, reg missing4:cls, reg r422:V, reg c115:L, reg sym62:cls, reg base62:cls, reg guard62:L, reg r423:V, reg r424:V, reg nplots4:*, reg nplots5:V, reg rows5:*, reg rows6:V, reg r425:V, reg r426:V, reg rows7:*, reg rows8:V, reg columns5:*, reg columns6:V, reg r427:V, reg nplots6:*, reg nplots7:V, reg r428:V, reg c116:L, reg stop2:cls, reg r429:V, reg columns7:*, reg columns8:V, reg rows9:*, reg rows10:V, reg show_given5:*, reg show_given6:V, reg c117:L, reg show_given8:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __12:cls, reg r430:V, reg c118:L, reg rows11:*, reg rows12:V, reg r431:V, reg rows13:*, reg rows14:V, reg total_rows:*, reg total_rows1:V, reg r432:V, reg have_b12:*, reg have_b13:V, reg c119:L, reg c121:V, reg show_given9:*, reg show_given10:V, reg c122:L, reg c124:L, reg show_given12:V, reg dr26:V, reg dc13:L, reg dx26:V, reg c126:L, reg dx27:V, reg __13:cls, reg r434:V, reg c127:L, reg c128:V, reg c130:L, reg columns9:*, reg columns10:V, reg r435:V, reg columns11:*, reg columns12:V, reg total_columns:*, reg total_columns1:V, reg r436:V, reg have_b14:*, reg have_b15:V, reg c131:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r438:V, reg r439:V, reg rep_int3:cls, reg r440:V, reg r441:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r442:V, reg c132:cls, reg r443:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r444:V, reg r445:V, reg c133:cls, reg r446:V, reg have_b16:*, reg have_b17:V, reg c134:L, reg l:*, reg c135:L, reg r448:R, reg l2:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg ___:cls, reg r451:V, reg b_is_fac4:*, reg b_is_fac5:V, reg r452:V, reg c136:L, reg l3:*, reg c137:L, reg r454:R, reg l5:*, reg dr30:V, reg dc15:L, reg dx30:V, reg r456:R, reg dx31:V, reg ___1:cls, reg r457:V, reg r458:V, reg a_is_fac4:*, reg a_is_fac5:V, reg c138:L, reg c140:V, reg show_given13:*, reg show_given14:V, reg c141:L, reg c143:L, reg show_given16:V, reg dr32:V, reg dc16:L, reg dx32:V, reg c145:L, reg dx33:V, reg __14:cls, reg r460:V, reg c146:L, reg c147:V, reg c149:L, reg oma:*, reg oma1:V, reg c150:L, reg oma3:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg __15:cls, reg r461:V, reg r462:V, reg l6:*, reg c151:L, reg r464:V, reg l8:*, reg dr36:V, reg dc18:L, reg dx36:V, reg r466:V, reg dx37:V, reg ___2:cls, reg r467:V, reg par2:cls, reg sym66:cls, reg base66:cls, reg guard66:L, reg r469:V, reg r470:V, reg total_rows2:*, reg total_rows3:V, reg total_columns2:*, reg total_columns3:V, reg c152:cls, reg r471:V, reg p69:p(V +), reg oma4:*, reg oma5:V, reg p70:p(V +), reg mar:*, reg mar1:V, reg p71:p(V +), reg r475:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r476:V, reg on_exit:cls, reg r478:V, reg dev_hold:cls, reg r479:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r480:V, reg on_exit1:cls, reg r482:V, reg plot_new:cls, reg r483:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r484:V, reg r485:V, reg missing5:cls, reg r486:V, reg c153:L, reg sym70:cls, reg base70:cls, reg guard70:L, reg r487:V, reg r488:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r489:V, reg r490:V, reg x10:*, reg x11:V, reg as_numeric4:cls, reg r491:V, reg range:cls, reg r492:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r494:V, reg r495:V, reg missing6:cls, reg r496:V, reg c154:L, reg sym73:cls, reg base73:cls, reg guard73:L, reg r497:V, reg r498:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r499:V, reg r500:V, reg y10:*, reg y11:V, reg as_numeric5:cls, reg r501:V, reg range1:cls, reg r502:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r504:V, reg r505:V, reg pch1:*, reg pch2:V, reg nobs6:*, reg nobs7:V, reg rep_len:cls, reg r506:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r507:V, reg r508:V, reg col1:*, reg col2:V, reg nobs8:*, reg nobs9:V, reg rep_len1:cls, reg r509:V, reg r510:cls, reg have_b18:*, reg have_b19:V, reg c155:L, reg rows15:*, reg rows16:V, reg r511:V, reg s:V, reg l9:I, reg i8:I, reg i9:I, reg i10:I, reg c156:L, reg x12:V, reg columns13:*, reg columns14:V, reg r512:V, reg s1:V, reg l10:I, reg i13:I, reg i14:I, reg i15:I, reg i16:I, reg c157:L, reg x13:V, reg a_intervals24:*, reg a_intervals25:V, reg c158:L, reg i23:I, reg i24:I, reg a_intervals27:V, reg dr38:V, reg dc19:L, reg dx38:V, reg i27:I, reg i28:I, reg dx39:V, reg j:*, reg j1:V, reg __16:cls, reg r513:V, reg a28:*, reg a29:V, reg r514:V, reg a30:*, reg a31:V, reg a_intervals28:*, reg a_intervals29:V, reg c159:L, reg i31:I, reg i32:I, reg r516:V, reg a33:V, reg a_intervals31:V, reg dr40:V, reg dc20:L, reg dx40:V, reg i35:I, reg i36:I, reg r518:V, reg a35:V, reg dx41:V, reg j2:*, reg j3:V, reg __17:cls, reg r519:V, reg r520:V, reg r521:V, reg b_intervals22:*, reg b_intervals23:V, reg c160:L, reg i39:I, reg i40:I, reg r523:V, reg b_intervals25:V, reg dr42:V, reg dc21:L, reg dx42:V, reg i43:I, reg i44:I, reg r525:V, reg dx43:V, reg i45:*, reg i46:V, reg __18:cls, reg r526:V, reg b26:*, reg b27:V, reg r527:V, reg r528:V, reg b28:*, reg b29:V, reg b_intervals26:*, reg b_intervals27:V, reg c161:L, reg i49:I, reg i50:I, reg r530:V, reg b31:V, reg b_intervals29:V, reg dr44:V, reg dc22:L, reg dx44:V, reg i53:I, reg i54:I, reg r532:V, reg b33:V, reg dx45:V, reg i55:*, reg i56:V, reg __19:cls, reg r533:V, reg r534:V, reg r535:V, reg do_panel:cls, reg count:*, reg count1:V, reg p72:p(V +), reg subscripts1:*, reg subscripts2:V, reg p73:p(V +), reg id:*, reg id1:V, reg p74:p(V +), reg r539:V, reg count2:*, reg count3:V, reg r540:V, reg nplots8:*, reg nplots9:V, reg r541:V, reg s2:V, reg l11:I, reg i58:I, reg i59:I, reg i60:I, reg c162:L, reg x14:V, reg a_intervals32:*, reg a_intervals33:V, reg c163:L, reg i64:I, reg a_intervals35:V, reg dr46:V, reg dc23:L, reg dx46:V, reg i66:I, reg dx47:V, reg i67:*, reg i68:V, reg __20:cls, reg r542:V, reg a36:*, reg a37:V, reg r543:V, reg a38:*, reg a39:V, reg a_intervals36:*, reg a_intervals37:V, reg c164:L, reg i70:I, reg r545:V, reg a41:V, reg a_intervals39:V, reg dr48:V, reg dc24:L, reg dx48:V, reg i72:I, reg r547:V, reg a43:V, reg dx49:V, reg i73:*, reg i74:V, reg __21:cls, reg r548:V, reg r549:V, reg r550:V, reg do_panel1:cls, reg i75:*, reg i76:V, reg p75:p(V +), reg subscripts3:*, reg subscripts4:V, reg p76:p(V +), reg id2:*, reg id3:V, reg p77:p(V +), reg r554:V, reg mtext:cls, reg xlab1:*, reg xlab2:V, reg c165:L, reg xlab4:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg __22:cls, reg r555:V, reg p78:p(V +), reg f_col:*, reg f_col1:V, reg r557:V, reg p79:p(V +), reg par3:cls, reg r559:V, reg p80:p(V +), reg par4:cls, reg r561:V, reg p81:p(V +), reg r563:V, reg mtext1:cls, reg ylab1:*, reg ylab2:V, reg c166:L, reg ylab4:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg __23:cls, reg r564:V, reg p82:p(V +), reg f_row:*, reg f_row1:V, reg r566:V, reg p83:p(V +), reg par5:cls, reg r568:V, reg p84:p(V +), reg par6:cls, reg r570:V, reg p85:p(V +), reg r572:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r573:V, reg r574:V, reg xlab5:*, reg xlab6:V, reg length9:cls, reg r575:V, reg r576:V, reg c167:L, reg sym78:cls, reg base78:cls, reg guard78:L, reg r577:V, reg r578:V, reg xlab7:*, reg xlab8:V, reg paste2:cls, reg a_name2:*, reg a_name3:V, reg p86:p(V +), reg r580:V, reg c168:cls, reg r581:V, reg show_given17:*, reg show_given18:V, reg c169:L, reg show_given20:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg __24:cls, reg r583:V, reg c170:L, reg par7:cls, reg sym79:cls, reg base79:cls, reg guard79:L, reg r584:V, reg r585:V, reg f_col2:*, reg f_col3:V, reg f_row2:*, reg f_row3:V, reg c171:cls, reg r586:V, reg p87:p(V +), reg mar2:*, reg mar3:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r588:V, reg mar6:V, reg r589:V, reg a_is_fac6:*, reg a_is_fac7:V, reg r590:V, reg r591:V, reg c172:cls, reg r592:V, reg r593:V, reg p88:p(V +), reg r595:V, reg plot_new1:cls, reg r596:V, reg nrow3:cls, reg a_intervals40:*, reg a_intervals41:V, reg p89:p(V +), reg r598:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r599:V, reg r600:V, reg a_intervals42:*, reg a_intervals43:V, reg range2:cls, reg r601:V, reg plot_window:cls, reg a_range:*, reg a_range1:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r602:V, reg a_range4:V, reg r603:V, reg c173:cls, reg r604:V, reg diff:cls, reg a_range5:*, reg a_range6:V, reg p90:p(V +), reg r606:V, reg r607:V, reg r608:V, reg p91:p(V +), reg sym83:cls, reg base83:cls, reg guard83:L, reg r612:V, reg r613:R, reg r614:V, reg nint:*, reg nint1:V, reg c174:cls, reg r615:V, reg r616:V, reg p92:p(V +), reg r618:V, reg rect:cls, reg a_intervals44:*, reg a_intervals45:V, reg c175:L, reg dr56:V, reg dc28:L, reg dx56:V, reg dx57:V, reg __25:cls, reg r619:V, reg p93:p(V +), reg nint2:*, reg nint3:V, reg r621:V, reg r622:V, reg p94:p(V +), reg a_intervals48:*, reg a_intervals49:V, reg c176:L, reg dr58:V, reg dc29:L, reg dx58:V, reg dx59:V, reg __26:cls, reg r624:V, reg p95:p(V +), reg nint4:*, reg nint5:V, reg r626:V, reg r627:V, reg p96:p(V +), reg bar_bg1:*, reg bar_bg2:V, reg c177:L, reg bar_bg4:V, reg dr60:V, reg dc30:L, reg dx60:V, reg dx61:V, reg a_is_fac8:*, reg a_is_fac9:V, reg c178:L, reg bar_bg7:V, reg r629:S, reg __27:cls, reg r630:V, reg p97:p(V +), reg r632:V, reg a_is_fac10:*, reg a_is_fac11:V, reg c179:L, reg text:cls, reg apply:cls, reg a_intervals52:*, reg a_intervals53:V, reg p98:p(V +), reg mean:*, reg mean1:V, reg p99:p(V +), reg r635:V, reg p100:p(V +), reg nint6:*, reg nint7:V, reg r637:V, reg p101:p(V +), reg a_levels2:*, reg a_levels3:V, reg p102:p(V +), reg r640:V, reg Axis:cls, reg a44:*, reg a45:V, reg p103:p(V +), reg r643:V, reg axis:cls, reg r644:V, reg box:cls, reg r645:V, reg mtext2:cls, reg xlab9:*, reg xlab10:V, reg c180:L, reg xlab12:V, reg dr62:V, reg dc31:L, reg dx62:V, reg dx63:V, reg __28:cls, reg r646:V, reg p104:p(V +), reg a_is_fac12:*, reg a_is_fac13:V, reg r648:V, reg p105:p(V +), reg mean2:cls, reg par8:cls, reg r650:V, reg c181:L, reg r652:V, reg dr64:V, reg dc32:L, reg dx64:V, reg dx65:V, reg __29:cls, reg r653:V, reg p106:p(V +), reg r655:V, reg p107:p(V +), reg par9:cls, reg r657:V, reg p108:p(V +), reg par10:cls, reg r659:V, reg p109:p(V +), reg r661:V, reg mtext3:cls, reg xlab13:*, reg xlab14:V, reg c182:L, reg xlab16:V, reg dr66:V, reg dc33:L, reg dx66:V, reg dx67:V, reg __30:cls, reg r663:V, reg p110:p(V +), reg f_col4:*, reg f_col5:V, reg r665:V, reg p111:p(V +), reg par11:cls, reg r667:V, reg p112:p(V +), reg par12:cls, reg r669:V, reg p113:p(V +), reg r671:V, reg have_b20:*, reg have_b21:V, reg c183:L, reg sym84:cls, reg base84:cls, reg guard84:L, reg r672:V, reg r673:V, reg ylab5:*, reg ylab6:V, reg length10:cls, reg r674:V, reg r675:V, reg c184:L, reg sym85:cls, reg base85:cls, reg guard85:L, reg r676:V, reg r677:V, reg ylab7:*, reg ylab8:V, reg paste3:cls, reg b_name2:*, reg b_name3:V, reg p114:p(V +), reg r679:V, reg c185:cls, reg r680:V, reg show_given21:*, reg show_given22:V, reg c186:L, reg show_given24:V, reg dr68:V, reg dc34:L, reg dx68:V, reg dx69:V, reg __31:cls, reg r682:V, reg c187:L, reg par13:cls, reg sym86:cls, reg base86:cls, reg guard86:L, reg r683:V, reg r684:V, reg f_col6:*, reg f_col7:V, reg f_row4:*, reg f_row5:V, reg c188:cls, reg r685:V, reg p115:p(V +), reg mar7:*, reg mar8:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r687:V, reg mar11:V, reg r688:V, reg b_is_fac6:*, reg b_is_fac7:V, reg r689:V, reg r690:V, reg c189:cls, reg r691:V, reg r692:V, reg p116:p(V +), reg r694:V, reg plot_new2:cls, reg r695:V, reg nrow4:cls, reg b_intervals30:*, reg b_intervals31:V, reg p117:p(V +), reg r697:V, reg sym88:cls, reg base88:cls, reg guard88:L, reg r698:V, reg r699:V, reg b_intervals32:*, reg b_intervals33:V, reg range3:cls, reg r700:V, reg plot_window1:cls, reg sym89:cls, reg base89:cls, reg guard89:L, reg r703:V, reg r704:R, reg r705:V, reg nint8:*, reg nint9:V, reg c190:cls, reg r706:V, reg r707:V, reg p118:p(V +), reg b_range:*, reg b_range1:V, reg sym90:cls, reg base90:cls, reg guard90:L, reg r709:V, reg b_range4:V, reg r710:V, reg c191:cls, reg r711:V, reg diff1:cls, reg b_range5:*, reg b_range6:V, reg p119:p(V +), reg r713:V, reg r714:V, reg r715:V, reg p120:p(V +), reg r717:V, reg rect1:cls, reg nint10:*, reg nint11:V, reg r718:V, reg r719:V, reg p121:p(V +), reg b_intervals34:*, reg b_intervals35:V, reg c192:L, reg dr70:V, reg dc35:L, reg dx70:V, reg dx71:V, reg __32:cls, reg r721:V, reg p122:p(V +), reg nint12:*, reg nint13:V, reg r723:V, reg r724:V, reg p123:p(V +), reg b_intervals38:*, reg b_intervals39:V, reg c193:L, reg dr72:V, reg dc36:L, reg dx72:V, reg dx73:V, reg __33:cls, reg r726:V, reg p124:p(V +), reg bar_bg8:*, reg bar_bg9:V, reg c194:L, reg bar_bg11:V, reg dr74:V, reg dc37:L, reg dx74:V, reg dx75:V, reg b_is_fac8:*, reg b_is_fac9:V, reg c195:L, reg bar_bg14:V, reg r728:S, reg __34:cls, reg r729:V, reg p125:p(V +), reg r731:V, reg b_is_fac10:*, reg b_is_fac11:V, reg c196:L, reg text1:cls, reg nint14:*, reg nint15:V, reg r732:V, reg p126:p(V +), reg apply1:cls, reg b_intervals42:*, reg b_intervals43:V, reg p127:p(V +), reg mean3:*, reg mean4:V, reg p128:p(V +), reg r736:V, reg p129:p(V +), reg b_levels2:*, reg b_levels3:V, reg p130:p(V +), reg r739:V, reg Axis1:cls, reg b34:*, reg b35:V, reg p131:p(V +), reg r742:V, reg axis1:cls, reg r743:V, reg box1:cls, reg r744:V, reg mtext4:cls, reg ylab9:*, reg ylab10:V, reg c197:L, reg ylab12:V, reg dr76:V, reg dc38:L, reg dx76:V, reg dx77:V, reg __35:cls, reg r745:V, reg p132:p(V +), reg b_is_fac12:*, reg b_is_fac13:V, reg r747:V, reg p133:p(V +), reg mean5:cls, reg par14:cls, reg r749:V, reg c198:L, reg r751:V, reg dr78:V, reg dc39:L, reg dx78:V, reg dx79:V, reg __36:cls, reg r752:V, reg p134:p(V +), reg r754:V, reg p135:p(V +), reg par15:cls, reg r756:V, reg p136:p(V +), reg par16:cls, reg r758:V, reg p137:p(V +), reg r760:V, reg r761:V, reg mtext5:cls, reg ylab13:*, reg ylab14:V, reg c199:L, reg ylab16:V, reg dr80:V, reg dc40:L, reg dx80:V, reg dx81:V, reg __37:cls, reg r762:V, reg p138:p(V +), reg f_row6:*, reg f_row7:V, reg r764:V, reg p139:p(V +), reg par17:cls, reg r766:V, reg p140:p(V +), reg par18:cls, reg r768:V, reg p141:p(V +), reg r770:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r772:V, reg r773:V, reg missingrows:*, reg missingrows1:V, reg length11:cls, reg r774:V, reg c200:L, reg cat:cls, reg gettextf:cls, reg paste4:cls, reg missingrows2:*, reg missingrows3:V, reg p142:p(V +), reg r776:V, reg p143:p(V +), reg r778:V, reg p144:p(V +), reg r780:V, reg sym92:cls, reg base92:cls, reg guard92:L, reg r781:V, reg r782:V, reg missingrows4:*, reg missingrows5:V, reg invisible:cls, reg r783:V, reg sym93:cls, reg base93:cls, reg guard93:L, reg r784:V, reg r785:V, reg invisible1:cls, reg r786:V |
    mkenv;
    st formula = formula;
    st data = data;
    st `given.values` = given_values;
    panel_isMissing = missing.0(panel);
    if panel_isMissing then L0() else L1(panel);
  L0():
    p = prom<V +>{
      points = ld points;
      points1 = force? points;
      checkMissing(points1);
      return points1;
    };
    goto L1(p);
  L1(panel_orDefault):
    st panel = panel_orDefault;
    st rows = rows;
    st columns = columns;
    show_given_isMissing = missing.0(show_given);
    if show_given_isMissing then L2(TRUE) else L2(show_given);
  L2(show_given_orDefault):
    st `show.given` = show_given_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L3() else L4(col);
  L3():
    p1 = prom<V +>{
      par = ldf par;
      r1 = dyn par("fg");
      return r1;
    };
    goto L4(p1);
  L4(col_orDefault):
    st col = col_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L5() else L6(pch);
  L5():
    p2 = prom<V +>{
      par1 = ldf par;
      r3 = dyn par1("pch");
      return r3;
    };
    goto L6(p2);
  L6(pch_orDefault):
    st pch = pch_orDefault;
    bar_bg_isMissing = missing.0(bar_bg);
    if bar_bg_isMissing then L7() else L8(bar_bg);
  L7():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      gray = ldf gray;
      r7 = dyn gray(0.8);
      gray1 = ldf gray;
      r8 = dyn gray1(0.95);
      c = ldf c in base;
      r9 = dyn c(r7, r8);
      goto L0(r9);
    L2():
      r5 = dyn base[num, fac](<lang gray(0.8)>, <lang gray(0.95)>);
      goto L0(r5);
    };
    goto L8(p3);
  L8(bar_bg_orDefault):
    st `bar.bg` = bar_bg_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L9() else L10(xlab);
  L9():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      x_name = ld `x.name`;
      x_name1 = force? x_name;
      checkMissing(x_name1);
      paste = ldf paste;
      p4 = prom<V +>{
        a_name = ld `a.name`;
        a_name1 = force? a_name;
        checkMissing(a_name1);
        return a_name1;
      };
      r14 = dyn paste("Given :", p4);
      c1 = ldf c in base;
      r15 = dyn c1(x_name1, r14);
      goto L0(r15);
    L2():
      r11 = dyn base1(<sym x.name>, <lang paste("Given :", a.name)>);
      goto L0(r11);
    };
    goto L10(p5);
  L10(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L11() else L12(ylab);
  L11():
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      y_name = ld `y.name`;
      y_name1 = force? y_name;
      checkMissing(y_name1);
      paste1 = ldf paste;
      p6 = prom<V +>{
        b_name = ld `b.name`;
        b_name1 = force? b_name;
        checkMissing(b_name1);
        return b_name1;
      };
      r20 = dyn paste1("Given :", p6);
      c2 = ldf c in base;
      r21 = dyn c2(y_name1, r20);
      goto L0(r21);
    L2():
      r17 = dyn base2(<sym y.name>, <lang paste("Given :", b.name)>);
      goto L0(r17);
    };
    goto L12(p7);
  L12(ylab_orDefault):
    st ylab = ylab_orDefault;
    subscripts_isMissing = missing.0(subscripts);
    if subscripts_isMissing then L13(FALSE) else L13(subscripts);
  L13(subscripts_orDefault):
    st subscripts = subscripts_orDefault;
    axlabels_isMissing = missing.0(axlabels);
    if axlabels_isMissing then L14() else L15(axlabels);
  L14():
    p8 = prom<V +>{
      r23 = clos inner1384373858;
      return r23;
    };
    goto L15(p8);
  L15(axlabels_orDefault):
    st axlabels = axlabels_orDefault;
    number_isMissing = missing.0(number);
    if number_isMissing then L16(6.0) else L16(number);
  L16(number_orDefault):
    st number = number_orDefault;
    overlap_isMissing = missing.0(overlap);
    if overlap_isMissing then L17(0.5) else L17(overlap);
  L17(overlap_orDefault):
    st overlap = overlap_orDefault;
    st xlim = xlim;
    st ylim = ylim;
    st `...` = ddd;
    r25 = clos inner4125524309;
    st deparen = r25;
    r26 = clos inner2708337952;
    st `bad.formula` = r26;
    r27 = clos inner2708337952;
    st `bad.lengths` = r27;
    r28 = clos inner1966010878;
    st getOp = r28;
    deparen = ldf deparen;
    check L227() else D0();
  D0():
    deopt 13 [];
  L227():
    p9 = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    r30 = dyn deparen(p9);
    check L228() else D1();
  D1():
    deopt 15 [r30];
  L228():
    st formula = r30;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L229() else L230();
  L18(r32):
    r34 = `!`(r32);
    c3 = `as.logical`(r34);
    if c3 then L233() else L19();
  L229():
    formula3 = ld formula;
    check L231() else D2();
  L230():
    r31 = dyn base3(<sym formula>, "formula");
    goto L18(r31);
  D2():
    deopt 19 [formula3];
  L19():
    goto L20();
  L20():
    deparen1 = ldf deparen;
    check L237() else D6();
  L231():
    formula4 = force? formula3;
    checkMissing(formula4);
    inherits = ldf inherits in base;
    r33 = dyn inherits(formula4, "formula", FALSE);
    check L232() else D3();
  L233():
    bad_formula = ldf `bad.formula`;
    check L234() else D4();
  D3():
    deopt 24 [r33];
  D4():
    deopt 27 [];
  D6():
    deopt 32 [];
  L232():
    goto L18(r33);
  L234():
    r35 = dyn bad_formula();
    check L235() else D5();
  L237():
    p10 = prom<V +>{
      formula5 = ld formula;
      formula6 = force? formula5;
      checkMissing(formula6);
      c4 = `is.object`(formula6);
      if c4 then L1() else L2(formula6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", formula6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(formula8):
      __ = ldf `[[` in base;
      r37 = dyn __(formula8, 2);
      goto L0(r37);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r39 = dyn deparen1(p10);
    check L238() else D7();
  D5():
    deopt 28 [r35];
  D7():
    deopt 34 [r39];
  L235():
    goto L20();
  L238():
    st y = r39;
    deparen2 = ldf deparen;
    check L239() else D8();
  D8():
    deopt 37 [];
  L239():
    p11 = prom<V +>{
      formula9 = ld formula;
      formula10 = force? formula9;
      checkMissing(formula10);
      c5 = `is.object`(formula10);
      if c5 then L1() else L2(formula10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", formula10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(formula12):
      __1 = ldf `[[` in base;
      r40 = dyn __1(formula12, 3);
      goto L0(r40);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r42 = dyn deparen2(p11);
    check L240() else D9();
  D9():
    deopt 39 [r42];
  L240():
    st rhs = r42;
    getOp = ldf getOp;
    check L241() else D10();
  D10():
    deopt 42 [];
  L241():
    p12 = prom<V +>{
      rhs = ld rhs;
      rhs1 = force? rhs;
      checkMissing(rhs1);
      return rhs1;
    };
    r44 = dyn getOp(p12);
    check L242() else D11();
  D11():
    deopt 44 [r44];
  L242():
    r45 = `!=`(r44, "|");
    c6 = `as.logical`(r45);
    if c6 then L243() else L21();
  L21():
    goto L22();
  L22():
    deparen3 = ldf deparen;
    check L247() else D14();
  L243():
    bad_formula1 = ldf `bad.formula`;
    check L244() else D12();
  D12():
    deopt 48 [];
  D14():
    deopt 53 [];
  L244():
    r46 = dyn bad_formula1();
    check L245() else D13();
  L247():
    p13 = prom<V +>{
      rhs2 = ld rhs;
      rhs3 = force? rhs2;
      checkMissing(rhs3);
      c7 = `is.object`(rhs3);
      if c7 then L1() else L2(rhs3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", rhs3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(rhs5):
      __2 = ldf `[[` in base;
      r48 = dyn __2(rhs5, 2);
      goto L0(r48);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r50 = dyn deparen3(p13);
    check L248() else D15();
  D13():
    deopt 49 [r46];
  D15():
    deopt 55 [r50];
  L245():
    goto L22();
  L248():
    st x = r50;
    deparen4 = ldf deparen;
    check L249() else D16();
  D16():
    deopt 58 [];
  L249():
    p14 = prom<V +>{
      rhs6 = ld rhs;
      rhs7 = force? rhs6;
      checkMissing(rhs7);
      c8 = `is.object`(rhs7);
      if c8 then L1() else L2(rhs7);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", rhs7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(rhs9):
      __3 = ldf `[[` in base;
      r51 = dyn __3(rhs9, 3);
      goto L0(r51);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r53 = dyn deparen4(p14);
    check L250() else D17();
  D17():
    deopt 60 [r53];
  L250():
    st rhs = r53;
    sym4 = ldf `is.language`;
    base4 = ldf `is.language` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L251() else L252();
  L23(r55):
    c9 = `as.logical`(r55);
    if c9 then L255() else L24(c9);
  L251():
    rhs10 = ld rhs;
    check L253() else D18();
  L252():
    r54 = dyn base4(<sym rhs>);
    goto L23(r54);
  D18():
    deopt 64 [rhs10];
  L24(c11):
    c19 = `as.logical`(c11);
    if c19 then L260() else L26(c19);
  L253():
    rhs11 = force? rhs10;
    checkMissing(rhs11);
    is_language = ldf `is.language` in base;
    r56 = dyn is_language(rhs11);
    check L254() else D19();
  L255():
    sym5 = ldf `is.name`;
    base5 = ldf `is.name` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L256() else L257();
  D19():
    deopt 67 [r56];
  L25(c14, r58):
    r59 = `!`(r58);
    c16 = `as.logical`(r59);
    c17 = `&&`(c14, c16);
    goto L24(c17);
  L26(c21):
    c26 = `as.logical`(c21);
    if c26 then L264() else L27();
  L254():
    goto L23(r56);
  L256():
    rhs12 = ld rhs;
    check L258() else D20();
  L257():
    r57 = dyn base5(<sym rhs>);
    goto L25(c9, r57);
  L260():
    _in_ = ldf `%in%`;
    check L261() else D21();
  D20():
    deopt 69 [c9, rhs12];
  D21():
    deopt 75 [c19];
  L27():
    st `have.b` = FALSE;
    rhs24 = ld rhs;
    check L270() else D27();
  L28():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L271() else L272();
  L258():
    rhs13 = force? rhs12;
    checkMissing(rhs13);
    c15 = `is.symbol`(rhs13);
    goto L25(c9, c15);
  L261():
    p16 = prom<V +>{
      getOp1 = ldf getOp;
      p15 = prom<V +>{
        rhs14 = ld rhs;
        rhs15 = force? rhs14;
        checkMissing(rhs15);
        return rhs15;
      };
      r61 = dyn getOp1(p15);
      return r61;
    };
    p17 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      c22 = ldf c in base;
      r65 = dyn c22("*", "+");
      goto L0(r65);
    L2():
      r63 = dyn base6("*", "+");
      goto L0(r63);
    };
    r67 = dyn _in_(p16, p17);
    check L262() else D22();
  L264():
    st `have.b` = TRUE;
    deparen5 = ldf deparen;
    check L265() else D23();
  D22():
    deopt 78 [c19, r67];
  D23():
    deopt 84 [];
  D27():
    deopt 96 [rhs24];
  L29(r76):
    c29 = `as.logical`(r76);
    if c29 then L273() else L30();
  L262():
    c23 = `as.logical`(r67);
    c24 = `&&`(c19, c23);
    goto L26(c24);
  L265():
    p18 = prom<V +>{
      rhs16 = ld rhs;
      rhs17 = force? rhs16;
      checkMissing(rhs17);
      c27 = `is.object`(rhs17);
      if c27 then L1() else L2(rhs17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", rhs17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(rhs19):
      __4 = ldf `[[` in base;
      r68 = dyn __4(rhs19, 2);
      goto L0(r68);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r70 = dyn deparen5(p18);
    check L266() else D24();
  L270():
    rhs25 = force? rhs24;
    checkMissing(rhs25);
    st a = rhs25;
    goto L28();
  L271():
    missing = ldf missing in base;
    r77 = dyn missing(<sym data>);
    goto L29(r77);
  L272():
    r75 = dyn base7(<sym data>);
    goto L29(r75);
  D24():
    deopt 86 [r70];
  L30():
    goto L31();
  L31():
    deparse = ldf deparse;
    check L277() else D30();
  L266():
    st a = r70;
    deparen6 = ldf deparen;
    check L267() else D25();
  L273():
    parent_frame = ldf `parent.frame`;
    check L274() else D28();
  D25():
    deopt 89 [];
  D28():
    deopt 103 [];
  D30():
    deopt 109 [];
  L267():
    p19 = prom<V +>{
      rhs20 = ld rhs;
      rhs21 = force? rhs20;
      checkMissing(rhs21);
      c28 = `is.object`(rhs21);
      if c28 then L1() else L2(rhs21);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", rhs21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(rhs23):
      __5 = ldf `[[` in base;
      r71 = dyn __5(rhs23, 3);
      goto L0(r71);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r73 = dyn deparen6(p19);
    check L268() else D26();
  L274():
    r78 = dyn parent_frame();
    check L275() else D29();
  L277():
    p20 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r81 = dyn deparse(p20);
    check L278() else D31();
  D26():
    deopt 91 [r73];
  D29():
    deopt 104 [r78];
  D31():
    deopt 111 [r81];
  L268():
    st b = r73;
    goto L28();
  L275():
    st data = r78;
    goto L31();
  L278():
    st `x.name` = r81;
    eval = ldf eval;
    check L279() else D32();
  D32():
    deopt 114 [];
  L279():
    p21 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p22 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    p23 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r84 = dyn parent_frame1();
      return r84;
    };
    r86 = dyn eval(p21, p22, p23);
    check L280() else D33();
  D33():
    deopt 118 [r86];
  L280():
    st x = r86;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L281() else L282();
  L32(r88):
    st nobs = r88;
    deparse1 = ldf deparse;
    check L285() else D36();
  L281():
    x4 = ld x;
    check L283() else D34();
  L282():
    r87 = dyn base8(<sym x>);
    goto L32(r87);
  D34():
    deopt 122 [x4];
  D36():
    deopt 128 [];
  L283():
    x5 = force? x4;
    checkMissing(x5);
    length = ldf length in base;
    r89 = dyn length(x5);
    check L284() else D35();
  L285():
    p24 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r91 = dyn deparse1(p24);
    check L286() else D37();
  D35():
    deopt 125 [r89];
  D37():
    deopt 130 [r91];
  L284():
    goto L32(r89);
  L286():
    st `y.name` = r91;
    eval1 = ldf eval;
    check L287() else D38();
  D38():
    deopt 133 [];
  L287():
    p25 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p26 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p27 = prom<V +>{
      parent_frame2 = ldf `parent.frame`;
      r94 = dyn parent_frame2();
      return r94;
    };
    r96 = dyn eval1(p25, p26, p27);
    check L288() else D39();
  D39():
    deopt 137 [r96];
  L288():
    st y = r96;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L289() else L290();
  L33(r98):
    nobs = ld nobs;
    check L293() else D42();
  L289():
    y4 = ld y;
    check L291() else D40();
  L290():
    r97 = dyn base9(<sym y>);
    goto L33(r97);
  D40():
    deopt 141 [y4];
  D42():
    deopt 144 [r98, nobs];
  L291():
    y5 = force? y4;
    checkMissing(y5);
    length1 = ldf length in base;
    r99 = dyn length1(y5);
    check L292() else D41();
  L293():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    r100 = `!=`(r98, nobs1);
    c30 = `as.logical`(r100);
    if c30 then L294() else L34();
  D41():
    deopt 144 [r99];
  L34():
    goto L35();
  L35():
    deparse2 = ldf deparse;
    check L298() else D45();
  L292():
    goto L33(r99);
  L294():
    bad_lengths = ldf `bad.lengths`;
    check L295() else D43();
  D43():
    deopt 148 [];
  D45():
    deopt 153 [];
  L295():
    r101 = dyn bad_lengths();
    check L296() else D44();
  L298():
    p28 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r104 = dyn deparse2(p28);
    check L299() else D46();
  D44():
    deopt 149 [r101];
  D46():
    deopt 155 [r104];
  L296():
    goto L35();
  L299():
    st `a.name` = r104;
    eval2 = ldf eval;
    check L300() else D47();
  D47():
    deopt 158 [];
  L300():
    p29 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    p30 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    p31 = prom<V +>{
      parent_frame3 = ldf `parent.frame`;
      r107 = dyn parent_frame3();
      return r107;
    };
    r109 = dyn eval2(p29, p30, p31);
    check L301() else D48();
  D48():
    deopt 162 [r109];
  L301():
    st a = r109;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L302() else L303();
  L36(r111):
    nobs2 = ld nobs;
    check L306() else D51();
  L302():
    a4 = ld a;
    check L304() else D49();
  L303():
    r110 = dyn base10(<sym a>);
    goto L36(r110);
  D49():
    deopt 166 [a4];
  D51():
    deopt 169 [r111, nobs2];
  L304():
    a5 = force? a4;
    checkMissing(a5);
    length2 = ldf length in base;
    r112 = dyn length2(a5);
    check L305() else D50();
  L306():
    nobs3 = force? nobs2;
    checkMissing(nobs3);
    r113 = `!=`(r111, nobs3);
    c31 = `as.logical`(r113);
    if c31 then L307() else L37();
  D50():
    deopt 169 [r112];
  L37():
    goto L38();
  L38():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L311() else L312();
  L305():
    goto L36(r112);
  L307():
    bad_lengths1 = ldf `bad.lengths`;
    check L308() else D52();
  D52():
    deopt 173 [];
  L39(r117):
    c33 = `as.logical`(r117);
    if c33 then L314() else L40();
  L308():
    r114 = dyn bad_lengths1();
    check L309() else D53();
  L311():
    a6 = ld a;
    check L313() else D54();
  L312():
    r116 = dyn base11(<sym a>);
    goto L39(r116);
  D53():
    deopt 174 [r114];
  D54():
    deopt 178 [a6];
  L40():
    goto L41();
  L41():
    is_factor = ldf `is.factor`;
    check L318() else D57();
  L309():
    goto L38();
  L313():
    a7 = force? a6;
    checkMissing(a7);
    c32 = `is.character`(a7);
    goto L39(c32);
  L314():
    as_factor = ldf `as.factor`;
    check L315() else D55();
  D55():
    deopt 182 [];
  D57():
    deopt 189 [];
  L315():
    p32 = prom<V +>{
      a8 = ld a;
      a9 = force? a8;
      checkMissing(a9);
      return a9;
    };
    r119 = dyn as_factor(p32);
    check L316() else D56();
  L318():
    p33 = prom<V +>{
      a10 = ld a;
      a11 = force? a10;
      checkMissing(a11);
      return a11;
    };
    r122 = dyn is_factor(p33);
    check L319() else D58();
  D56():
    deopt 184 [r119];
  D58():
    deopt 191 [r122];
  L316():
    st a = r119;
    goto L41();
  L319():
    st `a.is.fac` = r122;
    have_b = ld `have.b`;
    check L320() else D59();
  D59():
    deopt 193 [have_b];
  L320():
    have_b1 = force? have_b;
    checkMissing(have_b1);
    c34 = `as.logical`(have_b1);
    if c34 then L321() else L42();
  L42():
    which1 = ldf which;
    check L347() else D76();
  L49():
    sym21 = ldf `as.integer`;
    base21 = ldf `as.integer` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L349() else L350();
  L321():
    deparse3 = ldf deparse;
    check L322() else D60();
  D60():
    deopt 196 [];
  D76():
    deopt 242 [];
  L50(r190):
    st number = r190;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L353() else L354();
  L322():
    p34 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r124 = dyn deparse3(p34);
    check L323() else D61();
  L347():
    p41 = prom<V +>{
      sym18 = ldf `is.na`;
      base18 = ldf `is.na` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L3() else L4();
    L0(r171):
      sym19 = ldf `is.na`;
      base19 = ldf `is.na` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L5() else L6();
    L3():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      is_na4 = ldf `is.na` in base;
      r172 = dyn is_na4(x9);
      goto L0(r172);
    L4():
      r170 = dyn base18(<sym x>);
      goto L0(r170);
    L1(r176, r177):
      r179 = `||`(r176, r177);
      sym20 = ldf `is.na`;
      base20 = ldf `is.na` in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L7() else L8();
    L5():
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      is_na5 = ldf `is.na` in base;
      r178 = dyn is_na5(y9);
      goto L1(r171, r178);
    L6():
      r175 = dyn base19(<sym y>);
      goto L1(r171, r175);
    L2(r183, r184):
      r186 = `||`(r183, r184);
      return r186;
    L7():
      a14 = ld a;
      a15 = force? a14;
      checkMissing(a15);
      is_na6 = ldf `is.na` in base;
      r185 = dyn is_na6(a15);
      goto L2(r179, r185);
    L8():
      r182 = dyn base20(<sym a>);
      goto L2(r179, r182);
    };
    r188 = dyn which1(p41);
    check L348() else D77();
  L349():
    number1 = ld number;
    check L351() else D78();
  L350():
    r189 = dyn base21(<sym number>);
    goto L50(r189);
  D61():
    deopt 198 [r124];
  D77():
    deopt 244 [r188];
  D78():
    deopt 254 [number1];
  L51(r193):
    r195 = `==`(r193, 0);
    c38 = `as.logical`(r195);
    if c38 then L52(c38) else L357();
  L323():
    st `b.name` = r124;
    eval3 = ldf eval;
    check L324() else D62();
  L348():
    st missingrows = r188;
    st b = NULL;
    st `b.name` = "";
    goto L49();
  L351():
    number2 = force? number1;
    checkMissing(number2);
    as_integer = ldf `as.integer` in base;
    r191 = dyn as_integer(number2);
    check L352() else D79();
  L353():
    number3 = ld number;
    check L355() else D80();
  L354():
    r192 = dyn base22(<sym number>);
    goto L51(r192);
  D62():
    deopt 201 [];
  D79():
    deopt 257 [r191];
  D80():
    deopt 261 [number3];
  L52(c39):
    c47 = `as.logical`(c39);
    if c47 then L363() else L54();
  L324():
    p35 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    p36 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    p37 = prom<V +>{
      parent_frame4 = ldf `parent.frame`;
      r127 = dyn parent_frame4();
      return r127;
    };
    r129 = dyn eval3(p35, p36, p37);
    check L325() else D63();
  L352():
    goto L50(r191);
  L355():
    number4 = force? number3;
    checkMissing(number4);
    length4 = ldf length in base;
    r194 = dyn length4(number4);
    check L356() else D81();
  L357():
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L358() else L359();
  D63():
    deopt 205 [r129];
  D81():
    deopt 264 [r194];
  L53(c43, r197):
    c44 = `as.logical`(r197);
    c45 = `||`(c43, c44);
    goto L52(c45);
  L54():
    goto L55();
  L55():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L367() else L368();
  L325():
    st b = r129;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L326() else L327();
  L356():
    goto L51(r194);
  L358():
    number5 = ld number;
    check L360() else D82();
  L359():
    r196 = dyn base23(<lang `<`(number, 1.0)>);
    goto L53(c38, r196);
  L363():
    stop = ldf stop;
    check L364() else D84();
  D82():
    deopt 269 [c38, number5];
  D84():
    deopt 277 [];
  L43(r131):
    nobs4 = ld nobs;
    check L330() else D66();
  L56(r203):
    c48 = `as.logical`(r203);
    if c48 then L371() else L57();
  L326():
    b4 = ld b;
    check L328() else D64();
  L327():
    r130 = dyn base12(<sym b>);
    goto L43(r130);
  L360():
    number6 = force? number5;
    checkMissing(number6);
    r198 = `<`(number6, 1.0);
    any = ldf any in base;
    r199 = dyn any(r198);
    check L361() else D83();
  L364():
    r200 = dyn stop("'number' must be integer >= 1");
    check L365() else D85();
  L367():
    overlap1 = ld overlap;
    check L369() else D86();
  L368():
    r202 = dyn base24(<lang `>=`(overlap, 1.0)>);
    goto L56(r202);
  D64():
    deopt 209 [b4];
  D66():
    deopt 212 [r131, nobs4];
  D83():
    deopt 274 [c38, r199];
  D85():
    deopt 279 [r200];
  D86():
    deopt 284 [overlap1];
  L57():
    goto L58();
  L58():
    r208 = clos inner2708337952;
    st `bad.givens` = r208;
    sym25 = ldf missing;
    base25 = ldf missing in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L375() else L376();
  L328():
    b5 = force? b4;
    checkMissing(b5);
    length3 = ldf length in base;
    r132 = dyn length3(b5);
    check L329() else D65();
  L330():
    nobs5 = force? nobs4;
    checkMissing(nobs5);
    r133 = `!=`(r131, nobs5);
    c35 = `as.logical`(r133);
    if c35 then L331() else L44();
  L361():
    goto L53(c38, r199);
  L365():
    goto L55();
  L369():
    overlap2 = force? overlap1;
    checkMissing(overlap2);
    r204 = `>=`(overlap2, 1.0);
    any1 = ldf any in base;
    r205 = dyn any1(r204);
    check L370() else D87();
  L371():
    stop1 = ldf stop;
    check L372() else D88();
  D65():
    deopt 212 [r132];
  D87():
    deopt 289 [r205];
  D88():
    deopt 291 [];
  L44():
    goto L45();
  L45():
    sym13 = ldf `is.character`;
    base13 = ldf `is.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L335() else L336();
  L59(r210):
    c49 = `as.logical`(r210);
    if c49 then L377() else L60();
  L329():
    goto L43(r132);
  L331():
    bad_lengths2 = ldf `bad.lengths`;
    check L332() else D67();
  L370():
    goto L56(r205);
  L372():
    r206 = dyn stop1("'overlap' must be < 1 (and typically >= 0).");
    check L373() else D89();
  L375():
    missing1 = ldf missing in base;
    r211 = dyn missing1(<sym given.values>);
    goto L59(r211);
  L376():
    r209 = dyn base25(<sym given.values>);
    goto L59(r209);
  D67():
    deopt 216 [];
  D89():
    deopt 293 [r206];
  L46(r137):
    c37 = `as.logical`(r137);
    if c37 then L338() else L47();
  L60():
    sym36 = ldf `is.list`;
    base36 = ldf `is.list` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L432() else L433();
  L79():
    sym51 = ldf anyNA;
    base51 = ldf anyNA in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L558() else L559();
  L332():
    r134 = dyn bad_lengths2();
    check L333() else D68();
  L335():
    b6 = ld b;
    check L337() else D69();
  L336():
    r136 = dyn base13(<sym b>);
    goto L46(r136);
  L373():
    goto L58();
  L377():
    a_is_fac = ld `a.is.fac`;
    check L378() else D90();
  D68():
    deopt 217 [r134];
  D69():
    deopt 221 [b6];
  D90():
    deopt 302 [a_is_fac];
  L47():
    goto L48();
  L48():
    is_factor1 = ldf `is.factor`;
    check L342() else D72();
  L80(r277):
    r279 = `!`(r277);
    c59 = `as.logical`(r279);
    if c59 then L436() else L81();
  L124(r375):
    c89 = `as.logical`(r375);
    if c89 then L125(c89) else L562();
  L333():
    goto L45();
  L337():
    b7 = force? b6;
    checkMissing(b7);
    c36 = `is.character`(b7);
    goto L46(c36);
  L338():
    as_factor1 = ldf `as.factor`;
    check L339() else D70();
  L378():
    a_is_fac1 = force? a_is_fac;
    checkMissing(a_is_fac1);
    c50 = `as.logical`(a_is_fac1);
    if c50 then L379() else L61();
  L432():
    given_values1 = ld `given.values`;
    check L434() else D117();
  L433():
    r276 = dyn base36(<sym given.values>);
    goto L80(r276);
  L558():
    a_intervals18 = ld `a.intervals`;
    check L560() else D175();
  L559():
    r374 = dyn base51(<sym a.intervals>);
    goto L124(r374);
  D70():
    deopt 225 [];
  D72():
    deopt 232 [];
  D117():
    deopt 406 [given_values1];
  D175():
    deopt 613 [a_intervals18];
  L61():
    co_intervals = ldf `co.intervals`;
    check L391() else D97();
  L64(r225):
    st `a.intervals` = r225;
    have_b2 = ld `have.b`;
    check L393() else D99();
  L81():
    goto L83();
  L83():
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L442() else L443();
  L125(c90):
    c110 = `as.logical`(c90);
    if c110 then L571() else L128();
  L339():
    p38 = prom<V +>{
      b8 = ld b;
      b9 = force? b8;
      checkMissing(b9);
      return b9;
    };
    r139 = dyn as_factor1(p38);
    check L340() else D71();
  L342():
    p39 = prom<V +>{
      b10 = ld b;
      b11 = force? b10;
      checkMissing(b11);
      return b11;
    };
    r142 = dyn is_factor1(p39);
    check L343() else D73();
  L379():
    sym26 = ldf seq_along;
    base26 = ldf seq_along in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L380() else L381();
  L434():
    given_values2 = force? given_values1;
    checkMissing(given_values2);
    is_list = ldf `is.list` in base;
    r278 = dyn is_list(given_values2);
    check L435() else D118();
  L436():
    sym37 = ldf list;
    base37 = ldf list in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L437() else L438();
  L560():
    a_intervals19 = force? a_intervals18;
    checkMissing(a_intervals19);
    anyNA = ldf anyNA in base;
    r376 = dyn anyNA(a_intervals19);
    check L561() else D176();
  L562():
    have_b8 = ld `have.b`;
    check L563() else D177();
  D71():
    deopt 227 [r139];
  D73():
    deopt 234 [r142];
  D97():
    deopt 325 [];
  D99():
    deopt 333 [have_b2];
  D118():
    deopt 409 [r278];
  D176():
    deopt 616 [r376];
  D177():
    deopt 617 [c89, have_b8];
  L62(r213):
    st i = r213;
    sym27 = ldf `as.numeric`;
    base27 = ldf `as.numeric` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L384() else L385();
  L82(r281):
    st `given.values` = r281;
    goto L83();
  L84(r285):
    have_b4 = ld `have.b`;
    check L446() else D123();
  L128():
    goto L129();
  L129():
    have_b10 = ld `have.b`;
    check L575() else D182();
  L340():
    st b = r139;
    goto L48();
  L343():
    st `b.is.fac` = r142;
    which = ldf which;
    check L344() else D74();
  L380():
    levels = ldf levels;
    check L382() else D91();
  L381():
    r212 = dyn base26(<lang `<-`(a.levels, levels(a))>);
    goto L62(r212);
  L391():
    p45 = prom<V +>{
      sym28 = ldf unclass;
      base28 = ldf unclass in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r227):
      return r227;
    L1():
      a20 = ld a;
      a21 = force? a20;
      checkMissing(a21);
      unclass = ldf unclass in base;
      r228 = dyn unclass(a21);
      goto L0(r228);
    L2():
      r226 = dyn base28(<sym a>);
      goto L0(r226);
    };
    p46 = prom<V +>{
      number7 = ld number;
      number8 = force? number7;
      checkMissing(number8);
      c51 = `is.object`(number8);
      if c51 then L1() else L2(number8);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", number8);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(number10):
      __6 = ldf `[` in base;
      r230 = dyn __6(number10, 1);
      goto L0(r230);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p47 = prom<V +>{
      overlap3 = ld overlap;
      overlap4 = force? overlap3;
      checkMissing(overlap4);
      c52 = `is.object`(overlap4);
      if c52 then L1() else L2(overlap4);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", overlap4);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(overlap6):
      __7 = ldf `[` in base;
      r232 = dyn __7(overlap6, 1);
      goto L0(r232);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r234 = dyn co_intervals[, number, overlap](p45, p46, p47);
    check L392() else D98();
  L393():
    have_b3 = force? have_b2;
    checkMissing(have_b3);
    c53 = `as.logical`(have_b3);
    if c53 then L394() else L65();
  L435():
    goto L80(r278);
  L437():
    given_values3 = ld `given.values`;
    check L439() else D119();
  L438():
    r280 = dyn base37(<sym given.values>);
    goto L82(r280);
  L442():
    given_values5 = ld `given.values`;
    check L444() else D121();
  L443():
    r284 = dyn base38(<sym given.values>);
    goto L84(r284);
  L561():
    goto L124(r376);
  L563():
    have_b9 = force? have_b8;
    checkMissing(have_b9);
    c92 = `as.logical`(have_b9);
    if c92 then L564() else L126(c89, c92);
  L571():
    bad_givens3 = ldf `bad.givens`;
    check L572() else D180();
  D74():
    deopt 237 [];
  D91():
    deopt 306 [];
  D98():
    deopt 331 [r234];
  D119():
    deopt 413 [given_values3];
  D121():
    deopt 422 [given_values5];
  D123():
    deopt 425 [r285, have_b4];
  D180():
    deopt 628 [];
  D182():
    deopt 632 [have_b10];
  L63(r218):
    st a = r218;
    cbind = ldf cbind;
    check L388() else D95();
  L65():
    goto L78(NULL);
  L78(r274):
    st `b.intervals` = r274;
    goto L79();
  L126(c95, c96):
    c107 = `as.logical`(c96);
    c108 = `||`(c95, c107);
    goto L125(c108);
  L344():
    p40 = prom<V +>{
      sym14 = ldf `is.na`;
      base14 = ldf `is.na` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L4() else L5();
    L0(r144):
      sym15 = ldf `is.na`;
      base15 = ldf `is.na` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L6() else L7();
    L4():
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      is_na = ldf `is.na` in base;
      r145 = dyn is_na(x7);
      goto L0(r145);
    L5():
      r143 = dyn base14(<sym x>);
      goto L0(r143);
    L1(r149, r150):
      r152 = `||`(r149, r150);
      sym16 = ldf `is.na`;
      base16 = ldf `is.na` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L8() else L9();
    L6():
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      is_na1 = ldf `is.na` in base;
      r151 = dyn is_na1(y7);
      goto L1(r144, r151);
    L7():
      r148 = dyn base15(<sym y>);
      goto L1(r144, r148);
    L2(r156, r157):
      r159 = `||`(r156, r157);
      sym17 = ldf `is.na`;
      base17 = ldf `is.na` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L10() else L11();
    L8():
      a12 = ld a;
      a13 = force? a12;
      checkMissing(a13);
      is_na2 = ldf `is.na` in base;
      r158 = dyn is_na2(a13);
      goto L2(r152, r158);
    L9():
      r155 = dyn base16(<sym a>);
      goto L2(r152, r155);
    L3(r163, r164):
      r166 = `||`(r163, r164);
      return r166;
    L10():
      b12 = ld b;
      b13 = force? b12;
      checkMissing(b13);
      is_na3 = ldf `is.na` in base;
      r165 = dyn is_na3(b13);
      goto L3(r159, r165);
    L11():
      r162 = dyn base17(<sym b>);
      goto L3(r159, r162);
    };
    r168 = dyn which(p40);
    check L345() else D75();
  L382():
    p42 = prom<V +>{
      a16 = ld a;
      a17 = force? a16;
      checkMissing(a17);
      return a17;
    };
    r215 = dyn levels(p42);
    check L383() else D92();
  L384():
    a18 = ld a;
    check L386() else D93();
  L385():
    r217 = dyn base27(<sym a>);
    goto L63(r217);
  L392():
    goto L64(r234);
  L394():
    b_is_fac = ld `b.is.fac`;
    check L395() else D100();
  L439():
    given_values4 = force? given_values3;
    checkMissing(given_values4);
    list = ldf list in base;
    r282 = dyn list(given_values4);
    check L440() else D120();
  L444():
    given_values6 = force? given_values5;
    checkMissing(given_values6);
    length7 = ldf length in base;
    r286 = dyn length7(given_values6);
    check L445() else D122();
  L446():
    have_b5 = force? have_b4;
    checkMissing(have_b5);
    c60 = `as.logical`(have_b5);
    if c60 then L447() else L85();
  L564():
    sym52 = ldf anyNA;
    base52 = ldf anyNA in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L565() else L566();
  L572():
    r380 = dyn bad_givens3();
    check L573() else D181();
  L575():
    have_b11 = force? have_b10;
    checkMissing(have_b11);
    c111 = `as.logical`(have_b11);
    if c111 then L576() else L130();
  D75():
    deopt 239 [r168];
  D92():
    deopt 308 [r215];
  D93():
    deopt 314 [a18];
  D95():
    deopt 320 [];
  D100():
    deopt 335 [b_is_fac];
  D120():
    deopt 416 [r282];
  D122():
    deopt 425 [r286];
  D181():
    deopt 629 [r380];
  L85():
    goto L86(r285, 1);
  L86(r289, r290):
    r291 = `!=`(r289, r290);
    c61 = `as.logical`(r291);
    if c61 then L449() else L87();
  L127(c101, c102, r378):
    c103 = `as.logical`(r378);
    c104 = `&&`(c102, c103);
    goto L126(c101, c104);
  L130():
    nrow2 = ldf nrow;
    check L594() else D193();
  L135():
    columns7 = ld columns;
    check L631() else D206();
  L345():
    st missingrows = r168;
    goto L49();
  L383():
    st `a.levels` = r215;
    r216 = seq_along(r215);
    goto L62(r216);
  L386():
    a19 = force? a18;
    checkMissing(a19);
    as_numeric = ldf `as.numeric` in base;
    r219 = dyn as_numeric(a19);
    check L387() else D94();
  L388():
    p43 = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r220 = `-`(i1, 0.5);
      return r220;
    };
    p44 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      r222 = `+`(i3, 0.5);
      return r222;
    };
    r224 = dyn cbind(p43, p44);
    check L389() else D96();
  L395():
    b_is_fac1 = force? b_is_fac;
    checkMissing(b_is_fac1);
    c54 = `as.logical`(b_is_fac1);
    if c54 then L396() else L66();
  L440():
    goto L82(r282);
  L445():
    goto L84(r286);
  L447():
    goto L86(r285, 2);
  L565():
    b_intervals18 = ld `b.intervals`;
    check L567() else D178();
  L566():
    r377 = dyn base52(<sym b.intervals>);
    goto L127(c89, c92, r377);
  L573():
    goto L129();
  L576():
    nrow = ldf nrow;
    check L577() else D183();
  D94():
    deopt 317 [r219];
  D96():
    deopt 323 [r224];
  D178():
    deopt 621 [c89, c92, b_intervals18];
  D183():
    deopt 635 [];
  D193():
    deopt 668 [];
  D206():
    deopt 722 [columns7];
  L66():
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L408() else L409();
  L69(r248):
    goto L78(r248);
  L87():
    goto L88();
  L88():
    given_values7 = ld `given.values`;
    check L453() else D126();
  L387():
    goto L63(r219);
  L389():
    goto L64(r224);
  L396():
    sym29 = ldf seq_along;
    base29 = ldf seq_along in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L397() else L398();
  L449():
    bad_givens = ldf `bad.givens`;
    check L450() else D124();
  L567():
    b_intervals19 = force? b_intervals18;
    checkMissing(b_intervals19);
    anyNA1 = ldf anyNA in base;
    r379 = dyn anyNA1(b_intervals19);
    check L568() else D179();
  L577():
    p66 = prom<V +>{
      b_intervals20 = ld `b.intervals`;
      b_intervals21 = force? b_intervals20;
      checkMissing(b_intervals21);
      return b_intervals21;
    };
    r383 = dyn nrow(p66);
    check L578() else D184();
  L594():
    p68 = prom<V +>{
      a_intervals22 = ld `a.intervals`;
      a_intervals23 = force? a_intervals22;
      checkMissing(a_intervals23);
      return a_intervals23;
    };
    r397 = dyn nrow2(p68);
    check L595() else D194();
  L631():
    columns8 = force? columns7;
    checkMissing(columns8);
    st `total.columns` = columns8;
    rows9 = ld rows;
    check L632() else D207();
  D124():
    deopt 433 [];
  D126():
    deopt 437 [given_values7];
  D179():
    deopt 624 [c89, c92, r379];
  D184():
    deopt 637 [r383];
  D194():
    deopt 670 [r397];
  D207():
    deopt 725 [rows9];
  L67(r236):
    st i = r236;
    sym30 = ldf `as.numeric`;
    base30 = ldf `as.numeric` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L401() else L402();
  L70(r250):
    r252 = `==`(r250, 1);
    c55 = `as.logical`(r252);
    if c55 then L412() else L71();
  L397():
    levels1 = ldf levels;
    check L399() else D101();
  L398():
    r235 = dyn base29(<lang `<-`(b.levels, levels(b))>);
    goto L67(r235);
  L408():
    number11 = ld number;
    check L410() else D107();
  L409():
    r249 = dyn base31(<sym number>);
    goto L70(r249);
  L450():
    r292 = dyn bad_givens();
    check L451() else D125();
  L453():
    given_values8 = force? given_values7;
    checkMissing(given_values8);
    c62 = `is.object`(given_values8);
    if c62 then L454() else L455(given_values8);
  L568():
    goto L127(c89, c92, r379);
  L578():
    st rows = r383;
    nrow1 = ldf nrow;
    check L579() else D185();
  L595():
    st nplots = r397;
    sym55 = ldf missing;
    base55 = ldf missing in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L596() else L597();
  L632():
    rows10 = force? rows9;
    checkMissing(rows10);
    st `total.rows` = rows10;
    st `f.row` = 1.0;
    st `f.col` = 1.0;
    show_given5 = ld `show.given`;
    check L633() else D208();
  D101():
    deopt 339 [];
  D107():
    deopt 359 [number11];
  D125():
    deopt 434 [r292];
  D185():
    deopt 640 [];
  D208():
    deopt 732 [show_given5];
  L68(r241):
    st b = r241;
    cbind1 = ldf cbind;
    check L405() else D105();
  L71():
    goto L73();
  L73():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L418() else L419();
  L89(dx21):
    st `a.intervals` = dx21;
    a_is_fac2 = ld `a.is.fac`;
    check L457() else D127();
  L136(r399):
    c113 = `as.logical`(r399);
    if c113 then L598() else L137();
  L399():
    p48 = prom<V +>{
      b14 = ld b;
      b15 = force? b14;
      checkMissing(b15);
      return b15;
    };
    r238 = dyn levels1(p48);
    check L400() else D102();
  L401():
    b16 = ld b;
    check L403() else D103();
  L402():
    r240 = dyn base30(<sym b>);
    goto L68(r240);
  L410():
    number12 = force? number11;
    checkMissing(number12);
    length5 = ldf length in base;
    r251 = dyn length5(number12);
    check L411() else D108();
  L412():
    sym32 = ldf `rep.int`;
    base32 = ldf `rep.int` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L413() else L414();
  L451():
    goto L88();
  L454():
    dr20 = tryDispatchBuiltin.1("[[", given_values8);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L456() else L455(dr20);
  L455(given_values10):
    __10 = ldf `[[` in base;
    r294 = dyn __10(given_values10, 1);
    goto L89(r294);
  L579():
    p67 = prom<V +>{
      a_intervals20 = ld `a.intervals`;
      a_intervals21 = force? a_intervals20;
      checkMissing(a_intervals21);
      return a_intervals21;
    };
    r385 = dyn nrow1(p67);
    check L580() else D186();
  L596():
    missing2 = ldf missing in base;
    r400 = dyn missing2(<sym rows>);
    goto L136(r400);
  L597():
    r398 = dyn base55(<sym rows>);
    goto L136(r398);
  L633():
    show_given6 = force? show_given5;
    checkMissing(show_given6);
    c117 = `is.object`(show_given6);
    if c117 then L634() else L635(show_given6);
  D102():
    deopt 341 [r238];
  D103():
    deopt 347 [b16];
  D105():
    deopt 353 [];
  D108():
    deopt 362 [r251];
  D127():
    deopt 443 [a_is_fac2];
  D186():
    deopt 642 [r385];
  L72(r254):
    st number = r254;
    goto L73();
  L74(r258):
    r260 = `==`(r258, 1);
    c56 = `as.logical`(r260);
    if c56 then L422() else L75();
  L137():
    sym61 = ldf missing;
    base61 = ldf missing in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L616() else L617();
  L145():
    rows7 = ld rows;
    check L624() else D201();
  L150(dx25):
    c118 = `as.logical`(dx25);
    if c118 then L637() else L151();
  L400():
    st `b.levels` = r238;
    r239 = seq_along(r238);
    goto L67(r239);
  L403():
    b17 = force? b16;
    checkMissing(b17);
    as_numeric1 = ldf `as.numeric` in base;
    r242 = dyn as_numeric1(b17);
    check L404() else D104();
  L405():
    p49 = prom<V +>{
      i4 = ld i;
      i5 = force? i4;
      checkMissing(i5);
      r243 = `-`(i5, 0.5);
      return r243;
    };
    p50 = prom<V +>{
      i6 = ld i;
      i7 = force? i6;
      checkMissing(i7);
      r245 = `+`(i7, 0.5);
      return r245;
    };
    r247 = dyn cbind1(p49, p50);
    check L406() else D106();
  L411():
    goto L70(r251);
  L413():
    number13 = ld number;
    check L415() else D109();
  L414():
    r253 = dyn base32(<sym number>, 2.0);
    goto L72(r253);
  L418():
    overlap7 = ld overlap;
    check L420() else D111();
  L419():
    r257 = dyn base33(<sym overlap>);
    goto L74(r257);
  L456():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L89(dx20);
  L457():
    a_is_fac3 = force? a_is_fac2;
    checkMissing(a_is_fac3);
    c63 = `as.logical`(a_is_fac3);
    if c63 then L458() else L90();
  L580():
    st columns = r385;
    rows1 = ld rows;
    check L581() else D187();
  L598():
    sym56 = ldf missing;
    base56 = ldf missing in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L599() else L600();
  L634():
    dr24 = tryDispatchBuiltin.1("[", show_given6);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L636() else L635(dr24);
  L635(show_given8):
    __12 = ldf `[` in base;
    r430 = dyn __12(show_given8, 1);
    goto L150(r430);
  D104():
    deopt 350 [r242];
  D106():
    deopt 356 [r247];
  D109():
    deopt 367 [number13];
  D111():
    deopt 377 [overlap7];
  D187():
    deopt 644 [rows1];
  D201():
    deopt 710 [rows7];
  L75():
    goto L77();
  L77():
    co_intervals1 = ldf `co.intervals`;
    check L428() else D115();
  L90():
    sym42 = ldf `is.numeric`;
    base42 = ldf `is.numeric` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L478() else L479();
  L96():
    have_b6 = ld `have.b`;
    check L504() else D150();
  L138(r402):
    c114 = `as.logical`(r402);
    if c114 then L601() else L139();
  L146(r421):
    c115 = `as.logical`(r421);
    if c115 then L618() else L147();
  L151():
    goto L152();
  L152():
    have_b12 = ld `have.b`;
    check L642() else D212();
  L404():
    goto L68(r242);
  L406():
    goto L69(r247);
  L415():
    number14 = force? number13;
    checkMissing(number14);
    rep_int = ldf `rep.int` in base;
    r255 = dyn rep_int(number14, 2.0);
    check L416() else D110();
  L420():
    overlap8 = force? overlap7;
    checkMissing(overlap8);
    length6 = ldf length in base;
    r259 = dyn length6(overlap8);
    check L421() else D112();
  L422():
    sym34 = ldf `rep.int`;
    base34 = ldf `rep.int` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L423() else L424();
  L458():
    levels2 = ldf levels;
    check L459() else D128();
  L581():
    rows2 = force? rows1;
    checkMissing(rows2);
    columns1 = ld columns;
    check L582() else D188();
  L599():
    missing3 = ldf missing in base;
    r403 = dyn missing3(<sym columns>);
    goto L138(r403);
  L600():
    r401 = dyn base56(<sym columns>);
    goto L138(r401);
  L616():
    missing4 = ldf missing in base;
    r422 = dyn missing4(<sym columns>);
    goto L146(r422);
  L617():
    r420 = dyn base61(<sym columns>);
    goto L146(r420);
  L624():
    rows8 = force? rows7;
    checkMissing(rows8);
    columns5 = ld columns;
    check L625() else D202();
  L636():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L150(dx24);
  L637():
    rows11 = ld rows;
    check L638() else D209();
  D110():
    deopt 371 [r255];
  D112():
    deopt 380 [r259];
  D115():
    deopt 394 [];
  D128():
    deopt 446 [];
  D150():
    deopt 522 [have_b6];
  D188():
    deopt 645 [rows2, columns1];
  D202():
    deopt 711 [rows8, columns5];
  D209():
    deopt 737 [rows11];
  D212():
    deopt 749 [have_b12];
  L76(r262):
    st overlap = r262;
    goto L77();
  L97(r313):
    c66 = `as.logical`(r313);
    if c66 then L482() else L98();
  L139():
    sym60 = ldf ceiling;
    base60 = ldf ceiling in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L611() else L612();
  L143(r414):
    goto L145();
  L147():
    goto L145();
  L416():
    goto L72(r255);
  L421():
    goto L74(r259);
  L423():
    overlap9 = ld overlap;
    check L425() else D113();
  L424():
    r261 = dyn base34(<sym overlap>, 2.0);
    goto L76(r261);
  L428():
    p51 = prom<V +>{
      sym35 = ldf unclass;
      base35 = ldf unclass in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r266):
      return r266;
    L1():
      b18 = ld b;
      b19 = force? b18;
      checkMissing(b19);
      unclass1 = ldf unclass in base;
      r267 = dyn unclass1(b19);
      goto L0(r267);
    L2():
      r265 = dyn base35(<sym b>);
      goto L0(r265);
    };
    p52 = prom<V +>{
      number15 = ld number;
      number16 = force? number15;
      checkMissing(number16);
      c57 = `is.object`(number16);
      if c57 then L1() else L2(number16);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", number16);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(number18):
      __8 = ldf `[` in base;
      r269 = dyn __8(number18, 2);
      goto L0(r269);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p53 = prom<V +>{
      overlap11 = ld overlap;
      overlap12 = force? overlap11;
      checkMissing(overlap12);
      c58 = `is.object`(overlap12);
      if c58 then L1() else L2(overlap12);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", overlap12);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(overlap14):
      __9 = ldf `[` in base;
      r271 = dyn __9(overlap14, 2);
      goto L0(r271);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r273 = dyn co_intervals1[, number, overlap](p51, p52, p53);
    check L429() else D116();
  L459():
    p54 = prom<V +>{
      a22 = ld a;
      a23 = force? a22;
      checkMissing(a23);
      return a23;
    };
    r296 = dyn levels2(p54);
    check L460() else D129();
  L478():
    a26 = ld a;
    check L480() else D138();
  L479():
    r312 = dyn base42(<sym a>);
    goto L97(r312);
  L504():
    have_b7 = force? have_b6;
    checkMissing(have_b7);
    c75 = `as.logical`(have_b7);
    if c75 then L505() else L106();
  L582():
    columns2 = force? columns1;
    checkMissing(columns2);
    r386 = `*`(rows2, columns2);
    st nplots = r386;
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L583() else L584();
  L601():
    sym57 = ldf ceiling;
    base57 = ldf ceiling in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L602() else L603();
  L618():
    sym62 = ldf ceiling;
    base62 = ldf ceiling in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L619() else L620();
  L625():
    columns6 = force? columns5;
    checkMissing(columns6);
    r427 = `*`(rows8, columns6);
    nplots6 = ld nplots;
    check L626() else D203();
  L638():
    rows12 = force? rows11;
    checkMissing(rows12);
    r431 = `+`(rows12, 1.0);
    st `total.rows` = r431;
    rows13 = ld rows;
    check L639() else D210();
  L642():
    have_b13 = force? have_b12;
    checkMissing(have_b13);
    c119 = `as.logical`(have_b13);
    if c119 then L643() else L153(c119);
  D113():
    deopt 385 [overlap9];
  D116():
    deopt 400 [r273];
  D129():
    deopt 448 [r296];
  D138():
    deopt 482 [a26];
  D203():
    deopt 713 [r427, nplots6];
  D210():
    deopt 742 [rows13];
  L98():
    goto L96();
  L106():
    goto L79();
  L131(r388):
    r390 = `<`(r388, 2);
    c112 = `as.logical`(r390);
    if c112 then L587() else L132();
  L140(r405):
    st rows = r405;
    sym59 = ldf ceiling;
    base59 = ldf ceiling in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L606() else L607();
  L144(r416):
    st rows = r416;
    goto L143(r416);
  L148(r424):
    st columns = r424;
    goto L145();
  L153(c121):
    c130 = `as.logical`(c121);
    if c130 then L649() else L155();
  L425():
    overlap10 = force? overlap9;
    checkMissing(overlap10);
    rep_int1 = ldf `rep.int` in base;
    r263 = dyn rep_int1(overlap10, 2.0);
    check L426() else D114();
  L429():
    goto L69(r273);
  L460():
    st `a.levels` = r296;
    sym39 = ldf `is.character`;
    base39 = ldf `is.character` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L461() else L462();
  L480():
    a27 = force? a26;
    checkMissing(a27);
    is_numeric = ldf `is.numeric` in base;
    r314 = dyn is_numeric(a27);
    check L481() else D139();
  L482():
    sym43 = ldf `is.numeric`;
    base43 = ldf `is.numeric` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L483() else L484();
  L505():
    given_values11 = ld `given.values`;
    check L506() else D151();
  L583():
    show_given1 = ld `show.given`;
    check L585() else D189();
  L584():
    r387 = dyn base53(<sym show.given>);
    goto L131(r387);
  L602():
    sym58 = ldf round;
    base58 = ldf round in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L604() else L605();
  L603():
    r404 = dyn base57(<lang round(sqrt(nplots))>);
    goto L140(r404);
  L611():
    nplots2 = ld nplots;
    check L613() else D197();
  L612():
    r415 = dyn base60(<lang `/`(nplots, columns)>);
    goto L144(r415);
  L619():
    nplots4 = ld nplots;
    check L621() else D199();
  L620():
    r423 = dyn base62(<lang `/`(nplots, rows)>);
    goto L148(r423);
  L626():
    nplots7 = force? nplots6;
    checkMissing(nplots7);
    r428 = `<`(r427, nplots7);
    c116 = `as.logical`(r428);
    if c116 then L627() else L149();
  L639():
    rows14 = force? rows13;
    checkMissing(rows14);
    total_rows = ld `total.rows`;
    check L640() else D211();
  L643():
    show_given9 = ld `show.given`;
    check L644() else D213();
  D114():
    deopt 389 [r263];
  D139():
    deopt 485 [r314];
  D151():
    deopt 524 [given_values11];
  D189():
    deopt 651 [show_given1];
  D197():
    deopt 692 [nplots2];
  D199():
    deopt 702 [nplots4];
  D211():
    deopt 743 [rows14, total_rows];
  D213():
    deopt 751 [c119, show_given9];
  L91(r298):
    c65 = `as.logical`(r298);
    if c65 then L464() else L92();
  L99(r316):
    r318 = `!`(r316);
    c67 = `as.logical`(r318);
    if c67 then L487() else L100();
  L132():
    goto L134(NULL);
  L134(r394):
    goto L135();
  L141(r407):
    r409 = ceiling(r407);
    goto L140(r409);
  L142(r411):
    st columns = r411;
    goto L143(r411);
  L149():
    goto L135();
  L155():
    goto L156();
  L156():
    have_b14 = ld `have.b`;
    check L654() else D217();
  L426():
    goto L76(r263);
  L461():
    a_intervals = ld `a.intervals`;
    check L463() else D130();
  L462():
    r297 = dyn base39(<sym a.intervals>);
    goto L91(r297);
  L481():
    goto L97(r314);
  L483():
    a_intervals8 = ld `a.intervals`;
    check L485() else D140();
  L484():
    r315 = dyn base43(<sym a.intervals>);
    goto L99(r315);
  L506():
    given_values12 = force? given_values11;
    checkMissing(given_values12);
    c76 = `is.object`(given_values12);
    if c76 then L507() else L508(given_values12);
  L585():
    show_given2 = force? show_given1;
    checkMissing(show_given2);
    length8 = ldf length in base;
    r389 = dyn length8(show_given2);
    check L586() else D190();
  L587():
    sym54 = ldf `rep.int`;
    base54 = ldf `rep.int` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L588() else L589();
  L604():
    round = ldf round in base;
    r408 = dyn round(<lang sqrt(nplots)>);
    goto L141(r408);
  L605():
    r406 = dyn base58(<lang sqrt(nplots)>);
    goto L141(r406);
  L606():
    nplots = ld nplots;
    check L608() else D195();
  L607():
    r410 = dyn base59(<lang `/`(nplots, rows)>);
    goto L142(r410);
  L613():
    nplots3 = force? nplots2;
    checkMissing(nplots3);
    columns3 = ld columns;
    check L614() else D198();
  L621():
    nplots5 = force? nplots4;
    checkMissing(nplots5);
    rows5 = ld rows;
    check L622() else D200();
  L627():
    stop2 = ldf stop;
    check L628() else D204();
  L640():
    total_rows1 = force? total_rows;
    checkMissing(total_rows1);
    r432 = `/`(rows14, total_rows1);
    st `f.row` = r432;
    goto L152();
  L644():
    show_given10 = force? show_given9;
    checkMissing(show_given10);
    c122 = `is.object`(show_given10);
    if c122 then L645() else L646(c119, show_given10);
  L649():
    columns9 = ld columns;
    check L650() else D214();
  D130():
    deopt 451 [a_intervals];
  D140():
    deopt 488 [a_intervals8];
  D190():
    deopt 654 [r389];
  D195():
    deopt 685 [nplots];
  D198():
    deopt 693 [nplots3, columns3];
  D200():
    deopt 703 [nplots5, rows5];
  D204():
    deopt 717 [];
  D214():
    deopt 757 [columns9];
  D217():
    deopt 769 [have_b14];
  L92():
    goto L94();
  L94():
    cbind2 = ldf cbind;
    check L471() else D134();
  L100():
    goto L101();
  L101():
    sym44 = ldf `is.matrix`;
    base44 = ldf `is.matrix` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L491() else L492();
  L107(dx23):
    st `b.intervals` = dx23;
    b_is_fac2 = ld `b.is.fac`;
    check L510() else D152();
  L133(r392):
    st `show.given` = r392;
    goto L134(r392);
  L154(c126, dx27):
    c127 = `as.logical`(dx27);
    c128 = `&&`(c126, c127);
    goto L153(c128);
  L463():
    a_intervals1 = force? a_intervals;
    checkMissing(a_intervals1);
    c64 = `is.character`(a_intervals1);
    goto L91(c64);
  L464():
    sym40 = ldf match;
    base40 = ldf match in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L465() else L466();
  L485():
    a_intervals9 = force? a_intervals8;
    checkMissing(a_intervals9);
    is_numeric1 = ldf `is.numeric` in base;
    r317 = dyn is_numeric1(a_intervals9);
    check L486() else D141();
  L487():
    bad_givens1 = ldf `bad.givens`;
    check L488() else D142();
  L507():
    dr22 = tryDispatchBuiltin.1("[[", given_values12);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L509() else L508(dr22);
  L508(given_values14):
    __11 = ldf `[[` in base;
    r334 = dyn __11(given_values14, 2);
    goto L107(r334);
  L586():
    goto L131(r389);
  L588():
    show_given3 = ld `show.given`;
    check L590() else D191();
  L589():
    r391 = dyn base54(<sym show.given>, 2);
    goto L133(r391);
  L608():
    nplots1 = force? nplots;
    checkMissing(nplots1);
    rows3 = ld rows;
    check L609() else D196();
  L614():
    columns4 = force? columns3;
    checkMissing(columns4);
    r417 = `/`(nplots3, columns4);
    r418 = ceiling(r417);
    goto L144(r418);
  L622():
    rows6 = force? rows5;
    checkMissing(rows6);
    r425 = `/`(nplots5, rows6);
    r426 = ceiling(r425);
    goto L148(r426);
  L628():
    r429 = dyn stop2("rows * columns too small");
    check L629() else D205();
  L645():
    dr26 = tryDispatchBuiltin.1("[", show_given10);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L647() else L646(c119, dr26);
  L646(c124, show_given12):
    __13 = ldf `[` in base;
    r434 = dyn __13(show_given12, 2);
    goto L154(c124, r434);
  L650():
    columns10 = force? columns9;
    checkMissing(columns10);
    r435 = `+`(columns10, 1.0);
    st `total.columns` = r435;
    columns11 = ld columns;
    check L651() else D215();
  L654():
    have_b15 = force? have_b14;
    checkMissing(have_b15);
    c131 = `as.logical`(have_b15);
    if c131 then L655() else L157();
  D134():
    deopt 468 [];
  D141():
    deopt 491 [r317];
  D142():
    deopt 494 [];
  D152():
    deopt 530 [b_is_fac2];
  D191():
    deopt 659 [show_given3];
  D196():
    deopt 686 [nplots1, rows3];
  D205():
    deopt 719 [r429];
  D215():
    deopt 762 [columns11];
  L93(r300):
    st `a.intervals` = r300;
    goto L94();
  L102(r322):
    r324 = `!`(r322);
    c68 = `as.logical`(r324);
    if c68 then L103(c68) else L495();
  L157():
    sym64 = ldf c;
    base64 = ldf c in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L660() else L661();
  L159(r441):
    st mar = r441;
    sym65 = ldf c;
    base65 = ldf c in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L663() else L664();
  L465():
    a_intervals2 = ld `a.intervals`;
    check L467() else D131();
  L466():
    r299 = dyn base40(<sym a.intervals>, <sym a.levels>);
    goto L93(r299);
  L471():
    p55 = prom<V +>{
      a_intervals4 = ld `a.intervals`;
      a_intervals5 = force? a_intervals4;
      checkMissing(a_intervals5);
      r303 = `-`(a_intervals5, 0.5);
      return r303;
    };
    p56 = prom<V +>{
      a_intervals6 = ld `a.intervals`;
      a_intervals7 = force? a_intervals6;
      checkMissing(a_intervals7);
      r305 = `+`(a_intervals7, 0.5);
      return r305;
    };
    r307 = dyn cbind2(p55, p56);
    check L472() else D135();
  L486():
    goto L99(r317);
  L488():
    r319 = dyn bad_givens1();
    check L489() else D143();
  L491():
    a_intervals10 = ld `a.intervals`;
    check L493() else D144();
  L492():
    r321 = dyn base44(<sym a.intervals>);
    goto L102(r321);
  L509():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L107(dx22);
  L510():
    b_is_fac3 = force? b_is_fac2;
    checkMissing(b_is_fac3);
    c77 = `as.logical`(b_is_fac3);
    if c77 then L511() else L108();
  L590():
    show_given4 = force? show_given3;
    checkMissing(show_given4);
    rep_int2 = ldf `rep.int` in base;
    r393 = dyn rep_int2(show_given4, 2);
    check L591() else D192();
  L609():
    rows4 = force? rows3;
    checkMissing(rows4);
    r412 = `/`(nplots1, rows4);
    r413 = ceiling(r412);
    goto L142(r413);
  L629():
    goto L135();
  L647():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L154(c119, dx26);
  L651():
    columns12 = force? columns11;
    checkMissing(columns12);
    total_columns = ld `total.columns`;
    check L652() else D216();
  L655():
    sym63 = ldf `rep.int`;
    base63 = ldf `rep.int` in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L656() else L657();
  D131():
    deopt 456 [a_intervals2];
  D135():
    deopt 471 [r307];
  D143():
    deopt 495 [r319];
  D144():
    deopt 500 [a_intervals10];
  D192():
    deopt 663 [r393];
  D216():
    deopt 763 [columns12, total_columns];
  L103(c69):
    c74 = `as.logical`(c69);
    if c74 then L499() else L104();
  L108():
    sym48 = ldf `is.numeric`;
    base48 = ldf `is.numeric` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L531() else L532();
  L114(r351):
    goto L79();
  L158(r439):
    goto L159(r439);
  L160(r445):
    st oma = r445;
    have_b16 = ld `have.b`;
    check L666() else D221();
  L467():
    a_intervals3 = force? a_intervals2;
    checkMissing(a_intervals3);
    a_levels = ld `a.levels`;
    check L468() else D132();
  L472():
    st `a.intervals` = r307;
    sym41 = ldf `as.numeric`;
    base41 = ldf `as.numeric` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L473() else L474();
  L489():
    goto L101();
  L493():
    a_intervals11 = force? a_intervals10;
    checkMissing(a_intervals11);
    is_matrix = ldf `is.matrix` in base;
    r323 = dyn is_matrix(a_intervals11);
    check L494() else D145();
  L495():
    ncol = ldf ncol;
    check L496() else D146();
  L511():
    levels3 = ldf levels;
    check L512() else D153();
  L591():
    goto L133(r393);
  L652():
    total_columns1 = force? total_columns;
    checkMissing(total_columns1);
    r436 = `/`(columns12, total_columns1);
    st `f.col` = r436;
    goto L156();
  L656():
    rep_int3 = ldf `rep.int` in base;
    r440 = dyn rep_int3(0.0, 4.0);
    check L658() else D218();
  L657():
    r438 = dyn base63(0.0, 4.0);
    goto L158(r438);
  L660():
    c132 = ldf c in base;
    r443 = dyn c132(0.5, 0.0, 0.5, 0.0);
    check L662() else D219();
  L661():
    r442 = dyn base64(0.5, 0.0, 0.5, 0.0);
    goto L159(r442);
  L663():
    c133 = ldf c in base;
    r446 = dyn c133(5.0, 6.0, 5.0, 4.0);
    check L665() else D220();
  L664():
    r444 = dyn base65(5.0, 6.0, 5.0, 4.0);
    goto L160(r444);
  D132():
    deopt 458 [a_levels];
  D145():
    deopt 503 [r323];
  D146():
    deopt 506 [c68];
  D153():
    deopt 533 [];
  D218():
    deopt 776 [r440];
  D219():
    deopt 784 [r443];
  D220():
    deopt 793 [r446];
  D221():
    deopt 795 [have_b16];
  L95(r309):
    st a = r309;
    goto L96();
  L104():
    goto L105(NULL);
  L105(r333):
    goto L96();
  L115(r353):
    c80 = `as.logical`(r353);
    if c80 then L535() else L116();
  L468():
    a_levels1 = force? a_levels;
    checkMissing(a_levels1);
    match = ldf match in base;
    r301 = dyn match(a_intervals3, a_levels1, NA_INT, NULL);
    check L469() else D133();
  L473():
    a24 = ld a;
    check L475() else D136();
  L474():
    r308 = dyn base41(<sym a>);
    goto L95(r308);
  L494():
    goto L102(r323);
  L496():
    p57 = prom<V +>{
      a_intervals12 = ld `a.intervals`;
      a_intervals13 = force? a_intervals12;
      checkMissing(a_intervals13);
      return a_intervals13;
    };
    r326 = dyn ncol(p57);
    check L497() else D147();
  L499():
    cbind3 = ldf cbind;
    check L500() else D148();
  L512():
    p60 = prom<V +>{
      b20 = ld b;
      b21 = force? b20;
      checkMissing(b21);
      return b21;
    };
    r336 = dyn levels3(p60);
    check L513() else D154();
  L531():
    b24 = ld b;
    check L533() else D163();
  L532():
    r352 = dyn base48(<sym b>);
    goto L115(r352);
  L658():
    goto L158(r440);
  L662():
    goto L159(r443);
  L665():
    goto L160(r446);
  L666():
    have_b17 = force? have_b16;
    checkMissing(have_b17);
    c134 = `as.logical`(have_b17);
    if c134 then L667() else L161();
  D133():
    deopt 463 [r301];
  D136():
    deopt 475 [a24];
  D147():
    deopt 508 [c68, r326];
  D148():
    deopt 513 [];
  D154():
    deopt 535 [r336];
  D163():
    deopt 569 [b24];
  L116():
    goto L114(NULL);
  L161():
    goto L166();
  L166():
    a_is_fac4 = ld `a.is.fac`;
    check L678() else D223();
  L469():
    goto L93(r301);
  L475():
    a25 = force? a24;
    checkMissing(a25);
    as_numeric2 = ldf `as.numeric` in base;
    r310 = dyn as_numeric2(a25);
    check L476() else D137();
  L497():
    r327 = `!=`(r326, 2.0);
    c71 = `as.logical`(r327);
    c72 = `||`(c68, c71);
    goto L103(c72);
  L500():
    p58 = prom<V +>{
      a_intervals14 = ld `a.intervals`;
      a_intervals15 = force? a_intervals14;
      checkMissing(a_intervals15);
      r328 = `-`(a_intervals15, 0.5);
      return r328;
    };
    p59 = prom<V +>{
      a_intervals16 = ld `a.intervals`;
      a_intervals17 = force? a_intervals16;
      checkMissing(a_intervals17);
      r330 = `+`(a_intervals17, 0.5);
      return r330;
    };
    r332 = dyn cbind3(p58, p59);
    check L501() else D149();
  L513():
    st `b.levels` = r336;
    sym45 = ldf `is.character`;
    base45 = ldf `is.character` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L514() else L515();
  L533():
    b25 = force? b24;
    checkMissing(b25);
    is_numeric2 = ldf `is.numeric` in base;
    r354 = dyn is_numeric2(b25);
    check L534() else D164();
  L535():
    sym49 = ldf `is.numeric`;
    base49 = ldf `is.numeric` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L536() else L537();
  L667():
    l = ld oma;
    c135 = `is.object`(l);
    if c135 then L668() else L669(5.0, l);
  D137():
    deopt 478 [r310];
  D149():
    deopt 516 [r332];
  D164():
    deopt 572 [r354];
  D223():
    deopt 818 [a_is_fac4];
  L109(r338):
    c79 = `as.logical`(r338);
    if c79 then L517() else L110();
  L117(r356):
    r358 = `!`(r356);
    c81 = `as.logical`(r358);
    if c81 then L540() else L118();
  L162(dx29):
    st oma = dx29;
    b_is_fac4 = ld `b.is.fac`;
    check L671() else D222();
  L476():
    goto L95(r310);
  L501():
    st `a.intervals` = r332;
    goto L105(r332);
  L514():
    b_intervals = ld `b.intervals`;
    check L516() else D155();
  L515():
    r337 = dyn base45(<sym b.intervals>);
    goto L109(r337);
  L534():
    goto L115(r354);
  L536():
    b_intervals8 = ld `b.intervals`;
    check L538() else D165();
  L537():
    r355 = dyn base49(<sym b.intervals>);
    goto L117(r355);
  L668():
    dr28 = tryDispatchBuiltin.0("[<-", l, 5.0);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L670() else L669(5.0, dr28);
  L669(r448, l2):
    ___ = ldf `[<-` in base;
    r451 = dyn ___(l2, 5.0, 2);
    goto L162(r451);
  L678():
    a_is_fac5 = force? a_is_fac4;
    checkMissing(a_is_fac5);
    c138 = `as.logical`(a_is_fac5);
    if c138 then L679() else L167(c138);
  D155():
    deopt 538 [b_intervals];
  D165():
    deopt 575 [b_intervals8];
  D222():
    deopt 804 [b_is_fac4];
  L110():
    goto L112();
  L112():
    cbind4 = ldf cbind;
    check L524() else D159();
  L118():
    goto L119();
  L119():
    sym50 = ldf `is.matrix`;
    base50 = ldf `is.matrix` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L544() else L545();
  L167(c140):
    c149 = `as.logical`(c140);
    if c149 then L685() else L169();
  L516():
    b_intervals1 = force? b_intervals;
    checkMissing(b_intervals1);
    c78 = `is.character`(b_intervals1);
    goto L109(c78);
  L517():
    sym46 = ldf match;
    base46 = ldf match in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L518() else L519();
  L538():
    b_intervals9 = force? b_intervals8;
    checkMissing(b_intervals9);
    is_numeric3 = ldf `is.numeric` in base;
    r357 = dyn is_numeric3(b_intervals9);
    check L539() else D166();
  L540():
    bad_givens2 = ldf `bad.givens`;
    check L541() else D167();
  L670():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L162(dx28);
  L671():
    b_is_fac5 = force? b_is_fac4;
    checkMissing(b_is_fac5);
    r452 = `!`(b_is_fac5);
    c136 = `as.logical`(r452);
    if c136 then L672() else L163();
  L679():
    show_given13 = ld `show.given`;
    check L680() else D224();
  D159():
    deopt 555 [];
  D166():
    deopt 578 [r357];
  D167():
    deopt 581 [];
  D224():
    deopt 820 [c138, show_given13];
  L111(r340):
    st `b.intervals` = r340;
    goto L112();
  L120(r362):
    r364 = `!`(r362);
    c82 = `as.logical`(r364);
    if c82 then L121(c82) else L548();
  L163():
    goto L165(NULL);
  L165(r458):
    goto L166();
  L169():
    goto L172();
  L172():
    par2 = ldf par;
    check L694() else D226();
  L518():
    b_intervals2 = ld `b.intervals`;
    check L520() else D156();
  L519():
    r339 = dyn base46(<sym b.intervals>, <sym b.levels>);
    goto L111(r339);
  L524():
    p61 = prom<V +>{
      b_intervals4 = ld `b.intervals`;
      b_intervals5 = force? b_intervals4;
      checkMissing(b_intervals5);
      r343 = `-`(b_intervals5, 0.5);
      return r343;
    };
    p62 = prom<V +>{
      b_intervals6 = ld `b.intervals`;
      b_intervals7 = force? b_intervals6;
      checkMissing(b_intervals7);
      r345 = `+`(b_intervals7, 0.5);
      return r345;
    };
    r347 = dyn cbind4(p61, p62);
    check L525() else D160();
  L539():
    goto L117(r357);
  L541():
    r359 = dyn bad_givens2();
    check L542() else D168();
  L544():
    b_intervals10 = ld `b.intervals`;
    check L546() else D169();
  L545():
    r361 = dyn base50(<sym b.intervals>);
    goto L120(r361);
  L672():
    l3 = ld oma;
    c137 = `is.object`(l3);
    if c137 then L673() else L674(5.0, l3);
  L680():
    show_given14 = force? show_given13;
    checkMissing(show_given14);
    c141 = `is.object`(show_given14);
    if c141 then L681() else L682(c138, show_given14);
  L685():
    oma = ld oma;
    check L686() else D225();
  D156():
    deopt 543 [b_intervals2];
  D160():
    deopt 558 [r347];
  D168():
    deopt 582 [r359];
  D169():
    deopt 587 [b_intervals10];
  D225():
    deopt 826 [oma];
  D226():
    deopt 841 [];
  L121(c83):
    c88 = `as.logical`(c83);
    if c88 then L552() else L122();
  L164(r456, dx31):
    st oma = dx31;
    goto L165(r456);
  L168(c145, dx33):
    c146 = `as.logical`(dx33);
    c147 = `&&`(c145, c146);
    goto L167(c147);
  L520():
    b_intervals3 = force? b_intervals2;
    checkMissing(b_intervals3);
    b_levels = ld `b.levels`;
    check L521() else D157();
  L525():
    st `b.intervals` = r347;
    sym47 = ldf `as.numeric`;
    base47 = ldf `as.numeric` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L526() else L527();
  L542():
    goto L119();
  L546():
    b_intervals11 = force? b_intervals10;
    checkMissing(b_intervals11);
    is_matrix1 = ldf `is.matrix` in base;
    r363 = dyn is_matrix1(b_intervals11);
    check L547() else D170();
  L548():
    ncol1 = ldf ncol;
    check L549() else D171();
  L673():
    dr30 = tryDispatchBuiltin.0("[<-", l3, 5.0);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L675() else L674(5.0, dr30);
  L674(r454, l5):
    ___1 = ldf `[<-` in base;
    r457 = dyn ___1(l5, 5.0, 4);
    goto L164(r454, r457);
  L681():
    dr32 = tryDispatchBuiltin.1("[", show_given14);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L683() else L682(c138, dr32);
  L682(c143, show_given16):
    __14 = ldf `[` in base;
    r460 = dyn __14(show_given16, 1);
    goto L168(c143, r460);
  L686():
    oma1 = force? oma;
    checkMissing(oma1);
    c150 = `is.object`(oma1);
    if c150 then L687() else L688(oma1);
  L694():
    p69 = prom<V +>{
      sym66 = ldf c;
      base66 = ldf c in base;
      guard66 = `==`.4(sym66, base66);
      if guard66 then L1() else L2();
    L0(r470):
      return r470;
    L1():
      total_rows2 = ld `total.rows`;
      total_rows3 = force? total_rows2;
      checkMissing(total_rows3);
      total_columns2 = ld `total.columns`;
      total_columns3 = force? total_columns2;
      checkMissing(total_columns3);
      c152 = ldf c in base;
      r471 = dyn c152(total_rows3, total_columns3);
      goto L0(r471);
    L2():
      r469 = dyn base66(<sym total.rows>, <sym total.columns>);
      goto L0(r469);
    };
    p70 = prom<V +>{
      oma4 = ld oma;
      oma5 = force? oma4;
      checkMissing(oma5);
      return oma5;
    };
    p71 = prom<V +>{
      mar = ld mar;
      mar1 = force? mar;
      checkMissing(mar1);
      return mar1;
    };
    r475 = dyn par2[mfrow, oma, mar, xaxs, yaxs](p69, p70, p71, "r", "r");
    check L695() else D227();
  D157():
    deopt 545 [b_levels];
  D170():
    deopt 590 [r363];
  D171():
    deopt 593 [c82];
  D227():
    deopt 852 [r475];
  L113(r349):
    st b = r349;
    goto L114(r349);
  L122():
    goto L123(NULL);
  L123(r373):
    goto L114(r373);
  L170(dx35):
    r462 = `-`(dx35, 1.0);
    l6 = ld oma;
    c151 = `is.object`(l6);
    if c151 then L690() else L691(r462, l6);
  L521():
    b_levels1 = force? b_levels;
    checkMissing(b_levels1);
    match1 = ldf match in base;
    r341 = dyn match1(b_intervals3, b_levels1, NA_INT, NULL);
    check L522() else D158();
  L526():
    b22 = ld b;
    check L528() else D161();
  L527():
    r348 = dyn base47(<sym b>);
    goto L113(r348);
  L547():
    goto L120(r363);
  L549():
    p63 = prom<V +>{
      b_intervals12 = ld `b.intervals`;
      b_intervals13 = force? b_intervals12;
      checkMissing(b_intervals13);
      return b_intervals13;
    };
    r366 = dyn ncol1(p63);
    check L550() else D172();
  L552():
    cbind5 = ldf cbind;
    check L553() else D173();
  L675():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L164(5.0, dx30);
  L683():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L168(c138, dx32);
  L687():
    dr34 = tryDispatchBuiltin.1("[", oma1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L689() else L688(dr34);
  L688(oma3):
    __15 = ldf `[` in base;
    r461 = dyn __15(oma3, 3);
    goto L170(r461);
  L695():
    st opar = r475;
    sym67 = ldf `on.exit`;
    base67 = ldf `on.exit` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L696() else L697();
  D158():
    deopt 550 [r341];
  D161():
    deopt 562 [b22];
  D172():
    deopt 595 [c82, r366];
  D173():
    deopt 600 [];
  L171(r466, dx37):
    st oma = dx37;
    goto L172();
  L173():
    dev_hold = ldf `dev.hold`;
    check L698() else D228();
  L522():
    goto L111(r341);
  L528():
    b23 = force? b22;
    checkMissing(b23);
    as_numeric3 = ldf `as.numeric` in base;
    r350 = dyn as_numeric3(b23);
    check L529() else D162();
  L550():
    r367 = `!=`(r366, 2.0);
    c85 = `as.logical`(r367);
    c86 = `||`(c82, c85);
    goto L121(c86);
  L553():
    p64 = prom<V +>{
      b_intervals14 = ld `b.intervals`;
      b_intervals15 = force? b_intervals14;
      checkMissing(b_intervals15);
      r368 = `-`(b_intervals15, 0.5);
      return r368;
    };
    p65 = prom<V +>{
      b_intervals16 = ld `b.intervals`;
      b_intervals17 = force? b_intervals16;
      checkMissing(b_intervals17);
      r370 = `+`(b_intervals17, 0.5);
      return r370;
    };
    r372 = dyn cbind5(p64, p65);
    check L554() else D174();
  L689():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L170(dx34);
  L690():
    dr36 = tryDispatchBuiltin.0("[<-", l6, r462);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L692() else L691(r462, dr36);
  L691(r464, l8):
    ___2 = ldf `[<-` in base;
    r467 = dyn ___2(l8, r462, 3);
    goto L171(r464, r467);
  L696():
    on_exit = ldf `on.exit` in base;
    r478 = dyn on_exit(<lang par(opar)>);
    goto L173();
  L697():
    r476 = dyn base67(<lang par(opar)>);
    goto L173();
  D162():
    deopt 565 [r350];
  D174():
    deopt 603 [r372];
  D228():
    deopt 858 [];
  L529():
    goto L113(r350);
  L554():
    st `b.intervals` = r372;
    goto L123(r372);
  L692():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L171(r462, dx36);
  L698():
    r479 = dyn dev_hold();
    check L699() else D229();
  D229():
    deopt 859 [r479];
  L699():
    sym68 = ldf `on.exit`;
    base68 = ldf `on.exit` in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L700() else L701();
  L174():
    plot_new = ldf `plot.new`;
    check L702() else D230();
  L700():
    on_exit1 = ldf `on.exit` in base;
    r482 = dyn on_exit1(<lang dev.flush()>, TRUE);
    goto L174();
  L701():
    r480 = dyn base68[, add](<lang dev.flush()>, TRUE);
    goto L174();
  D230():
    deopt 864 [];
  L702():
    r483 = dyn plot_new();
    check L703() else D231();
  D231():
    deopt 865 [r483];
  L703():
    sym69 = ldf missing;
    base69 = ldf missing in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L704() else L705();
  L175(r485):
    c153 = `as.logical`(r485);
    if c153 then L706() else L176();
  L704():
    missing5 = ldf missing in base;
    r486 = dyn missing5(<sym xlim>);
    goto L175(r486);
  L705():
    r484 = dyn base69(<sym xlim>);
    goto L175(r484);
  L176():
    goto L179();
  L179():
    sym72 = ldf missing;
    base72 = ldf missing in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L715() else L716();
  L706():
    sym70 = ldf range;
    base70 = ldf range in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L707() else L708();
  L177(r488):
    st xlim = r488;
    goto L179();
  L180(r495):
    c154 = `as.logical`(r495);
    if c154 then L717() else L181();
  L707():
    sym71 = ldf `as.numeric`;
    base71 = ldf `as.numeric` in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L709() else L710();
  L708():
    r487 = dyn base70[, finite](<lang as.numeric(x)>, TRUE);
    goto L177(r487);
  L715():
    missing6 = ldf missing in base;
    r496 = dyn missing6(<sym ylim>);
    goto L180(r496);
  L716():
    r494 = dyn base72(<sym ylim>);
    goto L180(r494);
  L178(r490):
    range = ldf range in base;
    r492 = dyn range(r490, TRUE);
    check L713() else D234();
  L181():
    goto L184();
  L184():
    sym75 = ldf rep_len;
    base75 = ldf rep_len in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L726() else L727();
  L709():
    x10 = ld x;
    check L711() else D232();
  L710():
    r489 = dyn base71(<sym x>);
    goto L178(r489);
  L717():
    sym73 = ldf range;
    base73 = ldf range in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L718() else L719();
  D232():
    deopt 873 [x10];
  D234():
    deopt 880 [r492];
  L182(r498):
    st ylim = r498;
    goto L184();
  L185(r505):
    st pch = r505;
    sym76 = ldf rep_len;
    base76 = ldf rep_len in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L731() else L732();
  L711():
    x11 = force? x10;
    checkMissing(x11);
    as_numeric4 = ldf `as.numeric` in base;
    r491 = dyn as_numeric4(x11);
    check L712() else D233();
  L713():
    goto L177(r492);
  L718():
    sym74 = ldf `as.numeric`;
    base74 = ldf `as.numeric` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L720() else L721();
  L719():
    r497 = dyn base73[, finite](<lang as.numeric(y)>, TRUE);
    goto L182(r497);
  L726():
    pch1 = ld pch;
    check L728() else D238();
  L727():
    r504 = dyn base75(<sym pch>, <sym nobs>);
    goto L185(r504);
  D233():
    deopt 876 [r491];
  D238():
    deopt 904 [pch1];
  L183(r500):
    range1 = ldf range in base;
    r502 = dyn range1(r500, TRUE);
    check L724() else D237();
  L186(r508):
    st col = r508;
    r510 = clos inner3592485567;
    st `do.panel` = r510;
    have_b18 = ld `have.b`;
    check L736() else D244();
  L712():
    goto L178(r491);
  L720():
    y10 = ld y;
    check L722() else D235();
  L721():
    r499 = dyn base74(<sym y>);
    goto L183(r499);
  L728():
    pch2 = force? pch1;
    checkMissing(pch2);
    nobs6 = ld nobs;
    check L729() else D239();
  L731():
    col1 = ld col;
    check L733() else D241();
  L732():
    r507 = dyn base76(<sym col>, <sym nobs>);
    goto L186(r507);
  D235():
    deopt 891 [y10];
  D237():
    deopt 898 [r502];
  D239():
    deopt 906 [nobs6];
  D241():
    deopt 913 [col1];
  D244():
    deopt 923 [have_b18];
  L722():
    y11 = force? y10;
    checkMissing(y11);
    as_numeric5 = ldf `as.numeric` in base;
    r501 = dyn as_numeric5(y11);
    check L723() else D236();
  L724():
    goto L182(r502);
  L729():
    nobs7 = force? nobs6;
    checkMissing(nobs7);
    rep_len = ldf rep_len in base;
    r506 = dyn rep_len(pch2, nobs7);
    check L730() else D240();
  L733():
    col2 = force? col1;
    checkMissing(col2);
    nobs8 = ld nobs;
    check L734() else D242();
  L736():
    have_b19 = force? have_b18;
    checkMissing(have_b19);
    c155 = `as.logical`(have_b19);
    if c155 then L737() else L187();
  D236():
    deopt 894 [r501];
  D240():
    deopt 909 [r506];
  D242():
    deopt 915 [nobs8];
  L187():
    nplots8 = ld nplots;
    check L770() else D262();
  L196():
    mtext = ldf mtext;
    check L786() else D271();
  L723():
    goto L183(r501);
  L730():
    goto L185(r506);
  L734():
    nobs9 = force? nobs8;
    checkMissing(nobs9);
    rep_len1 = ldf rep_len in base;
    r509 = dyn rep_len1(col2, nobs9);
    check L735() else D243();
  L737():
    st count = 1.0;
    rows15 = ld rows;
    check L738() else D245();
  D243():
    deopt 918 [r509];
  D245():
    deopt 929 [1, rows15];
  D262():
    deopt 987 [1, nplots8];
  D271():
    deopt 1017 [];
  L735():
    goto L186(r509);
  L738():
    rows16 = force? rows15;
    checkMissing(rows16);
    r511 = `:`(1, rows16);
    s = toForSeq(r511);
    l9 = length(s);
    i8 = 0;
    goto L188(i8);
  L770():
    nplots9 = force? nplots8;
    checkMissing(nplots9);
    r541 = `:`(1, nplots9);
    s2 = toForSeq(r541);
    l11 = length(s2);
    i58 = 0;
    goto L197(i58);
  L786():
    p78 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      c165 = `is.object`(xlab2);
      if c165 then L1() else L2(xlab2);
    L0(dx51):
      return dx51;
    L1():
      dr50 = tryDispatchBuiltin.1("[", xlab2);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(xlab4):
      __22 = ldf `[` in base;
      r555 = dyn __22(xlab4, 1);
      goto L0(r555);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx50);
    };
    p79 = prom<V +>{
      f_col = ld `f.col`;
      f_col1 = force? f_col;
      checkMissing(f_col1);
      r557 = `*`(0.5, f_col1);
      return r557;
    };
    p80 = prom<V +>{
      par3 = ldf par;
      r559 = dyn par3("font.lab");
      return r559;
    };
    p81 = prom<V +>{
      par4 = ldf par;
      r561 = dyn par4("cex.lab");
      return r561;
    };
    r563 = dyn mtext[, side, at, outer, line, xpd, font, cex](p78, 1.0, p79, TRUE, 3.5, NA_LGL, p80, p81);
    check L787() else D272();
  D272():
    deopt 1033 [r563];
  L188(i9):
    i10 = `+`.1(i9, 1);
    c156 = `<`.1(l9, i10);
    if c156 then L739() else L195();
  L197(i59):
    i60 = `+`.1(i59, 1);
    c162 = `<`.1(l11, i60);
    if c162 then L771() else L200();
  L787():
    mtext1 = ldf mtext;
    check L788() else D273();
  D273():
    deopt 1035 [];
  L195():
    x12 = `[[`(s, i10, NULL, TRUE);
    st i = x12;
    columns13 = ld columns;
    check L740() else D246();
  L200():
    x14 = `[[`(s2, i60, NULL, TRUE);
    st i = x14;
    a_intervals32 = ld `a.intervals`;
    check L772() else D263();
  L739():
    goto L196();
  L771():
    goto L196();
  L788():
    p82 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      c166 = `is.object`(ylab2);
      if c166 then L1() else L2(ylab2);
    L0(dx53):
      return dx53;
    L1():
      dr52 = tryDispatchBuiltin.1("[", ylab2);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(ylab4):
      __23 = ldf `[` in base;
      r564 = dyn __23(ylab4, 1);
      goto L0(r564);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx52);
    };
    p83 = prom<V +>{
      f_row = ld `f.row`;
      f_row1 = force? f_row;
      checkMissing(f_row1);
      r566 = `*`(0.5, f_row1);
      return r566;
    };
    p84 = prom<V +>{
      par5 = ldf par;
      r568 = dyn par5("font.lab");
      return r568;
    };
    p85 = prom<V +>{
      par6 = ldf par;
      r570 = dyn par6("cex.lab");
      return r570;
    };
    r572 = dyn mtext1[, side, at, outer, line, xpd, font, cex](p82, 2.0, p83, TRUE, 3.5, NA_LGL, p84, p85);
    check L789() else D274();
  D246():
    deopt 933 [i10, 1, columns13];
  D263():
    deopt 990 [i60, a_intervals32];
  D274():
    deopt 1051 [r572];
  L740():
    columns14 = force? columns13;
    checkMissing(columns14);
    r512 = `:`(1, columns14);
    s1 = toForSeq(r512);
    l10 = length(s1);
    i13 = 0;
    goto L189(i10, i13);
  L772():
    a_intervals33 = force? a_intervals32;
    checkMissing(a_intervals33);
    c163 = `is.object`(a_intervals33);
    if c163 then L773() else L774(i60, a_intervals33);
  L789():
    sym77 = ldf length;
    base77 = ldf length in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L790() else L791();
  L189(i14, i15):
    i16 = `+`.1(i15, 1);
    c157 = `<`.1(l10, i16);
    if c157 then L741() else L194();
  L198(i66, dx47):
    a36 = ld a;
    check L777() else D265();
  L201(r574):
    r576 = `==`(r574, 1);
    c167 = `as.logical`(r576);
    if c167 then L794() else L202();
  L773():
    dr46 = tryDispatchBuiltin.1("[", a_intervals33);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L775() else L774(i60, dr46);
  L774(i64, a_intervals35):
    i67 = ld i;
    check L776() else D264();
  L790():
    xlab5 = ld xlab;
    check L792() else D275();
  L791():
    r573 = dyn base77(<sym xlab>);
    goto L201(r573);
  D264():
    deopt 992 [i64, a_intervals35, i67];
  D265():
    deopt 995 [i66, dx47, a36];
  D275():
    deopt 1054 [xlab5];
  L194():
    x13 = `[[`(s1, i16, NULL, TRUE);
    st j = x13;
    a_intervals24 = ld `a.intervals`;
    check L742() else D247();
  L202():
    goto L204();
  L204():
    show_given17 = ld `show.given`;
    check L802() else D281();
  L741():
    goto L188(i14);
  L775():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L198(i60, dx46);
  L776():
    i68 = force? i67;
    __20 = ldf `[` in base;
    r542 = dyn __20(a_intervals35, i68, 1.0);
    goto L198(i64, r542);
  L777():
    a37 = force? a36;
    checkMissing(a37);
    r543 = `<=`(dx47, a37);
    a38 = ld a;
    check L778() else D266();
  L792():
    xlab6 = force? xlab5;
    checkMissing(xlab6);
    length9 = ldf length in base;
    r575 = dyn length9(xlab6);
    check L793() else D276();
  L794():
    sym78 = ldf c;
    base78 = ldf c in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L795() else L796();
  D247():
    deopt 936 [i14, i16, a_intervals24];
  D266():
    deopt 997 [i66, r543, a38];
  D276():
    deopt 1057 [r575];
  D281():
    deopt 1074 [show_given17];
  L203(r578):
    st xlab = r578;
    goto L204();
  L742():
    a_intervals25 = force? a_intervals24;
    checkMissing(a_intervals25);
    c158 = `is.object`(a_intervals25);
    if c158 then L743() else L744(i14, i16, a_intervals25);
  L778():
    a39 = force? a38;
    checkMissing(a39);
    a_intervals36 = ld `a.intervals`;
    check L779() else D267();
  L793():
    goto L201(r575);
  L795():
    xlab7 = ld xlab;
    check L797() else D277();
  L796():
    r577 = dyn base78(<sym xlab>, <lang paste("Given :", a.name)>);
    goto L203(r577);
  L802():
    show_given18 = force? show_given17;
    checkMissing(show_given18);
    c169 = `is.object`(show_given18);
    if c169 then L803() else L804(show_given18);
  D267():
    deopt 998 [i66, r543, a39, a_intervals36];
  D277():
    deopt 1062 [xlab7];
  L190(i27, i28, dx39):
    a28 = ld a;
    check L747() else D249();
  L205(dx55):
    c170 = `as.logical`(dx55);
    if c170 then L806() else L206();
  L743():
    dr38 = tryDispatchBuiltin.1("[", a_intervals25);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L745() else L744(i14, i16, dr38);
  L744(i23, i24, a_intervals27):
    j = ld j;
    check L746() else D248();
  L779():
    a_intervals37 = force? a_intervals36;
    checkMissing(a_intervals37);
    c164 = `is.object`(a_intervals37);
    if c164 then L780() else L781(i66, r543, a39, a_intervals37);
  L797():
    xlab8 = force? xlab7;
    checkMissing(xlab8);
    paste2 = ldf paste;
    check L798() else D278();
  L803():
    dr54 = tryDispatchBuiltin.1("[", show_given18);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L805() else L804(dr54);
  L804(show_given20):
    __24 = ldf `[` in base;
    r583 = dyn __24(show_given20, 1);
    goto L205(r583);
  D248():
    deopt 938 [i23, i24, a_intervals27, j];
  D249():
    deopt 941 [i27, i28, dx39, a28];
  D278():
    deopt 1065 [];
  L199(i72, r547, a43, dx49):
    r549 = `<=`(a43, dx49);
    r550 = `&&`(r547, r549);
    st id = r550;
    do_panel1 = ldf `do.panel`;
    check L784() else D269();
  L206():
    mtext3 = ldf mtext;
    check L835() else D305();
  L210():
    have_b20 = ld `have.b`;
    check L837() else D307();
  L745():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L190(i14, i16, dx38);
  L746():
    j1 = force? j;
    __16 = ldf `[` in base;
    r513 = dyn __16(a_intervals27, j1, 1.0);
    goto L190(i23, i24, r513);
  L747():
    a29 = force? a28;
    checkMissing(a29);
    r514 = `<=`(dx39, a29);
    a30 = ld a;
    check L748() else D250();
  L780():
    dr48 = tryDispatchBuiltin.1("[", a_intervals37);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L782() else L781(i66, r543, a39, dr48);
  L781(i70, r545, a41, a_intervals39):
    i73 = ld i;
    check L783() else D268();
  L798():
    p86 = prom<V +>{
      a_name2 = ld `a.name`;
      a_name3 = force? a_name2;
      checkMissing(a_name3);
      return a_name3;
    };
    r580 = dyn paste2("Given :", p86);
    check L799() else D279();
  L805():
    dx54 = getTryDispatchBuiltinValue(dr54);
    goto L205(dx54);
  L806():
    par7 = ldf par;
    check L807() else D282();
  D250():
    deopt 943 [i27, i28, r514, a30];
  D268():
    deopt 1000 [i70, r545, a41, a_intervals39, i73];
  D269():
    deopt 1008 [i72];
  D279():
    deopt 1068 [r580];
  D282():
    deopt 1080 [];
  D305():
    deopt 1160 [];
  D307():
    deopt 1176 [have_b20];
  L748():
    a31 = force? a30;
    checkMissing(a31);
    a_intervals28 = ld `a.intervals`;
    check L749() else D251();
  L782():
    dx48 = getTryDispatchBuiltinValue(dr48);
    goto L199(i66, r543, a39, dx48);
  L783():
    i74 = force? i73;
    __21 = ldf `[` in base;
    r548 = dyn __21(a_intervals39, i74, 2.0);
    goto L199(i70, r545, a41, r548);
  L784():
    p75 = prom<V +>{
      i75 = ld i;
      i76 = force? i75;
      checkMissing(i76);
      return i76;
    };
    p76 = prom<V +>{
      subscripts3 = ld subscripts;
      subscripts4 = force? subscripts3;
      checkMissing(subscripts4);
      return subscripts4;
    };
    p77 = prom<V +>{
      id2 = ld id;
      id3 = force? id2;
      checkMissing(id3);
      return id3;
    };
    r554 = dyn do_panel1(p75, p76, p77);
    check L785() else D270();
  L799():
    c168 = ldf c in base;
    r581 = dyn c168(xlab8, r580);
    check L800() else D280();
  L807():
    p87 = prom<V +>{
      sym79 = ldf c;
      base79 = ldf c in base;
      guard79 = `==`.4(sym79, base79);
      if guard79 then L1() else L2();
    L0(r585):
      return r585;
    L1():
      f_col2 = ld `f.col`;
      f_col3 = force? f_col2;
      checkMissing(f_col3);
      f_row2 = ld `f.row`;
      f_row3 = force? f_row2;
      checkMissing(f_row3);
      c171 = ldf c in base;
      r586 = dyn c171(0.0, f_col3, f_row3, 1.0);
      goto L0(r586);
    L2():
      r584 = dyn base79(0.0, <sym f.col>, <sym f.row>, 1.0);
      goto L0(r584);
    };
    p88 = prom<V +>{
      mar2 = ld mar;
      mar3 = force? mar2;
      checkMissing(mar3);
      sym80 = ldf c;
      base80 = ldf c in base;
      guard80 = `==`.4(sym80, base80);
      if guard80 then L1() else L2();
    L0(mar6, r589):
      r593 = `+`(mar6, r589);
      return r593;
    L1():
      a_is_fac6 = ld `a.is.fac`;
      a_is_fac7 = force? a_is_fac6;
      checkMissing(a_is_fac7);
      r590 = `!`(a_is_fac7);
      r591 = `+`(3.0, r590);
      c172 = ldf c in base;
      r592 = dyn c172(r591, 0.0, 0.0, 0.0);
      goto L0(mar3, r592);
    L2():
      r588 = dyn base80(<lang `+`(3.0, `!`(a.is.fac))>, 0.0, 0.0, 0.0);
      goto L0(mar3, r588);
    };
    r595 = dyn par7[fig, mar, new](p87, p88, TRUE);
    check L808() else D283();
  L835():
    p110 = prom<V +>{
      xlab13 = ld xlab;
      xlab14 = force? xlab13;
      checkMissing(xlab14);
      c182 = `is.object`(xlab14);
      if c182 then L1() else L2(xlab14);
    L0(dx67):
      return dx67;
    L1():
      dr66 = tryDispatchBuiltin.1("[", xlab14);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(xlab16):
      __30 = ldf `[` in base;
      r663 = dyn __30(xlab16, 2);
      goto L0(r663);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx66);
    };
    p111 = prom<V +>{
      f_col4 = ld `f.col`;
      f_col5 = force? f_col4;
      checkMissing(f_col5);
      r665 = `*`(0.5, f_col5);
      return r665;
    };
    p112 = prom<V +>{
      par11 = ldf par;
      r667 = dyn par11("font.lab");
      return r667;
    };
    p113 = prom<V +>{
      par12 = ldf par;
      r669 = dyn par12("cex.lab");
      return r669;
    };
    r671 = dyn mtext3[, , line, outer, at, xpd, font, cex](p110, 3.0, 3.25, TRUE, p111, NA_LGL, p112, p113);
    check L836() else D306();
  L837():
    have_b21 = force? have_b20;
    checkMissing(have_b21);
    c183 = `as.logical`(have_b21);
    if c183 then L838() else L211();
  D251():
    deopt 944 [i27, i28, r514, a31, a_intervals28];
  D270():
    deopt 1012 [i72, r554];
  D280():
    deopt 1070 [r581];
  D283():
    deopt 1087 [r595];
  D306():
    deopt 1175 [r671];
  L211():
    goto L222();
  L222():
    sym91 = ldf length;
    base91 = ldf length in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L887() else L888();
  L749():
    a_intervals29 = force? a_intervals28;
    checkMissing(a_intervals29);
    c159 = `is.object`(a_intervals29);
    if c159 then L750() else L751(i27, i28, r514, a31, a_intervals29);
  L785():
    goto L197(i72);
  L800():
    goto L203(r581);
  L808():
    plot_new1 = ldf `plot.new`;
    check L809() else D284();
  L836():
    goto L210();
  L838():
    sym84 = ldf length;
    base84 = ldf length in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L839() else L840();
  D284():
    deopt 1089 [];
  L191(i35, i36, r518, a35, dx41):
    r520 = `<=`(a35, dx41);
    r521 = `&&`(r518, r520);
    b_intervals22 = ld `b.intervals`;
    check L754() else D253();
  L212(r673):
    r675 = `==`(r673, 1);
    c184 = `as.logical`(r675);
    if c184 then L843() else L213();
  L223(r773):
    c200 = `as.logical`(r773);
    if c200 then L891() else L224();
  L750():
    dr40 = tryDispatchBuiltin.1("[", a_intervals29);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L752() else L751(i27, i28, r514, a31, dr40);
  L751(i31, i32, r516, a33, a_intervals31):
    j2 = ld j;
    check L753() else D252();
  L809():
    r596 = dyn plot_new1();
    check L810() else D285();
  L839():
    ylab5 = ld ylab;
    check L841() else D308();
  L840():
    r672 = dyn base84(<sym ylab>);
    goto L212(r672);
  L887():
    missingrows = ld missingrows;
    check L889() else D340();
  L888():
    r772 = dyn base91(<sym missingrows>);
    goto L223(r772);
  D252():
    deopt 946 [i31, i32, r516, a33, a_intervals31, j2];
  D253():
    deopt 951 [i35, i36, r521, b_intervals22];
  D285():
    deopt 1090 [r596];
  D308():
    deopt 1180 [ylab5];
  D340():
    deopt 1308 [missingrows];
  L213():
    goto L215();
  L215():
    show_given21 = ld `show.given`;
    check L851() else D314();
  L224():
    sym93 = ldf invisible;
    base93 = ldf invisible in base;
    guard93 = `==`.4(sym93, base93);
    if guard93 then L899() else L900();
  L752():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L191(i27, i28, r514, a31, dx40);
  L753():
    j3 = force? j2;
    __17 = ldf `[` in base;
    r519 = dyn __17(a_intervals31, j3, 2.0);
    goto L191(i31, i32, r516, a33, r519);
  L754():
    b_intervals23 = force? b_intervals22;
    checkMissing(b_intervals23);
    c160 = `is.object`(b_intervals23);
    if c160 then L755() else L756(i35, i36, r521, b_intervals23);
  L810():
    nrow3 = ldf nrow;
    check L811() else D286();
  L841():
    ylab6 = force? ylab5;
    checkMissing(ylab6);
    length10 = ldf length in base;
    r674 = dyn length10(ylab6);
    check L842() else D309();
  L843():
    sym85 = ldf c;
    base85 = ldf c in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L844() else L845();
  L889():
    missingrows1 = force? missingrows;
    checkMissing(missingrows1);
    length11 = ldf length in base;
    r774 = dyn length11(missingrows1);
    check L890() else D341();
  L891():
    cat = ldf cat;
    check L892() else D342();
  D286():
    deopt 1092 [];
  D309():
    deopt 1183 [r674];
  D314():
    deopt 1200 [show_given21];
  D341():
    deopt 1311 [r774];
  D342():
    deopt 1313 [];
  L192(i43, i44, r525, dx43):
    b26 = ld b;
    check L759() else D255();
  L214(r677):
    st ylab = r677;
    goto L215();
  L226(r785):
    popenv;
    return r785;
  L755():
    dr42 = tryDispatchBuiltin.1("[", b_intervals23);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L757() else L756(i35, i36, r521, dr42);
  L756(i39, i40, r523, b_intervals25):
    i45 = ld i;
    check L758() else D254();
  L811():
    p89 = prom<V +>{
      a_intervals40 = ld `a.intervals`;
      a_intervals41 = force? a_intervals40;
      checkMissing(a_intervals41);
      return a_intervals41;
    };
    r598 = dyn nrow3(p89);
    check L812() else D287();
  L842():
    goto L212(r674);
  L844():
    ylab7 = ld ylab;
    check L846() else D310();
  L845():
    r676 = dyn base85(<sym ylab>, <lang paste("Given :", b.name)>);
    goto L214(r676);
  L851():
    show_given22 = force? show_given21;
    checkMissing(show_given22);
    c186 = `is.object`(show_given22);
    if c186 then L852() else L853(show_given22);
  L890():
    goto L223(r774);
  L892():
    p144 = prom<V +>{
      gettextf = ldf gettextf;
      p143 = prom<V +>{
        paste4 = ldf paste0;
        p142 = prom<V +>{
          missingrows2 = ld missingrows;
          missingrows3 = force? missingrows2;
          checkMissing(missingrows3);
          return missingrows3;
        };
        r776 = dyn paste4[, collapse](p142, ", ");
        return r776;
      };
      r778 = dyn gettextf("Missing rows: %s", p143);
      return r778;
    };
    r780 = dyn cat("\n", p144, "\n");
    check L893() else D343();
  L899():
    invisible1 = ldf invisible in base;
    r786 = dyn invisible1();
    check L901() else D346();
  L900():
    r784 = dyn base93();
    goto L226(r784);
  D254():
    deopt 953 [i39, i40, r523, b_intervals25, i45];
  D255():
    deopt 956 [i43, i44, r525, dx43, b26];
  D287():
    deopt 1094 [r598];
  D310():
    deopt 1188 [ylab7];
  D343():
    deopt 1317 [r780];
  D346():
    deopt 1327 [r786];
  L216(dx69):
    c187 = `as.logical`(dx69);
    if c187 then L855() else L217();
  L757():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L192(i35, i36, r521, dx42);
  L758():
    i46 = force? i45;
    __18 = ldf `[` in base;
    r526 = dyn __18(b_intervals25, i46, 1.0);
    goto L192(i39, i40, r523, r526);
  L759():
    b27 = force? b26;
    checkMissing(b27);
    r527 = `<=`(dx43, b27);
    r528 = `&&`(r525, r527);
    b28 = ld b;
    check L760() else D256();
  L812():
    st nint = r598;
    sym81 = ldf range;
    base81 = ldf range in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L813() else L814();
  L846():
    ylab8 = force? ylab7;
    checkMissing(ylab8);
    paste3 = ldf paste;
    check L847() else D311();
  L852():
    dr68 = tryDispatchBuiltin.1("[", show_given22);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L854() else L853(dr68);
  L853(show_given24):
    __31 = ldf `[` in base;
    r682 = dyn __31(show_given24, 2);
    goto L216(r682);
  L893():
    sym92 = ldf invisible;
    base92 = ldf invisible in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L894() else L895();
  L901():
    goto L226(r786);
  D256():
    deopt 959 [i43, i44, r528, b28];
  D311():
    deopt 1191 [];
  L207(r600):
    st `a.range` = r600;
    plot_window = ldf `plot.window`;
    check L817() else D290();
  L217():
    mtext5 = ldf mtext;
    check L884() else D338();
  L221(r761):
    goto L222();
  L225(r782):
    popenv;
    return r782;
  L760():
    b29 = force? b28;
    checkMissing(b29);
    b_intervals26 = ld `b.intervals`;
    check L761() else D257();
  L813():
    a_intervals42 = ld `a.intervals`;
    check L815() else D288();
  L814():
    r599 = dyn base81[, finite](<sym a.intervals>, TRUE);
    goto L207(r599);
  L847():
    p114 = prom<V +>{
      b_name2 = ld `b.name`;
      b_name3 = force? b_name2;
      checkMissing(b_name3);
      return b_name3;
    };
    r679 = dyn paste3("Given :", p114);
    check L848() else D312();
  L854():
    dx68 = getTryDispatchBuiltinValue(dr68);
    goto L216(dx68);
  L855():
    par13 = ldf par;
    check L856() else D315();
  L894():
    missingrows4 = ld missingrows;
    check L896() else D344();
  L895():
    r781 = dyn base92(<sym missingrows>);
    goto L225(r781);
  D257():
    deopt 960 [i43, i44, r528, b29, b_intervals26];
  D288():
    deopt 1098 [a_intervals42];
  D290():
    deopt 1106 [];
  D312():
    deopt 1194 [r679];
  D315():
    deopt 1206 [];
  D338():
    deopt 1288 [];
  D344():
    deopt 1320 [missingrows4];
  L761():
    b_intervals27 = force? b_intervals26;
    checkMissing(b_intervals27);
    c161 = `is.object`(b_intervals27);
    if c161 then L762() else L763(i43, i44, r528, b29, b_intervals27);
  L815():
    a_intervals43 = force? a_intervals42;
    checkMissing(a_intervals43);
    range2 = ldf range in base;
    r601 = dyn range2(a_intervals43, TRUE);
    check L816() else D289();
  L817():
    p91 = prom<V +>{
      a_range = ld `a.range`;
      a_range1 = force? a_range;
      checkMissing(a_range1);
      sym82 = ldf c;
      base82 = ldf c in base;
      guard82 = `==`.4(sym82, base82);
      if guard82 then L1() else L2();
    L0(a_range4, r603):
      diff = ldf diff;
      p90 = prom<V +>{
        a_range5 = ld `a.range`;
        a_range6 = force? a_range5;
        checkMissing(a_range6);
        return a_range6;
      };
      r606 = dyn diff(p90);
      r607 = `*`(r603, r606);
      r608 = `+`(a_range4, r607);
      return r608;
    L1():
      c173 = ldf c in base;
      r604 = dyn c173(0.03, -0.03);
      goto L0(a_range1, r604);
    L2():
      r602 = dyn base82(0.03, <lang `-`(0.03)>);
      goto L0(a_range1, r602);
    };
    p92 = prom<V +>{
      sym83 = ldf c;
      base83 = ldf c in base;
      guard83 = `==`.4(sym83, base83);
      if guard83 then L1() else L2();
    L0(r613, r614):
      r616 = `+`(r613, r614);
      return r616;
    L1():
      nint = ld nint;
      nint1 = force? nint;
      checkMissing(nint1);
      c174 = ldf c in base;
      r615 = dyn c174(0.0, nint1);
      goto L0(0.5, r615);
    L2():
      r612 = dyn base83(0.0, <sym nint>);
      goto L0(0.5, r612);
    };
    r618 = dyn plot_window(p91, p92);
    check L818() else D291();
  L848():
    c185 = ldf c in base;
    r680 = dyn c185(ylab8, r679);
    check L849() else D313();
  L856():
    p115 = prom<V +>{
      sym86 = ldf c;
      base86 = ldf c in base;
      guard86 = `==`.4(sym86, base86);
      if guard86 then L1() else L2();
    L0(r684):
      return r684;
    L1():
      f_col6 = ld `f.col`;
      f_col7 = force? f_col6;
      checkMissing(f_col7);
      f_row4 = ld `f.row`;
      f_row5 = force? f_row4;
      checkMissing(f_row5);
      c188 = ldf c in base;
      r685 = dyn c188(f_col7, 1.0, 0.0, f_row5);
      goto L0(r685);
    L2():
      r683 = dyn base86(<sym f.col>, 1.0, 0.0, <sym f.row>);
      goto L0(r683);
    };
    p116 = prom<V +>{
      mar7 = ld mar;
      mar8 = force? mar7;
      checkMissing(mar8);
      sym87 = ldf c;
      base87 = ldf c in base;
      guard87 = `==`.4(sym87, base87);
      if guard87 then L1() else L2();
    L0(mar11, r688):
      r692 = `+`(mar11, r688);
      return r692;
    L1():
      b_is_fac6 = ld `b.is.fac`;
      b_is_fac7 = force? b_is_fac6;
      checkMissing(b_is_fac7);
      r689 = `!`(b_is_fac7);
      r690 = `+`(3.0, r689);
      c189 = ldf c in base;
      r691 = dyn c189(0.0, r690, 0.0, 0.0);
      goto L0(mar8, r691);
    L2():
      r687 = dyn base87(0.0, <lang `+`(3.0, `!`(b.is.fac))>, 0.0, 0.0);
      goto L0(mar8, r687);
    };
    r694 = dyn par13[fig, mar, new](p115, p116, TRUE);
    check L857() else D316();
  L884():
    p138 = prom<V +>{
      ylab13 = ld ylab;
      ylab14 = force? ylab13;
      checkMissing(ylab14);
      c199 = `is.object`(ylab14);
      if c199 then L1() else L2(ylab14);
    L0(dx81):
      return dx81;
    L1():
      dr80 = tryDispatchBuiltin.1("[", ylab14);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L3() else L2(dr80);
    L2(ylab16):
      __37 = ldf `[` in base;
      r762 = dyn __37(ylab16, 2);
      goto L0(r762);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx80);
    };
    p139 = prom<V +>{
      f_row6 = ld `f.row`;
      f_row7 = force? f_row6;
      checkMissing(f_row7);
      r764 = `*`(0.5, f_row7);
      return r764;
    };
    p140 = prom<V +>{
      par17 = ldf par;
      r766 = dyn par17("font.lab");
      return r766;
    };
    p141 = prom<V +>{
      par18 = ldf par;
      r768 = dyn par18("cex.lab");
      return r768;
    };
    r770 = dyn mtext5[, , line, at, outer, xpd, font, cex](p138, 4.0, 3.25, p139, TRUE, NA_LGL, p140, p141);
    check L885() else D339();
  L896():
    missingrows5 = force? missingrows4;
    checkMissing(missingrows5);
    invisible = ldf invisible in base;
    r783 = dyn invisible(missingrows5);
    check L897() else D345();
  D289():
    deopt 1103 [r601];
  D291():
    deopt 1109 [r618];
  D313():
    deopt 1196 [r680];
  D316():
    deopt 1213 [r694];
  D339():
    deopt 1303 [r770];
  D345():
    deopt 1323 [r783];
  L193(i53, i54, r532, b33, dx45):
    r534 = `<=`(b33, dx45);
    r535 = `&&`(r532, r534);
    st id = r535;
    do_panel = ldf `do.panel`;
    check L766() else D259();
  L762():
    dr44 = tryDispatchBuiltin.1("[", b_intervals27);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L764() else L763(i43, i44, r528, b29, dr44);
  L763(i49, i50, r530, b31, b_intervals29):
    i55 = ld i;
    check L765() else D258();
  L816():
    goto L207(r601);
  L818():
    rect = ldf rect;
    check L819() else D292();
  L849():
    goto L214(r680);
  L857():
    plot_new2 = ldf `plot.new`;
    check L858() else D317();
  L885():
    goto L221(r770);
  L897():
    goto L225(r783);
  D258():
    deopt 962 [i49, i50, r530, b31, b_intervals29, i55];
  D259():
    deopt 970 [i53, i54];
  D292():
    deopt 1111 [];
  D317():
    deopt 1215 [];
  L764():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L193(i43, i44, r528, b29, dx44);
  L765():
    i56 = force? i55;
    __19 = ldf `[` in base;
    r533 = dyn __19(b_intervals29, i56, 2.0);
    goto L193(i49, i50, r530, b31, r533);
  L766():
    p72 = prom<V +>{
      count = ld count;
      count1 = force? count;
      checkMissing(count1);
      return count1;
    };
    p73 = prom<V +>{
      subscripts1 = ld subscripts;
      subscripts2 = force? subscripts1;
      checkMissing(subscripts2);
      return subscripts2;
    };
    p74 = prom<V +>{
      id = ld id;
      id1 = force? id;
      checkMissing(id1);
      return id1;
    };
    r539 = dyn do_panel(p72, p73, p74);
    check L767() else D260();
  L819():
    p93 = prom<V +>{
      a_intervals44 = ld `a.intervals`;
      a_intervals45 = force? a_intervals44;
      checkMissing(a_intervals45);
      c175 = `is.object`(a_intervals45);
      if c175 then L1() else L2();
    L0(dx57):
      return dx57;
    L1():
      dr56 = tryDispatchBuiltin.1("[", a_intervals45);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2();
    L2():
      __25 = ldf `[` in base;
      r619 = dyn __25(a_intervals45, <missing>, 1.0);
      goto L0(r619);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx56);
    };
    p94 = prom<V +>{
      nint2 = ld nint;
      nint3 = force? nint2;
      checkMissing(nint3);
      r621 = `:`(1, nint3);
      r622 = `-`(r621, 0.3);
      return r622;
    };
    p95 = prom<V +>{
      a_intervals48 = ld `a.intervals`;
      a_intervals49 = force? a_intervals48;
      checkMissing(a_intervals49);
      c176 = `is.object`(a_intervals49);
      if c176 then L1() else L2();
    L0(dx59):
      return dx59;
    L1():
      dr58 = tryDispatchBuiltin.1("[", a_intervals49);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2();
    L2():
      __26 = ldf `[` in base;
      r624 = dyn __26(a_intervals49, <missing>, 2.0);
      goto L0(r624);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx58);
    };
    p96 = prom<V +>{
      nint4 = ld nint;
      nint5 = force? nint4;
      checkMissing(nint5);
      r626 = `:`(1, nint5);
      r627 = `+`(r626, 0.3);
      return r627;
    };
    p97 = prom<V +>{
      bar_bg1 = ld `bar.bg`;
      bar_bg2 = force? bar_bg1;
      checkMissing(bar_bg2);
      c177 = `is.object`(bar_bg2);
      if c177 then L3() else L4(bar_bg2);
    L0(dx61):
      return dx61;
    L3():
      dr60 = tryDispatchBuiltin.1("[", bar_bg2);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L5() else L4(dr60);
    L4(bar_bg4):
      a_is_fac8 = ld `a.is.fac`;
      a_is_fac9 = force? a_is_fac8;
      checkMissing(a_is_fac9);
      c178 = `as.logical`(a_is_fac9);
      if c178 then L6() else L1();
    L1():
      goto L2(bar_bg4, "num");
    L2(bar_bg7, r629):
      __27 = ldf `[` in base;
      r630 = dyn __27(bar_bg7, r629);
      goto L0(r630);
    L5():
      dx60 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx60);
    L6():
      goto L2(bar_bg4, "fac");
    };
    r632 = dyn rect[, , , , col](p93, p94, p95, p96, p97);
    check L820() else D293();
  L858():
    r695 = dyn plot_new2();
    check L859() else D318();
  D260():
    deopt 974 [i53, i54, r539];
  D293():
    deopt 1118 [r632];
  D318():
    deopt 1216 [r695];
  L767():
    count2 = ld count;
    check L768() else D261();
  L820():
    a_is_fac10 = ld `a.is.fac`;
    check L821() else D294();
  L859():
    nrow4 = ldf nrow;
    check L860() else D319();
  D261():
    deopt 975 [i53, i54, count2];
  D294():
    deopt 1119 [a_is_fac10];
  D319():
    deopt 1218 [];
  L768():
    count3 = force? count2;
    checkMissing(count3);
    r540 = `+`(count3, 1.0);
    st count = r540;
    goto L189(i53, i54);
  L821():
    a_is_fac11 = force? a_is_fac10;
    checkMissing(a_is_fac11);
    c179 = `as.logical`(a_is_fac11);
    if c179 then L822() else L208();
  L860():
    p117 = prom<V +>{
      b_intervals30 = ld `b.intervals`;
      b_intervals31 = force? b_intervals30;
      checkMissing(b_intervals31);
      return b_intervals31;
    };
    r697 = dyn nrow4(p117);
    check L861() else D320();
  D320():
    deopt 1220 [r697];
  L208():
    Axis = ldf Axis;
    check L826() else D297();
  L209():
    box = ldf box;
    check L830() else D301();
  L822():
    text = ldf text;
    check L823() else D295();
  L861():
    st nint = r697;
    sym88 = ldf range;
    base88 = ldf range in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L862() else L863();
  D295():
    deopt 1122 [];
  D297():
    deopt 1128 [];
  D301():
    deopt 1142 [];
  L218(r699):
    st `b.range` = r699;
    plot_window1 = ldf `plot.window`;
    check L866() else D323();
  L823():
    p100 = prom<V +>{
      apply = ldf apply;
      p98 = prom<V +>{
        a_intervals52 = ld `a.intervals`;
        a_intervals53 = force? a_intervals52;
        checkMissing(a_intervals53);
        return a_intervals53;
      };
      p99 = prom<V +>{
        mean = ld mean;
        mean1 = force? mean;
        checkMissing(mean1);
        return mean1;
      };
      r635 = dyn apply(p98, 1, p99);
      return r635;
    };
    p101 = prom<V +>{
      nint6 = ld nint;
      nint7 = force? nint6;
      checkMissing(nint7);
      r637 = `:`(1, nint7);
      return r637;
    };
    p102 = prom<V +>{
      a_levels2 = ld `a.levels`;
      a_levels3 = force? a_levels2;
      checkMissing(a_levels3);
      return a_levels3;
    };
    r640 = dyn text(p100, p101, p102);
    check L824() else D296();
  L826():
    p103 = prom<V +>{
      a44 = ld a;
      a45 = force? a44;
      checkMissing(a45);
      return a45;
    };
    r643 = dyn Axis[, side, xpd](p103, 3.0, NA_LGL);
    check L827() else D298();
  L830():
    r645 = dyn box();
    check L831() else D302();
  L862():
    b_intervals32 = ld `b.intervals`;
    check L864() else D321();
  L863():
    r698 = dyn base88[, finite](<sym b.intervals>, TRUE);
    goto L218(r698);
  D296():
    deopt 1126 [r640];
  D298():
    deopt 1134 [r643];
  D302():
    deopt 1143 [r645];
  D321():
    deopt 1224 [b_intervals32];
  D323():
    deopt 1232 [];
  L824():
    goto L209();
  L827():
    axis = ldf axis;
    check L828() else D299();
  L831():
    mtext2 = ldf mtext;
    check L832() else D303();
  L864():
    b_intervals33 = force? b_intervals32;
    checkMissing(b_intervals33);
    range3 = ldf range in base;
    r700 = dyn range3(b_intervals33, TRUE);
    check L865() else D322();
  L866():
    p118 = prom<V +>{
      sym89 = ldf c;
      base89 = ldf c in base;
      guard89 = `==`.4(sym89, base89);
      if guard89 then L1() else L2();
    L0(r704, r705):
      r707 = `+`(r704, r705);
      return r707;
    L1():
      nint8 = ld nint;
      nint9 = force? nint8;
      checkMissing(nint9);
      c190 = ldf c in base;
      r706 = dyn c190(0.0, nint9);
      goto L0(0.5, r706);
    L2():
      r703 = dyn base89(0.0, <sym nint>);
      goto L0(0.5, r703);
    };
    p120 = prom<V +>{
      b_range = ld `b.range`;
      b_range1 = force? b_range;
      checkMissing(b_range1);
      sym90 = ldf c;
      base90 = ldf c in base;
      guard90 = `==`.4(sym90, base90);
      if guard90 then L1() else L2();
    L0(b_range4, r710):
      diff1 = ldf diff;
      p119 = prom<V +>{
        b_range5 = ld `b.range`;
        b_range6 = force? b_range5;
        checkMissing(b_range6);
        return b_range6;
      };
      r713 = dyn diff1(p119);
      r714 = `*`(r710, r713);
      r715 = `+`(b_range4, r714);
      return r715;
    L1():
      c191 = ldf c in base;
      r711 = dyn c191(0.03, -0.03);
      goto L0(b_range1, r711);
    L2():
      r709 = dyn base90(0.03, <lang `-`(0.03)>);
      goto L0(b_range1, r709);
    };
    r717 = dyn plot_window1(p118, p120);
    check L867() else D324();
  D299():
    deopt 1136 [];
  D303():
    deopt 1145 [];
  D322():
    deopt 1229 [r700];
  D324():
    deopt 1235 [r717];
  L828():
    r644 = dyn axis[, labels](1.0, FALSE);
    check L829() else D300();
  L832():
    p104 = prom<V +>{
      xlab9 = ld xlab;
      xlab10 = force? xlab9;
      checkMissing(xlab10);
      c180 = `is.object`(xlab10);
      if c180 then L1() else L2(xlab10);
    L0(dx63):
      return dx63;
    L1():
      dr62 = tryDispatchBuiltin.1("[", xlab10);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(xlab12):
      __28 = ldf `[` in base;
      r646 = dyn __28(xlab12, 2);
      goto L0(r646);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx62);
    };
    p105 = prom<V +>{
      a_is_fac12 = ld `a.is.fac`;
      a_is_fac13 = force? a_is_fac12;
      checkMissing(a_is_fac13);
      r648 = `-`(3.0, a_is_fac13);
      return r648;
    };
    p107 = prom<V +>{
      mean2 = ldf mean;
      p106 = prom<V +>{
        par8 = ldf par;
        r650 = dyn par8("usr");
        c181 = `is.object`(r650);
        if c181 then L1() else L2(r650);
      L0(dx65):
        return dx65;
      L1():
        dr64 = tryDispatchBuiltin.1("[", r650);
        dc32 = getTryDispatchBuiltinDispatched(dr64);
        if dc32 then L3() else L2(dr64);
      L2(r652):
        __29 = ldf `[` in base;
        r653 = dyn __29(r652, <int 1, 2>);
        goto L0(r653);
      L3():
        dx64 = getTryDispatchBuiltinValue(dr64);
        goto L0(dx64);
      };
      r655 = dyn mean2(p106);
      return r655;
    };
    p108 = prom<V +>{
      par9 = ldf par;
      r657 = dyn par9("font.lab");
      return r657;
    };
    p109 = prom<V +>{
      par10 = ldf par;
      r659 = dyn par10("cex.lab");
      return r659;
    };
    r661 = dyn mtext2[, , line, at, xpd, font, cex](p104, 3.0, p105, p107, NA_LGL, p108, p109);
    check L833() else D304();
  L865():
    goto L218(r700);
  L867():
    rect1 = ldf rect;
    check L868() else D325();
  D300():
    deopt 1140 [r644];
  D304():
    deopt 1158 [r661];
  D325():
    deopt 1237 [];
  L829():
    goto L209();
  L833():
    goto L210();
  L868():
    p121 = prom<V +>{
      nint10 = ld nint;
      nint11 = force? nint10;
      checkMissing(nint11);
      r718 = `:`(1, nint11);
      r719 = `-`(r718, 0.3);
      return r719;
    };
    p122 = prom<V +>{
      b_intervals34 = ld `b.intervals`;
      b_intervals35 = force? b_intervals34;
      checkMissing(b_intervals35);
      c192 = `is.object`(b_intervals35);
      if c192 then L1() else L2();
    L0(dx71):
      return dx71;
    L1():
      dr70 = tryDispatchBuiltin.1("[", b_intervals35);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2();
    L2():
      __32 = ldf `[` in base;
      r721 = dyn __32(b_intervals35, <missing>, 1.0);
      goto L0(r721);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx70);
    };
    p123 = prom<V +>{
      nint12 = ld nint;
      nint13 = force? nint12;
      checkMissing(nint13);
      r723 = `:`(1, nint13);
      r724 = `+`(r723, 0.3);
      return r724;
    };
    p124 = prom<V +>{
      b_intervals38 = ld `b.intervals`;
      b_intervals39 = force? b_intervals38;
      checkMissing(b_intervals39);
      c193 = `is.object`(b_intervals39);
      if c193 then L1() else L2();
    L0(dx73):
      return dx73;
    L1():
      dr72 = tryDispatchBuiltin.1("[", b_intervals39);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L3() else L2();
    L2():
      __33 = ldf `[` in base;
      r726 = dyn __33(b_intervals39, <missing>, 2.0);
      goto L0(r726);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr72);
      goto L0(dx72);
    };
    p125 = prom<V +>{
      bar_bg8 = ld `bar.bg`;
      bar_bg9 = force? bar_bg8;
      checkMissing(bar_bg9);
      c194 = `is.object`(bar_bg9);
      if c194 then L3() else L4(bar_bg9);
    L0(dx75):
      return dx75;
    L3():
      dr74 = tryDispatchBuiltin.1("[", bar_bg9);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L5() else L4(dr74);
    L4(bar_bg11):
      b_is_fac8 = ld `b.is.fac`;
      b_is_fac9 = force? b_is_fac8;
      checkMissing(b_is_fac9);
      c195 = `as.logical`(b_is_fac9);
      if c195 then L6() else L1();
    L1():
      goto L2(bar_bg11, "num");
    L2(bar_bg14, r728):
      __34 = ldf `[` in base;
      r729 = dyn __34(bar_bg14, r728);
      goto L0(r729);
    L5():
      dx74 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx74);
    L6():
      goto L2(bar_bg11, "fac");
    };
    r731 = dyn rect1[, , , , col](p121, p122, p123, p124, p125);
    check L869() else D326();
  D326():
    deopt 1244 [r731];
  L869():
    b_is_fac10 = ld `b.is.fac`;
    check L870() else D327();
  D327():
    deopt 1245 [b_is_fac10];
  L870():
    b_is_fac11 = force? b_is_fac10;
    checkMissing(b_is_fac11);
    c196 = `as.logical`(b_is_fac11);
    if c196 then L871() else L219();
  L219():
    Axis1 = ldf Axis;
    check L875() else D330();
  L220():
    box1 = ldf box;
    check L879() else D334();
  L871():
    text1 = ldf text;
    check L872() else D328();
  D328():
    deopt 1248 [];
  D330():
    deopt 1256 [];
  D334():
    deopt 1270 [];
  L872():
    p126 = prom<V +>{
      nint14 = ld nint;
      nint15 = force? nint14;
      checkMissing(nint15);
      r732 = `:`(1, nint15);
      return r732;
    };
    p129 = prom<V +>{
      apply1 = ldf apply;
      p127 = prom<V +>{
        b_intervals42 = ld `b.intervals`;
        b_intervals43 = force? b_intervals42;
        checkMissing(b_intervals43);
        return b_intervals43;
      };
      p128 = prom<V +>{
        mean3 = ld mean;
        mean4 = force? mean3;
        checkMissing(mean4);
        return mean4;
      };
      r736 = dyn apply1(p127, 1, p128);
      return r736;
    };
    p130 = prom<V +>{
      b_levels2 = ld `b.levels`;
      b_levels3 = force? b_levels2;
      checkMissing(b_levels3);
      return b_levels3;
    };
    r739 = dyn text1[, , , srt](p126, p129, p130, 90.0);
    check L873() else D329();
  L875():
    p131 = prom<V +>{
      b34 = ld b;
      b35 = force? b34;
      checkMissing(b35);
      return b35;
    };
    r742 = dyn Axis1[, side, xpd](p131, 4.0, NA_LGL);
    check L876() else D331();
  L879():
    r744 = dyn box1();
    check L880() else D335();
  D329():
    deopt 1254 [r739];
  D331():
    deopt 1262 [r742];
  D335():
    deopt 1271 [r744];
  L873():
    goto L220();
  L876():
    axis1 = ldf axis;
    check L877() else D332();
  L880():
    mtext4 = ldf mtext;
    check L881() else D336();
  D332():
    deopt 1264 [];
  D336():
    deopt 1273 [];
  L877():
    r743 = dyn axis1[, labels](2.0, FALSE);
    check L878() else D333();
  L881():
    p132 = prom<V +>{
      ylab9 = ld ylab;
      ylab10 = force? ylab9;
      checkMissing(ylab10);
      c197 = `is.object`(ylab10);
      if c197 then L1() else L2(ylab10);
    L0(dx77):
      return dx77;
    L1():
      dr76 = tryDispatchBuiltin.1("[", ylab10);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(ylab12):
      __35 = ldf `[` in base;
      r745 = dyn __35(ylab12, 2);
      goto L0(r745);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx76);
    };
    p133 = prom<V +>{
      b_is_fac12 = ld `b.is.fac`;
      b_is_fac13 = force? b_is_fac12;
      checkMissing(b_is_fac13);
      r747 = `-`(3.0, b_is_fac13);
      return r747;
    };
    p135 = prom<V +>{
      mean5 = ldf mean;
      p134 = prom<V +>{
        par14 = ldf par;
        r749 = dyn par14("usr");
        c198 = `is.object`(r749);
        if c198 then L1() else L2(r749);
      L0(dx79):
        return dx79;
      L1():
        dr78 = tryDispatchBuiltin.1("[", r749);
        dc39 = getTryDispatchBuiltinDispatched(dr78);
        if dc39 then L3() else L2(dr78);
      L2(r751):
        __36 = ldf `[` in base;
        r752 = dyn __36(r751, <int 3, 4>);
        goto L0(r752);
      L3():
        dx78 = getTryDispatchBuiltinValue(dr78);
        goto L0(dx78);
      };
      r754 = dyn mean5(p134);
      return r754;
    };
    p136 = prom<V +>{
      par15 = ldf par;
      r756 = dyn par15("font.lab");
      return r756;
    };
    p137 = prom<V +>{
      par16 = ldf par;
      r758 = dyn par16("cex.lab");
      return r758;
    };
    r760 = dyn mtext4[, , line, at, xpd, font, cex](p132, 4.0, p133, p135, NA_LGL, p136, p137);
    check L882() else D337();
  D333():
    deopt 1268 [r743];
  D337():
    deopt 1286 [r760];
  L878():
    goto L220();
  L882():
    goto L221(r760);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg abbreviate:cls, reg levels:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st f = f;
    abbreviate = ldf abbreviate;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      levels = ldf levels;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r1 = dyn levels(p);
      return r1;
    };
    r3 = dyn abbreviate(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expr1:*, reg expr2:V, reg is_language:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg expr3:*, reg expr4:V, reg c6:L, reg r5:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg deparse:cls, reg expr5:*, reg expr6:V, reg c13:L, reg expr8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg c14:L, reg c16:L, reg r10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c18:L, reg dx3:V, reg __1:cls, reg r11:V, reg r12:V, reg c19:L, reg c20:V, reg c22:L, reg expr9:*, reg expr10:V, reg c23:L, reg expr12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r13:V, reg expr13:*, reg expr14:V |
    mkenv;
    st expr = expr;
    goto L7();
  L7():
    sym = ldf `is.language`;
    base = ldf `is.language` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L1(c);
  L8():
    expr1 = ld expr;
    check L10() else D0();
  L9():
    r = dyn base(<sym expr>);
    goto L0(r);
  D0():
    deopt 2 [expr1];
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L17() else L3(c10);
  L10():
    expr2 = force? expr1;
    checkMissing(expr2);
    is_language = ldf `is.language` in base;
    r2 = dyn is_language(expr2);
    check L11() else D1();
  L12():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r5 = `!`(r4);
    c7 = `as.logical`(r5);
    c8 = `&&`(c5, c7);
    goto L1(c8);
  L3(c12):
    c22 = `as.logical`(c12);
    if c22 then L24() else L5();
  L11():
    goto L0(r2);
  L13():
    expr3 = ld expr;
    check L15() else D2();
  L14():
    r3 = dyn base1(<sym expr>);
    goto L2(c, r3);
  L17():
    deparse = ldf deparse;
    check L18() else D3();
  D2():
    deopt 7 [c, expr3];
  D3():
    deopt 13 [c10];
  L5():
    expr13 = ld expr;
    check L30() else D6();
  L15():
    expr4 = force? expr3;
    checkMissing(expr4);
    c6 = `is.symbol`(expr4);
    goto L2(c, c6);
  L18():
    p = prom<V +>{
      expr5 = ld expr;
      expr6 = force? expr5;
      checkMissing(expr6);
      c13 = `is.object`(expr6);
      if c13 then L1() else L2(expr6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", expr6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(expr8):
      __ = ldf `[[` in base;
      r6 = dyn __(expr8, 1);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn deparse(p);
    check L19() else D4();
  L24():
    expr9 = ld expr;
    check L25() else D5();
  D4():
    deopt 15 [c10, r8];
  D5():
    deopt 22 [expr9];
  D6():
    deopt 31 [expr13];
  L19():
    c14 = `is.object`(r8);
    if c14 then L20() else L21(c10, r8);
  L25():
    expr10 = force? expr9;
    checkMissing(expr10);
    c23 = `is.object`(expr10);
    if c23 then L26() else L27(expr10);
  L30():
    expr14 = force? expr13;
    checkMissing(expr14);
    popenv;
    return expr14;
  L4(c18, dx3):
    r12 = `==`(dx3, "(");
    c19 = `as.logical`(r12);
    c20 = `&&`(c18, c19);
    goto L3(c20);
  L6(dx5):
    st expr = dx5;
    goto L7();
  L20():
    dr2 = tryDispatchBuiltin.1("[", r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(c10, dr2);
  L21(c16, r10):
    __1 = ldf `[` in base;
    r11 = dyn __1(r10, 1);
    goto L4(c16, r11);
  L26():
    dr4 = tryDispatchBuiltin.1("[[", expr10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(dr4);
  L27(expr12):
    __2 = ldf `[[` in base;
    r13 = dyn __2(expr12, 2);
    goto L6(r13);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(c10, dx2);
  L28():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  }
}
fun inner2708337952() {
  () -+> V { reg stop:cls, reg r:V |
    mkenv;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn stop("invalid conditioning formula");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner1966010878(call) {
  (reg call:*) -+> V { var call:*, reg deparse:cls, reg call1:*, reg call2:V, reg c:L, reg call4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg c1:L, reg r4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V |
    mkenv;
    st call = call;
    deparse = ldf deparse;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      c = `is.object`(call2);
      if c then L1() else L2(call2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", call2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(call4):
      __ = ldf `[[` in base;
      r = dyn __(call4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn deparse[, backtick](p, FALSE);
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    c1 = `is.object`(r2);
    if c1 then L3() else L4(r2);
  L0(dx3):
    popenv;
    return dx3;
  L3():
    dr2 = tryDispatchBuiltin.1("[[", r2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L5() else L4(dr2);
  L4(r4):
    __1 = ldf `[[` in base;
    r5 = dyn __1(r4, 1);
    goto L0(r5);
  L5():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  }
}
fun inner3592485567(index, subscripts, id) {
  (reg index:*, reg subscripts:*, reg id:*) -+> V { var index:*, var subscripts:*, reg subscripts_isMissing:L, reg subscripts_orDefault:*, var id:*, reg r:cls, reg total_rows:*, reg total_rows1:V, reg rows:*, reg rows1:V, reg r1:V, reg r2:V, reg total_rows2:*, reg total_rows3:V, reg index1:*, reg index2:V, reg r3:V, reg columns:*, reg columns1:V, reg ___:cls, reg r4:V, reg r5:V, reg index3:*, reg index4:V, reg r6:V, reg columns2:*, reg columns3:V, reg __:cls, reg r7:V, reg r8:V, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg i:*, reg i1:V, reg j:*, reg j1:V, reg total_rows4:*, reg total_rows5:V, reg total_columns:*, reg total_columns1:V, reg c:cls, reg r11:V, reg p:p(V +), reg r13:V, reg plot_new:cls, reg r14:V, reg plot_window:cls, reg xlim:*, reg xlim1:V, reg p1:p(V +), reg ylim:*, reg ylim1:V, reg p2:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg id1:*, reg id2:V, reg anyNA:cls, reg r20:V, reg c1:L, reg l:*, reg c2:L, reg r22:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r24:L, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:L, reg l5:*, reg r31:L, reg r32:V, reg id3:*, reg id4:V, reg is_na:cls, reg r33:V, reg ___1:cls, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg id5:*, reg id6:V, reg any:cls, reg r38:V, reg c3:L, reg grid:cls, reg r39:V, reg subscripts1:*, reg subscripts2:V, reg c4:L, reg panel:cls, reg x:*, reg x1:V, reg c5:L, reg x3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg id7:*, reg id8:V, reg __1:cls, reg r40:V, reg p3:p(V +), reg y:*, reg y1:V, reg c6:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg id9:*, reg id10:V, reg __2:cls, reg r42:V, reg p4:p(V +), reg id11:*, reg id12:V, reg p5:p(V +), reg col:*, reg col1:V, reg c7:L, reg col3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg id13:*, reg id14:V, reg __3:cls, reg r45:V, reg p6:p(V +), reg pch:*, reg pch1:V, reg c8:L, reg pch3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg id15:*, reg id16:V, reg __4:cls, reg r47:V, reg p7:p(V +), reg ddd:*, reg r49:V, reg r50:V, reg panel1:cls, reg x4:*, reg x5:V, reg c9:L, reg x7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg id17:*, reg id18:V, reg __5:cls, reg r51:V, reg p8:p(V +), reg y4:*, reg y5:V, reg c10:L, reg y7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg id19:*, reg id20:V, reg __6:cls, reg r53:V, reg p9:p(V +), reg col4:*, reg col5:V, reg c11:L, reg col7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg id21:*, reg id22:V, reg __7:cls, reg r55:V, reg p10:p(V +), reg pch4:*, reg pch5:V, reg c12:L, reg pch7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg id23:*, reg id24:V, reg __8:cls, reg r57:V, reg p11:p(V +), reg ddd1:*, reg r59:V, reg i2:*, reg i3:V, reg total_rows6:*, reg total_rows7:V, reg r61:V, reg c13:L, reg c15:V, reg j2:*, reg j3:V, reg __9:cls, reg r62:V, reg r63:V, reg c16:L, reg c17:V, reg c19:L, reg Paxis:cls, reg x8:*, reg x9:V, reg p12:p(V +), reg r65:V, reg i4:*, reg i5:V, reg istart:*, reg istart1:V, reg r67:V, reg c20:L, reg c21:V, reg index5:*, reg index6:V, reg columns4:*, reg columns5:V, reg r68:V, reg nplots:*, reg nplots1:V, reg r69:V, reg c23:L, reg c24:V, reg c26:L, reg c28:V, reg j4:*, reg j5:V, reg __10:cls, reg r70:V, reg r71:V, reg c29:L, reg c30:V, reg c32:L, reg Paxis1:cls, reg x10:*, reg x11:V, reg p13:p(V +), reg r73:V, reg j6:*, reg j7:V, reg r74:V, reg c33:L, reg c35:V, reg total_rows8:*, reg total_rows9:V, reg i6:*, reg i7:V, reg r75:V, reg __11:cls, reg r76:V, reg r77:V, reg c36:L, reg c37:V, reg c39:L, reg Paxis2:cls, reg y8:*, reg y9:V, reg p14:p(V +), reg r79:V, reg j8:*, reg j9:V, reg columns6:*, reg columns7:V, reg r81:V, reg c40:L, reg c41:V, reg index7:*, reg index8:V, reg nplots2:*, reg nplots3:V, reg r82:V, reg c43:L, reg c44:V, reg c46:L, reg c48:V, reg total_rows10:*, reg total_rows11:V, reg i8:*, reg i9:V, reg r83:V, reg __12:cls, reg r84:V, reg r85:V, reg c49:L, reg c50:V, reg c52:L, reg Paxis3:cls, reg y10:*, reg y11:V, reg p15:p(V +), reg r87:V, reg box:cls, reg r88:V |
    mkenv;
    st index = index;
    subscripts_isMissing = missing.0(subscripts);
    if subscripts_isMissing then L0(FALSE) else L0(subscripts);
  L0(subscripts_orDefault):
    st subscripts = subscripts_orDefault;
    st id = id;
    r = clos inner2836604937;
    st Paxis = r;
    total_rows = ld `total.rows`;
    check L23() else D0();
  D0():
    deopt 3 [total_rows];
  L23():
    total_rows1 = force? total_rows;
    checkMissing(total_rows1);
    rows = ld rows;
    check L24() else D1();
  D1():
    deopt 4 [total_rows1, rows];
  L24():
    rows1 = force? rows;
    checkMissing(rows1);
    r1 = `-`(total_rows1, rows1);
    r2 = `+`(r1, 1.0);
    st istart = r2;
    total_rows2 = ld `total.rows`;
    check L25() else D2();
  D2():
    deopt 10 [total_rows2];
  L25():
    total_rows3 = force? total_rows2;
    checkMissing(total_rows3);
    index1 = ld index;
    check L26() else D3();
  D3():
    deopt 12 [total_rows3, index1];
  L26():
    index2 = force? index1;
    checkMissing(index2);
    r3 = `-`(index2, 1.0);
    columns = ld columns;
    check L27() else D4();
  D4():
    deopt 16 [total_rows3, columns];
  L27():
    columns1 = force? columns;
    checkMissing(columns1);
    ___ = ldf `%/%` in base;
    r4 = dyn ___(r3, columns1);
    check L28() else D5();
  D5():
    deopt 19 [total_rows3, r4];
  L28():
    r5 = `-`(total_rows3, r4);
    st i = r5;
    index3 = ld index;
    check L29() else D6();
  D6():
    deopt 23 [index3];
  L29():
    index4 = force? index3;
    checkMissing(index4);
    r6 = `-`(index4, 1.0);
    columns2 = ld columns;
    check L30() else D7();
  D7():
    deopt 27 [columns2];
  L30():
    columns3 = force? columns2;
    checkMissing(columns3);
    __ = ldf `%%` in base;
    r7 = dyn __(r6, columns3);
    check L31() else D8();
  D8():
    deopt 30 [r7];
  L31():
    r8 = `+`(r7, 1.0);
    st j = r8;
    par = ldf par;
    check L32() else D9();
  D9():
    deopt 35 [];
  L32():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      total_rows4 = ld `total.rows`;
      total_rows5 = force? total_rows4;
      checkMissing(total_rows5);
      total_columns = ld `total.columns`;
      total_columns1 = force? total_columns;
      checkMissing(total_columns1);
      c = ldf c in base;
      r11 = dyn c(i1, j1, total_rows5, total_columns1);
      goto L0(r11);
    L2():
      r9 = dyn base(<sym i>, <sym j>, <sym total.rows>, <sym total.columns>);
      goto L0(r9);
    };
    r13 = dyn par[mfg](p);
    check L33() else D10();
  D10():
    deopt 38 [r13];
  L33():
    plot_new = ldf `plot.new`;
    check L34() else D11();
  D11():
    deopt 40 [];
  L34():
    r14 = dyn plot_new();
    check L35() else D12();
  D12():
    deopt 41 [r14];
  L35():
    plot_window = ldf `plot.window`;
    check L36() else D13();
  D13():
    deopt 43 [];
  L36():
    p1 = prom<V +>{
      xlim = ld xlim;
      xlim1 = force? xlim;
      checkMissing(xlim1);
      return xlim1;
    };
    p2 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    r17 = dyn plot_window(p1, p2);
    check L37() else D14();
  D14():
    deopt 46 [r17];
  L37():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L1(r19):
    c1 = `as.logical`(r19);
    if c1 then L42() else L2();
  L38():
    id1 = ld id;
    check L40() else D15();
  L39():
    r18 = dyn base1(<sym id>);
    goto L1(r18);
  D15():
    deopt 49 [id1];
  L2():
    goto L5();
  L5():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L40():
    id2 = force? id1;
    checkMissing(id2);
    anyNA = ldf anyNA in base;
    r20 = dyn anyNA(id2);
    check L41() else D16();
  L42():
    l = ld id;
    c2 = `is.object`(l);
    if c2 then L43() else L44(FALSE, l);
  D16():
    deopt 52 [r20];
  L3(r24, dx1):
    st id = dx1;
    goto L5();
  L6(r37):
    c3 = `as.logical`(r37);
    if c3 then L55() else L7();
  L41():
    goto L1(r20);
  L43():
    dr = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(FALSE, dr);
  L44(r22, l2):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L51():
    id5 = ld id;
    check L53() else D19();
  L52():
    r36 = dyn base3(<sym id>);
    goto L6(r36);
  D19():
    deopt 68 [id5];
  L4(r30, l5, r31, r32):
    ___1 = ldf `[<-` in base;
    r34 = dyn ___1(l5, r31, r32);
    goto L3(r30, r34);
  L7():
    goto L10();
  L10():
    i2 = ld i;
    check L66() else D28();
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(FALSE, dx);
  L46():
    id3 = ld id;
    check L48() else D17();
  L47():
    r29 = dyn base2(<sym id>);
    goto L4(r22, l2, FALSE, r29);
  L53():
    id6 = force? id5;
    checkMissing(id6);
    any = ldf any in base;
    r38 = dyn any(id6);
    check L54() else D20();
  L55():
    grid = ldf grid;
    check L56() else D21();
  D17():
    deopt 58 [r22, l2, FALSE, id3];
  D20():
    deopt 71 [r38];
  D21():
    deopt 73 [];
  D28():
    deopt 103 [i2];
  L48():
    id4 = force? id3;
    checkMissing(id4);
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(id4);
    check L49() else D18();
  L54():
    goto L6(r38);
  L56():
    r39 = dyn grid[lty]("solid");
    check L57() else D22();
  L66():
    i3 = force? i2;
    checkMissing(i3);
    total_rows6 = ld `total.rows`;
    check L67() else D29();
  D18():
    deopt 61 [r22, l2, FALSE, r33];
  D22():
    deopt 76 [r39];
  D29():
    deopt 104 [i3, total_rows6];
  L49():
    goto L4(r22, l2, FALSE, r33);
  L57():
    subscripts1 = ld subscripts;
    check L58() else D23();
  L67():
    total_rows7 = force? total_rows6;
    checkMissing(total_rows7);
    r61 = `==`(i3, total_rows7);
    c13 = `as.logical`(r61);
    if c13 then L68() else L11(c13);
  D23():
    deopt 77 [subscripts1];
  L11(c15):
    c19 = `as.logical`(c15);
    if c19 then L72() else L12();
  L58():
    subscripts2 = force? subscripts1;
    checkMissing(subscripts2);
    c4 = `as.logical`(subscripts2);
    if c4 then L59() else L8();
  L68():
    j2 = ld j;
    check L69() else D30();
  D30():
    deopt 108 [c13, j2];
  L8():
    panel1 = ldf panel;
    check L63() else D26();
  L9(r50):
    goto L10();
  L12():
    i4 = ld i;
    check L76() else D34();
  L13():
    j6 = ld j;
    check L91() else D43();
  L59():
    panel = ldf panel;
    check L60() else D24();
  L69():
    j3 = force? j2;
    checkMissing(j3);
    __9 = ldf `%%` in base;
    r62 = dyn __9(j3, 2.0);
    check L70() else D31();
  L72():
    Paxis = ldf Paxis;
    check L73() else D32();
  D24():
    deopt 80 [];
  D26():
    deopt 92 [];
  D31():
    deopt 112 [c13, r62];
  D32():
    deopt 117 [];
  D34():
    deopt 121 [i4];
  D43():
    deopt 148 [j6];
  L60():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c5 = `is.object`(x1);
      if c5 then L1() else L2(x1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x3):
      id7 = ld id;
      id8 = force? id7;
      __1 = ldf `[` in base;
      r40 = dyn __1(x3, id8);
      goto L0(r40);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c6 = `is.object`(y1);
      if c6 then L1() else L2(y1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", y1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(y3):
      id9 = ld id;
      id10 = force? id9;
      __2 = ldf `[` in base;
      r42 = dyn __2(y3, id10);
      goto L0(r42);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      id11 = ld id;
      id12 = force? id11;
      checkMissing(id12);
      return id12;
    };
    p6 = prom<V +>{
      col = ld col;
      col1 = force? col;
      checkMissing(col1);
      c7 = `is.object`(col1);
      if c7 then L1() else L2(col1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", col1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(col3):
      id13 = ld id;
      id14 = force? id13;
      __3 = ldf `[` in base;
      r45 = dyn __3(col3, id14);
      goto L0(r45);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      pch = ld pch;
      pch1 = force? pch;
      checkMissing(pch1);
      c8 = `is.object`(pch1);
      if c8 then L1() else L2(pch1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", pch1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(pch3):
      id15 = ld id;
      id16 = force? id15;
      __4 = ldf `[` in base;
      r47 = dyn __4(pch3, id16);
      goto L0(r47);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    ddd = ld `...`;
    r49 = dyn panel[, , subscripts, col, pch, `...`](p3, p4, p5, p6, p7, ddd);
    check L61() else D25();
  L63():
    p8 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c9 = `is.object`(x5);
      if c9 then L1() else L2(x5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x7):
      id17 = ld id;
      id18 = force? id17;
      __5 = ldf `[` in base;
      r51 = dyn __5(x7, id18);
      goto L0(r51);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p9 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c10 = `is.object`(y5);
      if c10 then L1() else L2(y5);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", y5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(y7):
      id19 = ld id;
      id20 = force? id19;
      __6 = ldf `[` in base;
      r53 = dyn __6(y7, id20);
      goto L0(r53);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p10 = prom<V +>{
      col4 = ld col;
      col5 = force? col4;
      checkMissing(col5);
      c11 = `is.object`(col5);
      if c11 then L1() else L2(col5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", col5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(col7):
      id21 = ld id;
      id22 = force? id21;
      __7 = ldf `[` in base;
      r55 = dyn __7(col7, id22);
      goto L0(r55);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p11 = prom<V +>{
      pch4 = ld pch;
      pch5 = force? pch4;
      checkMissing(pch5);
      c12 = `is.object`(pch5);
      if c12 then L1() else L2(pch5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", pch5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(pch7):
      id23 = ld id;
      id24 = force? id23;
      __8 = ldf `[` in base;
      r57 = dyn __8(pch7, id24);
      goto L0(r57);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    ddd1 = ld `...`;
    r59 = dyn panel1[, , col, pch, `...`](p8, p9, p10, p11, ddd1);
    check L64() else D27();
  L70():
    r63 = `==`(r62, 0.0);
    c16 = `as.logical`(r63);
    c17 = `&&`(c13, c16);
    goto L11(c17);
  L73():
    p12 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r65 = dyn Paxis(1.0, p12);
    check L74() else D33();
  L76():
    i5 = force? i4;
    checkMissing(i5);
    istart = ld istart;
    check L77() else D35();
  L91():
    j7 = force? j6;
    checkMissing(j7);
    r74 = `==`(j7, 1.0);
    c33 = `as.logical`(r74);
    if c33 then L92() else L17(c33);
  D25():
    deopt 90 [r49];
  D27():
    deopt 100 [r59];
  D33():
    deopt 120 [r65];
  D35():
    deopt 122 [i5, istart];
  L17(c35):
    c39 = `as.logical`(c35);
    if c39 then L97() else L18();
  L61():
    goto L9(r49);
  L64():
    goto L9(r59);
  L74():
    goto L13();
  L77():
    istart1 = force? istart;
    checkMissing(istart1);
    r67 = `==`(i5, istart1);
    c20 = `as.logical`(r67);
    if c20 then L14(c20) else L78();
  L92():
    total_rows8 = ld `total.rows`;
    check L93() else D44();
  D44():
    deopt 153 [c33, total_rows8];
  L14(c21):
    c26 = `as.logical`(c21);
    if c26 then L83() else L15(c26);
  L18():
    j8 = ld j;
    check L101() else D49();
  L19():
    box = ldf box;
    check L116() else D58();
  L78():
    index5 = ld index;
    check L79() else D36();
  L93():
    total_rows9 = force? total_rows8;
    checkMissing(total_rows9);
    i6 = ld i;
    check L94() else D45();
  L97():
    Paxis2 = ldf Paxis;
    check L98() else D47();
  D36():
    deopt 125 [c20, index5];
  D45():
    deopt 154 [c33, total_rows9, i6];
  D47():
    deopt 164 [];
  D49():
    deopt 168 [j8];
  D58():
    deopt 196 [];
  L15(c28):
    c32 = `as.logical`(c28);
    if c32 then L87() else L16();
  L79():
    index6 = force? index5;
    checkMissing(index6);
    columns4 = ld columns;
    check L80() else D37();
  L83():
    j4 = ld j;
    check L84() else D39();
  L94():
    i7 = force? i6;
    checkMissing(i7);
    r75 = `-`(total_rows9, i7);
    __11 = ldf `%%` in base;
    r76 = dyn __11(r75, 2.0);
    check L95() else D46();
  L98():
    p14 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    r79 = dyn Paxis2(2.0, p14);
    check L99() else D48();
  L101():
    j9 = force? j8;
    checkMissing(j9);
    columns6 = ld columns;
    check L102() else D50();
  L116():
    r88 = dyn box();
    check L117() else D59();
  D37():
    deopt 126 [c20, index6, columns4];
  D39():
    deopt 133 [c26, j4];
  D46():
    deopt 159 [c33, r76];
  D48():
    deopt 167 [r79];
  D50():
    deopt 169 [j9, columns6];
  D59():
    deopt 197 [r88];
  L16():
    goto L13();
  L80():
    columns5 = force? columns4;
    checkMissing(columns5);
    r68 = `+`(index6, columns5);
    nplots = ld nplots;
    check L81() else D38();
  L84():
    j5 = force? j4;
    checkMissing(j5);
    __10 = ldf `%%` in base;
    r70 = dyn __10(j5, 2.0);
    check L85() else D40();
  L87():
    Paxis1 = ldf Paxis;
    check L88() else D41();
  L95():
    r77 = `==`(r76, 0.0);
    c36 = `as.logical`(r77);
    c37 = `&&`(c33, c36);
    goto L17(c37);
  L99():
    goto L19();
  L102():
    columns7 = force? columns6;
    checkMissing(columns7);
    r81 = `==`(j9, columns7);
    c40 = `as.logical`(r81);
    if c40 then L20(c40) else L103();
  L117():
    popenv;
    return r88;
  D38():
    deopt 128 [c20, r68, nplots];
  D40():
    deopt 137 [c26, r70];
  D41():
    deopt 142 [];
  L20(c41):
    c46 = `as.logical`(c41);
    if c46 then L107() else L21(c46);
  L81():
    nplots1 = force? nplots;
    checkMissing(nplots1);
    r69 = `>`(r68, nplots1);
    c23 = `as.logical`(r69);
    c24 = `||`(c20, c23);
    goto L14(c24);
  L85():
    r71 = `==`(r70, 1.0);
    c29 = `as.logical`(r71);
    c30 = `&&`(c26, c29);
    goto L15(c30);
  L88():
    p13 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r73 = dyn Paxis1(3.0, p13);
    check L89() else D42();
  L103():
    index7 = ld index;
    check L104() else D51();
  D42():
    deopt 145 [r73];
  D51():
    deopt 172 [c40, index7];
  L21(c48):
    c52 = `as.logical`(c48);
    if c52 then L112() else L22();
  L89():
    goto L13();
  L104():
    index8 = force? index7;
    checkMissing(index8);
    nplots2 = ld nplots;
    check L105() else D52();
  L107():
    total_rows10 = ld `total.rows`;
    check L108() else D53();
  D52():
    deopt 173 [c40, index8, nplots2];
  D53():
    deopt 178 [c46, total_rows10];
  L22():
    goto L19();
  L105():
    nplots3 = force? nplots2;
    checkMissing(nplots3);
    r82 = `==`(index8, nplots3);
    c43 = `as.logical`(r82);
    c44 = `||`(c40, c43);
    goto L20(c44);
  L108():
    total_rows11 = force? total_rows10;
    checkMissing(total_rows11);
    i8 = ld i;
    check L109() else D54();
  L112():
    Paxis3 = ldf Paxis;
    check L113() else D56();
  D54():
    deopt 179 [c46, total_rows11, i8];
  D56():
    deopt 189 [];
  L109():
    i9 = force? i8;
    checkMissing(i9);
    r83 = `-`(total_rows11, i9);
    __12 = ldf `%%` in base;
    r84 = dyn __12(r83, 2.0);
    check L110() else D55();
  L113():
    p15 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    r87 = dyn Paxis3(4.0, p15);
    check L114() else D57();
  D55():
    deopt 184 [c46, r84];
  D57():
    deopt 192 [r87];
  L110():
    r85 = `==`(r84, 1.0);
    c49 = `as.logical`(r85);
    c50 = `&&`(c46, c49);
    goto L21(c50);
  L114():
    goto L19();
  }
}
fun inner2836604937(side, x) {
  (reg side:*, reg x:*) -+> V { var side:*, var x:*, reg nlevels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg axlabels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg axis:cls, reg side1:*, reg side2:V, reg p2:p(V +), reg lab:*, reg lab1:V, reg p3:p(V +), reg seq:cls, reg lab2:*, reg lab3:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V, reg Axis:cls, reg x5:*, reg x6:V, reg p6:p(V +), reg side3:*, reg side4:V, reg p7:p(V +), reg r12:V |
    mkenv;
    st side = side;
    st x = x;
    nlevels = ldf nlevels;
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
    r1 = dyn nlevels(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    Axis = ldf Axis;
    check L9() else D6();
  L3():
    axlabels = ldf axlabels;
    check L4() else D2();
  D2():
    deopt 5 [];
  D6():
    deopt 20 [];
  L4():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn axlabels(p1);
    check L5() else D3();
  L9():
    p6 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p7 = prom<V +>{
      side3 = ld side;
      side4 = force? side3;
      checkMissing(side4);
      return side4;
    };
    r12 = dyn Axis[, side, xpd](p6, p7, NA_LGL);
    check L10() else D7();
  D3():
    deopt 7 [r3];
  D7():
    deopt 26 [r12];
  L5():
    st lab = r3;
    axis = ldf axis;
    check L6() else D4();
  L10():
    popenv;
    return r12;
  D4():
    deopt 10 [];
  L6():
    p2 = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p3 = prom<V +>{
      lab = ld lab;
      lab1 = force? lab;
      checkMissing(lab1);
      return lab1;
    };
    p5 = prom<V +>{
      seq = ldf seq;
      p4 = prom<V +>{
        lab2 = ld lab;
        lab3 = force? lab2;
        checkMissing(lab3);
        return lab3;
      };
      r7 = dyn seq(p4);
      return r7;
    };
    r9 = dyn axis[, labels, at, xpd](p2, p3, p5, NA_LGL);
    check L7() else D5();
  D5():
    deopt 18 [r9];
  L7():
    popenv;
    return r9;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg panel_smooth:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    panel_smooth = ldf `panel.smooth`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    ddd1 = ld `...`;
    r2 = dyn panel_smooth[, , span, `...`](p, p1, 0.8, ddd1);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}