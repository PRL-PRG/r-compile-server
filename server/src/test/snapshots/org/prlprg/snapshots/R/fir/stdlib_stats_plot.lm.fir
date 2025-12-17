fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg lm:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg LifeCycleSavings:*, reg LifeCycleSavings1:V, reg p2:p(V +), reg r8:V, reg plot:cls, reg lm_SR:*, reg lm_SR1:V, reg p3:p(V +), reg r10:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c1:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg plot1:cls, reg lm_SR2:*, reg lm_SR3:V, reg p6:p(V +), reg r21:V, reg plot2:cls, reg lm_SR4:*, reg lm_SR5:V, reg p7:p(V +), reg r23:V, reg plot3:cls, reg lm_SR6:*, reg lm_SR7:V, reg p8:p(V +), reg r25:V, reg plot4:cls, reg lm_SR8:*, reg lm_SR9:V, reg p9:p(V +), reg p10:p(V +), reg r28:V, reg plot5:cls, reg lm_SR10:*, reg lm_SR11:V, reg p11:p(V +), reg r30:cls, reg p12:p(V +), reg r32:V, reg par1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg c2:cls, reg r35:V, reg p13:p(V +), reg r37:V, reg plot6:cls, reg lm_SR12:*, reg lm_SR13:V, reg p14:p(V +), reg p15:p(V +), reg r40:V, reg par2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg c3:cls, reg r43:V, reg p16:p(V +), reg r45:V, reg plot7:cls, reg lm_SR14:*, reg lm_SR15:V, reg p17:p(V +), reg p18:p(V +), reg r48:V, reg dev_interactive:cls, reg r49:V, reg c4:L, reg getOption:cls, reg r50:V, reg r51:cls, reg r52:V, reg par3:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg c5:cls, reg r56:V, reg p19:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg c6:cls, reg r60:V, reg r61:V, reg r62:V, reg p20:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg c7:cls, reg r66:V, reg p21:p(V +), reg r68:V, reg plot8:cls, reg lm_SR16:*, reg lm_SR17:V, reg p22:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg c8:cls, reg r72:V, reg p23:p(V +), reg r74:V, reg plot9:cls, reg lm_SR18:*, reg lm_SR19:V, reg p24:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg r77:V, reg list:cls, reg r78:V, reg p25:p(V +), reg r80:V, reg plot10:cls, reg lm_SR20:*, reg lm_SR21:V, reg p26:p(V +), reg r82:V, reg par4:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg c9:cls, reg r85:V, reg p27:p(V +), reg r87:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg assign:cls, reg paste:cls, reg i5:*, reg i6:V, reg p28:p(V +), reg r89:V, reg p29:p(V +), reg runif:cls, reg r91:V, reg p30:p(V +), reg r93:V, reg plot11:cls, reg lm1:cls, reg __1:cls, reg r94:V, reg p31:p(V +), reg r96:V, reg p32:p(V +), reg r98:V, reg par5:cls, reg opar:*, reg opar1:V, reg p33:p(V +), reg r100:V |
    mkenv;
    r = clos inner4052382407;
    st `plot.lm` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    lm = ldf lm;
    check L9() else D2();
  L5():
    require = ldf require;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L7():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L8() else D1();
  L9():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r5 = dyn __(<sym sr>, <lang `+`(`+`(`+`(pop15, pop75), dpi), ddpi)>);
      return r5;
    };
    p2 = prom<V +>{
      LifeCycleSavings = ld LifeCycleSavings;
      LifeCycleSavings1 = force? LifeCycleSavings;
      checkMissing(LifeCycleSavings1);
      return LifeCycleSavings1;
    };
    r8 = dyn lm[, data](p1, p2);
    check L10() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r8];
  L8():
    goto L0();
  L10():
    st `lm.SR` = r8;
    plot = ldf plot;
    check L11() else D4();
  D4():
    deopt 16 [];
  L11():
    p3 = prom<V +>{
      lm_SR = ld `lm.SR`;
      lm_SR1 = force? lm_SR;
      checkMissing(lm_SR1);
      return lm_SR1;
    };
    r10 = dyn plot(p3);
    check L12() else D5();
  D5():
    deopt 18 [r10];
  L12():
    par = ldf par;
    check L13() else D6();
  D6():
    deopt 20 [];
  L13():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c = ldf c in base;
      r13 = dyn c(2.0, 2.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(2.0, 2.0);
      goto L0(r11);
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c1 = ldf c in base;
      r17 = dyn c1(0.0, 0.0, 2.0, 0.0);
      goto L0(r17);
    L2():
      r15 = dyn base2(0.0, 0.0, 2.0, 0.0);
      goto L0(r15);
    };
    r19 = dyn par[mfrow, oma](p4, p5);
    check L14() else D7();
  D7():
    deopt 25 [r19];
  L14():
    st opar = r19;
    plot1 = ldf plot;
    check L15() else D8();
  D8():
    deopt 28 [];
  L15():
    p6 = prom<V +>{
      lm_SR2 = ld `lm.SR`;
      lm_SR3 = force? lm_SR2;
      checkMissing(lm_SR3);
      return lm_SR3;
    };
    r21 = dyn plot1(p6);
    check L16() else D9();
  D9():
    deopt 30 [r21];
  L16():
    plot2 = ldf plot;
    check L17() else D10();
  D10():
    deopt 32 [];
  L17():
    p7 = prom<V +>{
      lm_SR4 = ld `lm.SR`;
      lm_SR5 = force? lm_SR4;
      checkMissing(lm_SR5);
      return lm_SR5;
    };
    r23 = dyn plot2[, `id.n`](p7, NULL);
    check L18() else D11();
  D11():
    deopt 36 [r23];
  L18():
    plot3 = ldf plot;
    check L19() else D12();
  D12():
    deopt 38 [];
  L19():
    p8 = prom<V +>{
      lm_SR6 = ld `lm.SR`;
      lm_SR7 = force? lm_SR6;
      checkMissing(lm_SR7);
      return lm_SR7;
    };
    r25 = dyn plot3[, `id.n`, `labels.id`](p8, 5.0, NULL);
    check L20() else D13();
  D13():
    deopt 44 [r25];
  L20():
    plot4 = ldf plot;
    check L21() else D14();
  D14():
    deopt 46 [];
  L21():
    p9 = prom<V +>{
      lm_SR8 = ld `lm.SR`;
      lm_SR9 = force? lm_SR8;
      checkMissing(lm_SR9);
      return lm_SR9;
    };
    p10 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r28 = dyn plot4[, which](p9, p10);
    check L22() else D15();
  D15():
    deopt 50 [r28];
  L22():
    plot5 = ldf plot;
    check L23() else D16();
  D16():
    deopt 52 [];
  L23():
    p11 = prom<V +>{
      lm_SR10 = ld `lm.SR`;
      lm_SR11 = force? lm_SR10;
      checkMissing(lm_SR11);
      return lm_SR11;
    };
    p12 = prom<V +>{
      r30 = clos inner799576941;
      return r30;
    };
    r32 = dyn plot5[, panel](p11, p12);
    check L24() else D17();
  D17():
    deopt 56 [r32];
  L24():
    par1 = ldf par;
    check L25() else D18();
  D18():
    deopt 58 [];
  L25():
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c2 = ldf c in base;
      r35 = dyn c2(2.0, 1.0);
      goto L0(r35);
    L2():
      r33 = dyn base3(2.0, 1.0);
      goto L0(r33);
    };
    r37 = dyn par1[mfrow](p13);
    check L26() else D19();
  D19():
    deopt 61 [r37];
  L26():
    plot6 = ldf plot;
    check L27() else D20();
  D20():
    deopt 63 [];
  L27():
    p14 = prom<V +>{
      lm_SR12 = ld `lm.SR`;
      lm_SR13 = force? lm_SR12;
      checkMissing(lm_SR13);
      return lm_SR13;
    };
    p15 = prom<V +>{
      return <int 1, 2>;
    };
    r40 = dyn plot6[, which, `sub.caption`](p14, p15, "Saving Rates, n=50, p=5");
    check L28() else D21();
  D21():
    deopt 69 [r40];
  L28():
    par2 = ldf par;
    check L29() else D22();
  D22():
    deopt 71 [];
  L29():
    p16 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c3 = ldf c in base;
      r43 = dyn c3(2.0, 3.0);
      goto L0(r43);
    L2():
      r41 = dyn base4(2.0, 3.0);
      goto L0(r41);
    };
    r45 = dyn par2[mfrow](p16);
    check L30() else D23();
  D23():
    deopt 74 [r45];
  L30():
    plot7 = ldf plot;
    check L31() else D24();
  D24():
    deopt 76 [];
  L31():
    p17 = prom<V +>{
      lm_SR14 = ld `lm.SR`;
      lm_SR15 = force? lm_SR14;
      checkMissing(lm_SR15);
      return lm_SR15;
    };
    p18 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    r48 = dyn plot7[, which, `cook.col`](p17, p18, "royalblue");
    check L32() else D25();
  D25():
    deopt 82 [r48];
  L32():
    dev_interactive = ldf `dev.interactive`;
    check L33() else D26();
  D26():
    deopt 84 [];
  L33():
    r49 = dyn dev_interactive(TRUE);
    check L34() else D27();
  D27():
    deopt 86 [r49];
  L34():
    c4 = `as.logical`(r49);
    if c4 then L35() else L1();
  L1():
    goto L2();
  L2():
    par3 = ldf par;
    check L40() else D31();
  L35():
    getOption = ldf getOption;
    check L36() else D28();
  D28():
    deopt 88 [];
  D31():
    deopt 100 [];
  L36():
    r50 = dyn getOption("device");
    check L37() else D29();
  L40():
    p19 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c5 = ldf c in base;
      r56 = dyn c5(3.0, 1.0);
      goto L0(r56);
    L2():
      r54 = dyn base5(3.0, 1.0);
      goto L0(r54);
    };
    p20 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r59):
      r61 = `/`(r59, 2.0);
      r62 = `+`(r61, 0.1);
      return r62;
    L1():
      c6 = ldf c in base;
      r60 = dyn c6(5.0, 5.0, 4.0, 2.0);
      goto L0(r60);
    L2():
      r58 = dyn base6(5.0, 5.0, 4.0, 2.0);
      goto L0(r58);
    };
    p21 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      c7 = ldf c in base;
      r66 = dyn c7(1.4, 0.5, 0.0);
      goto L0(r66);
    L2():
      r64 = dyn base7(1.4, 0.5, 0.0);
      goto L0(r64);
    };
    r68 = dyn par3[mfrow, mar, mgp](p19, p20, p21);
    check L41() else D32();
  D29():
    deopt 90 [r50];
  D32():
    deopt 107 [r68];
  L37():
    checkFun.0(r50);
    r51 = r50 as cls;
    r52 = dyn r51[height, width](6.0, 4.0);
    check L38() else D30();
  L41():
    plot8 = ldf plot;
    check L42() else D33();
  D30():
    deopt 96 [r52];
  D33():
    deopt 109 [];
  L38():
    goto L2();
  L42():
    p22 = prom<V +>{
      lm_SR16 = ld `lm.SR`;
      lm_SR17 = force? lm_SR16;
      checkMissing(lm_SR17);
      return lm_SR17;
    };
    p23 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      c8 = ldf c in base;
      r72 = dyn c8(0.2, 0.08);
      goto L0(r72);
    L2():
      r70 = dyn base8(0.2, 0.08);
      goto L0(r70);
    };
    r74 = dyn plot8[, which, `extend.ylim.f`](p22, 5.0, p23);
    check L43() else D34();
  D34():
    deopt 115 [r74];
  L43():
    plot9 = ldf plot;
    check L44() else D35();
  D35():
    deopt 117 [];
  L44():
    p24 = prom<V +>{
      lm_SR18 = ld `lm.SR`;
      lm_SR19 = force? lm_SR18;
      checkMissing(lm_SR19);
      return lm_SR19;
    };
    p25 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      list = ldf list in base;
      r78 = dyn list("bottomright", "Cook");
      goto L0(r78);
    L2():
      r76 = dyn base9[x, legend]("bottomright", "Cook");
      goto L0(r76);
    };
    r80 = dyn plot9[, which, `cook.lty`, `cook.legendChanges`](p24, 5.0, "dotdash", p25);
    check L45() else D36();
  D36():
    deopt 125 [r80];
  L45():
    plot10 = ldf plot;
    check L46() else D37();
  D37():
    deopt 127 [];
  L46():
    p26 = prom<V +>{
      lm_SR20 = ld `lm.SR`;
      lm_SR21 = force? lm_SR20;
      checkMissing(lm_SR21);
      return lm_SR21;
    };
    r82 = dyn plot10[, which, `cook.legendChanges`](p26, 5.0, NULL);
    check L47() else D38();
  D38():
    deopt 133 [r82];
  L47():
    par4 = ldf par;
    check L48() else D39();
  D39():
    deopt 135 [];
  L48():
    p27 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r84):
      return r84;
    L1():
      c9 = ldf c in base;
      r85 = dyn c9(2.0, 2.0);
      goto L0(r85);
    L2():
      r83 = dyn base10(2.0, 2.0);
      goto L0(r83);
    };
    r87 = dyn par4[mfrow](p27);
    check L49() else D40();
  D40():
    deopt 138 [r87];
  L49():
    s = toForSeq(<int 1, 2, 3, 4, 5>);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L50() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    assign = ldf assign;
    check L51() else D41();
  L50():
    plot11 = ldf plot;
    check L53() else D43();
  D41():
    deopt 142 [i2];
  D43():
    deopt 150 [];
  L51():
    p29 = prom<V +>{
      paste = ldf paste;
      p28 = prom<V +>{
        i5 = ld i;
        i6 = force? i5;
        checkMissing(i6);
        return i6;
      };
      r89 = dyn paste[, , sep]("long.var.name", p28, ".");
      return r89;
    };
    p30 = prom<V +>{
      runif = ldf runif;
      r91 = dyn runif(10.0);
      return r91;
    };
    r93 = dyn assign(p29, p30);
    check L52() else D42();
  L53():
    p32 = prom<V +>{
      lm1 = ldf lm;
      p31 = prom<V +>{
        __1 = ldf `~` in base;
        r94 = dyn __1(<sym long.var.name.1>, <lang `+`(`+`(`+`(long.var.name.2, long.var.name.3), long.var.name.4), long.var.name.5)>);
        return r94;
      };
      r96 = dyn lm1(p31);
      return r96;
    };
    r98 = dyn plot11(p32);
    check L54() else D44();
  D42():
    deopt 145 [i2, r93];
  D44():
    deopt 152 [r98];
  L52():
    goto L3(i2);
  L54():
    par5 = ldf par;
    check L55() else D45();
  D45():
    deopt 154 [];
  L55():
    p33 = prom<V +>{
      opar = ld opar;
      opar1 = force? opar;
      checkMissing(opar1);
      return opar1;
    };
    r100 = dyn par5(p33);
    check L56() else D46();
  D46():
    deopt 156 [r100];
  L56():
    popenv;
    return r100;
  }
}
fun inner4052382407(x, which, caption, panel, `sub.caption`, main, ask, `...`, `id.n`, `labels.id`, `cex.id`, qqline, `cook.levels`, `cook.col`, `cook.lty`, `cook.legendChanges`, `add.smooth`, `iter.smooth`, `label.pos`, `cex.caption`, `cex.oma.main`, `extend.ylim.f`) {
  (reg x:*, reg which:*, reg caption:*, reg panel:*, reg sub_caption:*, reg main:*, reg ask:*, reg ddd:dots, reg id_n:*, reg labels_id:*, reg cex_id:*, reg qqline:*, reg cook_levels:*, reg cook_col:*, reg cook_lty:*, reg cook_legendChanges:*, reg add_smooth:*, reg iter_smooth:*, reg label_pos:*, reg cex_caption:*, reg cex_oma_main:*, reg extend_ylim_f:*) -+> V { var x:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var caption:*, reg caption_isMissing:L, reg caption_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg expression:cls, reg r8:V, reg list:cls, reg r9:V, reg p1:p(V +), var panel:*, reg panel_isMissing:L, reg panel_orDefault:*, reg add_smooth1:*, reg add_smooth2:V, reg c1:L, reg r11:cls, reg points:*, reg points1:V, reg p2:p(V +), var `sub.caption`:*, reg sub_caption_isMissing:L, reg sub_caption_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg par:cls, reg r15:V, reg prod:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg r21:V, reg which1:*, reg which2:V, reg length:cls, reg r22:V, reg r23:V, reg c2:L, reg c4:V, reg dev_interactive:cls, reg r24:V, reg c5:L, reg c6:V, reg p3:p(V +), var `...`:dots?, var `id.n`:*, reg id_n_isMissing:L, reg id_n_orDefault:*, var `labels.id`:*, reg labels_id_isMissing:L, reg labels_id_orDefault:*, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg residuals:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r29:V, reg names:cls, reg r30:V, reg p5:p(V +), var `cex.id`:*, reg cex_id_isMissing:L, reg cex_id_orDefault:*, var qqline:*, reg qqline_isMissing:L, reg qqline_orDefault:*, var `cook.levels`:*, reg cook_levels_isMissing:L, reg cook_levels_orDefault:*, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg c8:cls, reg r34:V, reg p6:p(V +), var `cook.col`:*, reg cook_col_isMissing:L, reg cook_col_orDefault:*, var `cook.lty`:*, reg cook_lty_isMissing:L, reg cook_lty_orDefault:*, var `cook.legendChanges`:*, reg cook_legendChanges_isMissing:L, reg cook_legendChanges_orDefault:*, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg list1:cls, reg r38:V, reg p7:p(V +), var `add.smooth`:*, reg add_smooth_isMissing:L, reg add_smooth_orDefault:*, reg getOption:cls, reg r40:V, reg p8:p(V +), var `iter.smooth`:*, reg iter_smooth_isMissing:L, reg iter_smooth_orDefault:*, reg isGlm:*, reg isGlm1:V, reg c9:L, reg p9:p(V +), var `label.pos`:*, reg label_pos_isMissing:L, reg label_pos_orDefault:*, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg c10:cls, reg r45:V, reg p10:p(V +), var `cex.caption`:*, reg cex_caption_isMissing:L, reg cex_caption_orDefault:*, var `cex.oma.main`:*, reg cex_oma_main_isMissing:L, reg cex_oma_main_orDefault:*, var `extend.ylim.f`:*, reg extend_ylim_f_isMissing:L, reg extend_ylim_f_orDefault:*, reg r47:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg x3:*, reg x4:V, reg inherits:cls, reg r50:V, reg r51:V, reg c11:L, reg stop:cls, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg which3:*, reg which4:V, reg is_numeric:cls, reg r56:V, reg r57:V, reg c12:L, reg c13:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg c17:L, reg r59:V, reg which5:*, reg which6:V, reg r60:V, reg any:cls, reg r61:V, reg c18:L, reg c19:V, reg c21:L, reg c22:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r62:V, reg c26:L, reg r63:V, reg which7:*, reg which8:V, reg r64:V, reg any1:cls, reg r65:V, reg c27:L, reg c28:V, reg c30:L, reg stop1:cls, reg r66:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg x5:*, reg x6:V, reg inherits1:cls, reg r70:V, reg c31:L, reg family:cls, reg x7:*, reg x8:V, reg p11:p(V +), reg r72:V, reg c32:L, reg r74:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r75:V, reg r76:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg rep:cls, reg r80:V, reg l:*, reg c33:L, reg r82:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which9:*, reg which10:V, reg ___:cls, reg r85:V, reg isGlm2:*, reg isGlm3:V, reg c34:L, reg residuals1:cls, reg x9:*, reg x10:V, reg p12:p(V +), reg r87:V, reg r88:V, reg residuals2:cls, reg x11:*, reg x12:V, reg p13:p(V +), reg r90:V, reg predict:cls, reg x13:*, reg x14:V, reg p14:p(V +), reg r92:V, reg weights:cls, reg x15:*, reg x16:V, reg p15:p(V +), reg r94:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r95:V, reg r96:V, reg w:*, reg w1:V, reg c35:V, reg r97:V, reg c36:L, reg w2:*, reg w3:V, reg r98:V, reg r99:*, reg r100:V, reg c37:L, reg r102:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg wind:*, reg wind1:V, reg __:cls, reg r103:V, reg yh:*, reg yh1:V, reg c38:L, reg yh3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg wind2:*, reg wind3:V, reg __1:cls, reg r104:V, reg w4:*, reg w5:V, reg c39:L, reg w7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg wind4:*, reg wind5:V, reg __2:cls, reg r105:V, reg labels_id1:*, reg labels_id2:V, reg c40:L, reg labels_id4:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg wind6:*, reg wind7:V, reg __3:cls, reg r106:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r107:V, reg r108:V, reg r109:*, reg r110:V, reg length1:cls, reg r111:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r112:V, reg r113:V, reg show:*, reg show1:V, reg c41:L, reg show3:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __4:cls, reg r114:V, reg any2:cls, reg r115:V, reg c42:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r116:V, reg r117:V, reg x17:*, reg x18:V, reg inherits2:cls, reg r118:V, reg c43:L, reg x19:*, reg x20:V, reg c44:L, reg x22:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r119:V, reg dx17:V, reg isGlm4:*, reg isGlm5:V, reg c45:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r120:V, reg r121:V, reg summary:cls, reg x23:*, reg x24:V, reg p16:p(V +), reg r123:V, reg c46:L, reg r125:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r126:V, reg r127:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r128:V, reg deviance:cls, reg x25:*, reg x26:V, reg p17:p(V +), reg r130:V, reg df_residual:cls, reg x27:*, reg x28:V, reg p18:p(V +), reg r132:V, reg r133:V, reg r134:V, reg influence:cls, reg x29:*, reg x30:V, reg p19:p(V +), reg r136:V, reg c47:L, reg r138:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r139:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r140:V, reg r141:V, reg show4:*, reg show5:V, reg c48:L, reg show7:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __5:cls, reg r142:V, reg any3:cls, reg r143:V, reg c49:L, reg cooks_distance:cls, reg x31:*, reg x32:V, reg p20:p(V +), reg infl:*, reg infl1:V, reg p21:p(V +), reg r146:V, reg r147:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r149:V, reg r150:V, reg show8:*, reg show9:V, reg c50:L, reg show11:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r151:V, reg show14:V, reg r152:V, reg c51:cls, reg r153:V, reg __6:cls, reg r154:V, reg any4:cls, reg r155:V, reg c52:L, reg isGlm6:*, reg isGlm7:V, reg c53:L, reg r156:S, reg isGlm8:*, reg isGlm9:V, reg c54:L, reg r157:V, reg ylab3:*, reg ylab4:V, reg dropInf:cls, reg isGlm10:*, reg isGlm11:V, reg c55:L, reg rstandard:cls, reg x33:*, reg x34:V, reg p22:p(V +), reg r159:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r160:V, reg r161:V, reg w8:*, reg w9:V, reg c56:V, reg c57:L, reg r162:*, reg r163:V, reg r164:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r165:V, reg r166:V, reg w10:*, reg w11:V, reg r167:V, reg r168:*, reg r169:V, reg r170:V, reg s:*, reg s1:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r173:V, reg r174:V, reg s4:V, reg r175:V, reg hii:*, reg hii1:V, reg r176:V, reg r177:V, reg r178:V, reg r179:V, reg p23:p(V +), reg hii2:*, reg hii3:V, reg p24:p(V +), reg r182:V, reg isGlm12:*, reg isGlm13:V, reg c58:L, reg suppressWarnings:cls, reg dropInf1:cls, reg rstandard1:cls, reg x35:*, reg x36:V, reg p25:p(V +), reg r184:V, reg p26:p(V +), reg hii4:*, reg hii5:V, reg p27:p(V +), reg r187:V, reg p28:p(V +), reg r189:V, reg r190:V, reg rs:*, reg rs1:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r192:V, reg r193:V, reg show15:*, reg show16:V, reg c59:L, reg show18:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __7:cls, reg r194:V, reg any5:cls, reg r195:V, reg c60:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r196:V, reg r197:V, reg hii6:*, reg hii7:V, reg range:cls, reg r198:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r199:V, reg r200:V, reg r_hat:*, reg r_hat1:V, reg r201:V, reg all:cls, reg r202:V, reg c61:L, reg c62:V, reg diff:cls, reg r_hat2:*, reg r_hat3:V, reg p29:p(V +), reg r204:V, reg mean:cls, reg hii8:*, reg hii9:V, reg p30:p(V +), reg r206:V, reg r207:V, reg r208:V, reg c64:L, reg c65:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r209:V, reg r210:V, reg show19:*, reg show20:V, reg c68:L, reg show22:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r211:V, reg show25:V, reg r212:V, reg c69:cls, reg r213:V, reg __8:cls, reg r214:V, reg any6:cls, reg r215:V, reg c70:L, reg isGlm14:*, reg isGlm15:V, reg c71:L, reg r216:S, reg sym32:cls, reg base32:cls, reg guard32:L, reg r218:V, reg r219:V, reg id_n1:*, reg id_n2:V, reg c72:V, reg c73:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r221:V, reg r222:V, reg id_n3:*, reg id_n4:V, reg as_integer:cls, reg r223:V, reg id_n5:*, reg id_n6:V, reg r224:V, reg c74:L, reg c75:V, reg id_n7:*, reg id_n8:V, reg n:*, reg n1:V, reg r225:V, reg c77:L, reg c78:V, reg c80:L, reg stop2:cls, reg gettextf:cls, reg n2:*, reg n3:V, reg p31:p(V +), reg r227:V, reg p32:p(V +), reg r229:V, reg id_n9:*, reg id_n10:V, reg r230:V, reg c81:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r231:V, reg r232:V, reg labels_id5:*, reg labels_id6:V, reg c82:V, reg c83:L, reg paste:cls, reg n4:*, reg n5:V, reg r233:V, reg p33:p(V +), reg r235:V, reg id_n11:*, reg id_n12:V, reg r237:V, reg sort_list:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r238:V, reg r239:V, reg r240:*, reg r241:V, reg abs:cls, reg r242:V, reg p34:p(V +), reg r244:V, reg c84:L, reg r246:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg iid:*, reg iid1:V, reg __9:cls, reg r247:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r248:V, reg r249:V, reg show26:*, reg show27:V, reg c85:L, reg show29:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __10:cls, reg r250:V, reg any7:cls, reg r251:V, reg c86:L, reg sort_list1:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r252:V, reg r253:V, reg rs2:*, reg rs3:V, reg abs1:cls, reg r254:V, reg p35:p(V +), reg r256:V, reg c87:L, reg r258:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg iid2:*, reg iid3:V, reg __11:cls, reg r259:V, reg sort_list2:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r260:V, reg r261:V, reg rds:*, reg rds1:V, reg abs2:cls, reg r262:V, reg p36:p(V +), reg r264:V, reg c88:L, reg r266:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg iid4:*, reg iid5:V, reg __12:cls, reg r267:V, reg r268:cls, reg r270:cls, reg sym39:cls, reg base39:cls, reg guard39:L, reg r271:V, reg r272:V, reg sub_caption1:*, reg sub_caption2:V, reg c89:V, reg c90:L, reg x37:*, reg x38:V, reg c91:L, reg x40:V, reg dr36:V, reg dc18:L, reg dx39:V, reg dx40:V, reg r273:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r274:V, reg r275:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r276:V, reg r277:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r278:V, reg r279:V, reg cal:*, reg cal1:V, reg names1:cls, reg r280:V, reg match:cls, reg r281:V, reg is_na:cls, reg r282:V, reg r283:V, reg c92:L, reg cal2:*, reg cal3:V, reg c93:L, reg cal5:V, reg dr38:V, reg dc19:L, reg dx41:V, reg dx42:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r284:V, reg cal8:V, reg r285:V, reg m_f:*, reg m_f1:V, reg c94:cls, reg r286:V, reg __13:cls, reg r287:V, reg l3:*, reg names2:cls, reg r288:V, reg c95:L, reg r291:S, reg l5:*, reg r292:V, reg dr40:V, reg dc20:L, reg dx43:V, reg r294:S, reg l7:*, reg dx44:V, reg ___1:cls, reg r295:V, reg names__:cls, reg r296:V, reg deparse:cls, reg cal9:*, reg cal10:V, reg p37:p(V +), reg r299:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r300:V, reg r301:V, reg cc:*, reg cc1:V, reg c96:L, reg cc3:V, reg dr42:V, reg dc21:L, reg dx45:V, reg dx46:V, reg __14:cls, reg r302:V, reg nchar:cls, reg r303:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r304:V, reg r305:V, reg cc4:*, reg cc5:V, reg length2:cls, reg r306:V, reg r307:V, reg c97:L, reg c98:V, reg nc:*, reg nc1:V, reg r308:V, reg c100:L, reg c101:V, reg abbr:*, reg abbr1:V, reg c103:L, reg paste1:cls, reg substr:cls, reg cc6:*, reg cc7:V, reg c104:L, reg cc9:V, reg dr44:V, reg dc22:L, reg dx47:V, reg dx48:V, reg __15:cls, reg r309:V, reg p38:p(V +), reg sym46:cls, reg base46:cls, reg guard46:L, reg r311:V, reg r312:V, reg nc2:*, reg nc3:V, reg min:cls, reg r313:V, reg p39:p(V +), reg r315:V, reg p40:p(V +), reg r317:V, reg r318:V, reg cc10:*, reg cc11:V, reg c105:L, reg cc13:V, reg dr46:V, reg dc23:L, reg dx49:V, reg __16:cls, reg r319:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r321:V, reg r322:V, reg par1:cls, reg r323:V, reg prod1:cls, reg r324:V, reg r325:V, reg ask1:*, reg ask2:V, reg c106:L, reg devAskNewPage:cls, reg r326:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r327:V, reg r328:V, reg on_exit:cls, reg r329:V, reg show30:*, reg show31:V, reg c107:L, reg show33:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg __17:cls, reg r331:V, reg c108:L, reg sym49:cls, reg base49:cls, reg guard49:L, reg r332:V, reg r333:V, reg r334:*, reg r335:V, reg range1:cls, reg r336:V, reg id_n13:*, reg id_n14:V, reg r337:V, reg c109:L, reg extendrange:cls, reg ylim:*, reg ylim1:V, reg p41:p(V +), reg extend_ylim_f1:*, reg extend_ylim_f2:V, reg p42:p(V +), reg r340:V, reg dev_hold:cls, reg r342:V, reg isGlm16:*, reg isGlm17:V, reg c110:L, reg r343:S, reg plot:cls, reg yh4:*, reg yh5:V, reg p43:p(V +), reg r345:*, reg r346:V, reg p44:p(V +), reg l_fit:*, reg l_fit1:V, reg p45:p(V +), reg ylab5:*, reg ylab6:V, reg p46:p(V +), reg main1:*, reg main2:V, reg p47:p(V +), reg ylim2:*, reg ylim3:V, reg p48:p(V +), reg ddd1:dots?, reg r352:V, reg panel1:cls, reg yh6:*, reg yh7:V, reg p49:p(V +), reg r354:*, reg r355:V, reg p50:p(V +), reg ddd2:dots?, reg r357:V, reg one_fig:*, reg one_fig1:V, reg c111:L, reg title:cls, reg sub_caption3:*, reg sub_caption4:V, reg p51:p(V +), reg ddd3:dots?, reg r359:V, reg mtext:cls, reg getCaption:cls, reg r361:V, reg p52:p(V +), reg cex_caption1:*, reg cex_caption2:V, reg p53:p(V +), reg r364:V, reg id_n15:*, reg id_n16:V, reg r365:V, reg c112:L, reg r366:*, reg r367:V, reg c113:L, reg r369:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg show_r:*, reg show_r1:V, reg __18:cls, reg r370:V, reg y_id:*, reg y_id1:V, reg c114:L, reg y_id3:V, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg y_id4:*, reg y_id5:V, reg r371:V, reg __19:cls, reg r372:V, reg strheight:cls, reg r373:V, reg r374:V, reg r375:V, reg l8:*, reg c115:L, reg r377:V, reg l10:*, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg y_id6:*, reg y_id7:V, reg r380:V, reg ___2:cls, reg r381:V, reg text_id:cls, reg yh8:*, reg yh9:V, reg c116:L, reg yh11:V, reg dr56:V, reg dc28:L, reg dx58:V, reg dx59:V, reg show_r2:*, reg show_r3:V, reg __20:cls, reg r382:V, reg p54:p(V +), reg y_id8:*, reg y_id9:V, reg p55:p(V +), reg show_r4:*, reg show_r5:V, reg p56:p(V +), reg r386:V, reg abline:cls, reg r388:V, reg dev_flush:cls, reg r389:V, reg show34:*, reg show35:V, reg c117:L, reg show37:V, reg dr58:V, reg dc29:L, reg dx60:V, reg dx61:V, reg __21:cls, reg r391:V, reg c118:L, reg isGlm18:*, reg isGlm19:V, reg c119:L, reg r392:cls, reg r393:cls, reg sym50:cls, reg base50:cls, reg guard50:L, reg r394:V, reg r395:V, reg rds2:*, reg rds3:V, reg abs3:cls, reg r396:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r397:V, reg r398:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r399:V, reg r400:V, reg absr:*, reg absr1:V, reg max:cls, reg r401:V, reg r402:V, reg c120:cls, reg r403:V, reg as_expression:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r404:V, reg r405:V, reg substitute:cls, reg r406:V, reg p57:p(V +), reg r408:V, reg dev_hold1:cls, reg r409:V, reg qqhalfnorm:cls, reg absr2:*, reg absr3:V, reg p58:p(V +), reg main3:*, reg main4:V, reg p59:p(V +), reg yl:*, reg yl1:V, reg p60:p(V +), reg ylim4:*, reg ylim5:V, reg p61:p(V +), reg ddd4:dots?, reg r414:V, reg qqline1:*, reg qqline2:V, reg c121:L, reg qqline3:cls, reg absr4:*, reg absr5:V, reg p62:p(V +), reg qhalfnorm:*, reg qhalfnorm1:V, reg p63:p(V +), reg r417:V, reg r418:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r420:V, reg r421:V, reg rds4:*, reg rds5:V, reg range2:cls, reg r422:V, reg ylim6:*, reg ylim7:V, reg c122:L, reg ylim9:V, reg dr60:V, reg dc30:L, reg dx62:V, reg dx63:V, reg __22:cls, reg r423:V, reg diff1:cls, reg ylim10:*, reg ylim11:V, reg p64:p(V +), reg r425:V, reg r426:V, reg r427:V, reg l11:*, reg c123:L, reg r429:V, reg l13:*, reg dr62:V, reg dc31:L, reg dx64:V, reg dx65:V, reg ___3:cls, reg r432:V, reg dev_hold2:cls, reg r433:V, reg qqnorm:cls, reg rds6:*, reg rds7:V, reg p65:p(V +), reg main5:*, reg main6:V, reg p66:p(V +), reg ylab7:*, reg ylab8:V, reg p67:p(V +), reg ylim12:*, reg ylim13:V, reg p68:p(V +), reg ddd5:dots?, reg r438:V, reg qqline4:*, reg qqline5:V, reg c124:L, reg qqline6:cls, reg rds8:*, reg rds9:V, reg p69:p(V +), reg r440:V, reg one_fig2:*, reg one_fig3:V, reg c125:L, reg title1:cls, reg sub_caption5:*, reg sub_caption6:V, reg p70:p(V +), reg ddd6:dots?, reg r442:V, reg mtext1:cls, reg getCaption1:cls, reg r444:V, reg p71:p(V +), reg cex_caption3:*, reg cex_caption4:V, reg p72:p(V +), reg r447:V, reg id_n17:*, reg id_n18:V, reg r448:V, reg c126:L, reg text_id1:cls, reg qq:*, reg qq1:V, reg c127:L, reg qq3:V, reg dr64:V, reg dc32:L, reg dx66:V, reg dx67:V, reg r449:V, reg c128:L, reg dx69:V, reg dr66:V, reg dc33:L, reg dx70:V, reg dx71:V, reg show_rds:*, reg show_rds1:V, reg __23:cls, reg r450:V, reg p73:p(V +), reg qq4:*, reg qq5:V, reg c129:L, reg qq7:V, reg dr68:V, reg dc34:L, reg dx72:V, reg dx73:V, reg r452:V, reg c130:L, reg dx75:V, reg dr70:V, reg dc35:L, reg dx76:V, reg dx77:V, reg show_rds2:*, reg show_rds3:V, reg __24:cls, reg r453:V, reg p74:p(V +), reg show_rds4:*, reg show_rds5:V, reg p75:p(V +), reg r456:V, reg dev_flush1:cls, reg r458:V, reg show38:*, reg show39:V, reg c131:L, reg show41:V, reg dr72:V, reg dc36:L, reg dx78:V, reg dx79:V, reg __25:cls, reg r460:V, reg c132:L, reg sym55:cls, reg base55:cls, reg guard55:L, reg r461:V, reg r462:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r463:V, reg r464:V, reg rs4:*, reg rs5:V, reg abs4:cls, reg r465:V, reg r466:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r467:V, reg r468:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r469:V, reg r470:V, reg sqrtabsr:*, reg sqrtabsr1:V, reg max1:cls, reg r471:V, reg c133:cls, reg r472:V, reg as_expression1:cls, reg sym59:cls, reg base59:cls, reg guard59:L, reg r473:V, reg r474:V, reg substitute1:cls, reg r475:V, reg p76:p(V +), reg r477:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r478:V, reg r479:V, reg w12:*, reg w13:V, reg c134:V, reg c135:L, reg yh12:*, reg yh13:V, reg yh14:V, reg yh15:*, reg yh16:V, reg c136:L, reg yh18:V, reg dr74:V, reg dc37:L, reg dx80:V, reg w14:*, reg w15:V, reg r480:V, reg __26:cls, reg r481:V, reg dev_hold3:cls, reg r482:V, reg plot1:cls, reg yhn0:*, reg yhn1:V, reg p77:p(V +), reg sqrtabsr2:*, reg sqrtabsr3:V, reg p78:p(V +), reg l_fit2:*, reg l_fit3:V, reg p79:p(V +), reg yl2:*, reg yl3:V, reg p80:p(V +), reg main7:*, reg main8:V, reg p81:p(V +), reg ylim14:*, reg ylim15:V, reg p82:p(V +), reg ddd7:dots?, reg r489:V, reg panel2:cls, reg yhn2:*, reg yhn3:V, reg p83:p(V +), reg sqrtabsr4:*, reg sqrtabsr5:V, reg p84:p(V +), reg ddd8:dots?, reg r492:V, reg one_fig4:*, reg one_fig5:V, reg c137:L, reg title2:cls, reg sub_caption7:*, reg sub_caption8:V, reg p85:p(V +), reg ddd9:dots?, reg r494:V, reg mtext2:cls, reg getCaption2:cls, reg r496:V, reg p86:p(V +), reg cex_caption5:*, reg cex_caption6:V, reg p87:p(V +), reg r499:V, reg id_n19:*, reg id_n20:V, reg r500:V, reg c138:L, reg text_id2:cls, reg yhn4:*, reg yhn5:V, reg c139:L, reg yhn7:V, reg dr76:V, reg dc38:L, reg dx81:V, reg dx82:V, reg show_rs:*, reg show_rs1:V, reg __27:cls, reg r501:V, reg p88:p(V +), reg sqrtabsr6:*, reg sqrtabsr7:V, reg c140:L, reg sqrtabsr9:V, reg dr78:V, reg dc39:L, reg dx83:V, reg dx84:V, reg show_rs2:*, reg show_rs3:V, reg __28:cls, reg r503:V, reg p89:p(V +), reg show_rs4:*, reg show_rs5:V, reg p90:p(V +), reg r506:V, reg dev_flush2:cls, reg r508:V, reg show42:*, reg show43:V, reg c141:L, reg show45:V, reg dr80:V, reg dc40:L, reg dx85:V, reg dx86:V, reg __29:cls, reg r510:V, reg c142:L, reg id_n21:*, reg id_n22:V, reg r511:V, reg c143:L, reg order:cls, reg cook:*, reg cook1:V, reg r512:V, reg p91:p(V +), reg r514:V, reg c144:L, reg r516:V, reg dr82:V, reg dc41:L, reg dx87:V, reg dx88:V, reg iid6:*, reg iid7:V, reg __30:cls, reg r517:V, reg cook2:*, reg cook3:V, reg c145:L, reg cook5:V, reg dr84:V, reg dc42:L, reg dx89:V, reg dx90:V, reg show_r6:*, reg show_r7:V, reg c146:L, reg cook7:V, reg show_r9:V, reg dr86:V, reg dc43:L, reg dx91:V, reg cook9:V, reg dx92:V, reg __31:cls, reg r518:V, reg __32:cls, reg r519:V, reg r520:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r522:V, reg r523:V, reg cook10:*, reg cook11:V, reg max2:cls, reg r524:V, reg dev_hold4:cls, reg r525:V, reg plot2:cls, reg cook12:*, reg cook13:V, reg p92:p(V +), reg sym62:cls, reg base62:cls, reg guard62:L, reg r527:V, reg r528:V, reg ymx:*, reg ymx1:V, reg c147:cls, reg r529:V, reg p93:p(V +), reg main9:*, reg main10:V, reg p94:p(V +), reg ddd10:dots?, reg r532:V, reg one_fig6:*, reg one_fig7:V, reg c148:L, reg title3:cls, reg sub_caption9:*, reg sub_caption10:V, reg p95:p(V +), reg ddd11:dots?, reg r534:V, reg mtext3:cls, reg getCaption3:cls, reg r536:V, reg p96:p(V +), reg cex_caption7:*, reg cex_caption8:V, reg p97:p(V +), reg r539:V, reg id_n23:*, reg id_n24:V, reg r540:V, reg c149:L, reg text_id3:cls, reg show_r10:*, reg show_r11:V, reg p98:p(V +), reg cook14:*, reg cook15:V, reg c150:L, reg cook17:V, reg dr88:V, reg dc44:L, reg dx93:V, reg dx94:V, reg show_r12:*, reg show_r13:V, reg __33:cls, reg r542:V, reg p99:p(V +), reg show_r14:*, reg show_r15:V, reg p100:p(V +), reg r545:V, reg dev_flush3:cls, reg r547:V, reg show46:*, reg show47:V, reg c151:L, reg show49:V, reg dr90:V, reg dc45:L, reg dx95:V, reg dx96:V, reg __34:cls, reg r549:V, reg c152:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r550:V, reg r551:V, reg rs6:*, reg rs7:V, reg range3:cls, reg r552:V, reg id_n25:*, reg id_n26:V, reg r553:V, reg c153:L, reg extendrange1:cls, reg ylim16:*, reg ylim17:V, reg p101:p(V +), reg extend_ylim_f3:*, reg extend_ylim_f4:V, reg p102:p(V +), reg r556:V, reg order1:cls, reg cook18:*, reg cook19:V, reg r557:V, reg p103:p(V +), reg r559:V, reg c154:L, reg r561:V, reg dr92:V, reg dc46:L, reg dx97:V, reg dx98:V, reg iid8:*, reg iid9:V, reg __35:cls, reg r562:V, reg isConst_hat:*, reg isConst_hat1:V, reg c155:L, reg sym64:cls, reg base64:cls, reg guard64:L, reg r563:V, reg r564:V, reg missing:cls, reg r565:V, reg c156:L, reg l14:*, reg c157:L, reg r567:S, reg l16:*, reg dr94:V, reg dc47:L, reg dx100:V, reg r569:S, reg dx101:V, reg ____:cls, reg r570:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r572:V, reg r573:V, reg x41:*, reg x42:V, reg c158:L, reg x44:V, reg dr96:V, reg dc48:L, reg dx102:V, reg dx103:V, reg r574:V, reg length3:cls, reg r575:V, reg c159:L, reg sym66:cls, reg base66:cls, reg guard66:L, reg r576:V, reg r577:V, reg xlev:*, reg xlev1:V, reg names3:cls, reg r578:V, reg model_frame:cls, reg x45:*, reg x46:V, reg p104:p(V +), reg r580:V, reg c160:L, reg r582:V, reg dr98:V, reg dc49:L, reg dx104:V, reg dx105:V, reg facvars:*, reg facvars1:V, reg __36:cls, reg r583:V, reg data_matrix:cls, reg mf:*, reg mf1:V, reg p105:p(V +), reg r585:V, reg unname:cls, reg lengths:cls, reg xlev2:*, reg xlev3:V, reg p106:p(V +), reg r587:V, reg p107:p(V +), reg r589:V, reg nf:*, reg nf1:V, reg r590:V, reg c161:L, reg r591:V, reg rev:cls, reg sym67:cls, reg base67:cls, reg guard67:L, reg r592:V, reg r593:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r594:V, reg r595:V, reg nlev:*, reg nlev1:V, reg c162:L, reg nlev3:V, reg dr100:V, reg dc50:L, reg dx106:V, reg dx107:V, reg nf2:*, reg nf3:V, reg r596:V, reg __37:cls, reg r597:V, reg c163:cls, reg r598:V, reg cumprod:cls, reg r599:V, reg p108:p(V +), reg r601:V, reg dm:*, reg dm1:V, reg r602:V, reg ff:*, reg ff1:V, reg ___4:cls, reg r603:V, reg facval:*, reg facval1:V, reg dev_hold5:cls, reg r604:V, reg plot3:cls, reg facval2:*, reg facval3:V, reg p109:p(V +), reg rs8:*, reg rs9:V, reg p110:p(V +), reg sym69:cls, reg base69:cls, reg guard69:L, reg r607:V, reg r608:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r609:V, reg r610:V, reg nlev4:*, reg nlev5:V, reg r611:V, reg ff2:*, reg ff3:V, reg r612:V, reg sum:cls, reg r613:V, reg r614:V, reg c164:cls, reg r615:V, reg p111:p(V +), reg ylim18:*, reg ylim19:V, reg p112:p(V +), reg main11:*, reg main12:V, reg p113:p(V +), reg ylab9:*, reg ylab10:V, reg p114:p(V +), reg ddd12:dots?, reg r620:V, reg axis:cls, reg ff4:*, reg ff5:V, reg c165:L, reg ff7:V, reg dr102:V, reg dc51:L, reg dx108:V, reg dx109:V, reg __38:cls, reg r621:V, reg nlev6:*, reg nlev7:V, reg c166:L, reg dx111:V, reg r623:I, reg nlev9:V, reg dr104:V, reg dc52:L, reg dx113:V, reg dx114:V, reg r625:I, reg dx115:V, reg __39:cls, reg r626:V, reg r627:V, reg r628:V, reg r629:V, reg r630:V, reg p115:p(V +), reg xlev4:*, reg xlev5:V, reg c167:L, reg xlev7:V, reg dr106:V, reg dc53:L, reg dx116:V, reg dx117:V, reg __40:cls, reg r632:V, reg p116:p(V +), reg r634:V, reg mtext4:cls, reg paste2:cls, reg facvars2:*, reg facvars3:V, reg c168:L, reg facvars5:V, reg dr108:V, reg dc54:L, reg dx118:V, reg dx119:V, reg __41:cls, reg r635:V, reg p117:p(V +), reg r637:V, reg p118:p(V +), reg p119:p(V +), reg r640:V, reg abline1:cls, reg ff8:*, reg ff9:V, reg c169:L, reg ff11:V, reg dr110:V, reg dc55:L, reg dx120:V, reg dx121:V, reg __42:cls, reg r641:V, reg nlev10:*, reg nlev11:V, reg c170:L, reg dx123:V, reg r643:R, reg nlev13:V, reg dr112:V, reg dc56:L, reg dx125:V, reg dx126:V, reg r645:R, reg dx127:V, reg __43:cls, reg r646:V, reg r647:V, reg r648:V, reg r649:V, reg p120:p(V +), reg r651:V, reg panel3:cls, reg facval4:*, reg facval5:V, reg p121:p(V +), reg rs10:*, reg rs11:V, reg p122:p(V +), reg ddd13:dots?, reg r654:V, reg abline2:cls, reg r655:V, reg dev_flush4:cls, reg r656:V, reg r657:V, reg message:cls, reg gettextf1:cls, reg format:cls, reg mean1:cls, reg r_hat4:*, reg r_hat5:V, reg p123:p(V +), reg r659:V, reg p124:p(V +), reg r661:V, reg p125:p(V +), reg r663:V, reg p126:p(V +), reg r665:V, reg frame:cls, reg r666:V, reg hii10:*, reg hii11:V, reg l17:*, reg c171:L, reg r669:L, reg l19:*, reg dr114:V, reg dc57:L, reg dx128:V, reg dx129:V, reg xx:*, reg xx1:V, reg r672:V, reg ___5:cls, reg r673:V, reg dev_hold6:cls, reg r674:V, reg plot4:cls, reg xx2:*, reg xx3:V, reg p127:p(V +), reg rs12:*, reg rs13:V, reg p128:p(V +), reg sym71:cls, reg base71:cls, reg guard71:L, reg r677:V, reg r678:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r679:V, reg r680:V, reg xx4:*, reg xx5:V, reg max3:cls, reg r681:V, reg c172:cls, reg r682:V, reg p129:p(V +), reg ylim20:*, reg ylim21:V, reg p130:p(V +), reg main13:*, reg main14:V, reg p131:p(V +), reg ylab11:*, reg ylab12:V, reg p132:p(V +), reg ddd14:dots?, reg r687:V, reg panel4:cls, reg xx6:*, reg xx7:V, reg p133:p(V +), reg rs14:*, reg rs15:V, reg p134:p(V +), reg ddd15:dots?, reg r690:V, reg abline3:cls, reg r691:V, reg one_fig8:*, reg one_fig9:V, reg c173:L, reg title4:cls, reg sub_caption11:*, reg sub_caption12:V, reg p135:p(V +), reg ddd16:dots?, reg r693:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r695:V, reg r696:V, reg cook_levels1:*, reg cook_levels2:V, reg length4:cls, reg r697:V, reg c174:L, reg x47:*, reg x48:V, reg c175:L, reg x50:V, reg dr116:V, reg dc58:L, reg dx130:V, reg dx131:V, reg r698:V, reg par2:cls, reg r699:V, reg c176:L, reg r701:V, reg dr118:V, reg dc59:L, reg dx132:V, reg dx133:V, reg __44:cls, reg r702:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r703:V, reg r704:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r705:V, reg r706:V, reg r_hat6:*, reg r_hat7:V, reg c177:L, reg r_hat9:V, reg dr120:V, reg dc60:L, reg dx134:V, reg dx135:V, reg __45:cls, reg r707:V, reg r_hat10:*, reg r_hat11:V, reg c178:L, reg r_hat13:V, reg dr122:V, reg dc61:L, reg dx136:V, reg dx137:V, reg __46:cls, reg r708:V, reg r709:V, reg min1:cls, reg r710:V, reg usr2:*, reg usr3:V, reg seq_int:cls, reg r711:V, reg cook_levels3:*, reg cook_levels4:V, reg s5:V, reg l20:I, reg i:I, reg i1:I, reg i2:I, reg c179:L, reg x51:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r712:V, reg i7:I, reg r713:V, reg crit:*, reg crit1:V, reg p136:*, reg p137:V, reg r714:V, reg hh:*, reg hh1:V, reg r715:V, reg r716:V, reg hh2:*, reg hh3:V, reg r717:V, reg r718:V, reg lines:cls, reg hh4:*, reg hh5:V, reg p138:p(V +), reg cl_h:*, reg cl_h1:V, reg p139:p(V +), reg cook_lty1:*, reg cook_lty2:V, reg p140:p(V +), reg cook_col1:*, reg cook_col2:V, reg p141:p(V +), reg r723:V, reg lines1:cls, reg hh6:*, reg hh7:V, reg p142:p(V +), reg cl_h2:*, reg cl_h3:V, reg r725:V, reg p143:p(V +), reg cook_lty3:*, reg cook_lty4:V, reg p144:p(V +), reg cook_col3:*, reg cook_col4:V, reg p145:p(V +), reg r729:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r730:V, reg r731:V, reg cook_legendChanges1:*, reg cook_legendChanges2:V, reg c180:V, reg r732:V, reg c181:L, reg do_call:cls, reg legend:*, reg legend1:V, reg p146:p(V +), reg modifyList:cls, reg sym78:cls, reg base78:cls, reg guard78:L, reg r734:V, reg r735:V, reg cook_lty5:*, reg cook_lty6:V, reg cook_col5:*, reg cook_col6:V, reg cook_col7:*, reg cook_col8:V, reg list2:cls, reg r736:V, reg p147:p(V +), reg cook_legendChanges3:*, reg cook_legendChanges4:V, reg p148:p(V +), reg r739:V, reg p149:p(V +), reg r741:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r743:V, reg r744:V, reg usr4:*, reg usr5:V, reg min2:cls, reg r745:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r746:V, reg r747:V, reg p150:*, reg p151:V, reg xmax:*, reg xmax1:V, reg r748:V, reg r749:V, reg xmax2:*, reg xmax3:V, reg r750:V, reg r751:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r752:V, reg r753:V, reg cook_levels5:*, reg cook_levels6:V, reg r754:V, reg ymult:*, reg ymult1:V, reg r755:V, reg axis1:cls, reg sym82:cls, reg base82:cls, reg guard82:L, reg r756:V, reg r757:V, reg rev1:cls, reg aty:*, reg aty1:V, reg p152:p(V +), reg r759:V, reg r760:V, reg aty2:*, reg aty3:V, reg c182:cls, reg r761:V, reg p153:p(V +), reg paste3:cls, reg sym83:cls, reg base83:cls, reg guard83:L, reg r763:V, reg r764:V, reg rev2:cls, reg cook_levels7:*, reg cook_levels8:V, reg p154:p(V +), reg r766:V, reg cook_levels9:*, reg cook_levels10:V, reg c183:cls, reg r767:V, reg p155:p(V +), reg r769:V, reg p156:p(V +), reg sym84:cls, reg base84:cls, reg guard84:L, reg r771:V, reg r772:V, reg c184:cls, reg r773:V, reg p157:p(V +), reg cex_id1:*, reg cex_id2:V, reg p158:p(V +), reg cook_col9:*, reg cook_col10:V, reg p159:p(V +), reg r777:V, reg dev_flush5:cls, reg r779:V, reg do_plot:*, reg do_plot1:V, reg c185:L, reg mtext5:cls, reg getCaption4:cls, reg r780:V, reg p160:p(V +), reg cex_caption9:*, reg cex_caption10:V, reg p161:p(V +), reg r783:V, reg id_n27:*, reg id_n28:V, reg r784:V, reg c186:L, reg rs16:*, reg rs17:V, reg c187:L, reg rs19:V, reg dr124:V, reg dc62:L, reg dx138:V, reg dx139:V, reg show_rs6:*, reg show_rs7:V, reg __47:cls, reg r785:V, reg y_id10:*, reg y_id11:V, reg c188:L, reg y_id13:V, reg dr126:V, reg dc63:L, reg dx140:V, reg dx141:V, reg y_id14:*, reg y_id15:V, reg r786:V, reg __48:cls, reg r787:V, reg strheight1:cls, reg r788:V, reg r789:V, reg r790:V, reg l21:*, reg c189:L, reg r792:V, reg l23:*, reg dr128:V, reg dc64:L, reg dx142:V, reg dx143:V, reg y_id16:*, reg y_id17:V, reg r795:V, reg ___6:cls, reg r796:V, reg text_id4:cls, reg xx8:*, reg xx9:V, reg c190:L, reg xx11:V, reg dr130:V, reg dc65:L, reg dx144:V, reg dx145:V, reg show_rs8:*, reg show_rs9:V, reg __49:cls, reg r797:V, reg p162:p(V +), reg y_id18:*, reg y_id19:V, reg p163:p(V +), reg show_rs10:*, reg show_rs11:V, reg p164:p(V +), reg r801:V, reg r802:V, reg r803:V, reg show50:*, reg show51:V, reg c191:L, reg show53:V, reg dr132:V, reg dc66:L, reg dx146:V, reg dx147:V, reg __50:cls, reg r805:V, reg c192:L, reg dropInf2:cls, reg hii12:*, reg hii13:V, reg hii14:*, reg hii15:V, reg r806:V, reg r807:V, reg p165:p(V +), reg hii16:*, reg hii17:V, reg p166:p(V +), reg r810:V, reg sym85:cls, reg base85:cls, reg guard85:L, reg r811:V, reg r812:V, reg cook20:*, reg cook21:V, reg max4:cls, reg r813:V, reg r814:V, reg dev_hold7:cls, reg r815:V, reg plot5:cls, reg g:*, reg g1:V, reg p167:p(V +), reg cook22:*, reg cook23:V, reg p168:p(V +), reg sym86:cls, reg base86:cls, reg guard86:L, reg r818:V, reg r819:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r820:V, reg r821:V, reg g2:*, reg g3:V, reg max5:cls, reg r822:V, reg c193:cls, reg r823:V, reg p169:p(V +), reg sym88:cls, reg base88:cls, reg guard88:L, reg r825:V, reg r826:V, reg ymx2:*, reg ymx3:V, reg c194:cls, reg r827:V, reg p170:p(V +), reg main15:*, reg main16:V, reg p171:p(V +), reg sym89:cls, reg base89:cls, reg guard89:L, reg r830:V, reg r831:V, reg expression1:cls, reg r832:V, reg p172:p(V +), reg ddd17:dots?, reg r834:V, reg panel5:cls, reg g4:*, reg g5:V, reg p173:p(V +), reg cook24:*, reg cook25:V, reg p174:p(V +), reg ddd18:dots?, reg r837:V, reg pretty:cls, reg hii18:*, reg hii19:V, reg p175:p(V +), reg r839:V, reg axis2:cls, reg athat:*, reg athat1:V, reg athat2:*, reg athat3:V, reg r840:V, reg r841:V, reg p176:p(V +), reg paste4:cls, reg athat4:*, reg athat5:V, reg p177:p(V +), reg r844:V, reg p178:p(V +), reg r846:V, reg one_fig10:*, reg one_fig11:V, reg c195:L, reg title5:cls, reg sub_caption13:*, reg sub_caption14:V, reg p179:p(V +), reg ddd19:dots?, reg r848:V, reg x52:*, reg x53:V, reg c196:L, reg x55:V, reg dr134:V, reg dc67:L, reg dx148:V, reg dx149:V, reg r850:V, reg pretty1:cls, reg sym90:cls, reg base90:cls, reg guard90:L, reg r851:V, reg r852:V, reg p180:*, reg p181:V, reg cook26:*, reg cook27:V, reg r853:V, reg g6:*, reg g7:V, reg r854:V, reg r855:V, reg p182:p(V +), reg r857:V, reg par3:cls, reg r858:V, reg usr6:*, reg usr7:V, reg c197:L, reg usr9:V, reg dr136:V, reg dc68:L, reg dx150:V, reg dx151:V, reg __51:cls, reg r859:V, reg usr10:*, reg usr11:V, reg c198:L, reg usr13:V, reg dr138:V, reg dc69:L, reg dx152:V, reg dx153:V, reg __52:cls, reg r860:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r861:V, reg r862:V, reg bval:*, reg bval1:V, reg r863:I, reg s6:V, reg l24:I, reg i8:I, reg i9:I, reg i10:I, reg c199:L, reg x56:V, reg bval2:*, reg bval3:V, reg c200:L, reg i14:I, reg bval5:V, reg dr140:V, reg dc70:L, reg dx154:V, reg i16:I, reg dx155:V, reg i17:*, reg i18:V, reg __53:cls, reg r864:V, reg r865:V, reg p183:*, reg p184:V, reg ymax:*, reg ymax1:V, reg r866:V, reg bi2:*, reg bi3:V, reg xmax4:*, reg xmax5:V, reg r867:V, reg r868:V, reg c201:L, reg xmax6:*, reg xmax7:V, reg strwidth:cls, reg r869:V, reg r870:V, reg r871:V, reg bi4:*, reg bi5:V, reg xi:*, reg xi1:V, reg r872:V, reg p185:*, reg p186:V, reg r873:V, reg abline4:cls, reg bi6:*, reg bi7:V, reg p187:p(V +), reg cook_lty7:*, reg cook_lty8:V, reg p188:p(V +), reg r876:V, reg text:cls, reg xi2:*, reg xi3:V, reg p189:p(V +), reg yi:*, reg yi1:V, reg p190:p(V +), reg paste5:cls, reg bval6:*, reg bval7:V, reg c202:L, reg bval9:V, reg dr142:V, reg dc71:L, reg dx156:V, reg dx157:V, reg i21:*, reg i22:V, reg __54:cls, reg r879:V, reg p191:p(V +), reg r881:V, reg p192:p(V +), reg r883:V, reg i23:I, reg ymax2:*, reg ymax3:V, reg strheight2:cls, reg r885:V, reg r886:V, reg r887:V, reg p193:*, reg p194:V, reg yi2:*, reg yi3:V, reg r888:V, reg bi8:*, reg bi9:V, reg r889:V, reg lines2:cls, reg sym92:cls, reg base92:cls, reg guard92:L, reg r890:V, reg r891:V, reg xi4:*, reg xi5:V, reg c203:cls, reg r892:V, reg p195:p(V +), reg sym93:cls, reg base93:cls, reg guard93:L, reg r894:V, reg r895:V, reg yi4:*, reg yi5:V, reg c204:cls, reg r896:V, reg p196:p(V +), reg cook_lty9:*, reg cook_lty10:V, reg p197:p(V +), reg r899:V, reg text1:cls, reg xi6:*, reg xi7:V, reg p198:p(V +), reg ymax4:*, reg ymax5:V, reg strheight3:cls, reg r901:V, reg r902:V, reg r903:V, reg p199:p(V +), reg paste6:cls, reg bval10:*, reg bval11:V, reg c205:L, reg bval13:V, reg dr144:V, reg dc72:L, reg dx158:V, reg dx159:V, reg i24:*, reg i25:V, reg __55:cls, reg r905:V, reg p200:p(V +), reg r907:V, reg p201:p(V +), reg r909:V, reg mtext6:cls, reg getCaption5:cls, reg r910:V, reg p202:p(V +), reg cex_caption11:*, reg cex_caption12:V, reg p203:p(V +), reg r913:V, reg id_n29:*, reg id_n30:V, reg r914:V, reg c206:L, reg order2:cls, reg cook28:*, reg cook29:V, reg r915:V, reg p204:p(V +), reg r917:V, reg c207:L, reg r919:V, reg dr146:V, reg dc73:L, reg dx160:V, reg dx161:V, reg iid10:*, reg iid11:V, reg __56:cls, reg r920:V, reg text_id5:cls, reg g8:*, reg g9:V, reg c208:L, reg g11:V, reg dr148:V, reg dc74:L, reg dx162:V, reg dx163:V, reg show_r16:*, reg show_r17:V, reg __57:cls, reg r921:V, reg p205:p(V +), reg cook30:*, reg cook31:V, reg c209:L, reg cook33:V, reg dr150:V, reg dc75:L, reg dx164:V, reg dx165:V, reg show_r18:*, reg show_r19:V, reg __58:cls, reg r923:V, reg p206:p(V +), reg show_r20:*, reg show_r21:V, reg p207:p(V +), reg usr14:*, reg usr15:V, reg p208:p(V +), reg r927:V, reg dev_flush6:cls, reg r929:V, reg one_fig12:*, reg one_fig13:V, reg r931:V, reg c210:L, reg c212:V, reg par4:cls, reg r932:V, reg c213:L, reg c215:L, reg r934:V, reg dr152:V, reg dc76:L, reg dx166:V, reg c217:L, reg dx167:V, reg __59:cls, reg r935:V, reg r936:V, reg c218:L, reg c219:V, reg c221:L, reg mtext7:cls, reg sub_caption15:*, reg sub_caption16:V, reg p209:p(V +), reg cex_oma_main1:*, reg cex_oma_main2:V, reg p210:p(V +), reg r939:V, reg sym94:cls, reg base94:cls, reg guard94:L, reg r941:V, reg r942:V, reg invisible:cls, reg r943:V |
    mkenv;
    st x = x;
    which_isMissing = missing.0(which);
    if which_isMissing then L0() else L1(which);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(1.0, 2.0, 3.0, 5.0);
      goto L0(r2);
    L2():
      r = dyn base(1.0, 2.0, 3.0, 5.0);
      goto L0(r);
    };
    goto L1(p);
  L1(which_orDefault):
    st which = which_orDefault;
    caption_isMissing = missing.0(caption);
    if caption_isMissing then L2() else L3(caption);
  L2():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      sym2 = ldf expression;
      base2 = ldf expression in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r4 = dyn base1("Residuals vs Fitted", "Q-Q Residuals", "Scale-Location", "Cook's distance", "Residuals vs Leverage", <lang expression(`/`(`*`("Cook's dist vs Leverage* ", `[`(h, ii)), `(`(`-`(1.0, `[`(h, ii)))))>);
      goto L0(r4);
    L1(r7):
      list = ldf list in base;
      r9 = dyn list("Residuals vs Fitted", "Q-Q Residuals", "Scale-Location", "Cook's distance", "Residuals vs Leverage", r7);
      goto L0(r9);
    L4():
      expression = ldf expression in base;
      r8 = dyn expression(<lang `/`(`*`("Cook's dist vs Leverage* ", `[`(h, ii)), `(`(`-`(1.0, `[`(h, ii))))>);
      goto L1(r8);
    L5():
      r6 = dyn base2(<lang `/`(`*`("Cook's dist vs Leverage* ", `[`(h, ii)), `(`(`-`(1.0, `[`(h, ii))))>);
      goto L1(r6);
    };
    goto L3(p1);
  L3(caption_orDefault):
    st caption = caption_orDefault;
    panel_isMissing = missing.0(panel);
    if panel_isMissing then L4() else L5(panel);
  L4():
    p2 = prom<V +>{
      add_smooth1 = ld `add.smooth`;
      add_smooth2 = force? add_smooth1;
      checkMissing(add_smooth2);
      c1 = `as.logical`(add_smooth2);
      if c1 then L1() else L0();
    L0():
      points = ld points;
      points1 = force? points;
      checkMissing(points1);
      return points1;
    L1():
      r11 = clos inner3924448841;
      return r11;
    };
    goto L5(p2);
  L5(panel_orDefault):
    st panel = panel_orDefault;
    sub_caption_isMissing = missing.0(sub_caption);
    if sub_caption_isMissing then L6(NULL) else L6(sub_caption);
  L6(sub_caption_orDefault):
    st `sub.caption` = sub_caption_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L7("") else L7(main);
  L7(main_orDefault):
    st main = main_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L8() else L9(ask);
  L8():
    p3 = prom<V +>{
      sym3 = ldf prod;
      base3 = ldf prod in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r14):
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L3():
      par = ldf par;
      r15 = dyn par("mfcol");
      prod = ldf prod in base;
      r16 = dyn prod(r15);
      goto L0(r16);
    L4():
      r13 = dyn base3(<lang par("mfcol")>);
      goto L0(r13);
    L1(r20, r21):
      r23 = `<`(r20, r21);
      c2 = `as.logical`(r23);
      if c2 then L7() else L2(c2);
    L5():
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      length = ldf length in base;
      r22 = dyn length(which2);
      goto L1(r14, r22);
    L6():
      r19 = dyn base4(<sym which>);
      goto L1(r14, r19);
    L2(c4):
      return c4;
    L7():
      dev_interactive = ldf `dev.interactive`;
      r24 = dyn dev_interactive();
      c5 = `as.logical`(r24);
      c6 = `&&`(c2, c5);
      goto L2(c6);
    };
    goto L9(p3);
  L9(ask_orDefault):
    st ask = ask_orDefault;
    st `...` = ddd;
    id_n_isMissing = missing.0(id_n);
    if id_n_isMissing then L10(3.0) else L10(id_n);
  L10(id_n_orDefault):
    st `id.n` = id_n_orDefault;
    labels_id_isMissing = missing.0(labels_id);
    if labels_id_isMissing then L11() else L12(labels_id);
  L11():
    p5 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      residuals = ldf residuals;
      p4 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r29 = dyn residuals(p4);
      names = ldf names in base;
      r30 = dyn names(r29);
      goto L0(r30);
    L2():
      r26 = dyn base5(<lang residuals(x)>);
      goto L0(r26);
    };
    goto L12(p5);
  L12(labels_id_orDefault):
    st `labels.id` = labels_id_orDefault;
    cex_id_isMissing = missing.0(cex_id);
    if cex_id_isMissing then L13(0.75) else L13(cex_id);
  L13(cex_id_orDefault):
    st `cex.id` = cex_id_orDefault;
    qqline_isMissing = missing.0(qqline);
    if qqline_isMissing then L14(TRUE) else L14(qqline);
  L14(qqline_orDefault):
    st qqline = qqline_orDefault;
    cook_levels_isMissing = missing.0(cook_levels);
    if cook_levels_isMissing then L15() else L16(cook_levels);
  L15():
    p6 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c8 = ldf c in base;
      r34 = dyn c8(0.5, 1.0);
      goto L0(r34);
    L2():
      r32 = dyn base6(0.5, 1.0);
      goto L0(r32);
    };
    goto L16(p6);
  L16(cook_levels_orDefault):
    st `cook.levels` = cook_levels_orDefault;
    cook_col_isMissing = missing.0(cook_col);
    if cook_col_isMissing then L17(8.0) else L17(cook_col);
  L17(cook_col_orDefault):
    st `cook.col` = cook_col_orDefault;
    cook_lty_isMissing = missing.0(cook_lty);
    if cook_lty_isMissing then L18(2.0) else L18(cook_lty);
  L18(cook_lty_orDefault):
    st `cook.lty` = cook_lty_orDefault;
    cook_legendChanges_isMissing = missing.0(cook_legendChanges);
    if cook_legendChanges_isMissing then L19() else L20(cook_legendChanges);
  L19():
    p7 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      list1 = ldf list in base;
      r38 = dyn list1();
      goto L0(r38);
    L2():
      r36 = dyn base7();
      goto L0(r36);
    };
    goto L20(p7);
  L20(cook_legendChanges_orDefault):
    st `cook.legendChanges` = cook_legendChanges_orDefault;
    add_smooth_isMissing = missing.0(add_smooth);
    if add_smooth_isMissing then L21() else L22(add_smooth);
  L21():
    p8 = prom<V +>{
      getOption = ldf getOption;
      r40 = dyn getOption("add.smooth");
      return r40;
    };
    goto L22(p8);
  L22(add_smooth_orDefault):
    st `add.smooth` = add_smooth_orDefault;
    iter_smooth_isMissing = missing.0(iter_smooth);
    if iter_smooth_isMissing then L23() else L24(iter_smooth);
  L23():
    p9 = prom<V +>{
      isGlm = ld isGlm;
      isGlm1 = force? isGlm;
      checkMissing(isGlm1);
      c9 = `as.logical`(isGlm1);
      if c9 then L1() else L0();
    L0():
      return 3.0;
    L1():
      return 0.0;
    };
    goto L24(p9);
  L24(iter_smooth_orDefault):
    st `iter.smooth` = iter_smooth_orDefault;
    label_pos_isMissing = missing.0(label_pos);
    if label_pos_isMissing then L25() else L26(label_pos);
  L25():
    p10 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c10 = ldf c in base;
      r45 = dyn c10(4.0, 2.0);
      goto L0(r45);
    L2():
      r43 = dyn base8(4.0, 2.0);
      goto L0(r43);
    };
    goto L26(p10);
  L26(label_pos_orDefault):
    st `label.pos` = label_pos_orDefault;
    cex_caption_isMissing = missing.0(cex_caption);
    if cex_caption_isMissing then L27(1.0) else L27(cex_caption);
  L27(cex_caption_orDefault):
    st `cex.caption` = cex_caption_orDefault;
    cex_oma_main_isMissing = missing.0(cex_oma_main);
    if cex_oma_main_isMissing then L28(1.25) else L28(cex_oma_main);
  L28(cex_oma_main_orDefault):
    st `cex.oma.main` = cex_oma_main_orDefault;
    extend_ylim_f_isMissing = missing.0(extend_ylim_f);
    if extend_ylim_f_isMissing then L29(0.08) else L29(extend_ylim_f);
  L29(extend_ylim_f_orDefault):
    st `extend.ylim.f` = extend_ylim_f_orDefault;
    r47 = clos inner1653344540;
    st dropInf = r47;
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L261() else L262();
  L30(r49):
    r51 = `!`(r49);
    c11 = `as.logical`(r51);
    if c11 then L265() else L31();
  L261():
    x3 = ld x;
    check L263() else D0();
  L262():
    r48 = dyn base9(<sym x>, "lm");
    goto L30(r48);
  D0():
    deopt 5 [x3];
  L31():
    goto L32();
  L32():
    sym10 = ldf `is.numeric`;
    base10 = ldf `is.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L269() else L270();
  L263():
    x4 = force? x3;
    checkMissing(x4);
    inherits = ldf inherits in base;
    r50 = dyn inherits(x4, "lm", FALSE);
    check L264() else D1();
  L265():
    stop = ldf stop;
    check L266() else D2();
  D1():
    deopt 10 [r50];
  D2():
    deopt 13 [];
  L33(r55):
    r57 = `!`(r55);
    c12 = `as.logical`(r57);
    if c12 then L34(c12) else L273();
  L264():
    goto L30(r50);
  L266():
    r52 = dyn stop("use only with \"lm\" objects");
    check L267() else D3();
  L269():
    which3 = ld which;
    check L271() else D4();
  L270():
    r54 = dyn base10(<sym which>);
    goto L33(r54);
  D3():
    deopt 15 [r52];
  D4():
    deopt 20 [which3];
  L34(c13):
    c21 = `as.logical`(c13);
    if c21 then L36(c21) else L279();
  L267():
    goto L32();
  L271():
    which4 = force? which3;
    checkMissing(which4);
    is_numeric = ldf `is.numeric` in base;
    r56 = dyn is_numeric(which4);
    check L272() else D5();
  L273():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L274() else L275();
  D5():
    deopt 23 [r56];
  L35(c17, r59):
    c18 = `as.logical`(r59);
    c19 = `||`(c17, c18);
    goto L34(c19);
  L36(c22):
    c30 = `as.logical`(c22);
    if c30 then L285() else L38();
  L272():
    goto L33(r56);
  L274():
    which5 = ld which;
    check L276() else D6();
  L275():
    r58 = dyn base11(<lang `<`(which, 1.0)>);
    goto L35(c12, r58);
  L279():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L280() else L281();
  D6():
    deopt 27 [c12, which5];
  L37(c26, r63):
    c27 = `as.logical`(r63);
    c28 = `||`(c26, c27);
    goto L36(c28);
  L38():
    goto L39();
  L39():
    sym13 = ldf inherits;
    base13 = ldf inherits in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L289() else L290();
  L276():
    which6 = force? which5;
    checkMissing(which6);
    r60 = `<`(which6, 1.0);
    any = ldf any in base;
    r61 = dyn any(r60);
    check L277() else D7();
  L280():
    which7 = ld which;
    check L282() else D8();
  L281():
    r62 = dyn base12(<lang `>`(which, 6.0)>);
    goto L37(c21, r62);
  L285():
    stop1 = ldf stop;
    check L286() else D10();
  D7():
    deopt 32 [c12, r61];
  D8():
    deopt 36 [c21, which7];
  D10():
    deopt 44 [];
  L40(r69):
    st isGlm = r69;
    c31 = `as.logical`(r69);
    if c31 then L293() else L41();
  L277():
    goto L35(c12, r61);
  L282():
    which8 = force? which7;
    checkMissing(which8);
    r64 = `>`(which8, 6.0);
    any1 = ldf any in base;
    r65 = dyn any1(r64);
    check L283() else D9();
  L286():
    r66 = dyn stop1("'which' must be in 1:6");
    check L287() else D11();
  L289():
    x5 = ld x;
    check L291() else D12();
  L290():
    r68 = dyn base13(<sym x>, "glm");
    goto L40(r68);
  D9():
    deopt 41 [c21, r65];
  D11():
    deopt 46 [r66];
  D12():
    deopt 51 [x5];
  L41():
    goto L42();
  L42():
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L301() else L302();
  L283():
    goto L37(c21, r65);
  L287():
    goto L39();
  L291():
    x6 = force? x5;
    checkMissing(x6);
    inherits1 = ldf inherits in base;
    r70 = dyn inherits1(x6, "glm", FALSE);
    check L292() else D13();
  L293():
    family = ldf family;
    check L294() else D14();
  D13():
    deopt 56 [r70];
  D14():
    deopt 59 [];
  L43(r79):
    st show = r79;
    l = ld show;
    c33 = `is.object`(l);
    if c33 then L303() else L304(TRUE, l);
  L292():
    goto L40(r70);
  L294():
    p11 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r72 = dyn family(p11);
    check L295() else D15();
  L301():
    rep = ldf rep in base;
    r80 = dyn rep(FALSE, 6.0);
    goto L43(r80);
  L302():
    r78 = dyn base14(FALSE, 6.0);
    goto L43(r78);
  D15():
    deopt 61 [r72];
  L44(dx3):
    st show = dx3;
    isGlm2 = ld isGlm;
    check L307() else D17();
  L295():
    c32 = `is.object`(r72);
    if c32 then L297() else L298(r72);
  L303():
    dr2 = tryDispatchBuiltin.0("[<-", l, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L305() else L304(TRUE, dr2);
  L304(r82, l2):
    which9 = ld which;
    check L306() else D16();
  D16():
    deopt 75 [r82, l2, TRUE, which9];
  D17():
    deopt 79 [isGlm2];
  L296(dx1):
    r76 = `==`(dx1, "binomial");
    st binomialLike = r76;
    goto L42();
  L297():
    dr = tryDispatchBuiltin.1("$", r72);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L299() else L298(dr);
  L298(r74):
    r75 = `$`(r74, <sym family>);
    goto L296(r75);
  L305():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L44(dx2);
  L306():
    which10 = force? which9;
    ___ = ldf `[<-` in base;
    r85 = dyn ___(l2, TRUE, which10);
    goto L44(r85);
  L307():
    isGlm3 = force? isGlm2;
    checkMissing(isGlm3);
    c34 = `as.logical`(isGlm3);
    if c34 then L308() else L45();
  L45():
    residuals2 = ldf residuals;
    check L312() else D20();
  L46(r88):
    st r = r88;
    predict = ldf predict;
    check L314() else D22();
  L299():
    dx = getTryDispatchBuiltinValue(dr);
    goto L296(dx);
  L308():
    residuals1 = ldf residuals;
    check L309() else D18();
  D18():
    deopt 82 [];
  D20():
    deopt 88 [];
  D22():
    deopt 93 [];
  L309():
    p12 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r87 = dyn residuals1[, type](p12, "pearson");
    check L310() else D19();
  L312():
    p13 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r90 = dyn residuals2(p13);
    check L313() else D21();
  L314():
    p14 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r92 = dyn predict(p14);
    check L315() else D23();
  D19():
    deopt 86 [r87];
  D21():
    deopt 90 [r90];
  D23():
    deopt 95 [r92];
  L310():
    goto L46(r87);
  L313():
    goto L46(r90);
  L315():
    st yh = r92;
    weights = ldf weights;
    check L316() else D24();
  D24():
    deopt 98 [];
  L316():
    p15 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r94 = dyn weights(p15);
    check L317() else D25();
  D25():
    deopt 100 [r94];
  L317():
    st w = r94;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L318() else L319();
  L47(r96):
    r97 = `!`(r96);
    c36 = `as.logical`(r97);
    if c36 then L321() else L48();
  L318():
    w = ld w;
    check L320() else D26();
  L319():
    r95 = dyn base15(<sym w>);
    goto L47(r95);
  D26():
    deopt 103 [w];
  L48():
    goto L53();
  L53():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L344() else L345();
  L320():
    w1 = force? w;
    checkMissing(w1);
    c35 = `==`(w1, NULL);
    goto L47(c35);
  L321():
    w2 = ld w;
    check L322() else D27();
  D27():
    deopt 107 [w2];
  L54(r108):
    st n = r108;
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L348() else L349();
  L322():
    w3 = force? w2;
    checkMissing(w3);
    r98 = `!=`(w3, 0.0);
    st wind = r98;
    r99 = ld r;
    check L323() else D28();
  L344():
    r109 = ld r;
    check L346() else D36();
  L345():
    r107 = dyn base16(<sym r>);
    goto L54(r107);
  D28():
    deopt 112 [r99];
  D36():
    deopt 140 [r109];
  L55(r113):
    c42 = `as.logical`(r113);
    if c42 then L355() else L57();
  L323():
    r100 = force? r99;
    checkMissing(r100);
    c37 = `is.object`(r100);
    if c37 then L324() else L325(r100);
  L346():
    r110 = force? r109;
    checkMissing(r110);
    length1 = ldf length in base;
    r111 = dyn length1(r110);
    check L347() else D37();
  L348():
    show = ld show;
    check L350() else D38();
  L349():
    r112 = dyn base17(<lang `[`(show, `:`(2, 6))>);
    goto L55(r112);
  D37():
    deopt 143 [r111];
  D38():
    deopt 147 [show];
  L49(dx5):
    st r = dx5;
    yh = ld yh;
    check L328() else D30();
  L57():
    goto L67();
  L67():
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L402() else L403();
  L324():
    dr4 = tryDispatchBuiltin.1("[", r100);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L326() else L325(dr4);
  L325(r102):
    wind = ld wind;
    check L327() else D29();
  L347():
    goto L54(r111);
  L350():
    show1 = force? show;
    checkMissing(show1);
    c41 = `is.object`(show1);
    if c41 then L351() else L352(show1);
  L355():
    sym18 = ldf inherits;
    base18 = ldf inherits in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L356() else L357();
  D29():
    deopt 114 [r102, wind];
  D30():
    deopt 118 [yh];
  L56(dx14):
    any2 = ldf any in base;
    r115 = dyn any2(dx14);
    check L354() else D39();
  L58(r117):
    c43 = `as.logical`(r117);
    if c43 then L360() else L59();
  L68(r150):
    c52 = `as.logical`(r150);
    if c52 then L412() else L71();
  L326():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L49(dx4);
  L327():
    wind1 = force? wind;
    __ = ldf `[` in base;
    r103 = dyn __(r102, wind1);
    goto L49(r103);
  L328():
    yh1 = force? yh;
    checkMissing(yh1);
    c38 = `is.object`(yh1);
    if c38 then L329() else L330(yh1);
  L351():
    dr12 = tryDispatchBuiltin.1("[", show1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L353() else L352(dr12);
  L352(show3):
    __4 = ldf `[` in base;
    r114 = dyn __4(show3, <int 2, 3, 4, 5, 6>);
    goto L56(r114);
  L356():
    x17 = ld x;
    check L358() else D40();
  L357():
    r116 = dyn base18(<sym x>, "rlm");
    goto L58(r116);
  L402():
    show8 = ld show;
    check L404() else D56();
  L403():
    r149 = dyn base22(<lang `[`(show, c(2, 3, 5))>);
    goto L68(r149);
  D39():
    deopt 153 [r115];
  D40():
    deopt 156 [x17];
  D56():
    deopt 215 [show8];
  L50(dx7):
    st yh = dx7;
    w4 = ld w;
    check L333() else D32();
  L59():
    isGlm4 = ld isGlm;
    check L367() else D43();
  L60(dx17):
    st s = dx17;
    influence = ldf influence;
    check L384() else D50();
  L71():
    goto L78();
  L78():
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L429() else L430();
  L329():
    dr6 = tryDispatchBuiltin.1("[", yh1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L331() else L330(dr6);
  L330(yh3):
    wind2 = ld wind;
    check L332() else D31();
  L353():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L56(dx13);
  L354():
    goto L55(r115);
  L358():
    x18 = force? x17;
    checkMissing(x18);
    inherits2 = ldf inherits in base;
    r118 = dyn inherits2(x18, "rlm", FALSE);
    check L359() else D41();
  L360():
    x19 = ld x;
    check L361() else D42();
  L404():
    show9 = force? show8;
    checkMissing(show9);
    c50 = `is.object`(show9);
    if c50 then L405() else L406(show9);
  L412():
    isGlm6 = ld isGlm;
    check L413() else D59();
  D31():
    deopt 120 [yh3, wind2];
  D32():
    deopt 124 [w4];
  D41():
    deopt 161 [r118];
  D42():
    deopt 162 [x19];
  D43():
    deopt 165 [isGlm4];
  D50():
    deopt 186 [];
  D59():
    deopt 227 [isGlm6];
  L69(dx25):
    any4 = ldf any in base;
    r155 = dyn any4(dx25);
    check L411() else D58();
  L79(r193):
    c60 = `as.logical`(r193);
    if c60 then L436() else L81();
  L331():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L50(dx6);
  L332():
    wind3 = force? wind2;
    __1 = ldf `[` in base;
    r104 = dyn __1(yh3, wind3);
    goto L50(r104);
  L333():
    w5 = force? w4;
    checkMissing(w5);
    c39 = `is.object`(w5);
    if c39 then L334() else L335(w5);
  L359():
    goto L58(r118);
  L361():
    x20 = force? x19;
    checkMissing(x20);
    c44 = `is.object`(x20);
    if c44 then L363() else L364(x20);
  L367():
    isGlm5 = force? isGlm4;
    checkMissing(isGlm5);
    c45 = `as.logical`(isGlm5);
    if c45 then L368() else L61();
  L384():
    p19 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r136 = dyn influence[, `do.coef`](p19, FALSE);
    check L385() else D51();
  L405():
    dr22 = tryDispatchBuiltin.1("[", show9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L407() else L406(dr22);
  L406(show11):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L408() else L409();
  L413():
    isGlm7 = force? isGlm6;
    checkMissing(isGlm7);
    c53 = `as.logical`(isGlm7);
    if c53 then L414() else L72();
  L429():
    show15 = ld show;
    check L431() else D68();
  L430():
    r192 = dyn base27(<lang `[`(show, `:`(5, 6))>);
    goto L79(r192);
  D51():
    deopt 190 [r136];
  D58():
    deopt 226 [r155];
  D68():
    deopt 261 [show15];
  L51(dx9):
    st w = dx9;
    labels_id1 = ld `labels.id`;
    check L338() else D34();
  L61():
    sym20 = ldf sqrt;
    base20 = ldf sqrt in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L378() else L379();
  L70(show14, r152):
    __6 = ldf `[` in base;
    r154 = dyn __6(show14, r152);
    goto L69(r154);
  L72():
    goto L73("Standardized residuals");
  L73(r156):
    st ylab3 = r156;
    st ylab5 = r156;
    isGlm8 = ld isGlm;
    check L416() else D60();
  L81():
    goto L85();
  L85():
    sym30 = ldf any;
    base30 = ldf any in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L452() else L453();
  L334():
    dr8 = tryDispatchBuiltin.1("[", w5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L336() else L335(dr8);
  L335(w7):
    wind4 = ld wind;
    check L337() else D33();
  L362(dx16):
    goto L60(dx16);
  L363():
    dr14 = tryDispatchBuiltin.1("$", x20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L365() else L364(dr14);
  L364(x22):
    r119 = `$`(x22, <sym s>);
    goto L362(r119);
  L368():
    sym19 = ldf sqrt;
    base19 = ldf sqrt in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L369() else L370();
  L385():
    st infl = r136;
    c47 = `is.object`(r136);
    if c47 then L387() else L388(r136);
  L407():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L69(dx24);
  L408():
    c51 = ldf c in base;
    r153 = dyn c51(2, 3, 5);
    check L410() else D57();
  L409():
    r151 = dyn base23(2, 3, 5);
    goto L70(show11, r151);
  L411():
    goto L68(r155);
  L414():
    goto L73("Std. Pearson resid.");
  L431():
    show16 = force? show15;
    checkMissing(show16);
    c59 = `is.object`(show16);
    if c59 then L432() else L433(show16);
  L436():
    sym28 = ldf range;
    base28 = ldf range in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L437() else L438();
  D33():
    deopt 126 [w7, wind4];
  D34():
    deopt 130 [labels_id1];
  D57():
    deopt 223 [show11, r153];
  D60():
    deopt 235 [isGlm8];
  L62(r121):
    goto L60(r121);
  L80(dx27):
    any5 = ldf any in base;
    r195 = dyn any5(dx27);
    check L435() else D69();
  L82(r197):
    st `r.hat` = r197;
    sym29 = ldf all;
    base29 = ldf all in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L441() else L442();
  L86(r210):
    c70 = `as.logical`(r210);
    if c70 then L462() else L89();
  L336():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L51(dx8);
  L337():
    wind5 = force? wind4;
    __2 = ldf `[` in base;
    r105 = dyn __2(w7, wind5);
    goto L51(r105);
  L338():
    labels_id2 = force? labels_id1;
    checkMissing(labels_id2);
    c40 = `is.object`(labels_id2);
    if c40 then L339() else L340(labels_id2);
  L365():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L362(dx15);
  L369():
    summary = ldf summary;
    check L371() else D44();
  L370():
    r120 = dyn base19(<lang `$`(summary(x), dispersion)>);
    goto L62(r120);
  L378():
    deviance = ldf deviance;
    check L380() else D46();
  L379():
    r128 = dyn base20(<lang `/`(deviance(x), df.residual(x))>);
    goto L60(r128);
  L386(dx21):
    st hii = dx21;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L390() else L391();
  L387():
    dr18 = tryDispatchBuiltin.1("$", r136);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L389() else L388(dr18);
  L388(r138):
    r139 = `$`(r138, <sym hat>);
    goto L386(r139);
  L410():
    goto L70(show11, r153);
  L416():
    isGlm9 = force? isGlm8;
    checkMissing(isGlm9);
    c54 = `as.logical`(isGlm9);
    if c54 then L417() else L74();
  L432():
    dr24 = tryDispatchBuiltin.1("[", show16);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L434() else L433(dr24);
  L433(show18):
    __7 = ldf `[` in base;
    r194 = dyn __7(show18, <int 5, 6>);
    goto L80(r194);
  L437():
    hii6 = ld hii;
    check L439() else D70();
  L438():
    r196 = dyn base28[, `na.rm`](<sym hii>, TRUE);
    goto L82(r196);
  L452():
    show19 = ld show;
    check L454() else D78();
  L453():
    r209 = dyn base30(<lang `[`(show, c(1, 3))>);
    goto L86(r209);
  D44():
    deopt 169 [];
  D46():
    deopt 176 [];
  D69():
    deopt 267 [r195];
  D70():
    deopt 270 [hii6];
  D78():
    deopt 303 [show19];
  L52(dx11):
    st `labels.id` = dx11;
    goto L53();
  L63(r141):
    c49 = `as.logical`(r141);
    if c49 then L397() else L65();
  L74():
    ylab3 = ld ylab3;
    check L419() else D61();
  L75(r157):
    st ylab2 = r157;
    dropInf = ldf dropInf;
    check L420() else D62();
  L83(r200):
    c61 = `as.logical`(r200);
    if c61 then L84(c61) else L445();
  L89():
    goto L92();
  L92():
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L467() else L468();
  L339():
    dr10 = tryDispatchBuiltin.1("[", labels_id2);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L341() else L340(dr10);
  L340(labels_id4):
    wind6 = ld wind;
    check L342() else D35();
  L371():
    p16 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r123 = dyn summary(p16);
    check L372() else D45();
  L380():
    p17 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r130 = dyn deviance(p17);
    check L381() else D47();
  L389():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L386(dx20);
  L390():
    show4 = ld show;
    check L392() else D52();
  L391():
    r140 = dyn base21(<lang `[`(show, `:`(4, 6))>);
    goto L63(r140);
  L417():
    goto L75("Std. Deviance resid.");
  L434():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L80(dx26);
  L435():
    goto L79(r195);
  L439():
    hii7 = force? hii6;
    checkMissing(hii7);
    range = ldf range in base;
    r198 = dyn range(hii7, TRUE);
    check L440() else D71();
  L441():
    r_hat = ld `r.hat`;
    check L443() else D72();
  L442():
    r199 = dyn base29(<lang `==`(r.hat, 0.0)>);
    goto L83(r199);
  L454():
    show20 = force? show19;
    checkMissing(show20);
    c68 = `is.object`(show20);
    if c68 then L455() else L456(show20);
  L462():
    isGlm14 = ld isGlm;
    check L463() else D81();
  D35():
    deopt 132 [labels_id4, wind6];
  D45():
    deopt 171 [r123];
  D47():
    deopt 178 [r130];
  D52():
    deopt 196 [show4];
  D61():
    deopt 239 [ylab3];
  D62():
    deopt 243 [];
  D71():
    deopt 275 [r198];
  D72():
    deopt 279 [r_hat];
  D81():
    deopt 314 [isGlm14];
  L65():
    goto L66(NULL);
  L66(r147):
    goto L67();
  L84(c62):
    st `isConst.hat` = c62;
    goto L85();
  L87(dx29):
    any6 = ldf any in base;
    r215 = dyn any6(dx29);
    check L461() else D80();
  L93(r219):
    c73 = `as.logical`(r219);
    if c73 then L470() else L94();
  L341():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L52(dx10);
  L342():
    wind7 = force? wind6;
    __3 = ldf `[` in base;
    r106 = dyn __3(labels_id4, wind7);
    goto L52(r106);
  L372():
    c46 = `is.object`(r123);
    if c46 then L374() else L375(r123);
  L381():
    df_residual = ldf `df.residual`;
    check L382() else D48();
  L392():
    show5 = force? show4;
    checkMissing(show5);
    c48 = `is.object`(show5);
    if c48 then L393() else L394(show5);
  L397():
    cooks_distance = ldf `cooks.distance`;
    check L398() else D54();
  L419():
    ylab4 = force? ylab3;
    checkMissing(ylab4);
    goto L75(ylab4);
  L420():
    p23 = prom<V +>{
      isGlm10 = ld isGlm;
      isGlm11 = force? isGlm10;
      checkMissing(isGlm11);
      c55 = `as.logical`(isGlm11);
      if c55 then L6() else L0();
    L0():
      sym24 = ldf `is.null`;
      base24 = ldf `is.null` in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L8() else L9();
    L6():
      rstandard = ldf rstandard;
      p22 = prom<V +>{
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        return x34;
      };
      r159 = dyn rstandard[, type](p22, "pearson");
      return r159;
    L1(r161):
      c57 = `as.logical`(r161);
      if c57 then L10() else L2();
    L8():
      w8 = ld w;
      w9 = force? w8;
      checkMissing(w9);
      c56 = `==`(w9, NULL);
      goto L1(c56);
    L9():
      r160 = dyn base24(<sym w>);
      goto L1(r160);
    L2():
      sym25 = ldf sqrt;
      base25 = ldf sqrt in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L12() else L13();
    L3(r164):
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      sym26 = ldf sqrt;
      base26 = ldf sqrt in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L14() else L15();
    L10():
      r162 = ld r;
      r163 = force? r162;
      checkMissing(r163);
      goto L3(r163);
    L4(r166):
      r168 = ld r;
      r169 = force? r168;
      checkMissing(r169);
      r170 = `*`(r166, r169);
      goto L3(r170);
    L5(r174, s4, r175):
      r178 = `*`(s4, r175);
      r179 = `/`(r174, r178);
      return r179;
    L12():
      w10 = ld w;
      w11 = force? w10;
      checkMissing(w11);
      r167 = sqrt(w11);
      goto L4(r167);
    L13():
      r165 = dyn base25(<sym w>);
      goto L4(r165);
    L14():
      hii = ld hii;
      hii1 = force? hii;
      checkMissing(hii1);
      r176 = `-`(1.0, hii1);
      r177 = sqrt(r176);
      goto L5(r164, s1, r177);
    L15():
      r173 = dyn base26(<lang `-`(1.0, hii)>);
      goto L5(r164, s1, r173);
    };
    p24 = prom<V +>{
      hii2 = ld hii;
      hii3 = force? hii2;
      checkMissing(hii3);
      return hii3;
    };
    r182 = dyn dropInf(p23, p24);
    check L421() else D63();
  L440():
    goto L82(r198);
  L443():
    r_hat1 = force? r_hat;
    checkMissing(r_hat1);
    r201 = `==`(r_hat1, 0.0);
    all = ldf all in base;
    r202 = dyn all(r201);
    check L444() else D73();
  L445():
    diff = ldf diff;
    check L446() else D74();
  L455():
    dr26 = tryDispatchBuiltin.1("[", show20);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L457() else L456(dr26);
  L456(show22):
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L458() else L459();
  L463():
    isGlm15 = force? isGlm14;
    checkMissing(isGlm15);
    c71 = `as.logical`(isGlm15);
    if c71 then L464() else L90();
  L467():
    id_n1 = ld `id.n`;
    check L469() else D82();
  L468():
    r218 = dyn base32(<sym id.n>);
    goto L93(r218);
  D48():
    deopt 179 [r130];
  D54():
    deopt 204 [];
  D63():
    deopt 246 [r182];
  D73():
    deopt 284 [r202];
  D74():
    deopt 286 [c61];
  D80():
    deopt 313 [r215];
  D82():
    deopt 324 [id_n1];
  L64(dx23):
    any3 = ldf any in base;
    r143 = dyn any3(dx23);
    check L396() else D53();
  L88(show25, r212):
    __8 = ldf `[` in base;
    r214 = dyn __8(show25, r212);
    goto L87(r214);
  L90():
    goto L91("Fitted values");
  L91(r216):
    st `l.fit` = r216;
    goto L92();
  L94():
    sym33 = ldf `as.integer`;
    base33 = ldf `as.integer` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L472() else L473();
  L95():
    id_n9 = ld `id.n`;
    check L485() else D90();
  L373(dx19):
    r127 = sqrt(dx19);
    goto L62(r127);
  L374():
    dr16 = tryDispatchBuiltin.1("$", r123);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L376() else L375(dr16);
  L375(r125):
    r126 = `$`(r125, <sym dispersion>);
    goto L373(r126);
  L382():
    p18 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    r132 = dyn df_residual(p18);
    check L383() else D49();
  L393():
    dr20 = tryDispatchBuiltin.1("[", show5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L395() else L394(dr20);
  L394(show7):
    __5 = ldf `[` in base;
    r142 = dyn __5(show7, <int 4, 5, 6>);
    goto L64(r142);
  L398():
    p20 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p21 = prom<V +>{
      infl = ld infl;
      infl1 = force? infl;
      checkMissing(infl1);
      return infl1;
    };
    r146 = dyn cooks_distance(p20, p21);
    check L399() else D55();
  L421():
    st rs = r182;
    isGlm12 = ld isGlm;
    check L422() else D64();
  L444():
    goto L83(r202);
  L446():
    p29 = prom<V +>{
      r_hat2 = ld `r.hat`;
      r_hat3 = force? r_hat2;
      checkMissing(r_hat3);
      return r_hat3;
    };
    r204 = dyn diff(p29);
    check L447() else D75();
  L457():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L87(dx28);
  L458():
    c69 = ldf c in base;
    r213 = dyn c69(1, 3);
    check L460() else D79();
  L459():
    r211 = dyn base31(1, 3);
    goto L88(show22, r211);
  L461():
    goto L86(r215);
  L464():
    goto L91("Predicted values");
  L469():
    id_n2 = force? id_n1;
    checkMissing(id_n2);
    c72 = `==`(id_n2, NULL);
    goto L93(c72);
  L470():
    st `id.n` = 0;
    goto L95();
  D49():
    deopt 181 [r130, r132];
  D53():
    deopt 202 [r143];
  D55():
    deopt 207 [r146];
  D64():
    deopt 248 [isGlm12];
  D75():
    deopt 288 [c61, r204];
  D79():
    deopt 310 [show22, r213];
  D90():
    deopt 354 [id_n9];
  L96(r222):
    st `id.n` = r222;
    id_n5 = ld `id.n`;
    check L476() else D85();
  L376():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L373(dx18);
  L383():
    r133 = `/`(r130, r132);
    r134 = sqrt(r133);
    goto L60(r134);
  L395():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L64(dx22);
  L396():
    goto L63(r143);
  L399():
    st cook = r146;
    goto L66(r146);
  L422():
    isGlm13 = force? isGlm12;
    checkMissing(isGlm13);
    c58 = `as.logical`(isGlm13);
    if c58 then L423() else L76();
  L447():
    mean = ldf mean;
    check L448() else D76();
  L460():
    goto L88(show22, r213);
  L472():
    id_n3 = ld `id.n`;
    check L474() else D83();
  L473():
    r221 = dyn base33(<sym id.n>);
    goto L96(r221);
  L485():
    id_n10 = force? id_n9;
    checkMissing(id_n10);
    r230 = `>`(id_n10, 0);
    c81 = `as.logical`(r230);
    if c81 then L486() else L99();
  D76():
    deopt 290 [c61, r204, 1.0E-10];
  D83():
    deopt 332 [id_n3];
  D85():
    deopt 337 [id_n5];
  L76():
    rs = ld rs;
    check L427() else D67();
  L77(r190):
    st rds = r190;
    goto L78();
  L99():
    goto L110();
  L110():
    r270 = clos inner2649136551;
    st getCaption = r270;
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L523() else L524();
  L423():
    suppressWarnings = ldf suppressWarnings;
    check L424() else D65();
  L448():
    p30 = prom<V +>{
      hii8 = ld hii;
      hii9 = force? hii8;
      checkMissing(hii9);
      return hii9;
    };
    r206 = dyn mean[, `na.rm`](p30, TRUE);
    check L449() else D77();
  L474():
    id_n4 = force? id_n3;
    checkMissing(id_n4);
    as_integer = ldf `as.integer` in base;
    r223 = dyn as_integer(id_n4);
    check L475() else D84();
  L476():
    id_n6 = force? id_n5;
    checkMissing(id_n6);
    r224 = `<`(id_n6, 0);
    c74 = `as.logical`(r224);
    if c74 then L97(c74) else L477();
  L486():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L487() else L488();
  D65():
    deopt 251 [];
  D67():
    deopt 254 [rs];
  D77():
    deopt 294 [c61, r204, 1.0E-10, r206];
  D84():
    deopt 335 [r223];
  L97(c75):
    c80 = `as.logical`(c75);
    if c80 then L481() else L98();
  L100(r232):
    c83 = `as.logical`(r232);
    if c83 then L490() else L101();
  L111(r272):
    c90 = `as.logical`(r272);
    if c90 then L526() else L112();
  L424():
    p28 = prom<V +>{
      dropInf1 = ldf dropInf;
      p26 = prom<V +>{
        rstandard1 = ldf rstandard;
        p25 = prom<V +>{
          x35 = ld x;
          x36 = force? x35;
          checkMissing(x36);
          return x36;
        };
        r184 = dyn rstandard1[, type](p25, "deviance");
        return r184;
      };
      p27 = prom<V +>{
        hii4 = ld hii;
        hii5 = force? hii4;
        checkMissing(hii5);
        return hii5;
      };
      r187 = dyn dropInf1(p26, p27);
      return r187;
    };
    r189 = dyn suppressWarnings(p28);
    check L425() else D66();
  L427():
    rs1 = force? rs;
    checkMissing(rs1);
    goto L77(rs1);
  L449():
    r207 = `*`(1.0E-10, r206);
    r208 = `<`(r204, r207);
    c64 = `as.logical`(r208);
    c65 = `||`(c61, c64);
    goto L84(c65);
  L475():
    goto L96(r223);
  L477():
    id_n7 = ld `id.n`;
    check L478() else D86();
  L487():
    labels_id5 = ld `labels.id`;
    check L489() else D91();
  L488():
    r231 = dyn base34(<sym labels.id>);
    goto L100(r231);
  L523():
    sub_caption1 = ld `sub.caption`;
    check L525() else D106();
  L524():
    r271 = dyn base39(<sym sub.caption>);
    goto L111(r271);
  D66():
    deopt 253 [r189];
  D86():
    deopt 341 [c74, id_n7];
  D91():
    deopt 359 [labels_id5];
  D106():
    deopt 424 [sub_caption1];
  L98():
    goto L95();
  L101():
    goto L102();
  L102():
    id_n11 = ld `id.n`;
    check L494() else D94();
  L112():
    goto L127();
  L127():
    sym47 = ldf prod;
    base47 = ldf prod in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L585() else L586();
  L425():
    goto L77(r189);
  L478():
    id_n8 = force? id_n7;
    checkMissing(id_n8);
    n = ld n;
    check L479() else D87();
  L481():
    stop2 = ldf stop;
    check L482() else D88();
  L489():
    labels_id6 = force? labels_id5;
    checkMissing(labels_id6);
    c82 = `==`(labels_id6, NULL);
    goto L100(c82);
  L490():
    paste = ldf paste;
    check L491() else D92();
  L525():
    sub_caption2 = force? sub_caption1;
    checkMissing(sub_caption2);
    c89 = `==`(sub_caption2, NULL);
    goto L111(c89);
  L526():
    x37 = ld x;
    check L527() else D107();
  D87():
    deopt 342 [c74, id_n8, n];
  D88():
    deopt 347 [];
  D92():
    deopt 363 [];
  D94():
    deopt 370 [1, id_n11];
  D107():
    deopt 427 [x37];
  L128(r322):
    r325 = `==`(r322, 1.0);
    st `one.fig` = r325;
    ask1 = ld ask;
    check L590() else D133();
  L479():
    n1 = force? n;
    checkMissing(n1);
    r225 = `>`(id_n8, n1);
    c77 = `as.logical`(r225);
    c78 = `||`(c74, c77);
    goto L97(c78);
  L482():
    p32 = prom<V +>{
      gettextf = ldf gettextf;
      p31 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        return n3;
      };
      r227 = dyn gettextf("'id.n' must be in {1,..,%d}", p31);
      return r227;
    };
    r229 = dyn stop2[, domain](p32, NA_LGL);
    check L483() else D89();
  L491():
    p33 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r233 = `:`(1, n5);
      return r233;
    };
    r235 = dyn paste(p33);
    check L492() else D93();
  L494():
    id_n12 = force? id_n11;
    checkMissing(id_n12);
    r237 = `:`(1, id_n12);
    st iid = r237;
    sort_list = ldf `sort.list`;
    check L495() else D95();
  L527():
    x38 = force? x37;
    checkMissing(x38);
    c91 = `is.object`(x38);
    if c91 then L529() else L530(x38);
  L585():
    par1 = ldf par;
    check L587() else D130();
  L586():
    r321 = dyn base47(<lang par("mfcol")>);
    goto L128(r321);
  D89():
    deopt 351 [r229];
  D93():
    deopt 365 [r235];
  D95():
    deopt 375 [];
  D130():
    deopt 528 [];
  D133():
    deopt 536 [ask1];
  L483():
    goto L95();
  L492():
    st `labels.id` = r235;
    goto L102();
  L495():
    p34 = prom<V +>{
      sym35 = ldf abs;
      base35 = ldf abs in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      r240 = ld r;
      r241 = force? r240;
      checkMissing(r241);
      abs = ldf abs in base;
      r242 = dyn abs(r241);
      goto L0(r242);
    L2():
      r238 = dyn base35(<sym r>);
      goto L0(r238);
    };
    r244 = dyn sort_list[, decreasing](p34, TRUE);
    check L496() else D96();
  L528(dx40):
    st cal = dx40;
    sym40 = ldf `is.na`;
    base40 = ldf `is.na` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L532() else L533();
  L529():
    dr36 = tryDispatchBuiltin.1("$", x38);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L531() else L530(dr36);
  L530(x40):
    r273 = `$`(x40, <sym call>);
    goto L528(r273);
  L587():
    r323 = dyn par1("mfcol");
    check L588() else D131();
  L590():
    ask2 = force? ask1;
    checkMissing(ask2);
    c106 = `as.logical`(ask2);
    if c106 then L591() else L129();
  D96():
    deopt 379 [r244];
  D131():
    deopt 530 [r323];
  L113(r275):
    r283 = `!`(r275);
    c92 = `as.logical`(r283);
    if c92 then L542() else L116();
  L129():
    goto L131();
  L131():
    show30 = ld show;
    check L597() else D136();
  L496():
    c84 = `is.object`(r244);
    if c84 then L497() else L498(r244);
  L531():
    dx39 = getTryDispatchBuiltinValue(dr36);
    goto L528(dx39);
  L532():
    sym41 = ldf match;
    base41 = ldf match in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L534() else L535();
  L533():
    r274 = dyn base40(<lang `<-`(m.f, match("formula", names(cal)))>);
    goto L113(r274);
  L588():
    prod1 = ldf prod in base;
    r324 = dyn prod1(r323);
    check L589() else D132();
  L591():
    devAskNewPage = ldf devAskNewPage;
    check L592() else D134();
  D132():
    deopt 532 [r324];
  D134():
    deopt 539 [];
  D136():
    deopt 548 [show30];
  L103(dx31):
    st `show.r` = dx31;
    sym36 = ldf any;
    base36 = ldf any in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L501() else L502();
  L114(r277):
    st `m.f` = r277;
    is_na = ldf `is.na` in base;
    r282 = dyn is_na(r277);
    check L541() else D111();
  L116():
    goto L120();
  L120():
    deparse = ldf deparse;
    check L559() else D119();
  L497():
    dr28 = tryDispatchBuiltin.1("[", r244);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L499() else L498(dr28);
  L498(r246):
    iid = ld iid;
    check L500() else D97();
  L534():
    sym42 = ldf names;
    base42 = ldf names in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L536() else L537();
  L535():
    r276 = dyn base41("formula", <lang names(cal)>);
    goto L114(r276);
  L542():
    cal2 = ld cal;
    check L543() else D112();
  L589():
    goto L128(r324);
  L592():
    r326 = dyn devAskNewPage(TRUE);
    check L593() else D135();
  L597():
    show31 = force? show30;
    checkMissing(show31);
    c107 = `is.object`(show31);
    if c107 then L598() else L599(show31);
  D97():
    deopt 380 [r246, iid];
  D111():
    deopt 448 [r282];
  D112():
    deopt 450 [cal2];
  D119():
    deopt 478 [];
  D135():
    deopt 541 [r326];
  L104(r249):
    c86 = `as.logical`(r249);
    if c86 then L508() else L106();
  L115(r279):
    match = ldf match in base;
    r281 = dyn match("formula", r279, NA_INT, NULL);
    check L540() else D110();
  L132(dx51):
    c108 = `as.logical`(dx51);
    if c108 then L601() else L133();
  L499():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L103(dx30);
  L500():
    iid1 = force? iid;
    __9 = ldf `[` in base;
    r247 = dyn __9(r246, iid1);
    goto L103(r247);
  L501():
    show26 = ld show;
    check L503() else D98();
  L502():
    r248 = dyn base36(<lang `[`(show, `:`(2, 3))>);
    goto L104(r248);
  L536():
    cal = ld cal;
    check L538() else D108();
  L537():
    r278 = dyn base42(<sym cal>);
    goto L115(r278);
  L541():
    goto L113(r282);
  L543():
    cal3 = force? cal2;
    checkMissing(cal3);
    c93 = `is.object`(cal3);
    if c93 then L544() else L545(cal3);
  L559():
    p37 = prom<V +>{
      cal9 = ld cal;
      cal10 = force? cal9;
      checkMissing(cal10);
      return cal10;
    };
    r299 = dyn deparse(p37, 80.0);
    check L560() else D120();
  L593():
    st oask = r326;
    sym48 = ldf `on.exit`;
    base48 = ldf `on.exit` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L594() else L595();
  L598():
    dr48 = tryDispatchBuiltin.1("[", show31);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L600() else L599(dr48);
  L599(show33):
    __17 = ldf `[` in base;
    r331 = dyn __17(show33, 1);
    goto L132(r331);
  D98():
    deopt 386 [show26];
  D108():
    deopt 438 [cal];
  D110():
    deopt 445 [r281];
  D120():
    deopt 481 [r299];
  L106():
    goto L109();
  L109():
    r268 = clos inner3635890917;
    st `text.id` = r268;
    goto L110();
  L117(dx42):
    st cal = dx42;
    l3 = ld cal;
    names2 = ldf names;
    check L551() else D115();
  L130(r328):
    goto L131();
  L133():
    goto L146();
  L146():
    show34 = ld show;
    check L653() else D168();
  L503():
    show27 = force? show26;
    checkMissing(show27);
    c85 = `is.object`(show27);
    if c85 then L504() else L505(show27);
  L508():
    sort_list1 = ldf `sort.list`;
    check L509() else D100();
  L538():
    cal1 = force? cal;
    checkMissing(cal1);
    names1 = ldf names in base;
    r280 = dyn names1(cal1);
    check L539() else D109();
  L540():
    goto L114(r281);
  L544():
    dr38 = tryDispatchBuiltin.1("[", cal3);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L546() else L545(dr38);
  L545(cal5):
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L547() else L548();
  L560():
    st cc = r299;
    sym44 = ldf nchar;
    base44 = ldf nchar in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L561() else L562();
  L594():
    on_exit = ldf `on.exit` in base;
    r329 = dyn on_exit(<lang devAskNewPage(oask)>);
    goto L130(r329);
  L595():
    r327 = dyn base48(<lang devAskNewPage(oask)>);
    goto L130(r327);
  L600():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L132(dx50);
  L601():
    sym49 = ldf range;
    base49 = ldf range in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L602() else L603();
  D100():
    deopt 394 [];
  D109():
    deopt 441 [r280];
  D115():
    deopt 464 ["", l3, ""];
  D168():
    deopt 678 [show34];
  L105(dx33):
    any7 = ldf any in base;
    r251 = dyn any7(dx33);
    check L507() else D99();
  L118(cal8, r285):
    __13 = ldf `[` in base;
    r287 = dyn __13(cal8, r285);
    goto L117(r287);
  L121(r301):
    st nc = r301;
    sym45 = ldf length;
    base45 = ldf length in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L568() else L569();
  L134(r333):
    st ylim = r333;
    id_n13 = ld `id.n`;
    check L606() else D139();
  L504():
    dr30 = tryDispatchBuiltin.1("[", show27);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L506() else L505(dr30);
  L505(show29):
    __10 = ldf `[` in base;
    r250 = dyn __10(show29, <int 2, 3>);
    goto L105(r250);
  L509():
    p35 = prom<V +>{
      sym37 = ldf abs;
      base37 = ldf abs in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L1() else L2();
    L0(r253):
      return r253;
    L1():
      rs2 = ld rs;
      rs3 = force? rs2;
      checkMissing(rs3);
      abs1 = ldf abs in base;
      r254 = dyn abs1(rs3);
      goto L0(r254);
    L2():
      r252 = dyn base37(<sym rs>);
      goto L0(r252);
    };
    r256 = dyn sort_list1[, decreasing](p35, TRUE);
    check L510() else D101();
  L539():
    goto L115(r280);
  L546():
    dx41 = getTryDispatchBuiltinValue(dr38);
    goto L117(dx41);
  L547():
    m_f = ld `m.f`;
    check L549() else D113();
  L548():
    r284 = dyn base43(1.0, <sym m.f>);
    goto L118(cal5, r284);
  L551():
    r288 = dyn names2("", NULL);
    check L552() else D116();
  L561():
    cc = ld cc;
    check L563() else D121();
  L562():
    r300 = dyn base44(<lang `[`(cc, 1)>, "c");
    goto L121(r300);
  L602():
    r334 = ld r;
    check L604() else D137();
  L603():
    r332 = dyn base49[, `na.rm`](<sym r>, TRUE);
    goto L134(r332);
  L653():
    show35 = force? show34;
    checkMissing(show35);
    c117 = `is.object`(show35);
    if c117 then L654() else L655(show35);
  D99():
    deopt 392 [r251];
  D101():
    deopt 398 [r256];
  D113():
    deopt 455 [cal5, m_f];
  D116():
    deopt 466 ["", l3, "", r288];
  D121():
    deopt 485 [cc];
  D137():
    deopt 555 [r334];
  D139():
    deopt 562 [id_n13];
  L123(r305):
    r307 = `>`(r305, 1.0);
    c97 = `as.logical`(r307);
    if c97 then L124(c97) else L572();
  L147(dx61):
    c118 = `as.logical`(dx61);
    if c118 then L657() else L148();
  L506():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L105(dx32);
  L507():
    goto L104(r251);
  L510():
    c87 = `is.object`(r256);
    if c87 then L511() else L512(r256);
  L549():
    m_f1 = force? m_f;
    checkMissing(m_f1);
    c94 = ldf c in base;
    r286 = dyn c94(1.0, m_f1);
    check L550() else D114();
  L552():
    c95 = `is.object`(r288);
    if c95 then L553() else L554("", l3, r288);
  L563():
    cc1 = force? cc;
    checkMissing(cc1);
    c96 = `is.object`(cc1);
    if c96 then L564() else L565(cc1);
  L568():
    cc4 = ld cc;
    check L570() else D123();
  L569():
    r304 = dyn base45(<sym cc>);
    goto L123(r304);
  L604():
    r335 = force? r334;
    checkMissing(r335);
    range1 = ldf range in base;
    r336 = dyn range1(r335, TRUE);
    check L605() else D138();
  L606():
    id_n14 = force? id_n13;
    checkMissing(id_n14);
    r337 = `>`(id_n14, 0.0);
    c109 = `as.logical`(r337);
    if c109 then L607() else L135();
  L654():
    dr58 = tryDispatchBuiltin.1("[", show35);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L656() else L655(dr58);
  L655(show37):
    __21 = ldf `[` in base;
    r391 = dyn __21(show37, 2);
    goto L147(r391);
  D114():
    deopt 458 [cal5, r286];
  D123():
    deopt 498 [cc4];
  D138():
    deopt 560 [r336];
  L107(dx35):
    st `show.rs` = dx35;
    sort_list2 = ldf `sort.list`;
    check L515() else D103();
  L119(r294, l7, dx44):
    names__ = ldf `names<-`;
    check L556() else D117();
  L122(dx46):
    nchar = ldf nchar in base;
    r303 = dyn nchar(dx46, "c", FALSE, NA_LGL);
    check L567() else D122();
  L124(c98):
    st abbr = c98;
    abbr = ld abbr;
    check L575() else D126();
  L135():
    goto L136();
  L136():
    dev_hold = ldf `dev.hold`;
    check L611() else D142();
  L148():
    goto L164();
  L164():
    show38 = ld show;
    check L720() else D206();
  L511():
    dr32 = tryDispatchBuiltin.1("[", r256);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L513() else L512(dr32);
  L512(r258):
    iid2 = ld iid;
    check L514() else D102();
  L550():
    goto L118(cal5, r286);
  L553():
    dr40 = tryDispatchBuiltin.0("[<-", r288, "");
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L555() else L554("", l3, dr40);
  L554(r291, l5, r292):
    ___1 = ldf `[<-` in base;
    r295 = dyn ___1(r292, "", 2);
    goto L119(r291, l5, r295);
  L564():
    dr42 = tryDispatchBuiltin.1("[", cc1);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L566() else L565(dr42);
  L565(cc3):
    __14 = ldf `[` in base;
    r302 = dyn __14(cc3, 1);
    goto L122(r302);
  L570():
    cc5 = force? cc4;
    checkMissing(cc5);
    length2 = ldf length in base;
    r306 = dyn length2(cc5);
    check L571() else D124();
  L572():
    nc = ld nc;
    check L573() else D125();
  L605():
    goto L134(r336);
  L607():
    extendrange = ldf extendrange;
    check L608() else D140();
  L656():
    dx60 = getTryDispatchBuiltinValue(dr58);
    goto L147(dx60);
  L657():
    isGlm18 = ld isGlm;
    check L658() else D169();
  D102():
    deopt 399 [r258, iid2];
  D103():
    deopt 404 [];
  D117():
    deopt 471 [r294, l7, dx44];
  D122():
    deopt 494 [r303];
  D124():
    deopt 501 [r306];
  D125():
    deopt 504 [c97, nc];
  D126():
    deopt 510 [abbr];
  D140():
    deopt 567 [];
  D142():
    deopt 577 [];
  D169():
    deopt 683 [isGlm18];
  D206():
    deopt 835 [show38];
  L513():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L107(dx34);
  L514():
    iid3 = force? iid2;
    __11 = ldf `[` in base;
    r259 = dyn __11(r258, iid3);
    goto L107(r259);
  L515():
    p36 = prom<V +>{
      sym38 = ldf abs;
      base38 = ldf abs in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r261):
      return r261;
    L1():
      rds = ld rds;
      rds1 = force? rds;
      checkMissing(rds1);
      abs2 = ldf abs in base;
      r262 = dyn abs2(rds1);
      goto L0(r262);
    L2():
      r260 = dyn base38(<sym rds>);
      goto L0(r260);
    };
    r264 = dyn sort_list2[, decreasing](p36, TRUE);
    check L516() else D104();
  L555():
    dx43 = getTryDispatchBuiltinValue(dr40);
    goto L119("", l3, dx43);
  L556():
    r296 = dyn names__(l7, NULL, dx44);
    check L557() else D118();
  L566():
    dx45 = getTryDispatchBuiltinValue(dr42);
    goto L122(dx45);
  L567():
    goto L121(r303);
  L571():
    goto L123(r306);
  L573():
    nc1 = force? nc;
    checkMissing(nc1);
    r308 = `>`(nc1, 75.0);
    c100 = `as.logical`(r308);
    c101 = `||`(c97, c100);
    goto L124(c101);
  L575():
    abbr1 = force? abbr;
    checkMissing(abbr1);
    c103 = `as.logical`(abbr1);
    if c103 then L576() else L125();
  L608():
    p41 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    p42 = prom<V +>{
      extend_ylim_f1 = ld `extend.ylim.f`;
      extend_ylim_f2 = force? extend_ylim_f1;
      checkMissing(extend_ylim_f2);
      return extend_ylim_f2;
    };
    r340 = dyn extendrange[r, f](p41, p42);
    check L609() else D141();
  L611():
    r342 = dyn dev_hold();
    check L612() else D143();
  L658():
    isGlm19 = force? isGlm18;
    checkMissing(isGlm19);
    c119 = `as.logical`(isGlm19);
    if c119 then L659() else L149();
  L720():
    show39 = force? show38;
    checkMissing(show39);
    c131 = `is.object`(show39);
    if c131 then L721() else L722(show39);
  D104():
    deopt 408 [r264];
  D118():
    deopt 473 [r294, r296];
  D141():
    deopt 572 [r340];
  D143():
    deopt 578 [r342];
  L125():
    cc10 = ld cc;
    check L580() else D129();
  L126(r318):
    st `sub.caption` = r318;
    goto L127();
  L149():
    sym54 = ldf range;
    base54 = ldf range in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L683() else L684();
  L155():
    one_fig2 = ld `one.fig`;
    check L705() else D196();
  L165(dx79):
    c132 = `as.logical`(dx79);
    if c132 then L724() else L166();
  L516():
    c88 = `is.object`(r264);
    if c88 then L517() else L518(r264);
  L557():
    st cal = r296;
    goto L120();
  L576():
    paste1 = ldf paste;
    check L577() else D127();
  L609():
    st ylim = r340;
    goto L136();
  L612():
    isGlm16 = ld isGlm;
    check L613() else D144();
  L659():
    r392 = clos inner3913899244;
    st qhalfnorm = r392;
    r393 = clos inner4206773453;
    st qqhalfnorm = r393;
    sym50 = ldf abs;
    base50 = ldf abs in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L660() else L661();
  L721():
    dr72 = tryDispatchBuiltin.1("[", show39);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L723() else L722(dr72);
  L722(show41):
    __25 = ldf `[` in base;
    r460 = dyn __25(show41, 3);
    goto L165(r460);
  D127():
    deopt 513 [];
  D129():
    deopt 517 [cc10];
  D144():
    deopt 579 [isGlm16];
  D196():
    deopt 800 [one_fig2];
  L108(dx37):
    st `show.rds` = dx37;
    goto L109();
  L150(r395):
    st absr = r395;
    sym51 = ldf c;
    base51 = ldf c in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L664() else L665();
  L156(r421):
    st ylim = r421;
    ylim6 = ld ylim;
    check L687() else D186();
  L166():
    goto L178();
  L178():
    show42 = ld show;
    check L772() else D234();
  L517():
    dr34 = tryDispatchBuiltin.1("[", r264);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L519() else L518(dr34);
  L518(r266):
    iid4 = ld iid;
    check L520() else D105();
  L577():
    p40 = prom<V +>{
      substr = ldf substr;
      p38 = prom<V +>{
        cc6 = ld cc;
        cc7 = force? cc6;
        checkMissing(cc7);
        c104 = `is.object`(cc7);
        if c104 then L1() else L2(cc7);
      L0(dx48):
        return dx48;
      L1():
        dr44 = tryDispatchBuiltin.1("[", cc7);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L3() else L2(dr44);
      L2(cc9):
        __15 = ldf `[` in base;
        r309 = dyn __15(cc9, 1);
        goto L0(r309);
      L3():
        dx47 = getTryDispatchBuiltinValue(dr44);
        goto L0(dx47);
      };
      p39 = prom<V +>{
        sym46 = ldf min;
        base46 = ldf min in base;
        guard46 = `==`.4(sym46, base46);
        if guard46 then L1() else L2();
      L0(r312):
        return r312;
      L1():
        nc2 = ld nc;
        nc3 = force? nc2;
        checkMissing(nc3);
        min = ldf min in base;
        r313 = dyn min(75, nc3);
        goto L0(r313);
      L2():
        r311 = dyn base46(75, <sym nc>);
        goto L0(r311);
      };
      r315 = dyn substr(p38, 1, p39);
      return r315;
    };
    r317 = dyn paste1(p40, "...");
    check L578() else D128();
  L580():
    cc11 = force? cc10;
    checkMissing(cc11);
    c105 = `is.object`(cc11);
    if c105 then L581() else L582(cc11);
  L613():
    isGlm17 = force? isGlm16;
    checkMissing(isGlm17);
    c110 = `as.logical`(isGlm17);
    if c110 then L614() else L137();
  L660():
    rds2 = ld rds;
    check L662() else D170();
  L661():
    r394 = dyn base50(<sym rds>);
    goto L150(r394);
  L683():
    rds4 = ld rds;
    check L685() else D184();
  L684():
    r420 = dyn base54[, `na.rm`](<sym rds>, TRUE);
    goto L156(r420);
  L705():
    one_fig3 = force? one_fig2;
    checkMissing(one_fig3);
    c125 = `as.logical`(one_fig3);
    if c125 then L706() else L160();
  L723():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L165(dx78);
  L724():
    sym55 = ldf sqrt;
    base55 = ldf sqrt in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L725() else L726();
  D105():
    deopt 409 [r266, iid4];
  D128():
    deopt 516 [r317];
  D170():
    deopt 693 [rds2];
  D184():
    deopt 750 [rds4];
  D186():
    deopt 757 [ylim6];
  D234():
    deopt 942 [show42];
  L137():
    goto L138("Residuals");
  L138(r343):
    st ylab1 = r343;
    plot = ldf plot;
    check L616() else D145();
  L151(r398):
    st ylim = r398;
    as_expression = ldf `as.expression`;
    check L671() else D175();
  L160():
    goto L161();
  L161():
    mtext1 = ldf mtext;
    check L710() else D199();
  L167(r462):
    st sqrtabsr = r462;
    sym57 = ldf c;
    base57 = ldf c in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L731() else L732();
  L519():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L108(dx36);
  L520():
    iid5 = force? iid4;
    __12 = ldf `[` in base;
    r267 = dyn __12(r266, iid5);
    goto L108(r267);
  L578():
    goto L126(r317);
  L581():
    dr46 = tryDispatchBuiltin.1("[", cc11);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L583() else L582(dr46);
  L582(cc13):
    __16 = ldf `[` in base;
    r319 = dyn __16(cc13, 1);
    goto L126(r319);
  L614():
    goto L138("Pearson Residuals");
  L662():
    rds3 = force? rds2;
    checkMissing(rds3);
    abs3 = ldf abs in base;
    r396 = dyn abs3(rds3);
    check L663() else D171();
  L664():
    sym52 = ldf max;
    base52 = ldf max in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L666() else L667();
  L665():
    r397 = dyn base51(0.0, <lang `*`(max(absr, na.rm=TRUE), 1.075)>);
    goto L151(r397);
  L685():
    rds5 = force? rds4;
    checkMissing(rds5);
    range2 = ldf range in base;
    r422 = dyn range2(rds5, TRUE);
    check L686() else D185();
  L687():
    ylim7 = force? ylim6;
    checkMissing(ylim7);
    c122 = `is.object`(ylim7);
    if c122 then L688() else L689(ylim7);
  L706():
    title1 = ldf title;
    check L707() else D197();
  L725():
    sym56 = ldf abs;
    base56 = ldf abs in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L727() else L728();
  L726():
    r461 = dyn base55(<lang abs(rs)>);
    goto L167(r461);
  L772():
    show43 = force? show42;
    checkMissing(show43);
    c141 = `is.object`(show43);
    if c141 then L773() else L774(show43);
  D145():
    deopt 587 [];
  D171():
    deopt 696 [r396];
  D175():
    deopt 715 [];
  D185():
    deopt 755 [r422];
  D197():
    deopt 803 [];
  D199():
    deopt 811 [];
  L152(r400):
    r402 = `*`(r400, 1.075);
    c120 = ldf c in base;
    r403 = dyn c120(0.0, r402);
    check L670() else D174();
  L157(dx63):
    diff1 = ldf diff;
    check L691() else D187();
  L168(r464):
    r466 = sqrt(r464);
    goto L167(r466);
  L169(r468):
    st ylim = r468;
    as_expression1 = ldf `as.expression`;
    check L738() else D212();
  L179(dx86):
    c142 = `as.logical`(dx86);
    if c142 then L776() else L180();
  L583():
    dx49 = getTryDispatchBuiltinValue(dr46);
    goto L126(dx49);
  L616():
    p43 = prom<V +>{
      yh4 = ld yh;
      yh5 = force? yh4;
      checkMissing(yh5);
      return yh5;
    };
    p44 = prom<V +>{
      r345 = ld r;
      r346 = force? r345;
      checkMissing(r346);
      return r346;
    };
    p45 = prom<V +>{
      l_fit = ld `l.fit`;
      l_fit1 = force? l_fit;
      checkMissing(l_fit1);
      return l_fit1;
    };
    p46 = prom<V +>{
      ylab5 = ld ylab1;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    p47 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p48 = prom<V +>{
      ylim2 = ld ylim;
      ylim3 = force? ylim2;
      checkMissing(ylim3);
      return ylim3;
    };
    ddd1 = ld `...`;
    r352 = dyn plot[, , xlab, ylab, main, ylim, type, `...`](p43, p44, p45, p46, p47, p48, "n", ddd1);
    check L617() else D146();
  L663():
    goto L150(r396);
  L666():
    absr = ld absr;
    check L668() else D172();
  L667():
    r399 = dyn base52[, `na.rm`](<sym absr>, TRUE);
    goto L152(r399);
  L671():
    p57 = prom<V +>{
      sym53 = ldf substitute;
      base53 = ldf substitute in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r405):
      return r405;
    L1():
      substitute = ldf substitute in base;
      r406 = dyn substitute(<lang abs(YL)>, <lang list(YL=as.name(ylab2))>);
      goto L0(r406);
    L2():
      r404 = dyn base53(<lang abs(YL)>, <lang list(YL=as.name(ylab2))>);
      goto L0(r404);
    };
    r408 = dyn as_expression(p57);
    check L672() else D176();
  L686():
    goto L156(r422);
  L688():
    dr60 = tryDispatchBuiltin.1("[", ylim7);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L690() else L689(dr60);
  L689(ylim9):
    __22 = ldf `[` in base;
    r423 = dyn __22(ylim9, 2);
    goto L157(r423);
  L707():
    p70 = prom<V +>{
      sub_caption5 = ld `sub.caption`;
      sub_caption6 = force? sub_caption5;
      checkMissing(sub_caption6);
      return sub_caption6;
    };
    ddd6 = ld `...`;
    r442 = dyn title1[sub, `...`](p70, ddd6);
    check L708() else D198();
  L710():
    p71 = prom<V +>{
      getCaption1 = ldf getCaption;
      r444 = dyn getCaption1(2.0);
      return r444;
    };
    p72 = prom<V +>{
      cex_caption3 = ld `cex.caption`;
      cex_caption4 = force? cex_caption3;
      checkMissing(cex_caption4);
      return cex_caption4;
    };
    r447 = dyn mtext1[, , , cex](p71, 3.0, 0.25, p72);
    check L711() else D200();
  L727():
    rs4 = ld rs;
    check L729() else D207();
  L728():
    r463 = dyn base56(<sym rs>);
    goto L168(r463);
  L731():
    sym58 = ldf max;
    base58 = ldf max in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L733() else L734();
  L732():
    r467 = dyn base57(0.0, <lang max(sqrtabsr, na.rm=TRUE)>);
    goto L169(r467);
  L773():
    dr80 = tryDispatchBuiltin.1("[", show43);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L775() else L774(dr80);
  L774(show45):
    __29 = ldf `[` in base;
    r510 = dyn __29(show45, 4);
    goto L179(r510);
  D146():
    deopt 601 [r352];
  D172():
    deopt 703 [absr];
  D174():
    deopt 712 [r403];
  D176():
    deopt 717 [r408];
  D187():
    deopt 762 [dx63];
  D198():
    deopt 807 [r442];
  D200():
    deopt 817 [r447];
  D207():
    deopt 843 [rs4];
  D212():
    deopt 864 [];
  L170(r470):
    c133 = ldf c in base;
    r472 = dyn c133(0.0, r470);
    check L737() else D211();
  L180():
    goto L191();
  L191():
    show46 = ld show;
    check L817() else D257();
  L617():
    panel1 = ldf panel;
    check L618() else D147();
  L668():
    absr1 = force? absr;
    checkMissing(absr1);
    max = ldf max in base;
    r401 = dyn max(absr1, TRUE);
    check L669() else D173();
  L670():
    goto L151(r403);
  L672():
    st yl = r408;
    dev_hold1 = ldf `dev.hold`;
    check L673() else D177();
  L690():
    dx62 = getTryDispatchBuiltinValue(dr60);
    goto L157(dx62);
  L691():
    p64 = prom<V +>{
      ylim10 = ld ylim;
      ylim11 = force? ylim10;
      checkMissing(ylim11);
      return ylim11;
    };
    r425 = dyn diff1(p64);
    check L692() else D188();
  L708():
    goto L161();
  L711():
    id_n17 = ld `id.n`;
    check L712() else D201();
  L729():
    rs5 = force? rs4;
    checkMissing(rs5);
    abs4 = ldf abs in base;
    r465 = dyn abs4(rs5);
    check L730() else D208();
  L733():
    sqrtabsr = ld sqrtabsr;
    check L735() else D209();
  L734():
    r469 = dyn base58[, `na.rm`](<sym sqrtabsr>, TRUE);
    goto L170(r469);
  L738():
    p76 = prom<V +>{
      sym59 = ldf substitute;
      base59 = ldf substitute in base;
      guard59 = `==`.4(sym59, base59);
      if guard59 then L1() else L2();
    L0(r474):
      return r474;
    L1():
      substitute1 = ldf substitute in base;
      r475 = dyn substitute1(<lang sqrt(abs(YL))>, <lang list(YL=as.name(ylab3))>);
      goto L0(r475);
    L2():
      r473 = dyn base59(<lang sqrt(abs(YL))>, <lang list(YL=as.name(ylab3))>);
      goto L0(r473);
    };
    r477 = dyn as_expression1(p76);
    check L739() else D213();
  L775():
    dx85 = getTryDispatchBuiltinValue(dr80);
    goto L179(dx85);
  L776():
    id_n21 = ld `id.n`;
    check L777() else D235();
  D147():
    deopt 603 [];
  D173():
    deopt 708 [r401];
  D177():
    deopt 720 [];
  D188():
    deopt 764 [dx63, r425];
  D201():
    deopt 818 [id_n17];
  D208():
    deopt 846 [r465];
  D209():
    deopt 854 [sqrtabsr];
  D211():
    deopt 861 [r472];
  D213():
    deopt 866 [r477];
  D235():
    deopt 947 [id_n21];
  D257():
    deopt 1034 [show46];
  L618():
    p49 = prom<V +>{
      yh6 = ld yh;
      yh7 = force? yh6;
      checkMissing(yh7);
      return yh7;
    };
    p50 = prom<V +>{
      r354 = ld r;
      r355 = force? r354;
      checkMissing(r355);
      return r355;
    };
    ddd2 = ld `...`;
    r357 = dyn panel1[, , `...`](p49, p50, ddd2);
    check L619() else D148();
  L669():
    goto L152(r401);
  L673():
    r409 = dyn dev_hold1();
    check L674() else D178();
  L692():
    r426 = `*`(r425, 0.075);
    r427 = `+`(dx63, r426);
    l11 = ld ylim;
    c123 = `is.object`(l11);
    if c123 then L693() else L694(r427, l11);
  L712():
    id_n18 = force? id_n17;
    checkMissing(id_n18);
    r448 = `>`(id_n18, 0.0);
    c126 = `as.logical`(r448);
    if c126 then L713() else L162();
  L730():
    goto L168(r465);
  L735():
    sqrtabsr1 = force? sqrtabsr;
    checkMissing(sqrtabsr1);
    max1 = ldf max in base;
    r471 = dyn max1(sqrtabsr1, TRUE);
    check L736() else D210();
  L737():
    goto L169(r472);
  L739():
    st yl = r477;
    sym60 = ldf `is.null`;
    base60 = ldf `is.null` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L740() else L741();
  L777():
    id_n22 = force? id_n21;
    checkMissing(id_n22);
    r511 = `>`(id_n22, 0.0);
    c143 = `as.logical`(r511);
    if c143 then L778() else L181();
  L817():
    show47 = force? show46;
    checkMissing(show47);
    c151 = `is.object`(show47);
    if c151 then L818() else L819(show47);
  D148():
    deopt 607 [r357];
  D178():
    deopt 721 [r409];
  D210():
    deopt 859 [r471];
  L158(dx65):
    st ylim = dx65;
    dev_hold2 = ldf `dev.hold`;
    check L696() else D189();
  L162():
    goto L163();
  L163():
    dev_flush1 = ldf `dev.flush`;
    check L717() else D204();
  L171(r479):
    c135 = `as.logical`(r479);
    if c135 then L743() else L172();
  L181():
    sym61 = ldf max;
    base61 = ldf max in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L794() else L795();
  L185():
    dev_hold4 = ldf `dev.hold`;
    check L798() else D243();
  L192(dx96):
    c152 = `as.logical`(dx96);
    if c152 then L821() else L193();
  L619():
    one_fig = ld `one.fig`;
    check L620() else D149();
  L674():
    qqhalfnorm = ldf qqhalfnorm;
    check L675() else D179();
  L693():
    dr62 = tryDispatchBuiltin.0("[<-", l11, r427);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L695() else L694(r427, dr62);
  L694(r429, l13):
    ___3 = ldf `[<-` in base;
    r432 = dyn ___3(l13, r427, 2);
    goto L158(r432);
  L713():
    text_id1 = ldf `text.id`;
    check L714() else D202();
  L736():
    goto L170(r471);
  L740():
    w12 = ld w;
    check L742() else D214();
  L741():
    r478 = dyn base60(<sym w>);
    goto L171(r478);
  L778():
    order = ldf order;
    check L779() else D236();
  L818():
    dr90 = tryDispatchBuiltin.1("[", show47);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L820() else L819(dr90);
  L819(show49):
    __34 = ldf `[` in base;
    r549 = dyn __34(show49, 5);
    goto L192(r549);
  D149():
    deopt 608 [one_fig];
  D179():
    deopt 723 [];
  D189():
    deopt 774 [];
  D202():
    deopt 823 [];
  D204():
    deopt 831 [];
  D214():
    deopt 869 [w12];
  D236():
    deopt 952 [];
  D243():
    deopt 980 [];
  L172():
    yh15 = ld yh;
    check L746() else D216();
  L173(yh14):
    st yhn0 = yh14;
    dev_hold3 = ldf `dev.hold`;
    check L751() else D218();
  L186(r523):
    st ymx = r523;
    goto L185();
  L193():
    goto L238();
  L238():
    show50 = ld show;
    check L1012() else D364();
  L620():
    one_fig1 = force? one_fig;
    checkMissing(one_fig1);
    c111 = `as.logical`(one_fig1);
    if c111 then L621() else L139();
  L675():
    p58 = prom<V +>{
      absr2 = ld absr;
      absr3 = force? absr2;
      checkMissing(absr3);
      return absr3;
    };
    p59 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p60 = prom<V +>{
      yl = ld yl;
      yl1 = force? yl;
      checkMissing(yl1);
      return yl1;
    };
    p61 = prom<V +>{
      ylim4 = ld ylim;
      ylim5 = force? ylim4;
      checkMissing(ylim5);
      return ylim5;
    };
    ddd4 = ld `...`;
    r414 = dyn qqhalfnorm[, main, ylab, ylim, `...`](p58, p59, p60, p61, ddd4);
    check L676() else D180();
  L695():
    dx64 = getTryDispatchBuiltinValue(dr62);
    goto L158(dx64);
  L696():
    r433 = dyn dev_hold2();
    check L697() else D190();
  L714():
    p73 = prom<V +>{
      qq = ld qq;
      qq1 = force? qq;
      checkMissing(qq1);
      c127 = `is.object`(qq1);
      if c127 then L2() else L3(qq1);
    L1(dx67):
      c128 = `is.object`(dx67);
      if c128 then L5() else L6(dx67);
    L2():
      dr64 = tryDispatchBuiltin.1("$", qq1);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L4() else L3(dr64);
    L3(qq3):
      r449 = `$`(qq3, <sym x>);
      goto L1(r449);
    L0(dx71):
      return dx71;
    L4():
      dx66 = getTryDispatchBuiltinValue(dr64);
      goto L1(dx66);
    L5():
      dr66 = tryDispatchBuiltin.1("[", dx67);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L7() else L6(dr66);
    L6(dx69):
      show_rds = ld `show.rds`;
      show_rds1 = force? show_rds;
      __23 = ldf `[` in base;
      r450 = dyn __23(dx69, show_rds1);
      goto L0(r450);
    L7():
      dx70 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx70);
    };
    p74 = prom<V +>{
      qq4 = ld qq;
      qq5 = force? qq4;
      checkMissing(qq5);
      c129 = `is.object`(qq5);
      if c129 then L2() else L3(qq5);
    L1(dx73):
      c130 = `is.object`(dx73);
      if c130 then L5() else L6(dx73);
    L2():
      dr68 = tryDispatchBuiltin.1("$", qq5);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L4() else L3(dr68);
    L3(qq7):
      r452 = `$`(qq7, <sym y>);
      goto L1(r452);
    L0(dx77):
      return dx77;
    L4():
      dx72 = getTryDispatchBuiltinValue(dr68);
      goto L1(dx72);
    L5():
      dr70 = tryDispatchBuiltin.1("[", dx73);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L7() else L6(dr70);
    L6(dx75):
      show_rds2 = ld `show.rds`;
      show_rds3 = force? show_rds2;
      __24 = ldf `[` in base;
      r453 = dyn __24(dx75, show_rds3);
      goto L0(r453);
    L7():
      dx76 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx76);
    };
    p75 = prom<V +>{
      show_rds4 = ld `show.rds`;
      show_rds5 = force? show_rds4;
      checkMissing(show_rds5);
      return show_rds5;
    };
    r456 = dyn text_id1(p73, p74, p75);
    check L715() else D203();
  L717():
    r458 = dyn dev_flush1();
    check L718() else D205();
  L742():
    w13 = force? w12;
    checkMissing(w13);
    c134 = `==`(w13, NULL);
    goto L171(c134);
  L743():
    yh12 = ld yh;
    check L744() else D215();
  L779():
    p91 = prom<V +>{
      cook = ld cook;
      cook1 = force? cook;
      checkMissing(cook1);
      r512 = `-`(<missing>, cook1);
      return r512;
    };
    r514 = dyn order(p91);
    check L780() else D237();
  L794():
    cook10 = ld cook;
    check L796() else D241();
  L795():
    r522 = dyn base61[, `na.rm`](<sym cook>, TRUE);
    goto L186(r522);
  L798():
    r525 = dyn dev_hold4();
    check L799() else D244();
  L820():
    dx95 = getTryDispatchBuiltinValue(dr90);
    goto L192(dx95);
  L821():
    sym63 = ldf range;
    base63 = ldf range in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L822() else L823();
  D180():
    deopt 732 [r414];
  D190():
    deopt 775 [r433];
  D203():
    deopt 827 [r456];
  D205():
    deopt 832 [r458];
  D215():
    deopt 872 [yh12];
  D216():
    deopt 874 [yh15];
  D218():
    deopt 883 [];
  D237():
    deopt 954 [r514];
  D241():
    deopt 972 [cook10];
  D244():
    deopt 981 [r525];
  D364():
    deopt 1477 [show50];
  L139():
    goto L140();
  L140():
    mtext = ldf mtext;
    check L625() else D152();
  L194(r551):
    st ylim = r551;
    id_n25 = ld `id.n`;
    check L826() else D260();
  L621():
    title = ldf title;
    check L622() else D150();
  L676():
    st qq = r414;
    qqline1 = ld qqline;
    check L677() else D181();
  L697():
    qqnorm = ldf qqnorm;
    check L698() else D191();
  L715():
    goto L163();
  L718():
    goto L164();
  L744():
    yh13 = force? yh12;
    checkMissing(yh13);
    goto L173(yh13);
  L746():
    yh16 = force? yh15;
    checkMissing(yh16);
    c136 = `is.object`(yh16);
    if c136 then L747() else L748(yh16);
  L751():
    r482 = dyn dev_hold3();
    check L752() else D219();
  L780():
    c144 = `is.object`(r514);
    if c144 then L781() else L782(r514);
  L796():
    cook11 = force? cook10;
    checkMissing(cook11);
    max2 = ldf max in base;
    r524 = dyn max2(cook11, TRUE);
    check L797() else D242();
  L799():
    plot2 = ldf plot;
    check L800() else D245();
  L822():
    rs6 = ld rs;
    check L824() else D258();
  L823():
    r550 = dyn base63[, `na.rm`](<sym rs>, TRUE);
    goto L194(r550);
  L1012():
    show51 = force? show50;
    checkMissing(show51);
    c191 = `is.object`(show51);
    if c191 then L1013() else L1014(show51);
  D150():
    deopt 611 [];
  D152():
    deopt 619 [];
  D181():
    deopt 734 [qqline1];
  D191():
    deopt 777 [];
  D219():
    deopt 884 [r482];
  D242():
    deopt 977 [r524];
  D245():
    deopt 983 [];
  D258():
    deopt 1041 [rs6];
  D260():
    deopt 1048 [id_n25];
  L182(dx88):
    st `show.r` = dx88;
    cook2 = ld cook;
    check L785() else D239();
  L239(dx147):
    c192 = `as.logical`(dx147);
    if c192 then L1016() else L240();
  L622():
    p51 = prom<V +>{
      sub_caption3 = ld `sub.caption`;
      sub_caption4 = force? sub_caption3;
      checkMissing(sub_caption4);
      return sub_caption4;
    };
    ddd3 = ld `...`;
    r359 = dyn title[sub, `...`](p51, ddd3);
    check L623() else D151();
  L625():
    p52 = prom<V +>{
      getCaption = ldf getCaption;
      r361 = dyn getCaption(1.0);
      return r361;
    };
    p53 = prom<V +>{
      cex_caption1 = ld `cex.caption`;
      cex_caption2 = force? cex_caption1;
      checkMissing(cex_caption2);
      return cex_caption2;
    };
    r364 = dyn mtext[, , , cex](p52, 3.0, 0.25, p53);
    check L626() else D153();
  L677():
    qqline2 = force? qqline1;
    checkMissing(qqline2);
    c121 = `as.logical`(qqline2);
    if c121 then L678() else L153();
  L698():
    p65 = prom<V +>{
      rds6 = ld rds;
      rds7 = force? rds6;
      checkMissing(rds7);
      return rds7;
    };
    p66 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    p67 = prom<V +>{
      ylab7 = ld ylab2;
      ylab8 = force? ylab7;
      checkMissing(ylab8);
      return ylab8;
    };
    p68 = prom<V +>{
      ylim12 = ld ylim;
      ylim13 = force? ylim12;
      checkMissing(ylim13);
      return ylim13;
    };
    ddd5 = ld `...`;
    r438 = dyn qqnorm[, main, ylab, ylim, `...`](p65, p66, p67, p68, ddd5);
    check L699() else D192();
  L747():
    dr74 = tryDispatchBuiltin.1("[", yh16);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L749() else L748(dr74);
  L748(yh18):
    w14 = ld w;
    check L750() else D217();
  L752():
    plot1 = ldf plot;
    check L753() else D220();
  L781():
    dr82 = tryDispatchBuiltin.1("[", r514);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L783() else L782(dr82);
  L782(r516):
    iid6 = ld iid;
    check L784() else D238();
  L797():
    goto L186(r524);
  L800():
    p92 = prom<V +>{
      cook12 = ld cook;
      cook13 = force? cook12;
      checkMissing(cook13);
      return cook13;
    };
    p93 = prom<V +>{
      sym62 = ldf c;
      base62 = ldf c in base;
      guard62 = `==`.4(sym62, base62);
      if guard62 then L1() else L2();
    L0(r528):
      return r528;
    L1():
      ymx = ld ymx;
      ymx1 = force? ymx;
      checkMissing(ymx1);
      c147 = ldf c in base;
      r529 = dyn c147(0.0, ymx1);
      goto L0(r529);
    L2():
      r527 = dyn base62(0.0, <sym ymx>);
      goto L0(r527);
    };
    p94 = prom<V +>{
      main9 = ld main;
      main10 = force? main9;
      checkMissing(main10);
      return main10;
    };
    ddd10 = ld `...`;
    r532 = dyn plot2[, type, ylim, main, xlab, ylab, `...`](p92, "h", p93, p94, "Obs. number", "Cook's distance", ddd10);
    check L801() else D246();
  L824():
    rs7 = force? rs6;
    checkMissing(rs7);
    range3 = ldf range in base;
    r552 = dyn range3(rs7, TRUE);
    check L825() else D259();
  L826():
    id_n26 = force? id_n25;
    checkMissing(id_n26);
    r553 = `>`(id_n26, 0.0);
    c153 = `as.logical`(r553);
    if c153 then L827() else L195();
  L1013():
    dr132 = tryDispatchBuiltin.1("[", show51);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L1015() else L1014(dr132);
  L1014(show53):
    __50 = ldf `[` in base;
    r805 = dyn __50(show53, 6);
    goto L239(r805);
  D151():
    deopt 615 [r359];
  D153():
    deopt 625 [r364];
  D192():
    deopt 786 [r438];
  D217():
    deopt 876 [yh18, w14];
  D220():
    deopt 886 [];
  D238():
    deopt 955 [r516, iid6];
  D239():
    deopt 959 [cook2];
  D246():
    deopt 996 [r532];
  D259():
    deopt 1046 [r552];
  L153():
    goto L154(NULL);
  L154(r418):
    goto L155();
  L195():
    goto L197();
  L197():
    st `do.plot` = TRUE;
    isConst_hat = ld `isConst.hat`;
    check L837() else D266();
  L240():
    goto L255();
  L255():
    one_fig12 = ld `one.fig`;
    check L1106() else D426();
  L623():
    goto L140();
  L626():
    id_n15 = ld `id.n`;
    check L627() else D154();
  L678():
    qqline3 = ldf qqline;
    check L679() else D182();
  L699():
    st qq = r438;
    qqline4 = ld qqline;
    check L700() else D193();
  L749():
    dx80 = getTryDispatchBuiltinValue(dr74);
    goto L173(dx80);
  L750():
    w15 = force? w14;
    checkMissing(w15);
    r480 = `!=`(w15, 0.0);
    __26 = ldf `[` in base;
    r481 = dyn __26(yh18, r480);
    goto L173(r481);
  L753():
    p77 = prom<V +>{
      yhn0 = ld yhn0;
      yhn1 = force? yhn0;
      checkMissing(yhn1);
      return yhn1;
    };
    p78 = prom<V +>{
      sqrtabsr2 = ld sqrtabsr;
      sqrtabsr3 = force? sqrtabsr2;
      checkMissing(sqrtabsr3);
      return sqrtabsr3;
    };
    p79 = prom<V +>{
      l_fit2 = ld `l.fit`;
      l_fit3 = force? l_fit2;
      checkMissing(l_fit3);
      return l_fit3;
    };
    p80 = prom<V +>{
      yl2 = ld yl;
      yl3 = force? yl2;
      checkMissing(yl3);
      return yl3;
    };
    p81 = prom<V +>{
      main7 = ld main;
      main8 = force? main7;
      checkMissing(main8);
      return main8;
    };
    p82 = prom<V +>{
      ylim14 = ld ylim;
      ylim15 = force? ylim14;
      checkMissing(ylim15);
      return ylim15;
    };
    ddd7 = ld `...`;
    r489 = dyn plot1[, , xlab, ylab, main, ylim, type, `...`](p77, p78, p79, p80, p81, p82, "n", ddd7);
    check L754() else D221();
  L783():
    dx87 = getTryDispatchBuiltinValue(dr82);
    goto L182(dx87);
  L784():
    iid7 = force? iid6;
    __30 = ldf `[` in base;
    r517 = dyn __30(r516, iid7);
    goto L182(r517);
  L785():
    cook3 = force? cook2;
    checkMissing(cook3);
    c145 = `is.object`(cook3);
    if c145 then L786() else L787(cook3);
  L801():
    one_fig6 = ld `one.fig`;
    check L802() else D247();
  L825():
    goto L194(r552);
  L827():
    extendrange1 = ldf extendrange;
    check L828() else D261();
  L1015():
    dx146 = getTryDispatchBuiltinValue(dr132);
    goto L239(dx146);
  L1016():
    dropInf2 = ldf dropInf;
    check L1017() else D365();
  D154():
    deopt 626 [id_n15];
  D182():
    deopt 737 [];
  D193():
    deopt 788 [qqline4];
  D221():
    deopt 900 [r489];
  D247():
    deopt 997 [one_fig6];
  D261():
    deopt 1053 [];
  D266():
    deopt 1073 [isConst_hat];
  D365():
    deopt 1483 [];
  D426():
    deopt 1702 [one_fig12];
  L183(dx90):
    r520 = `*`(dx90, 1.075);
    st ymx = r520;
    goto L185();
  L627():
    id_n16 = force? id_n15;
    checkMissing(id_n16);
    r365 = `>`(id_n16, 0.0);
    c112 = `as.logical`(r365);
    if c112 then L628() else L141();
  L679():
    p62 = prom<V +>{
      absr4 = ld absr;
      absr5 = force? absr4;
      checkMissing(absr5);
      return absr5;
    };
    p63 = prom<V +>{
      qhalfnorm = ld qhalfnorm;
      qhalfnorm1 = force? qhalfnorm;
      checkMissing(qhalfnorm1);
      return qhalfnorm1;
    };
    r417 = dyn qqline3[, distribution, lty, col](p62, p63, 3.0, "gray50");
    check L680() else D183();
  L700():
    qqline5 = force? qqline4;
    checkMissing(qqline5);
    c124 = `as.logical`(qqline5);
    if c124 then L701() else L159();
  L754():
    panel2 = ldf panel;
    check L755() else D222();
  L786():
    dr84 = tryDispatchBuiltin.1("[", cook3);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L788() else L787(dr84);
  L787(cook5):
    show_r6 = ld `show.r`;
    check L789() else D240();
  L802():
    one_fig7 = force? one_fig6;
    checkMissing(one_fig7);
    c148 = `as.logical`(one_fig7);
    if c148 then L803() else L187();
  L828():
    p101 = prom<V +>{
      ylim16 = ld ylim;
      ylim17 = force? ylim16;
      checkMissing(ylim17);
      return ylim17;
    };
    p102 = prom<V +>{
      extend_ylim_f3 = ld `extend.ylim.f`;
      extend_ylim_f4 = force? extend_ylim_f3;
      checkMissing(extend_ylim_f4);
      return extend_ylim_f4;
    };
    r556 = dyn extendrange1[r, f](p101, p102);
    check L829() else D262();
  L837():
    isConst_hat1 = force? isConst_hat;
    checkMissing(isConst_hat1);
    c155 = `as.logical`(isConst_hat1);
    if c155 then L838() else L198();
  L1017():
    p165 = prom<V +>{
      hii12 = ld hii;
      hii13 = force? hii12;
      checkMissing(hii13);
      hii14 = ld hii;
      hii15 = force? hii14;
      checkMissing(hii15);
      r806 = `-`(1.0, hii15);
      r807 = `/`(hii13, r806);
      return r807;
    };
    p166 = prom<V +>{
      hii16 = ld hii;
      hii17 = force? hii16;
      checkMissing(hii17);
      return hii17;
    };
    r810 = dyn dropInf2(p165, p166);
    check L1018() else D366();
  L1106():
    one_fig13 = force? one_fig12;
    checkMissing(one_fig13);
    r931 = `!`(one_fig13);
    c210 = `as.logical`(r931);
    if c210 then L1107() else L256(c210);
  D183():
    deopt 745 [r417];
  D222():
    deopt 902 [];
  D240():
    deopt 961 [cook5, show_r6];
  D262():
    deopt 1058 [r556];
  D366():
    deopt 1486 [r810];
  L141():
    goto L145();
  L145():
    abline = ldf abline;
    check L648() else D164();
  L159():
    goto L155();
  L187():
    goto L188();
  L188():
    mtext3 = ldf mtext;
    check L807() else D250();
  L198():
    hii10 = ld hii;
    check L900() else D305();
  L210():
    do_plot = ld `do.plot`;
    check L985() else D351();
  L256(c212):
    c221 = `as.logical`(c212);
    if c221 then L1114() else L258();
  L628():
    r366 = ld r;
    check L629() else D155();
  L680():
    goto L154(r417);
  L701():
    qqline6 = ldf qqline;
    check L702() else D194();
  L755():
    p83 = prom<V +>{
      yhn2 = ld yhn0;
      yhn3 = force? yhn2;
      checkMissing(yhn3);
      return yhn3;
    };
    p84 = prom<V +>{
      sqrtabsr4 = ld sqrtabsr;
      sqrtabsr5 = force? sqrtabsr4;
      checkMissing(sqrtabsr5);
      return sqrtabsr5;
    };
    ddd8 = ld `...`;
    r492 = dyn panel2[, , `...`](p83, p84, ddd8);
    check L756() else D223();
  L788():
    dx89 = getTryDispatchBuiltinValue(dr84);
    goto L183(dx89);
  L789():
    show_r7 = force? show_r6;
    checkMissing(show_r7);
    c146 = `is.object`(show_r7);
    if c146 then L790() else L791(cook5, show_r7);
  L803():
    title3 = ldf title;
    check L804() else D248();
  L829():
    st ylim = r556;
    order1 = ldf order;
    check L830() else D263();
  L838():
    sym64 = ldf missing;
    base64 = ldf missing in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L839() else L840();
  L1018():
    st g = r810;
    sym85 = ldf max;
    base85 = ldf max in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L1019() else L1020();
  L1107():
    par4 = ldf par;
    check L1108() else D427();
  D155():
    deopt 630 [r366];
  D164():
    deopt 665 [];
  D194():
    deopt 791 [];
  D223():
    deopt 906 [r492];
  D248():
    deopt 1000 [];
  D250():
    deopt 1008 [];
  D263():
    deopt 1061 [];
  D305():
    deopt 1225 [hii10];
  D351():
    deopt 1425 [do_plot];
  D427():
    deopt 1706 [c210];
  L184(cook9, dx92):
    __32 = ldf `[` in base;
    r519 = dyn __32(cook9, dx92);
    goto L183(r519);
  L199(r564):
    c156 = `as.logical`(r564);
    if c156 then L841() else L200();
  L241(r812):
    r814 = `*`(r812, 1.025);
    st ymx = r814;
    dev_hold7 = ldf `dev.hold`;
    check L1023() else D369();
  L258():
    goto L259();
  L259():
    sym94 = ldf invisible;
    base94 = ldf invisible in base;
    guard94 = `==`.4(sym94, base94);
    if guard94 then L1118() else L1119();
  L629():
    r367 = force? r366;
    checkMissing(r367);
    c113 = `is.object`(r367);
    if c113 then L630() else L631(r367);
  L648():
    r388 = dyn abline[h, lty, col](0.0, 3.0, "gray");
    check L649() else D165();
  L702():
    p69 = prom<V +>{
      rds8 = ld rds;
      rds9 = force? rds8;
      checkMissing(rds9);
      return rds9;
    };
    r440 = dyn qqline6[, lty, col](p69, 3.0, "gray50");
    check L703() else D195();
  L756():
    one_fig4 = ld `one.fig`;
    check L757() else D224();
  L790():
    dr86 = tryDispatchBuiltin.1("[", show_r7);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L792() else L791(cook5, dr86);
  L791(cook7, show_r9):
    __31 = ldf `[` in base;
    r518 = dyn __31(show_r9, 1);
    goto L184(cook7, r518);
  L804():
    p95 = prom<V +>{
      sub_caption9 = ld `sub.caption`;
      sub_caption10 = force? sub_caption9;
      checkMissing(sub_caption10);
      return sub_caption10;
    };
    ddd11 = ld `...`;
    r534 = dyn title3[sub, `...`](p95, ddd11);
    check L805() else D249();
  L807():
    p96 = prom<V +>{
      getCaption3 = ldf getCaption;
      r536 = dyn getCaption3(4.0);
      return r536;
    };
    p97 = prom<V +>{
      cex_caption7 = ld `cex.caption`;
      cex_caption8 = force? cex_caption7;
      checkMissing(cex_caption8);
      return cex_caption8;
    };
    r539 = dyn mtext3[, , , cex](p96, 3.0, 0.25, p97);
    check L808() else D251();
  L830():
    p103 = prom<V +>{
      cook18 = ld cook;
      cook19 = force? cook18;
      checkMissing(cook19);
      r557 = `-`(<missing>, cook19);
      return r557;
    };
    r559 = dyn order1(p103);
    check L831() else D264();
  L839():
    missing = ldf missing in base;
    r565 = dyn missing(<sym caption>);
    goto L199(r565);
  L840():
    r563 = dyn base64(<sym caption>);
    goto L199(r563);
  L900():
    hii11 = force? hii10;
    checkMissing(hii11);
    st xx = hii11;
    l17 = ld xx;
    c171 = `is.object`(l17);
    if c171 then L901() else L902(NA_LGL, l17);
  L985():
    do_plot1 = force? do_plot;
    checkMissing(do_plot1);
    c185 = `as.logical`(do_plot1);
    if c185 then L986() else L231();
  L1019():
    cook20 = ld cook;
    check L1021() else D367();
  L1020():
    r811 = dyn base85[, `na.rm`](<sym cook>, TRUE);
    goto L241(r811);
  L1108():
    r932 = dyn par4("oma");
    check L1109() else D428();
  L1114():
    mtext7 = ldf mtext;
    check L1115() else D429();
  D165():
    deopt 672 [r388];
  D195():
    deopt 797 [r440];
  D224():
    deopt 907 [one_fig4];
  D249():
    deopt 1004 [r534];
  D251():
    deopt 1014 [r539];
  D264():
    deopt 1063 [r559];
  D367():
    deopt 1490 [cook20];
  D369():
    deopt 1500 [];
  D428():
    deopt 1708 [c210, r932];
  D429():
    deopt 1716 [];
  L142(dx53):
    st `y.id` = dx53;
    y_id = ld `y.id`;
    check L634() else D157();
  L200():
    goto L202();
  L202():
    sym65 = ldf length;
    base65 = ldf length in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L846() else L847();
  L211(dx129):
    st xx = dx129;
    dev_hold6 = ldf `dev.hold`;
    check L905() else D307();
  L231():
    goto L237(NULL);
  L237(r803):
    goto L238();
  L260(r942):
    popenv;
    return r942;
  L630():
    dr50 = tryDispatchBuiltin.1("[", r367);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L632() else L631(dr50);
  L631(r369):
    show_r = ld `show.r`;
    check L633() else D156();
  L649():
    dev_flush = ldf `dev.flush`;
    check L650() else D166();
  L703():
    goto L155();
  L757():
    one_fig5 = force? one_fig4;
    checkMissing(one_fig5);
    c137 = `as.logical`(one_fig5);
    if c137 then L758() else L174();
  L792():
    dx91 = getTryDispatchBuiltinValue(dr86);
    goto L184(cook5, dx91);
  L805():
    goto L188();
  L808():
    id_n23 = ld `id.n`;
    check L809() else D252();
  L831():
    c154 = `is.object`(r559);
    if c154 then L832() else L833(r559);
  L841():
    l14 = ld caption;
    c157 = `is.object`(l14);
    if c157 then L842() else L843("Constant Leverage:\n Residuals vs Factor Levels", l14);
  L901():
    dr114 = tryDispatchBuiltin.0("[<-", l17, NA_LGL);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L903() else L902(NA_LGL, dr114);
  L902(r669, l19):
    xx = ld xx;
    check L904() else D306();
  L986():
    mtext5 = ldf mtext;
    check L987() else D352();
  L1021():
    cook21 = force? cook20;
    checkMissing(cook21);
    max4 = ldf max in base;
    r813 = dyn max4(cook21, TRUE);
    check L1022() else D368();
  L1023():
    r815 = dyn dev_hold7();
    check L1024() else D370();
  L1109():
    c213 = `is.object`(r932);
    if c213 then L1110() else L1111(c210, r932);
  L1115():
    p209 = prom<V +>{
      sub_caption15 = ld `sub.caption`;
      sub_caption16 = force? sub_caption15;
      checkMissing(sub_caption16);
      return sub_caption16;
    };
    p210 = prom<V +>{
      cex_oma_main1 = ld `cex.oma.main`;
      cex_oma_main2 = force? cex_oma_main1;
      checkMissing(cex_oma_main2);
      return cex_oma_main2;
    };
    r939 = dyn mtext7[, outer, cex](p209, TRUE, p210);
    check L1116() else D430();
  L1118():
    invisible = ldf invisible in base;
    r943 = dyn invisible();
    check L1120() else D431();
  L1119():
    r941 = dyn base94();
    goto L260(r941);
  D156():
    deopt 632 [r369, show_r];
  D157():
    deopt 636 [y_id];
  D166():
    deopt 674 [];
  D252():
    deopt 1015 [id_n23];
  D306():
    deopt 1231 [r669, l19, NA_LGL, xx];
  D307():
    deopt 1238 [];
  D352():
    deopt 1428 [];
  D368():
    deopt 1495 [r813];
  D370():
    deopt 1501 [r815];
  D430():
    deopt 1722 [r939];
  D431():
    deopt 1728 [r943];
  L174():
    goto L175();
  L175():
    mtext2 = ldf mtext;
    check L762() else D227();
  L196(dx98):
    st `show.rs` = dx98;
    goto L197();
  L201(r569, dx101):
    st caption = dx101;
    goto L202();
  L203(r573):
    st nf = r573;
    c159 = `as.logical`(r573);
    if c159 then L854() else L204();
  L257(c217, dx167):
    r936 = `>=`(dx167, 1.0);
    c218 = `as.logical`(r936);
    c219 = `&&`(c217, c218);
    goto L256(c219);
  L632():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L142(dx52);
  L633():
    show_r1 = force? show_r;
    __18 = ldf `[` in base;
    r370 = dyn __18(r369, show_r1);
    goto L142(r370);
  L634():
    y_id1 = force? y_id;
    checkMissing(y_id1);
    c114 = `is.object`(y_id1);
    if c114 then L635() else L636(y_id1);
  L650():
    r389 = dyn dev_flush();
    check L651() else D167();
  L758():
    title2 = ldf title;
    check L759() else D225();
  L809():
    id_n24 = force? id_n23;
    checkMissing(id_n24);
    r540 = `>`(id_n24, 0.0);
    c149 = `as.logical`(r540);
    if c149 then L810() else L189();
  L832():
    dr92 = tryDispatchBuiltin.1("[", r559);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L834() else L833(dr92);
  L833(r561):
    iid8 = ld iid;
    check L835() else D265();
  L842():
    dr94 = tryDispatchBuiltin.0("[[<-", l14, "Constant Leverage:\n Residuals vs Factor Levels");
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L844() else L843("Constant Leverage:\n Residuals vs Factor Levels", dr94);
  L843(r567, l16):
    ____ = ldf `[[<-` in base;
    r570 = dyn ____(l16, "Constant Leverage:\n Residuals vs Factor Levels", 5);
    goto L201(r567, r570);
  L846():
    x41 = ld x;
    check L848() else D267();
  L847():
    r572 = dyn base65(<lang `<-`(xlev, `$`(x, xlevels))>);
    goto L203(r572);
  L903():
    dx128 = getTryDispatchBuiltinValue(dr114);
    goto L211(dx128);
  L904():
    xx1 = force? xx;
    checkMissing(xx1);
    r672 = `>=`(xx1, 1.0);
    ___5 = ldf `[<-` in base;
    r673 = dyn ___5(l19, NA_LGL, r672);
    goto L211(r673);
  L905():
    r674 = dyn dev_hold6();
    check L906() else D308();
  L987():
    p160 = prom<V +>{
      getCaption4 = ldf getCaption;
      r780 = dyn getCaption4(5.0);
      return r780;
    };
    p161 = prom<V +>{
      cex_caption9 = ld `cex.caption`;
      cex_caption10 = force? cex_caption9;
      checkMissing(cex_caption10);
      return cex_caption10;
    };
    r783 = dyn mtext5[, , , cex](p160, 3.0, 0.25, p161);
    check L988() else D353();
  L1022():
    goto L241(r813);
  L1024():
    plot5 = ldf plot;
    check L1025() else D371();
  L1110():
    dr152 = tryDispatchBuiltin.1("[", r932);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L1112() else L1111(c210, dr152);
  L1111(c215, r934):
    __59 = ldf `[` in base;
    r935 = dyn __59(r934, 3);
    goto L257(c215, r935);
  L1116():
    goto L259();
  L1120():
    goto L260(r943);
  D167():
    deopt 675 [r389];
  D225():
    deopt 910 [];
  D227():
    deopt 918 [];
  D265():
    deopt 1064 [r561, iid8];
  D267():
    deopt 1089 [x41];
  D308():
    deopt 1239 [r674];
  D353():
    deopt 1434 [r783];
  D371():
    deopt 1503 [];
  L143(dx55):
    strheight = ldf strheight;
    check L639() else D159();
  L189():
    goto L190();
  L190():
    dev_flush3 = ldf `dev.flush`;
    check L814() else D255();
  L204():
    message = ldf message;
    check L895() else D301();
  L209(r657):
    goto L210();
  L635():
    dr52 = tryDispatchBuiltin.1("[", y_id1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L637() else L636(dr52);
  L636(y_id3):
    y_id4 = ld `y.id`;
    check L638() else D158();
  L651():
    goto L146();
  L759():
    p85 = prom<V +>{
      sub_caption7 = ld `sub.caption`;
      sub_caption8 = force? sub_caption7;
      checkMissing(sub_caption8);
      return sub_caption8;
    };
    ddd9 = ld `...`;
    r494 = dyn title2[sub, `...`](p85, ddd9);
    check L760() else D226();
  L762():
    p86 = prom<V +>{
      getCaption2 = ldf getCaption;
      r496 = dyn getCaption2(3.0);
      return r496;
    };
    p87 = prom<V +>{
      cex_caption5 = ld `cex.caption`;
      cex_caption6 = force? cex_caption5;
      checkMissing(cex_caption6);
      return cex_caption6;
    };
    r499 = dyn mtext2[, , , cex](p86, 3.0, 0.25, p87);
    check L763() else D228();
  L810():
    text_id3 = ldf `text.id`;
    check L811() else D253();
  L834():
    dx97 = getTryDispatchBuiltinValue(dr92);
    goto L196(dx97);
  L835():
    iid9 = force? iid8;
    __35 = ldf `[` in base;
    r562 = dyn __35(r561, iid9);
    goto L196(r562);
  L844():
    dx100 = getTryDispatchBuiltinValue(dr94);
    goto L201("Constant Leverage:\n Residuals vs Factor Levels", dx100);
  L848():
    x42 = force? x41;
    checkMissing(x42);
    c158 = `is.object`(x42);
    if c158 then L850() else L851(x42);
  L854():
    sym66 = ldf names;
    base66 = ldf names in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L855() else L856();
  L906():
    plot4 = ldf plot;
    check L907() else D309();
  L988():
    id_n27 = ld `id.n`;
    check L989() else D354();
  L1025():
    p167 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    p168 = prom<V +>{
      cook22 = ld cook;
      cook23 = force? cook22;
      checkMissing(cook23);
      return cook23;
    };
    p169 = prom<V +>{
      sym86 = ldf c;
      base86 = ldf c in base;
      guard86 = `==`.4(sym86, base86);
      if guard86 then L2() else L3();
    L0(r819):
      return r819;
    L2():
      sym87 = ldf max;
      base87 = ldf max in base;
      guard87 = `==`.4(sym87, base87);
      if guard87 then L4() else L5();
    L3():
      r818 = dyn base86(0.0, <lang max(g, na.rm=TRUE)>);
      goto L0(r818);
    L1(r821):
      c193 = ldf c in base;
      r823 = dyn c193(0.0, r821);
      goto L0(r823);
    L4():
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      max5 = ldf max in base;
      r822 = dyn max5(g3, TRUE);
      goto L1(r822);
    L5():
      r820 = dyn base87[, `na.rm`](<sym g>, TRUE);
      goto L1(r820);
    };
    p170 = prom<V +>{
      sym88 = ldf c;
      base88 = ldf c in base;
      guard88 = `==`.4(sym88, base88);
      if guard88 then L1() else L2();
    L0(r826):
      return r826;
    L1():
      ymx2 = ld ymx;
      ymx3 = force? ymx2;
      checkMissing(ymx3);
      c194 = ldf c in base;
      r827 = dyn c194(0.0, ymx3);
      goto L0(r827);
    L2():
      r825 = dyn base88(0.0, <sym ymx>);
      goto L0(r825);
    };
    p171 = prom<V +>{
      main15 = ld main;
      main16 = force? main15;
      checkMissing(main16);
      return main16;
    };
    p172 = prom<V +>{
      sym89 = ldf expression;
      base89 = ldf expression in base;
      guard89 = `==`.4(sym89, base89);
      if guard89 then L1() else L2();
    L0(r831):
      return r831;
    L1():
      expression1 = ldf expression in base;
      r832 = dyn expression1(<lang `*`("Leverage  ", `[`(h, ii))>);
      goto L0(r832);
    L2():
      r830 = dyn base89(<lang `*`("Leverage  ", `[`(h, ii))>);
      goto L0(r830);
    };
    ddd17 = ld `...`;
    r834 = dyn plot5[, , xlim, ylim, main, ylab, xlab, xaxt, type, `...`](p167, p168, p169, p170, p171, "Cook's distance", p172, "n", "n", ddd17);
    check L1026() else D372();
  L1112():
    dx166 = getTryDispatchBuiltinValue(dr152);
    goto L257(c210, dx166);
  D158():
    deopt 638 [y_id3, y_id4];
  D159():
    deopt 643 [dx55];
  D226():
    deopt 914 [r494];
  D228():
    deopt 924 [r499];
  D253():
    deopt 1020 [];
  D255():
    deopt 1030 [];
  D301():
    deopt 1214 [];
  D309():
    deopt 1241 [];
  D354():
    deopt 1435 [id_n27];
  D372():
    deopt 1521 [r834];
  L205(r577):
    st facvars = r577;
    model_frame = ldf `model.frame`;
    check L859() else D271();
  L637():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L143(dx54);
  L638():
    y_id5 = force? y_id4;
    checkMissing(y_id5);
    r371 = `<`(y_id5, 0.0);
    __19 = ldf `[` in base;
    r372 = dyn __19(y_id3, r371);
    goto L143(r372);
  L639():
    r373 = dyn strheight(" ");
    check L640() else D160();
  L760():
    goto L175();
  L763():
    id_n19 = ld `id.n`;
    check L764() else D229();
  L811():
    p98 = prom<V +>{
      show_r10 = ld `show.r`;
      show_r11 = force? show_r10;
      checkMissing(show_r11);
      return show_r11;
    };
    p99 = prom<V +>{
      cook14 = ld cook;
      cook15 = force? cook14;
      checkMissing(cook15);
      c150 = `is.object`(cook15);
      if c150 then L1() else L2(cook15);
    L0(dx94):
      return dx94;
    L1():
      dr88 = tryDispatchBuiltin.1("[", cook15);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(cook17):
      show_r12 = ld `show.r`;
      show_r13 = force? show_r12;
      __33 = ldf `[` in base;
      r542 = dyn __33(cook17, show_r13);
      goto L0(r542);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx93);
    };
    p100 = prom<V +>{
      show_r14 = ld `show.r`;
      show_r15 = force? show_r14;
      checkMissing(show_r15);
      return show_r15;
    };
    r545 = dyn text_id3[, , , `adj.x`](p98, p99, p100, FALSE);
    check L812() else D254();
  L814():
    r547 = dyn dev_flush3();
    check L815() else D256();
  L849(dx103):
    st xlev = dx103;
    length3 = ldf length in base;
    r575 = dyn length3(dx103);
    check L853() else D268();
  L850():
    dr96 = tryDispatchBuiltin.1("$", x42);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L852() else L851(dr96);
  L851(x44):
    r574 = `$`(x44, <sym xlevels>);
    goto L849(r574);
  L855():
    xlev = ld xlev;
    check L857() else D269();
  L856():
    r576 = dyn base66(<sym xlev>);
    goto L205(r576);
  L895():
    p126 = prom<V +>{
      gettextf1 = ldf gettextf;
      p125 = prom<V +>{
        format = ldf format;
        p124 = prom<V +>{
          mean1 = ldf mean;
          p123 = prom<V +>{
            r_hat4 = ld `r.hat`;
            r_hat5 = force? r_hat4;
            checkMissing(r_hat5);
            return r_hat5;
          };
          r659 = dyn mean1(p123);
          return r659;
        };
        r661 = dyn format(p124);
        return r661;
      };
      r663 = dyn gettextf1("hat values (leverages) are all = %s\n and there are no factor predictors; no plot no. 5", p125);
      return r663;
    };
    r665 = dyn message[, domain](p126, NA_LGL);
    check L896() else D302();
  L907():
    p127 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p128 = prom<V +>{
      rs12 = ld rs;
      rs13 = force? rs12;
      checkMissing(rs13);
      return rs13;
    };
    p129 = prom<V +>{
      sym71 = ldf c;
      base71 = ldf c in base;
      guard71 = `==`.4(sym71, base71);
      if guard71 then L2() else L3();
    L0(r678):
      return r678;
    L2():
      sym72 = ldf max;
      base72 = ldf max in base;
      guard72 = `==`.4(sym72, base72);
      if guard72 then L4() else L5();
    L3():
      r677 = dyn base71(0.0, <lang max(xx, na.rm=TRUE)>);
      goto L0(r677);
    L1(r680):
      c172 = ldf c in base;
      r682 = dyn c172(0.0, r680);
      goto L0(r682);
    L4():
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      max3 = ldf max in base;
      r681 = dyn max3(xx5, TRUE);
      goto L1(r681);
    L5():
      r679 = dyn base72[, `na.rm`](<sym xx>, TRUE);
      goto L1(r679);
    };
    p130 = prom<V +>{
      ylim20 = ld ylim;
      ylim21 = force? ylim20;
      checkMissing(ylim21);
      return ylim21;
    };
    p131 = prom<V +>{
      main13 = ld main;
      main14 = force? main13;
      checkMissing(main14);
      return main14;
    };
    p132 = prom<V +>{
      ylab11 = ld ylab5;
      ylab12 = force? ylab11;
      checkMissing(ylab12);
      return ylab12;
    };
    ddd14 = ld `...`;
    r687 = dyn plot4[, , xlim, ylim, main, xlab, ylab, type, `...`](p127, p128, p129, p130, p131, "Leverage", p132, "n", ddd14);
    check L908() else D310();
  L989():
    id_n28 = force? id_n27;
    checkMissing(id_n28);
    r784 = `>`(id_n28, 0.0);
    c186 = `as.logical`(r784);
    if c186 then L990() else L232();
  L1026():
    panel5 = ldf panel;
    check L1027() else D373();
  D160():
    deopt 645 [dx55, r373];
  D229():
    deopt 925 [id_n19];
  D254():
    deopt 1026 [r545];
  D256():
    deopt 1031 [r547];
  D268():
    deopt 1094 [r575];
  D269():
    deopt 1098 [xlev];
  D271():
    deopt 1104 [];
  D302():
    deopt 1218 [r665];
  D310():
    deopt 1257 [r687];
  D373():
    deopt 1523 [];
  L232():
    goto L236(NULL);
  L236(r802):
    goto L237(r802);
  L640():
    r374 = `/`(r373, 3.0);
    r375 = `-`(dx55, r374);
    l8 = ld `y.id`;
    c115 = `is.object`(l8);
    if c115 then L641() else L642(r375, l8);
  L764():
    id_n20 = force? id_n19;
    checkMissing(id_n20);
    r500 = `>`(id_n20, 0.0);
    c138 = `as.logical`(r500);
    if c138 then L765() else L176();
  L812():
    goto L190();
  L815():
    goto L191();
  L852():
    dx102 = getTryDispatchBuiltinValue(dr96);
    goto L849(dx102);
  L853():
    goto L203(r575);
  L857():
    xlev1 = force? xlev;
    checkMissing(xlev1);
    names3 = ldf names in base;
    r578 = dyn names3(xlev1);
    check L858() else D270();
  L859():
    p104 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      return x46;
    };
    r580 = dyn model_frame(p104);
    check L860() else D272();
  L896():
    frame = ldf frame;
    check L897() else D303();
  L908():
    panel4 = ldf panel;
    check L909() else D311();
  L990():
    rs16 = ld rs;
    check L991() else D355();
  L1027():
    p173 = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    p174 = prom<V +>{
      cook24 = ld cook;
      cook25 = force? cook24;
      checkMissing(cook25);
      return cook25;
    };
    ddd18 = ld `...`;
    r837 = dyn panel5[, , `...`](p173, p174, ddd18);
    check L1028() else D374();
  D270():
    deopt 1101 [r578];
  D272():
    deopt 1106 [r580];
  D303():
    deopt 1220 [];
  D311():
    deopt 1259 [];
  D355():
    deopt 1439 [rs16];
  D374():
    deopt 1527 [r837];
  L144(dx57):
    st `y.id` = dx57;
    text_id = ldf `text.id`;
    check L645() else D162();
  L176():
    goto L177();
  L177():
    dev_flush2 = ldf `dev.flush`;
    check L769() else D232();
  L641():
    dr54 = tryDispatchBuiltin.0("[<-", l8, r375);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L643() else L642(r375, dr54);
  L642(r377, l10):
    y_id6 = ld `y.id`;
    check L644() else D161();
  L765():
    text_id2 = ldf `text.id`;
    check L766() else D230();
  L858():
    goto L205(r578);
  L860():
    c160 = `is.object`(r580);
    if c160 then L861() else L862(r580);
  L897():
    r666 = dyn frame();
    check L898() else D304();
  L909():
    p133 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    p134 = prom<V +>{
      rs14 = ld rs;
      rs15 = force? rs14;
      checkMissing(rs15);
      return rs15;
    };
    ddd15 = ld `...`;
    r690 = dyn panel4[, , `...`](p133, p134, ddd15);
    check L910() else D312();
  L991():
    rs17 = force? rs16;
    checkMissing(rs17);
    c187 = `is.object`(rs17);
    if c187 then L992() else L993(rs17);
  L1028():
    pretty = ldf pretty;
    check L1029() else D375();
  D161():
    deopt 650 [r377, l10, r375, y_id6];
  D162():
    deopt 657 [];
  D230():
    deopt 930 [];
  D232():
    deopt 938 [];
  D304():
    deopt 1221 [r666];
  D312():
    deopt 1263 [r690];
  D375():
    deopt 1529 [];
  L206(dx105):
    st mf = dx105;
    data_matrix = ldf `data.matrix`;
    check L865() else D274();
  L233(dx139):
    st `y.id` = dx139;
    y_id10 = ld `y.id`;
    check L996() else D357();
  L643():
    dx56 = getTryDispatchBuiltinValue(dr54);
    goto L144(dx56);
  L644():
    y_id7 = force? y_id6;
    checkMissing(y_id7);
    r380 = `<`(y_id7, 0.0);
    ___2 = ldf `[<-` in base;
    r381 = dyn ___2(l10, r375, r380);
    goto L144(r381);
  L645():
    p54 = prom<V +>{
      yh8 = ld yh;
      yh9 = force? yh8;
      checkMissing(yh9);
      c116 = `is.object`(yh9);
      if c116 then L1() else L2(yh9);
    L0(dx59):
      return dx59;
    L1():
      dr56 = tryDispatchBuiltin.1("[", yh9);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(yh11):
      show_r2 = ld `show.r`;
      show_r3 = force? show_r2;
      __20 = ldf `[` in base;
      r382 = dyn __20(yh11, show_r3);
      goto L0(r382);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx58);
    };
    p55 = prom<V +>{
      y_id8 = ld `y.id`;
      y_id9 = force? y_id8;
      checkMissing(y_id9);
      return y_id9;
    };
    p56 = prom<V +>{
      show_r4 = ld `show.r`;
      show_r5 = force? show_r4;
      checkMissing(show_r5);
      return show_r5;
    };
    r386 = dyn text_id(p54, p55, p56);
    check L646() else D163();
  L766():
    p88 = prom<V +>{
      yhn4 = ld yhn0;
      yhn5 = force? yhn4;
      checkMissing(yhn5);
      c139 = `is.object`(yhn5);
      if c139 then L1() else L2(yhn5);
    L0(dx82):
      return dx82;
    L1():
      dr76 = tryDispatchBuiltin.1("[", yhn5);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(yhn7):
      show_rs = ld `show.rs`;
      show_rs1 = force? show_rs;
      __27 = ldf `[` in base;
      r501 = dyn __27(yhn7, show_rs1);
      goto L0(r501);
    L3():
      dx81 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx81);
    };
    p89 = prom<V +>{
      sqrtabsr6 = ld sqrtabsr;
      sqrtabsr7 = force? sqrtabsr6;
      checkMissing(sqrtabsr7);
      c140 = `is.object`(sqrtabsr7);
      if c140 then L1() else L2(sqrtabsr7);
    L0(dx84):
      return dx84;
    L1():
      dr78 = tryDispatchBuiltin.1("[", sqrtabsr7);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L3() else L2(dr78);
    L2(sqrtabsr9):
      show_rs2 = ld `show.rs`;
      show_rs3 = force? show_rs2;
      __28 = ldf `[` in base;
      r503 = dyn __28(sqrtabsr9, show_rs3);
      goto L0(r503);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx83);
    };
    p90 = prom<V +>{
      show_rs4 = ld `show.rs`;
      show_rs5 = force? show_rs4;
      checkMissing(show_rs5);
      return show_rs5;
    };
    r506 = dyn text_id2(p88, p89, p90);
    check L767() else D231();
  L769():
    r508 = dyn dev_flush2();
    check L770() else D233();
  L861():
    dr98 = tryDispatchBuiltin.1("[", r580);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L863() else L862(dr98);
  L862(r582):
    facvars = ld facvars;
    check L864() else D273();
  L898():
    st `do.plot` = FALSE;
    goto L209(FALSE);
  L910():
    abline3 = ldf abline;
    check L911() else D313();
  L992():
    dr124 = tryDispatchBuiltin.1("[", rs17);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L994() else L993(dr124);
  L993(rs19):
    show_rs6 = ld `show.rs`;
    check L995() else D356();
  L1029():
    p175 = prom<V +>{
      hii18 = ld hii;
      hii19 = force? hii18;
      checkMissing(hii19);
      return hii19;
    };
    r839 = dyn pretty(p175);
    check L1030() else D376();
  D163():
    deopt 661 [r386];
  D231():
    deopt 934 [r506];
  D233():
    deopt 939 [r508];
  D273():
    deopt 1107 [r582, facvars];
  D274():
    deopt 1112 [];
  D313():
    deopt 1265 [];
  D356():
    deopt 1441 [rs19, show_rs6];
  D357():
    deopt 1445 [y_id10];
  D376():
    deopt 1531 [r839];
  L646():
    goto L145();
  L767():
    goto L177();
  L770():
    goto L178();
  L863():
    dx104 = getTryDispatchBuiltinValue(dr98);
    goto L206(dx104);
  L864():
    facvars1 = force? facvars;
    __36 = ldf `[` in base;
    r583 = dyn __36(r582, facvars1);
    goto L206(r583);
  L865():
    p105 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r585 = dyn data_matrix(p105);
    check L866() else D275();
  L911():
    r691 = dyn abline3[h, v, lty, col](0.0, 0.0, 3.0, "gray");
    check L912() else D314();
  L994():
    dx138 = getTryDispatchBuiltinValue(dr124);
    goto L233(dx138);
  L995():
    show_rs7 = force? show_rs6;
    __47 = ldf `[` in base;
    r785 = dyn __47(rs19, show_rs7);
    goto L233(r785);
  L996():
    y_id11 = force? y_id10;
    checkMissing(y_id11);
    c188 = `is.object`(y_id11);
    if c188 then L997() else L998(y_id11);
  L1030():
    st athat = r839;
    axis2 = ldf axis;
    check L1031() else D377();
  D275():
    deopt 1114 [r585];
  D314():
    deopt 1274 [r691];
  D377():
    deopt 1534 [];
  L234(dx141):
    strheight1 = ldf strheight;
    check L1001() else D359();
  L866():
    st dm = r585;
    unname = ldf unname;
    check L867() else D276();
  L912():
    one_fig8 = ld `one.fig`;
    check L913() else D315();
  L997():
    dr126 = tryDispatchBuiltin.1("[", y_id11);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L999() else L998(dr126);
  L998(y_id13):
    y_id14 = ld `y.id`;
    check L1000() else D358();
  L1031():
    p176 = prom<V +>{
      athat = ld athat;
      athat1 = force? athat;
      checkMissing(athat1);
      athat2 = ld athat;
      athat3 = force? athat2;
      checkMissing(athat3);
      r840 = `-`(1.0, athat3);
      r841 = `/`(athat1, r840);
      return r841;
    };
    p178 = prom<V +>{
      paste4 = ldf paste;
      p177 = prom<V +>{
        athat4 = ld athat;
        athat5 = force? athat4;
        checkMissing(athat5);
        return athat5;
      };
      r844 = dyn paste4(p177);
      return r844;
    };
    r846 = dyn axis2[, at, labels](1.0, p176, p178);
    check L1032() else D378();
  D276():
    deopt 1117 [];
  D315():
    deopt 1275 [one_fig8];
  D358():
    deopt 1447 [y_id13, y_id14];
  D359():
    deopt 1452 [dx141];
  D378():
    deopt 1540 [r846];
  L867():
    p107 = prom<V +>{
      lengths = ldf lengths;
      p106 = prom<V +>{
        xlev2 = ld xlev;
        xlev3 = force? xlev2;
        checkMissing(xlev3);
        return xlev3;
      };
      r587 = dyn lengths(p106);
      return r587;
    };
    r589 = dyn unname(p107);
    check L868() else D277();
  L913():
    one_fig9 = force? one_fig8;
    checkMissing(one_fig9);
    c173 = `as.logical`(one_fig9);
    if c173 then L914() else L212();
  L999():
    dx140 = getTryDispatchBuiltinValue(dr126);
    goto L234(dx140);
  L1000():
    y_id15 = force? y_id14;
    checkMissing(y_id15);
    r786 = `<`(y_id15, 0.0);
    __48 = ldf `[` in base;
    r787 = dyn __48(y_id13, r786);
    goto L234(r787);
  L1001():
    r788 = dyn strheight1(" ");
    check L1002() else D360();
  L1032():
    one_fig10 = ld `one.fig`;
    check L1033() else D379();
  D277():
    deopt 1119 [r589];
  D360():
    deopt 1454 [dx141, r788];
  D379():
    deopt 1541 [one_fig10];
  L212():
    goto L213();
  L213():
    sym73 = ldf length;
    base73 = ldf length in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L918() else L919();
  L868():
    st nlev = r589;
    nf = ld nf;
    check L869() else D278();
  L914():
    title4 = ldf title;
    check L915() else D316();
  L1002():
    r789 = `/`(r788, 3.0);
    r790 = `-`(dx141, r789);
    l21 = ld `y.id`;
    c189 = `is.object`(l21);
    if c189 then L1003() else L1004(r790, l21);
  L1033():
    one_fig11 = force? one_fig10;
    checkMissing(one_fig11);
    c195 = `as.logical`(one_fig11);
    if c195 then L1034() else L242();
  D278():
    deopt 1121 [nf];
  D316():
    deopt 1278 [];
  L214(r696):
    c174 = `as.logical`(r696);
    if c174 then L922() else L215();
  L235(dx143):
    st `y.id` = dx143;
    text_id4 = ldf `text.id`;
    check L1007() else D362();
  L242():
    goto L243();
  L243():
    x52 = ld x;
    check L1038() else D382();
  L869():
    nf1 = force? nf;
    checkMissing(nf1);
    r590 = `==`(nf1, 1.0);
    c161 = `as.logical`(r590);
    if c161 then L870() else L207();
  L915():
    p135 = prom<V +>{
      sub_caption11 = ld `sub.caption`;
      sub_caption12 = force? sub_caption11;
      checkMissing(sub_caption12);
      return sub_caption12;
    };
    ddd16 = ld `...`;
    r693 = dyn title4[sub, `...`](p135, ddd16);
    check L916() else D317();
  L918():
    cook_levels1 = ld `cook.levels`;
    check L920() else D318();
  L919():
    r695 = dyn base73(<sym cook.levels>);
    goto L214(r695);
  L1003():
    dr128 = tryDispatchBuiltin.0("[<-", l21, r790);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L1005() else L1004(r790, dr128);
  L1004(r792, l23):
    y_id16 = ld `y.id`;
    check L1006() else D361();
  L1034():
    title5 = ldf title;
    check L1035() else D380();
  D317():
    deopt 1282 [r693];
  D318():
    deopt 1287 [cook_levels1];
  D361():
    deopt 1459 [r792, l23, r790, y_id16];
  D362():
    deopt 1466 [];
  D380():
    deopt 1544 [];
  D382():
    deopt 1551 [x52];
  L207():
    rev = ldf rev;
    check L872() else D279();
  L208(r591):
    st ff = r591;
    dm = ld dm;
    check L874() else D281();
  L215():
    goto L230();
  L230():
    dev_flush5 = ldf `dev.flush`;
    check L983() else D349();
  L870():
    goto L208(1.0);
  L916():
    goto L213();
  L920():
    cook_levels2 = force? cook_levels1;
    checkMissing(cook_levels2);
    length4 = ldf length in base;
    r697 = dyn length4(cook_levels2);
    check L921() else D319();
  L922():
    x47 = ld x;
    check L923() else D320();
  L1005():
    dx142 = getTryDispatchBuiltinValue(dr128);
    goto L235(dx142);
  L1006():
    y_id17 = force? y_id16;
    checkMissing(y_id17);
    r795 = `<`(y_id17, 0.0);
    ___6 = ldf `[<-` in base;
    r796 = dyn ___6(l23, r790, r795);
    goto L235(r796);
  L1007():
    p162 = prom<V +>{
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      c190 = `is.object`(xx9);
      if c190 then L1() else L2(xx9);
    L0(dx145):
      return dx145;
    L1():
      dr130 = tryDispatchBuiltin.1("[", xx9);
      dc65 = getTryDispatchBuiltinDispatched(dr130);
      if dc65 then L3() else L2(dr130);
    L2(xx11):
      show_rs8 = ld `show.rs`;
      show_rs9 = force? show_rs8;
      __49 = ldf `[` in base;
      r797 = dyn __49(xx11, show_rs9);
      goto L0(r797);
    L3():
      dx144 = getTryDispatchBuiltinValue(dr130);
      goto L0(dx144);
    };
    p163 = prom<V +>{
      y_id18 = ld `y.id`;
      y_id19 = force? y_id18;
      checkMissing(y_id19);
      return y_id19;
    };
    p164 = prom<V +>{
      show_rs10 = ld `show.rs`;
      show_rs11 = force? show_rs10;
      checkMissing(show_rs11);
      return show_rs11;
    };
    r801 = dyn text_id4(p162, p163, p164);
    check L1008() else D363();
  L1035():
    p179 = prom<V +>{
      sub_caption13 = ld `sub.caption`;
      sub_caption14 = force? sub_caption13;
      checkMissing(sub_caption14);
      return sub_caption14;
    };
    ddd19 = ld `...`;
    r848 = dyn title5[sub, `...`](p179, ddd19);
    check L1036() else D381();
  L1038():
    x53 = force? x52;
    checkMissing(x53);
    c196 = `is.object`(x53);
    if c196 then L1040() else L1041(x53);
  D279():
    deopt 1128 [];
  D281():
    deopt 1133 [dm];
  D319():
    deopt 1290 [r697];
  D320():
    deopt 1291 [x47];
  D349():
    deopt 1423 [];
  D363():
    deopt 1470 [r801];
  D381():
    deopt 1548 [r848];
  L872():
    p108 = prom<V +>{
      sym67 = ldf cumprod;
      base67 = ldf cumprod in base;
      guard67 = `==`.4(sym67, base67);
      if guard67 then L3() else L4();
    L0(r593):
      return r593;
    L3():
      sym68 = ldf c;
      base68 = ldf c in base;
      guard68 = `==`.4(sym68, base68);
      if guard68 then L5() else L6();
    L4():
      r592 = dyn base67(<lang c(1.0, `[`(nlev, `:`(nf, 2.0)))>);
      goto L0(r592);
    L1(r595):
      cumprod = ldf cumprod in base;
      r599 = dyn cumprod(r595);
      goto L0(r599);
    L5():
      nlev = ld nlev;
      nlev1 = force? nlev;
      checkMissing(nlev1);
      c162 = `is.object`(nlev1);
      if c162 then L7() else L8(nlev1);
    L6():
      r594 = dyn base68(1.0, <lang `[`(nlev, `:`(nf, 2.0))>);
      goto L1(r594);
    L2(dx107):
      c163 = ldf c in base;
      r598 = dyn c163(1.0, dx107);
      goto L1(r598);
    L7():
      dr100 = tryDispatchBuiltin.1("[", nlev1);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L9() else L8(dr100);
    L8(nlev3):
      nf2 = ld nf;
      nf3 = force? nf2;
      checkMissing(nf3);
      r596 = `:`(nf3, 2.0);
      __37 = ldf `[` in base;
      r597 = dyn __37(nlev3, r596);
      goto L2(r597);
    L9():
      dx106 = getTryDispatchBuiltinValue(dr100);
      goto L2(dx106);
    };
    r601 = dyn rev(p108);
    check L873() else D280();
  L874():
    dm1 = force? dm;
    checkMissing(dm1);
    r602 = `-`(dm1, 1.0);
    ff = ld ff;
    check L875() else D282();
  L921():
    goto L214(r697);
  L923():
    x48 = force? x47;
    checkMissing(x48);
    c175 = `is.object`(x48);
    if c175 then L925() else L926(x48);
  L983():
    r779 = dyn dev_flush5();
    check L984() else D350();
  L1008():
    goto L236(r801);
  L1036():
    goto L243();
  L1039(dx149):
    st p = dx149;
    pretty1 = ldf pretty;
    check L1043() else D383();
  L1040():
    dr134 = tryDispatchBuiltin.1("$", x53);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L1042() else L1041(dr134);
  L1041(x55):
    r850 = `$`(x55, <sym rank>);
    goto L1039(r850);
  D280():
    deopt 1130 [r601];
  D282():
    deopt 1137 [ff];
  D350():
    deopt 1424 [r779];
  D383():
    deopt 1556 [];
  L873():
    goto L208(r601);
  L875():
    ff1 = force? ff;
    checkMissing(ff1);
    ___4 = ldf `%*%` in base;
    r603 = dyn ___4(r602, ff1);
    check L876() else D283();
  L924(dx131):
    st p = dx131;
    par2 = ldf par;
    check L928() else D321();
  L925():
    dr116 = tryDispatchBuiltin.1("$", x48);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L927() else L926(dr116);
  L926(x50):
    r698 = `$`(x50, <sym rank>);
    goto L924(r698);
  L984():
    goto L210();
  L1042():
    dx148 = getTryDispatchBuiltinValue(dr134);
    goto L1039(dx148);
  L1043():
    p182 = prom<V +>{
      sym90 = ldf sqrt;
      base90 = ldf sqrt in base;
      guard90 = `==`.4(sym90, base90);
      if guard90 then L1() else L2();
    L0(r852):
      return r852;
    L1():
      p180 = ld p;
      p181 = force? p180;
      checkMissing(p181);
      cook26 = ld cook;
      cook27 = force? cook26;
      checkMissing(cook27);
      r853 = `*`(p181, cook27);
      g6 = ld g;
      g7 = force? g6;
      checkMissing(g7);
      r854 = `/`(r853, g7);
      r855 = sqrt(r854);
      goto L0(r855);
    L2():
      r851 = dyn base90(<lang `/`(`*`(p, cook), g)>);
      goto L0(r851);
    };
    r857 = dyn pretty1(p182, 5.0);
    check L1044() else D384();
  D283():
    deopt 1140 [r603];
  D321():
    deopt 1296 [];
  D384():
    deopt 1559 [r857];
  L876():
    st facval = r603;
    facval = ld facval;
    check L877() else D284();
  L927():
    dx130 = getTryDispatchBuiltinValue(dr116);
    goto L924(dx130);
  L928():
    r699 = dyn par2("usr");
    check L929() else D322();
  L1044():
    st bval = r857;
    par3 = ldf par;
    check L1045() else D385();
  D284():
    deopt 1142 [facval];
  D322():
    deopt 1298 [r699];
  D385():
    deopt 1562 [];
  L877():
    facval1 = force? facval;
    checkMissing(facval1);
    st xx = facval1;
    dev_hold5 = ldf `dev.hold`;
    check L878() else D285();
  L929():
    c176 = `is.object`(r699);
    if c176 then L930() else L931(r699);
  L1045():
    r858 = dyn par3("usr");
    check L1046() else D386();
  D285():
    deopt 1146 [];
  D386():
    deopt 1564 [r858];
  L216(dx133):
    st usr2 = dx133;
    sym74 = ldf `seq.int`;
    base74 = ldf `seq.int` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L933() else L934();
  L878():
    r604 = dyn dev_hold5();
    check L879() else D286();
  L930():
    dr118 = tryDispatchBuiltin.1("[", r699);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L932() else L931(dr118);
  L931(r701):
    __44 = ldf `[` in base;
    r702 = dyn __44(r701, 2);
    goto L216(r702);
  L1046():
    st usr = r858;
    usr6 = ld usr;
    check L1047() else D387();
  D286():
    deopt 1147 [r604];
  D387():
    deopt 1566 [usr6];
  L217(r704):
    st hh = r704;
    cook_levels3 = ld `cook.levels`;
    check L948() else D328();
  L879():
    plot3 = ldf plot;
    check L880() else D287();
  L932():
    dx132 = getTryDispatchBuiltinValue(dr118);
    goto L216(dx132);
  L933():
    sym75 = ldf min;
    base75 = ldf min in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L935() else L936();
  L934():
    r703 = dyn base74[, , `length.out`](<lang min(`[`(r.hat, 1), `/`(`[`(r.hat, 2), 100.0))>, <sym usr2>, 101.0);
    goto L217(r703);
  L1047():
    usr7 = force? usr6;
    checkMissing(usr7);
    c197 = `is.object`(usr7);
    if c197 then L1048() else L1049(usr7);
  D287():
    deopt 1149 [];
  D328():
    deopt 1328 [cook_levels3];
  L218(r706):
    usr2 = ld usr2;
    check L946() else D326();
  L244(dx151):
    st xmax = dx151;
    usr10 = ld usr;
    check L1051() else D388();
  L880():
    p109 = prom<V +>{
      facval2 = ld facval;
      facval3 = force? facval2;
      checkMissing(facval3);
      return facval3;
    };
    p110 = prom<V +>{
      rs8 = ld rs;
      rs9 = force? rs8;
      checkMissing(rs9);
      return rs9;
    };
    p111 = prom<V +>{
      sym69 = ldf c;
      base69 = ldf c in base;
      guard69 = `==`.4(sym69, base69);
      if guard69 then L2() else L3();
    L0(r608):
      return r608;
    L2():
      sym70 = ldf sum;
      base70 = ldf sum in base;
      guard70 = `==`.4(sym70, base70);
      if guard70 then L4() else L5();
    L3():
      r607 = dyn base69(<lang `/`(`-`(1.0), 2.0)>, <lang `+`(sum(`*`(`(`(`-`(nlev, 1.0)), ff)), `/`(1.0, 2.0))>);
      goto L0(r607);
    L1(r610):
      r614 = `+`(r610, 0.5);
      c164 = ldf c in base;
      r615 = dyn c164(-0.5, r614);
      goto L0(r615);
    L4():
      nlev4 = ld nlev;
      nlev5 = force? nlev4;
      checkMissing(nlev5);
      r611 = `-`(nlev5, 1.0);
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      r612 = `*`(r611, ff3);
      sum = ldf sum in base;
      r613 = dyn sum(r612);
      goto L1(r613);
    L5():
      r609 = dyn base70(<lang `*`(`(`(`-`(nlev, 1.0)), ff)>);
      goto L1(r609);
    };
    p112 = prom<V +>{
      ylim18 = ld ylim;
      ylim19 = force? ylim18;
      checkMissing(ylim19);
      return ylim19;
    };
    p113 = prom<V +>{
      main11 = ld main;
      main12 = force? main11;
      checkMissing(main12);
      return main12;
    };
    p114 = prom<V +>{
      ylab9 = ld ylab5;
      ylab10 = force? ylab9;
      checkMissing(ylab10);
      return ylab10;
    };
    ddd12 = ld `...`;
    r620 = dyn plot3[, , xlim, ylim, xaxt, main, xlab, ylab, type, `...`](p109, p110, p111, p112, "n", p113, "Factor Level Combinations", p114, "n", ddd12);
    check L881() else D288();
  L935():
    r_hat6 = ld `r.hat`;
    check L937() else D323();
  L936():
    r705 = dyn base75(<lang `[`(r.hat, 1)>, <lang `/`(`[`(r.hat, 2), 100.0)>);
    goto L218(r705);
  L948():
    cook_levels4 = force? cook_levels3;
    checkMissing(cook_levels4);
    s5 = toForSeq(cook_levels4);
    l20 = length(s5);
    i = 0;
    goto L221(i);
  L1048():
    dr136 = tryDispatchBuiltin.1("[", usr7);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L1050() else L1049(dr136);
  L1049(usr9):
    __51 = ldf `[` in base;
    r859 = dyn __51(usr9, 2);
    goto L244(r859);
  D288():
    deopt 1167 [r620];
  D323():
    deopt 1307 [r_hat6];
  D326():
    deopt 1321 [usr2];
  D388():
    deopt 1572 [usr10];
  L221(i1):
    i2 = `+`.1(i1, 1);
    c179 = `<`.1(l20, i2);
    if c179 then L949() else L223();
  L881():
    axis = ldf axis;
    check L882() else D289();
  L937():
    r_hat7 = force? r_hat6;
    checkMissing(r_hat7);
    c177 = `is.object`(r_hat7);
    if c177 then L938() else L939(r_hat7);
  L946():
    usr3 = force? usr2;
    checkMissing(usr3);
    seq_int = ldf `seq.int` in base;
    r711 = dyn seq_int(r706, usr3, 101.0);
    check L947() else D327();
  L1050():
    dx150 = getTryDispatchBuiltinValue(dr136);
    goto L244(dx150);
  L1051():
    usr11 = force? usr10;
    checkMissing(usr11);
    c198 = `is.object`(usr11);
    if c198 then L1052() else L1053(usr11);
  D289():
    deopt 1169 [];
  D327():
    deopt 1326 [r711];
  L219(dx135):
    r_hat10 = ld `r.hat`;
    check L941() else D324();
  L223():
    x51 = `[[`(s5, i2, NULL, TRUE);
    st crit = x51;
    sym76 = ldf sqrt;
    base76 = ldf sqrt in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L950() else L951();
  L245(dx153):
    st ymax = dx153;
    sym91 = ldf seq_along;
    base91 = ldf seq_along in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1055() else L1056();
  L882():
    p115 = prom<V +>{
      ff4 = ld ff;
      ff5 = force? ff4;
      checkMissing(ff5);
      c165 = `is.object`(ff5);
      if c165 then L2() else L3(ff5);
    L0(dx109):
      nlev6 = ld nlev;
      nlev7 = force? nlev6;
      checkMissing(nlev7);
      c166 = `is.object`(nlev7);
      if c166 then L5() else L6(dx109, 1, nlev7);
    L2():
      dr102 = tryDispatchBuiltin.1("[", ff5);
      dc51 = getTryDispatchBuiltinDispatched(dr102);
      if dc51 then L4() else L3(dr102);
    L3(ff7):
      __38 = ldf `[` in base;
      r621 = dyn __38(ff7, 1);
      goto L0(r621);
    L1(dx114, r625, dx115):
      r627 = `:`(r625, dx115);
      r628 = `-`(r627, 0.5);
      r629 = `*`(dx114, r628);
      r630 = `-`(r629, 0.5);
      return r630;
    L4():
      dx108 = getTryDispatchBuiltinValue(dr102);
      goto L0(dx108);
    L5():
      dr104 = tryDispatchBuiltin.1("[", nlev7);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L7() else L6(dx109, 1, dr104);
    L6(dx111, r623, nlev9):
      __39 = ldf `[` in base;
      r626 = dyn __39(nlev9, 1);
      goto L1(dx111, r623, r626);
    L7():
      dx113 = getTryDispatchBuiltinValue(dr104);
      goto L1(dx109, 1, dx113);
    };
    p116 = prom<V +>{
      xlev4 = ld xlev;
      xlev5 = force? xlev4;
      checkMissing(xlev5);
      c167 = `is.object`(xlev5);
      if c167 then L1() else L2(xlev5);
    L0(dx117):
      return dx117;
    L1():
      dr106 = tryDispatchBuiltin.1("[[", xlev5);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L3() else L2(dr106);
    L2(xlev7):
      __40 = ldf `[[` in base;
      r632 = dyn __40(xlev7, 1);
      goto L0(r632);
    L3():
      dx116 = getTryDispatchBuiltinValue(dr106);
      goto L0(dx116);
    };
    r634 = dyn axis[, at, labels](1.0, p115, p116);
    check L883() else D290();
  L938():
    dr120 = tryDispatchBuiltin.1("[", r_hat7);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L940() else L939(dr120);
  L939(r_hat9):
    __45 = ldf `[` in base;
    r707 = dyn __45(r_hat9, 1);
    goto L219(r707);
  L947():
    goto L217(r711);
  L949():
    sym77 = ldf `is.null`;
    base77 = ldf `is.null` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L960() else L961();
  L1052():
    dr138 = tryDispatchBuiltin.1("[", usr11);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L1054() else L1053(dr138);
  L1053(usr13):
    __52 = ldf `[` in base;
    r860 = dyn __52(usr13, 4);
    goto L245(r860);
  D290():
    deopt 1175 [r634];
  D324():
    deopt 1312 [r_hat10];
  L222(i7, r713):
    st `cl.h` = r713;
    lines = ldf lines;
    check L956() else D333();
  L224(r731):
    r732 = `!`(r731);
    c181 = `as.logical`(r732);
    if c181 then L963() else L225();
  L246(r862):
    s6 = toForSeq(r862);
    l24 = length(s6);
    i8 = 0;
    goto L247(i8);
  L883():
    mtext4 = ldf mtext;
    check L884() else D291();
  L940():
    dx134 = getTryDispatchBuiltinValue(dr120);
    goto L219(dx134);
  L941():
    r_hat11 = force? r_hat10;
    checkMissing(r_hat11);
    c178 = `is.object`(r_hat11);
    if c178 then L942() else L943(r_hat11);
  L950():
    crit = ld crit;
    check L952() else D329();
  L951():
    r712 = dyn base76(<lang `/`(`*`(`*`(crit, p), `(`(`-`(1.0, hh))), hh)>);
    goto L222(i2, r712);
  L960():
    cook_legendChanges1 = ld `cook.legendChanges`;
    check L962() else D337();
  L961():
    r730 = dyn base77(<sym cook.legendChanges>);
    goto L224(r730);
  L1054():
    dx152 = getTryDispatchBuiltinValue(dr138);
    goto L245(dx152);
  L1055():
    bval = ld bval;
    check L1057() else D389();
  L1056():
    r861 = dyn base91(<sym bval>);
    goto L246(r861);
  D291():
    deopt 1177 [];
  D329():
    deopt 1331 [i2, crit];
  D333():
    deopt 1344 [i7];
  D337():
    deopt 1365 [cook_legendChanges1];
  D389():
    deopt 1579 [bval];
  L220(dx137):
    r709 = `/`(dx137, 100.0);
    min1 = ldf min in base;
    r710 = dyn min1(dx135, r709);
    check L945() else D325();
  L225():
    goto L226();
  L226():
    sym79 = ldf min;
    base79 = ldf min in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L967() else L968();
  L247(i9):
    i10 = `+`.1(i9, 1);
    c199 = `<`.1(l24, i10);
    if c199 then L1058() else L251();
  L884():
    p118 = prom<V +>{
      paste2 = ldf paste;
      p117 = prom<V +>{
        facvars2 = ld facvars;
        facvars3 = force? facvars2;
        checkMissing(facvars3);
        c168 = `is.object`(facvars3);
        if c168 then L1() else L2(facvars3);
      L0(dx119):
        return dx119;
      L1():
        dr108 = tryDispatchBuiltin.1("[", facvars3);
        dc54 = getTryDispatchBuiltinDispatched(dr108);
        if dc54 then L3() else L2(dr108);
      L2(facvars5):
        __41 = ldf `[` in base;
        r635 = dyn __41(facvars5, 1);
        goto L0(r635);
      L3():
        dx118 = getTryDispatchBuiltinValue(dr108);
        goto L0(dx118);
      };
      r637 = dyn paste2(p117, ":");
      return r637;
    };
    p119 = prom<V +>{
      return -0.05;
    };
    r640 = dyn mtext4[, side, line, adj](p118, 1.0, 0.25, p119);
    check L885() else D292();
  L942():
    dr122 = tryDispatchBuiltin.1("[", r_hat11);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L944() else L943(dr122);
  L943(r_hat13):
    __46 = ldf `[` in base;
    r708 = dyn __46(r_hat13, 2);
    goto L220(r708);
  L952():
    crit1 = force? crit;
    checkMissing(crit1);
    p136 = ld p;
    check L953() else D330();
  L956():
    p138 = prom<V +>{
      hh4 = ld hh;
      hh5 = force? hh4;
      checkMissing(hh5);
      return hh5;
    };
    p139 = prom<V +>{
      cl_h = ld `cl.h`;
      cl_h1 = force? cl_h;
      checkMissing(cl_h1);
      return cl_h1;
    };
    p140 = prom<V +>{
      cook_lty1 = ld `cook.lty`;
      cook_lty2 = force? cook_lty1;
      checkMissing(cook_lty2);
      return cook_lty2;
    };
    p141 = prom<V +>{
      cook_col1 = ld `cook.col`;
      cook_col2 = force? cook_col1;
      checkMissing(cook_col2);
      return cook_col2;
    };
    r723 = dyn lines[, , lty, col](p138, p139, p140, p141);
    check L957() else D334();
  L962():
    cook_legendChanges2 = force? cook_legendChanges1;
    checkMissing(cook_legendChanges2);
    c180 = `==`(cook_legendChanges2, NULL);
    goto L224(c180);
  L963():
    do_call = ldf `do.call`;
    check L964() else D338();
  L1057():
    bval1 = force? bval;
    checkMissing(bval1);
    r863 = seq_along(bval1);
    goto L246(r863);
  D292():
    deopt 1185 [r640];
  D325():
    deopt 1320 [r710];
  D330():
    deopt 1332 [i2, crit1, p136];
  D334():
    deopt 1351 [i7, r723];
  D338():
    deopt 1370 [];
  L227(r744):
    st xmax = r744;
    sym80 = ldf sqrt;
    base80 = ldf sqrt in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L971() else L972();
  L251():
    x56 = `[[`(s6, i10, NULL, TRUE);
    st i = x56;
    bval2 = ld bval;
    check L1059() else D390();
  L885():
    abline1 = ldf abline;
    check L886() else D293();
  L944():
    dx136 = getTryDispatchBuiltinValue(dr122);
    goto L220(dx136);
  L945():
    goto L218(r710);
  L953():
    p137 = force? p136;
    checkMissing(p137);
    r714 = `*`(crit1, p137);
    hh = ld hh;
    check L954() else D331();
  L957():
    lines1 = ldf lines;
    check L958() else D335();
  L964():
    p146 = prom<V +>{
      legend = ld legend;
      legend1 = force? legend;
      checkMissing(legend1);
      return legend1;
    };
    p149 = prom<V +>{
      modifyList = ldf modifyList;
      p147 = prom<V +>{
        sym78 = ldf list;
        base78 = ldf list in base;
        guard78 = `==`.4(sym78, base78);
        if guard78 then L1() else L2();
      L0(r735):
        return r735;
      L1():
        cook_lty5 = ld `cook.lty`;
        cook_lty6 = force? cook_lty5;
        checkMissing(cook_lty6);
        cook_col5 = ld `cook.col`;
        cook_col6 = force? cook_col5;
        checkMissing(cook_col6);
        cook_col7 = ld `cook.col`;
        cook_col8 = force? cook_col7;
        checkMissing(cook_col8);
        list2 = ldf list in base;
        r736 = dyn list2("bottomleft", "Cook's distance", cook_lty6, cook_col6, cook_col8, "n", 0.25, 0.125);
        goto L0(r736);
      L2():
        r734 = dyn base78[x, legend, lty, col, `text.col`, bty, `x.intersp`, `y.intersp`]("bottomleft", "Cook's distance", <sym cook.lty>, <sym cook.col>, <sym cook.col>, "n", <lang `/`(1.0, 4.0)>, <lang `/`(1.0, 8.0)>);
        goto L0(r734);
      };
      p148 = prom<V +>{
        cook_legendChanges3 = ld `cook.legendChanges`;
        cook_legendChanges4 = force? cook_legendChanges3;
        checkMissing(cook_legendChanges4);
        return cook_legendChanges4;
      };
      r739 = dyn modifyList(p147, p148);
      return r739;
    };
    r741 = dyn do_call(p146, p149);
    check L965() else D339();
  L967():
    usr4 = ld usr2;
    check L969() else D340();
  L968():
    r743 = dyn base79(0.99, <sym usr2>);
    goto L227(r743);
  L1058():
    mtext6 = ldf mtext;
    check L1090() else D416();
  D293():
    deopt 1187 [];
  D331():
    deopt 1335 [i2, r714, 1.0, hh];
  D335():
    deopt 1353 [i7];
  D339():
    deopt 1373 [r741];
  D340():
    deopt 1379 [usr4];
  D390():
    deopt 1582 [i10, bval2];
  D416():
    deopt 1668 [];
  L228(r747):
    st ymult = r747;
    sym81 = ldf sqrt;
    base81 = ldf sqrt in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L976() else L977();
  L886():
    p120 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      c169 = `is.object`(ff9);
      if c169 then L2() else L3(ff9);
    L0(dx121):
      nlev10 = ld nlev;
      nlev11 = force? nlev10;
      checkMissing(nlev11);
      c170 = `is.object`(nlev11);
      if c170 then L5() else L6(dx121, 0.0, nlev11);
    L2():
      dr110 = tryDispatchBuiltin.1("[", ff9);
      dc55 = getTryDispatchBuiltinDispatched(dr110);
      if dc55 then L4() else L3(dr110);
    L3(ff11):
      __42 = ldf `[` in base;
      r641 = dyn __42(ff11, 1);
      goto L0(r641);
    L1(dx126, r645, dx127):
      r647 = `:`(r645, dx127);
      r648 = `*`(dx126, r647);
      r649 = `-`(r648, 0.5);
      return r649;
    L4():
      dx120 = getTryDispatchBuiltinValue(dr110);
      goto L0(dx120);
    L5():
      dr112 = tryDispatchBuiltin.1("[", nlev11);
      dc56 = getTryDispatchBuiltinDispatched(dr112);
      if dc56 then L7() else L6(dx121, 0.0, dr112);
    L6(dx123, r643, nlev13):
      __43 = ldf `[` in base;
      r646 = dyn __43(nlev13, 1);
      goto L1(dx123, r643, r646);
    L7():
      dx125 = getTryDispatchBuiltinValue(dr112);
      goto L1(dx121, 0.0, dx125);
    };
    r651 = dyn abline1[v, col, lty](p120, "gray", "F4");
    check L887() else D294();
  L954():
    hh1 = force? hh;
    checkMissing(hh1);
    r715 = `-`(1.0, hh1);
    r716 = `*`(r714, r715);
    hh2 = ld hh;
    check L955() else D332();
  L958():
    p142 = prom<V +>{
      hh6 = ld hh;
      hh7 = force? hh6;
      checkMissing(hh7);
      return hh7;
    };
    p143 = prom<V +>{
      cl_h2 = ld `cl.h`;
      cl_h3 = force? cl_h2;
      checkMissing(cl_h3);
      r725 = `-`(<missing>, cl_h3);
      return r725;
    };
    p144 = prom<V +>{
      cook_lty3 = ld `cook.lty`;
      cook_lty4 = force? cook_lty3;
      checkMissing(cook_lty4);
      return cook_lty4;
    };
    p145 = prom<V +>{
      cook_col3 = ld `cook.col`;
      cook_col4 = force? cook_col3;
      checkMissing(cook_col4);
      return cook_col4;
    };
    r729 = dyn lines1[, , lty, col](p142, p143, p144, p145);
    check L959() else D336();
  L965():
    goto L226();
  L969():
    usr5 = force? usr4;
    checkMissing(usr5);
    min2 = ldf min in base;
    r745 = dyn min2(0.99, usr5);
    check L970() else D341();
  L971():
    p150 = ld p;
    check L973() else D342();
  L972():
    r746 = dyn base80(<lang `/`(`*`(p, `(`(`-`(1.0, xmax))), xmax)>);
    goto L228(r746);
  L1059():
    bval3 = force? bval2;
    checkMissing(bval3);
    c200 = `is.object`(bval3);
    if c200 then L1060() else L1061(i10, bval3);
  L1090():
    p202 = prom<V +>{
      getCaption5 = ldf getCaption;
      r910 = dyn getCaption5(6.0);
      return r910;
    };
    p203 = prom<V +>{
      cex_caption11 = ld `cex.caption`;
      cex_caption12 = force? cex_caption11;
      checkMissing(cex_caption12);
      return cex_caption12;
    };
    r913 = dyn mtext6[, , , cex](p202, 3.0, 0.25, p203);
    check L1091() else D417();
  D294():
    deopt 1194 [r651];
  D332():
    deopt 1338 [i2, r716, hh2];
  D336():
    deopt 1360 [i7, r729];
  D341():
    deopt 1382 [r745];
  D342():
    deopt 1385 [p150];
  D417():
    deopt 1674 [r913];
  L229(r753):
    ymult = ld ymult;
    check L979() else D346();
  L248(i16, dx155):
    r865 = `^`(dx155, 2.0);
    st bi2 = r865;
    p183 = ld p;
    check L1064() else D392();
  L887():
    panel3 = ldf panel;
    check L888() else D295();
  L955():
    hh3 = force? hh2;
    checkMissing(hh3);
    r717 = `/`(r716, hh3);
    r718 = sqrt(r717);
    goto L222(i2, r718);
  L959():
    goto L221(i7);
  L970():
    goto L227(r745);
  L973():
    p151 = force? p150;
    checkMissing(p151);
    xmax = ld xmax;
    check L974() else D343();
  L976():
    cook_levels5 = ld `cook.levels`;
    check L978() else D345();
  L977():
    r752 = dyn base81(<sym cook.levels>);
    goto L229(r752);
  L1060():
    dr140 = tryDispatchBuiltin.1("[", bval3);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L1062() else L1061(i10, dr140);
  L1061(i14, bval5):
    i17 = ld i;
    check L1063() else D391();
  L1091():
    id_n29 = ld `id.n`;
    check L1092() else D418();
  D295():
    deopt 1196 [];
  D343():
    deopt 1387 [p151, 1.0, xmax];
  D345():
    deopt 1396 [cook_levels5];
  D346():
    deopt 1398 [r753, ymult];
  D391():
    deopt 1584 [i14, bval5, i17];
  D392():
    deopt 1590 [i16, p183];
  D418():
    deopt 1675 [id_n29];
  L888():
    p121 = prom<V +>{
      facval4 = ld facval;
      facval5 = force? facval4;
      checkMissing(facval5);
      return facval5;
    };
    p122 = prom<V +>{
      rs10 = ld rs;
      rs11 = force? rs10;
      checkMissing(rs11);
      return rs11;
    };
    ddd13 = ld `...`;
    r654 = dyn panel3[, , `...`](p121, p122, ddd13);
    check L889() else D296();
  L974():
    xmax1 = force? xmax;
    checkMissing(xmax1);
    r748 = `-`(1.0, xmax1);
    r749 = `*`(p151, r748);
    xmax2 = ld xmax;
    check L975() else D344();
  L978():
    cook_levels6 = force? cook_levels5;
    checkMissing(cook_levels6);
    r754 = sqrt(cook_levels6);
    goto L229(r754);
  L979():
    ymult1 = force? ymult;
    checkMissing(ymult1);
    r755 = `*`(r753, ymult1);
    st aty = r755;
    axis1 = ldf axis;
    check L980() else D347();
  L1062():
    dx154 = getTryDispatchBuiltinValue(dr140);
    goto L248(i10, dx154);
  L1063():
    i18 = force? i17;
    __53 = ldf `[` in base;
    r864 = dyn __53(bval5, i18);
    goto L248(i14, r864);
  L1064():
    p184 = force? p183;
    checkMissing(p184);
    ymax = ld ymax;
    check L1065() else D393();
  L1092():
    id_n30 = force? id_n29;
    checkMissing(id_n30);
    r914 = `>`(id_n30, 0.0);
    c206 = `as.logical`(r914);
    if c206 then L1093() else L252();
  D296():
    deopt 1200 [r654];
  D344():
    deopt 1390 [r749, xmax2];
  D347():
    deopt 1403 [];
  D393():
    deopt 1591 [i16, p184, ymax];
  L252():
    goto L254();
  L254():
    dev_flush6 = ldf `dev.flush`;
    check L1103() else D424();
  L889():
    abline2 = ldf abline;
    check L890() else D297();
  L975():
    xmax3 = force? xmax2;
    checkMissing(xmax3);
    r750 = `/`(r749, xmax3);
    r751 = sqrt(r750);
    goto L228(r751);
  L980():
    p153 = prom<V +>{
      sym82 = ldf c;
      base82 = ldf c in base;
      guard82 = `==`.4(sym82, base82);
      if guard82 then L1() else L2();
    L0(r757):
      return r757;
    L1():
      rev1 = ldf rev;
      p152 = prom<V +>{
        aty = ld aty;
        aty1 = force? aty;
        checkMissing(aty1);
        return aty1;
      };
      r759 = dyn rev1(p152);
      r760 = `-`(<missing>, r759);
      aty2 = ld aty;
      aty3 = force? aty2;
      checkMissing(aty3);
      c182 = ldf c in base;
      r761 = dyn c182(r760, aty3);
      goto L0(r761);
    L2():
      r756 = dyn base82(<lang `-`(rev(aty))>, <sym aty>);
      goto L0(r756);
    };
    p156 = prom<V +>{
      paste3 = ldf paste;
      p155 = prom<V +>{
        sym83 = ldf c;
        base83 = ldf c in base;
        guard83 = `==`.4(sym83, base83);
        if guard83 then L1() else L2();
      L0(r764):
        return r764;
      L1():
        rev2 = ldf rev;
        p154 = prom<V +>{
          cook_levels7 = ld `cook.levels`;
          cook_levels8 = force? cook_levels7;
          checkMissing(cook_levels8);
          return cook_levels8;
        };
        r766 = dyn rev2(p154);
        cook_levels9 = ld `cook.levels`;
        cook_levels10 = force? cook_levels9;
        checkMissing(cook_levels10);
        c183 = ldf c in base;
        r767 = dyn c183(r766, cook_levels10);
        goto L0(r767);
      L2():
        r763 = dyn base83(<lang rev(cook.levels)>, <sym cook.levels>);
        goto L0(r763);
      };
      r769 = dyn paste3(p155);
      return r769;
    };
    p157 = prom<V +>{
      sym84 = ldf c;
      base84 = ldf c in base;
      guard84 = `==`.4(sym84, base84);
      if guard84 then L1() else L2();
    L0(r772):
      return r772;
    L1():
      c184 = ldf c in base;
      r773 = dyn c184(0.25, 0.25, 0.0);
      goto L0(r773);
    L2():
      r771 = dyn base84(0.25, 0.25, 0.0);
      goto L0(r771);
    };
    p158 = prom<V +>{
      cex_id1 = ld `cex.id`;
      cex_id2 = force? cex_id1;
      checkMissing(cex_id2);
      return cex_id2;
    };
    p159 = prom<V +>{
      cook_col9 = ld `cook.col`;
      cook_col10 = force? cook_col9;
      checkMissing(cook_col10);
      return cook_col10;
    };
    r777 = dyn axis1[, at, labels, mgp, las, tck, `cex.axis`, `col.axis`](4.0, p153, p156, p157, 2.0, 0.0, p158, p159);
    check L981() else D348();
  L1065():
    ymax1 = force? ymax;
    checkMissing(ymax1);
    r866 = `*`(p184, ymax1);
    bi2 = ld bi2;
    check L1066() else D394();
  L1093():
    order2 = ldf order;
    check L1094() else D419();
  D297():
    deopt 1202 [];
  D348():
    deopt 1419 [r777];
  D394():
    deopt 1593 [i16, r866, bi2];
  D419():
    deopt 1680 [];
  D424():
    deopt 1698 [];
  L890():
    r655 = dyn abline2[h, lty, col](0.0, 3.0, "gray");
    check L891() else D298();
  L981():
    goto L230();
  L1066():
    bi3 = force? bi2;
    checkMissing(bi3);
    xmax4 = ld xmax;
    check L1067() else D395();
  L1094():
    p204 = prom<V +>{
      cook28 = ld cook;
      cook29 = force? cook28;
      checkMissing(cook29);
      r915 = `-`(<missing>, cook29);
      return r915;
    };
    r917 = dyn order2(p204);
    check L1095() else D420();
  L1103():
    r929 = dyn dev_flush6();
    check L1104() else D425();
  D298():
    deopt 1209 [r655];
  D395():
    deopt 1594 [i16, r866, bi3, xmax4];
  D420():
    deopt 1682 [r917];
  D425():
    deopt 1699 [r929];
  L891():
    dev_flush4 = ldf `dev.flush`;
    check L892() else D299();
  L1067():
    xmax5 = force? xmax4;
    checkMissing(xmax5);
    r867 = `*`(bi3, xmax5);
    r868 = `>`(r866, r867);
    c201 = `as.logical`(r868);
    if c201 then L1068() else L249();
  L1095():
    c207 = `is.object`(r917);
    if c207 then L1096() else L1097(r917);
  L1104():
    goto L255();
  D299():
    deopt 1211 [];
  L249():
    ymax2 = ld ymax;
    check L1080() else D406();
  L250(i23):
    goto L247(i23);
  L253(dx161):
    st `show.r` = dx161;
    text_id5 = ldf `text.id`;
    check L1100() else D422();
  L892():
    r656 = dyn dev_flush4();
    check L893() else D300();
  L1068():
    xmax6 = ld xmax;
    check L1069() else D396();
  L1096():
    dr146 = tryDispatchBuiltin.1("[", r917);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L1098() else L1097(dr146);
  L1097(r919):
    iid10 = ld iid;
    check L1099() else D421();
  D300():
    deopt 1212 [r656];
  D396():
    deopt 1598 [i16, xmax6];
  D406():
    deopt 1631 [i16, ymax2];
  D421():
    deopt 1683 [r919, iid10];
  D422():
    deopt 1688 [];
  L893():
    goto L209(r656);
  L1069():
    xmax7 = force? xmax6;
    checkMissing(xmax7);
    strwidth = ldf strwidth;
    check L1070() else D397();
  L1080():
    ymax3 = force? ymax2;
    checkMissing(ymax3);
    strheight2 = ldf strheight;
    check L1081() else D407();
  L1098():
    dx160 = getTryDispatchBuiltinValue(dr146);
    goto L253(dx160);
  L1099():
    iid11 = force? iid10;
    __56 = ldf `[` in base;
    r920 = dyn __56(r919, iid11);
    goto L253(r920);
  L1100():
    p205 = prom<V +>{
      g8 = ld g;
      g9 = force? g8;
      checkMissing(g9);
      c208 = `is.object`(g9);
      if c208 then L1() else L2(g9);
    L0(dx163):
      return dx163;
    L1():
      dr148 = tryDispatchBuiltin.1("[", g9);
      dc74 = getTryDispatchBuiltinDispatched(dr148);
      if dc74 then L3() else L2(dr148);
    L2(g11):
      show_r16 = ld `show.r`;
      show_r17 = force? show_r16;
      __57 = ldf `[` in base;
      r921 = dyn __57(g11, show_r17);
      goto L0(r921);
    L3():
      dx162 = getTryDispatchBuiltinValue(dr148);
      goto L0(dx162);
    };
    p206 = prom<V +>{
      cook30 = ld cook;
      cook31 = force? cook30;
      checkMissing(cook31);
      c209 = `is.object`(cook31);
      if c209 then L1() else L2(cook31);
    L0(dx165):
      return dx165;
    L1():
      dr150 = tryDispatchBuiltin.1("[", cook31);
      dc75 = getTryDispatchBuiltinDispatched(dr150);
      if dc75 then L3() else L2(dr150);
    L2(cook33):
      show_r18 = ld `show.r`;
      show_r19 = force? show_r18;
      __58 = ldf `[` in base;
      r923 = dyn __58(cook33, show_r19);
      goto L0(r923);
    L3():
      dx164 = getTryDispatchBuiltinValue(dr150);
      goto L0(dx164);
    };
    p207 = prom<V +>{
      show_r20 = ld `show.r`;
      show_r21 = force? show_r20;
      checkMissing(show_r21);
      return show_r21;
    };
    p208 = prom<V +>{
      usr14 = ld usr;
      usr15 = force? usr14;
      checkMissing(usr15);
      return usr15;
    };
    r927 = dyn text_id5[, , , usr](p205, p206, p207, p208);
    check L1101() else D423();
  D397():
    deopt 1600 [i16, xmax7];
  D407():
    deopt 1634 [i16, ymax3, 1.5];
  D423():
    deopt 1694 [r927];
  L1070():
    r869 = dyn strwidth(" ");
    check L1071() else D398();
  L1081():
    r885 = dyn strheight2(" ");
    check L1082() else D408();
  L1101():
    goto L254();
  D398():
    deopt 1602 [i16, xmax7, r869];
  D408():
    deopt 1636 [i16, ymax3, 1.5, r885];
  L1071():
    r870 = `/`(r869, 3.0);
    r871 = `+`(xmax7, r870);
    st xi = r871;
    bi4 = ld bi2;
    check L1072() else D399();
  L1082():
    r886 = `*`(1.5, r885);
    r887 = `-`(ymax3, r886);
    st yi = r887;
    p193 = ld p;
    check L1083() else D409();
  D399():
    deopt 1607 [i16, bi4];
  D409():
    deopt 1640 [i16, p193];
  L1072():
    bi5 = force? bi4;
    checkMissing(bi5);
    xi = ld xi;
    check L1073() else D400();
  L1083():
    p194 = force? p193;
    checkMissing(p194);
    yi2 = ld yi;
    check L1084() else D410();
  D400():
    deopt 1608 [i16, bi5, xi];
  D410():
    deopt 1641 [i16, p194, yi2];
  L1073():
    xi1 = force? xi;
    checkMissing(xi1);
    r872 = `*`(bi5, xi1);
    p185 = ld p;
    check L1074() else D401();
  L1084():
    yi3 = force? yi2;
    checkMissing(yi3);
    r888 = `*`(p194, yi3);
    bi8 = ld bi2;
    check L1085() else D411();
  D401():
    deopt 1610 [i16, r872, p185];
  D411():
    deopt 1643 [i16, r888, bi8];
  L1074():
    p186 = force? p185;
    checkMissing(p186);
    r873 = `/`(r872, p186);
    st yi = r873;
    abline4 = ldf abline;
    check L1075() else D402();
  L1085():
    bi9 = force? bi8;
    checkMissing(bi9);
    r889 = `/`(r888, bi9);
    st xi = r889;
    lines2 = ldf lines;
    check L1086() else D412();
  D402():
    deopt 1615 [i16];
  D412():
    deopt 1648 [i16];
  L1075():
    p187 = prom<V +>{
      bi6 = ld bi2;
      bi7 = force? bi6;
      checkMissing(bi7);
      return bi7;
    };
    p188 = prom<V +>{
      cook_lty7 = ld `cook.lty`;
      cook_lty8 = force? cook_lty7;
      checkMissing(cook_lty8);
      return cook_lty8;
    };
    r876 = dyn abline4[, , lty](0.0, p187, p188);
    check L1076() else D403();
  L1086():
    p195 = prom<V +>{
      sym92 = ldf c;
      base92 = ldf c in base;
      guard92 = `==`.4(sym92, base92);
      if guard92 then L1() else L2();
    L0(r891):
      return r891;
    L1():
      xi4 = ld xi;
      xi5 = force? xi4;
      checkMissing(xi5);
      c203 = ldf c in base;
      r892 = dyn c203(0.0, xi5);
      goto L0(r892);
    L2():
      r890 = dyn base92(0.0, <sym xi>);
      goto L0(r890);
    };
    p196 = prom<V +>{
      sym93 = ldf c;
      base93 = ldf c in base;
      guard93 = `==`.4(sym93, base93);
      if guard93 then L1() else L2();
    L0(r895):
      return r895;
    L1():
      yi4 = ld yi;
      yi5 = force? yi4;
      checkMissing(yi5);
      c204 = ldf c in base;
      r896 = dyn c204(0.0, yi5);
      goto L0(r896);
    L2():
      r894 = dyn base93(0.0, <sym yi>);
      goto L0(r894);
    };
    p197 = prom<V +>{
      cook_lty9 = ld `cook.lty`;
      cook_lty10 = force? cook_lty9;
      checkMissing(cook_lty10);
      return cook_lty10;
    };
    r899 = dyn lines2[, , lty](p195, p196, p197);
    check L1087() else D413();
  D403():
    deopt 1620 [i16, r876];
  D413():
    deopt 1653 [i16, r899];
  L1076():
    text = ldf text;
    check L1077() else D404();
  L1087():
    text1 = ldf text;
    check L1088() else D414();
  D404():
    deopt 1622 [i16];
  D414():
    deopt 1655 [i16];
  L1077():
    p189 = prom<V +>{
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      return xi3;
    };
    p190 = prom<V +>{
      yi = ld yi;
      yi1 = force? yi;
      checkMissing(yi1);
      return yi1;
    };
    p192 = prom<V +>{
      paste5 = ldf paste;
      p191 = prom<V +>{
        bval6 = ld bval;
        bval7 = force? bval6;
        checkMissing(bval7);
        c202 = `is.object`(bval7);
        if c202 then L1() else L2(bval7);
      L0(dx157):
        return dx157;
      L1():
        dr142 = tryDispatchBuiltin.1("[", bval7);
        dc71 = getTryDispatchBuiltinDispatched(dr142);
        if dc71 then L3() else L2(dr142);
      L2(bval9):
        i21 = ld i;
        i22 = force? i21;
        __54 = ldf `[` in base;
        r879 = dyn __54(bval9, i22);
        goto L0(r879);
      L3():
        dx156 = getTryDispatchBuiltinValue(dr142);
        goto L0(dx156);
      };
      r881 = dyn paste5(p191);
      return r881;
    };
    r883 = dyn text[, , , adj, xpd](p189, p190, p192, 0.0, TRUE);
    check L1078() else D405();
  L1088():
    p198 = prom<V +>{
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      return xi7;
    };
    p199 = prom<V +>{
      ymax4 = ld ymax;
      ymax5 = force? ymax4;
      checkMissing(ymax5);
      strheight3 = ldf strheight;
      r901 = dyn strheight3(" ");
      r902 = `*`(0.8, r901);
      r903 = `-`(ymax5, r902);
      return r903;
    };
    p201 = prom<V +>{
      paste6 = ldf paste;
      p200 = prom<V +>{
        bval10 = ld bval;
        bval11 = force? bval10;
        checkMissing(bval11);
        c205 = `is.object`(bval11);
        if c205 then L1() else L2(bval11);
      L0(dx159):
        return dx159;
      L1():
        dr144 = tryDispatchBuiltin.1("[", bval11);
        dc72 = getTryDispatchBuiltinDispatched(dr144);
        if dc72 then L3() else L2(dr144);
      L2(bval13):
        i24 = ld i;
        i25 = force? i24;
        __55 = ldf `[` in base;
        r905 = dyn __55(bval13, i25);
        goto L0(r905);
      L3():
        dx158 = getTryDispatchBuiltinValue(dr144);
        goto L0(dx158);
      };
      r907 = dyn paste6(p200);
      return r907;
    };
    r909 = dyn text1[, , , adj, xpd](p198, p199, p201, 0.5, TRUE);
    check L1089() else D415();
  D405():
    deopt 1630 [i16, r883];
  D415():
    deopt 1663 [i16, r909];
  L1078():
    goto L250(i16);
  L1089():
    goto L250(i16);
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg panel_smooth:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg iter_smooth:*, reg iter_smooth1:V, reg p2:p(V +), reg ddd1:dots?, reg r3:V |
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
    p2 = prom<V +>{
      iter_smooth = ld `iter.smooth`;
      iter_smooth1 = force? iter_smooth;
      checkMissing(iter_smooth1);
      return iter_smooth1;
    };
    ddd1 = ld `...`;
    r3 = dyn panel_smooth[, , iter, `...`](p, p1, p2, ddd1);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1653344540(x, h) {
  (reg x:*, reg h:*) -+> V { var x:*, var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg h1:*, reg h2:V, reg r2:V, reg any:cls, reg r3:V, reg c:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg which:cls, reg isInf:*, reg isInf1:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg l:*, reg c1:L, reg r13:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r15:R, reg dx1:V, reg isInf2:*, reg isInf3:V, reg ___:cls, reg r16:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st h = h;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    h1 = ld h;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(isInf, `>=`(h, 1.0))>);
    goto L0(r);
  D0():
    deopt 2 [h1];
  L1():
    goto L3();
  L3():
    x1 = ld x;
    check L16() else D5();
  L6():
    h2 = force? h1;
    checkMissing(h2);
    r2 = `>=`(h2, 1.0);
    st isInf = r2;
    any = ldf any in base;
    r3 = dyn any(r2);
    check L7() else D1();
  L8():
    warning = ldf warning;
    check L9() else D2();
  D1():
    deopt 8 [r3];
  D2():
    deopt 10 [];
  D5():
    deopt 26 [x1];
  L7():
    goto L0(r3);
  L9():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        paste = ldf paste;
        p1 = prom<V +>{
          which = ldf which;
          p = prom<V +>{
            isInf = ld isInf;
            isInf1 = force? isInf;
            checkMissing(isInf1);
            return isInf1;
          };
          r5 = dyn which(p);
          return r5;
        };
        r7 = dyn paste[, collapse](p1, ", ");
        return r7;
      };
      r9 = dyn gettextf("not plotting observations with leverage one:\n  %s", p2);
      return r9;
    };
    r11 = dyn warning[, `call.`, domain](p3, FALSE, NA_LGL);
    check L10() else D3();
  L16():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D3():
    deopt 16 [r11];
  L10():
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L11() else L12(NA_REAL, l);
  L2(r15, dx1):
    st x = dx1;
    goto L3();
  L11():
    dr = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(NA_REAL, dr);
  L12(r13, l2):
    isInf2 = ld isInf;
    check L14() else D4();
  D4():
    deopt 20 [r13, l2, NA_REAL, isInf2];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(NA_REAL, dx);
  L14():
    isInf3 = force? isInf2;
    ___ = ldf `[<-` in base;
    r16 = dyn ___(l2, NA_REAL, isInf3);
    goto L2(r13, r16);
  }
}
fun inner3635890917(x, y, ind, `adj.x`, usr) {
  (reg x:*, reg y:*, reg ind:*, reg adj_x:*, reg usr:*) -+> V { var x:*, var y:*, var ind:*, var `adj.x`:*, reg adj_x_isMissing:L, reg adj_x_orDefault:*, var usr:*, reg usr_isMissing:L, reg usr_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), reg adj_x1:*, reg adj_x2:V, reg c:L, reg label_pos:*, reg label_pos1:V, reg c1:L, reg label_pos3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg mean:cls, reg usr1:*, reg usr2:V, reg c2:L, reg usr4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg r5:V, reg r6:V, reg __1:cls, reg r7:V, reg dx4:V, reg text:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg y1:*, reg y2:V, reg p3:p(V +), reg labels_id:*, reg labels_id1:V, reg c3:L, reg labels_id3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ind1:*, reg ind2:V, reg __2:cls, reg r10:V, reg p4:p(V +), reg cex_id:*, reg cex_id1:V, reg p5:p(V +), reg labpos:*, reg labpos1:V, reg p6:p(V +), reg r14:V |
    mkenv;
    st x = x;
    st y = y;
    st ind = ind;
    adj_x_isMissing = missing.0(adj_x);
    if adj_x_isMissing then L0(TRUE) else L0(adj_x);
  L0(adj_x_orDefault):
    st `adj.x` = adj_x_orDefault;
    usr_isMissing = missing.0(usr);
    if usr_isMissing then L1() else L2(usr);
  L1():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("usr");
      return r;
    };
    goto L2(p);
  L2(usr_orDefault):
    st usr = usr_orDefault;
    adj_x1 = ld `adj.x`;
    check L6() else D0();
  D0():
    deopt 0 [adj_x1];
  L6():
    adj_x2 = force? adj_x1;
    checkMissing(adj_x2);
    c = `as.logical`(adj_x2);
    if c then L7() else L3();
  L3():
    goto L5(3.0);
  L5(dx4):
    st labpos = dx4;
    text = ldf text;
    check L16() else D5();
  L7():
    label_pos = ld `label.pos`;
    check L8() else D1();
  D1():
    deopt 2 [label_pos];
  D5():
    deopt 17 [];
  L8():
    label_pos1 = force? label_pos;
    checkMissing(label_pos1);
    c1 = `is.object`(label_pos1);
    if c1 then L9() else L10(label_pos1);
  L16():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p4 = prom<V +>{
      labels_id = ld `labels.id`;
      labels_id1 = force? labels_id;
      checkMissing(labels_id1);
      c3 = `is.object`(labels_id1);
      if c3 then L1() else L2(labels_id1);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", labels_id1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(labels_id3):
      ind1 = ld ind;
      ind2 = force? ind1;
      __2 = ldf `[` in base;
      r10 = dyn __2(labels_id3, ind2);
      goto L0(r10);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p5 = prom<V +>{
      cex_id = ld `cex.id`;
      cex_id1 = force? cex_id;
      checkMissing(cex_id1);
      return cex_id1;
    };
    p6 = prom<V +>{
      labpos = ld labpos;
      labpos1 = force? labpos;
      checkMissing(labpos1);
      return labpos1;
    };
    r14 = dyn text[, , , cex, xpd, pos, offset](p2, p3, p4, p5, TRUE, p6, 0.25);
    check L17() else D6();
  D6():
    deopt 29 [r14];
  L4(dx1):
    goto L5(dx1);
  L9():
    dr = tryDispatchBuiltin.1("[", label_pos1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(label_pos3):
    x1 = ld x;
    check L12() else D2();
  L17():
    popenv;
    return r14;
  D2():
    deopt 4 [label_pos3, x1];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L12():
    x2 = force? x1;
    checkMissing(x2);
    mean = ldf mean;
    check L13() else D3();
  D3():
    deopt 6 [label_pos3, x2];
  L13():
    p1 = prom<V +>{
      usr1 = ld usr;
      usr2 = force? usr1;
      checkMissing(usr2);
      c2 = `is.object`(usr2);
      if c2 then L1() else L2(usr2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", usr2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(usr4):
      __ = ldf `[` in base;
      r2 = dyn __(usr4, <int 1, 2>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r4 = dyn mean(p1);
    check L14() else D4();
  D4():
    deopt 8 [label_pos3, x2, r4];
  L14():
    r5 = `>`(x2, r4);
    r6 = `+`(r5, 1);
    __1 = ldf `[` in base;
    r7 = dyn __1(label_pos3, r6);
    goto L4(r7);
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg caption:*, reg caption1:V, reg length:cls, reg r2:V, reg k1:*, reg k2:V, reg r3:V, reg c:L, reg as_graphicsAnnot:cls, reg caption2:*, reg caption3:V, reg c1:L, reg caption5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k3:*, reg k4:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    st k = k;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    k1 = ld k;
    check L6() else D2();
  L2():
    caption = ld caption;
    check L4() else D0();
  L3():
    r = dyn base(<sym caption>);
    goto L0(r);
  D0():
    deopt 2 [caption];
  D2():
    deopt 5 [r1, k1];
  L4():
    caption1 = force? caption;
    checkMissing(caption1);
    length = ldf length in base;
    r2 = dyn length(caption1);
    check L5() else D1();
  L6():
    k2 = force? k1;
    checkMissing(k2);
    r3 = `<`(r1, k2);
    c = `as.logical`(r3);
    if c then L7() else L1();
  D1():
    deopt 5 [r2];
  L1():
    as_graphicsAnnot = ldf `as.graphicsAnnot`;
    check L9() else D3();
  L5():
    goto L0(r2);
  L7():
    popenv;
    return NA_STR;
  D3():
    deopt 11 [];
  L9():
    p = prom<V +>{
      caption2 = ld caption;
      caption3 = force? caption2;
      checkMissing(caption3);
      c1 = `is.object`(caption3);
      if c1 then L1() else L2(caption3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", caption3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(caption5):
      k3 = ld k;
      k4 = force? k3;
      __ = ldf `[[` in base;
      r4 = dyn __(caption5, k4);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn as_graphicsAnnot(p);
    check L10() else D4();
  D4():
    deopt 13 [r6];
  L10():
    popenv;
    return r6;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg qnorm:cls, reg p1:*, reg p2:V, reg r:V, reg r1:V, reg p3:p(V +), reg r3:V |
    mkenv;
    st p = p;
    qnorm = ldf qnorm;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      r = `+`(p2, 1.0);
      r1 = `/`(r, 2.0);
      return r1;
    };
    r3 = dyn qnorm(p3);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner4206773453(y, xlab, `...`) {
  (reg y:*, reg xlab:*, reg ddd:dots) -+> V { var y:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg y1:*, reg y2:V, reg is_na:cls, reg r4:V, reg any:cls, reg r5:V, reg c:L, reg y3:*, reg y4:V, reg y5:*, reg y6:V, reg c1:L, reg y8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ina:*, reg ina1:V, reg r6:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:R, reg r12:V, reg y9:*, reg y10:V, reg length:cls, reg r13:V, reg r14:V, reg c2:L, reg stop:cls, reg r15:V, reg qhalfnorm:cls, reg ppoints:cls, reg n:*, reg n1:V, reg p:p(V +), reg r18:V, reg p1:p(V +), reg r20:V, reg c3:L, reg r22:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg order:cls, reg order1:cls, reg y11:*, reg y12:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg r26:V, reg __1:cls, reg r27:V, reg has_na:*, reg has_na1:V, reg c4:L, reg x:*, reg x1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg ina2:*, reg ina3:V, reg length1:cls, reg r32:V, reg rep_int:cls, reg r33:V, reg y13:*, reg y14:V, reg l:*, reg c5:L, reg y16:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ina4:*, reg ina5:V, reg r34:V, reg ___:cls, reg r35:V, reg yN:*, reg yN1:V, reg plot:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg y19:*, reg y20:V, reg p5:p(V +), reg xlab1:*, reg xlab2:V, reg p6:p(V +), reg ddd1:dots?, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg x4:*, reg x5:V, reg y21:*, reg y22:V, reg list:cls, reg r44:V, reg invisible:cls, reg r45:V |
    mkenv;
    st y = y;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L0("Theoretical Quantiles") else L0(xlab);
  L0(xlab_orDefault):
    st xlab = xlab_orDefault;
    st `...` = ddd;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    st `has.na` = r1;
    c = `as.logical`(r1);
    if c then L24() else L3();
  L17():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    r = dyn base(<lang `<-`(ina, is.na(y))>);
    goto L1(r);
  L2(r3):
    st ina = r3;
    any = ldf any in base;
    r5 = dyn any(r3);
    check L23() else D2();
  L3():
    goto L5();
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L19():
    y1 = ld y;
    check L21() else D0();
  L20():
    r2 = dyn base1(<sym y>);
    goto L2(r2);
  L24():
    y3 = ld y;
    check L25() else D3();
  D0():
    deopt 4 [y1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 12 [y3];
  L6(r11, r12):
    st n = r12;
    r14 = `==`(r11, r12);
    c2 = `as.logical`(r14);
    if c2 then L36() else L7();
  L21():
    y2 = force? y1;
    checkMissing(y2);
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(y2);
    check L22() else D1();
  L23():
    goto L1(r5);
  L25():
    y4 = force? y3;
    checkMissing(y4);
    st yN = y4;
    y5 = ld y;
    check L26() else D4();
  L32():
    y9 = ld y;
    check L34() else D6();
  L33():
    r10 = dyn base2(<sym y>);
    goto L6(0.0, r10);
  D1():
    deopt 7 [r4];
  D4():
    deopt 15 [y5];
  D6():
    deopt 27 [0.0, y9];
  L7():
    goto L8();
  L8():
    qhalfnorm = ldf qhalfnorm;
    check L40() else D10();
  L22():
    goto L2(r4);
  L26():
    y6 = force? y5;
    checkMissing(y6);
    c1 = `is.object`(y6);
    if c1 then L27() else L28(y6);
  L34():
    y10 = force? y9;
    checkMissing(y10);
    length = ldf length in base;
    r13 = dyn length(y10);
    check L35() else D7();
  L36():
    stop = ldf stop;
    check L37() else D8();
  D7():
    deopt 30 [0.0, r13];
  D8():
    deopt 34 [];
  D10():
    deopt 40 [];
  L4(dx1):
    st y = dx1;
    goto L5();
  L27():
    dr = tryDispatchBuiltin.1("[", y6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(y8):
    ina = ld ina;
    check L30() else D5();
  L35():
    goto L6(0.0, r13);
  L37():
    r15 = dyn stop("y is empty or has only NAs");
    check L38() else D9();
  L40():
    p1 = prom<V +>{
      ppoints = ldf ppoints;
      p = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        return n1;
      };
      r18 = dyn ppoints(p);
      return r18;
    };
    r20 = dyn qhalfnorm(p1);
    check L41() else D11();
  D5():
    deopt 17 [y8, ina];
  D9():
    deopt 36 [r15];
  D11():
    deopt 42 [r20];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L30():
    ina1 = force? ina;
    checkMissing(ina1);
    r6 = `!`(ina1);
    __ = ldf `[` in base;
    r7 = dyn __(y8, r6);
    goto L4(r7);
  L38():
    goto L8();
  L41():
    c3 = `is.object`(r20);
    if c3 then L42() else L43(r20);
  L9(dx4):
    st x = dx4;
    has_na = ld `has.na`;
    check L47() else D14();
  L42():
    dr2 = tryDispatchBuiltin.1("[", r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(r22):
    order = ldf order;
    check L45() else D12();
  D12():
    deopt 44 [r22];
  D14():
    deopt 49 [has_na];
  L44():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx3);
  L45():
    p3 = prom<V +>{
      order1 = ldf order;
      p2 = prom<V +>{
        y11 = ld y;
        y12 = force? y11;
        checkMissing(y12);
        return y12;
      };
      r24 = dyn order1(p2);
      return r24;
    };
    r26 = dyn order(p3);
    check L46() else D13();
  L47():
    has_na1 = force? has_na;
    checkMissing(has_na1);
    c4 = `as.logical`(has_na1);
    if c4 then L48() else L10();
  D13():
    deopt 46 [r22, r26];
  L10():
    goto L14();
  L14():
    plot = ldf plot;
    check L64() else D22();
  L46():
    __1 = ldf `[` in base;
    r27 = dyn __1(r22, r26);
    goto L9(r27);
  L48():
    x = ld x;
    check L49() else D15();
  D15():
    deopt 51 [x];
  D22():
    deopt 80 [];
  L49():
    x1 = force? x;
    checkMissing(x1);
    st y = x1;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L64():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p5 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    p6 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    ddd1 = ld `...`;
    r39 = dyn plot[, , xlab, `...`](p4, p5, p6, ddd1);
    check L65() else D23();
  D23():
    deopt 86 [r39];
  L11(r29):
    st x = r29;
    y13 = ld y;
    check L57() else D19();
  L50():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L51():
    r28 = dyn base3(NA_REAL, <lang length(ina)>);
    goto L11(r28);
  L65():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  D19():
    deopt 66 [y13];
  L12(r31):
    rep_int = ldf `rep.int` in base;
    r33 = dyn rep_int(NA_REAL, r31);
    check L56() else D18();
  L15(r41):
    popenv;
    return r41;
  L52():
    ina2 = ld ina;
    check L54() else D16();
  L53():
    r30 = dyn base4(<sym ina>);
    goto L12(r30);
  L57():
    y14 = force? y13;
    checkMissing(y14);
    l = ld x;
    c5 = `is.object`(l);
    if c5 then L58() else L59(y14, l);
  L66():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L67():
    r40 = dyn base5(<lang list(x=x, y=y)>);
    goto L15(r40);
  D16():
    deopt 59 [ina2];
  D18():
    deopt 64 [r33];
  L13(dx6):
    st x = dx6;
    yN = ld yN;
    check L62() else D21();
  L16(r43):
    invisible = ldf invisible in base;
    r45 = dyn invisible(r43);
    check L73() else D27();
  L54():
    ina3 = force? ina2;
    checkMissing(ina3);
    length1 = ldf length in base;
    r32 = dyn length1(ina3);
    check L55() else D17();
  L56():
    goto L11(r33);
  L58():
    dr4 = tryDispatchBuiltin.0("[<-", l, y14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(y14, dr4);
  L59(y16, l2):
    ina4 = ld ina;
    check L61() else D20();
  L68():
    x4 = ld x;
    check L70() else D24();
  L69():
    r42 = dyn base6[x, y](<sym x>, <sym y>);
    goto L16(r42);
  D17():
    deopt 62 [r32];
  D20():
    deopt 69 [y16, l2, y14, ina4];
  D21():
    deopt 74 [yN];
  D24():
    deopt 91 [x4];
  D27():
    deopt 100 [r45];
  L55():
    goto L12(r32);
  L60():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx5);
  L61():
    ina5 = force? ina4;
    checkMissing(ina5);
    r34 = `!`(ina5);
    ___ = ldf `[<-` in base;
    r35 = dyn ___(l2, y14, r34);
    goto L13(r35);
  L62():
    yN1 = force? yN;
    checkMissing(yN1);
    st y = yN1;
    goto L14();
  L70():
    x5 = force? x4;
    checkMissing(x5);
    y21 = ld y;
    check L71() else D25();
  L73():
    goto L15(r45);
  D25():
    deopt 94 [y21];
  L71():
    y22 = force? y21;
    checkMissing(y22);
    list = ldf list in base;
    r44 = dyn list(x5, y22);
    check L72() else D26();
  D26():
    deopt 98 [r44];
  L72():
    goto L16(r44);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg panel_smooth:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st y = y;
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
    r2 = dyn panel_smooth[, , span](p, p1, 1.0);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}