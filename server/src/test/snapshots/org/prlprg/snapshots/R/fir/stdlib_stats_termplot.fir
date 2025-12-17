fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg _in_:cls, reg search:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg had_splines:*, reg had_splines1:V, reg r8:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg require1:cls, reg splines:*, reg splines1:V, reg p2:p(V +), reg r12:V, reg r14:V, reg factor:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg rep:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg rnorm:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x:*, reg x1:V, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg r28:V, reg z:*, reg z1:V, reg as_numeric:cls, reg r29:V, reg r30:V, reg p4:p(V +), reg r32:V, reg glm:cls, reg __:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg par:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg c1:cls, reg r38:V, reg p6:p(V +), reg r40:V, reg termplot:cls, reg model:*, reg model1:V, reg p7:p(V +), reg paste:cls, reg deparse:cls, reg model2:*, reg model3:V, reg c2:L, reg model5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r42:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg termplot1:cls, reg model6:*, reg model7:V, reg p11:p(V +), reg r50:V, reg termplot2:cls, reg model8:*, reg model9:V, reg p12:p(V +), reg r52:V, reg termplot3:cls, reg model10:*, reg model11:V, reg p13:p(V +), reg panel_smooth:*, reg panel_smooth1:V, reg p14:p(V +), reg p15:p(V +), reg r56:V, reg had_splines2:*, reg had_splines3:V, reg r57:V, reg c3:L, reg c5:V, reg rs:*, reg rs1:V, reg c6:L, reg c7:V, reg c9:L, reg detach:cls, reg r58:V, reg requireNamespace:cls, reg r60:V, reg c10:L, reg lm:cls, reg __1:cls, reg r61:V, reg p16:p(V +), reg __2:cls, reg r63:V, reg p17:p(V +), reg r65:V, reg termplot4:cls, reg hills_lm:*, reg hills_lm1:V, reg p18:p(V +), reg panel_smooth2:*, reg panel_smooth3:V, reg p19:p(V +), reg r68:V, reg termplot5:cls, reg hills_lm2:*, reg hills_lm3:V, reg p20:p(V +), reg panel_smooth4:*, reg panel_smooth5:V, reg p21:p(V +), reg r71:V |
    mkenv;
    r = clos inner926360226;
    st termplot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0():
    _in_ = ldf `%in%`;
    check L12() else D2();
  L8():
    require = ldf require;
    check L10() else D0();
  L9():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L10():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L11() else D1();
  L12():
    p1 = prom<V +>{
      search = ldf search;
      r5 = dyn search();
      return r5;
    };
    r7 = dyn _in_("package:splines", p1);
    check L13() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r7];
  L11():
    goto L0();
  L13():
    st `had.splines` = r7;
    had_splines = ld `had.splines`;
    check L14() else D4();
  D4():
    deopt 14 [had_splines];
  L14():
    had_splines1 = force? had_splines;
    checkMissing(had_splines1);
    r8 = `!`(had_splines1);
    c = `as.logical`(r8);
    if c then L15() else L1();
  L1():
    goto L3();
  L3():
    r14 = `:`(1.0, 100.0);
    st x = r14;
    factor = ldf factor;
    check L21() else D7();
  L15():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D7():
    deopt 31 [];
  L2(r10):
    st rs = r10;
    goto L3();
  L16():
    require1 = ldf require;
    check L18() else D5();
  L17():
    r9 = dyn base1(<sym splines>);
    goto L2(r9);
  L21():
    p3 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      rep = ldf rep in base;
      r17 = dyn rep(<lang `[`(LETTERS, `:`(1.0, 4.0))>, 25.0);
      goto L0(r17);
    L2():
      r15 = dyn base2(<lang `[`(LETTERS, `:`(1.0, 4.0))>, 25.0);
      goto L0(r15);
    };
    r19 = dyn factor(p3);
    check L22() else D8();
  D5():
    deopt 19 [];
  D8():
    deopt 33 [r19];
  L18():
    p2 = prom<V +>{
      splines = ld splines;
      splines1 = force? splines;
      checkMissing(splines1);
      return splines1;
    };
    r12 = dyn require1(p2);
    check L19() else D6();
  L22():
    st z = r19;
    rnorm = ldf rnorm;
    check L23() else D9();
  D6():
    deopt 21 [r12];
  D9():
    deopt 36 [];
  L19():
    goto L2(r12);
  L23():
    p4 = prom<V +>{
      sym3 = ldf sin;
      base3 = ldf sin in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r21):
      sym4 = ldf `as.numeric`;
      base4 = ldf `as.numeric` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L2():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r22 = `/`(x1, 10.0);
      r23 = sin(r22);
      goto L0(r23);
    L3():
      r20 = dyn base3(<lang `/`(x, 10.0)>);
      goto L0(r20);
    L1(r27, r28):
      r30 = `+`(r27, r28);
      return r30;
    L4():
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      as_numeric = ldf `as.numeric` in base;
      r29 = dyn as_numeric(z1);
      goto L1(r21, r29);
    L5():
      r26 = dyn base4(<sym z>);
      goto L1(r21, r26);
    };
    r32 = dyn rnorm(100.0, p4);
    check L24() else D10();
  D10():
    deopt 39 [r32];
  L24():
    st y = r32;
    glm = ldf glm;
    check L25() else D11();
  D11():
    deopt 42 [];
  L25():
    p5 = prom<V +>{
      __ = ldf `~` in base;
      r33 = dyn __(<sym y>, <lang `+`(ns(x, 6.0), z)>);
      return r33;
    };
    r35 = dyn glm(p5);
    check L26() else D12();
  D12():
    deopt 44 [r35];
  L26():
    st model = r35;
    par = ldf par;
    check L27() else D13();
  D13():
    deopt 47 [];
  L27():
    p6 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c1 = ldf c in base;
      r38 = dyn c1(2.0, 2.0);
      goto L0(r38);
    L2():
      r36 = dyn base5(2.0, 2.0);
      goto L0(r36);
    };
    r40 = dyn par[mfrow](p6);
    check L28() else D14();
  D14():
    deopt 50 [r40];
  L28():
    termplot = ldf termplot;
    check L29() else D15();
  D15():
    deopt 52 [];
  L29():
    p7 = prom<V +>{
      model = ld model;
      model1 = force? model;
      checkMissing(model1);
      return model1;
    };
    p10 = prom<V +>{
      paste = ldf paste;
      p9 = prom<V +>{
        deparse = ldf deparse;
        p8 = prom<V +>{
          model2 = ld model;
          model3 = force? model2;
          checkMissing(model3);
          c2 = `is.object`(model3);
          if c2 then L1() else L2(model3);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", model3);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(model5):
          r42 = `$`(model5, <sym call>);
          goto L0(r42);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r44 = dyn deparse(p8);
        return r44;
      };
      r46 = dyn paste("termplot( ", p9, " ...)");
      return r46;
    };
    r48 = dyn termplot[, main](p7, p10);
    check L30() else D16();
  D16():
    deopt 56 [r48];
  L30():
    termplot1 = ldf termplot;
    check L31() else D17();
  D17():
    deopt 58 [];
  L31():
    p11 = prom<V +>{
      model6 = ld model;
      model7 = force? model6;
      checkMissing(model7);
      return model7;
    };
    r50 = dyn termplot1[, rug](p11, TRUE);
    check L32() else D18();
  D18():
    deopt 62 [r50];
  L32():
    termplot2 = ldf termplot;
    check L33() else D19();
  D19():
    deopt 64 [];
  L33():
    p12 = prom<V +>{
      model8 = ld model;
      model9 = force? model8;
      checkMissing(model9);
      return model9;
    };
    r52 = dyn termplot2[, `partial.resid`, se, main](p12, TRUE, TRUE, TRUE);
    check L34() else D20();
  D20():
    deopt 72 [r52];
  L34():
    termplot3 = ldf termplot;
    check L35() else D21();
  D21():
    deopt 74 [];
  L35():
    p13 = prom<V +>{
      model10 = ld model;
      model11 = force? model10;
      checkMissing(model11);
      return model11;
    };
    p14 = prom<V +>{
      panel_smooth = ld `panel.smooth`;
      panel_smooth1 = force? panel_smooth;
      checkMissing(panel_smooth1);
      return panel_smooth1;
    };
    p15 = prom<V +>{
      return 0.25;
    };
    r56 = dyn termplot3[, `partial.resid`, smooth, `span.smth`](p13, TRUE, p14, p15);
    check L36() else D22();
  D22():
    deopt 82 [r56];
  L36():
    had_splines2 = ld `had.splines`;
    check L37() else D23();
  D23():
    deopt 83 [had_splines2];
  L37():
    had_splines3 = force? had_splines2;
    checkMissing(had_splines3);
    r57 = `!`(had_splines3);
    c3 = `as.logical`(r57);
    if c3 then L38() else L4(c3);
  L4(c5):
    c9 = `as.logical`(c5);
    if c9 then L41() else L5();
  L38():
    rs = ld rs;
    check L39() else D24();
  D24():
    deopt 86 [c3, rs];
  L5():
    goto L6();
  L6():
    requireNamespace = ldf requireNamespace;
    check L45() else D27();
  L39():
    rs1 = force? rs;
    checkMissing(rs1);
    c6 = `as.logical`(rs1);
    c7 = `&&`(c3, c6);
    goto L4(c7);
  L41():
    detach = ldf detach;
    check L42() else D25();
  D25():
    deopt 90 [];
  D27():
    deopt 96 [];
  L42():
    r58 = dyn detach("package:splines");
    check L43() else D26();
  L45():
    r60 = dyn requireNamespace[, quietly]("MASS", TRUE);
    check L46() else D28();
  D26():
    deopt 92 [r58];
  D28():
    deopt 100 [r60];
  L43():
    goto L6();
  L46():
    c10 = `as.logical`(r60);
    if c10 then L47() else L7();
  L7():
    invisible.0();
    popenv;
    return NULL;
  L47():
    lm = ldf lm;
    check L48() else D29();
  D29():
    deopt 102 [];
  L48():
    p16 = prom<V +>{
      __1 = ldf `~` in base;
      r61 = dyn __1(<lang log(time)>, <lang `+`(log(climb), log(dist))>);
      return r61;
    };
    p17 = prom<V +>{
      __2 = ldf `::`;
      r63 = dyn __2("MASS", "hills");
      return r63;
    };
    r65 = dyn lm[, data](p16, p17);
    check L49() else D30();
  D30():
    deopt 106 [r65];
  L49():
    st `hills.lm` = r65;
    termplot4 = ldf termplot;
    check L50() else D31();
  D31():
    deopt 109 [];
  L50():
    p18 = prom<V +>{
      hills_lm = ld `hills.lm`;
      hills_lm1 = force? hills_lm;
      checkMissing(hills_lm1);
      return hills_lm1;
    };
    p19 = prom<V +>{
      panel_smooth2 = ld `panel.smooth`;
      panel_smooth3 = force? panel_smooth2;
      checkMissing(panel_smooth3);
      return panel_smooth3;
    };
    r68 = dyn termplot4[, `partial.resid`, smooth, terms, main](p18, TRUE, p19, "log(dist)", "Original");
    check L51() else D32();
  D32():
    deopt 119 [r68];
  L51():
    termplot5 = ldf termplot;
    check L52() else D33();
  D33():
    deopt 121 [];
  L52():
    p20 = prom<V +>{
      hills_lm2 = ld `hills.lm`;
      hills_lm3 = force? hills_lm2;
      checkMissing(hills_lm3);
      return hills_lm3;
    };
    p21 = prom<V +>{
      panel_smooth4 = ld `panel.smooth`;
      panel_smooth5 = force? panel_smooth4;
      checkMissing(panel_smooth5);
      return panel_smooth5;
    };
    r71 = dyn termplot5[, `transform.x`, `partial.resid`, smooth, terms, main](p20, TRUE, TRUE, p21, "log(dist)", "Transformed");
    check L53() else D34();
  D34():
    deopt 133 [r71];
  L53():
    popenv;
    return r71;
  }
}
fun inner926360226(model, data, envir, `partial.resid`, rug, terms, se, xlabs, ylabs, main, `col.term`, `lwd.term`, `col.se`, `lty.se`, `lwd.se`, `col.res`, cex, pch, `col.smth`, `lty.smth`, `span.smth`, ask, `use.factor.levels`, smooth, ylim, plot, `transform.x`, `...`) {
  (reg model:*, reg data:*, reg envir:*, reg partial_resid:*, reg rug:*, reg terms:*, reg se:*, reg xlabs:*, reg ylabs:*, reg main:*, reg col_term:*, reg lwd_term:*, reg col_se:*, reg lty_se:*, reg lwd_se:*, reg col_res:*, reg cex:*, reg pch:*, reg col_smth:*, reg lty_smth:*, reg span_smth:*, reg ask:*, reg use_factor_levels:*, reg smooth:*, reg ylim:*, reg plot:*, reg transform_x:*, reg ddd:dots) -+> V { var model:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg environment:cls, reg formula:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var `partial.resid`:*, reg partial_resid_isMissing:L, reg partial_resid_orDefault:*, var rug:*, reg rug_isMissing:L, reg rug_orDefault:*, var terms:*, reg terms_isMissing:L, reg terms_orDefault:*, var se:*, reg se_isMissing:L, reg se_orDefault:*, var xlabs:*, reg xlabs_isMissing:L, reg xlabs_orDefault:*, var ylabs:*, reg ylabs_isMissing:L, reg ylabs_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `col.term`:*, reg col_term_isMissing:L, reg col_term_orDefault:*, var `lwd.term`:*, reg lwd_term_isMissing:L, reg lwd_term_orDefault:*, var `col.se`:*, reg col_se_isMissing:L, reg col_se_orDefault:*, var `lty.se`:*, reg lty_se_isMissing:L, reg lty_se_orDefault:*, var `lwd.se`:*, reg lwd_se_isMissing:L, reg lwd_se_orDefault:*, var `col.res`:*, reg col_res_isMissing:L, reg col_res_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par:cls, reg r5:V, reg p3:p(V +), var `col.smth`:*, reg col_smth_isMissing:L, reg col_smth_orDefault:*, var `lty.smth`:*, reg lty_smth_isMissing:L, reg lty_smth_orDefault:*, var `span.smth`:*, reg span_smth_isMissing:L, reg span_smth_orDefault:*, reg p4:p(V +), var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, reg dev_interactive:cls, reg r8:V, reg c:L, reg c2:V, reg nb_fig:*, reg nb_fig1:V, reg n_tms:*, reg n_tms1:V, reg r9:V, reg c3:L, reg c4:V, reg p5:p(V +), var `use.factor.levels`:*, reg use_factor_levels_isMissing:L, reg use_factor_levels_orDefault:*, var smooth:*, reg smooth_isMissing:L, reg smooth_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `transform.x`:*, reg transform_x_isMissing:L, reg transform_x_orDefault:*, var `...`:dots?, reg terms1:*, reg terms2:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg terms3:*, reg terms4:V, reg c6:V, reg c7:L, reg predict:cls, reg model3:*, reg model4:V, reg p6:p(V +), reg se1:*, reg se2:V, reg p7:p(V +), reg r15:V, reg r16:V, reg predict1:cls, reg model5:*, reg model6:V, reg p8:p(V +), reg se3:*, reg se4:V, reg p9:p(V +), reg terms5:*, reg terms6:V, reg p10:p(V +), reg r20:V, reg ncol:cls, reg as_matrix:cls, reg se5:*, reg se6:V, reg c8:L, reg terms7:*, reg terms8:V, reg c9:L, reg terms10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r21:V, reg terms11:*, reg terms12:V, reg p11:p(V +), reg r23:V, reg p12:p(V +), reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg transform_x1:*, reg transform_x2:V, reg n_tms2:*, reg n_tms3:V, reg rep_len:cls, reg r28:V, reg model_frame:cls, reg model7:*, reg model8:V, reg p13:p(V +), reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg data1:*, reg data2:V, reg c10:V, reg c11:L, reg eval:cls, reg model9:*, reg model10:V, reg c12:L, reg model12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r33:V, reg c13:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r34:V, reg p14:p(V +), reg envir1:*, reg envir2:V, reg p15:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg data3:*, reg data4:V, reg c14:V, reg c15:L, reg mf:*, reg mf1:V, reg NROW:cls, reg tms:*, reg tms1:V, reg p16:p(V +), reg r42:V, reg NROW1:cls, reg data5:*, reg data6:V, reg p17:p(V +), reg r44:V, reg r45:V, reg c16:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg rownames:cls, reg tms2:*, reg tms3:V, reg p18:p(V +), reg r49:V, reg rownames1:cls, reg data7:*, reg data8:V, reg p19:p(V +), reg r51:V, reg match:cls, reg r52:V, reg r53:V, reg colnames:cls, reg tms4:*, reg tms5:V, reg p20:p(V +), reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg grepl:cls, reg nmt:*, reg nmt1:V, reg p21:p(V +), reg r59:V, reg any:cls, reg r60:V, reg c17:L, reg warning:cls, reg r61:V, reg str2expression:cls, reg nmt2:*, reg nmt3:V, reg p22:p(V +), reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg smooth1:*, reg smooth2:V, reg c18:V, reg r67:V, reg c19:L, reg match_fun:cls, reg smooth3:*, reg smooth4:V, reg p23:p(V +), reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r71:V, reg r72:V, reg ylabs1:*, reg ylabs2:V, reg c20:V, reg c21:L, reg paste:cls, reg nmt4:*, reg nmt5:V, reg p24:p(V +), reg r74:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg main1:*, reg main2:V, reg c22:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg main3:*, reg main4:V, reg c24:L, reg c25:L, reg main5:*, reg main6:V, reg c26:L, reg deparse:cls, reg model13:*, reg model14:V, reg c27:L, reg model16:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r81:V, reg p25:p(V +), reg r83:V, reg r84:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r85:V, reg r86:V, reg main7:*, reg main8:V, reg c28:L, reg r87:V, reg c29:L, reg stop:cls, reg r88:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg r90:V, reg main9:*, reg main10:V, reg n_tms4:*, reg n_tms5:V, reg rep_len1:cls, reg r91:V, reg envir3:*, reg envir4:V, reg r92:cls, reg r93:cls, reg _in_:cls, reg nmt6:*, reg nmt7:V, reg p26:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg mf3:*, reg mf4:V, reg names:cls, reg r97:V, reg p27:p(V +), reg r99:V, reg sapply:cls, reg nmt8:*, reg nmt9:V, reg p28:p(V +), reg r101:cls, reg p29:p(V +), reg r103:V, reg plot1:*, reg plot2:V, reg r104:V, reg c30:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r105:V, reg r106:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r107:V, reg r108:V, reg in_mf:*, reg in_mf1:V, reg sum:cls, reg r109:V, reg vector:cls, reg r110:V, reg n_tms6:*, reg n_tms7:V, reg r111:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg in_mf2:*, reg in_mf3:V, reg c32:L, reg i6:I, reg in_mf5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i8:I, reg dx11:V, reg i9:*, reg i10:V, reg __:cls, reg r112:V, reg r113:V, reg c33:L, reg is_fac:*, reg is_fac1:V, reg c34:L, reg i16:I, reg is_fac3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i18:I, reg dx13:V, reg i19:*, reg i20:V, reg __1:cls, reg r115:V, reg c35:L, reg mf5:*, reg mf6:V, reg c36:L, reg i24:I, reg mf8:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i26:I, reg dx15:V, reg nmt10:*, reg nmt11:V, reg c37:L, reg i28:I, reg mf10:V, reg nmt13:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i30:I, reg dx17:V, reg i31:*, reg i32:V, reg __2:cls, reg r116:V, reg __3:cls, reg r117:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r118:V, reg i35:I, reg r119:V, reg use_rows:*, reg use_rows1:V, reg c38:V, reg r120:V, reg c39:L, reg xx:*, reg xx1:V, reg c40:L, reg i39:I, reg xx3:V, reg dr16:V, reg dc8:L, reg dx18:V, reg i41:I, reg dx19:V, reg use_rows2:*, reg use_rows3:V, reg __4:cls, reg r121:V, reg i42:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r122:V, reg i45:I, reg r123:V, reg levels:cls, reg xx4:*, reg xx5:V, reg p30:p(V +), reg r125:V, reg xx6:*, reg xx7:V, reg match1:cls, reg r126:V, reg i46:I, reg carrier:cls, reg cn:*, reg cn1:V, reg c41:L, reg cn3:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg i47:*, reg i48:V, reg __5:cls, reg r128:V, reg p31:p(V +), reg transform_x3:*, reg transform_x4:V, reg c42:L, reg transform_x6:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg i49:*, reg i50:V, reg __6:cls, reg r130:V, reg p32:p(V +), reg r132:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r133:V, reg i53:I, reg r134:V, reg use_rows4:*, reg use_rows5:V, reg c43:V, reg r135:V, reg c44:L, reg xx8:*, reg xx9:V, reg c45:L, reg i57:I, reg xx11:V, reg dr22:V, reg dc11:L, reg dx25:V, reg i59:I, reg dx26:V, reg use_rows6:*, reg use_rows7:V, reg __7:cls, reg r136:V, reg i60:I, reg sym18:cls, reg base18:cls, reg guard18:L, reg r137:V, reg i63:I, reg r138:V, reg sort:cls, reg unique:cls, reg xx12:*, reg xx13:V, reg p33:p(V +), reg r140:V, reg p34:p(V +), reg r142:V, reg xx14:*, reg xx15:V, reg match2:cls, reg r143:V, reg se7:*, reg se8:V, reg c46:L, reg data_frame:cls, reg xx16:*, reg xx17:V, reg c47:L, reg xx19:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg ww:*, reg ww1:V, reg __8:cls, reg r144:V, reg p35:p(V +), reg tms6:*, reg tms7:V, reg c48:L, reg tms9:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg ww2:*, reg ww3:V, reg i66:*, reg i67:V, reg __9:cls, reg r146:V, reg p36:p(V +), reg terms13:*, reg terms14:V, reg c49:L, reg terms16:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r148:V, reg c50:L, reg dx35:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg ww4:*, reg ww5:V, reg i68:*, reg i69:V, reg __10:cls, reg r149:V, reg p37:p(V +), reg r151:V, reg i70:I, reg r152:V, reg data_frame1:cls, reg xx20:*, reg xx21:V, reg c51:L, reg xx23:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg ww6:*, reg ww7:V, reg __11:cls, reg r153:V, reg p38:p(V +), reg tms10:*, reg tms11:V, reg c52:L, reg tms13:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg ww8:*, reg ww9:V, reg i71:*, reg i72:V, reg __12:cls, reg r155:V, reg p39:p(V +), reg r157:V, reg l1:*, reg c53:L, reg i74:I, reg r159:V, reg l3:*, reg dr36:V, reg dc18:L, reg dx42:V, reg i76:I, reg dx43:V, reg i77:*, reg i78:V, reg ____:cls, reg r162:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r163:V, reg r164:V, reg terms17:*, reg terms18:V, reg attr:cls, reg r165:V, reg l4:*, reg attr__:cls, reg r166:V, reg se9:*, reg se10:V, reg c54:L, reg c56:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r167:V, reg c59:L, reg r168:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r169:V, reg c62:L, reg r170:V, reg outlist:*, reg outlist1:V, reg attr1:cls, reg r171:V, reg c63:V, reg c64:L, reg c65:V, reg c67:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r172:V, reg r173:V, reg terms19:*, reg terms20:V, reg c68:L, reg terms22:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r174:V, reg attr2:cls, reg r175:V, reg l5:*, reg attr__1:cls, reg r176:V, reg sapply1:cls, reg cn4:*, reg cn5:V, reg p40:p(V +), reg carrier_name:*, reg carrier_name1:V, reg p41:p(V +), reg r180:V, reg c69:L, reg r182:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg in_mf6:*, reg in_mf7:V, reg __13:cls, reg r183:V, reg l6:*, reg names__:cls, reg r184:V, reg outlist2:*, reg outlist3:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r187:V, reg r188:V, reg smooth5:*, reg smooth6:V, reg c70:V, reg r189:V, reg c71:L, reg match_fun1:cls, reg smooth7:*, reg smooth8:V, reg p42:p(V +), reg r191:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r193:V, reg r194:V, reg ylabs3:*, reg ylabs4:V, reg c72:V, reg c73:L, reg paste1:cls, reg nmt14:*, reg nmt15:V, reg p43:p(V +), reg r196:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r198:V, reg r199:V, reg main11:*, reg main12:V, reg c74:V, reg c75:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r201:V, reg r202:V, reg main13:*, reg main14:V, reg c76:L, reg c77:L, reg main15:*, reg main16:V, reg c78:L, reg deparse1:cls, reg model17:*, reg model18:V, reg c79:L, reg model20:V, reg dr42:V, reg dc21:L, reg dx48:V, reg dx49:V, reg r203:V, reg p44:p(V +), reg r205:V, reg r206:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r207:V, reg r208:V, reg main17:*, reg main18:V, reg c80:L, reg r209:V, reg c81:L, reg stop1:cls, reg r210:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r211:V, reg r212:V, reg main19:*, reg main20:V, reg n_tms8:*, reg n_tms9:V, reg rep_len2:cls, reg r213:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r214:V, reg r215:V, reg xlabs1:*, reg xlabs2:V, reg c82:V, reg c83:L, reg unlist:cls, reg lapply:cls, reg cn6:*, reg cn7:V, reg p45:p(V +), reg carrier_name2:*, reg carrier_name3:V, reg p46:p(V +), reg r218:V, reg p47:p(V +), reg r220:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r221:V, reg r222:V, reg transform_x7:*, reg transform_x8:V, reg any1:cls, reg r223:V, reg c84:L, reg ifelse:cls, reg transform_x9:*, reg transform_x10:V, reg p48:p(V +), reg lapply1:cls, reg cn8:*, reg cn9:V, reg p49:p(V +), reg deparse2:*, reg deparse3:V, reg p50:p(V +), reg r227:V, reg p51:p(V +), reg xlabs3:*, reg xlabs4:V, reg p52:p(V +), reg r230:V, reg r231:V, reg partial_resid1:*, reg partial_resid2:V, reg c85:L, reg c86:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r233:V, reg c90:L, reg r234:V, reg smooth9:*, reg smooth10:V, reg c91:V, reg r235:V, reg c92:L, reg c93:V, reg c95:L, reg residuals:cls, reg model21:*, reg model22:V, reg p53:p(V +), reg r237:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r238:V, reg r239:V, reg which_terms:*, reg which_terms1:V, reg c96:V, reg r240:V, reg c97:L, reg pres:*, reg pres1:V, reg c98:L, reg pres3:V, reg dr44:V, reg dc22:L, reg dx50:V, reg dx51:V, reg which_terms2:*, reg which_terms3:V, reg __14:cls, reg r241:V, reg dx52:V, reg r242:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r243:V, reg r244:V, reg par1:cls, reg r245:V, reg prod:cls, reg r246:V, reg ask1:*, reg ask2:V, reg c99:L, reg devAskNewPage:cls, reg r247:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r248:V, reg r249:V, reg on_exit:cls, reg r250:V, reg ylim1:*, reg ylim2:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r252:V, reg r253:V, reg ylims:*, reg ylims1:V, reg identical:cls, reg r254:V, reg c100:L, reg se11:*, reg se12:V, reg r255:V, reg c101:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r256:V, reg r257:V, reg tms14:*, reg tms15:V, reg range:cls, reg r258:V, reg r259:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r260:V, reg tms16:*, reg tms17:V, reg terms23:*, reg terms24:V, reg c102:L, reg tms19:V, reg r262:R, reg terms26:V, reg dr46:V, reg dc23:L, reg dx54:V, reg tms21:V, reg r264:R, reg dx55:V, reg r265:V, reg r266:V, reg r267:V, reg tms22:*, reg tms23:V, reg terms27:*, reg terms28:V, reg c103:L, reg tms25:V, reg r269:R, reg terms30:V, reg dr48:V, reg dc24:L, reg dx56:V, reg tms27:V, reg r271:R, reg dx57:V, reg r272:V, reg r273:V, reg r274:V, reg range1:cls, reg r275:V, reg partial_resid3:*, reg partial_resid4:V, reg c104:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r276:V, reg r277:V, reg ylims2:*, reg ylims3:V, reg pres4:*, reg pres5:V, reg range2:cls, reg r278:V, reg rug1:*, reg rug2:V, reg c105:L, reg ylims4:*, reg ylims5:V, reg c106:L, reg ylims7:V, reg dr50:V, reg dc25:L, reg dx58:V, reg dx59:V, reg __15:cls, reg r280:V, reg diff:cls, reg ylims8:*, reg ylims9:V, reg p54:p(V +), reg r282:V, reg r283:V, reg r284:V, reg l7:*, reg c107:L, reg r286:V, reg l9:*, reg dr52:V, reg dc26:L, reg dx60:V, reg r288:V, reg dx61:V, reg ___:cls, reg r289:V, reg r290:V, reg n_tms10:*, reg n_tms11:V, reg r292:V, reg s1:V, reg l10:I, reg i79:I, reg i80:I, reg i81:I, reg c108:L, reg x1:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r293:V, reg i86:I, reg r294:V, reg ylim3:*, reg ylim4:V, reg identical1:cls, reg r295:V, reg c109:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r296:V, reg i91:I, reg r297:V, reg tms28:*, reg tms29:V, reg c110:L, reg i93:I, reg tms31:V, reg dr54:V, reg dc27:L, reg dx62:V, reg i95:I, reg dx63:V, reg i96:*, reg i97:V, reg __16:cls, reg r298:V, reg range3:cls, reg r299:V, reg se13:*, reg se14:V, reg c111:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r300:V, reg i102:I, reg r301:V, reg ylims10:*, reg ylims11:V, reg tms32:*, reg tms33:V, reg c112:L, reg i104:I, reg tms35:V, reg dr56:V, reg dc28:L, reg dx64:V, reg i106:I, reg dx65:V, reg i107:*, reg i108:V, reg __17:cls, reg r302:V, reg terms31:*, reg terms32:V, reg c113:L, reg i110:I, reg dx67:V, reg r304:R, reg terms34:V, reg dr58:V, reg dc29:L, reg dx69:V, reg i112:I, reg dx70:V, reg r306:R, reg dx71:V, reg r307:V, reg c114:L, reg i114:I, reg dx74:V, reg r309:R, reg dx75:V, reg dr60:V, reg dc30:L, reg dx77:V, reg i116:I, reg dx78:V, reg r311:R, reg dx79:V, reg i117:*, reg i118:V, reg __18:cls, reg r312:V, reg r313:V, reg r314:V, reg tms36:*, reg tms37:V, reg c115:L, reg i120:I, reg tms39:V, reg dr62:V, reg dc31:L, reg dx80:V, reg i122:I, reg dx81:V, reg i123:*, reg i124:V, reg __19:cls, reg r315:V, reg terms35:*, reg terms36:V, reg c116:L, reg i126:I, reg dx83:V, reg r317:R, reg terms38:V, reg dr64:V, reg dc32:L, reg dx85:V, reg i128:I, reg dx86:V, reg r319:R, reg dx87:V, reg r320:V, reg c117:L, reg i130:I, reg dx90:V, reg r322:R, reg dx91:V, reg dr66:V, reg dc33:L, reg dx93:V, reg i132:I, reg dx94:V, reg r324:R, reg dx95:V, reg i133:*, reg i134:V, reg __20:cls, reg r325:V, reg r326:V, reg r327:V, reg range4:cls, reg r328:V, reg i135:I, reg partial_resid5:*, reg partial_resid6:V, reg c118:L, reg sym42:cls, reg base42:cls, reg guard42:L, reg r330:V, reg i140:I, reg r331:V, reg ylims12:*, reg ylims13:V, reg pres6:*, reg pres7:V, reg c119:L, reg i142:I, reg pres9:V, reg dr68:V, reg dc34:L, reg dx96:V, reg i144:I, reg dx97:V, reg i145:*, reg i146:V, reg __21:cls, reg r332:V, reg range5:cls, reg r333:V, reg i147:I, reg rug3:*, reg rug4:V, reg c120:L, reg ylims14:*, reg ylims15:V, reg c121:L, reg i151:I, reg ylims17:V, reg dr70:V, reg dc35:L, reg dx98:V, reg i153:I, reg dx99:V, reg __22:cls, reg r335:V, reg diff1:cls, reg ylims18:*, reg ylims19:V, reg p55:p(V +), reg r337:V, reg r338:V, reg r339:V, reg l11:*, reg c122:L, reg i155:I, reg r341:V, reg l13:*, reg dr72:V, reg dc36:L, reg dx100:V, reg i157:I, reg r343:V, reg dx101:V, reg ___1:cls, reg r344:V, reg i158:I, reg r345:V, reg i159:I, reg in_mf8:*, reg in_mf9:V, reg c123:L, reg i161:I, reg in_mf11:V, reg dr74:V, reg dc37:L, reg dx102:V, reg i163:I, reg dx103:V, reg i164:*, reg i165:V, reg __23:cls, reg r347:V, reg r348:V, reg c124:L, reg is_fac4:*, reg is_fac5:V, reg c125:L, reg i171:I, reg is_fac7:V, reg dr76:V, reg dc38:L, reg dx104:V, reg i173:I, reg dx105:V, reg i174:*, reg i175:V, reg __24:cls, reg r350:V, reg c126:L, reg mf13:*, reg mf14:V, reg c127:L, reg i179:I, reg mf16:V, reg dr78:V, reg dc39:L, reg dx106:V, reg i181:I, reg dx107:V, reg nmt16:*, reg nmt17:V, reg c128:L, reg i183:I, reg mf18:V, reg nmt19:V, reg dr80:V, reg dc40:L, reg dx108:V, reg i185:I, reg dx109:V, reg i186:*, reg i187:V, reg __25:cls, reg r351:V, reg __26:cls, reg r352:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r353:V, reg i190:I, reg r354:V, reg model23:*, reg model24:V, reg c129:L, reg i192:I, reg model26:V, reg dr82:V, reg dc41:L, reg dx110:V, reg i194:I, reg dx111:V, reg r355:V, reg c130:V, reg r356:V, reg c131:L, reg naresid:cls, reg model27:*, reg model28:V, reg c132:L, reg model30:V, reg dr84:V, reg dc42:L, reg dx112:V, reg dx113:V, reg r357:V, reg p56:p(V +), reg ff:*, reg ff1:V, reg p57:p(V +), reg r360:V, reg i197:I, reg levels1:cls, reg ff2:*, reg ff3:V, reg p58:p(V +), reg r363:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r364:V, reg i200:I, reg r365:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r366:V, reg i203:I, reg r367:V, reg ll:*, reg ll1:V, reg r368:I, reg range6:cls, reg r369:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r372:V, reg i206:I, reg r373:V, reg r374:V, reg c133:cls, reg r375:V, reg r376:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r377:V, reg i209:I, reg r378:V, reg ff4:*, reg ff5:V, reg as_numeric:cls, reg r379:V, reg rug5:*, reg rug6:V, reg c134:L, reg xlims:*, reg xlims1:V, reg c135:L, reg i213:I, reg xlims3:V, reg dr86:V, reg dc43:L, reg dx114:V, reg i215:I, reg dx115:V, reg __27:cls, reg r380:V, reg diff2:cls, reg xlims4:*, reg xlims5:V, reg p59:p(V +), reg r382:V, reg r383:V, reg r384:V, reg l14:*, reg c136:L, reg i217:I, reg r386:V, reg l16:*, reg dr88:V, reg dc44:L, reg dx116:V, reg i219:I, reg dx117:V, reg ___2:cls, reg r389:V, reg xlims6:*, reg xlims7:V, reg c137:L, reg i221:I, reg xlims9:V, reg dr90:V, reg dc45:L, reg dx118:V, reg i223:I, reg dx119:V, reg __28:cls, reg r390:V, reg diff3:cls, reg xlims10:*, reg xlims11:V, reg p60:p(V +), reg r392:V, reg r393:V, reg r394:V, reg l17:*, reg c138:L, reg i225:I, reg r396:V, reg l19:*, reg dr92:V, reg dc46:L, reg dx120:V, reg i227:I, reg r398:V, reg dx121:V, reg ___3:cls, reg r399:V, reg i228:I, reg plot3:cls, reg xlabs5:*, reg xlabs6:V, reg c139:L, reg xlabs8:V, reg dr94:V, reg dc47:L, reg dx122:V, reg dx123:V, reg i229:*, reg i230:V, reg __29:cls, reg r401:V, reg p61:p(V +), reg ylabs5:*, reg ylabs6:V, reg c140:L, reg ylabs8:V, reg dr96:V, reg dc48:L, reg dx124:V, reg dx125:V, reg i231:*, reg i232:V, reg __30:cls, reg r403:V, reg p62:p(V +), reg xlims12:*, reg xlims13:V, reg p63:p(V +), reg ylims20:*, reg ylims21:V, reg p64:p(V +), reg main21:*, reg main22:V, reg c141:L, reg main24:V, reg dr98:V, reg dc49:L, reg dx126:V, reg dx127:V, reg i233:*, reg i234:V, reg __31:cls, reg r407:V, reg p65:p(V +), reg ddd1:dots?, reg r409:V, reg use_factor_levels1:*, reg use_factor_levels2:V, reg c142:L, reg axis:cls, reg sym48:cls, reg base48:cls, reg guard48:L, reg r410:V, reg r411:V, reg ll2:*, reg ll3:V, reg r412:I, reg p66:p(V +), reg ll4:*, reg ll5:V, reg p67:p(V +), reg ddd2:dots?, reg r415:V, reg i237:I, reg axis1:cls, reg r417:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r418:V, reg i240:I, reg r419:V, reg ll6:*, reg ll7:V, reg r420:I, reg s2:V, reg l20:I, reg i241:I, reg i242:I, reg i243:I, reg i244:I, reg c143:L, reg x2:V, reg which:cls, reg ff6:*, reg ff7:V, reg ll8:*, reg ll9:V, reg c144:L, reg ff9:V, reg ll11:V, reg dr100:V, reg dc50:L, reg dx128:V, reg ff11:V, reg dx129:V, reg j:*, reg j1:V, reg __32:cls, reg r421:V, reg r422:V, reg p68:p(V +), reg r424:V, reg c145:L, reg i251:I, reg i252:I, reg r426:V, reg dr102:V, reg dc51:L, reg dx130:V, reg i255:I, reg i256:I, reg dx131:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r429:V, reg i261:I, reg i262:I, reg r430:V, reg r431:V, reg c146:cls, reg r432:V, reg __33:cls, reg r433:V, reg j2:*, reg j3:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r434:V, reg i267:I, reg i268:I, reg j6:V, reg r435:V, reg c147:cls, reg r436:V, reg r437:V, reg lines:cls, reg jf:*, reg jf1:V, reg p69:p(V +), reg tms40:*, reg tms41:V, reg c148:L, reg tms43:V, reg dr104:V, reg dc52:L, reg dx132:V, reg dx133:V, reg ww10:*, reg ww11:V, reg i269:*, reg i270:V, reg __34:cls, reg r439:V, reg p70:p(V +), reg col_term1:*, reg col_term2:V, reg p71:p(V +), reg lwd_term1:*, reg lwd_term2:V, reg p72:p(V +), reg ddd3:dots?, reg r443:V, reg se15:*, reg se16:V, reg c149:L, reg se_lines:cls, reg jf2:*, reg jf3:V, reg p73:p(V +), reg ww12:*, reg ww13:V, reg p74:p(V +), reg i275:*, reg i276:V, reg p75:p(V +), reg r447:V, reg i277:I, reg i278:I, reg i279:I, reg carrier1:cls, reg cn10:*, reg cn11:V, reg c150:L, reg cn13:V, reg dr106:V, reg dc53:L, reg dx134:V, reg dx135:V, reg i281:*, reg i282:V, reg __35:cls, reg r449:V, reg p76:p(V +), reg transform_x11:*, reg transform_x12:V, reg c151:L, reg transform_x14:V, reg dr108:V, reg dc54:L, reg dx136:V, reg dx137:V, reg i283:*, reg i284:V, reg __36:cls, reg r451:V, reg p77:p(V +), reg r453:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r454:V, reg i287:I, reg r455:V, reg use_rows8:*, reg use_rows9:V, reg c152:V, reg r456:V, reg c153:L, reg xx24:*, reg xx25:V, reg c154:L, reg i291:I, reg xx27:V, reg dr110:V, reg dc55:L, reg dx138:V, reg i293:I, reg dx139:V, reg use_rows10:*, reg use_rows11:V, reg __37:cls, reg r457:V, reg i294:I, reg sym53:cls, reg base53:cls, reg guard53:L, reg r458:V, reg i297:I, reg r459:V, reg xx28:*, reg xx29:V, reg range7:cls, reg r460:V, reg rug7:*, reg rug8:V, reg c155:L, reg xlims14:*, reg xlims15:V, reg c156:L, reg i301:I, reg xlims17:V, reg dr112:V, reg dc56:L, reg dx141:V, reg i303:I, reg dx142:V, reg __38:cls, reg r461:V, reg diff4:cls, reg xlims18:*, reg xlims19:V, reg p78:p(V +), reg r463:V, reg r464:V, reg r465:V, reg l21:*, reg c157:L, reg i305:I, reg r467:V, reg l23:*, reg dr114:V, reg dc57:L, reg dx143:V, reg i307:I, reg r469:V, reg dx144:V, reg ___4:cls, reg r470:V, reg i308:I, reg order:cls, reg xx30:*, reg xx31:V, reg p79:p(V +), reg r473:V, reg plot4:cls, reg xx32:*, reg xx33:V, reg c158:L, reg xx35:V, reg dr116:V, reg dc58:L, reg dx145:V, reg dx146:V, reg oo:*, reg oo1:V, reg __39:cls, reg r474:V, reg p80:p(V +), reg tms44:*, reg tms45:V, reg c159:L, reg tms47:V, reg dr118:V, reg dc59:L, reg dx147:V, reg dx148:V, reg oo2:*, reg oo3:V, reg i309:*, reg i310:V, reg __40:cls, reg r476:V, reg p81:p(V +), reg xlabs9:*, reg xlabs10:V, reg c160:L, reg xlabs12:V, reg dr120:V, reg dc60:L, reg dx149:V, reg dx150:V, reg i311:*, reg i312:V, reg __41:cls, reg r478:V, reg p82:p(V +), reg ylabs9:*, reg ylabs10:V, reg c161:L, reg ylabs12:V, reg dr122:V, reg dc61:L, reg dx151:V, reg dx152:V, reg i313:*, reg i314:V, reg __42:cls, reg r480:V, reg p83:p(V +), reg xlims20:*, reg xlims21:V, reg p84:p(V +), reg ylims22:*, reg ylims23:V, reg p85:p(V +), reg main25:*, reg main26:V, reg c162:L, reg main28:V, reg dr124:V, reg dc62:L, reg dx153:V, reg dx154:V, reg i315:*, reg i316:V, reg __43:cls, reg r484:V, reg p86:p(V +), reg col_term3:*, reg col_term4:V, reg p87:p(V +), reg lwd_term3:*, reg lwd_term4:V, reg p88:p(V +), reg ddd4:dots?, reg r488:V, reg se17:*, reg se18:V, reg c163:L, reg se_lines1:cls, reg xx36:*, reg xx37:V, reg c164:L, reg xx39:V, reg dr126:V, reg dc63:L, reg dx155:V, reg dx156:V, reg oo4:*, reg oo5:V, reg __44:cls, reg r489:V, reg p89:p(V +), reg oo6:*, reg oo7:V, reg p90:p(V +), reg i319:*, reg i320:V, reg p91:p(V +), reg r493:V, reg partial_resid7:*, reg partial_resid8:V, reg c165:L, reg is_fac8:*, reg is_fac9:V, reg c166:L, reg i324:I, reg is_fac11:V, reg dr128:V, reg dc64:L, reg dx157:V, reg i326:I, reg dx158:V, reg i327:*, reg i328:V, reg __45:cls, reg r494:V, reg r495:V, reg c167:L, reg i330:I, reg c169:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r496:V, reg i333:I, reg c172:L, reg r497:V, reg smooth11:*, reg smooth12:V, reg c173:V, reg r498:V, reg c174:L, reg c175:V, reg c177:L, reg smooth13:cls, reg xx40:*, reg xx41:V, reg p92:p(V +), reg pres10:*, reg pres11:V, reg c178:L, reg dr130:V, reg dc65:L, reg dx159:V, reg dx160:V, reg i337:*, reg i338:V, reg __46:cls, reg r500:V, reg p93:p(V +), reg lty_smth1:*, reg lty_smth2:V, reg p94:p(V +), reg cex1:*, reg cex2:V, reg p95:p(V +), reg pch1:*, reg pch2:V, reg p96:p(V +), reg col_res1:*, reg col_res2:V, reg p97:p(V +), reg col_smth1:*, reg col_smth2:V, reg p98:p(V +), reg span_smth1:*, reg span_smth2:V, reg p99:p(V +), reg r508:V, reg i339:I, reg r509:V, reg points:cls, reg xx42:*, reg xx43:V, reg p100:p(V +), reg pres14:*, reg pres15:V, reg c179:L, reg dr132:V, reg dc66:L, reg dx161:V, reg dx162:V, reg i340:*, reg i341:V, reg __47:cls, reg r511:V, reg p101:p(V +), reg cex3:*, reg cex4:V, reg p102:p(V +), reg pch3:*, reg pch4:V, reg p103:p(V +), reg col_res3:*, reg col_res4:V, reg p104:p(V +), reg r516:V, reg i342:I, reg rug9:*, reg rug10:V, reg c180:L, reg sym55:cls, reg base55:cls, reg guard55:L, reg r518:V, reg i347:I, reg r519:V, reg xx44:*, reg xx45:V, reg length:cls, reg r520:V, reg lines1:cls, reg sym56:cls, reg base56:cls, reg guard56:L, reg r521:V, reg r522:V, reg jitter:cls, reg xx46:*, reg xx47:V, reg p105:p(V +), reg r524:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r525:V, reg r526:V, reg n:*, reg n1:V, reg rep_int:cls, reg r527:V, reg rep_int1:cls, reg r528:V, reg p106:p(V +), reg sym58:cls, reg base58:cls, reg guard58:L, reg r530:V, reg r531:V, reg ylims24:*, reg ylims25:V, reg c181:L, reg ylims27:V, reg dr134:V, reg dc67:L, reg dx163:V, reg dx164:V, reg __48:cls, reg r532:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r533:V, reg dx167:V, reg r534:V, reg c182:cls, reg r535:V, reg diff5:cls, reg ylims28:*, reg ylims29:V, reg p107:p(V +), reg r537:V, reg r538:V, reg r539:V, reg n2:*, reg n3:V, reg rep_int2:cls, reg r540:V, reg p108:p(V +), reg r542:V, reg partial_resid9:*, reg partial_resid10:V, reg c183:L, reg lines2:cls, reg sym60:cls, reg base60:cls, reg guard60:L, reg r543:V, reg r544:V, reg xlims22:*, reg xlims23:V, reg c184:L, reg xlims25:V, reg dr136:V, reg dc68:L, reg dx168:V, reg dx169:V, reg __49:cls, reg r545:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r546:V, reg dx172:V, reg r547:V, reg c185:cls, reg r548:V, reg diff6:cls, reg xlims26:*, reg xlims27:V, reg p109:p(V +), reg r550:V, reg r551:V, reg r552:V, reg n4:*, reg n5:V, reg rep_int3:cls, reg r553:V, reg p110:p(V +), reg sym62:cls, reg base62:cls, reg guard62:L, reg r555:V, reg r556:V, reg pres18:*, reg pres19:V, reg c186:L, reg dr138:V, reg dc69:L, reg dx173:V, reg dx174:V, reg i350:*, reg i351:V, reg __50:cls, reg r557:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r558:V, reg r559:V, reg n6:*, reg n7:V, reg rep_int4:cls, reg r560:V, reg rep_int5:cls, reg r561:V, reg p111:p(V +), reg r563:V, reg i352:I, reg r564:V, reg i353:I, reg sym64:cls, reg base64:cls, reg guard64:L, reg r566:V, reg r567:V, reg n_tms12:*, reg n_tms13:V, reg invisible:cls, reg r568:V |
    mkenv;
    st model = model;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L1() else L2(envir);
  L1():
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        formula = ldf formula;
        p = prom<V +>{
          model1 = ld model;
          model2 = force? model1;
          checkMissing(model2);
          return model2;
        };
        r1 = dyn formula(p);
        return r1;
      };
      r3 = dyn environment(p1);
      return r3;
    };
    goto L2(p2);
  L2(envir_orDefault):
    st envir = envir_orDefault;
    partial_resid_isMissing = missing.0(partial_resid);
    if partial_resid_isMissing then L3(FALSE) else L3(partial_resid);
  L3(partial_resid_orDefault):
    st `partial.resid` = partial_resid_orDefault;
    rug_isMissing = missing.0(rug);
    if rug_isMissing then L4(FALSE) else L4(rug);
  L4(rug_orDefault):
    st rug = rug_orDefault;
    terms_isMissing = missing.0(terms);
    if terms_isMissing then L5(NULL) else L5(terms);
  L5(terms_orDefault):
    st terms = terms_orDefault;
    se_isMissing = missing.0(se);
    if se_isMissing then L6(FALSE) else L6(se);
  L6(se_orDefault):
    st se = se_orDefault;
    xlabs_isMissing = missing.0(xlabs);
    if xlabs_isMissing then L7(NULL) else L7(xlabs);
  L7(xlabs_orDefault):
    st xlabs = xlabs_orDefault;
    ylabs_isMissing = missing.0(ylabs);
    if ylabs_isMissing then L8(NULL) else L8(ylabs);
  L8(ylabs_orDefault):
    st ylabs = ylabs_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L9(NULL) else L9(main);
  L9(main_orDefault):
    st main = main_orDefault;
    col_term_isMissing = missing.0(col_term);
    if col_term_isMissing then L10(2.0) else L10(col_term);
  L10(col_term_orDefault):
    st `col.term` = col_term_orDefault;
    lwd_term_isMissing = missing.0(lwd_term);
    if lwd_term_isMissing then L11(1.5) else L11(lwd_term);
  L11(lwd_term_orDefault):
    st `lwd.term` = lwd_term_orDefault;
    col_se_isMissing = missing.0(col_se);
    if col_se_isMissing then L12("orange") else L12(col_se);
  L12(col_se_orDefault):
    st `col.se` = col_se_orDefault;
    lty_se_isMissing = missing.0(lty_se);
    if lty_se_isMissing then L13(2.0) else L13(lty_se);
  L13(lty_se_orDefault):
    st `lty.se` = lty_se_orDefault;
    lwd_se_isMissing = missing.0(lwd_se);
    if lwd_se_isMissing then L14(1.0) else L14(lwd_se);
  L14(lwd_se_orDefault):
    st `lwd.se` = lwd_se_orDefault;
    col_res_isMissing = missing.0(col_res);
    if col_res_isMissing then L15("gray") else L15(col_res);
  L15(col_res_orDefault):
    st `col.res` = col_res_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L16(1.0) else L16(cex);
  L16(cex_orDefault):
    st cex = cex_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L17() else L18(pch);
  L17():
    p3 = prom<V +>{
      par = ldf par;
      r5 = dyn par("pch");
      return r5;
    };
    goto L18(p3);
  L18(pch_orDefault):
    st pch = pch_orDefault;
    col_smth_isMissing = missing.0(col_smth);
    if col_smth_isMissing then L19("darkred") else L19(col_smth);
  L19(col_smth_orDefault):
    st `col.smth` = col_smth_orDefault;
    lty_smth_isMissing = missing.0(lty_smth);
    if lty_smth_isMissing then L20(2.0) else L20(lty_smth);
  L20(lty_smth_orDefault):
    st `lty.smth` = lty_smth_orDefault;
    span_smth_isMissing = missing.0(span_smth);
    if span_smth_isMissing then L21() else L22(span_smth);
  L21():
    p4 = prom<V +>{
      return 0.6666666666666666;
    };
    goto L22(p4);
  L22(span_smth_orDefault):
    st `span.smth` = span_smth_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L23() else L24(ask);
  L23():
    p5 = prom<V +>{
      dev_interactive = ldf `dev.interactive`;
      r8 = dyn dev_interactive();
      c = `as.logical`(r8);
      if c then L1() else L0(c);
    L0(c2):
      return c2;
    L1():
      nb_fig = ld `nb.fig`;
      nb_fig1 = force? nb_fig;
      checkMissing(nb_fig1);
      n_tms = ld `n.tms`;
      n_tms1 = force? n_tms;
      checkMissing(n_tms1);
      r9 = `<`(nb_fig1, n_tms1);
      c3 = `as.logical`(r9);
      c4 = `&&`(c, c3);
      goto L0(c4);
    };
    goto L24(p5);
  L24(ask_orDefault):
    st ask = ask_orDefault;
    use_factor_levels_isMissing = missing.0(use_factor_levels);
    if use_factor_levels_isMissing then L25(TRUE) else L25(use_factor_levels);
  L25(use_factor_levels_orDefault):
    st `use.factor.levels` = use_factor_levels_orDefault;
    smooth_isMissing = missing.0(smooth);
    if smooth_isMissing then L26(NULL) else L26(smooth);
  L26(smooth_orDefault):
    st smooth = smooth_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L27("common") else L27(ylim);
  L27(ylim_orDefault):
    st ylim = ylim_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L28(TRUE) else L28(plot);
  L28(plot_orDefault):
    st plot = plot_orDefault;
    transform_x_isMissing = missing.0(transform_x);
    if transform_x_isMissing then L29(FALSE) else L29(transform_x);
  L29(transform_x_orDefault):
    st `transform.x` = transform_x_orDefault;
    st `...` = ddd;
    terms1 = ld terms;
    check L220() else D0();
  D0():
    deopt 0 [terms1];
  L220():
    terms2 = force? terms1;
    checkMissing(terms2);
    st `which.terms` = terms2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L221() else L222();
  L30(r12):
    c7 = `as.logical`(r12);
    if c7 then L224() else L31();
  L221():
    terms3 = ld terms;
    check L223() else D1();
  L222():
    r11 = dyn base(<sym terms>);
    goto L30(r11);
  D1():
    deopt 4 [terms3];
  L31():
    predict1 = ldf predict;
    check L228() else D4();
  L32(r16):
    st terms = r16;
    ncol = ldf ncol;
    check L230() else D6();
  L223():
    terms4 = force? terms3;
    checkMissing(terms4);
    c6 = `==`(terms4, NULL);
    goto L30(c6);
  L224():
    predict = ldf predict;
    check L225() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 16 [];
  D6():
    deopt 27 [];
  L225():
    p6 = prom<V +>{
      model3 = ld model;
      model4 = force? model3;
      checkMissing(model4);
      return model4;
    };
    p7 = prom<V +>{
      se1 = ld se;
      se2 = force? se1;
      checkMissing(se2);
      return se2;
    };
    r15 = dyn predict[, type, `se.fit`](p6, "terms", p7);
    check L226() else D3();
  L228():
    p8 = prom<V +>{
      model5 = ld model;
      model6 = force? model5;
      checkMissing(model6);
      return model6;
    };
    p9 = prom<V +>{
      se3 = ld se;
      se4 = force? se3;
      checkMissing(se4);
      return se4;
    };
    p10 = prom<V +>{
      terms5 = ld terms;
      terms6 = force? terms5;
      checkMissing(terms6);
      return terms6;
    };
    r20 = dyn predict1[, type, `se.fit`, terms](p8, "terms", p9, p10);
    check L229() else D5();
  L230():
    p12 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p11 = prom<V +>{
        se5 = ld se;
        se6 = force? se5;
        checkMissing(se6);
        c8 = `as.logical`(se6);
        if c8 then L1() else L0();
      L0():
        terms11 = ld terms;
        terms12 = force? terms11;
        checkMissing(terms12);
        return terms12;
      L1():
        terms7 = ld terms;
        terms8 = force? terms7;
        checkMissing(terms8);
        c9 = `is.object`(terms8);
        if c9 then L3() else L4(terms8);
      L2(dx1):
        return dx1;
      L3():
        dr = tryDispatchBuiltin.1("$", terms8);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L5() else L4(dr);
      L4(terms10):
        r21 = `$`(terms10, <sym fit>);
        goto L2(r21);
      L5():
        dx = getTryDispatchBuiltinValue(dr);
        goto L2(dx);
      };
      r23 = dyn as_matrix(p11);
      st tms = r23;
      invisible.0();
      return r23;
    };
    r25 = dyn ncol(p12);
    check L231() else D7();
  D3():
    deopt 14 [r15];
  D5():
    deopt 24 [r20];
  D7():
    deopt 29 [r25];
  L226():
    goto L32(r15);
  L229():
    goto L32(r20);
  L231():
    st `n.tms` = r25;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L232() else L233();
  L33(r27):
    st `transform.x` = r27;
    model_frame = ldf `model.frame`;
    check L237() else D11();
  L232():
    transform_x1 = ld `transform.x`;
    check L234() else D8();
  L233():
    r26 = dyn base1(<sym transform.x>, <sym n.tms>);
    goto L33(r26);
  D8():
    deopt 33 [transform_x1];
  D11():
    deopt 41 [];
  L234():
    transform_x2 = force? transform_x1;
    checkMissing(transform_x2);
    n_tms2 = ld `n.tms`;
    check L235() else D9();
  L237():
    p13 = prom<V +>{
      model7 = ld model;
      model8 = force? model7;
      checkMissing(model8);
      return model8;
    };
    r30 = dyn model_frame(p13);
    check L238() else D12();
  D9():
    deopt 35 [n_tms2];
  D12():
    deopt 43 [r30];
  L235():
    n_tms3 = force? n_tms2;
    checkMissing(n_tms3);
    rep_len = ldf rep_len in base;
    r28 = dyn rep_len(transform_x2, n_tms3);
    check L236() else D10();
  L238():
    st mf = r30;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L239() else L240();
  D10():
    deopt 38 [r28];
  L34(r32):
    c11 = `as.logical`(r32);
    if c11 then L242() else L35();
  L236():
    goto L33(r28);
  L239():
    data1 = ld data;
    check L241() else D13();
  L240():
    r31 = dyn base2(<sym data>);
    goto L34(r31);
  D13():
    deopt 46 [data1];
  L35():
    goto L36();
  L36():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L246() else L247();
  L241():
    data2 = force? data1;
    checkMissing(data2);
    c10 = `==`(data2, NULL);
    goto L34(c10);
  L242():
    eval = ldf eval;
    check L243() else D14();
  D14():
    deopt 50 [];
  L37(r40):
    c15 = `as.logical`(r40);
    if c15 then L249() else L38();
  L243():
    p14 = prom<V +>{
      model9 = ld model;
      model10 = force? model9;
      checkMissing(model10);
      c12 = `is.object`(model10);
      if c12 then L1() else L2(model10);
    L0(dx3):
      c13 = `is.object`(dx3);
      if c13 then L5() else L6(dx3);
    L1():
      dr2 = tryDispatchBuiltin.1("$", model10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(model12):
      r33 = `$`(model12, <sym call>);
      goto L0(r33);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L4(dx7):
      return dx7;
    L5():
      dr4 = tryDispatchBuiltin.1("$", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      r34 = `$`(dx5, <sym data>);
      goto L4(r34);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx6);
    };
    p15 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r37 = dyn eval(p14, p15);
    check L244() else D15();
  L246():
    data3 = ld data;
    check L248() else D16();
  L247():
    r39 = dyn base3(<sym data>);
    goto L37(r39);
  D15():
    deopt 53 [r37];
  D16():
    deopt 58 [data3];
  L38():
    goto L39();
  L39():
    NROW = ldf NROW;
    check L252() else D18();
  L244():
    st data = r37;
    goto L36();
  L248():
    data4 = force? data3;
    checkMissing(data4);
    c14 = `==`(data4, NULL);
    goto L37(c14);
  L249():
    mf = ld mf;
    check L250() else D17();
  D17():
    deopt 61 [mf];
  D18():
    deopt 67 [];
  L250():
    mf1 = force? mf;
    checkMissing(mf1);
    st data = mf1;
    goto L39();
  L252():
    p16 = prom<V +>{
      tms = ld tms;
      tms1 = force? tms;
      checkMissing(tms1);
      return tms1;
    };
    r42 = dyn NROW(p16);
    check L253() else D19();
  D19():
    deopt 69 [r42];
  L253():
    NROW1 = ldf NROW;
    check L254() else D20();
  D20():
    deopt 70 [r42];
  L254():
    p17 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r44 = dyn NROW1(p17);
    check L255() else D21();
  D21():
    deopt 72 [r42, r44];
  L255():
    r45 = `<`(r42, r44);
    c16 = `as.logical`(r45);
    if c16 then L256() else L40();
  L40():
    goto L42(NULL);
  L42(r53):
    st `use.rows` = r53;
    colnames = ldf colnames;
    check L265() else D27();
  L256():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L257() else L258();
  D27():
    deopt 92 [];
  L41(r47):
    goto L42(r47);
  L257():
    rownames = ldf rownames;
    check L259() else D22();
  L258():
    r46 = dyn base4(<lang rownames(tms)>, <lang rownames(data)>);
    goto L41(r46);
  L265():
    p20 = prom<V +>{
      tms4 = ld tms;
      tms5 = force? tms4;
      checkMissing(tms5);
      return tms5;
    };
    r55 = dyn colnames(p20);
    check L266() else D28();
  D22():
    deopt 77 [];
  D28():
    deopt 94 [r55];
  L259():
    p18 = prom<V +>{
      tms2 = ld tms;
      tms3 = force? tms2;
      checkMissing(tms3);
      return tms3;
    };
    r49 = dyn rownames(p18);
    check L260() else D23();
  L266():
    st nmt = r55;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L267() else L268();
  D23():
    deopt 79 [r49];
  L43(r57):
    c17 = `as.logical`(r57);
    if c17 then L272() else L44();
  L260():
    rownames1 = ldf rownames;
    check L261() else D24();
  L267():
    grepl = ldf grepl;
    check L269() else D29();
  L268():
    r56 = dyn base5(<lang grepl(":", nmt, fixed=TRUE)>);
    goto L43(r56);
  D24():
    deopt 81 [];
  D29():
    deopt 99 [];
  L44():
    goto L45();
  L45():
    str2expression = ldf str2expression;
    check L276() else D34();
  L261():
    p19 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r51 = dyn rownames1(p19);
    check L262() else D25();
  L269():
    p21 = prom<V +>{
      nmt = ld nmt;
      nmt1 = force? nmt;
      checkMissing(nmt1);
      return nmt1;
    };
    r59 = dyn grepl[, , fixed](":", p21, TRUE);
    check L270() else D30();
  L272():
    warning = ldf warning;
    check L273() else D32();
  D25():
    deopt 83 [r51];
  D30():
    deopt 104 [r59];
  D32():
    deopt 108 [];
  D34():
    deopt 118 [];
  L262():
    match = ldf match in base;
    r52 = dyn match(r49, r51, NA_INT, NULL);
    check L263() else D26();
  L270():
    any = ldf any in base;
    r60 = dyn any(r59);
    check L271() else D31();
  L273():
    r61 = dyn warning[, domain, `immediate.`]("'model' appears to involve interactions: see the help page", NA_LGL, TRUE);
    check L274() else D33();
  L276():
    p22 = prom<V +>{
      nmt2 = ld nmt;
      nmt3 = force? nmt2;
      checkMissing(nmt3);
      return nmt3;
    };
    r64 = dyn str2expression(p22);
    check L277() else D35();
  D26():
    deopt 87 [r52];
  D31():
    deopt 106 [r60];
  D33():
    deopt 114 [r61];
  D35():
    deopt 120 [r64];
  L263():
    goto L41(r52);
  L271():
    goto L43(r60);
  L274():
    goto L45();
  L277():
    st cn = r64;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L278() else L279();
  L46(r66):
    r67 = `!`(r66);
    c19 = `as.logical`(r67);
    if c19 then L281() else L47();
  L278():
    smooth1 = ld smooth;
    check L280() else D36();
  L279():
    r65 = dyn base6(<sym smooth>);
    goto L46(r65);
  D36():
    deopt 123 [smooth1];
  L47():
    goto L48();
  L48():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L285() else L286();
  L280():
    smooth2 = force? smooth1;
    checkMissing(smooth2);
    c18 = `==`(smooth2, NULL);
    goto L46(c18);
  L281():
    match_fun = ldf `match.fun`;
    check L282() else D37();
  D37():
    deopt 128 [];
  L49(r72):
    c21 = `as.logical`(r72);
    if c21 then L288() else L50();
  L282():
    p23 = prom<V +>{
      smooth3 = ld smooth;
      smooth4 = force? smooth3;
      checkMissing(smooth4);
      return smooth4;
    };
    r69 = dyn match_fun(p23);
    check L283() else D38();
  L285():
    ylabs1 = ld ylabs;
    check L287() else D39();
  L286():
    r71 = dyn base7(<sym ylabs>);
    goto L49(r71);
  D38():
    deopt 130 [r69];
  D39():
    deopt 135 [ylabs1];
  L50():
    goto L51();
  L51():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L292() else L293();
  L283():
    st smooth = r69;
    goto L48();
  L287():
    ylabs2 = force? ylabs1;
    checkMissing(ylabs2);
    c20 = `==`(ylabs2, NULL);
    goto L49(c20);
  L288():
    paste = ldf paste;
    check L289() else D40();
  D40():
    deopt 139 [];
  L52(r77):
    c23 = `as.logical`(r77);
    if c23 then L295() else L53();
  L289():
    p24 = prom<V +>{
      nmt4 = ld nmt;
      nmt5 = force? nmt4;
      checkMissing(nmt5);
      return nmt5;
    };
    r74 = dyn paste("Partial for", p24);
    check L290() else D41();
  L292():
    main1 = ld main;
    check L294() else D42();
  L293():
    r76 = dyn base8(<sym main>);
    goto L52(r76);
  D41():
    deopt 142 [r74];
  D42():
    deopt 147 [main1];
  L53():
    sym9 = ldf `is.logical`;
    base9 = ldf `is.logical` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L297() else L298();
  L54():
    sym11 = ldf rep_len;
    base11 = ldf rep_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L314() else L315();
  L290():
    st ylabs = r74;
    goto L51();
  L294():
    main2 = force? main1;
    checkMissing(main2);
    c22 = `==`(main2, NULL);
    goto L52(c22);
  L295():
    st main = "";
    goto L54();
  L55(r80):
    c25 = `as.logical`(r80);
    if c25 then L300() else L56();
  L61(r90):
    st main = r90;
    envir3 = ld envir;
    check L319() else D53();
  L297():
    main3 = ld main;
    check L299() else D43();
  L298():
    r79 = dyn base9(<sym main>);
    goto L55(r79);
  L314():
    main9 = ld main;
    check L316() else D50();
  L315():
    r89 = dyn base11(<sym main>, <sym n.tms>);
    goto L61(r89);
  D43():
    deopt 154 [main3];
  D50():
    deopt 180 [main9];
  D53():
    deopt 187 [envir3];
  L56():
    sym10 = ldf `is.character`;
    base10 = ldf `is.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L307() else L308();
  L299():
    main4 = force? main3;
    checkMissing(main4);
    c24 = `is.logical`(main4);
    goto L55(c24);
  L300():
    main5 = ld main;
    check L301() else D44();
  L316():
    main10 = force? main9;
    checkMissing(main10);
    n_tms4 = ld `n.tms`;
    check L317() else D51();
  L319():
    envir4 = force? envir3;
    checkMissing(envir4);
    st pf = envir4;
    r92 = clos inner3761132424;
    st carrier = r92;
    r93 = clos inner1339249548;
    st `carrier.name` = r93;
    _in_ = ldf `%in%`;
    check L320() else D54();
  D44():
    deopt 157 [main5];
  D51():
    deopt 182 [n_tms4];
  D54():
    deopt 197 [];
  L59(r86):
    r87 = `!`(r86);
    c29 = `as.logical`(r87);
    if c29 then L310() else L60();
  L301():
    main6 = force? main5;
    checkMissing(main6);
    c26 = `as.logical`(main6);
    if c26 then L302() else L57();
  L307():
    main7 = ld main;
    check L309() else D47();
  L308():
    r85 = dyn base10(<sym main>);
    goto L59(r85);
  L317():
    n_tms5 = force? n_tms4;
    checkMissing(n_tms5);
    rep_len1 = ldf rep_len in base;
    r91 = dyn rep_len1(main10, n_tms5);
    check L318() else D52();
  L320():
    p26 = prom<V +>{
      nmt6 = ld nmt;
      nmt7 = force? nmt6;
      checkMissing(nmt7);
      return nmt7;
    };
    p27 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      mf3 = ld mf;
      mf4 = force? mf3;
      checkMissing(mf4);
      names = ldf names in base;
      r97 = dyn names(mf4);
      goto L0(r97);
    L2():
      r95 = dyn base12(<sym mf>);
      goto L0(r95);
    };
    r99 = dyn _in_(p26, p27);
    check L321() else D55();
  D47():
    deopt 168 [main7];
  D52():
    deopt 185 [r91];
  D55():
    deopt 200 [r99];
  L57():
    goto L58("");
  L58(r84):
    st main = r84;
    goto L54();
  L60():
    goto L54();
  L302():
    deparse = ldf deparse;
    check L303() else D45();
  L309():
    main8 = force? main7;
    checkMissing(main8);
    c28 = `is.character`(main8);
    goto L59(c28);
  L310():
    stop = ldf stop;
    check L311() else D48();
  L318():
    goto L61(r91);
  L321():
    st `in.mf` = r99;
    sapply = ldf sapply;
    check L322() else D56();
  D45():
    deopt 160 [];
  D48():
    deopt 173 [];
  D56():
    deopt 203 [];
  L303():
    p25 = prom<V +>{
      model13 = ld model;
      model14 = force? model13;
      checkMissing(model14);
      c27 = `is.object`(model14);
      if c27 then L1() else L2(model14);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", model14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(model16):
      r81 = `$`(model16, <sym call>);
      goto L0(r81);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r83 = dyn deparse(p25, 500.0);
    check L304() else D46();
  L311():
    r88 = dyn stop("'main' must be TRUE, FALSE, NULL or character (vector).");
    check L312() else D49();
  L322():
    p28 = prom<V +>{
      nmt8 = ld nmt;
      nmt9 = force? nmt8;
      checkMissing(nmt9);
      return nmt9;
    };
    p29 = prom<V +>{
      r101 = clos inner3002224933;
      return r101;
    };
    r103 = dyn sapply(p28, p29);
    check L323() else D57();
  D46():
    deopt 163 [r83];
  D49():
    deopt 175 [r88];
  D57():
    deopt 206 [r103];
  L304():
    goto L58(r83);
  L312():
    goto L54();
  L323():
    st `is.fac` = r103;
    plot1 = ld plot;
    check L324() else D58();
  D58():
    deopt 208 [plot1];
  L324():
    plot2 = force? plot1;
    checkMissing(plot2);
    r104 = `!`(plot2);
    c30 = `as.logical`(r104);
    if c30 then L325() else L62();
  L62():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L442() else L443();
  L325():
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L326() else L327();
  L63(r106):
    st outlist = r106;
    n_tms6 = ld `n.tms`;
    check L333() else D62();
  L97(r188):
    r189 = `!`(r188);
    c71 = `as.logical`(r189);
    if c71 then L445() else L98();
  L326():
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L328() else L329();
  L327():
    r105 = dyn base13("list", <lang sum(in.mf)>);
    goto L63(r105);
  L442():
    smooth5 = ld smooth;
    check L444() else D109();
  L443():
    r187 = dyn base23(<sym smooth>);
    goto L97(r187);
  D62():
    deopt 224 [1, n_tms6];
  D109():
    deopt 401 [smooth5];
  L64(r108):
    vector = ldf vector in base;
    r110 = dyn vector("list", r108);
    check L332() else D61();
  L98():
    goto L99();
  L99():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L449() else L450();
  L328():
    in_mf = ld `in.mf`;
    check L330() else D59();
  L329():
    r107 = dyn base14(<sym in.mf>);
    goto L64(r107);
  L333():
    n_tms7 = force? n_tms6;
    checkMissing(n_tms7);
    r111 = `:`(1, n_tms7);
    s = toForSeq(r111);
    l = length(s);
    i = 0;
    goto L65(i);
  L444():
    smooth6 = force? smooth5;
    checkMissing(smooth6);
    c70 = `==`(smooth6, NULL);
    goto L97(c70);
  L445():
    match_fun1 = ldf `match.fun`;
    check L446() else D110();
  D59():
    deopt 216 [in_mf];
  D61():
    deopt 221 [r110];
  D110():
    deopt 406 [];
  L65(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L334() else L87();
  L100(r194):
    c73 = `as.logical`(r194);
    if c73 then L452() else L101();
  L330():
    in_mf1 = force? in_mf;
    checkMissing(in_mf1);
    sum = ldf sum in base;
    r109 = dyn sum(in_mf1);
    check L331() else D60();
  L332():
    goto L63(r110);
  L446():
    p42 = prom<V +>{
      smooth7 = ld smooth;
      smooth8 = force? smooth7;
      checkMissing(smooth8);
      return smooth8;
    };
    r191 = dyn match_fun1(p42);
    check L447() else D111();
  L449():
    ylabs3 = ld ylabs;
    check L451() else D112();
  L450():
    r193 = dyn base24(<sym ylabs>);
    goto L100(r193);
  D60():
    deopt 219 [r109];
  D111():
    deopt 408 [r191];
  D112():
    deopt 413 [ylabs3];
  L87():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    in_mf2 = ld `in.mf`;
    check L335() else D63();
  L101():
    goto L102();
  L102():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L456() else L457();
  L331():
    goto L64(r109);
  L334():
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L404() else L405();
  L447():
    st smooth = r191;
    goto L99();
  L451():
    ylabs4 = force? ylabs3;
    checkMissing(ylabs4);
    c72 = `==`(ylabs4, NULL);
    goto L100(c72);
  L452():
    paste1 = ldf paste;
    check L453() else D113();
  D63():
    deopt 227 [i2, in_mf2];
  D113():
    deopt 417 [];
  L88(r164):
    l4 = ld outlist;
    attr__ = ldf `attr<-`;
    check L408() else D94();
  L103(r199):
    c75 = `as.logical`(r199);
    if c75 then L459() else L104();
  L335():
    in_mf3 = force? in_mf2;
    checkMissing(in_mf3);
    c32 = `is.object`(in_mf3);
    if c32 then L336() else L337(i2, in_mf3);
  L404():
    terms17 = ld terms;
    check L406() else D92();
  L405():
    r163 = dyn base19(<sym terms>, "constant");
    goto L88(r163);
  L453():
    p43 = prom<V +>{
      nmt14 = ld nmt;
      nmt15 = force? nmt14;
      checkMissing(nmt15);
      return nmt15;
    };
    r196 = dyn paste1("Partial for", p43);
    check L454() else D114();
  L456():
    main11 = ld main;
    check L458() else D115();
  L457():
    r198 = dyn base25(<sym main>);
    goto L103(r198);
  D92():
    deopt 343 [terms17];
  D94():
    deopt 349 [r164, l4, r164];
  D114():
    deopt 420 [r196];
  D115():
    deopt 425 [main11];
  L66(i8, dx11):
    r113 = `!`(dx11);
    c33 = `as.logical`(r113);
    if c33 then L340() else L67();
  L104():
    sym26 = ldf `is.logical`;
    base26 = ldf `is.logical` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L461() else L462();
  L105():
    sym28 = ldf rep_len;
    base28 = ldf rep_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L478() else L479();
  L336():
    dr8 = tryDispatchBuiltin.1("[", in_mf3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L338() else L337(i2, dr8);
  L337(i6, in_mf5):
    i9 = ld i;
    check L339() else D64();
  L406():
    terms18 = force? terms17;
    checkMissing(terms18);
    attr = ldf attr in base;
    r165 = dyn attr(terms18, "constant");
    check L407() else D93();
  L408():
    r166 = dyn attr__(l4, NULL, "constant", r164);
    check L409() else D95();
  L454():
    st ylabs = r196;
    goto L102();
  L458():
    main12 = force? main11;
    checkMissing(main12);
    c74 = `==`(main12, NULL);
    goto L103(c74);
  L459():
    st main = "";
    goto L105();
  D64():
    deopt 229 [i6, in_mf5, i9];
  D93():
    deopt 347 [r165];
  D95():
    deopt 352 [r164, r166];
  L67():
    is_fac = ld `is.fac`;
    check L343() else D65();
  L106(r202):
    c77 = `as.logical`(r202);
    if c77 then L464() else L107();
  L112(r212):
    st main = r212;
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L483() else L484();
  L338():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L66(i2, dx10);
  L339():
    i10 = force? i9;
    __ = ldf `[` in base;
    r112 = dyn __(in_mf5, i10);
    goto L66(i6, r112);
  L340():
    goto L65(i8);
  L407():
    goto L88(r165);
  L409():
    st outlist = r166;
    se9 = ld se;
    check L410() else D96();
  L461():
    main13 = ld main;
    check L463() else D116();
  L462():
    r201 = dyn base26(<sym main>);
    goto L106(r201);
  L478():
    main19 = ld main;
    check L480() else D123();
  L479():
    r211 = dyn base28(<sym main>, <sym n.tms>);
    goto L112(r211);
  D65():
    deopt 237 [i8, is_fac];
  D96():
    deopt 354 [se9];
  D116():
    deopt 432 [main13];
  D123():
    deopt 458 [main19];
  L107():
    sym27 = ldf `is.character`;
    base27 = ldf `is.character` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L471() else L472();
  L113(r215):
    c83 = `as.logical`(r215);
    if c83 then L486() else L114();
  L343():
    is_fac1 = force? is_fac;
    checkMissing(is_fac1);
    c34 = `is.object`(is_fac1);
    if c34 then L344() else L345(i8, is_fac1);
  L410():
    se10 = force? se9;
    checkMissing(se10);
    c54 = `as.logical`(se10);
    if c54 then L411() else L89(c54);
  L463():
    main14 = force? main13;
    checkMissing(main14);
    c76 = `is.logical`(main14);
    goto L106(c76);
  L464():
    main15 = ld main;
    check L465() else D117();
  L480():
    main20 = force? main19;
    checkMissing(main20);
    n_tms8 = ld `n.tms`;
    check L481() else D124();
  L483():
    xlabs1 = ld xlabs;
    check L485() else D126();
  L484():
    r214 = dyn base29(<sym xlabs>);
    goto L113(r214);
  D117():
    deopt 435 [main15];
  D124():
    deopt 460 [n_tms8];
  D126():
    deopt 466 [xlabs1];
  L69(i18, dx13):
    c35 = `as.logical`(dx13);
    if c35 then L348() else L70();
  L89(c56):
    c67 = `as.logical`(c56);
    if c67 then L419() else L92();
  L110(r208):
    r209 = `!`(r208);
    c81 = `as.logical`(r209);
    if c81 then L474() else L111();
  L114():
    goto L118();
  L118():
    partial_resid1 = ld `partial.resid`;
    check L498() else D133();
  L344():
    dr10 = tryDispatchBuiltin.1("[", is_fac1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L346() else L345(i8, dr10);
  L345(i16, is_fac3):
    i19 = ld i;
    check L347() else D66();
  L411():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L412() else L413();
  L465():
    main16 = force? main15;
    checkMissing(main16);
    c78 = `as.logical`(main16);
    if c78 then L466() else L108();
  L471():
    main17 = ld main;
    check L473() else D120();
  L472():
    r207 = dyn base27(<sym main>);
    goto L110(r207);
  L481():
    n_tms9 = force? n_tms8;
    checkMissing(n_tms9);
    rep_len2 = ldf rep_len in base;
    r213 = dyn rep_len2(main20, n_tms9);
    check L482() else D125();
  L485():
    xlabs2 = force? xlabs1;
    checkMissing(xlabs2);
    c82 = `==`(xlabs2, NULL);
    goto L113(c82);
  L486():
    unlist = ldf unlist;
    check L487() else D127();
  D66():
    deopt 239 [i16, is_fac3, i19];
  D120():
    deopt 446 [main17];
  D125():
    deopt 463 [r213];
  D127():
    deopt 470 [];
  D133():
    deopt 491 [partial_resid1];
  L70():
    carrier = ldf carrier;
    check L375() else D77();
  L78(i46):
    se7 = ld se;
    check L393() else D86();
  L90(c59, r168):
    c64 = `as.logical`(r168);
    c65 = `&&`(c59, c64);
    goto L89(c65);
  L92():
    goto L94();
  L94():
    sapply1 = ldf sapply;
    check L431() else D103();
  L108():
    goto L109("");
  L109(r206):
    st main = r206;
    goto L105();
  L111():
    goto L105();
  L346():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L69(i8, dx12);
  L347():
    i20 = force? i19;
    __1 = ldf `[` in base;
    r115 = dyn __1(is_fac3, i20);
    goto L69(i16, r115);
  L348():
    mf5 = ld mf;
    check L349() else D67();
  L412():
    sym21 = ldf attr;
    base21 = ldf attr in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L414() else L415();
  L413():
    r167 = dyn base20(<lang attr(outlist, "constant")>);
    goto L90(c54, r167);
  L419():
    sym22 = ldf attr;
    base22 = ldf attr in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L420() else L421();
  L466():
    deparse1 = ldf deparse;
    check L467() else D118();
  L473():
    main18 = force? main17;
    checkMissing(main18);
    c80 = `is.character`(main18);
    goto L110(c80);
  L474():
    stop1 = ldf stop;
    check L475() else D121();
  L482():
    goto L112(r213);
  L487():
    p47 = prom<V +>{
      lapply = ldf lapply;
      p45 = prom<V +>{
        cn6 = ld cn;
        cn7 = force? cn6;
        checkMissing(cn7);
        return cn7;
      };
      p46 = prom<V +>{
        carrier_name2 = ld `carrier.name`;
        carrier_name3 = force? carrier_name2;
        checkMissing(carrier_name3);
        return carrier_name3;
      };
      r218 = dyn lapply(p45, p46);
      return r218;
    };
    r220 = dyn unlist(p47);
    check L488() else D128();
  L498():
    partial_resid2 = force? partial_resid1;
    checkMissing(partial_resid2);
    c85 = `as.logical`(partial_resid2);
    if c85 then L119(c85) else L499();
  D67():
    deopt 242 [i18, mf5];
  D77():
    deopt 280 [i18];
  D86():
    deopt 311 [i46, se7];
  D103():
    deopt 383 [];
  D118():
    deopt 438 [];
  D121():
    deopt 451 [];
  D128():
    deopt 472 [r220];
  L91(c62, r170):
    c63 = `==`(r170, NULL);
    goto L90(c62, c63);
  L93(r173):
    l5 = ld outlist;
    attr__1 = ldf `attr<-`;
    check L428() else D101();
  L119(c86):
    c95 = `as.logical`(c86);
    if c95 then L504() else L121();
  L349():
    mf6 = force? mf5;
    checkMissing(mf6);
    c36 = `is.object`(mf6);
    if c36 then L350() else L351(i18, mf6);
  L375():
    p31 = prom<V +>{
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      c41 = `is.object`(cn1);
      if c41 then L1() else L2(cn1);
    L0(dx22):
      return dx22;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", cn1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(cn3):
      i47 = ld i;
      i48 = force? i47;
      __5 = ldf `[[` in base;
      r128 = dyn __5(cn3, i48);
      goto L0(r128);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    p32 = prom<V +>{
      transform_x3 = ld `transform.x`;
      transform_x4 = force? transform_x3;
      checkMissing(transform_x4);
      c42 = `is.object`(transform_x4);
      if c42 then L1() else L2(transform_x4);
    L0(dx24):
      return dx24;
    L1():
      dr20 = tryDispatchBuiltin.1("[", transform_x4);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(transform_x6):
      i49 = ld i;
      i50 = force? i49;
      __6 = ldf `[` in base;
      r130 = dyn __6(transform_x6, i50);
      goto L0(r130);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx23);
    };
    r132 = dyn carrier(p31, p32);
    check L376() else D78();
  L393():
    se8 = force? se7;
    checkMissing(se8);
    c46 = `as.logical`(se8);
    if c46 then L394() else L84();
  L414():
    outlist = ld outlist;
    check L416() else D97();
  L415():
    r169 = dyn base21(<sym outlist>, "constant");
    goto L91(c54, r169);
  L420():
    terms19 = ld terms;
    check L422() else D99();
  L421():
    r172 = dyn base22(<lang `$`(terms, fit)>, "constant");
    goto L93(r172);
  L431():
    p40 = prom<V +>{
      cn4 = ld cn;
      cn5 = force? cn4;
      checkMissing(cn5);
      return cn5;
    };
    p41 = prom<V +>{
      carrier_name = ld `carrier.name`;
      carrier_name1 = force? carrier_name;
      checkMissing(carrier_name1);
      return carrier_name1;
    };
    r180 = dyn sapply1(p40, p41);
    check L432() else D104();
  L467():
    p44 = prom<V +>{
      model17 = ld model;
      model18 = force? model17;
      checkMissing(model18);
      c79 = `is.object`(model18);
      if c79 then L1() else L2(model18);
    L0(dx49):
      return dx49;
    L1():
      dr42 = tryDispatchBuiltin.1("$", model18);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(model20):
      r203 = `$`(model20, <sym call>);
      goto L0(r203);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx48);
    };
    r205 = dyn deparse1(p44, 500.0);
    check L468() else D119();
  L475():
    r210 = dyn stop1("'main' must be TRUE, FALSE, NULL or character (vector).");
    check L476() else D122();
  L488():
    st xlabs = r220;
    sym30 = ldf any;
    base30 = ldf any in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L489() else L490();
  L499():
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L500() else L501();
  D78():
    deopt 283 [i18, r132];
  D97():
    deopt 359 [c54, outlist];
  D99():
    deopt 368 [terms19];
  D101():
    deopt 375 [r173, l5, r173];
  D104():
    deopt 386 [r180];
  D119():
    deopt 441 [r205];
  D122():
    deopt 453 [r210];
  L71(i26, dx15):
    st xx = dx15;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L358() else L359();
  L84():
    data_frame1 = ldf `data.frame`;
    check L398() else D89();
  L85(i70, r152):
    l1 = ld outlist;
    c53 = `is.object`(l1);
    if c53 then L400() else L401(i70, r152, l1);
  L115(r222):
    c84 = `as.logical`(r222);
    if c84 then L493() else L116();
  L120(c90, r234):
    r235 = `!`(r234);
    c92 = `as.logical`(r235);
    c93 = `||`(c90, c92);
    goto L119(c93);
  L121():
    goto L126();
  L126():
    r242 = clos inner4215417412;
    st `se.lines` = r242;
    sym33 = ldf prod;
    base33 = ldf prod in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L518() else L519();
  L350():
    dr12 = tryDispatchBuiltin.1("[", mf6);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L352() else L351(i18, dr12);
  L351(i24, mf8):
    nmt10 = ld nmt;
    check L353() else D68();
  L376():
    st xx = r132;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L377() else L378();
  L394():
    data_frame = ldf `data.frame`;
    check L395() else D87();
  L416():
    outlist1 = force? outlist;
    checkMissing(outlist1);
    attr1 = ldf attr in base;
    r171 = dyn attr1(outlist1, "constant");
    check L417() else D98();
  L422():
    terms20 = force? terms19;
    checkMissing(terms20);
    c68 = `is.object`(terms20);
    if c68 then L424() else L425(terms20);
  L428():
    r176 = dyn attr__1(l5, NULL, "constant", r173);
    check L429() else D102();
  L432():
    c69 = `is.object`(r180);
    if c69 then L433() else L434(r180);
  L468():
    goto L109(r205);
  L476():
    goto L105();
  L489():
    transform_x7 = ld `transform.x`;
    check L491() else D129();
  L490():
    r221 = dyn base30(<sym transform.x>);
    goto L115(r221);
  L500():
    smooth9 = ld smooth;
    check L502() else D134();
  L501():
    r233 = dyn base31(<sym smooth>);
    goto L120(c85, r233);
  L504():
    residuals = ldf residuals;
    check L505() else D135();
  D68():
    deopt 245 [i24, mf8, nmt10];
  D87():
    deopt 314 [i46];
  D89():
    deopt 325 [i46];
  D98():
    deopt 363 [c54, r171];
  D102():
    deopt 378 [r173, r176];
  D129():
    deopt 476 [transform_x7];
  D134():
    deopt 494 [c85, smooth9];
  D135():
    deopt 500 [];
  L73(i35, r119):
    r120 = `!`(r119);
    c39 = `as.logical`(r120);
    if c39 then L361() else L74();
  L79(i53, r134):
    r135 = `!`(r134);
    c44 = `as.logical`(r135);
    if c44 then L380() else L80();
  L86(i76, dx43):
    st outlist = dx43;
    goto L65(i76);
  L95(dx47):
    l6 = ld outlist;
    names__ = ldf `names<-`;
    check L437() else D106();
  L116():
    goto L117(NULL);
  L117(r231):
    goto L118();
  L127(r244):
    st `nb.fig` = r244;
    ask1 = ld ask;
    check L523() else D143();
  L352():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L71(i18, dx14);
  L353():
    nmt11 = force? nmt10;
    checkMissing(nmt11);
    c37 = `is.object`(nmt11);
    if c37 then L354() else L355(i24, mf8, nmt11);
  L358():
    use_rows = ld `use.rows`;
    check L360() else D70();
  L359():
    r118 = dyn base15(<sym use.rows>);
    goto L73(i26, r118);
  L377():
    use_rows4 = ld `use.rows`;
    check L379() else D79();
  L378():
    r133 = dyn base17(<sym use.rows>);
    goto L79(i18, r133);
  L395():
    p35 = prom<V +>{
      xx16 = ld xx;
      xx17 = force? xx16;
      checkMissing(xx17);
      c47 = `is.object`(xx17);
      if c47 then L1() else L2(xx17);
    L0(dx29):
      return dx29;
    L1():
      dr24 = tryDispatchBuiltin.1("[", xx17);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(xx19):
      ww = ld ww;
      ww1 = force? ww;
      __8 = ldf `[` in base;
      r144 = dyn __8(xx19, ww1);
      goto L0(r144);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx28);
    };
    p36 = prom<V +>{
      tms6 = ld tms;
      tms7 = force? tms6;
      checkMissing(tms7);
      c48 = `is.object`(tms7);
      if c48 then L1() else L2(tms7);
    L0(dx31):
      return dx31;
    L1():
      dr26 = tryDispatchBuiltin.1("[", tms7);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(tms9):
      ww2 = ld ww;
      ww3 = force? ww2;
      i66 = ld i;
      i67 = force? i66;
      __9 = ldf `[` in base;
      r146 = dyn __9(tms9, ww3, i67);
      goto L0(r146);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx30);
    };
    p37 = prom<V +>{
      terms13 = ld terms;
      terms14 = force? terms13;
      checkMissing(terms14);
      c49 = `is.object`(terms14);
      if c49 then L2() else L3(terms14);
    L1(dx33):
      c50 = `is.object`(dx33);
      if c50 then L5() else L6(dx33);
    L2():
      dr28 = tryDispatchBuiltin.1("$", terms14);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L4() else L3(dr28);
    L3(terms16):
      r148 = `$`(terms16, <sym se.fit>);
      goto L1(r148);
    L0(dx37):
      return dx37;
    L4():
      dx32 = getTryDispatchBuiltinValue(dr28);
      goto L1(dx32);
    L5():
      dr30 = tryDispatchBuiltin.1("[", dx33);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dr30);
    L6(dx35):
      ww4 = ld ww;
      ww5 = force? ww4;
      i68 = ld i;
      i69 = force? i68;
      __10 = ldf `[` in base;
      r149 = dyn __10(dx35, ww5, i69);
      goto L0(r149);
    L7():
      dx36 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx36);
    };
    r151 = dyn data_frame[x, y, se, `row.names`](p35, p36, p37, NULL);
    check L396() else D88();
  L398():
    p38 = prom<V +>{
      xx20 = ld xx;
      xx21 = force? xx20;
      checkMissing(xx21);
      c51 = `is.object`(xx21);
      if c51 then L1() else L2(xx21);
    L0(dx39):
      return dx39;
    L1():
      dr32 = tryDispatchBuiltin.1("[", xx21);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(xx23):
      ww6 = ld ww;
      ww7 = force? ww6;
      __11 = ldf `[` in base;
      r153 = dyn __11(xx23, ww7);
      goto L0(r153);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    p39 = prom<V +>{
      tms10 = ld tms;
      tms11 = force? tms10;
      checkMissing(tms11);
      c52 = `is.object`(tms11);
      if c52 then L1() else L2(tms11);
    L0(dx41):
      return dx41;
    L1():
      dr34 = tryDispatchBuiltin.1("[", tms11);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(tms13):
      ww8 = ld ww;
      ww9 = force? ww8;
      i71 = ld i;
      i72 = force? i71;
      __12 = ldf `[` in base;
      r155 = dyn __12(tms13, ww9, i72);
      goto L0(r155);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx40);
    };
    r157 = dyn data_frame1[x, y, `row.names`](p38, p39, NULL);
    check L399() else D90();
  L400():
    dr36 = tryDispatchBuiltin.0("[[<-", l1, r152);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L402() else L401(i70, r152, dr36);
  L401(i74, r159, l3):
    i77 = ld i;
    check L403() else D91();
  L417():
    goto L91(c54, r171);
  L423(dx45):
    attr2 = ldf attr in base;
    r175 = dyn attr2(dx45, "constant");
    check L427() else D100();
  L424():
    dr38 = tryDispatchBuiltin.1("$", terms20);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L426() else L425(dr38);
  L425(terms22):
    r174 = `$`(terms22, <sym fit>);
    goto L423(r174);
  L429():
    st outlist = r176;
    goto L94();
  L433():
    dr40 = tryDispatchBuiltin.1("[", r180);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L435() else L434(dr40);
  L434(r182):
    in_mf6 = ld `in.mf`;
    check L436() else D105();
  L491():
    transform_x8 = force? transform_x7;
    checkMissing(transform_x8);
    any1 = ldf any in base;
    r223 = dyn any1(transform_x8);
    check L492() else D130();
  L493():
    ifelse = ldf ifelse;
    check L494() else D131();
  L502():
    smooth10 = force? smooth9;
    checkMissing(smooth10);
    c91 = `==`(smooth10, NULL);
    goto L120(c85, c91);
  L505():
    p53 = prom<V +>{
      model21 = ld model;
      model22 = force? model21;
      checkMissing(model22);
      return model22;
    };
    r237 = dyn residuals(p53, "partial");
    check L506() else D136();
  L518():
    par1 = ldf par;
    check L520() else D140();
  L519():
    r243 = dyn base33(<lang par("mfcol")>);
    goto L127(r243);
  D70():
    deopt 254 [i26, use_rows];
  D79():
    deopt 286 [i18, use_rows4];
  D88():
    deopt 323 [i46, r151];
  D90():
    deopt 332 [i46, r157];
  D91():
    deopt 334 [i74, r159, l3, r152, i77];
  D100():
    deopt 373 [r175];
  D105():
    deopt 387 [r182, in_mf6];
  D106():
    deopt 391 [dx47, l6, dx47];
  D130():
    deopt 479 [r223];
  D131():
    deopt 481 [];
  D136():
    deopt 503 [r237];
  D140():
    deopt 530 [];
  D143():
    deopt 536 [ask1];
  L72(i30, dx17):
    __3 = ldf `[` in base;
    r117 = dyn __3(mf6, <missing>, dx17);
    goto L71(i30, r117);
  L74():
    goto L76(i35);
  L76(i42):
    sym16 = ldf match;
    base16 = ldf match in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L368() else L369();
  L80():
    goto L82(i53);
  L82(i60):
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L387() else L388();
  L354():
    dr14 = tryDispatchBuiltin.1("[", nmt11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L356() else L355(i24, mf8, dr14);
  L355(i28, mf10, nmt13):
    i31 = ld i;
    check L357() else D69();
  L360():
    use_rows1 = force? use_rows;
    checkMissing(use_rows1);
    c38 = `==`(use_rows1, NULL);
    goto L73(i26, c38);
  L361():
    xx = ld xx;
    check L362() else D71();
  L379():
    use_rows5 = force? use_rows4;
    checkMissing(use_rows5);
    c43 = `==`(use_rows5, NULL);
    goto L79(i18, c43);
  L380():
    xx8 = ld xx;
    check L381() else D80();
  L396():
    goto L85(i46, r151);
  L399():
    goto L85(i46, r157);
  L402():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L86(i70, dx42);
  L403():
    i78 = force? i77;
    ____ = ldf `[[<-` in base;
    r162 = dyn ____(l3, r152, i78);
    goto L86(i74, r162);
  L426():
    dx44 = getTryDispatchBuiltinValue(dr38);
    goto L423(dx44);
  L427():
    goto L93(r175);
  L435():
    dx46 = getTryDispatchBuiltinValue(dr40);
    goto L95(dx46);
  L436():
    in_mf7 = force? in_mf6;
    __13 = ldf `[` in base;
    r183 = dyn __13(r182, in_mf7);
    goto L95(r183);
  L437():
    r184 = dyn names__(l6, NULL, dx47);
    check L438() else D107();
  L492():
    goto L115(r223);
  L494():
    p48 = prom<V +>{
      transform_x9 = ld `transform.x`;
      transform_x10 = force? transform_x9;
      checkMissing(transform_x10);
      return transform_x10;
    };
    p51 = prom<V +>{
      lapply1 = ldf lapply;
      p49 = prom<V +>{
        cn8 = ld cn;
        cn9 = force? cn8;
        checkMissing(cn9);
        return cn9;
      };
      p50 = prom<V +>{
        deparse2 = ld deparse;
        deparse3 = force? deparse2;
        checkMissing(deparse3);
        return deparse3;
      };
      r227 = dyn lapply1(p49, p50);
      return r227;
    };
    p52 = prom<V +>{
      xlabs3 = ld xlabs;
      xlabs4 = force? xlabs3;
      checkMissing(xlabs4);
      return xlabs4;
    };
    r230 = dyn ifelse(p48, p51, p52);
    check L495() else D132();
  L506():
    st pres = r237;
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L507() else L508();
  L520():
    r245 = dyn par1("mfcol");
    check L521() else D141();
  L523():
    ask2 = force? ask1;
    checkMissing(ask2);
    c99 = `as.logical`(ask2);
    if c99 then L524() else L128();
  D69():
    deopt 247 [i28, mf10, nmt13, i31];
  D71():
    deopt 258 [i35, xx];
  D80():
    deopt 290 [i53, xx8];
  D107():
    deopt 393 [dx47, r184];
  D132():
    deopt 485 [r230];
  D141():
    deopt 532 [r245];
  L77(i45, r123):
    st ww = r123;
    goto L78(i45);
  L83(i63, r138):
    st ww = r138;
    goto L78(i63);
  L122(r239):
    r240 = `!`(r239);
    c97 = `as.logical`(r240);
    if c97 then L510() else L123();
  L128():
    goto L130();
  L130():
    ylim1 = ld ylim;
    check L530() else D146();
  L356():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L72(i24, dx16);
  L357():
    i32 = force? i31;
    __2 = ldf `[` in base;
    r116 = dyn __2(nmt13, i32);
    goto L72(i28, r116);
  L362():
    xx1 = force? xx;
    checkMissing(xx1);
    c40 = `is.object`(xx1);
    if c40 then L363() else L364(i35, xx1);
  L368():
    levels = ldf levels;
    check L370() else D73();
  L369():
    r122 = dyn base16[, , nomatch](<lang levels(xx)>, <sym xx>, 0);
    goto L77(i42, r122);
  L381():
    xx9 = force? xx8;
    checkMissing(xx9);
    c45 = `is.object`(xx9);
    if c45 then L382() else L383(i53, xx9);
  L387():
    sort = ldf sort;
    check L389() else D82();
  L388():
    r137 = dyn base18(<lang sort(unique(xx))>, <sym xx>);
    goto L83(i60, r137);
  L438():
    st outlist = r184;
    outlist2 = ld outlist;
    check L439() else D108();
  L495():
    st xlabs = r230;
    goto L117(r230);
  L507():
    which_terms = ld `which.terms`;
    check L509() else D137();
  L508():
    r238 = dyn base32(<sym which.terms>);
    goto L122(r238);
  L521():
    prod = ldf prod in base;
    r246 = dyn prod(r245);
    check L522() else D142();
  L524():
    devAskNewPage = ldf devAskNewPage;
    check L525() else D144();
  D73():
    deopt 269 [i42];
  D82():
    deopt 301 [i60];
  D108():
    deopt 395 [outlist2];
  D137():
    deopt 506 [which_terms];
  D142():
    deopt 534 [r246];
  D144():
    deopt 539 [];
  D146():
    deopt 548 [ylim1];
  L75(i41, dx19):
    st xx = dx19;
    goto L76(i41);
  L81(i59, dx26):
    st xx = dx26;
    goto L82(i59);
  L123():
    goto L125(NULL);
  L125(dx52):
    goto L126();
  L363():
    dr16 = tryDispatchBuiltin.1("[", xx1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L365() else L364(i35, dr16);
  L364(i39, xx3):
    use_rows2 = ld `use.rows`;
    check L366() else D72();
  L370():
    p30 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r125 = dyn levels(p30);
    check L371() else D74();
  L382():
    dr22 = tryDispatchBuiltin.1("[", xx9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L384() else L383(i53, dr22);
  L383(i57, xx11):
    use_rows6 = ld `use.rows`;
    check L385() else D81();
  L389():
    p34 = prom<V +>{
      unique = ldf unique;
      p33 = prom<V +>{
        xx12 = ld xx;
        xx13 = force? xx12;
        checkMissing(xx13);
        return xx13;
      };
      r140 = dyn unique(p33);
      return r140;
    };
    r142 = dyn sort(p34);
    check L390() else D83();
  L439():
    outlist3 = force? outlist2;
    checkMissing(outlist3);
    popenv;
    return outlist3;
  L509():
    which_terms1 = force? which_terms;
    checkMissing(which_terms1);
    c96 = `==`(which_terms1, NULL);
    goto L122(c96);
  L510():
    pres = ld pres;
    check L511() else D138();
  L522():
    goto L127(r246);
  L525():
    r247 = dyn devAskNewPage(TRUE);
    check L526() else D145();
  L530():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    st ylims = ylim2;
    sym35 = ldf identical;
    base35 = ldf identical in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L531() else L532();
  D72():
    deopt 260 [i39, xx3, use_rows2];
  D74():
    deopt 271 [i42, r125];
  D81():
    deopt 292 [i57, xx11, use_rows6];
  D83():
    deopt 303 [i60, r142];
  D138():
    deopt 510 [pres];
  D145():
    deopt 541 [r247];
  L131(r253):
    c100 = `as.logical`(r253);
    if c100 then L535() else L132();
  L365():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L75(i35, dx18);
  L366():
    use_rows3 = force? use_rows2;
    __4 = ldf `[` in base;
    r121 = dyn __4(xx3, use_rows3);
    goto L75(i39, r121);
  L371():
    xx6 = ld xx;
    check L372() else D75();
  L384():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L81(i53, dx25);
  L385():
    use_rows7 = force? use_rows6;
    __7 = ldf `[` in base;
    r136 = dyn __7(xx11, use_rows7);
    goto L81(i57, r136);
  L390():
    xx14 = ld xx;
    check L391() else D84();
  L511():
    pres1 = force? pres;
    checkMissing(pres1);
    c98 = `is.object`(pres1);
    if c98 then L512() else L513(pres1);
  L526():
    st oask = r247;
    sym34 = ldf `on.exit`;
    base34 = ldf `on.exit` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L527() else L528();
  L531():
    ylims = ld ylims;
    check L533() else D147();
  L532():
    r252 = dyn base35(<sym ylims>, "common");
    goto L131(r252);
  D75():
    deopt 272 [i42, xx6];
  D84():
    deopt 304 [i60, xx14];
  D147():
    deopt 553 [ylims];
  L124(dx51):
    st pres = dx51;
    goto L125(dx51);
  L129(r249):
    goto L130();
  L132():
    goto L143();
  L143():
    n_tms10 = ld `n.tms`;
    check L579() else D165();
  L372():
    xx7 = force? xx6;
    checkMissing(xx7);
    match1 = ldf match in base;
    r126 = dyn match1(r125, xx7, 0, NULL);
    check L373() else D76();
  L391():
    xx15 = force? xx14;
    checkMissing(xx15);
    match2 = ldf match in base;
    r143 = dyn match2(r142, xx15, NA_INT, NULL);
    check L392() else D85();
  L512():
    dr44 = tryDispatchBuiltin.1("[", pres1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L514() else L513(dr44);
  L513(pres3):
    which_terms2 = ld `which.terms`;
    check L515() else D139();
  L527():
    on_exit = ldf `on.exit` in base;
    r250 = dyn on_exit(<lang devAskNewPage(oask)>);
    goto L129(r250);
  L528():
    r248 = dyn base34(<lang devAskNewPage(oask)>);
    goto L129(r248);
  L533():
    ylims1 = force? ylims;
    checkMissing(ylims1);
    identical = ldf identical in base;
    r254 = dyn identical(ylims1, "common", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L534() else D148();
  L535():
    se11 = ld se;
    check L536() else D149();
  D76():
    deopt 277 [i42, r126];
  D85():
    deopt 309 [i60, r143];
  D139():
    deopt 513 [pres3, which_terms2];
  D148():
    deopt 564 [r254];
  D149():
    deopt 565 [se11];
  D165():
    deopt 635 [1, n_tms10];
  L373():
    goto L77(i42, r126);
  L392():
    goto L83(i60, r143);
  L514():
    dx50 = getTryDispatchBuiltinValue(dr44);
    goto L124(dx50);
  L515():
    which_terms3 = force? which_terms2;
    __14 = ldf `[` in base;
    r241 = dyn __14(pres1, <missing>, which_terms3, FALSE);
    goto L124(r241);
  L534():
    goto L131(r254);
  L536():
    se12 = force? se11;
    checkMissing(se12);
    r255 = `!`(se12);
    c101 = `as.logical`(r255);
    if c101 then L537() else L133();
  L579():
    n_tms11 = force? n_tms10;
    checkMissing(n_tms11);
    r292 = `:`(1, n_tms11);
    s1 = toForSeq(r292);
    l10 = length(s1);
    i79 = 0;
    goto L144(i79);
  L133():
    sym37 = ldf range;
    base37 = ldf range in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L543() else L544();
  L135(r259):
    st ylims = r259;
    partial_resid3 = ld `partial.resid`;
    check L558() else D157();
  L144(i80):
    i81 = `+`.1(i80, 1);
    c108 = `<`.1(l10, i81);
    if c108 then L580() else L218();
  L537():
    sym36 = ldf range;
    base36 = ldf range in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L538() else L539();
  D157():
    deopt 597 [partial_resid3];
  L134(r257):
    goto L135(r257);
  L218():
    x1 = `[[`(s1, i81, NULL, TRUE);
    st i = x1;
    sym39 = ldf identical;
    base39 = ldf identical in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L581() else L582();
  L538():
    tms14 = ld tms;
    check L540() else D150();
  L539():
    r256 = dyn base36[, `na.rm`](<sym tms>, TRUE);
    goto L134(r256);
  L543():
    tms16 = ld tms;
    check L545() else D152();
  L544():
    r260 = dyn base37[, , `na.rm`](<lang `+`(tms, `*`(`*`(1.05, 2.0), `$`(terms, se.fit)))>, <lang `-`(tms, `*`(`*`(1.05, 2.0), `$`(terms, se.fit)))>, TRUE);
    goto L135(r260);
  L558():
    partial_resid4 = force? partial_resid3;
    checkMissing(partial_resid4);
    c104 = `as.logical`(partial_resid4);
    if c104 then L559() else L136();
  L580():
    sym64 = ldf invisible;
    base64 = ldf invisible in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L827() else L828();
  D150():
    deopt 570 [tms14];
  D152():
    deopt 578 [tms16];
  L136():
    goto L138();
  L138():
    rug1 = ld rug;
    check L566() else D161();
  L145(i86, r294):
    c109 = `as.logical`(r294);
    if c109 then L585() else L146();
  L219(r567):
    popenv;
    return r567;
  L540():
    tms15 = force? tms14;
    checkMissing(tms15);
    range = ldf range in base;
    r258 = dyn range(tms15, TRUE);
    check L541() else D151();
  L545():
    tms17 = force? tms16;
    checkMissing(tms17);
    terms23 = ld terms;
    check L546() else D153();
  L559():
    sym38 = ldf range;
    base38 = ldf range in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L560() else L561();
  L581():
    ylim3 = ld ylim;
    check L583() else D166();
  L582():
    r293 = dyn base39(<sym ylim>, "free");
    goto L145(i81, r293);
  L827():
    n_tms12 = ld `n.tms`;
    check L829() else D267();
  L828():
    r566 = dyn base64(<sym n.tms>);
    goto L219(r566);
  D151():
    deopt 575 [r258];
  D153():
    deopt 580 [tms17, 2.1, terms23];
  D161():
    deopt 612 [rug1];
  D166():
    deopt 640 [i81, ylim3];
  D267():
    deopt 1106 [n_tms12];
  L137(r277):
    st ylims = r277;
    goto L138();
  L146():
    goto L164(i86);
  L164(i159):
    in_mf8 = ld `in.mf`;
    check L654() else D191();
  L541():
    goto L134(r258);
  L546():
    terms24 = force? terms23;
    checkMissing(terms24);
    c102 = `is.object`(terms24);
    if c102 then L548() else L549(tms17, 2.1, terms24);
  L560():
    ylims2 = ld ylims;
    check L562() else D158();
  L561():
    r276 = dyn base38[, , `na.rm`](<sym ylims>, <sym pres>, TRUE);
    goto L137(r276);
  L566():
    rug2 = force? rug1;
    checkMissing(rug2);
    c105 = `as.logical`(rug2);
    if c105 then L567() else L139();
  L583():
    ylim4 = force? ylim3;
    checkMissing(ylim4);
    identical1 = ldf identical in base;
    r295 = dyn identical1(ylim4, "free", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L584() else D167();
  L585():
    sym40 = ldf range;
    base40 = ldf range in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L586() else L587();
  L829():
    n_tms13 = force? n_tms12;
    checkMissing(n_tms13);
    invisible = ldf invisible in base;
    r568 = dyn invisible(n_tms13);
    check L830() else D268();
  D158():
    deopt 601 [ylims2];
  D167():
    deopt 651 [i81, r295];
  D191():
    deopt 755 [i159, in_mf8];
  D268():
    deopt 1109 [r568];
  L139():
    goto L142(NULL);
  L142(r290):
    goto L143();
  L147(i91, r297):
    st ylims = r297;
    se13 = ld se;
    check L594() else D171();
  L547(tms21, r264, dx55):
    r266 = `*`(r264, dx55);
    r267 = `+`(tms21, r266);
    tms22 = ld tms;
    check L551() else D154();
  L548():
    dr46 = tryDispatchBuiltin.1("$", terms24);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L550() else L549(tms17, 2.1, dr46);
  L549(tms19, r262, terms26):
    r265 = `$`(terms26, <sym se.fit>);
    goto L547(tms19, r262, r265);
  L562():
    ylims3 = force? ylims2;
    checkMissing(ylims3);
    pres4 = ld pres;
    check L563() else D159();
  L567():
    ylims4 = ld ylims;
    check L568() else D162();
  L584():
    goto L145(i81, r295);
  L586():
    tms28 = ld tms;
    check L588() else D168();
  L587():
    r296 = dyn base40[, `na.rm`](<lang `[`(tms, , i)>, TRUE);
    goto L147(i86, r296);
  L654():
    in_mf9 = force? in_mf8;
    checkMissing(in_mf9);
    c123 = `is.object`(in_mf9);
    if c123 then L655() else L656(i159, in_mf9);
  L830():
    goto L219(r568);
  D154():
    deopt 585 [tms22];
  D159():
    deopt 603 [pres4];
  D162():
    deopt 614 [ylims4];
  D168():
    deopt 654 [i86, tms28];
  D171():
    deopt 666 [i91, se13];
  L165(i163, dx103):
    r348 = `!`(dx103);
    c124 = `as.logical`(r348);
    if c124 then L659() else L166();
  L550():
    dx54 = getTryDispatchBuiltinValue(dr46);
    goto L547(tms17, 2.1, dx54);
  L551():
    tms23 = force? tms22;
    checkMissing(tms23);
    terms27 = ld terms;
    check L552() else D155();
  L563():
    pres5 = force? pres4;
    checkMissing(pres5);
    range2 = ldf range in base;
    r278 = dyn range2(ylims3, pres5, TRUE);
    check L564() else D160();
  L568():
    ylims5 = force? ylims4;
    checkMissing(ylims5);
    c106 = `is.object`(ylims5);
    if c106 then L569() else L570(ylims5);
  L588():
    tms29 = force? tms28;
    checkMissing(tms29);
    c110 = `is.object`(tms29);
    if c110 then L589() else L590(i86, tms29);
  L594():
    se14 = force? se13;
    checkMissing(se14);
    c111 = `as.logical`(se14);
    if c111 then L595() else L149();
  L655():
    dr74 = tryDispatchBuiltin.1("[", in_mf9);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L657() else L656(i159, dr74);
  L656(i161, in_mf11):
    i164 = ld i;
    check L658() else D192();
  D155():
    deopt 587 [tms23, 2.1, terms27];
  D160():
    deopt 608 [r278];
  D192():
    deopt 757 [i161, in_mf11, i164];
  L140(dx59):
    diff = ldf diff;
    check L572() else D163();
  L148(i95, dx63):
    range3 = ldf range in base;
    r299 = dyn range3(dx63, TRUE);
    check L593() else D170();
  L149():
    goto L155(i91);
  L155(i135):
    partial_resid5 = ld `partial.resid`;
    check L629() else D182();
  L166():
    is_fac4 = ld `is.fac`;
    check L662() else D193();
  L552():
    terms28 = force? terms27;
    checkMissing(terms28);
    c103 = `is.object`(terms28);
    if c103 then L554() else L555(tms23, 2.1, terms28);
  L564():
    goto L137(r278);
  L569():
    dr50 = tryDispatchBuiltin.1("[", ylims5);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L571() else L570(dr50);
  L570(ylims7):
    __15 = ldf `[` in base;
    r280 = dyn __15(ylims7, 1);
    goto L140(r280);
  L589():
    dr54 = tryDispatchBuiltin.1("[", tms29);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L591() else L590(i86, dr54);
  L590(i93, tms31):
    i96 = ld i;
    check L592() else D169();
  L595():
    sym41 = ldf range;
    base41 = ldf range in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L596() else L597();
  L657():
    dx102 = getTryDispatchBuiltinValue(dr74);
    goto L165(i159, dx102);
  L658():
    i165 = force? i164;
    __23 = ldf `[` in base;
    r347 = dyn __23(in_mf11, i165);
    goto L165(i161, r347);
  L659():
    goto L144(i163);
  D163():
    deopt 620 [dx59, 0.07];
  D169():
    deopt 657 [i93, tms31, i96];
  D170():
    deopt 664 [i95, r299];
  D182():
    deopt 713 [i135, partial_resid5];
  D193():
    deopt 765 [i163, is_fac4];
  L150(i102, r301):
    st ylims = r301;
    goto L155(i102);
  L553(tms27, r271, dx57):
    r273 = `*`(r271, dx57);
    r274 = `-`(tms27, r273);
    range1 = ldf range in base;
    r275 = dyn range1(r267, r274, TRUE);
    check L557() else D156();
  L554():
    dr48 = tryDispatchBuiltin.1("$", terms28);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L556() else L555(tms23, 2.1, dr48);
  L555(tms25, r269, terms30):
    r272 = `$`(terms30, <sym se.fit>);
    goto L553(tms25, r269, r272);
  L571():
    dx58 = getTryDispatchBuiltinValue(dr50);
    goto L140(dx58);
  L572():
    p54 = prom<V +>{
      ylims8 = ld ylims;
      ylims9 = force? ylims8;
      checkMissing(ylims9);
      return ylims9;
    };
    r282 = dyn diff(p54);
    check L573() else D164();
  L591():
    dx62 = getTryDispatchBuiltinValue(dr54);
    goto L148(i86, dx62);
  L592():
    i97 = force? i96;
    __16 = ldf `[` in base;
    r298 = dyn __16(tms29, <missing>, i97);
    goto L148(i93, r298);
  L593():
    goto L147(i95, r299);
  L596():
    ylims10 = ld ylims;
    check L598() else D172();
  L597():
    r300 = dyn base41[, , , `na.rm`](<sym ylims>, <lang `+`(`[`(tms, , i), `*`(`*`(1.05, 2.0), `[`(`$`(terms, se.fit), , i)))>, <lang `-`(`[`(tms, , i), `*`(`*`(1.05, 2.0), `[`(`$`(terms, se.fit), , i)))>, TRUE);
    goto L150(i91, r300);
  L629():
    partial_resid6 = force? partial_resid5;
    checkMissing(partial_resid6);
    c118 = `as.logical`(partial_resid6);
    if c118 then L630() else L156();
  L662():
    is_fac5 = force? is_fac4;
    checkMissing(is_fac5);
    c125 = `is.object`(is_fac5);
    if c125 then L663() else L664(i163, is_fac5);
  D156():
    deopt 595 [r275];
  D164():
    deopt 622 [dx59, 0.07, r282];
  D172():
    deopt 670 [i91, ylims10];
  L156():
    goto L159(i135);
  L159(i147):
    rug3 = ld rug;
    check L641() else D187();
  L168(i173, dx105):
    c126 = `as.logical`(dx105);
    if c126 then L667() else L169();
  L556():
    dx56 = getTryDispatchBuiltinValue(dr48);
    goto L553(tms23, 2.1, dx56);
  L557():
    goto L135(r275);
  L573():
    r283 = `*`(0.07, r282);
    r284 = `-`(dx59, r283);
    l7 = ld ylims;
    c107 = `is.object`(l7);
    if c107 then L574() else L575(r284, l7);
  L598():
    ylims11 = force? ylims10;
    checkMissing(ylims11);
    tms32 = ld tms;
    check L599() else D173();
  L630():
    sym42 = ldf range;
    base42 = ldf range in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L631() else L632();
  L663():
    dr76 = tryDispatchBuiltin.1("[", is_fac5);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L665() else L664(i163, dr76);
  L664(i171, is_fac7):
    i174 = ld i;
    check L666() else D194();
  D173():
    deopt 672 [i91, tms32];
  D187():
    deopt 733 [i147, rug3];
  D194():
    deopt 767 [i171, is_fac7, i174];
  L141(r288, dx61):
    st ylims = dx61;
    goto L142(r288);
  L157(i140, r331):
    st ylims = r331;
    goto L159(i140);
  L169():
    carrier1 = ldf carrier;
    check L757() else D233();
  L195(i279):
    partial_resid7 = ld `partial.resid`;
    check L794() else D251();
  L574():
    dr52 = tryDispatchBuiltin.0("[<-", l7, r284);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L576() else L575(r284, dr52);
  L575(r286, l9):
    ___ = ldf `[<-` in base;
    r289 = dyn ___(l9, r284, 1);
    goto L141(r286, r289);
  L599():
    tms33 = force? tms32;
    checkMissing(tms33);
    c112 = `is.object`(tms33);
    if c112 then L600() else L601(i91, tms33);
  L631():
    ylims12 = ld ylims;
    check L633() else D183();
  L632():
    r330 = dyn base42[, , `na.rm`](<sym ylims>, <lang `[`(pres, , i)>, TRUE);
    goto L157(i135, r330);
  L641():
    rug4 = force? rug3;
    checkMissing(rug4);
    c120 = `as.logical`(rug4);
    if c120 then L642() else L160();
  L665():
    dx104 = getTryDispatchBuiltinValue(dr76);
    goto L168(i163, dx104);
  L666():
    i175 = force? i174;
    __24 = ldf `[` in base;
    r350 = dyn __24(is_fac7, i175);
    goto L168(i171, r350);
  L667():
    mf13 = ld mf;
    check L668() else D195();
  D183():
    deopt 717 [i135, ylims12];
  D195():
    deopt 770 [i173, mf13];
  D233():
    deopt 946 [i173];
  D251():
    deopt 1032 [i279, partial_resid7];
  L151(i106, dx65):
    terms31 = ld terms;
    check L604() else D175();
  L160():
    goto L163(i147, NULL);
  L163(i158, r345):
    goto L164(i158);
  L576():
    dx60 = getTryDispatchBuiltinValue(dr52);
    goto L141(r284, dx60);
  L600():
    dr56 = tryDispatchBuiltin.1("[", tms33);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L602() else L601(i91, dr56);
  L601(i104, tms35):
    i107 = ld i;
    check L603() else D174();
  L633():
    ylims13 = force? ylims12;
    checkMissing(ylims13);
    pres6 = ld pres;
    check L634() else D184();
  L642():
    ylims14 = ld ylims;
    check L643() else D188();
  L668():
    mf14 = force? mf13;
    checkMissing(mf14);
    c127 = `is.object`(mf14);
    if c127 then L669() else L670(i173, mf14);
  L757():
    p76 = prom<V +>{
      cn10 = ld cn;
      cn11 = force? cn10;
      checkMissing(cn11);
      c150 = `is.object`(cn11);
      if c150 then L1() else L2(cn11);
    L0(dx135):
      return dx135;
    L1():
      dr106 = tryDispatchBuiltin.1("[[", cn11);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L3() else L2(dr106);
    L2(cn13):
      i281 = ld i;
      i282 = force? i281;
      __35 = ldf `[[` in base;
      r449 = dyn __35(cn13, i282);
      goto L0(r449);
    L3():
      dx134 = getTryDispatchBuiltinValue(dr106);
      goto L0(dx134);
    };
    p77 = prom<V +>{
      transform_x11 = ld `transform.x`;
      transform_x12 = force? transform_x11;
      checkMissing(transform_x12);
      c151 = `is.object`(transform_x12);
      if c151 then L1() else L2(transform_x12);
    L0(dx137):
      return dx137;
    L1():
      dr108 = tryDispatchBuiltin.1("[", transform_x12);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L3() else L2(dr108);
    L2(transform_x14):
      i283 = ld i;
      i284 = force? i283;
      __36 = ldf `[` in base;
      r451 = dyn __36(transform_x14, i284);
      goto L0(r451);
    L3():
      dx136 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx136);
    };
    r453 = dyn carrier1(p76, p77);
    check L758() else D234();
  L794():
    partial_resid8 = force? partial_resid7;
    checkMissing(partial_resid8);
    c165 = `as.logical`(partial_resid8);
    if c165 then L795() else L206();
  D174():
    deopt 675 [i104, tms35, i107];
  D175():
    deopt 679 [i106, dx65, 2.1, terms31];
  D184():
    deopt 719 [i135, pres6];
  D188():
    deopt 735 [i147, ylims14];
  D234():
    deopt 949 [i173, r453];
  L170(i181, dx107):
    st ff = dx107;
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L677() else L678();
  L206():
    goto L212(i279);
  L212(i342):
    rug9 = ld rug;
    check L813() else D259();
  L602():
    dx64 = getTryDispatchBuiltinValue(dr56);
    goto L151(i91, dx64);
  L603():
    i108 = force? i107;
    __17 = ldf `[` in base;
    r302 = dyn __17(tms33, <missing>, i108);
    goto L151(i104, r302);
  L604():
    terms32 = force? terms31;
    checkMissing(terms32);
    c113 = `is.object`(terms32);
    if c113 then L606() else L607(i106, dx65, 2.1, terms32);
  L634():
    pres7 = force? pres6;
    checkMissing(pres7);
    c119 = `is.object`(pres7);
    if c119 then L635() else L636(i135, pres7);
  L643():
    ylims15 = force? ylims14;
    checkMissing(ylims15);
    c121 = `is.object`(ylims15);
    if c121 then L644() else L645(i147, ylims15);
  L669():
    dr78 = tryDispatchBuiltin.1("[", mf14);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L671() else L670(i173, dr78);
  L670(i179, mf16):
    nmt16 = ld nmt;
    check L672() else D196();
  L758():
    st xx = r453;
    sym52 = ldf `is.null`;
    base52 = ldf `is.null` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L759() else L760();
  L795():
    is_fac8 = ld `is.fac`;
    check L796() else D252();
  D196():
    deopt 773 [i179, mf16, nmt16];
  D252():
    deopt 1034 [i279, is_fac8];
  D259():
    deopt 1076 [i342, rug9];
  L158(i144, dx97):
    range5 = ldf range in base;
    r333 = dyn range5(ylims13, dx97, TRUE);
    check L639() else D186();
  L161(i153, dx99):
    diff1 = ldf diff;
    check L647() else D189();
  L172(i190, r354):
    r356 = `!`(r354);
    c131 = `as.logical`(r356);
    if c131 then L684() else L173();
  L196(i287, r455):
    r456 = `!`(r455);
    c153 = `as.logical`(r456);
    if c153 then L762() else L197();
  L605(i112, dx70, r306, dx71):
    c114 = `is.object`(dx71);
    if c114 then L609() else L610(i112, dx70, r306, dx71);
  L606():
    dr58 = tryDispatchBuiltin.1("$", terms32);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L608() else L607(i106, dx65, 2.1, dr58);
  L607(i110, dx67, r304, terms34):
    r307 = `$`(terms34, <sym se.fit>);
    goto L605(i110, dx67, r304, r307);
  L635():
    dr68 = tryDispatchBuiltin.1("[", pres7);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L637() else L636(i135, dr68);
  L636(i142, pres9):
    i145 = ld i;
    check L638() else D185();
  L644():
    dr70 = tryDispatchBuiltin.1("[", ylims15);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L646() else L645(i147, dr70);
  L645(i151, ylims17):
    __22 = ldf `[` in base;
    r335 = dyn __22(ylims17, 1);
    goto L161(i151, r335);
  L671():
    dx106 = getTryDispatchBuiltinValue(dr78);
    goto L170(i173, dx106);
  L672():
    nmt17 = force? nmt16;
    checkMissing(nmt17);
    c128 = `is.object`(nmt17);
    if c128 then L673() else L674(i179, mf16, nmt17);
  L677():
    model23 = ld model;
    check L679() else D198();
  L678():
    r353 = dyn base43(<lang `$`(model, na.action)>);
    goto L172(i181, r353);
  L759():
    use_rows8 = ld `use.rows`;
    check L761() else D235();
  L760():
    r454 = dyn base52(<sym use.rows>);
    goto L196(i173, r454);
  L796():
    is_fac9 = force? is_fac8;
    checkMissing(is_fac9);
    c166 = `is.object`(is_fac9);
    if c166 then L797() else L798(i279, is_fac9);
  L813():
    rug10 = force? rug9;
    checkMissing(rug10);
    c180 = `as.logical`(rug10);
    if c180 then L814() else L213();
  D185():
    deopt 722 [i142, pres9, i145];
  D186():
    deopt 729 [i144, r333];
  D189():
    deopt 741 [i153, dx99, 0.07];
  D198():
    deopt 782 [i181, model23];
  D235():
    deopt 952 [i173, use_rows8];
  L152(i116, dx78, r311, dx79):
    r313 = `*`(r311, dx79);
    r314 = `+`(dx78, r313);
    tms36 = ld tms;
    check L613() else D177();
  L171(i185, dx109):
    __26 = ldf `[` in base;
    r352 = dyn __26(mf14, <missing>, dx109);
    goto L170(i185, r352);
  L173():
    goto L174(i190);
  L174(i197):
    levels1 = ldf levels;
    check L688() else D201();
  L197():
    goto L199(i287);
  L199(i294):
    sym53 = ldf range;
    base53 = ldf range in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L769() else L770();
  L207(i326, dx158):
    r495 = `!`(dx158);
    c167 = `as.logical`(r495);
    if c167 then L801() else L208(i326, c167);
  L213():
    goto L217(i342);
  L217(i353):
    goto L144(i353);
  L608():
    dx69 = getTryDispatchBuiltinValue(dr58);
    goto L605(i106, dx65, 2.1, dx69);
  L609():
    dr60 = tryDispatchBuiltin.1("[", dx71);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L611() else L610(i112, dx70, r306, dr60);
  L610(i114, dx74, r309, dx75):
    i117 = ld i;
    check L612() else D176();
  L637():
    dx96 = getTryDispatchBuiltinValue(dr68);
    goto L158(i135, dx96);
  L638():
    i146 = force? i145;
    __21 = ldf `[` in base;
    r332 = dyn __21(pres7, <missing>, i146);
    goto L158(i142, r332);
  L639():
    goto L157(i144, r333);
  L646():
    dx98 = getTryDispatchBuiltinValue(dr70);
    goto L161(i147, dx98);
  L647():
    p55 = prom<V +>{
      ylims18 = ld ylims;
      ylims19 = force? ylims18;
      checkMissing(ylims19);
      return ylims19;
    };
    r337 = dyn diff1(p55);
    check L648() else D190();
  L673():
    dr80 = tryDispatchBuiltin.1("[", nmt17);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L675() else L674(i179, mf16, dr80);
  L674(i183, mf18, nmt19):
    i186 = ld i;
    check L676() else D197();
  L679():
    model24 = force? model23;
    checkMissing(model24);
    c129 = `is.object`(model24);
    if c129 then L681() else L682(i181, model24);
  L684():
    naresid = ldf naresid;
    check L685() else D199();
  L761():
    use_rows9 = force? use_rows8;
    checkMissing(use_rows9);
    c152 = `==`(use_rows9, NULL);
    goto L196(i173, c152);
  L762():
    xx24 = ld xx;
    check L763() else D236();
  L797():
    dr128 = tryDispatchBuiltin.1("[", is_fac9);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L799() else L798(i279, dr128);
  L798(i324, is_fac11):
    i327 = ld i;
    check L800() else D253();
  L814():
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L815() else L816();
  D176():
    deopt 683 [i114, dx74, r309, dx75, i117];
  D177():
    deopt 689 [i116, tms36];
  D190():
    deopt 743 [i153, dx99, 0.07, r337];
  D197():
    deopt 775 [i183, mf18, nmt19, i186];
  D199():
    deopt 788 [i190];
  D201():
    deopt 796 [i197];
  D236():
    deopt 956 [i287, xx24];
  D253():
    deopt 1036 [i324, is_fac11, i327];
  L200(i297, r459):
    st xlims = r459;
    rug7 = ld rug;
    check L773() else D240();
  L208(i330, c169):
    c177 = `as.logical`(c169);
    if c177 then L806() else L210();
  L214(i347, r519):
    st n = r519;
    lines1 = ldf lines;
    check L819() else D262();
  L611():
    dx77 = getTryDispatchBuiltinValue(dr60);
    goto L152(i112, dx70, r306, dx77);
  L612():
    i118 = force? i117;
    __18 = ldf `[` in base;
    r312 = dyn __18(dx71, <missing>, i118);
    goto L152(i114, dx74, r309, r312);
  L613():
    tms37 = force? tms36;
    checkMissing(tms37);
    c115 = `is.object`(tms37);
    if c115 then L614() else L615(i116, tms37);
  L648():
    r338 = `*`(0.07, r337);
    r339 = `-`(dx99, r338);
    l11 = ld ylims;
    c122 = `is.object`(l11);
    if c122 then L649() else L650(i153, r339, l11);
  L675():
    dx108 = getTryDispatchBuiltinValue(dr80);
    goto L171(i179, dx108);
  L676():
    i187 = force? i186;
    __25 = ldf `[` in base;
    r351 = dyn __25(nmt19, i187);
    goto L171(i183, r351);
  L680(i194, dx111):
    c130 = `==`(dx111, NULL);
    goto L172(i194, c130);
  L681():
    dr82 = tryDispatchBuiltin.1("$", model24);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L683() else L682(i181, dr82);
  L682(i192, model26):
    r355 = `$`(model26, <sym na.action>);
    goto L680(i192, r355);
  L685():
    p56 = prom<V +>{
      model27 = ld model;
      model28 = force? model27;
      checkMissing(model28);
      c132 = `is.object`(model28);
      if c132 then L1() else L2(model28);
    L0(dx113):
      return dx113;
    L1():
      dr84 = tryDispatchBuiltin.1("$", model28);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(model30):
      r357 = `$`(model30, <sym na.action>);
      goto L0(r357);
    L3():
      dx112 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx112);
    };
    p57 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r360 = dyn naresid(p56, p57);
    check L686() else D200();
  L688():
    p58 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r363 = dyn levels1(p58);
    check L689() else D202();
  L763():
    xx25 = force? xx24;
    checkMissing(xx25);
    c154 = `is.object`(xx25);
    if c154 then L764() else L765(i287, xx25);
  L769():
    xx28 = ld xx;
    check L771() else D238();
  L770():
    r458 = dyn base53[, `na.rm`](<sym xx>, TRUE);
    goto L200(i294, r458);
  L799():
    dx157 = getTryDispatchBuiltinValue(dr128);
    goto L207(i279, dx157);
  L800():
    i328 = force? i327;
    __45 = ldf `[` in base;
    r494 = dyn __45(is_fac11, i328);
    goto L207(i324, r494);
  L801():
    sym54 = ldf `is.null`;
    base54 = ldf `is.null` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L802() else L803();
  L815():
    xx44 = ld xx;
    check L817() else D260();
  L816():
    r518 = dyn base55(<sym xx>);
    goto L214(i342, r518);
  D200():
    deopt 791 [i190, r360];
  D202():
    deopt 798 [i197, r363];
  D238():
    deopt 966 [i294, xx28];
  D240():
    deopt 973 [i297, rug7];
  D260():
    deopt 1080 [i342, xx44];
  D262():
    deopt 1086 [i347];
  L153(i122, dx81):
    terms35 = ld terms;
    check L618() else D179();
  L162(i157, r343, dx101):
    st ylims = dx101;
    goto L163(i157, r343);
  L198(i293, dx139):
    st xx = dx139;
    goto L199(i293);
  L209(i333, c172, r497):
    r498 = `!`(r497);
    c174 = `as.logical`(r498);
    c175 = `&&`(c172, c174);
    goto L208(i333, c175);
  L210():
    points = ldf points;
    check L810() else D257();
  L211(i339, r509):
    goto L212(i339);
  L614():
    dr62 = tryDispatchBuiltin.1("[", tms37);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L616() else L615(i116, dr62);
  L615(i120, tms39):
    i123 = ld i;
    check L617() else D178();
  L649():
    dr72 = tryDispatchBuiltin.0("[<-", l11, r339);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L651() else L650(i153, r339, dr72);
  L650(i155, r341, l13):
    ___1 = ldf `[<-` in base;
    r344 = dyn ___1(l13, r339, 1);
    goto L162(i155, r341, r344);
  L683():
    dx110 = getTryDispatchBuiltinValue(dr82);
    goto L680(i181, dx110);
  L686():
    st ff = r360;
    goto L174(i190);
  L689():
    st ll = r363;
    sym44 = ldf range;
    base44 = ldf range in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L690() else L691();
  L764():
    dr110 = tryDispatchBuiltin.1("[", xx25);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L766() else L765(i287, dr110);
  L765(i291, xx27):
    use_rows10 = ld `use.rows`;
    check L767() else D237();
  L771():
    xx29 = force? xx28;
    checkMissing(xx29);
    range7 = ldf range in base;
    r460 = dyn range7(xx29, TRUE);
    check L772() else D239();
  L773():
    rug8 = force? rug7;
    checkMissing(rug8);
    c155 = `as.logical`(rug8);
    if c155 then L774() else L201();
  L802():
    smooth11 = ld smooth;
    check L804() else D254();
  L803():
    r496 = dyn base54(<sym smooth>);
    goto L209(i326, c167, r496);
  L806():
    smooth13 = ldf smooth;
    check L807() else D255();
  L817():
    xx45 = force? xx44;
    checkMissing(xx45);
    length = ldf length in base;
    r520 = dyn length(xx45);
    check L818() else D261();
  L819():
    p106 = prom<V +>{
      sym56 = ldf `rep.int`;
      base56 = ldf `rep.int` in base;
      guard56 = `==`.4(sym56, base56);
      if guard56 then L2() else L3();
    L0(r522):
      return r522;
    L2():
      jitter = ldf jitter;
      p105 = prom<V +>{
        xx46 = ld xx;
        xx47 = force? xx46;
        checkMissing(xx47);
        return xx47;
      };
      r524 = dyn jitter(p105);
      sym57 = ldf `rep.int`;
      base57 = ldf `rep.int` in base;
      guard57 = `==`.4(sym57, base57);
      if guard57 then L4() else L5();
    L3():
      r521 = dyn base56(<lang jitter(xx)>, <lang rep.int(3.0, n)>);
      goto L0(r521);
    L1(r526):
      rep_int1 = ldf `rep.int` in base;
      r528 = dyn rep_int1(r524, r526);
      goto L0(r528);
    L4():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      rep_int = ldf `rep.int` in base;
      r527 = dyn rep_int(3.0, n1);
      goto L1(r527);
    L5():
      r525 = dyn base57(3.0, <sym n>);
      goto L1(r525);
    };
    p108 = prom<V +>{
      sym58 = ldf `rep.int`;
      base58 = ldf `rep.int` in base;
      guard58 = `==`.4(sym58, base58);
      if guard58 then L3() else L4();
    L0(r531):
      return r531;
    L3():
      ylims24 = ld ylims;
      ylims25 = force? ylims24;
      checkMissing(ylims25);
      c181 = `is.object`(ylims25);
      if c181 then L5() else L6(ylims25);
    L4():
      r530 = dyn base58(<lang `+`(`[`(ylims, 1), `*`(c(0.0, 0.05, NA_LGL), diff(ylims)))>, <sym n>);
      goto L0(r530);
    L1(dx164):
      sym59 = ldf c;
      base59 = ldf c in base;
      guard59 = `==`.4(sym59, base59);
      if guard59 then L8() else L9();
    L5():
      dr134 = tryDispatchBuiltin.1("[", ylims25);
      dc67 = getTryDispatchBuiltinDispatched(dr134);
      if dc67 then L7() else L6(dr134);
    L6(ylims27):
      __48 = ldf `[` in base;
      r532 = dyn __48(ylims27, 1);
      goto L1(r532);
    L2(dx167, r534):
      diff5 = ldf diff;
      p107 = prom<V +>{
        ylims28 = ld ylims;
        ylims29 = force? ylims28;
        checkMissing(ylims29);
        return ylims29;
      };
      r537 = dyn diff5(p107);
      r538 = `*`(r534, r537);
      r539 = `+`(dx167, r538);
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      rep_int2 = ldf `rep.int` in base;
      r540 = dyn rep_int2(r539, n3);
      goto L0(r540);
    L7():
      dx163 = getTryDispatchBuiltinValue(dr134);
      goto L1(dx163);
    L8():
      c182 = ldf c in base;
      r535 = dyn c182(0.0, 0.05, NA_LGL);
      goto L2(dx164, r535);
    L9():
      r533 = dyn base59(0.0, 0.05, NA_LGL);
      goto L2(dx164, r533);
    };
    r542 = dyn lines1(p106, p108);
    check L820() else D263();
  D178():
    deopt 692 [i120, tms39, i123];
  D179():
    deopt 696 [i122, dx81, 2.1, terms35];
  D237():
    deopt 958 [i291, xx27, use_rows10];
  D239():
    deopt 971 [i294, r460];
  D254():
    deopt 1041 [i326, c167, smooth11];
  D255():
    deopt 1047 [i330];
  D257():
    deopt 1064 [i330];
  D261():
    deopt 1083 [i342, r520];
  D263():
    deopt 1089 [i347, r542];
  L175(i200, r365):
    sym46 = ldf c;
    base46 = ldf c in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L696() else L697();
  L201():
    goto L204(i297);
  L204(i308):
    order = ldf order;
    check L785() else D244();
  L616():
    dx80 = getTryDispatchBuiltinValue(dr62);
    goto L153(i116, dx80);
  L617():
    i124 = force? i123;
    __19 = ldf `[` in base;
    r315 = dyn __19(tms37, <missing>, i124);
    goto L153(i120, r315);
  L618():
    terms36 = force? terms35;
    checkMissing(terms36);
    c116 = `is.object`(terms36);
    if c116 then L620() else L621(i122, dx81, 2.1, terms36);
  L651():
    dx100 = getTryDispatchBuiltinValue(dr72);
    goto L162(i153, r339, dx100);
  L690():
    sym45 = ldf seq_along;
    base45 = ldf seq_along in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L692() else L693();
  L691():
    r364 = dyn base44(<lang seq_along(ll)>);
    goto L175(i197, r364);
  L766():
    dx138 = getTryDispatchBuiltinValue(dr110);
    goto L198(i287, dx138);
  L767():
    use_rows11 = force? use_rows10;
    __37 = ldf `[` in base;
    r457 = dyn __37(xx27, use_rows11);
    goto L198(i291, r457);
  L772():
    goto L200(i294, r460);
  L774():
    xlims14 = ld xlims;
    check L775() else D241();
  L804():
    smooth12 = force? smooth11;
    checkMissing(smooth12);
    c173 = `==`(smooth12, NULL);
    goto L209(i326, c167, c173);
  L807():
    p92 = prom<V +>{
      xx40 = ld xx;
      xx41 = force? xx40;
      checkMissing(xx41);
      return xx41;
    };
    p93 = prom<V +>{
      pres10 = ld pres;
      pres11 = force? pres10;
      checkMissing(pres11);
      c178 = `is.object`(pres11);
      if c178 then L1() else L2();
    L0(dx160):
      return dx160;
    L1():
      dr130 = tryDispatchBuiltin.1("[", pres11);
      dc65 = getTryDispatchBuiltinDispatched(dr130);
      if dc65 then L3() else L2();
    L2():
      i337 = ld i;
      i338 = force? i337;
      __46 = ldf `[` in base;
      r500 = dyn __46(pres11, <missing>, i338);
      goto L0(r500);
    L3():
      dx159 = getTryDispatchBuiltinValue(dr130);
      goto L0(dx159);
    };
    p94 = prom<V +>{
      lty_smth1 = ld `lty.smth`;
      lty_smth2 = force? lty_smth1;
      checkMissing(lty_smth2);
      return lty_smth2;
    };
    p95 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p96 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p97 = prom<V +>{
      col_res1 = ld `col.res`;
      col_res2 = force? col_res1;
      checkMissing(col_res2);
      return col_res2;
    };
    p98 = prom<V +>{
      col_smth1 = ld `col.smth`;
      col_smth2 = force? col_smth1;
      checkMissing(col_smth2);
      return col_smth2;
    };
    p99 = prom<V +>{
      span_smth1 = ld `span.smth`;
      span_smth2 = force? span_smth1;
      checkMissing(span_smth2);
      return span_smth2;
    };
    r508 = dyn smooth13[, , lty, cex, pch, col, `col.smooth`, span](p92, p93, p94, p95, p96, p97, p98, p99);
    check L808() else D256();
  L810():
    p100 = prom<V +>{
      xx42 = ld xx;
      xx43 = force? xx42;
      checkMissing(xx43);
      return xx43;
    };
    p101 = prom<V +>{
      pres14 = ld pres;
      pres15 = force? pres14;
      checkMissing(pres15);
      c179 = `is.object`(pres15);
      if c179 then L1() else L2();
    L0(dx162):
      return dx162;
    L1():
      dr132 = tryDispatchBuiltin.1("[", pres15);
      dc66 = getTryDispatchBuiltinDispatched(dr132);
      if dc66 then L3() else L2();
    L2():
      i340 = ld i;
      i341 = force? i340;
      __47 = ldf `[` in base;
      r511 = dyn __47(pres15, <missing>, i341);
      goto L0(r511);
    L3():
      dx161 = getTryDispatchBuiltinValue(dr132);
      goto L0(dx161);
    };
    p102 = prom<V +>{
      cex3 = ld cex;
      cex4 = force? cex3;
      checkMissing(cex4);
      return cex4;
    };
    p103 = prom<V +>{
      pch3 = ld pch;
      pch4 = force? pch3;
      checkMissing(pch4);
      return pch4;
    };
    p104 = prom<V +>{
      col_res3 = ld `col.res`;
      col_res4 = force? col_res3;
      checkMissing(col_res4);
      return col_res4;
    };
    r516 = dyn points[, , cex, pch, col](p100, p101, p102, p103, p104);
    check L811() else D258();
  L818():
    goto L214(i342, r520);
  L820():
    partial_resid9 = ld `partial.resid`;
    check L821() else D264();
  D241():
    deopt 975 [i297, xlims14];
  D244():
    deopt 994 [i308];
  D256():
    deopt 1062 [i330, r508];
  D258():
    deopt 1073 [i330, r516];
  D264():
    deopt 1090 [i347, partial_resid9];
  L176(i203, r367):
    range6 = ldf range in base;
    r369 = dyn range6(r367);
    check L695() else D204();
  L177(i206, r373, r374):
    r376 = `+`(r373, r374);
    st xlims = r376;
    sym47 = ldf `as.numeric`;
    base47 = ldf `as.numeric` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L699() else L700();
  L619(i128, dx86, r319, dx87):
    c117 = `is.object`(dx87);
    if c117 then L623() else L624(i128, dx86, r319, dx87);
  L620():
    dr64 = tryDispatchBuiltin.1("$", terms36);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L622() else L621(i122, dx81, 2.1, dr64);
  L621(i126, dx83, r317, terms38):
    r320 = `$`(terms38, <sym se.fit>);
    goto L619(i126, dx83, r317, r320);
  L692():
    ll = ld ll;
    check L694() else D203();
  L693():
    r366 = dyn base45(<sym ll>);
    goto L176(i197, r366);
  L696():
    c133 = ldf c in base;
    r375 = dyn c133(-0.5, 0.5);
    check L698() else D205();
  L697():
    r372 = dyn base46(<lang `-`(0.5)>, 0.5);
    goto L177(i200, r365, r372);
  L775():
    xlims15 = force? xlims14;
    checkMissing(xlims15);
    c156 = `is.object`(xlims15);
    if c156 then L776() else L777(i297, xlims15);
  L785():
    p79 = prom<V +>{
      xx30 = ld xx;
      xx31 = force? xx30;
      checkMissing(xx31);
      return xx31;
    };
    r473 = dyn order(p79);
    check L786() else D245();
  L808():
    goto L211(i330, r508);
  L811():
    goto L211(i330, r516);
  L821():
    partial_resid10 = force? partial_resid9;
    checkMissing(partial_resid10);
    c183 = `as.logical`(partial_resid10);
    if c183 then L822() else L215();
  D203():
    deopt 803 [i197, ll];
  D204():
    deopt 807 [i203, r369];
  D205():
    deopt 813 [i200, r365, r375];
  D245():
    deopt 996 [i308, r473];
  L154(i132, dx94, r324, dx95):
    r326 = `*`(r324, dx95);
    r327 = `-`(dx94, r326);
    range4 = ldf range in base;
    r328 = dyn range4(ylims11, r314, r327, TRUE);
    check L627() else D181();
  L178(i209, r378):
    st xx = r378;
    rug5 = ld rug;
    check L703() else D208();
  L202(i303, dx142):
    diff4 = ldf diff;
    check L779() else D242();
  L215():
    goto L216(i347, NULL);
  L216(i352, r564):
    goto L217(i352);
  L622():
    dx85 = getTryDispatchBuiltinValue(dr64);
    goto L619(i122, dx81, 2.1, dx85);
  L623():
    dr66 = tryDispatchBuiltin.1("[", dx87);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L625() else L624(i128, dx86, r319, dr66);
  L624(i130, dx90, r322, dx91):
    i133 = ld i;
    check L626() else D180();
  L694():
    ll1 = force? ll;
    checkMissing(ll1);
    r368 = seq_along(ll1);
    goto L176(i197, r368);
  L695():
    goto L175(i203, r369);
  L698():
    goto L177(i200, r365, r375);
  L699():
    ff4 = ld ff;
    check L701() else D206();
  L700():
    r377 = dyn base47(<sym ff>);
    goto L178(i206, r377);
  L776():
    dr112 = tryDispatchBuiltin.1("[", xlims15);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L778() else L777(i297, dr112);
  L777(i301, xlims17):
    __38 = ldf `[` in base;
    r461 = dyn __38(xlims17, 1);
    goto L202(i301, r461);
  L786():
    st oo = r473;
    plot4 = ldf plot;
    check L787() else D246();
  L822():
    lines2 = ldf lines;
    check L823() else D265();
  D180():
    deopt 700 [i130, dx90, r322, dx91, i133];
  D181():
    deopt 709 [i132, r328];
  D206():
    deopt 818 [i206, ff4];
  D208():
    deopt 823 [i209, rug5];
  D242():
    deopt 981 [i303, dx142, 0.07];
  D246():
    deopt 999 [i308];
  D265():
    deopt 1093 [i347];
  L625():
    dx93 = getTryDispatchBuiltinValue(dr66);
    goto L154(i128, dx86, r319, dx93);
  L626():
    i134 = force? i133;
    __20 = ldf `[` in base;
    r325 = dyn __20(dx87, <missing>, i134);
    goto L154(i130, dx90, r322, r325);
  L627():
    goto L150(i132, r328);
  L701():
    ff5 = force? ff4;
    checkMissing(ff5);
    as_numeric = ldf `as.numeric` in base;
    r379 = dyn as_numeric(ff5);
    check L702() else D207();
  L703():
    rug6 = force? rug5;
    checkMissing(rug6);
    c134 = `as.logical`(rug6);
    if c134 then L704() else L179();
  L778():
    dx141 = getTryDispatchBuiltinValue(dr112);
    goto L202(i297, dx141);
  L779():
    p78 = prom<V +>{
      xlims18 = ld xlims;
      xlims19 = force? xlims18;
      checkMissing(xlims19);
      return xlims19;
    };
    r463 = dyn diff4(p78);
    check L780() else D243();
  L787():
    p80 = prom<V +>{
      xx32 = ld xx;
      xx33 = force? xx32;
      checkMissing(xx33);
      c158 = `is.object`(xx33);
      if c158 then L1() else L2(xx33);
    L0(dx146):
      return dx146;
    L1():
      dr116 = tryDispatchBuiltin.1("[", xx33);
      dc58 = getTryDispatchBuiltinDispatched(dr116);
      if dc58 then L3() else L2(dr116);
    L2(xx35):
      oo = ld oo;
      oo1 = force? oo;
      __39 = ldf `[` in base;
      r474 = dyn __39(xx35, oo1);
      goto L0(r474);
    L3():
      dx145 = getTryDispatchBuiltinValue(dr116);
      goto L0(dx145);
    };
    p81 = prom<V +>{
      tms44 = ld tms;
      tms45 = force? tms44;
      checkMissing(tms45);
      c159 = `is.object`(tms45);
      if c159 then L1() else L2(tms45);
    L0(dx148):
      return dx148;
    L1():
      dr118 = tryDispatchBuiltin.1("[", tms45);
      dc59 = getTryDispatchBuiltinDispatched(dr118);
      if dc59 then L3() else L2(dr118);
    L2(tms47):
      oo2 = ld oo;
      oo3 = force? oo2;
      i309 = ld i;
      i310 = force? i309;
      __40 = ldf `[` in base;
      r476 = dyn __40(tms47, oo3, i310);
      goto L0(r476);
    L3():
      dx147 = getTryDispatchBuiltinValue(dr118);
      goto L0(dx147);
    };
    p82 = prom<V +>{
      xlabs9 = ld xlabs;
      xlabs10 = force? xlabs9;
      checkMissing(xlabs10);
      c160 = `is.object`(xlabs10);
      if c160 then L1() else L2(xlabs10);
    L0(dx150):
      return dx150;
    L1():
      dr120 = tryDispatchBuiltin.1("[", xlabs10);
      dc60 = getTryDispatchBuiltinDispatched(dr120);
      if dc60 then L3() else L2(dr120);
    L2(xlabs12):
      i311 = ld i;
      i312 = force? i311;
      __41 = ldf `[` in base;
      r478 = dyn __41(xlabs12, i312);
      goto L0(r478);
    L3():
      dx149 = getTryDispatchBuiltinValue(dr120);
      goto L0(dx149);
    };
    p83 = prom<V +>{
      ylabs9 = ld ylabs;
      ylabs10 = force? ylabs9;
      checkMissing(ylabs10);
      c161 = `is.object`(ylabs10);
      if c161 then L1() else L2(ylabs10);
    L0(dx152):
      return dx152;
    L1():
      dr122 = tryDispatchBuiltin.1("[", ylabs10);
      dc61 = getTryDispatchBuiltinDispatched(dr122);
      if dc61 then L3() else L2(dr122);
    L2(ylabs12):
      i313 = ld i;
      i314 = force? i313;
      __42 = ldf `[` in base;
      r480 = dyn __42(ylabs12, i314);
      goto L0(r480);
    L3():
      dx151 = getTryDispatchBuiltinValue(dr122);
      goto L0(dx151);
    };
    p84 = prom<V +>{
      xlims20 = ld xlims;
      xlims21 = force? xlims20;
      checkMissing(xlims21);
      return xlims21;
    };
    p85 = prom<V +>{
      ylims22 = ld ylims;
      ylims23 = force? ylims22;
      checkMissing(ylims23);
      return ylims23;
    };
    p86 = prom<V +>{
      main25 = ld main;
      main26 = force? main25;
      checkMissing(main26);
      c162 = `is.object`(main26);
      if c162 then L1() else L2(main26);
    L0(dx154):
      return dx154;
    L1():
      dr124 = tryDispatchBuiltin.1("[", main26);
      dc62 = getTryDispatchBuiltinDispatched(dr124);
      if dc62 then L3() else L2(dr124);
    L2(main28):
      i315 = ld i;
      i316 = force? i315;
      __43 = ldf `[` in base;
      r484 = dyn __43(main28, i316);
      goto L0(r484);
    L3():
      dx153 = getTryDispatchBuiltinValue(dr124);
      goto L0(dx153);
    };
    p87 = prom<V +>{
      col_term3 = ld `col.term`;
      col_term4 = force? col_term3;
      checkMissing(col_term4);
      return col_term4;
    };
    p88 = prom<V +>{
      lwd_term3 = ld `lwd.term`;
      lwd_term4 = force? lwd_term3;
      checkMissing(lwd_term4);
      return lwd_term4;
    };
    ddd4 = ld `...`;
    r488 = dyn plot4[, , type, xlab, ylab, xlim, ylim, main, col, lwd, `...`](p80, p81, "l", p82, p83, p84, p85, p86, p87, p88, ddd4);
    check L788() else D247();
  L823():
    p110 = prom<V +>{
      sym60 = ldf `rep.int`;
      base60 = ldf `rep.int` in base;
      guard60 = `==`.4(sym60, base60);
      if guard60 then L3() else L4();
    L0(r544):
      return r544;
    L3():
      xlims22 = ld xlims;
      xlims23 = force? xlims22;
      checkMissing(xlims23);
      c184 = `is.object`(xlims23);
      if c184 then L5() else L6(xlims23);
    L4():
      r543 = dyn base60(<lang `+`(`[`(xlims, 1), `*`(c(0.0, 0.05, NA_LGL), diff(xlims)))>, <sym n>);
      goto L0(r543);
    L1(dx169):
      sym61 = ldf c;
      base61 = ldf c in base;
      guard61 = `==`.4(sym61, base61);
      if guard61 then L8() else L9();
    L5():
      dr136 = tryDispatchBuiltin.1("[", xlims23);
      dc68 = getTryDispatchBuiltinDispatched(dr136);
      if dc68 then L7() else L6(dr136);
    L6(xlims25):
      __49 = ldf `[` in base;
      r545 = dyn __49(xlims25, 1);
      goto L1(r545);
    L2(dx172, r547):
      diff6 = ldf diff;
      p109 = prom<V +>{
        xlims26 = ld xlims;
        xlims27 = force? xlims26;
        checkMissing(xlims27);
        return xlims27;
      };
      r550 = dyn diff6(p109);
      r551 = `*`(r547, r550);
      r552 = `+`(dx172, r551);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      rep_int3 = ldf `rep.int` in base;
      r553 = dyn rep_int3(r552, n5);
      goto L0(r553);
    L7():
      dx168 = getTryDispatchBuiltinValue(dr136);
      goto L1(dx168);
    L8():
      c185 = ldf c in base;
      r548 = dyn c185(0.0, 0.05, NA_LGL);
      goto L2(dx169, r548);
    L9():
      r546 = dyn base61(0.0, 0.05, NA_LGL);
      goto L2(dx169, r546);
    };
    p111 = prom<V +>{
      sym62 = ldf `rep.int`;
      base62 = ldf `rep.int` in base;
      guard62 = `==`.4(sym62, base62);
      if guard62 then L3() else L4();
    L0(r556):
      return r556;
    L3():
      pres18 = ld pres;
      pres19 = force? pres18;
      checkMissing(pres19);
      c186 = `is.object`(pres19);
      if c186 then L5() else L6();
    L4():
      r555 = dyn base62(<lang `[`(pres, , i)>, <lang rep.int(3.0, n)>);
      goto L0(r555);
    L1(dx174):
      sym63 = ldf `rep.int`;
      base63 = ldf `rep.int` in base;
      guard63 = `==`.4(sym63, base63);
      if guard63 then L8() else L9();
    L5():
      dr138 = tryDispatchBuiltin.1("[", pres19);
      dc69 = getTryDispatchBuiltinDispatched(dr138);
      if dc69 then L7() else L6();
    L6():
      i350 = ld i;
      i351 = force? i350;
      __50 = ldf `[` in base;
      r557 = dyn __50(pres19, <missing>, i351);
      goto L1(r557);
    L2(r559):
      rep_int5 = ldf `rep.int` in base;
      r561 = dyn rep_int5(dx174, r559);
      goto L0(r561);
    L7():
      dx173 = getTryDispatchBuiltinValue(dr138);
      goto L1(dx173);
    L8():
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      rep_int4 = ldf `rep.int` in base;
      r560 = dyn rep_int4(3.0, n7);
      goto L2(r560);
    L9():
      r558 = dyn base63(3.0, <sym n>);
      goto L2(r558);
    };
    r563 = dyn lines2(p110, p111);
    check L824() else D266();
  D207():
    deopt 821 [i206, r379];
  D243():
    deopt 983 [i303, dx142, 0.07, r463];
  D247():
    deopt 1019 [i308, r488];
  D266():
    deopt 1096 [i347, r563];
  L179():
    goto L184(i209);
  L184(i228):
    plot3 = ldf plot;
    check L724() else D215();
  L702():
    goto L178(i206, r379);
  L704():
    xlims = ld xlims;
    check L705() else D209();
  L780():
    r464 = `*`(0.07, r463);
    r465 = `-`(dx142, r464);
    l21 = ld xlims;
    c157 = `is.object`(l21);
    if c157 then L781() else L782(i303, r465, l21);
  L788():
    se17 = ld se;
    check L789() else D248();
  L824():
    goto L216(i347, r563);
  D209():
    deopt 825 [i209, xlims];
  D215():
    deopt 860 [i228];
  D248():
    deopt 1020 [i308, se17];
  L203(i307, r469, dx144):
    st xlims = dx144;
    goto L204(i307);
  L705():
    xlims1 = force? xlims;
    checkMissing(xlims1);
    c135 = `is.object`(xlims1);
    if c135 then L706() else L707(i209, xlims1);
  L724():
    p61 = prom<V +>{
      xlabs5 = ld xlabs;
      xlabs6 = force? xlabs5;
      checkMissing(xlabs6);
      c139 = `is.object`(xlabs6);
      if c139 then L1() else L2(xlabs6);
    L0(dx123):
      return dx123;
    L1():
      dr94 = tryDispatchBuiltin.1("[", xlabs6);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(xlabs8):
      i229 = ld i;
      i230 = force? i229;
      __29 = ldf `[` in base;
      r401 = dyn __29(xlabs8, i230);
      goto L0(r401);
    L3():
      dx122 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx122);
    };
    p62 = prom<V +>{
      ylabs5 = ld ylabs;
      ylabs6 = force? ylabs5;
      checkMissing(ylabs6);
      c140 = `is.object`(ylabs6);
      if c140 then L1() else L2(ylabs6);
    L0(dx125):
      return dx125;
    L1():
      dr96 = tryDispatchBuiltin.1("[", ylabs6);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(ylabs8):
      i231 = ld i;
      i232 = force? i231;
      __30 = ldf `[` in base;
      r403 = dyn __30(ylabs8, i232);
      goto L0(r403);
    L3():
      dx124 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx124);
    };
    p63 = prom<V +>{
      xlims12 = ld xlims;
      xlims13 = force? xlims12;
      checkMissing(xlims13);
      return xlims13;
    };
    p64 = prom<V +>{
      ylims20 = ld ylims;
      ylims21 = force? ylims20;
      checkMissing(ylims21);
      return ylims21;
    };
    p65 = prom<V +>{
      main21 = ld main;
      main22 = force? main21;
      checkMissing(main22);
      c141 = `is.object`(main22);
      if c141 then L1() else L2(main22);
    L0(dx127):
      return dx127;
    L1():
      dr98 = tryDispatchBuiltin.1("[", main22);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(main24):
      i233 = ld i;
      i234 = force? i233;
      __31 = ldf `[` in base;
      r407 = dyn __31(main24, i234);
      goto L0(r407);
    L3():
      dx126 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx126);
    };
    ddd1 = ld `...`;
    r409 = dyn plot3[, , type, xlab, ylab, xlim, ylim, main, xaxt, `...`](1.0, 0.0, "n", p61, p62, p63, p64, p65, "n", ddd1);
    check L725() else D216();
  L781():
    dr114 = tryDispatchBuiltin.0("[<-", l21, r465);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L783() else L782(i303, r465, dr114);
  L782(i305, r467, l23):
    ___4 = ldf `[<-` in base;
    r470 = dyn ___4(l23, r465, 1);
    goto L203(i305, r467, r470);
  L789():
    se18 = force? se17;
    checkMissing(se18);
    c163 = `as.logical`(se18);
    if c163 then L790() else L205();
  D216():
    deopt 878 [i228, r409];
  L180(i215, dx115):
    diff2 = ldf diff;
    check L709() else D210();
  L205():
    goto L195(i308);
  L706():
    dr86 = tryDispatchBuiltin.1("[", xlims1);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L708() else L707(i209, dr86);
  L707(i213, xlims3):
    __27 = ldf `[` in base;
    r380 = dyn __27(xlims3, 1);
    goto L180(i213, r380);
  L725():
    use_factor_levels1 = ld `use.factor.levels`;
    check L726() else D217();
  L783():
    dx143 = getTryDispatchBuiltinValue(dr114);
    goto L203(i303, r465, dx143);
  L790():
    se_lines1 = ldf `se.lines`;
    check L791() else D249();
  D210():
    deopt 831 [i215, dx115, 0.07];
  D217():
    deopt 879 [i228, use_factor_levels1];
  D249():
    deopt 1023 [i308];
  L708():
    dx114 = getTryDispatchBuiltinValue(dr86);
    goto L180(i209, dx114);
  L709():
    p59 = prom<V +>{
      xlims4 = ld xlims;
      xlims5 = force? xlims4;
      checkMissing(xlims5);
      return xlims5;
    };
    r382 = dyn diff2(p59);
    check L710() else D211();
  L726():
    use_factor_levels2 = force? use_factor_levels1;
    checkMissing(use_factor_levels2);
    c142 = `as.logical`(use_factor_levels2);
    if c142 then L727() else L185();
  L791():
    p89 = prom<V +>{
      xx36 = ld xx;
      xx37 = force? xx36;
      checkMissing(xx37);
      c164 = `is.object`(xx37);
      if c164 then L1() else L2(xx37);
    L0(dx156):
      return dx156;
    L1():
      dr126 = tryDispatchBuiltin.1("[", xx37);
      dc63 = getTryDispatchBuiltinDispatched(dr126);
      if dc63 then L3() else L2(dr126);
    L2(xx39):
      oo4 = ld oo;
      oo5 = force? oo4;
      __44 = ldf `[` in base;
      r489 = dyn __44(xx39, oo5);
      goto L0(r489);
    L3():
      dx155 = getTryDispatchBuiltinValue(dr126);
      goto L0(dx155);
    };
    p90 = prom<V +>{
      oo6 = ld oo;
      oo7 = force? oo6;
      checkMissing(oo7);
      return oo7;
    };
    p91 = prom<V +>{
      i319 = ld i;
      i320 = force? i319;
      checkMissing(i320);
      return i320;
    };
    r493 = dyn se_lines1[, iy, i](p89, p90, p91);
    check L792() else D250();
  D211():
    deopt 833 [i215, dx115, 0.07, r382];
  D250():
    deopt 1029 [i308, r493];
  L185():
    axis1 = ldf axis;
    check L731() else D220();
  L186(i237):
    sym49 = ldf seq_along;
    base49 = ldf seq_along in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L733() else L734();
  L710():
    r383 = `*`(0.07, r382);
    r384 = `-`(dx115, r383);
    l14 = ld xlims;
    c136 = `is.object`(l14);
    if c136 then L711() else L712(i215, r384, l14);
  L727():
    axis = ldf axis;
    check L728() else D218();
  L792():
    goto L195(i308);
  D218():
    deopt 882 [i228];
  D220():
    deopt 891 [i228];
  L181(i219, dx117):
    st xlims = dx117;
    xlims6 = ld xlims;
    check L714() else D212();
  L187(i240, r419):
    s2 = toForSeq(r419);
    l20 = length(s2);
    i241 = 0;
    goto L188(i240, i241);
  L711():
    dr88 = tryDispatchBuiltin.0("[<-", l14, r384);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L713() else L712(i215, r384, dr88);
  L712(i217, r386, l16):
    ___2 = ldf `[<-` in base;
    r389 = dyn ___2(l16, r384, 1);
    goto L181(i217, r389);
  L728():
    p66 = prom<V +>{
      sym48 = ldf seq_along;
      base48 = ldf seq_along in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L1() else L2();
    L0(r411):
      return r411;
    L1():
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      r412 = seq_along(ll3);
      goto L0(r412);
    L2():
      r410 = dyn base48(<sym ll>);
      goto L0(r410);
    };
    p67 = prom<V +>{
      ll4 = ld ll;
      ll5 = force? ll4;
      checkMissing(ll5);
      return ll5;
    };
    ddd2 = ld `...`;
    r415 = dyn axis[, at, labels, `...`](1.0, p66, p67, ddd2);
    check L729() else D219();
  L731():
    r417 = dyn axis1(1.0);
    check L732() else D221();
  L733():
    ll6 = ld ll;
    check L735() else D222();
  L734():
    r418 = dyn base49(<sym ll>);
    goto L187(i237, r418);
  D212():
    deopt 841 [i219, xlims6];
  D219():
    deopt 889 [i228, r415];
  D221():
    deopt 893 [i228, r417];
  D222():
    deopt 895 [i237, ll6];
  L188(i242, i243):
    i244 = `+`.1(i243, 1);
    c143 = `<`.1(l20, i244);
    if c143 then L736() else L194();
  L713():
    dx116 = getTryDispatchBuiltinValue(dr88);
    goto L181(i215, dx116);
  L714():
    xlims7 = force? xlims6;
    checkMissing(xlims7);
    c137 = `is.object`(xlims7);
    if c137 then L715() else L716(i219, xlims7);
  L729():
    goto L186(i228);
  L732():
    goto L186(i228);
  L735():
    ll7 = force? ll6;
    checkMissing(ll7);
    r420 = seq_along(ll7);
    goto L187(i237, r420);
  L182(i223, dx119):
    diff3 = ldf diff;
    check L718() else D213();
  L194():
    x2 = `[[`(s2, i244, NULL, TRUE);
    st j = x2;
    which = ldf which;
    check L737() else D223();
  L715():
    dr90 = tryDispatchBuiltin.1("[", xlims7);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L717() else L716(i219, dr90);
  L716(i221, xlims9):
    __28 = ldf `[` in base;
    r390 = dyn __28(xlims9, 2);
    goto L182(i221, r390);
  L736():
    goto L195(i242);
  D213():
    deopt 847 [i223, dx119, 0.03];
  D223():
    deopt 899 [i242, i244];
  L717():
    dx118 = getTryDispatchBuiltinValue(dr90);
    goto L182(i219, dx118);
  L718():
    p60 = prom<V +>{
      xlims10 = ld xlims;
      xlims11 = force? xlims10;
      checkMissing(xlims11);
      return xlims11;
    };
    r392 = dyn diff3(p60);
    check L719() else D214();
  L737():
    p68 = prom<V +>{
      ff6 = ld ff;
      ff7 = force? ff6;
      checkMissing(ff7);
      ll8 = ld ll;
      ll9 = force? ll8;
      checkMissing(ll9);
      c144 = `is.object`(ll9);
      if c144 then L1() else L2(ff7, ll9);
    L0(ff11, dx129):
      r422 = `==`(ff11, dx129);
      return r422;
    L1():
      dr100 = tryDispatchBuiltin.1("[", ll9);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L3() else L2(ff7, dr100);
    L2(ff9, ll11):
      j = ld j;
      j1 = force? j;
      __32 = ldf `[` in base;
      r421 = dyn __32(ll11, j1);
      goto L0(ff9, r421);
    L3():
      dx128 = getTryDispatchBuiltinValue(dr100);
      goto L0(ff7, dx128);
    };
    r424 = dyn which(p68);
    check L738() else D224();
  D214():
    deopt 849 [i223, dx119, 0.03, r392];
  D224():
    deopt 901 [i242, i244, r424];
  L719():
    r393 = `*`(0.03, r392);
    r394 = `+`(dx119, r393);
    l17 = ld xlims;
    c138 = `is.object`(l17);
    if c138 then L720() else L721(i223, r394, l17);
  L738():
    c145 = `is.object`(r424);
    if c145 then L739() else L740(i242, i244, r424);
  L183(i227, r398, dx121):
    st xlims = dx121;
    goto L184(i227);
  L189(i255, i256, dx131):
    st ww = dx131;
    j2 = ld j;
    check L745() else D226();
  L720():
    dr92 = tryDispatchBuiltin.0("[<-", l17, r394);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L722() else L721(i223, r394, dr92);
  L721(i225, r396, l19):
    ___3 = ldf `[<-` in base;
    r399 = dyn ___3(l19, r394, 2);
    goto L183(i225, r396, r399);
  L739():
    dr102 = tryDispatchBuiltin.1("[", r424);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L741() else L740(i242, i244, dr102);
  L740(i251, i252, r426):
    sym50 = ldf c;
    base50 = ldf c in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L742() else L743();
  D226():
    deopt 910 [i255, i256, j2];
  L190(i261, i262, r430, r431):
    __33 = ldf `[` in base;
    r433 = dyn __33(r430, r431);
    goto L189(i261, i262, r433);
  L722():
    dx120 = getTryDispatchBuiltinValue(dr92);
    goto L183(i223, r394, dx120);
  L741():
    dx130 = getTryDispatchBuiltinValue(dr102);
    goto L189(i242, i244, dx130);
  L742():
    c146 = ldf c in base;
    r432 = dyn c146(1.0, 1.0);
    check L744() else D225();
  L743():
    r429 = dyn base50(1.0, 1.0);
    goto L190(i251, i252, r426, r429);
  L745():
    j3 = force? j2;
    checkMissing(j3);
    sym51 = ldf c;
    base51 = ldf c in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L746() else L747();
  D225():
    deopt 907 [i251, i252, r426, r432];
  L191(i267, i268, j6, r435):
    r437 = `+`(j6, r435);
    st jf = r437;
    lines = ldf lines;
    check L749() else D228();
  L744():
    goto L190(i251, i252, r426, r432);
  L746():
    c147 = ldf c in base;
    r436 = dyn c147(-0.4, 0.4);
    check L748() else D227();
  L747():
    r434 = dyn base51(<lang `-`(0.4)>, 0.4);
    goto L191(i255, i256, j3, r434);
  D227():
    deopt 917 [i255, i256, j3, r436];
  D228():
    deopt 921 [i267, i268];
  L748():
    goto L191(i255, i256, j3, r436);
  L749():
    p69 = prom<V +>{
      jf = ld jf;
      jf1 = force? jf;
      checkMissing(jf1);
      return jf1;
    };
    p70 = prom<V +>{
      tms40 = ld tms;
      tms41 = force? tms40;
      checkMissing(tms41);
      c148 = `is.object`(tms41);
      if c148 then L1() else L2(tms41);
    L0(dx133):
      return dx133;
    L1():
      dr104 = tryDispatchBuiltin.1("[", tms41);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L3() else L2(dr104);
    L2(tms43):
      ww10 = ld ww;
      ww11 = force? ww10;
      i269 = ld i;
      i270 = force? i269;
      __34 = ldf `[` in base;
      r439 = dyn __34(tms43, ww11, i270);
      goto L0(r439);
    L3():
      dx132 = getTryDispatchBuiltinValue(dr104);
      goto L0(dx132);
    };
    p71 = prom<V +>{
      col_term1 = ld `col.term`;
      col_term2 = force? col_term1;
      checkMissing(col_term2);
      return col_term2;
    };
    p72 = prom<V +>{
      lwd_term1 = ld `lwd.term`;
      lwd_term2 = force? lwd_term1;
      checkMissing(lwd_term2);
      return lwd_term2;
    };
    ddd3 = ld `...`;
    r443 = dyn lines[, , col, lwd, `...`](p69, p70, p71, p72, ddd3);
    check L750() else D229();
  D229():
    deopt 929 [i267, i268, r443];
  L750():
    se15 = ld se;
    check L751() else D230();
  D230():
    deopt 930 [i267, i268, se15];
  L751():
    se16 = force? se15;
    checkMissing(se16);
    c149 = `as.logical`(se16);
    if c149 then L752() else L192();
  L192():
    goto L193(i267, i268);
  L193(i277, i278):
    goto L188(i277, i278);
  L752():
    se_lines = ldf `se.lines`;
    check L753() else D231();
  D231():
    deopt 933 [i267, i268];
  L753():
    p73 = prom<V +>{
      jf2 = ld jf;
      jf3 = force? jf2;
      checkMissing(jf3);
      return jf3;
    };
    p74 = prom<V +>{
      ww12 = ld ww;
      ww13 = force? ww12;
      checkMissing(ww13);
      return ww13;
    };
    p75 = prom<V +>{
      i275 = ld i;
      i276 = force? i275;
      checkMissing(i276);
      return i276;
    };
    r447 = dyn se_lines[, iy, i](p73, p74, p75);
    check L754() else D232();
  D232():
    deopt 939 [i267, i268, r447];
  L754():
    goto L193(i267, i268);
  }
}
fun inner3761132424(term, transform) {
  (reg term:*, reg transform:*) -+> V { var term:*, var transform:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg term1:*, reg term2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg transform1:*, reg transform2:V, reg c1:L, reg tms:*, reg tms1:V, reg c2:L, reg tms3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r4:V, reg carrier:cls, reg term3:*, reg term4:V, reg c3:L, reg term6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V, reg p:p(V +), reg transform3:*, reg transform4:V, reg p1:p(V +), reg r8:V, reg eval:cls, reg term7:*, reg term8:V, reg p2:p(V +), reg data:*, reg data1:V, reg p3:p(V +), reg pf:*, reg pf1:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st term = term;
    st transform = transform;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    term1 = ld term;
    check L6() else D0();
  L5():
    r = dyn base(<sym term>);
    goto L0(r);
  D0():
    deopt 2 [term1];
  L1():
    eval = ldf eval;
    check L20() else D7();
  L6():
    term2 = force? term1;
    checkMissing(term2);
    length = ldf length in base;
    r2 = dyn length(term2);
    check L7() else D1();
  L8():
    transform1 = ld transform;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [transform1];
  D7():
    deopt 23 [];
  L7():
    goto L0(r2);
  L9():
    transform2 = force? transform1;
    checkMissing(transform2);
    c1 = `as.logical`(transform2);
    if c1 then L10() else L2();
  L20():
    p2 = prom<V +>{
      term7 = ld term;
      term8 = force? term7;
      checkMissing(term8);
      return term8;
    };
    p3 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p4 = prom<V +>{
      pf = ld pf;
      pf1 = force? pf;
      checkMissing(pf1);
      return pf1;
    };
    r12 = dyn eval[, , enclos](p2, p3, p4);
    check L21() else D8();
  D8():
    deopt 28 [r12];
  L2():
    carrier = ldf carrier;
    check L17() else D5();
  L10():
    tms = ld tms;
    check L11() else D3();
  L21():
    popenv;
    return r12;
  D3():
    deopt 10 [tms];
  D5():
    deopt 18 [];
  L11():
    tms1 = force? tms;
    checkMissing(tms1);
    c2 = `is.object`(tms1);
    if c2 then L12() else L13(tms1);
  L17():
    p = prom<V +>{
      term3 = ld term;
      term4 = force? term3;
      checkMissing(term4);
      c3 = `is.object`(term4);
      if c3 then L1() else L2(term4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", term4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(term6):
      __1 = ldf `[[` in base;
      r5 = dyn __1(term6, 2);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      transform3 = ld transform;
      transform4 = force? transform3;
      checkMissing(transform4);
      return transform4;
    };
    r8 = dyn carrier(p, p1);
    check L18() else D6();
  D6():
    deopt 21 [r8];
  L3(dx1):
    popenv;
    return dx1;
  L12():
    dr = tryDispatchBuiltin.1("[", tms1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(tms3):
    i = ld i;
    check L15() else D4();
  L18():
    popenv;
    return r8;
  D4():
    deopt 13 [tms3, i];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L15():
    i1 = force? i;
    __ = ldf `[` in base;
    r4 = dyn __(tms1, <missing>, i1);
    goto L3(r4);
  }
}
fun inner1339249548(term) {
  (reg term:*) -+> V { var term:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg term1:*, reg term2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg carrier_name:cls, reg term3:*, reg term4:V, reg c1:L, reg term6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg term7:*, reg term8:V, reg as_character:cls, reg r9:V |
    mkenv;
    st term = term;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    term1 = ld term;
    check L5() else D0();
  L4():
    r = dyn base(<sym term>);
    goto L0(r);
  D0():
    deopt 2 [term1];
  L1():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L5():
    term2 = force? term1;
    checkMissing(term2);
    length = ldf length in base;
    r2 = dyn length(term2);
    check L6() else D1();
  L7():
    carrier_name = ldf `carrier.name`;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  L2(r8):
    popenv;
    return r8;
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      term3 = ld term;
      term4 = force? term3;
      checkMissing(term4);
      c1 = `is.object`(term4);
      if c1 then L1() else L2(term4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", term4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(term6):
      __ = ldf `[[` in base;
      r4 = dyn __(term6, 2);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn carrier_name(p);
    check L9() else D3();
  L11():
    term7 = ld term;
    check L13() else D4();
  L12():
    r7 = dyn base1(<sym term>);
    goto L2(r7);
  D3():
    deopt 11 [r6];
  D4():
    deopt 14 [term7];
  L9():
    popenv;
    return r6;
  L13():
    term8 = force? term7;
    checkMissing(term8);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(term8);
    check L14() else D5();
  D5():
    deopt 17 [r9];
  L14():
    goto L2(r9);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg _in_:cls, reg i1:*, reg i2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg mf:*, reg mf1:V, reg names:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg c:L, reg c2:V, reg is_factor:cls, reg mf2:*, reg mf3:V, reg c3:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg c4:L, reg c5:V |
    mkenv;
    st i = i;
    _in_ = ldf `%in%`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      return i2;
    };
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names = ldf names in base;
      r3 = dyn names(mf1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym mf>);
      goto L0(r1);
    };
    r5 = dyn _in_(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r5];
  L2():
    c = `as.logical`(r5);
    if c then L3() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L3():
    is_factor = ldf `is.factor`;
    check L4() else D2();
  D2():
    deopt 6 [c];
  L4():
    p2 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      c3 = `is.object`(mf3);
      if c3 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", mf3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      i3 = ld i;
      i4 = force? i3;
      __ = ldf `[` in base;
      r6 = dyn __(mf3, <missing>, i4);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn is_factor(p2);
    check L5() else D3();
  D3():
    deopt 8 [c, r8];
  L5():
    c4 = `as.logical`(r8);
    c5 = `&&`(c, c4);
    goto L0(c5);
  }
}
fun inner4215417412(x, iy, i, ff) {
  (reg x:*, reg iy:*, reg i:*, reg ff:*) -+> V { var x:*, var iy:*, var i:*, var ff:*, reg ff_isMissing:L, reg ff_orDefault:*, reg ff1:*, reg ff2:V, reg terms:*, reg terms1:V, reg c:L, reg ff4:V, reg terms3:V, reg dr:V, reg dc:L, reg dx:V, reg ff6:V, reg dx1:V, reg r:V, reg c1:L, reg ff8:V, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg ff10:V, reg dx5:V, reg iy1:*, reg iy2:V, reg i1:*, reg i2:V, reg __:cls, reg r1:V, reg r2:V, reg lines:cls, reg x1:*, reg x2:V, reg p:p(V +), reg tms:*, reg tms1:V, reg c2:L, reg tms3:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg iy3:*, reg iy4:V, reg i3:*, reg i4:V, reg __1:cls, reg r4:V, reg tt:*, reg tt1:V, reg r5:V, reg p1:p(V +), reg lty_se:*, reg lty_se1:V, reg p2:p(V +), reg lwd_se:*, reg lwd_se1:V, reg p3:p(V +), reg col_se:*, reg col_se1:V, reg p4:p(V +), reg r10:V, reg lines1:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg tms4:*, reg tms5:V, reg c3:L, reg tms7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg iy5:*, reg iy6:V, reg i5:*, reg i6:V, reg __2:cls, reg r12:V, reg tt2:*, reg tt3:V, reg r13:V, reg p6:p(V +), reg lty_se2:*, reg lty_se3:V, reg p7:p(V +), reg lwd_se2:*, reg lwd_se3:V, reg p8:p(V +), reg col_se2:*, reg col_se3:V, reg p9:p(V +), reg r18:V |
    mkenv;
    st x = x;
    st iy = iy;
    st i = i;
    ff_isMissing = missing.0(ff);
    if ff_isMissing then L0(2.0) else L0(ff);
  L0(ff_orDefault):
    st ff = ff_orDefault;
    ff1 = ld ff;
    check L2() else D0();
  D0():
    deopt 0 [ff1];
  L2():
    ff2 = force? ff1;
    checkMissing(ff2);
    terms = ld terms;
    check L3() else D1();
  D1():
    deopt 1 [ff2, terms];
  L3():
    terms1 = force? terms;
    checkMissing(terms1);
    c = `is.object`(terms1);
    if c then L5() else L6(ff2, terms1);
  L4(ff6, dx1):
    c1 = `is.object`(dx1);
    if c1 then L8() else L9(ff6, dx1);
  L5():
    dr = tryDispatchBuiltin.1("$", terms1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(ff2, dr);
  L6(ff4, terms3):
    r = `$`(terms3, <sym se.fit>);
    goto L4(ff4, r);
  L1(ff10, dx5):
    r2 = `*`(ff10, dx5);
    st tt = r2;
    lines = ldf lines;
    check L13() else D4();
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(ff2, dx);
  L8():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(ff6, dr2);
  L9(ff8, dx3):
    iy1 = ld iy;
    check L11() else D2();
  D2():
    deopt 4 [ff8, dx3, iy1];
  D4():
    deopt 11 [];
  L10():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(ff6, dx4);
  L11():
    iy2 = force? iy1;
    i1 = ld i;
    check L12() else D3();
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      tms = ld tms;
      tms1 = force? tms;
      checkMissing(tms1);
      c2 = `is.object`(tms1);
      if c2 then L1() else L2(tms1);
    L0(dx7):
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      r5 = `+`(dx7, tt1);
      return r5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", tms1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(tms3):
      iy3 = ld iy;
      iy4 = force? iy3;
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[` in base;
      r4 = dyn __1(tms3, iy4, i4);
      goto L0(r4);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    p2 = prom<V +>{
      lty_se = ld `lty.se`;
      lty_se1 = force? lty_se;
      checkMissing(lty_se1);
      return lty_se1;
    };
    p3 = prom<V +>{
      lwd_se = ld `lwd.se`;
      lwd_se1 = force? lwd_se;
      checkMissing(lwd_se1);
      return lwd_se1;
    };
    p4 = prom<V +>{
      col_se = ld `col.se`;
      col_se1 = force? col_se;
      checkMissing(col_se1);
      return col_se1;
    };
    r10 = dyn lines[, , lty, lwd, col](p, p1, p2, p3, p4);
    check L14() else D5();
  D3():
    deopt 5 [ff8, dx3, iy2, i1];
  D5():
    deopt 20 [r10];
  L12():
    i2 = force? i1;
    __ = ldf `[` in base;
    r1 = dyn __(dx3, iy2, i2);
    goto L1(ff8, r1);
  L14():
    lines1 = ldf lines;
    check L15() else D6();
  D6():
    deopt 22 [];
  L15():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p6 = prom<V +>{
      tms4 = ld tms;
      tms5 = force? tms4;
      checkMissing(tms5);
      c3 = `is.object`(tms5);
      if c3 then L1() else L2(tms5);
    L0(dx9):
      tt2 = ld tt;
      tt3 = force? tt2;
      checkMissing(tt3);
      r13 = `-`(dx9, tt3);
      return r13;
    L1():
      dr6 = tryDispatchBuiltin.1("[", tms5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(tms7):
      iy5 = ld iy;
      iy6 = force? iy5;
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[` in base;
      r12 = dyn __2(tms7, iy6, i6);
      goto L0(r12);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    p7 = prom<V +>{
      lty_se2 = ld `lty.se`;
      lty_se3 = force? lty_se2;
      checkMissing(lty_se3);
      return lty_se3;
    };
    p8 = prom<V +>{
      lwd_se2 = ld `lwd.se`;
      lwd_se3 = force? lwd_se2;
      checkMissing(lwd_se3);
      return lwd_se3;
    };
    p9 = prom<V +>{
      col_se2 = ld `col.se`;
      col_se3 = force? col_se2;
      checkMissing(col_se3);
      return col_se3;
    };
    r18 = dyn lines1[, , lty, lwd, col](p5, p6, p7, p8, p9);
    check L16() else D7();
  D7():
    deopt 31 [r18];
  L16():
    popenv;
    return r18;
  }
}