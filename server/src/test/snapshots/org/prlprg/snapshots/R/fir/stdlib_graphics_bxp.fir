fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg set_seed:cls, reg r5:V, reg boxplot:cls, reg split:cls, reg rt:cls, reg r6:V, reg p1:p(V +), reg gl:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg bxp:cls, reg bx_p:*, reg bx_p1:V, reg p5:p(V +), reg r19:V, reg bxp1:cls, reg bx_p2:*, reg bx_p3:V, reg p6:p(V +), reg p7:p(V +), reg r22:V, reg bxp2:cls, reg bx_p4:*, reg bx_p5:V, reg p8:p(V +), reg r24:V, reg bxp3:cls, reg bx_p6:*, reg bx_p7:V, reg p9:p(V +), reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg c1:cls, reg r29:V, reg p11:p(V +), reg r31:V, reg par1:cls, reg op:*, reg op1:V, reg p12:p(V +), reg r33:V, reg par2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg c2:cls, reg r36:V, reg p13:p(V +), reg r38:V, reg boxplot1:cls, reg __:cls, reg r39:V, reg p14:p(V +), reg PlantGrowth:*, reg PlantGrowth1:V, reg p15:p(V +), reg group:*, reg group1:V, reg r42:V, reg p16:p(V +), reg r44:V, reg boxplot2:cls, reg __1:cls, reg r45:V, reg p17:p(V +), reg PlantGrowth2:*, reg PlantGrowth3:V, reg p18:p(V +), reg group2:*, reg group3:V, reg r48:V, reg p19:p(V +), reg r50:V, reg bxp4:cls, reg bx:*, reg bx1:V, reg p20:p(V +), reg r52:V, reg par3:cls, reg op2:*, reg op3:V, reg p21:p(V +), reg r54:V, reg boxplot3:cls, reg matrix:cls, reg rnorm:cls, reg r55:V, reg r56:V, reg p22:p(V +), reg r58:V, reg p23:p(V +), reg p24:p(V +), reg r61:V, reg split1:cls, reg rnorm1:cls, reg r62:V, reg p25:p(V +), reg rpois:cls, reg r64:V, reg p26:p(V +), reg r66:V, reg boxplot4:cls, reg z:*, reg z1:V, reg p27:p(V +), reg r68:V, reg par4:cls, reg p28:p(V +), reg r70:V, reg boxplot5:cls, reg z2:*, reg z3:V, reg p29:p(V +), reg r72:V, reg plot:cls, reg z4:*, reg z5:V, reg c3:L, reg z7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r73:V, reg p30:p(V +), reg r75:V, reg mtext:cls, reg p31:p(V +), reg r77:V, reg par5:cls, reg op4:*, reg op5:V, reg p32:p(V +), reg r79:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r80:V, reg r81:V, reg list:cls, reg r82:V, reg boxplot6:cls, reg z8:*, reg z9:V, reg p33:p(V +), reg splus:*, reg splus1:V, reg p34:p(V +), reg r85:V, reg par6:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r86:V, reg r87:V, reg c4:cls, reg r88:V, reg p35:p(V +), reg r90:V, reg boxplot7:cls, reg z10:*, reg z11:V, reg p36:p(V +), reg p37:p(V +), reg r93:V, reg boxplot8:cls, reg z12:*, reg z13:V, reg p38:p(V +), reg p39:p(V +), reg p40:p(V +), reg r97:V, reg par7:cls, reg op6:*, reg op7:V, reg p41:p(V +), reg r99:V, reg boxplot9:cls, reg z14:*, reg z15:V, reg p42:p(V +), reg p43:p(V +), reg r102:V |
    mkenv;
    r = clos inner1652376761;
    st bxp = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    set_seed = ldf `set.seed`;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    r5 = dyn set_seed(753.0);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r5];
  L5():
    goto L0();
  L7():
    boxplot = ldf boxplot;
    check L8() else D4();
  D4():
    deopt 13 [];
  L8():
    p3 = prom<V +>{
      split = ldf split;
      p1 = prom<V +>{
        rt = ldf rt;
        r6 = dyn rt(100.0, 4.0);
        return r6;
      };
      p2 = prom<V +>{
        gl = ldf gl;
        r8 = dyn gl(5.0, 20.0);
        return r8;
      };
      r10 = dyn split(p1, p2);
      return r10;
    };
    r12 = dyn boxplot(p3);
    check L9() else D5();
  D5():
    deopt 15 [r12];
  L9():
    st `bx.p` = r12;
    par = ldf par;
    check L10() else D6();
  D6():
    deopt 18 [];
  L10():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c = ldf c in base;
      r15 = dyn c(2.0, 2.0);
      goto L0(r15);
    L2():
      r13 = dyn base1(2.0, 2.0);
      goto L0(r13);
    };
    r17 = dyn par[mfrow](p4);
    check L11() else D7();
  D7():
    deopt 21 [r17];
  L11():
    st op = r17;
    bxp = ldf bxp;
    check L12() else D8();
  D8():
    deopt 24 [];
  L12():
    p5 = prom<V +>{
      bx_p = ld `bx.p`;
      bx_p1 = force? bx_p;
      checkMissing(bx_p1);
      return bx_p1;
    };
    r19 = dyn bxp[, xaxt](p5, "n");
    check L13() else D9();
  D9():
    deopt 28 [r19];
  L13():
    bxp1 = ldf bxp;
    check L14() else D10();
  D10():
    deopt 30 [];
  L14():
    p6 = prom<V +>{
      bx_p2 = ld `bx.p`;
      bx_p3 = force? bx_p2;
      checkMissing(bx_p3);
      return bx_p3;
    };
    p7 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r22 = dyn bxp1[, notch, axes, pch, boxfill](p6, TRUE, FALSE, 4.0, p7);
    check L15() else D11();
  D11():
    deopt 40 [r22];
  L15():
    bxp2 = ldf bxp;
    check L16() else D12();
  D12():
    deopt 42 [];
  L16():
    p8 = prom<V +>{
      bx_p4 = ld `bx.p`;
      bx_p5 = force? bx_p4;
      checkMissing(bx_p5);
      return bx_p5;
    };
    r24 = dyn bxp2[, notch, boxfill, `frame.plot`, outline, main](p8, TRUE, "lightblue", FALSE, FALSE, "bxp(*, frame.plot= FALSE, outline= FALSE)");
    check L17() else D13();
  D13():
    deopt 54 [r24];
  L17():
    bxp3 = ldf bxp;
    check L18() else D14();
  D14():
    deopt 56 [];
  L18():
    p9 = prom<V +>{
      bx_p6 = ld `bx.p`;
      bx_p7 = force? bx_p6;
      checkMissing(bx_p7);
      return bx_p7;
    };
    p10 = prom<V +>{
      return <int 2, 3, 4, 5, 6>;
    };
    p11 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c1 = ldf c in base;
      r29 = dyn c1(-4.0, 4.0);
      goto L0(r29);
    L2():
      r27 = dyn base2(<lang `-`(4.0)>, 4.0);
      goto L0(r27);
    };
    r31 = dyn bxp3[, notch, boxfill, border, ylim, pch, bg, log, main](p9, TRUE, "lightblue", p10, p11, 22.0, "green", "x", "... log = 'x', ylim = *");
    check L19() else D15();
  D15():
    deopt 74 [r31];
  L19():
    par1 = ldf par;
    check L20() else D16();
  D16():
    deopt 76 [];
  L20():
    p12 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r33 = dyn par1(p12);
    check L21() else D17();
  D17():
    deopt 78 [r33];
  L21():
    par2 = ldf par;
    check L22() else D18();
  D18():
    deopt 80 [];
  L22():
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c2 = ldf c in base;
      r36 = dyn c2(1.0, 2.0);
      goto L0(r36);
    L2():
      r34 = dyn base3(1.0, 2.0);
      goto L0(r34);
    };
    r38 = dyn par2[mfrow](p13);
    check L23() else D19();
  D19():
    deopt 83 [r38];
  L23():
    st op = r38;
    boxplot1 = ldf boxplot;
    check L24() else D20();
  D20():
    deopt 86 [];
  L24():
    p14 = prom<V +>{
      __ = ldf `~` in base;
      r39 = dyn __(<sym weight>, <sym group>);
      return r39;
    };
    p15 = prom<V +>{
      PlantGrowth = ld PlantGrowth;
      PlantGrowth1 = force? PlantGrowth;
      checkMissing(PlantGrowth1);
      return PlantGrowth1;
    };
    p16 = prom<V +>{
      group = ld group;
      group1 = force? group;
      checkMissing(group1);
      r42 = `==`(group1, "ctrl");
      return r42;
    };
    r44 = dyn boxplot1[, data, subset](p14, p15, p16);
    check L25() else D21();
  D21():
    deopt 92 [r44];
  L25():
    boxplot2 = ldf boxplot;
    check L26() else D22();
  D22():
    deopt 94 [];
  L26():
    p17 = prom<V +>{
      __1 = ldf `~` in base;
      r45 = dyn __1(<sym weight>, <sym group>);
      return r45;
    };
    p18 = prom<V +>{
      PlantGrowth2 = ld PlantGrowth;
      PlantGrowth3 = force? PlantGrowth2;
      checkMissing(PlantGrowth3);
      return PlantGrowth3;
    };
    p19 = prom<V +>{
      group2 = ld group;
      group3 = force? group2;
      checkMissing(group3);
      r48 = `==`(group3, "ctrl");
      return r48;
    };
    r50 = dyn boxplot2[, data, subset, plot](p17, p18, p19, FALSE);
    check L27() else D23();
  D23():
    deopt 102 [r50];
  L27():
    st bx = r50;
    bxp4 = ldf bxp;
    check L28() else D24();
  D24():
    deopt 105 [];
  L28():
    p20 = prom<V +>{
      bx = ld bx;
      bx1 = force? bx;
      checkMissing(bx1);
      return bx1;
    };
    r52 = dyn bxp4[, `show.names`](p20, TRUE);
    check L29() else D25();
  D25():
    deopt 109 [r52];
  L29():
    par3 = ldf par;
    check L30() else D26();
  D26():
    deopt 111 [];
  L30():
    p21 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r54 = dyn par3(p21);
    check L31() else D27();
  D27():
    deopt 113 [r54];
  L31():
    boxplot3 = ldf boxplot;
    check L32() else D28();
  D28():
    deopt 115 [];
  L32():
    p23 = prom<V +>{
      matrix = ldf matrix;
      p22 = prom<V +>{
        rnorm = ldf rnorm;
        r55 = dyn rnorm(1000.0);
        r56 = `*`(100.0, r55);
        return r56;
      };
      r58 = dyn matrix(p22, 50.0, 20.0);
      return r58;
    };
    p24 = prom<V +>{
      return -1.0;
    };
    r61 = dyn boxplot3[, `cex.axis`, `gap.axis`](p23, 1.5, p24);
    check L33() else D29();
  D29():
    deopt 121 [r61];
  L33():
    split1 = ldf split;
    check L34() else D30();
  D30():
    deopt 123 [];
  L34():
    p25 = prom<V +>{
      rnorm1 = ldf rnorm;
      r62 = dyn rnorm1(1000.0);
      return r62;
    };
    p26 = prom<V +>{
      rpois = ldf rpois;
      r64 = dyn rpois(1000.0, 2.2);
      return r64;
    };
    r66 = dyn split1(p25, p26);
    check L35() else D31();
  D31():
    deopt 126 [r66];
  L35():
    st z = r66;
    boxplot4 = ldf boxplot;
    check L36() else D32();
  D32():
    deopt 129 [];
  L36():
    p27 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r68 = dyn boxplot4[, whisklty, main](p27, 3.0, "boxplot(z, whisklty = 3)");
    check L37() else D33();
  D33():
    deopt 135 [r68];
  L37():
    par4 = ldf par;
    check L38() else D34();
  D34():
    deopt 137 [];
  L38():
    p28 = prom<V +>{
      return <int 1, 2>;
    };
    r70 = dyn par4[mfrow, bg, fg](p28, "light gray", "midnight blue");
    check L39() else D35();
  D35():
    deopt 144 [r70];
  L39():
    st op = r70;
    boxplot5 = ldf boxplot;
    check L40() else D36();
  D36():
    deopt 147 [];
  L40():
    p29 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r72 = dyn boxplot5[, `col.axis`, main](p29, "skyblue3", "boxplot(*, col.axis=..,main=..)");
    check L41() else D37();
  D37():
    deopt 153 [r72];
  L41():
    plot = ldf plot;
    check L42() else D38();
  D38():
    deopt 155 [];
  L42():
    p30 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c3 = `is.object`(z5);
      if c3 then L1() else L2(z5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", z5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z7):
      __2 = ldf `[[` in base;
      r73 = dyn __2(z7, 1.0);
      goto L0(r73);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r75 = dyn plot[, `col.axis`, main](p30, "skyblue3", "plot(*, col.axis=..,main=..)");
    check L43() else D39();
  D39():
    deopt 161 [r75];
  L43():
    mtext = ldf mtext;
    check L44() else D40();
  D40():
    deopt 163 [];
  L44():
    p31 = prom<V +>{
      return -1.2;
    };
    r77 = dyn mtext[, outer, line]("par(bg=\"light gray\", fg=\"midnight blue\")", TRUE, p31);
    check L45() else D41();
  D41():
    deopt 169 [r77];
  L45():
    par5 = ldf par;
    check L46() else D42();
  D42():
    deopt 171 [];
  L46():
    p32 = prom<V +>{
      op4 = ld op;
      op5 = force? op4;
      checkMissing(op5);
      return op5;
    };
    r79 = dyn par5(p32);
    check L47() else D43();
  D43():
    deopt 173 [r79];
  L47():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L1(r81):
    st splus = r81;
    boxplot6 = ldf boxplot;
    check L51() else D45();
  L48():
    list = ldf list in base;
    r82 = dyn list(0.4, 1.0, 1.0, "grey40", 3.0, "white", 3.0, 1.0, NA_LGL);
    check L50() else D44();
  L49():
    r80 = dyn base4[boxwex, staplewex, outwex, boxfill, medlwd, medcol, whisklty, outlty, outpch](0.4, 1.0, 1.0, "grey40", 3.0, "white", 3.0, 1.0, NA_LGL);
    goto L1(r80);
  D44():
    deopt 195 [r82];
  D45():
    deopt 198 [];
  L50():
    goto L1(r82);
  L51():
    p33 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      return z9;
    };
    p34 = prom<V +>{
      splus = ld splus;
      splus1 = force? splus;
      checkMissing(splus1);
      return splus1;
    };
    r85 = dyn boxplot6[, pars](p33, p34);
    check L52() else D46();
  D46():
    deopt 202 [r85];
  L52():
    par6 = ldf par;
    check L53() else D47();
  D47():
    deopt 204 [];
  L53():
    p35 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      c4 = ldf c in base;
      r88 = dyn c4(1.0, 2.0);
      goto L0(r88);
    L2():
      r86 = dyn base5(1.0, 2.0);
      goto L0(r86);
    };
    r90 = dyn par6[mfrow](p35);
    check L54() else D48();
  D48():
    deopt 207 [r90];
  L54():
    st op = r90;
    boxplot7 = ldf boxplot;
    check L55() else D49();
  D49():
    deopt 210 [];
  L55():
    p36 = prom<V +>{
      z10 = ld z;
      z11 = force? z10;
      checkMissing(z11);
      return z11;
    };
    p37 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r93 = dyn boxplot7[, border, lty, medlty, medlwd](p36, p37, 3.0, 1.0, 2.5);
    check L56() else D50();
  D50():
    deopt 220 [r93];
  L56():
    boxplot8 = ldf boxplot;
    check L57() else D51();
  D51():
    deopt 222 [];
  L57():
    p38 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      return z13;
    };
    p39 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p40 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r97 = dyn boxplot8[, boxfill, pch, lwd, medcol](p38, p39, p40, 1.5, "white");
    check L58() else D52();
  D52():
    deopt 232 [r97];
  L58():
    par7 = ldf par;
    check L59() else D53();
  D53():
    deopt 234 [];
  L59():
    p41 = prom<V +>{
      op6 = ld op;
      op7 = force? op6;
      checkMissing(op7);
      return op7;
    };
    r99 = dyn par7(p41);
    check L60() else D54();
  D54():
    deopt 236 [r99];
  L60():
    boxplot9 = ldf boxplot;
    check L61() else D55();
  D55():
    deopt 238 [];
  L61():
    p42 = prom<V +>{
      z14 = ld z;
      z15 = force? z14;
      checkMissing(z15);
      return z15;
    };
    p43 = prom<V +>{
      return <int 21, 22, 23, 24, 25>;
    };
    r102 = dyn boxplot9[, boxfill, outpch, outlty, bg, lwd, medcol, medcex, medpch](p42, "light gray", p43, 2.0, "pink", 2.0, "dark blue", 2.0, 20.0);
    check L62() else D56();
  D56():
    deopt 256 [r102];
  L62():
    popenv;
    return r102;
  }
}
fun inner1652376761(z, notch, width, varwidth, outline, `notch.frac`, log, border, pars, `frame.plot`, horizontal, ann, add, at, `show.names`, `...`) {
  (reg z:*, reg notch:*, reg width:*, reg varwidth:*, reg outline:*, reg notch_frac:*, reg log:*, reg border:*, reg pars:*, reg frame_plot:*, reg horizontal:*, reg ann:*, reg add:*, reg at:*, reg show_names:*, reg ddd:dots) -+> V { var z:*, var notch:*, reg notch_isMissing:L, reg notch_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var varwidth:*, reg varwidth_isMissing:L, reg varwidth_orDefault:*, var outline:*, reg outline_isMissing:L, reg outline_orDefault:*, var `notch.frac`:*, reg notch_frac_isMissing:L, reg notch_frac_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var pars:*, reg pars_isMissing:L, reg pars_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes:*, reg axes1:V, reg p1:p(V +), var horizontal:*, reg horizontal_isMissing:L, reg horizontal_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var `show.names`:*, reg show_names_isMissing:L, reg show_names_orDefault:*, var `...`:dots?, reg as_list:cls, reg pars1:*, reg pars2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg ___length:cls, reg r7:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg list:cls, reg ddd1:dots?, reg r12:V, reg names:cls, reg r13:V, reg anyDuplicated:cls, reg nmsA:*, reg nmsA1:V, reg p3:p(V +), reg r15:V, reg c1:L, reg duplicated:cls, reg nmsA2:*, reg nmsA3:V, reg p4:p(V +), reg r17:V, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg iD:*, reg iD1:V, reg sum:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg sub:cls, reg deparse:cls, reg args:*, reg args1:V, reg c2:L, reg args3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg iD2:*, reg iD3:V, reg __:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg p10:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg args4:*, reg args5:V, reg c3:L, reg args7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg iD4:*, reg iD5:V, reg r35:V, reg __1:cls, reg r36:V, reg names1:cls, reg r37:V, reg args8:*, reg args9:V, reg l:*, reg c4:L, reg args11:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg args13:V, reg dx5:V, reg nmsA4:*, reg nmsA5:V, reg ___:cls, reg r39:V, reg r40:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg z1:*, reg z2:V, reg is_list:cls, reg r43:V, reg r44:V, reg c5:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg c10:L, reg r48:I, reg r49:V, reg z3:*, reg z4:V, reg c11:L, reg c13:L, reg r51:I, reg z6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c15:L, reg r53:I, reg dx7:V, reg r54:V, reg length:cls, reg r55:V, reg r56:V, reg c16:L, reg c17:V, reg c19:L, reg stop:cls, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg at1:*, reg at2:V, reg c20:V, reg c21:L, reg n:*, reg n1:V, reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg at3:*, reg at4:V, reg length1:cls, reg r65:V, reg n2:*, reg n3:V, reg r66:V, reg c22:L, reg stop1:cls, reg gettextf:cls, reg n4:*, reg n5:V, reg p11:p(V +), reg r68:V, reg p12:p(V +), reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg z7:*, reg z8:V, reg c23:L, reg z10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r73:V, reg c24:V, reg c25:L, reg numeric:cls, reg r74:V, reg l3:*, reg c26:L, reg r76:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r78:V, reg dx11:V, reg r79:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg z11:*, reg z12:V, reg c27:L, reg z14:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r83:V, reg c28:V, reg c29:L, reg c30:V, reg outline1:*, reg outline2:V, reg r84:V, reg c32:L, reg c33:V, reg c35:L, reg integer:cls, reg r85:V, reg l6:*, reg c36:L, reg r87:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r89:V, reg dx15:V, reg r90:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r92:V, reg r93:V, reg pars3:*, reg pars4:V, reg c37:L, reg pars6:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r94:V, reg c38:V, reg c39:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg z15:*, reg z16:V, reg c40:L, reg z18:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r97:V, reg c41:L, reg dx21:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg dx26:V, reg r99:V, reg z19:*, reg z20:V, reg c42:L, reg dx28:V, reg z22:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg dx32:V, reg r100:V, reg is_finite:cls, reg r101:V, reg __2:cls, reg r102:V, reg outline3:*, reg outline4:V, reg c43:L, reg z23:*, reg z24:V, reg c44:L, reg z26:V, reg dr24:V, reg dc12:L, reg dx33:V, reg dx34:V, reg r103:V, reg c45:L, reg dx36:V, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg dx41:V, reg r105:V, reg z27:*, reg z28:V, reg c46:L, reg dx43:V, reg z30:V, reg dr28:V, reg dc14:L, reg dx45:V, reg dx46:V, reg dx47:V, reg r106:V, reg is_finite1:cls, reg r107:V, reg __3:cls, reg r108:V, reg dx48:V, reg notch1:*, reg notch2:V, reg c47:L, reg z31:*, reg z32:V, reg c48:L, reg z34:V, reg dr30:V, reg dc15:L, reg dx49:V, reg dx50:V, reg r109:V, reg c49:L, reg dx52:V, reg dr32:V, reg dc16:L, reg dx53:V, reg dx54:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r110:V, reg dx57:V, reg r111:V, reg z35:*, reg z36:V, reg c50:L, reg dx59:V, reg z38:V, reg dr34:V, reg dc17:L, reg dx61:V, reg dx62:V, reg dx63:V, reg r112:V, reg is_finite2:cls, reg r113:V, reg __4:cls, reg r114:V, reg dx64:V, reg range:cls, reg r115:V, reg pars7:*, reg pars8:V, reg c51:L, reg pars10:V, reg dr36:V, reg dc18:L, reg dx65:V, reg dx66:V, reg r117:V, reg l9:*, reg c52:L, reg r119:dots, reg l11:*, reg dr38:V, reg dc19:L, reg dx67:V, reg r121:dots, reg dx68:V, reg r122:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r123:V, reg r124:V, reg border1:*, reg border2:V, reg length2:cls, reg r125:V, reg r126:V, reg c53:L, reg par1:cls, reg r127:V, reg dev_hold:cls, reg r129:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r130:V, reg on_exit:cls, reg r132:V, reg add1:*, reg add2:V, reg r133:V, reg c54:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r134:V, reg r135:V, reg pars11:*, reg pars12:V, reg c55:L, reg pars14:V, reg dr40:V, reg dc20:L, reg dx69:V, reg dx70:V, reg r136:V, reg c56:V, reg c57:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r137:V, reg r138:V, reg at5:*, reg at6:V, reg range1:cls, reg r139:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg r143:V, reg r144:V, reg c58:cls, reg r145:V, reg r146:V, reg pars15:*, reg pars16:V, reg c59:L, reg pars18:V, reg dr42:V, reg dc21:L, reg dx71:V, reg dx72:V, reg r148:V, reg l12:*, reg c60:L, reg r150:dots, reg l14:*, reg dr44:V, reg dc22:L, reg dx73:V, reg r152:dots, reg dx74:V, reg r153:V, reg plot_new:cls, reg r154:V, reg horizontal1:*, reg horizontal2:V, reg c61:L, reg plot_window:cls, reg xlim:*, reg xlim1:V, reg p13:p(V +), reg ylim:*, reg ylim1:V, reg p14:p(V +), reg log1:*, reg log2:V, reg p15:p(V +), reg pars19:*, reg pars20:V, reg c62:L, reg pars22:V, reg dr46:V, reg dc23:L, reg dx75:V, reg dx76:V, reg r158:V, reg p16:p(V +), reg r160:V, reg r161:V, reg plot_window1:cls, reg xlim2:*, reg xlim3:V, reg p17:p(V +), reg ylim2:*, reg ylim3:V, reg p18:p(V +), reg log3:*, reg log4:V, reg p19:p(V +), reg pars23:*, reg pars24:V, reg c63:L, reg pars26:V, reg dr48:V, reg dc24:L, reg dx77:V, reg dx78:V, reg r165:V, reg p20:p(V +), reg r167:V, reg par2:cls, reg r169:V, reg c64:L, reg c66:V, reg horizontal3:*, reg horizontal4:V, reg c67:L, reg c68:V, reg c70:L, reg c71:V, reg par3:cls, reg r170:V, reg c73:L, reg c76:L, reg c77:V, reg horizontal5:*, reg horizontal6:V, reg r171:V, reg c78:L, reg c79:V, reg c82:L, reg c83:V, reg r172:cls, reg r173:cls, reg pcycle:cls, reg pars27:*, reg pars28:V, reg c85:L, reg pars30:V, reg dr50:V, reg dc25:L, reg dx79:V, reg dx80:V, reg r174:V, reg p21:p(V +), reg p22:cls, reg r176:V, reg p23:p(V +), reg par4:cls, reg r178:V, reg p24:p(V +), reg r180:V, reg pcycle1:cls, reg pars31:*, reg pars32:V, reg c86:L, reg pars34:V, reg dr52:V, reg dc26:L, reg dx81:V, reg dx82:V, reg r181:V, reg p25:p(V +), reg p26:cls, reg r183:V, reg p27:p(V +), reg par5:cls, reg r185:V, reg p28:p(V +), reg r187:V, reg pcycle2:cls, reg pars35:*, reg pars36:V, reg c87:L, reg pars38:V, reg dr54:V, reg dc27:L, reg dx83:V, reg dx84:V, reg r188:V, reg p29:p(V +), reg border3:*, reg border4:V, reg p30:p(V +), reg r191:V, reg pcycle3:cls, reg pars39:*, reg pars40:V, reg c88:L, reg pars42:V, reg dr56:V, reg dc28:L, reg dx85:V, reg dx86:V, reg r192:V, reg p31:p(V +), reg par6:cls, reg r194:V, reg p32:p(V +), reg r196:V, reg pcycle4:cls, reg pars43:*, reg pars44:V, reg c89:L, reg pars46:V, reg dr58:V, reg dc29:L, reg dx87:V, reg dx88:V, reg r197:V, reg p33:p(V +), reg n6:*, reg n7:V, reg r199:V, reg c90:L, reg r202:R, reg r203:V, reg __5:cls, reg r204:V, reg r205:cls, reg diff:cls, reg sort:cls, reg xlog:*, reg xlog1:V, reg c91:L, reg log5:cls, reg at7:*, reg at8:V, reg p34:p(V +), reg r207:V, reg at9:*, reg at10:V, reg p35:p(V +), reg r209:V, reg p36:p(V +), reg r211:V, reg p37:p(V +), reg r213:V, reg r214:V, reg p38:p(V +), reg r216:V, reg pcycle5:cls, reg pars47:*, reg pars48:V, reg c92:L, reg pars50:V, reg dr60:V, reg dc30:L, reg dx89:V, reg dx90:V, reg r217:V, reg p39:p(V +), reg p40:cls, reg r219:V, reg p41:p(V +), reg par7:cls, reg r221:V, reg p42:p(V +), reg r223:V, reg pcycle6:cls, reg pars51:*, reg pars52:V, reg c93:L, reg pars54:V, reg dr62:V, reg dc31:L, reg dx91:V, reg dx92:V, reg r224:V, reg p43:p(V +), reg p44:cls, reg r226:V, reg r227:V, reg p45:p(V +), reg par8:cls, reg r229:V, reg r230:V, reg p46:p(V +), reg r232:V, reg pcycle7:cls, reg pars55:*, reg pars56:V, reg c94:L, reg pars58:V, reg dr64:V, reg dc32:L, reg dx93:V, reg dx94:V, reg r233:V, reg p47:p(V +), reg r235:V, reg pcycle8:cls, reg pars59:*, reg pars60:V, reg c95:L, reg pars62:V, reg dr66:V, reg dc33:L, reg dx95:V, reg dx96:V, reg r236:V, reg p48:p(V +), reg p49:cls, reg r238:V, reg p50:p(V +), reg par9:cls, reg r240:V, reg p51:p(V +), reg r242:V, reg pcycle9:cls, reg pars63:*, reg pars64:V, reg c96:L, reg pars66:V, reg dr68:V, reg dc34:L, reg dx97:V, reg dx98:V, reg r243:V, reg p52:p(V +), reg border5:*, reg border6:V, reg p53:p(V +), reg r246:V, reg pcycle10:cls, reg pars67:*, reg pars68:V, reg c97:L, reg pars70:V, reg dr70:V, reg dc35:L, reg dx99:V, reg dx100:V, reg r247:V, reg p54:p(V +), reg p55:cls, reg r249:V, reg p56:p(V +), reg par10:cls, reg r251:V, reg p57:p(V +), reg r253:V, reg pcycle11:cls, reg pars71:*, reg pars72:V, reg c98:L, reg pars74:V, reg dr72:V, reg dc36:L, reg dx101:V, reg dx102:V, reg r254:V, reg p58:p(V +), reg p59:cls, reg r256:V, reg p60:p(V +), reg r258:V, reg pcycle12:cls, reg pars75:*, reg pars76:V, reg c99:L, reg pars78:V, reg dr74:V, reg dc37:L, reg dx103:V, reg dx104:V, reg r259:V, reg p61:p(V +), reg p62:cls, reg r261:V, reg p63:p(V +), reg par11:cls, reg r263:V, reg p64:p(V +), reg r265:V, reg pcycle13:cls, reg pars79:*, reg pars80:V, reg c100:L, reg pars82:V, reg dr76:V, reg dc38:L, reg dx105:V, reg dx106:V, reg r266:V, reg p65:p(V +), reg border7:*, reg border8:V, reg p66:p(V +), reg r269:V, reg pcycle14:cls, reg pars83:*, reg pars84:V, reg c101:L, reg pars86:V, reg dr78:V, reg dc39:L, reg dx107:V, reg dx108:V, reg r270:V, reg p67:p(V +), reg p68:cls, reg r272:V, reg p69:p(V +), reg par12:cls, reg r274:V, reg p70:p(V +), reg r276:V, reg pcycle15:cls, reg pars87:*, reg pars88:V, reg c102:L, reg pars90:V, reg dr80:V, reg dc40:L, reg dx109:V, reg dx110:V, reg r277:V, reg p71:p(V +), reg p72:cls, reg r279:V, reg p73:p(V +), reg par13:cls, reg r281:V, reg p74:p(V +), reg r283:V, reg pcycle16:cls, reg pars91:*, reg pars92:V, reg c103:L, reg pars94:V, reg dr82:V, reg dc41:L, reg dx111:V, reg dx112:V, reg r284:V, reg p75:p(V +), reg border9:*, reg border10:V, reg p76:p(V +), reg r287:V, reg pcycle17:cls, reg pars95:*, reg pars96:V, reg c104:L, reg pars98:V, reg dr84:V, reg dc42:L, reg dx113:V, reg dx114:V, reg r288:V, reg p77:p(V +), reg r290:V, reg pcycle18:cls, reg pars99:*, reg pars100:V, reg c105:L, reg pars102:V, reg dr86:V, reg dc43:L, reg dx115:V, reg dx116:V, reg r291:V, reg p78:p(V +), reg r293:V, reg pcycle19:cls, reg pars103:*, reg pars104:V, reg c106:L, reg pars106:V, reg dr88:V, reg dc44:L, reg dx117:V, reg dx118:V, reg r294:V, reg p79:p(V +), reg p80:cls, reg r296:V, reg p81:p(V +), reg par14:cls, reg r298:V, reg p82:p(V +), reg r300:V, reg pcycle20:cls, reg pars107:*, reg pars108:V, reg c107:L, reg pars110:V, reg dr90:V, reg dc45:L, reg dx119:V, reg dx120:V, reg r301:V, reg p83:p(V +), reg p84:cls, reg r303:V, reg p85:p(V +), reg par15:cls, reg r305:V, reg p86:p(V +), reg r307:V, reg pcycle21:cls, reg pars111:*, reg pars112:V, reg c108:L, reg pars114:V, reg dr92:V, reg dc46:L, reg dx121:V, reg dx122:V, reg r308:V, reg p87:p(V +), reg p88:cls, reg r310:V, reg p89:p(V +), reg par16:cls, reg r312:V, reg p90:p(V +), reg r314:V, reg pcycle22:cls, reg pars115:*, reg pars116:V, reg c109:L, reg pars118:V, reg dr94:V, reg dc47:L, reg dx123:V, reg dx124:V, reg r315:V, reg p91:p(V +), reg border11:*, reg border12:V, reg p92:p(V +), reg r318:V, reg pcycle23:cls, reg pars119:*, reg pars120:V, reg c110:L, reg pars122:V, reg dr96:V, reg dc48:L, reg dx125:V, reg dx126:V, reg r319:V, reg p93:p(V +), reg p94:cls, reg r321:V, reg p95:p(V +), reg par17:cls, reg r323:V, reg p96:p(V +), reg r325:V, reg pcycle24:cls, reg pars123:*, reg pars124:V, reg c111:L, reg pars126:V, reg dr98:V, reg dc49:L, reg dx127:V, reg dx128:V, reg r326:V, reg p97:p(V +), reg r328:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r329:V, reg r330:V, reg width1:*, reg width2:V, reg c112:V, reg r331:V, reg c113:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r332:V, reg r333:V, reg width3:*, reg width4:V, reg length3:cls, reg r334:V, reg n8:*, reg n9:V, reg r335:V, reg c114:L, reg c115:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r336:V, reg c119:L, reg r337:V, reg width5:*, reg width6:V, reg anyNA:cls, reg r338:V, reg c120:L, reg c121:V, reg c123:L, reg c124:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r339:V, reg c128:L, reg r340:V, reg width7:*, reg width8:V, reg r341:V, reg any:cls, reg r342:V, reg c129:L, reg c130:V, reg c132:L, reg stop2:cls, reg r343:V, reg boxwex:*, reg boxwex1:V, reg width9:*, reg width10:V, reg r345:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r348:V, reg r349:V, reg r350:V, reg width11:*, reg width12:V, reg max:cls, reg r351:V, reg r352:V, reg r353:V, reg varwidth1:*, reg varwidth2:V, reg c133:L, reg boxwex2:*, reg boxwex3:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r354:V, reg boxwex6:V, reg r355:V, reg z39:*, reg z40:V, reg c134:L, reg boxwex8:V, reg z42:V, reg dr100:V, reg dc50:L, reg dx129:V, reg boxwex10:V, reg dx130:V, reg r356:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r357:V, reg boxwex13:V, reg dx133:V, reg r358:V, reg z43:*, reg z44:V, reg c135:L, reg boxwex15:V, reg dx135:V, reg z46:V, reg dr102:V, reg dc51:L, reg dx137:V, reg boxwex17:V, reg dx138:V, reg dx139:V, reg r359:V, reg max1:cls, reg r360:V, reg r361:V, reg r362:V, reg r363:V, reg n10:*, reg n11:V, reg r364:V, reg c136:L, reg boxwex18:*, reg boxwex19:V, reg r365:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r366:V, reg boxwex20:*, reg boxwex21:V, reg n12:*, reg n13:V, reg rep_int:cls, reg r367:V, reg horizontal7:*, reg horizontal8:V, reg c137:L, reg r368:cls, reg r369:cls, reg r370:cls, reg points:*, reg points1:V, reg polygon:*, reg polygon1:V, reg segments:*, reg segments1:V, reg n14:*, reg n15:V, reg r372:V, reg s:V, reg l15:I, reg i:I, reg i1:I, reg i2:I, reg c138:L, reg x:V, reg ok:*, reg ok1:V, reg bplt:cls, reg at11:*, reg at12:V, reg c139:L, reg at14:V, reg dr104:V, reg dc52:L, reg dx140:V, reg dx141:V, reg i5:*, reg i6:V, reg __6:cls, reg r373:V, reg p98:p(V +), reg width13:*, reg width14:V, reg c140:L, reg width16:V, reg dr106:V, reg dc53:L, reg dx142:V, reg dx143:V, reg i7:*, reg i8:V, reg __7:cls, reg r375:V, reg p99:p(V +), reg z47:*, reg z48:V, reg c141:L, reg z50:V, reg dr108:V, reg dc54:L, reg dx144:V, reg dx145:V, reg r377:V, reg c142:L, reg dr110:V, reg dc55:L, reg dx148:V, reg dx149:V, reg i9:*, reg i10:V, reg __8:cls, reg r378:V, reg p100:p(V +), reg z51:*, reg z52:V, reg c143:L, reg z54:V, reg dr112:V, reg dc56:L, reg dx150:V, reg dx151:V, reg r380:V, reg c144:L, reg dx153:V, reg dr114:V, reg dc57:L, reg dx154:V, reg dx155:V, reg z55:*, reg z56:V, reg c145:L, reg dx157:V, reg z58:V, reg dr116:V, reg dc58:L, reg dx159:V, reg dx160:V, reg dx161:V, reg r381:V, reg i11:*, reg i12:V, reg r382:V, reg __9:cls, reg r383:V, reg p101:p(V +), reg z59:*, reg z60:V, reg c146:L, reg z62:V, reg dr118:V, reg dc59:L, reg dx162:V, reg dx163:V, reg r385:V, reg c147:L, reg dr120:V, reg dc60:L, reg dx166:V, reg dx167:V, reg i13:*, reg i14:V, reg __10:cls, reg r386:V, reg p102:p(V +), reg notch3:*, reg notch4:V, reg p103:p(V +), reg xlog2:*, reg xlog3:V, reg p104:p(V +), reg i15:*, reg i16:V, reg p105:p(V +), reg r391:V, reg r392:V, reg ok2:*, reg ok3:V, reg r393:V, reg c148:L, reg warning1:cls, reg r394:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r396:V, reg r397:V, reg pars127:*, reg pars128:V, reg c149:L, reg pars130:V, reg dr122:V, reg dc61:L, reg dx168:V, reg dx169:V, reg r398:V, reg c150:V, reg axes2:*, reg axes3:V, reg r399:V, reg c151:L, reg pars131:*, reg pars132:V, reg c152:L, reg pars134:V, reg dr124:V, reg dc62:L, reg dx170:V, reg dx171:V, reg r400:V, reg l16:*, reg c153:L, reg r402:dots, reg l18:*, reg dr126:V, reg dc63:L, reg dx172:V, reg r404:dots, reg dx173:V, reg r405:V, reg axes4:*, reg axes5:V, reg c154:L, reg pars135:*, reg pars136:V, reg c155:L, reg pars138:V, reg dr128:V, reg dc64:L, reg dx174:V, reg dx175:V, reg _in_:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r407:V, reg r408:V, reg pars139:*, reg pars140:V, reg names2:cls, reg r409:V, reg p106:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r411:V, reg r412:V, reg c156:cls, reg r413:V, reg p107:p(V +), reg r415:V, reg __11:cls, reg r416:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r417:V, reg r418:V, reg show_names1:*, reg show_names2:V, reg c157:V, reg c158:L, reg n16:*, reg n17:V, reg r419:V, reg show_names3:*, reg show_names4:V, reg c159:L, reg do_call:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r421:V, reg r422:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r423:V, reg r424:V, reg horizontal9:*, reg horizontal10:V, reg r425:V, reg at15:*, reg at16:V, reg z63:*, reg z64:V, reg c160:L, reg z66:V, reg dr130:V, reg dc65:L, reg dx176:V, reg dx177:V, reg r426:V, reg list1:cls, reg r427:V, reg ax_pars:*, reg ax_pars1:V, reg c161:cls, reg r428:V, reg p108:p(V +), reg r430:V, reg do_call1:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r432:V, reg r433:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r434:V, reg r435:V, reg z67:*, reg z68:V, reg c162:L, reg z70:V, reg dr132:V, reg dc66:L, reg dx178:V, reg dx179:V, reg r436:V, reg horizontal11:*, reg horizontal12:V, reg r437:V, reg list2:cls, reg r438:V, reg ax_pars2:*, reg ax_pars3:V, reg c163:cls, reg r439:V, reg p109:p(V +), reg r441:V, reg ann1:*, reg ann2:V, reg c164:L, reg do_call2:cls, reg title:*, reg title1:V, reg p110:p(V +), reg pars141:*, reg pars142:V, reg c165:L, reg pars144:V, reg dr134:V, reg dc67:L, reg dx180:V, reg dx181:V, reg _in_1:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r444:V, reg r445:V, reg pars145:*, reg pars146:V, reg names3:cls, reg r446:V, reg p111:p(V +), reg sym38:cls, reg base38:cls, reg guard38:L, reg r448:V, reg r449:V, reg c166:cls, reg r450:V, reg p112:p(V +), reg r452:V, reg __12:cls, reg r453:V, reg p113:p(V +), reg r455:V, reg frame_plot1:*, reg frame_plot2:V, reg c167:L, reg box:cls, reg r457:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r459:V, reg r460:V, reg at17:*, reg at18:V, reg invisible:cls, reg r461:V |
    mkenv;
    st z = z;
    notch_isMissing = missing.0(notch);
    if notch_isMissing then L0(FALSE) else L0(notch);
  L0(notch_orDefault):
    st notch = notch_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L1(NULL) else L1(width);
  L1(width_orDefault):
    st width = width_orDefault;
    varwidth_isMissing = missing.0(varwidth);
    if varwidth_isMissing then L2(FALSE) else L2(varwidth);
  L2(varwidth_orDefault):
    st varwidth = varwidth_orDefault;
    outline_isMissing = missing.0(outline);
    if outline_isMissing then L3(TRUE) else L3(outline);
  L3(outline_orDefault):
    st outline = outline_orDefault;
    notch_frac_isMissing = missing.0(notch_frac);
    if notch_frac_isMissing then L4(0.5) else L4(notch_frac);
  L4(notch_frac_orDefault):
    st `notch.frac` = notch_frac_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L5("") else L5(log);
  L5(log_orDefault):
    st log = log_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L6() else L7(border);
  L6():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("fg");
      return r;
    };
    goto L7(p);
  L7(border_orDefault):
    st border = border_orDefault;
    pars_isMissing = missing.0(pars);
    if pars_isMissing then L8(NULL) else L8(pars);
  L8(pars_orDefault):
    st pars = pars_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L9() else L10(frame_plot);
  L9():
    p1 = prom<V +>{
      axes = ld axes;
      axes1 = force? axes;
      checkMissing(axes1);
      return axes1;
    };
    goto L10(p1);
  L10(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    horizontal_isMissing = missing.0(horizontal);
    if horizontal_isMissing then L11(FALSE) else L11(horizontal);
  L11(horizontal_orDefault):
    st horizontal = horizontal_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L12(TRUE) else L12(ann);
  L12(ann_orDefault):
    st ann = ann_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L13(FALSE) else L13(add);
  L13(add_orDefault):
    st add = add_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L14(NULL) else L14(at);
  L14(at_orDefault):
    st at = at_orDefault;
    show_names_isMissing = missing.0(show_names);
    if show_names_isMissing then L15(NULL) else L15(show_names);
  L15(show_names_orDefault):
    st `show.names` = show_names_orDefault;
    st `...` = ddd;
    as_list = ldf `as.list`;
    check L110() else D0();
  D0():
    deopt 1 [];
  L110():
    p2 = prom<V +>{
      pars1 = ld pars;
      pars2 = force? pars1;
      checkMissing(pars2);
      return pars2;
    };
    r4 = dyn as_list(p2);
    check L111() else D1();
  D1():
    deopt 3 [r4];
  L111():
    st pars = r4;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L112() else L113();
  L16(r6):
    c = `as.logical`(r6);
    if c then L115() else L17();
  L112():
    ___length = ldf `...length` in base;
    r7 = dyn ___length();
    check L114() else D2();
  L113():
    r5 = dyn base();
    goto L16(r5);
  D2():
    deopt 8 [r7];
  L17():
    goto L25();
  L25():
    r40 = clos inner284008606;
    st bplt = r40;
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L145() else L146();
  L114():
    goto L16(r7);
  L115():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L116() else L117();
  L18(r9):
    st nmsA = r9;
    anyDuplicated = ldf anyDuplicated;
    check L123() else D6();
  L26(r42):
    r44 = `!`(r42);
    c5 = `as.logical`(r44);
    if c5 then L27(c5) else L149();
  L116():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L118() else L119();
  L117():
    r8 = dyn base1(<lang `<-`(args, list(...))>);
    goto L18(r8);
  L145():
    z1 = ld z;
    check L147() else D17();
  L146():
    r41 = dyn base5(<sym z>);
    goto L26(r41);
  D6():
    deopt 21 [];
  D17():
    deopt 63 [z1];
  L19(r11):
    st args = r11;
    names = ldf names in base;
    r13 = dyn names(r11);
    check L122() else D5();
  L27(c6):
    c19 = `as.logical`(c6);
    if c19 then L159() else L29();
  L118():
    list = ldf list;
    check L120() else D3();
  L119():
    r10 = dyn base2(<sym ...>);
    goto L19(r10);
  L123():
    p3 = prom<V +>{
      nmsA = ld nmsA;
      nmsA1 = force? nmsA;
      checkMissing(nmsA1);
      return nmsA1;
    };
    r15 = dyn anyDuplicated(p3);
    check L124() else D7();
  L147():
    z2 = force? z1;
    checkMissing(z2);
    is_list = ldf `is.list` in base;
    r43 = dyn is_list(z2);
    check L148() else D18();
  L149():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L150() else L151();
  D3():
    deopt 13 [];
  D5():
    deopt 18 [r13];
  D7():
    deopt 23 [r15];
  D18():
    deopt 66 [r43];
  L28(c10, r48, r49):
    st n = r49;
    r56 = `==`(r48, r49);
    c16 = `as.logical`(r56);
    c17 = `||`(c10, c16);
    goto L27(c17);
  L29():
    goto L30();
  L30():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L163() else L164();
  L120():
    ddd1 = ld `...`;
    r12 = dyn list[`...`](ddd1);
    check L121() else D4();
  L122():
    goto L18(r13);
  L124():
    c1 = `as.logical`(r15);
    if c1 then L125() else L20();
  L148():
    goto L26(r43);
  L150():
    z3 = ld z;
    check L152() else D19();
  L151():
    r47 = dyn base6(<lang `$`(z, n)>);
    goto L28(c5, 0, r47);
  L159():
    stop = ldf stop;
    check L160() else D21();
  D4():
    deopt 15 [r12];
  D19():
    deopt 71 [c5, 0, z3];
  D21():
    deopt 80 [];
  L20():
    goto L23();
  L23():
    args8 = ld args;
    check L139() else D15();
  L31(r60):
    c21 = `as.logical`(r60);
    if c21 then L166() else L32();
  L121():
    goto L19(r12);
  L125():
    duplicated = ldf duplicated;
    check L126() else D8();
  L152():
    z4 = force? z3;
    checkMissing(z4);
    c11 = `is.object`(z4);
    if c11 then L154() else L155(c5, 0, z4);
  L160():
    r57 = dyn stop("invalid first argument");
    check L161() else D22();
  L163():
    at1 = ld at;
    check L165() else D23();
  L164():
    r59 = dyn base7(<sym at>);
    goto L31(r59);
  D8():
    deopt 25 [];
  D15():
    deopt 49 [args8];
  D22():
    deopt 82 [r57];
  D23():
    deopt 86 [at1];
  L32():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L169() else L170();
  L33():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L178() else L179();
  L126():
    p4 = prom<V +>{
      nmsA2 = ld nmsA;
      nmsA3 = force? nmsA2;
      checkMissing(nmsA3);
      return nmsA3;
    };
    r17 = dyn duplicated(p4);
    check L127() else D9();
  L139():
    args9 = force? args8;
    checkMissing(args9);
    l = ld pars;
    c4 = `is.object`(l);
    if c4 then L140() else L141(args9, l);
  L153(c15, r53, dx7):
    length = ldf length in base;
    r55 = dyn length(dx7);
    check L157() else D20();
  L154():
    dr6 = tryDispatchBuiltin.1("$", z4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L156() else L155(c5, 0, dr6);
  L155(c13, r51, z6):
    r54 = `$`(z6, <sym n>);
    goto L153(c13, r51, r54);
  L161():
    goto L30();
  L165():
    at2 = force? at1;
    checkMissing(at2);
    c20 = `==`(at2, NULL);
    goto L31(c20);
  L166():
    n = ld n;
    check L167() else D24();
  D9():
    deopt 27 [r17];
  D20():
    deopt 75 [c15, r53, r55];
  D24():
    deopt 90 [1, n];
  L24(args13, dx5):
    st pars = dx5;
    goto L25();
  L34(r64):
    n2 = ld n;
    check L173() else D27();
  L36(r72):
    c25 = `as.logical`(r72);
    if c25 then L185() else L37();
  L127():
    st iD = r17;
    warning = ldf warning;
    check L128() else D10();
  L140():
    dr4 = tryDispatchBuiltin.0("[<-", l, args9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L142() else L141(args9, dr4);
  L141(args11, l2):
    nmsA4 = ld nmsA;
    check L143() else D16();
  L156():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L153(c5, 0, dx6);
  L157():
    goto L28(c15, r53, r55);
  L167():
    n1 = force? n;
    checkMissing(n1);
    r61 = `:`(1, n1);
    st at = r61;
    goto L33();
  L169():
    at3 = ld at;
    check L171() else D25();
  L170():
    r63 = dyn base8(<sym at>);
    goto L34(r63);
  L178():
    z7 = ld z;
    check L180() else D30();
  L179():
    r71 = dyn base9(<lang `$`(z, out)>);
    goto L36(r71);
  D10():
    deopt 30 [];
  D16():
    deopt 52 [args11, l2, args9, nmsA4];
  D25():
    deopt 96 [at3];
  D27():
    deopt 99 [r64, n2];
  D30():
    deopt 111 [z7];
  L37():
    goto L38();
  L38():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L193() else L194();
  L128():
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        ngettext = ldf ngettext;
        p5 = prom<V +>{
          sym3 = ldf sum;
          base3 = ldf sum in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r19):
          return r19;
        L1():
          iD = ld iD;
          iD1 = force? iD;
          checkMissing(iD1);
          sum = ldf sum in base;
          r20 = dyn sum(iD1);
          goto L0(r20);
        L2():
          r18 = dyn base3(<sym iD>);
          goto L0(r18);
        };
        r22 = dyn ngettext(p5, "Duplicated argument %s is disregarded", "Duplicated arguments %s are disregarded");
        return r22;
      };
      p9 = prom<V +>{
        sub = ldf sub;
        p8 = prom<V +>{
          deparse = ldf deparse;
          p7 = prom<V +>{
            args = ld args;
            args1 = force? args;
            checkMissing(args1);
            c2 = `is.object`(args1);
            if c2 then L1() else L2(args1);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", args1);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(args3):
            iD2 = ld iD;
            iD3 = force? iD2;
            __ = ldf `[` in base;
            r24 = dyn __(args3, iD3);
            goto L0(r24);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r26 = dyn deparse(p7);
          return r26;
        };
        r28 = dyn sub("^list\\((.*)\\)", "\\1", p8);
        return r28;
      };
      r30 = dyn sprintf(p6, p9);
      return r30;
    };
    r32 = dyn warning[, domain](p10, NA_LGL);
    check L129() else D11();
  L142():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(args9, dx4);
  L143():
    nmsA5 = force? nmsA4;
    ___ = ldf `[<-` in base;
    r39 = dyn ___(l2, args9, nmsA5);
    goto L24(args11, r39);
  L171():
    at4 = force? at3;
    checkMissing(at4);
    length1 = ldf length in base;
    r65 = dyn length1(at4);
    check L172() else D26();
  L173():
    n3 = force? n2;
    checkMissing(n3);
    r66 = `!=`(r64, n3);
    c22 = `as.logical`(r66);
    if c22 then L174() else L35();
  L180():
    z8 = force? z7;
    checkMissing(z8);
    c23 = `is.object`(z8);
    if c23 then L182() else L183(z8);
  L185():
    numeric = ldf numeric;
    check L186() else D31();
  D11():
    deopt 34 [r32];
  D26():
    deopt 99 [r65];
  D31():
    deopt 116 [];
  L35():
    goto L33();
  L39(r82):
    c29 = `as.logical`(r82);
    if c29 then L40(c29) else L200();
  L129():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L130() else L131();
  L172():
    goto L34(r65);
  L174():
    stop1 = ldf stop;
    check L175() else D28();
  L181(dx9):
    c24 = `==`(dx9, NULL);
    goto L36(c24);
  L182():
    dr8 = tryDispatchBuiltin.1("$", z8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L184() else L183(dr8);
  L183(z10):
    r73 = `$`(z10, <sym out>);
    goto L181(r73);
  L186():
    r74 = dyn numeric();
    check L187() else D32();
  L193():
    z11 = ld z;
    check L195() else D33();
  L194():
    r81 = dyn base10(<lang `$`(z, group)>);
    goto L39(r81);
  D28():
    deopt 103 [];
  D32():
    deopt 117 [r74];
  D33():
    deopt 124 [z11];
  L21(r34):
    st nmsA = r34;
    goto L23();
  L40(c30):
    c35 = `as.logical`(c30);
    if c35 then L203() else L41();
  L130():
    args4 = ld args;
    check L132() else D12();
  L131():
    r33 = dyn base4(<lang `<-`(args, `[`(args, `!`(iD)))>);
    goto L21(r33);
  L175():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        n4 = ld n;
        n5 = force? n4;
        checkMissing(n5);
        return n5;
      };
      r68 = dyn gettextf("'at' must have same length as 'z$n', i.e. %d", p11);
      return r68;
    };
    r70 = dyn stop1[, domain](p12, NA_LGL);
    check L176() else D29();
  L184():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L181(dx8);
  L187():
    l3 = ld z;
    c26 = `is.object`(l3);
    if c26 then L189() else L190(r74, l3);
  L195():
    z12 = force? z11;
    checkMissing(z12);
    c27 = `is.object`(z12);
    if c27 then L197() else L198(z12);
  L200():
    outline1 = ld outline;
    check L201() else D34();
  D12():
    deopt 37 [args4];
  D29():
    deopt 107 [r70];
  D34():
    deopt 128 [c29, outline1];
  L41():
    goto L42();
  L42():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L211() else L212();
  L132():
    args5 = force? args4;
    checkMissing(args5);
    c3 = `is.object`(args5);
    if c3 then L133() else L134(args5);
  L176():
    goto L33();
  L188(r78, dx11):
    st z = dx11;
    goto L38();
  L189():
    dr10 = tryDispatchBuiltin.0("$<-", l3, r74);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L191() else L190(r74, dr10);
  L190(r76, l5):
    r79 = `$<-`(l5, <sym out>, r74);
    goto L188(r76, r79);
  L196(dx13):
    c28 = `==`(dx13, NULL);
    goto L39(c28);
  L197():
    dr12 = tryDispatchBuiltin.1("$", z12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L199() else L198(dr12);
  L198(z14):
    r83 = `$`(z14, <sym group>);
    goto L196(r83);
  L201():
    outline2 = force? outline1;
    checkMissing(outline2);
    r84 = `!`(outline2);
    c32 = `as.logical`(r84);
    c33 = `||`(c29, c32);
    goto L40(c33);
  L203():
    integer = ldf integer;
    check L204() else D35();
  D35():
    deopt 133 [];
  L22(dx3):
    st args = dx3;
    names1 = ldf names in base;
    r37 = dyn names1(dx3);
    check L137() else D14();
  L43(r93):
    c39 = `as.logical`(r93);
    if c39 then L218() else L44();
  L133():
    dr2 = tryDispatchBuiltin.1("[", args5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L135() else L134(dr2);
  L134(args7):
    iD4 = ld iD;
    check L136() else D13();
  L191():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L188(r74, dx10);
  L199():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L196(dx12);
  L204():
    r85 = dyn integer();
    check L205() else D36();
  L211():
    pars3 = ld pars;
    check L213() else D37();
  L212():
    r92 = dyn base11(<lang `$`(pars, ylim)>);
    goto L43(r92);
  D13():
    deopt 39 [args7, iD4];
  D14():
    deopt 45 [r37];
  D36():
    deopt 134 [r85];
  D37():
    deopt 141 [pars3];
  L44():
    pars7 = ld pars;
    check L277() else D50();
  L56():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L286() else L287();
  L135():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L136():
    iD5 = force? iD4;
    checkMissing(iD5);
    r35 = `!`(iD5);
    __1 = ldf `[` in base;
    r36 = dyn __1(args7, r35);
    goto L22(r36);
  L137():
    goto L21(r37);
  L205():
    l6 = ld z;
    c36 = `is.object`(l6);
    if c36 then L207() else L208(r85, l6);
  L213():
    pars4 = force? pars3;
    checkMissing(pars4);
    c37 = `is.object`(pars4);
    if c37 then L215() else L216(pars4);
  L218():
    sym12 = ldf range;
    base12 = ldf range in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L219() else L220();
  D50():
    deopt 191 [pars7];
  L45(r96):
    st ylim = r96;
    goto L56();
  L57(r124):
    r126 = `==`(r124, 0);
    c53 = `as.logical`(r126);
    if c53 then L290() else L58();
  L206(r89, dx15):
    st z = dx15;
    goto L42();
  L207():
    dr14 = tryDispatchBuiltin.0("$<-", l6, r85);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L209() else L208(r85, dr14);
  L208(r87, l8):
    r90 = `$<-`(l8, <sym group>, r85);
    goto L206(r87, r90);
  L214(dx17):
    c38 = `==`(dx17, NULL);
    goto L43(c38);
  L215():
    dr16 = tryDispatchBuiltin.1("$", pars4);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L217() else L216(dr16);
  L216(pars6):
    r94 = `$`(pars6, <sym ylim>);
    goto L214(r94);
  L219():
    z15 = ld z;
    check L221() else D38();
  L220():
    r95 = dyn base12(<lang `[`(`$`(z, stats), is.finite(`$`(z, stats)))>, <lang if(outline, `[`(`$`(z, out), is.finite(`$`(z, out))))>, <lang if(notch, `[`(`$`(z, conf), is.finite(`$`(z, conf))))>);
    goto L45(r95);
  L277():
    pars8 = force? pars7;
    checkMissing(pars8);
    c51 = `is.object`(pars8);
    if c51 then L279() else L280(pars8);
  L286():
    border1 = ld border;
    check L288() else D51();
  L287():
    r123 = dyn base16(<sym border>);
    goto L57(r123);
  D38():
    deopt 147 [z15];
  D51():
    deopt 202 [border1];
  L58():
    goto L59();
  L59():
    dev_hold = ldf `dev.hold`;
    check L294() else D55();
  L209():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L206(r85, dx14);
  L217():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L214(dx16);
  L221():
    z16 = force? z15;
    checkMissing(z16);
    c40 = `is.object`(z16);
    if c40 then L223() else L224(z16);
  L278(dx66):
    st ylim = dx66;
    l9 = ld pars;
    c52 = `is.object`(l9);
    if c52 then L283() else L284(NULL, l9);
  L279():
    dr36 = tryDispatchBuiltin.1("$", pars8);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L281() else L280(dr36);
  L280(pars10):
    r117 = `$`(pars10, <sym ylim>);
    goto L278(r117);
  L288():
    border2 = force? border1;
    checkMissing(border2);
    length2 = ldf length in base;
    r125 = dyn length2(border2);
    check L289() else D52();
  L290():
    par1 = ldf par;
    check L291() else D53();
  D52():
    deopt 205 [r125];
  D53():
    deopt 209 [];
  D55():
    deopt 216 [];
  L222(dx19):
    c41 = `is.object`(dx19);
    if c41 then L226() else L227(dx19);
  L223():
    dr18 = tryDispatchBuiltin.1("$", z16);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L225() else L224(dr18);
  L224(z18):
    r97 = `$`(z18, <sym stats>);
    goto L222(r97);
  L281():
    dx65 = getTryDispatchBuiltinValue(dr36);
    goto L278(dx65);
  L282(r121, dx68):
    st pars = dx68;
    goto L56();
  L283():
    dr38 = tryDispatchBuiltin.0("$<-", l9, NULL);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L285() else L284(NULL, dr38);
  L284(r119, l11):
    r122 = `$<-`(l11, <sym ylim>, NULL);
    goto L282(r119, r122);
  L289():
    goto L57(r125);
  L291():
    r127 = dyn par1("fg");
    check L292() else D54();
  L294():
    r129 = dyn dev_hold();
    check L295() else D56();
  D54():
    deopt 211 [r127];
  D56():
    deopt 217 [r129];
  L46(dx23):
    outline3 = ld outline;
    check L237() else D41();
  L225():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L222(dx18);
  L226():
    dr20 = tryDispatchBuiltin.1("[", dx19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L228() else L227(dr20);
  L227(dx21):
    sym13 = ldf `is.finite`;
    base13 = ldf `is.finite` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L229() else L230();
  L285():
    dx67 = getTryDispatchBuiltinValue(dr38);
    goto L282(NULL, dx67);
  L292():
    st border = r127;
    goto L59();
  L295():
    sym17 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L296() else L297();
  D41():
    deopt 158 [outline3];
  L47(dx26, r99):
    __2 = ldf `[` in base;
    r102 = dyn __2(dx26, r99);
    goto L46(r102);
  L60():
    add1 = ld add;
    check L298() else D57();
  L228():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L46(dx22);
  L229():
    z19 = ld z;
    check L231() else D39();
  L230():
    r98 = dyn base13(<lang `$`(z, stats)>);
    goto L47(dx21, r98);
  L237():
    outline4 = force? outline3;
    checkMissing(outline4);
    c43 = `as.logical`(outline4);
    if c43 then L238() else L48();
  L296():
    on_exit = ldf `on.exit` in base;
    r132 = dyn on_exit(<lang dev.flush()>);
    goto L60();
  L297():
    r130 = dyn base17(<lang dev.flush()>);
    goto L60();
  D39():
    deopt 152 [dx21, z19];
  D57():
    deopt 221 [add1];
  L48():
    goto L51(NULL);
  L51(dx48):
    notch1 = ld notch;
    check L256() else D45();
  L231():
    z20 = force? z19;
    checkMissing(z20);
    c42 = `is.object`(z20);
    if c42 then L233() else L234(dx21, z20);
  L238():
    z23 = ld z;
    check L239() else D42();
  L298():
    add2 = force? add1;
    checkMissing(add2);
    r133 = `!`(add2);
    c54 = `as.logical`(r133);
    if c54 then L299() else L61();
  D42():
    deopt 160 [z23];
  D45():
    deopt 173 [notch1];
  L61():
    goto L69();
  L69():
    par2 = ldf par;
    check L335() else D70();
  L232(dx31, dx32):
    is_finite = ldf `is.finite` in base;
    r101 = dyn is_finite(dx32);
    check L236() else D40();
  L233():
    dr22 = tryDispatchBuiltin.1("$", z20);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L235() else L234(dx21, dr22);
  L234(dx28, z22):
    r100 = `$`(z22, <sym stats>);
    goto L232(dx28, r100);
  L239():
    z24 = force? z23;
    checkMissing(z24);
    c44 = `is.object`(z24);
    if c44 then L241() else L242(z24);
  L256():
    notch2 = force? notch1;
    checkMissing(notch2);
    c47 = `as.logical`(notch2);
    if c47 then L257() else L52();
  L299():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L300() else L301();
  D40():
    deopt 156 [dx31, r101];
  D70():
    deopt 284 [];
  L52():
    goto L55(NULL);
  L55(dx64):
    range = ldf range in base;
    r115 = dyn range(dx23, dx48, dx64);
    check L275() else D49();
  L62(r135):
    c57 = `as.logical`(r135);
    if c57 then L307() else L63();
  L235():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L232(dx21, dx30);
  L236():
    goto L47(dx31, r101);
  L240(dx34):
    c45 = `is.object`(dx34);
    if c45 then L244() else L245(dx34);
  L241():
    dr24 = tryDispatchBuiltin.1("$", z24);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L243() else L242(dr24);
  L242(z26):
    r103 = `$`(z26, <sym out>);
    goto L240(r103);
  L257():
    z31 = ld z;
    check L258() else D46();
  L300():
    pars11 = ld pars;
    check L302() else D58();
  L301():
    r134 = dyn base18(<lang `$`(pars, xlim)>);
    goto L62(r134);
  L335():
    r169 = dyn par2("ylog");
    check L336() else D71();
  D46():
    deopt 175 [z31];
  D49():
    deopt 189 [r115];
  D58():
    deopt 225 [pars11];
  D71():
    deopt 286 [r169];
  L49(dx38):
    goto L51(dx38);
  L63():
    pars15 = ld pars;
    check L316() else D62();
  L66():
    plot_new = ldf `plot.new`;
    check L325() else D63();
  L243():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L240(dx33);
  L244():
    dr26 = tryDispatchBuiltin.1("[", dx34);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L246() else L245(dr26);
  L245(dx36):
    sym14 = ldf `is.finite`;
    base14 = ldf `is.finite` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L247() else L248();
  L258():
    z32 = force? z31;
    checkMissing(z32);
    c48 = `is.object`(z32);
    if c48 then L260() else L261(z32);
  L275():
    goto L45(r115);
  L302():
    pars12 = force? pars11;
    checkMissing(pars12);
    c55 = `is.object`(pars12);
    if c55 then L304() else L305(pars12);
  L307():
    sym19 = ldf range;
    base19 = ldf range in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L308() else L309();
  L336():
    c64 = `as.logical`(r169);
    if c64 then L337() else L70(c64);
  D62():
    deopt 245 [pars15];
  D63():
    deopt 255 [];
  L50(dx41, r105):
    __3 = ldf `[` in base;
    r108 = dyn __3(dx41, r105);
    goto L49(r108);
  L64(r138):
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L312() else L313();
  L70(c66):
    c70 = `as.logical`(c66);
    if c70 then L71(c70) else L340();
  L246():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L49(dx37);
  L247():
    z27 = ld z;
    check L249() else D43();
  L248():
    r104 = dyn base14(<lang `$`(z, out)>);
    goto L50(dx36, r104);
  L259(dx50):
    c49 = `is.object`(dx50);
    if c49 then L263() else L264(dx50);
  L260():
    dr30 = tryDispatchBuiltin.1("$", z32);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L262() else L261(dr30);
  L261(z34):
    r109 = `$`(z34, <sym conf>);
    goto L259(r109);
  L303(dx70):
    c56 = `==`(dx70, NULL);
    goto L62(c56);
  L304():
    dr40 = tryDispatchBuiltin.1("$", pars12);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L306() else L305(dr40);
  L305(pars14):
    r136 = `$`(pars14, <sym xlim>);
    goto L303(r136);
  L308():
    at5 = ld at;
    check L310() else D59();
  L309():
    r137 = dyn base19[, finite](<sym at>, TRUE);
    goto L64(r137);
  L316():
    pars16 = force? pars15;
    checkMissing(pars16);
    c59 = `is.object`(pars16);
    if c59 then L318() else L319(pars16);
  L325():
    r154 = dyn plot_new();
    check L326() else D64();
  L337():
    horizontal3 = ld horizontal;
    check L338() else D72();
  D43():
    deopt 165 [dx36, z27];
  D59():
    deopt 231 [at5];
  D64():
    deopt 256 [r154];
  D72():
    deopt 287 [c64, horizontal3];
  L53(dx54):
    goto L55(dx54);
  L65(r143, r144):
    r146 = `+`(r143, r144);
    st xlim = r146;
    goto L66();
  L71(c71):
    st xlog = c71;
    r172 = clos inner844486739;
    st pcycle = r172;
    r173 = clos inner29990787;
    st p = r173;
    pcycle = ldf pcycle;
    check L347() else D76();
  L249():
    z28 = force? z27;
    checkMissing(z28);
    c46 = `is.object`(z28);
    if c46 then L251() else L252(dx36, z28);
  L262():
    dx49 = getTryDispatchBuiltinValue(dr30);
    goto L259(dx49);
  L263():
    dr32 = tryDispatchBuiltin.1("[", dx50);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L265() else L264(dr32);
  L264(dx52):
    sym15 = ldf `is.finite`;
    base15 = ldf `is.finite` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L266() else L267();
  L306():
    dx69 = getTryDispatchBuiltinValue(dr40);
    goto L303(dx69);
  L310():
    at6 = force? at5;
    checkMissing(at6);
    range1 = ldf range in base;
    r139 = dyn range1(at6, TRUE);
    check L311() else D60();
  L312():
    c58 = ldf c in base;
    r145 = dyn c58(-0.5, 0.5);
    check L314() else D61();
  L313():
    r142 = dyn base20(<lang `-`(0.5)>, 0.5);
    goto L65(r138, r142);
  L317(dx72):
    st xlim = dx72;
    l12 = ld pars;
    c60 = `is.object`(l12);
    if c60 then L322() else L323(NULL, l12);
  L318():
    dr42 = tryDispatchBuiltin.1("$", pars16);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L320() else L319(dr42);
  L319(pars18):
    r148 = `$`(pars18, <sym xlim>);
    goto L317(r148);
  L326():
    horizontal1 = ld horizontal;
    check L327() else D65();
  L338():
    horizontal4 = force? horizontal3;
    checkMissing(horizontal4);
    c67 = `as.logical`(horizontal4);
    c68 = `&&`(c64, c67);
    goto L70(c68);
  L340():
    par3 = ldf par;
    check L341() else D73();
  D60():
    deopt 236 [r139];
  D61():
    deopt 242 [r138, r145];
  D65():
    deopt 257 [horizontal1];
  D73():
    deopt 291 [c70];
  D76():
    deopt 307 [];
  L54(dx57, r111):
    __4 = ldf `[` in base;
    r114 = dyn __4(dx57, r111);
    goto L53(r114);
  L250(dx46, dx47):
    is_finite1 = ldf `is.finite` in base;
    r107 = dyn is_finite1(dx47);
    check L254() else D44();
  L251():
    dr28 = tryDispatchBuiltin.1("$", z28);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L253() else L252(dx36, dr28);
  L252(dx43, z30):
    r106 = `$`(z30, <sym out>);
    goto L250(dx43, r106);
  L265():
    dx53 = getTryDispatchBuiltinValue(dr32);
    goto L53(dx53);
  L266():
    z35 = ld z;
    check L268() else D47();
  L267():
    r110 = dyn base15(<lang `$`(z, conf)>);
    goto L54(dx52, r110);
  L311():
    goto L64(r139);
  L314():
    goto L65(r138, r145);
  L320():
    dx71 = getTryDispatchBuiltinValue(dr42);
    goto L317(dx71);
  L321(r152, dx74):
    st pars = dx74;
    goto L66();
  L322():
    dr44 = tryDispatchBuiltin.0("$<-", l12, NULL);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L324() else L323(NULL, dr44);
  L323(r150, l14):
    r153 = `$<-`(l14, <sym xlim>, NULL);
    goto L321(r150, r153);
  L327():
    horizontal2 = force? horizontal1;
    checkMissing(horizontal2);
    c61 = `as.logical`(horizontal2);
    if c61 then L328() else L67();
  L341():
    r170 = dyn par3("xlog");
    check L342() else D74();
  L347():
    p21 = prom<V +>{
      pars27 = ld pars;
      pars28 = force? pars27;
      checkMissing(pars28);
      c85 = `is.object`(pars28);
      if c85 then L1() else L2(pars28);
    L0(dx80):
      return dx80;
    L1():
      dr50 = tryDispatchBuiltin.1("$", pars28);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(pars30):
      r174 = `$`(pars30, <sym boxlty>);
      goto L0(r174);
    L3():
      dx79 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx79);
    };
    p23 = prom<V +>{
      p22 = ldf p;
      r176 = dyn p22("lty");
      return r176;
    };
    p24 = prom<V +>{
      par4 = ldf par;
      r178 = dyn par4("lty");
      return r178;
    };
    r180 = dyn pcycle(p21, p23, p24);
    check L348() else D77();
  D44():
    deopt 169 [dx46, r107];
  D47():
    deopt 180 [dx52, z35];
  D74():
    deopt 293 [c70, r170];
  D77():
    deopt 311 [r180];
  L67():
    plot_window1 = ldf `plot.window`;
    check L332() else D68();
  L68(r161):
    goto L69();
  L253():
    dx45 = getTryDispatchBuiltinValue(dr28);
    goto L250(dx36, dx45);
  L254():
    goto L50(dx46, r107);
  L268():
    z36 = force? z35;
    checkMissing(z36);
    c50 = `is.object`(z36);
    if c50 then L270() else L271(dx52, z36);
  L324():
    dx73 = getTryDispatchBuiltinValue(dr44);
    goto L321(NULL, dx73);
  L328():
    plot_window = ldf `plot.window`;
    check L329() else D66();
  L342():
    c73 = `as.logical`(r170);
    if c73 then L343() else L72(c70, c73);
  L348():
    st boxlty = r180;
    pcycle1 = ldf pcycle;
    check L349() else D78();
  D66():
    deopt 260 [];
  D68():
    deopt 271 [];
  D78():
    deopt 314 [];
  L72(c76, c77):
    c82 = `as.logical`(c77);
    c83 = `||`(c76, c82);
    goto L71(c83);
  L269(dx62, dx63):
    is_finite2 = ldf `is.finite` in base;
    r113 = dyn is_finite2(dx63);
    check L273() else D48();
  L270():
    dr34 = tryDispatchBuiltin.1("$", z36);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L272() else L271(dx52, dr34);
  L271(dx59, z38):
    r112 = `$`(z38, <sym conf>);
    goto L269(dx59, r112);
  L329():
    p13 = prom<V +>{
      xlim = ld xlim;
      xlim1 = force? xlim;
      checkMissing(xlim1);
      return xlim1;
    };
    p14 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    p15 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    p16 = prom<V +>{
      pars19 = ld pars;
      pars20 = force? pars19;
      checkMissing(pars20);
      c62 = `is.object`(pars20);
      if c62 then L1() else L2(pars20);
    L0(dx76):
      return dx76;
    L1():
      dr46 = tryDispatchBuiltin.1("$", pars20);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(pars22):
      r158 = `$`(pars22, <sym yaxs>);
      goto L0(r158);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx75);
    };
    r160 = dyn plot_window[ylim, xlim, log, xaxs](p13, p14, p15, p16);
    check L330() else D67();
  L332():
    p17 = prom<V +>{
      xlim2 = ld xlim;
      xlim3 = force? xlim2;
      checkMissing(xlim3);
      return xlim3;
    };
    p18 = prom<V +>{
      ylim2 = ld ylim;
      ylim3 = force? ylim2;
      checkMissing(ylim3);
      return ylim3;
    };
    p19 = prom<V +>{
      log3 = ld log;
      log4 = force? log3;
      checkMissing(log4);
      return log4;
    };
    p20 = prom<V +>{
      pars23 = ld pars;
      pars24 = force? pars23;
      checkMissing(pars24);
      c63 = `is.object`(pars24);
      if c63 then L1() else L2(pars24);
    L0(dx78):
      return dx78;
    L1():
      dr48 = tryDispatchBuiltin.1("$", pars24);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(pars26):
      r165 = `$`(pars26, <sym yaxs>);
      goto L0(r165);
    L3():
      dx77 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx77);
    };
    r167 = dyn plot_window1[xlim, ylim, log, yaxs](p17, p18, p19, p20);
    check L333() else D69();
  L343():
    horizontal5 = ld horizontal;
    check L344() else D75();
  L349():
    p25 = prom<V +>{
      pars31 = ld pars;
      pars32 = force? pars31;
      checkMissing(pars32);
      c86 = `is.object`(pars32);
      if c86 then L1() else L2(pars32);
    L0(dx82):
      return dx82;
    L1():
      dr52 = tryDispatchBuiltin.1("$", pars32);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(pars34):
      r181 = `$`(pars34, <sym boxlwd>);
      goto L0(r181);
    L3():
      dx81 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx81);
    };
    p27 = prom<V +>{
      p26 = ldf p;
      r183 = dyn p26("lwd");
      return r183;
    };
    p28 = prom<V +>{
      par5 = ldf par;
      r185 = dyn par5("lwd");
      return r185;
    };
    r187 = dyn pcycle1(p25, p27, p28);
    check L350() else D79();
  D48():
    deopt 184 [dx62, r113];
  D67():
    deopt 269 [r160];
  D69():
    deopt 280 [r167];
  D75():
    deopt 294 [c70, c73, horizontal5];
  D79():
    deopt 318 [r187];
  L272():
    dx61 = getTryDispatchBuiltinValue(dr34);
    goto L269(dx52, dx61);
  L273():
    goto L54(dx62, r113);
  L330():
    goto L68(r160);
  L333():
    goto L68(r167);
  L344():
    horizontal6 = force? horizontal5;
    checkMissing(horizontal6);
    r171 = `!`(horizontal6);
    c78 = `as.logical`(r171);
    c79 = `&&`(c73, c78);
    goto L72(c70, c79);
  L350():
    st boxlwd = r187;
    pcycle2 = ldf pcycle;
    check L351() else D80();
  D80():
    deopt 321 [];
  L351():
    p29 = prom<V +>{
      pars35 = ld pars;
      pars36 = force? pars35;
      checkMissing(pars36);
      c87 = `is.object`(pars36);
      if c87 then L1() else L2(pars36);
    L0(dx84):
      return dx84;
    L1():
      dr54 = tryDispatchBuiltin.1("$", pars36);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(pars38):
      r188 = `$`(pars38, <sym boxcol>);
      goto L0(r188);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx83);
    };
    p30 = prom<V +>{
      border3 = ld border;
      border4 = force? border3;
      checkMissing(border4);
      return border4;
    };
    r191 = dyn pcycle2(p29, p30);
    check L352() else D81();
  D81():
    deopt 324 [r191];
  L352():
    st boxcol = r191;
    pcycle3 = ldf pcycle;
    check L353() else D82();
  D82():
    deopt 327 [];
  L353():
    p31 = prom<V +>{
      pars39 = ld pars;
      pars40 = force? pars39;
      checkMissing(pars40);
      c88 = `is.object`(pars40);
      if c88 then L1() else L2(pars40);
    L0(dx86):
      return dx86;
    L1():
      dr56 = tryDispatchBuiltin.1("$", pars40);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(pars42):
      r192 = `$`(pars42, <sym boxfill>);
      goto L0(r192);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx85);
    };
    p32 = prom<V +>{
      par6 = ldf par;
      r194 = dyn par6("bg");
      return r194;
    };
    r196 = dyn pcycle3(p31, p32);
    check L354() else D83();
  D83():
    deopt 330 [r196];
  L354():
    st boxfill = r196;
    pcycle4 = ldf pcycle;
    check L355() else D84();
  D84():
    deopt 333 [];
  L355():
    p33 = prom<V +>{
      pars43 = ld pars;
      pars44 = force? pars43;
      checkMissing(pars44);
      c89 = `is.object`(pars44);
      if c89 then L1() else L2(pars44);
    L0(dx88):
      return dx88;
    L1():
      dr58 = tryDispatchBuiltin.1("$", pars44);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(pars46):
      r197 = `$`(pars46, <sym boxwex>);
      goto L0(r197);
    L3():
      dx87 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx87);
    };
    p38 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r199 = `<=`(n7, 1.0);
      c90 = `as.logical`(r199);
      if c90 then L2() else L0();
    L0():
      __5 = ldf `::`;
      r204 = dyn __5("stats", "quantile");
      checkFun.0(r204);
      r205 = r204 as cls;
      p37 = prom<V +>{
        diff = ldf diff;
        p36 = prom<V +>{
          sort = ldf sort;
          p35 = prom<V +>{
            xlog = ld xlog;
            xlog1 = force? xlog;
            checkMissing(xlog1);
            c91 = `as.logical`(xlog1);
            if c91 then L1() else L0();
          L0():
            at9 = ld at;
            at10 = force? at9;
            checkMissing(at10);
            return at10;
          L1():
            log5 = ldf log;
            p34 = prom<V +>{
              at7 = ld at;
              at8 = force? at7;
              checkMissing(at8);
              return at8;
            };
            r207 = dyn log5(p34);
            return r207;
          };
          r209 = dyn sort(p35);
          return r209;
        };
        r211 = dyn diff(p36);
        return r211;
      };
      r213 = dyn r205(p37, 0.1);
      goto L1(0.8, r213);
    L1(r202, r203):
      r214 = `*`(r202, r203);
      return r214;
    L2():
      goto L1(0.8, 1.0);
    };
    r216 = dyn pcycle4(p33, p38);
    check L356() else D85();
  D85():
    deopt 336 [r216];
  L356():
    st boxwex = r216;
    pcycle5 = ldf pcycle;
    check L357() else D86();
  D86():
    deopt 339 [];
  L357():
    p39 = prom<V +>{
      pars47 = ld pars;
      pars48 = force? pars47;
      checkMissing(pars48);
      c92 = `is.object`(pars48);
      if c92 then L1() else L2(pars48);
    L0(dx90):
      return dx90;
    L1():
      dr60 = tryDispatchBuiltin.1("$", pars48);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(pars50):
      r217 = `$`(pars50, <sym medlty>);
      goto L0(r217);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx89);
    };
    p41 = prom<V +>{
      p40 = ldf p;
      r219 = dyn p40("lty");
      return r219;
    };
    p42 = prom<V +>{
      par7 = ldf par;
      r221 = dyn par7("lty");
      return r221;
    };
    r223 = dyn pcycle5(p39, p41, p42);
    check L358() else D87();
  D87():
    deopt 343 [r223];
  L358():
    st medlty = r223;
    pcycle6 = ldf pcycle;
    check L359() else D88();
  D88():
    deopt 346 [];
  L359():
    p43 = prom<V +>{
      pars51 = ld pars;
      pars52 = force? pars51;
      checkMissing(pars52);
      c93 = `is.object`(pars52);
      if c93 then L1() else L2(pars52);
    L0(dx92):
      return dx92;
    L1():
      dr62 = tryDispatchBuiltin.1("$", pars52);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(pars54):
      r224 = `$`(pars54, <sym medlwd>);
      goto L0(r224);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx91);
    };
    p45 = prom<V +>{
      p44 = ldf p;
      r226 = dyn p44("lwd");
      r227 = `*`(3.0, r226);
      return r227;
    };
    p46 = prom<V +>{
      par8 = ldf par;
      r229 = dyn par8("lwd");
      r230 = `*`(3.0, r229);
      return r230;
    };
    r232 = dyn pcycle6(p43, p45, p46);
    check L360() else D89();
  D89():
    deopt 350 [r232];
  L360():
    st medlwd = r232;
    pcycle7 = ldf pcycle;
    check L361() else D90();
  D90():
    deopt 353 [];
  L361():
    p47 = prom<V +>{
      pars55 = ld pars;
      pars56 = force? pars55;
      checkMissing(pars56);
      c94 = `is.object`(pars56);
      if c94 then L1() else L2(pars56);
    L0(dx94):
      return dx94;
    L1():
      dr64 = tryDispatchBuiltin.1("$", pars56);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(pars58):
      r233 = `$`(pars58, <sym medpch>);
      goto L0(r233);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx93);
    };
    r235 = dyn pcycle7(p47, NA_INT);
    check L362() else D91();
  D91():
    deopt 356 [r235];
  L362():
    st medpch = r235;
    pcycle8 = ldf pcycle;
    check L363() else D92();
  D92():
    deopt 359 [];
  L363():
    p48 = prom<V +>{
      pars59 = ld pars;
      pars60 = force? pars59;
      checkMissing(pars60);
      c95 = `is.object`(pars60);
      if c95 then L1() else L2(pars60);
    L0(dx96):
      return dx96;
    L1():
      dr66 = tryDispatchBuiltin.1("$", pars60);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(pars62):
      r236 = `$`(pars62, <sym medcex>);
      goto L0(r236);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx95);
    };
    p50 = prom<V +>{
      p49 = ldf p;
      r238 = dyn p49("cex");
      return r238;
    };
    p51 = prom<V +>{
      par9 = ldf par;
      r240 = dyn par9("cex");
      return r240;
    };
    r242 = dyn pcycle8(p48, p50, p51);
    check L364() else D93();
  D93():
    deopt 363 [r242];
  L364():
    st medcex = r242;
    pcycle9 = ldf pcycle;
    check L365() else D94();
  D94():
    deopt 366 [];
  L365():
    p52 = prom<V +>{
      pars63 = ld pars;
      pars64 = force? pars63;
      checkMissing(pars64);
      c96 = `is.object`(pars64);
      if c96 then L1() else L2(pars64);
    L0(dx98):
      return dx98;
    L1():
      dr68 = tryDispatchBuiltin.1("$", pars64);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(pars66):
      r243 = `$`(pars66, <sym medcol>);
      goto L0(r243);
    L3():
      dx97 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx97);
    };
    p53 = prom<V +>{
      border5 = ld border;
      border6 = force? border5;
      checkMissing(border6);
      return border6;
    };
    r246 = dyn pcycle9(p52, p53);
    check L366() else D95();
  D95():
    deopt 369 [r246];
  L366():
    st medcol = r246;
    pcycle10 = ldf pcycle;
    check L367() else D96();
  D96():
    deopt 372 [];
  L367():
    p54 = prom<V +>{
      pars67 = ld pars;
      pars68 = force? pars67;
      checkMissing(pars68);
      c97 = `is.object`(pars68);
      if c97 then L1() else L2(pars68);
    L0(dx100):
      return dx100;
    L1():
      dr70 = tryDispatchBuiltin.1("$", pars68);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(pars70):
      r247 = `$`(pars70, <sym medbg>);
      goto L0(r247);
    L3():
      dx99 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx99);
    };
    p56 = prom<V +>{
      p55 = ldf p;
      r249 = dyn p55("bg");
      return r249;
    };
    p57 = prom<V +>{
      par10 = ldf par;
      r251 = dyn par10("bg");
      return r251;
    };
    r253 = dyn pcycle10(p54, p56, p57);
    check L368() else D97();
  D97():
    deopt 376 [r253];
  L368():
    st medbg = r253;
    pcycle11 = ldf pcycle;
    check L369() else D98();
  D98():
    deopt 379 [];
  L369():
    p58 = prom<V +>{
      pars71 = ld pars;
      pars72 = force? pars71;
      checkMissing(pars72);
      c98 = `is.object`(pars72);
      if c98 then L1() else L2(pars72);
    L0(dx102):
      return dx102;
    L1():
      dr72 = tryDispatchBuiltin.1("$", pars72);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L3() else L2(dr72);
    L2(pars74):
      r254 = `$`(pars74, <sym whisklty>);
      goto L0(r254);
    L3():
      dx101 = getTryDispatchBuiltinValue(dr72);
      goto L0(dx101);
    };
    p60 = prom<V +>{
      p59 = ldf p;
      r256 = dyn p59("lty");
      return r256;
    };
    r258 = dyn pcycle11(p58, p60, "dashed");
    check L370() else D99();
  D99():
    deopt 383 [r258];
  L370():
    st whisklty = r258;
    pcycle12 = ldf pcycle;
    check L371() else D100();
  D100():
    deopt 386 [];
  L371():
    p61 = prom<V +>{
      pars75 = ld pars;
      pars76 = force? pars75;
      checkMissing(pars76);
      c99 = `is.object`(pars76);
      if c99 then L1() else L2(pars76);
    L0(dx104):
      return dx104;
    L1():
      dr74 = tryDispatchBuiltin.1("$", pars76);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(pars78):
      r259 = `$`(pars78, <sym whisklwd>);
      goto L0(r259);
    L3():
      dx103 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx103);
    };
    p63 = prom<V +>{
      p62 = ldf p;
      r261 = dyn p62("lwd");
      return r261;
    };
    p64 = prom<V +>{
      par11 = ldf par;
      r263 = dyn par11("lwd");
      return r263;
    };
    r265 = dyn pcycle12(p61, p63, p64);
    check L372() else D101();
  D101():
    deopt 390 [r265];
  L372():
    st whisklwd = r265;
    pcycle13 = ldf pcycle;
    check L373() else D102();
  D102():
    deopt 393 [];
  L373():
    p65 = prom<V +>{
      pars79 = ld pars;
      pars80 = force? pars79;
      checkMissing(pars80);
      c100 = `is.object`(pars80);
      if c100 then L1() else L2(pars80);
    L0(dx106):
      return dx106;
    L1():
      dr76 = tryDispatchBuiltin.1("$", pars80);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(pars82):
      r266 = `$`(pars82, <sym whiskcol>);
      goto L0(r266);
    L3():
      dx105 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx105);
    };
    p66 = prom<V +>{
      border7 = ld border;
      border8 = force? border7;
      checkMissing(border8);
      return border8;
    };
    r269 = dyn pcycle13(p65, p66);
    check L374() else D103();
  D103():
    deopt 396 [r269];
  L374():
    st whiskcol = r269;
    pcycle14 = ldf pcycle;
    check L375() else D104();
  D104():
    deopt 399 [];
  L375():
    p67 = prom<V +>{
      pars83 = ld pars;
      pars84 = force? pars83;
      checkMissing(pars84);
      c101 = `is.object`(pars84);
      if c101 then L1() else L2(pars84);
    L0(dx108):
      return dx108;
    L1():
      dr78 = tryDispatchBuiltin.1("$", pars84);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L3() else L2(dr78);
    L2(pars86):
      r270 = `$`(pars86, <sym staplelty>);
      goto L0(r270);
    L3():
      dx107 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx107);
    };
    p69 = prom<V +>{
      p68 = ldf p;
      r272 = dyn p68("lty");
      return r272;
    };
    p70 = prom<V +>{
      par12 = ldf par;
      r274 = dyn par12("lty");
      return r274;
    };
    r276 = dyn pcycle14(p67, p69, p70);
    check L376() else D105();
  D105():
    deopt 403 [r276];
  L376():
    st staplelty = r276;
    pcycle15 = ldf pcycle;
    check L377() else D106();
  D106():
    deopt 406 [];
  L377():
    p71 = prom<V +>{
      pars87 = ld pars;
      pars88 = force? pars87;
      checkMissing(pars88);
      c102 = `is.object`(pars88);
      if c102 then L1() else L2(pars88);
    L0(dx110):
      return dx110;
    L1():
      dr80 = tryDispatchBuiltin.1("$", pars88);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L3() else L2(dr80);
    L2(pars90):
      r277 = `$`(pars90, <sym staplelwd>);
      goto L0(r277);
    L3():
      dx109 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx109);
    };
    p73 = prom<V +>{
      p72 = ldf p;
      r279 = dyn p72("lwd");
      return r279;
    };
    p74 = prom<V +>{
      par13 = ldf par;
      r281 = dyn par13("lwd");
      return r281;
    };
    r283 = dyn pcycle15(p71, p73, p74);
    check L378() else D107();
  D107():
    deopt 410 [r283];
  L378():
    st staplelwd = r283;
    pcycle16 = ldf pcycle;
    check L379() else D108();
  D108():
    deopt 413 [];
  L379():
    p75 = prom<V +>{
      pars91 = ld pars;
      pars92 = force? pars91;
      checkMissing(pars92);
      c103 = `is.object`(pars92);
      if c103 then L1() else L2(pars92);
    L0(dx112):
      return dx112;
    L1():
      dr82 = tryDispatchBuiltin.1("$", pars92);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(pars94):
      r284 = `$`(pars94, <sym staplecol>);
      goto L0(r284);
    L3():
      dx111 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx111);
    };
    p76 = prom<V +>{
      border9 = ld border;
      border10 = force? border9;
      checkMissing(border10);
      return border10;
    };
    r287 = dyn pcycle16(p75, p76);
    check L380() else D109();
  D109():
    deopt 416 [r287];
  L380():
    st staplecol = r287;
    pcycle17 = ldf pcycle;
    check L381() else D110();
  D110():
    deopt 419 [];
  L381():
    p77 = prom<V +>{
      pars95 = ld pars;
      pars96 = force? pars95;
      checkMissing(pars96);
      c104 = `is.object`(pars96);
      if c104 then L1() else L2(pars96);
    L0(dx114):
      return dx114;
    L1():
      dr84 = tryDispatchBuiltin.1("$", pars96);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(pars98):
      r288 = `$`(pars98, <sym staplewex>);
      goto L0(r288);
    L3():
      dx113 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx113);
    };
    r290 = dyn pcycle17(p77, 0.5);
    check L382() else D111();
  D111():
    deopt 422 [r290];
  L382():
    st staplewex = r290;
    pcycle18 = ldf pcycle;
    check L383() else D112();
  D112():
    deopt 425 [];
  L383():
    p78 = prom<V +>{
      pars99 = ld pars;
      pars100 = force? pars99;
      checkMissing(pars100);
      c105 = `is.object`(pars100);
      if c105 then L1() else L2(pars100);
    L0(dx116):
      return dx116;
    L1():
      dr86 = tryDispatchBuiltin.1("$", pars100);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(pars102):
      r291 = `$`(pars102, <sym outlty>);
      goto L0(r291);
    L3():
      dx115 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx115);
    };
    r293 = dyn pcycle18(p78, "blank");
    check L384() else D113();
  D113():
    deopt 428 [r293];
  L384():
    st outlty = r293;
    pcycle19 = ldf pcycle;
    check L385() else D114();
  D114():
    deopt 431 [];
  L385():
    p79 = prom<V +>{
      pars103 = ld pars;
      pars104 = force? pars103;
      checkMissing(pars104);
      c106 = `is.object`(pars104);
      if c106 then L1() else L2(pars104);
    L0(dx118):
      return dx118;
    L1():
      dr88 = tryDispatchBuiltin.1("$", pars104);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(pars106):
      r294 = `$`(pars106, <sym outlwd>);
      goto L0(r294);
    L3():
      dx117 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx117);
    };
    p81 = prom<V +>{
      p80 = ldf p;
      r296 = dyn p80("lwd");
      return r296;
    };
    p82 = prom<V +>{
      par14 = ldf par;
      r298 = dyn par14("lwd");
      return r298;
    };
    r300 = dyn pcycle19(p79, p81, p82);
    check L386() else D115();
  D115():
    deopt 435 [r300];
  L386():
    st outlwd = r300;
    pcycle20 = ldf pcycle;
    check L387() else D116();
  D116():
    deopt 438 [];
  L387():
    p83 = prom<V +>{
      pars107 = ld pars;
      pars108 = force? pars107;
      checkMissing(pars108);
      c107 = `is.object`(pars108);
      if c107 then L1() else L2(pars108);
    L0(dx120):
      return dx120;
    L1():
      dr90 = tryDispatchBuiltin.1("$", pars108);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(pars110):
      r301 = `$`(pars110, <sym outpch>);
      goto L0(r301);
    L3():
      dx119 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx119);
    };
    p85 = prom<V +>{
      p84 = ldf p;
      r303 = dyn p84("pch");
      return r303;
    };
    p86 = prom<V +>{
      par15 = ldf par;
      r305 = dyn par15("pch");
      return r305;
    };
    r307 = dyn pcycle20(p83, p85, p86);
    check L388() else D117();
  D117():
    deopt 442 [r307];
  L388():
    st outpch = r307;
    pcycle21 = ldf pcycle;
    check L389() else D118();
  D118():
    deopt 445 [];
  L389():
    p87 = prom<V +>{
      pars111 = ld pars;
      pars112 = force? pars111;
      checkMissing(pars112);
      c108 = `is.object`(pars112);
      if c108 then L1() else L2(pars112);
    L0(dx122):
      return dx122;
    L1():
      dr92 = tryDispatchBuiltin.1("$", pars112);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L3() else L2(dr92);
    L2(pars114):
      r308 = `$`(pars114, <sym outcex>);
      goto L0(r308);
    L3():
      dx121 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx121);
    };
    p89 = prom<V +>{
      p88 = ldf p;
      r310 = dyn p88("cex");
      return r310;
    };
    p90 = prom<V +>{
      par16 = ldf par;
      r312 = dyn par16("cex");
      return r312;
    };
    r314 = dyn pcycle21(p87, p89, p90);
    check L390() else D119();
  D119():
    deopt 449 [r314];
  L390():
    st outcex = r314;
    pcycle22 = ldf pcycle;
    check L391() else D120();
  D120():
    deopt 452 [];
  L391():
    p91 = prom<V +>{
      pars115 = ld pars;
      pars116 = force? pars115;
      checkMissing(pars116);
      c109 = `is.object`(pars116);
      if c109 then L1() else L2(pars116);
    L0(dx124):
      return dx124;
    L1():
      dr94 = tryDispatchBuiltin.1("$", pars116);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(pars118):
      r315 = `$`(pars118, <sym outcol>);
      goto L0(r315);
    L3():
      dx123 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx123);
    };
    p92 = prom<V +>{
      border11 = ld border;
      border12 = force? border11;
      checkMissing(border12);
      return border12;
    };
    r318 = dyn pcycle22(p91, p92);
    check L392() else D121();
  D121():
    deopt 455 [r318];
  L392():
    st outcol = r318;
    pcycle23 = ldf pcycle;
    check L393() else D122();
  D122():
    deopt 458 [];
  L393():
    p93 = prom<V +>{
      pars119 = ld pars;
      pars120 = force? pars119;
      checkMissing(pars120);
      c110 = `is.object`(pars120);
      if c110 then L1() else L2(pars120);
    L0(dx126):
      return dx126;
    L1():
      dr96 = tryDispatchBuiltin.1("$", pars120);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(pars122):
      r319 = `$`(pars122, <sym outbg>);
      goto L0(r319);
    L3():
      dx125 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx125);
    };
    p95 = prom<V +>{
      p94 = ldf p;
      r321 = dyn p94("bg");
      return r321;
    };
    p96 = prom<V +>{
      par17 = ldf par;
      r323 = dyn par17("bg");
      return r323;
    };
    r325 = dyn pcycle23(p93, p95, p96);
    check L394() else D123();
  D123():
    deopt 462 [r325];
  L394():
    st outbg = r325;
    pcycle24 = ldf pcycle;
    check L395() else D124();
  D124():
    deopt 465 [];
  L395():
    p97 = prom<V +>{
      pars123 = ld pars;
      pars124 = force? pars123;
      checkMissing(pars124);
      c111 = `is.object`(pars124);
      if c111 then L1() else L2(pars124);
    L0(dx128):
      return dx128;
    L1():
      dr98 = tryDispatchBuiltin.1("$", pars124);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(pars126):
      r326 = `$`(pars126, <sym outwex>);
      goto L0(r326);
    L3():
      dx127 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx127);
    };
    r328 = dyn pcycle24(p97, 0.5);
    check L396() else D125();
  D125():
    deopt 468 [r328];
  L396():
    st outwex = r328;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L397() else L398();
  L73(r330):
    r331 = `!`(r330);
    c113 = `as.logical`(r331);
    if c113 then L400() else L74();
  L397():
    width1 = ld width;
    check L399() else D126();
  L398():
    r329 = dyn base21(<sym width>);
    goto L73(r329);
  D126():
    deopt 471 [width1];
  L74():
    varwidth1 = ld varwidth;
    check L429() else D140();
  L83(r353):
    st width = r353;
    horizontal7 = ld horizontal;
    check L457() else D150();
  L399():
    width2 = force? width1;
    checkMissing(width2);
    c112 = `==`(width2, NULL);
    goto L73(c112);
  L400():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L401() else L402();
  D140():
    deopt 515 [varwidth1];
  D150():
    deopt 548 [horizontal7];
  L75(r333):
    n8 = ld n;
    check L405() else D129();
  L401():
    width3 = ld width;
    check L403() else D127();
  L402():
    r332 = dyn base22(<sym width>);
    goto L75(r332);
  L429():
    varwidth2 = force? varwidth1;
    checkMissing(varwidth2);
    c133 = `as.logical`(varwidth2);
    if c133 then L430() else L84();
  L457():
    horizontal8 = force? horizontal7;
    checkMissing(horizontal8);
    c137 = `as.logical`(horizontal8);
    if c137 then L458() else L88();
  D127():
    deopt 477 [width3];
  D129():
    deopt 480 [r333, n8];
  L84():
    n10 = ld n;
    check L448() else D145();
  L88():
    points = ld points;
    check L460() else D151();
  L89():
    st ok = TRUE;
    n14 = ld n;
    check L463() else D154();
  L403():
    width4 = force? width3;
    checkMissing(width4);
    length3 = ldf length in base;
    r334 = dyn length3(width4);
    check L404() else D128();
  L405():
    n9 = force? n8;
    checkMissing(n9);
    r335 = `!=`(r333, n9);
    c114 = `as.logical`(r335);
    if c114 then L76(c114) else L406();
  L430():
    boxwex2 = ld boxwex;
    check L431() else D141();
  L458():
    r368 = clos inner3924448841;
    st xypoints = r368;
    r369 = clos inner3924448841;
    st xypolygon = r369;
    r370 = clos inner2645199738;
    st xysegments = r370;
    goto L89();
  D128():
    deopt 480 [r334];
  D141():
    deopt 517 [boxwex2];
  D145():
    deopt 531 [n10];
  D151():
    deopt 559 [points];
  D154():
    deopt 572 [1, n14];
  L76(c115):
    c123 = `as.logical`(c115);
    if c123 then L78(c123) else L412();
  L404():
    goto L75(r334);
  L406():
    sym23 = ldf anyNA;
    base23 = ldf anyNA in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L407() else L408();
  L431():
    boxwex3 = force? boxwex2;
    checkMissing(boxwex3);
    sym26 = ldf sqrt;
    base26 = ldf sqrt in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L432() else L433();
  L448():
    n11 = force? n10;
    checkMissing(n11);
    r364 = `==`(n11, 1.0);
    c136 = `as.logical`(r364);
    if c136 then L449() else L87();
  L460():
    points1 = force? points;
    checkMissing(points1);
    st xypoints = points1;
    polygon = ld polygon;
    check L461() else D152();
  L463():
    n15 = force? n14;
    checkMissing(n15);
    r372 = `:`(1, n15);
    s = toForSeq(r372);
    l15 = length(s);
    i = 0;
    goto L90(i);
  D152():
    deopt 562 [polygon];
  L77(c119, r337):
    c120 = `as.logical`(r337);
    c121 = `||`(c119, c120);
    goto L76(c121);
  L78(c124):
    c132 = `as.logical`(c124);
    if c132 then L418() else L80();
  L85(boxwex6, r355):
    r363 = `*`(boxwex6, r355);
    goto L83(r363);
  L87():
    sym28 = ldf `rep.int`;
    base28 = ldf `rep.int` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L452() else L453();
  L90(i1):
    i2 = `+`.1(i1, 1);
    c138 = `<`.1(l15, i2);
    if c138 then L464() else L91();
  L407():
    width5 = ld width;
    check L409() else D130();
  L408():
    r336 = dyn base23(<sym width>);
    goto L77(c114, r336);
  L412():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L413() else L414();
  L432():
    z39 = ld z;
    check L434() else D142();
  L433():
    r354 = dyn base26(<lang `/`(`$`(z, n), max(`$`(z, n)))>);
    goto L85(boxwex3, r354);
  L449():
    boxwex18 = ld boxwex;
    check L450() else D146();
  L461():
    polygon1 = force? polygon;
    checkMissing(polygon1);
    st xypolygon = polygon1;
    segments = ld segments;
    check L462() else D153();
  D130():
    deopt 485 [c114, width5];
  D142():
    deopt 519 [boxwex3, z39];
  D146():
    deopt 536 [0.5, boxwex18];
  D153():
    deopt 565 [segments];
  L79(c128, r340):
    c129 = `as.logical`(r340);
    c130 = `||`(c128, c129);
    goto L78(c130);
  L80():
    goto L81();
  L81():
    boxwex = ld boxwex;
    check L422() else D136();
  L91():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ok = ld ok;
    check L465() else D155();
  L409():
    width6 = force? width5;
    checkMissing(width6);
    anyNA = ldf anyNA in base;
    r338 = dyn anyNA(width6);
    check L410() else D131();
  L413():
    width7 = ld width;
    check L415() else D132();
  L414():
    r339 = dyn base24(<lang `<=`(width, 0.0)>);
    goto L79(c123, r339);
  L418():
    stop2 = ldf stop;
    check L419() else D134();
  L434():
    z40 = force? z39;
    checkMissing(z40);
    c134 = `is.object`(z40);
    if c134 then L436() else L437(boxwex3, z40);
  L450():
    boxwex19 = force? boxwex18;
    checkMissing(boxwex19);
    r365 = `*`(0.5, boxwex19);
    goto L83(r365);
  L452():
    boxwex20 = ld boxwex;
    check L454() else D147();
  L453():
    r366 = dyn base28(<sym boxwex>, <sym n>);
    goto L83(r366);
  L462():
    segments1 = force? segments;
    checkMissing(segments1);
    st xysegments = segments1;
    goto L89();
  L464():
    ok2 = ld ok;
    check L468() else D158();
  D131():
    deopt 488 [c114, r338];
  D132():
    deopt 492 [c123, width7];
  D134():
    deopt 500 [];
  D136():
    deopt 505 [boxwex];
  D147():
    deopt 541 [boxwex20];
  D155():
    deopt 575 [i2, ok];
  D158():
    deopt 599 [ok2];
  L410():
    goto L77(c114, r338);
  L415():
    width8 = force? width7;
    checkMissing(width8);
    r341 = `<=`(width8, 0.0);
    any = ldf any in base;
    r342 = dyn any(r341);
    check L416() else D133();
  L419():
    r343 = dyn stop2("invalid boxplot widths");
    check L420() else D135();
  L422():
    boxwex1 = force? boxwex;
    checkMissing(boxwex1);
    width9 = ld width;
    check L423() else D137();
  L435(boxwex10, dx130):
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L439() else L440();
  L436():
    dr100 = tryDispatchBuiltin.1("$", z40);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L438() else L437(boxwex3, dr100);
  L437(boxwex8, z42):
    r356 = `$`(z42, <sym n>);
    goto L435(boxwex8, r356);
  L454():
    boxwex21 = force? boxwex20;
    checkMissing(boxwex21);
    n12 = ld n;
    check L455() else D148();
  L465():
    ok1 = force? ok;
    checkMissing(ok1);
    bplt = ldf bplt;
    check L466() else D156();
  L468():
    ok3 = force? ok2;
    checkMissing(ok3);
    r393 = `!`(ok3);
    c148 = `as.logical`(r393);
    if c148 then L469() else L92();
  D133():
    deopt 497 [c123, r342];
  D135():
    deopt 502 [r343];
  D137():
    deopt 506 [boxwex1, width9];
  D148():
    deopt 543 [n12];
  D156():
    deopt 577 [i2, ok1];
  L86(boxwex13, dx133, r358):
    r361 = `/`(dx133, r358);
    r362 = sqrt(r361);
    goto L85(boxwex13, r362);
  L92():
    goto L93();
  L93():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L473() else L474();
  L416():
    goto L79(c123, r342);
  L420():
    goto L81();
  L423():
    width10 = force? width9;
    checkMissing(width10);
    r345 = `*`(boxwex1, width10);
    sym25 = ldf max;
    base25 = ldf max in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L424() else L425();
  L438():
    dx129 = getTryDispatchBuiltinValue(dr100);
    goto L435(boxwex3, dx129);
  L439():
    z43 = ld z;
    check L441() else D143();
  L440():
    r357 = dyn base27(<lang `$`(z, n)>);
    goto L86(boxwex10, dx130, r357);
  L455():
    n13 = force? n12;
    checkMissing(n13);
    rep_int = ldf `rep.int` in base;
    r367 = dyn rep_int(boxwex21, n13);
    check L456() else D149();
  L466():
    p98 = prom<V +>{
      at11 = ld at;
      at12 = force? at11;
      checkMissing(at12);
      c139 = `is.object`(at12);
      if c139 then L1() else L2(at12);
    L0(dx141):
      return dx141;
    L1():
      dr104 = tryDispatchBuiltin.1("[", at12);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L3() else L2(dr104);
    L2(at14):
      i5 = ld i;
      i6 = force? i5;
      __6 = ldf `[` in base;
      r373 = dyn __6(at14, i6);
      goto L0(r373);
    L3():
      dx140 = getTryDispatchBuiltinValue(dr104);
      goto L0(dx140);
    };
    p99 = prom<V +>{
      width13 = ld width;
      width14 = force? width13;
      checkMissing(width14);
      c140 = `is.object`(width14);
      if c140 then L1() else L2(width14);
    L0(dx143):
      return dx143;
    L1():
      dr106 = tryDispatchBuiltin.1("[", width14);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L3() else L2(dr106);
    L2(width16):
      i7 = ld i;
      i8 = force? i7;
      __7 = ldf `[` in base;
      r375 = dyn __7(width16, i8);
      goto L0(r375);
    L3():
      dx142 = getTryDispatchBuiltinValue(dr106);
      goto L0(dx142);
    };
    p100 = prom<V +>{
      z47 = ld z;
      z48 = force? z47;
      checkMissing(z48);
      c141 = `is.object`(z48);
      if c141 then L2() else L3(z48);
    L1(dx145):
      c142 = `is.object`(dx145);
      if c142 then L5() else L6();
    L2():
      dr108 = tryDispatchBuiltin.1("$", z48);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L4() else L3(dr108);
    L3(z50):
      r377 = `$`(z50, <sym stats>);
      goto L1(r377);
    L0(dx149):
      return dx149;
    L4():
      dx144 = getTryDispatchBuiltinValue(dr108);
      goto L1(dx144);
    L5():
      dr110 = tryDispatchBuiltin.1("[", dx145);
      dc55 = getTryDispatchBuiltinDispatched(dr110);
      if dc55 then L7() else L6();
    L6():
      i9 = ld i;
      i10 = force? i9;
      __8 = ldf `[` in base;
      r378 = dyn __8(dx145, <missing>, i10);
      goto L0(r378);
    L7():
      dx148 = getTryDispatchBuiltinValue(dr110);
      goto L0(dx148);
    };
    p101 = prom<V +>{
      z51 = ld z;
      z52 = force? z51;
      checkMissing(z52);
      c143 = `is.object`(z52);
      if c143 then L2() else L3(z52);
    L1(dx151):
      c144 = `is.object`(dx151);
      if c144 then L5() else L6(dx151);
    L2():
      dr112 = tryDispatchBuiltin.1("$", z52);
      dc56 = getTryDispatchBuiltinDispatched(dr112);
      if dc56 then L4() else L3(dr112);
    L3(z54):
      r380 = `$`(z54, <sym out>);
      goto L1(r380);
    L0(dx155):
      return dx155;
    L4():
      dx150 = getTryDispatchBuiltinValue(dr112);
      goto L1(dx150);
    L5():
      dr114 = tryDispatchBuiltin.1("[", dx151);
      dc57 = getTryDispatchBuiltinDispatched(dr114);
      if dc57 then L7() else L6(dr114);
    L6(dx153):
      z55 = ld z;
      z56 = force? z55;
      checkMissing(z56);
      c145 = `is.object`(z56);
      if c145 then L9() else L10(dx153, z56);
    L7():
      dx154 = getTryDispatchBuiltinValue(dr114);
      goto L0(dx154);
    L8(dx160, dx161):
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      r382 = `==`(dx161, i12);
      __9 = ldf `[` in base;
      r383 = dyn __9(dx160, r382);
      goto L0(r383);
    L9():
      dr116 = tryDispatchBuiltin.1("$", z56);
      dc58 = getTryDispatchBuiltinDispatched(dr116);
      if dc58 then L11() else L10(dx153, dr116);
    L10(dx157, z58):
      r381 = `$`(z58, <sym group>);
      goto L8(dx157, r381);
    L11():
      dx159 = getTryDispatchBuiltinValue(dr116);
      goto L8(dx153, dx159);
    };
    p102 = prom<V +>{
      z59 = ld z;
      z60 = force? z59;
      checkMissing(z60);
      c146 = `is.object`(z60);
      if c146 then L2() else L3(z60);
    L1(dx163):
      c147 = `is.object`(dx163);
      if c147 then L5() else L6();
    L2():
      dr118 = tryDispatchBuiltin.1("$", z60);
      dc59 = getTryDispatchBuiltinDispatched(dr118);
      if dc59 then L4() else L3(dr118);
    L3(z62):
      r385 = `$`(z62, <sym conf>);
      goto L1(r385);
    L0(dx167):
      return dx167;
    L4():
      dx162 = getTryDispatchBuiltinValue(dr118);
      goto L1(dx162);
    L5():
      dr120 = tryDispatchBuiltin.1("[", dx163);
      dc60 = getTryDispatchBuiltinDispatched(dr120);
      if dc60 then L7() else L6();
    L6():
      i13 = ld i;
      i14 = force? i13;
      __10 = ldf `[` in base;
      r386 = dyn __10(dx163, <missing>, i14);
      goto L0(r386);
    L7():
      dx166 = getTryDispatchBuiltinValue(dr120);
      goto L0(dx166);
    };
    p103 = prom<V +>{
      notch3 = ld notch;
      notch4 = force? notch3;
      checkMissing(notch4);
      return notch4;
    };
    p104 = prom<V +>{
      xlog2 = ld xlog;
      xlog3 = force? xlog2;
      checkMissing(xlog3);
      return xlog3;
    };
    p105 = prom<V +>{
      i15 = ld i;
      i16 = force? i15;
      checkMissing(i16);
      return i16;
    };
    r391 = dyn bplt[, wid, stats, out, conf, notch, xlog, i](p98, p99, p100, p101, p102, p103, p104, p105);
    check L467() else D157();
  L469():
    warning1 = ldf warning;
    check L470() else D159();
  D143():
    deopt 523 [boxwex10, dx130, z43];
  D149():
    deopt 546 [r367];
  D157():
    deopt 593 [i2, ok1, r391];
  D159():
    deopt 603 [];
  L82(r349, r350):
    r352 = `/`(r349, r350);
    goto L83(r352);
  L94(r397):
    st axes = r397;
    axes2 = ld axes;
    check L480() else D162();
  L424():
    width11 = ld width;
    check L426() else D138();
  L425():
    r348 = dyn base25(<sym width>);
    goto L82(r345, r348);
  L441():
    z44 = force? z43;
    checkMissing(z44);
    c135 = `is.object`(z44);
    if c135 then L443() else L444(boxwex10, dx130, z44);
  L456():
    goto L83(r367);
  L467():
    r392 = `&&`(ok1, r391);
    st ok = r392;
    goto L90(i2);
  L470():
    r394 = dyn warning1("some notches went outside hinges ('box'): maybe set notch=FALSE");
    check L471() else D160();
  L473():
    pars127 = ld pars;
    check L475() else D161();
  L474():
    r396 = dyn base29(<lang `$`(pars, axes)>);
    goto L94(r396);
  D138():
    deopt 510 [r345, width11];
  D160():
    deopt 605 [r394];
  D161():
    deopt 609 [pars127];
  D162():
    deopt 614 [axes2];
  L426():
    width12 = force? width11;
    checkMissing(width12);
    max = ldf max in base;
    r351 = dyn max(width12);
    check L427() else D139();
  L442(boxwex17, dx138, dx139):
    max1 = ldf max in base;
    r360 = dyn max1(dx139);
    check L446() else D144();
  L443():
    dr102 = tryDispatchBuiltin.1("$", z44);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L445() else L444(boxwex10, dx130, dr102);
  L444(boxwex15, dx135, z46):
    r359 = `$`(z46, <sym n>);
    goto L442(boxwex15, dx135, r359);
  L471():
    goto L93();
  L475():
    pars128 = force? pars127;
    checkMissing(pars128);
    c149 = `is.object`(pars128);
    if c149 then L477() else L478(pars128);
  L480():
    axes3 = force? axes2;
    checkMissing(axes3);
    r399 = `!`(axes3);
    c151 = `as.logical`(r399);
    if c151 then L481() else L95();
  D139():
    deopt 513 [r345, r351];
  D144():
    deopt 527 [boxwex17, dx138, r360];
  L95():
    goto L96();
  L96():
    axes4 = ld axes;
    check L492() else D164();
  L427():
    goto L82(r345, r351);
  L445():
    dx137 = getTryDispatchBuiltinValue(dr102);
    goto L442(boxwex10, dx130, dx137);
  L446():
    goto L86(boxwex17, dx138, r360);
  L476(dx169):
    c150 = `==`(dx169, NULL);
    goto L94(c150);
  L477():
    dr122 = tryDispatchBuiltin.1("$", pars128);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L479() else L478(dr122);
  L478(pars130):
    r398 = `$`(pars130, <sym axes>);
    goto L476(r398);
  L481():
    pars131 = ld pars;
    check L482() else D163();
  D163():
    deopt 617 [pars131];
  D164():
    deopt 628 [axes4];
  L479():
    dx168 = getTryDispatchBuiltinValue(dr122);
    goto L476(dx168);
  L482():
    pars132 = force? pars131;
    checkMissing(pars132);
    c152 = `is.object`(pars132);
    if c152 then L484() else L485(pars132);
  L492():
    axes5 = force? axes4;
    checkMissing(axes5);
    c154 = `as.logical`(axes5);
    if c154 then L493() else L97();
  L97():
    goto L104();
  L104():
    ann1 = ld ann;
    check L514() else D175();
  L483(dx171):
    st axes = dx171;
    l16 = ld pars;
    c153 = `is.object`(l16);
    if c153 then L488() else L489(NULL, l16);
  L484():
    dr124 = tryDispatchBuiltin.1("$", pars132);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L486() else L485(dr124);
  L485(pars134):
    r400 = `$`(pars134, <sym axes>);
    goto L483(r400);
  L493():
    pars135 = ld pars;
    check L494() else D165();
  D165():
    deopt 630 [pars135];
  D175():
    deopt 670 [ann1];
  L486():
    dx170 = getTryDispatchBuiltinValue(dr124);
    goto L483(dx170);
  L487(r404, dx173):
    st pars = dx173;
    goto L96();
  L488():
    dr126 = tryDispatchBuiltin.0("$<-", l16, NULL);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L490() else L489(NULL, dr126);
  L489(r402, l18):
    r405 = `$<-`(l18, <sym axes>, NULL);
    goto L487(r402, r405);
  L494():
    pars136 = force? pars135;
    checkMissing(pars136);
    c155 = `is.object`(pars136);
    if c155 then L495() else L496(pars136);
  L514():
    ann2 = force? ann1;
    checkMissing(ann2);
    c164 = `as.logical`(ann2);
    if c164 then L515() else L105();
  L98(dx175):
    st `ax.pars` = dx175;
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L500() else L501();
  L105():
    goto L106();
  L106():
    frame_plot1 = ld `frame.plot`;
    check L519() else D178();
  L490():
    dx172 = getTryDispatchBuiltinValue(dr126);
    goto L487(NULL, dx172);
  L495():
    dr128 = tryDispatchBuiltin.1("[", pars136);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L497() else L496(dr128);
  L496(pars138):
    _in_ = ldf `%in%`;
    check L498() else D166();
  L515():
    do_call2 = ldf `do.call`;
    check L516() else D176();
  D166():
    deopt 633 [pars138];
  D176():
    deopt 673 [];
  D178():
    deopt 681 [frame_plot1];
  L99(r418):
    c158 = `as.logical`(r418);
    if c158 then L503() else L100();
  L497():
    dx174 = getTryDispatchBuiltinValue(dr128);
    goto L98(dx174);
  L498():
    p106 = prom<V +>{
      sym30 = ldf names;
      base30 = ldf names in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r408):
      return r408;
    L1():
      pars139 = ld pars;
      pars140 = force? pars139;
      checkMissing(pars140);
      names2 = ldf names in base;
      r409 = dyn names2(pars140);
      goto L0(r409);
    L2():
      r407 = dyn base30(<sym pars>);
      goto L0(r407);
    };
    p107 = prom<V +>{
      sym31 = ldf c;
      base31 = ldf c in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r412):
      return r412;
    L1():
      c156 = ldf c in base;
      r413 = dyn c156("xaxt", "yaxt", "xaxp", "yaxp", "gap.axis", "las", "cex.axis", "col.axis", "format");
      goto L0(r413);
    L2():
      r411 = dyn base31("xaxt", "yaxt", "xaxp", "yaxp", "gap.axis", "las", "cex.axis", "col.axis", "format");
      goto L0(r411);
    };
    r415 = dyn _in_(p106, p107);
    check L499() else D167();
  L500():
    show_names1 = ld `show.names`;
    check L502() else D168();
  L501():
    r417 = dyn base32(<sym show.names>);
    goto L99(r417);
  L516():
    p110 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    p113 = prom<V +>{
      pars141 = ld pars;
      pars142 = force? pars141;
      checkMissing(pars142);
      c165 = `is.object`(pars142);
      if c165 then L1() else L2(pars142);
    L0(dx181):
      return dx181;
    L1():
      dr134 = tryDispatchBuiltin.1("[", pars142);
      dc67 = getTryDispatchBuiltinDispatched(dr134);
      if dc67 then L3() else L2(dr134);
    L2(pars144):
      _in_1 = ldf `%in%`;
      p111 = prom<V +>{
        sym37 = ldf names;
        base37 = ldf names in base;
        guard37 = `==`.4(sym37, base37);
        if guard37 then L1() else L2();
      L0(r445):
        return r445;
      L1():
        pars145 = ld pars;
        pars146 = force? pars145;
        checkMissing(pars146);
        names3 = ldf names in base;
        r446 = dyn names3(pars146);
        goto L0(r446);
      L2():
        r444 = dyn base37(<sym pars>);
        goto L0(r444);
      };
      p112 = prom<V +>{
        sym38 = ldf c;
        base38 = ldf c in base;
        guard38 = `==`.4(sym38, base38);
        if guard38 then L1() else L2();
      L0(r449):
        return r449;
      L1():
        c166 = ldf c in base;
        r450 = dyn c166("main", "cex.main", "col.main", "sub", "cex.sub", "col.sub", "xlab", "ylab", "cex.lab", "col.lab");
        goto L0(r450);
      L2():
        r448 = dyn base38("main", "cex.main", "col.main", "sub", "cex.sub", "col.sub", "xlab", "ylab", "cex.lab", "col.lab");
        goto L0(r448);
      };
      r452 = dyn _in_1(p111, p112);
      __12 = ldf `[` in base;
      r453 = dyn __12(pars144, r452);
      goto L0(r453);
    L3():
      dx180 = getTryDispatchBuiltinValue(dr134);
      goto L0(dx180);
    };
    r455 = dyn do_call2[, , quote](p110, p113, TRUE);
    check L517() else D177();
  L519():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c167 = `as.logical`(frame_plot2);
    if c167 then L520() else L107();
  D167():
    deopt 636 [pars138, r415];
  D168():
    deopt 640 [show_names1];
  D177():
    deopt 678 [r455];
  L100():
    goto L101();
  L101():
    show_names3 = ld `show.names`;
    check L506() else D170();
  L107():
    goto L108();
  L108():
    sym39 = ldf invisible;
    base39 = ldf invisible in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L524() else L525();
  L499():
    __11 = ldf `[` in base;
    r416 = dyn __11(pars138, r415);
    goto L98(r416);
  L502():
    show_names2 = force? show_names1;
    checkMissing(show_names2);
    c157 = `==`(show_names2, NULL);
    goto L99(c157);
  L503():
    n16 = ld n;
    check L504() else D169();
  L517():
    goto L106();
  L520():
    box = ldf box;
    check L521() else D179();
  D169():
    deopt 643 [n16];
  D170():
    deopt 650 [show_names3];
  D179():
    deopt 684 [];
  L109(r460):
    popenv;
    return r460;
  L504():
    n17 = force? n16;
    checkMissing(n17);
    r419 = `>`(n17, 1.0);
    st `show.names` = r419;
    goto L101();
  L506():
    show_names4 = force? show_names3;
    checkMissing(show_names4);
    c159 = `as.logical`(show_names4);
    if c159 then L507() else L102();
  L521():
    r457 = dyn box();
    check L522() else D180();
  L524():
    at17 = ld at;
    check L526() else D181();
  L525():
    r459 = dyn base39(<sym at>);
    goto L109(r459);
  D180():
    deopt 685 [r457];
  D181():
    deopt 690 [at17];
  L102():
    goto L103();
  L103():
    do_call1 = ldf `do.call`;
    check L511() else D173();
  L507():
    do_call = ldf `do.call`;
    check L508() else D171();
  L522():
    goto L108();
  L526():
    at18 = force? at17;
    checkMissing(at18);
    invisible = ldf invisible in base;
    r461 = dyn invisible(at18);
    check L527() else D182();
  D171():
    deopt 653 [];
  D173():
    deopt 662 [];
  D182():
    deopt 693 [r461];
  L508():
    p108 = prom<V +>{
      sym33 = ldf c;
      base33 = ldf c in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L2() else L3();
    L0(r422):
      return r422;
    L2():
      sym34 = ldf list;
      base34 = ldf list in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L4() else L5();
    L3():
      r421 = dyn base33(<lang list(side=`+`(1.0, horizontal), at=at, labels=`$`(z, names))>, <sym ax.pars>);
      goto L0(r421);
    L1(r424):
      ax_pars = ld `ax.pars`;
      ax_pars1 = force? ax_pars;
      checkMissing(ax_pars1);
      c161 = ldf c in base;
      r428 = dyn c161(r424, ax_pars1);
      goto L0(r428);
    L4():
      horizontal9 = ld horizontal;
      horizontal10 = force? horizontal9;
      checkMissing(horizontal10);
      r425 = `+`(1.0, horizontal10);
      at15 = ld at;
      at16 = force? at15;
      checkMissing(at16);
      z63 = ld z;
      z64 = force? z63;
      checkMissing(z64);
      c160 = `is.object`(z64);
      if c160 then L7() else L8(z64);
    L5():
      r423 = dyn base34[side, at, labels](<lang `+`(1.0, horizontal)>, <sym at>, <lang `$`(z, names)>);
      goto L1(r423);
    L6(dx177):
      list1 = ldf list in base;
      r427 = dyn list1(r425, at16, dx177);
      goto L1(r427);
    L7():
      dr130 = tryDispatchBuiltin.1("$", z64);
      dc65 = getTryDispatchBuiltinDispatched(dr130);
      if dc65 then L9() else L8(dr130);
    L8(z66):
      r426 = `$`(z66, <sym names>);
      goto L6(r426);
    L9():
      dx176 = getTryDispatchBuiltinValue(dr130);
      goto L6(dx176);
    };
    r430 = dyn do_call[, , quote]("axis", p108, TRUE);
    check L509() else D172();
  L511():
    p109 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L2() else L3();
    L0(r433):
      return r433;
    L2():
      sym36 = ldf list;
      base36 = ldf list in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L4() else L5();
    L3():
      r432 = dyn base35(<lang list(x=`$`(z, stats), side=`-`(2.0, horizontal))>, <sym ax.pars>);
      goto L0(r432);
    L1(r435):
      ax_pars2 = ld `ax.pars`;
      ax_pars3 = force? ax_pars2;
      checkMissing(ax_pars3);
      c163 = ldf c in base;
      r439 = dyn c163(r435, ax_pars3);
      goto L0(r439);
    L4():
      z67 = ld z;
      z68 = force? z67;
      checkMissing(z68);
      c162 = `is.object`(z68);
      if c162 then L7() else L8(z68);
    L5():
      r434 = dyn base36[x, side](<lang `$`(z, stats)>, <lang `-`(2.0, horizontal)>);
      goto L1(r434);
    L6(dx179):
      horizontal11 = ld horizontal;
      horizontal12 = force? horizontal11;
      checkMissing(horizontal12);
      r437 = `-`(2.0, horizontal12);
      list2 = ldf list in base;
      r438 = dyn list2(dx179, r437);
      goto L1(r438);
    L7():
      dr132 = tryDispatchBuiltin.1("$", z68);
      dc66 = getTryDispatchBuiltinDispatched(dr132);
      if dc66 then L9() else L8(dr132);
    L8(z70):
      r436 = `$`(z70, <sym stats>);
      goto L6(r436);
    L9():
      dx178 = getTryDispatchBuiltinValue(dr132);
      goto L6(dx178);
    };
    r441 = dyn do_call1[, , quote]("Axis", p109, TRUE);
    check L512() else D174();
  L527():
    goto L109(r461);
  D172():
    deopt 658 [r430];
  D174():
    deopt 667 [r441];
  L509():
    goto L103();
  L512():
    goto L104();
  }
}
fun inner284008606(x, wid, stats, out, conf, notch, xlog, i) {
  (reg x:*, reg wid:*, reg stats:*, reg out:*, reg conf:*, reg notch:*, reg xlog:*, reg i:*) -+> V { var x:*, var wid:*, var stats:*, var out:*, var conf:*, var notch:*, var xlog:*, var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg stats1:*, reg stats2:V, reg anyNA:cls, reg r2:V, reg r3:V, reg c:L, reg xlog1:*, reg xlog2:V, reg c1:L, reg r4:cls, reg r5:cls, reg r6:cls, reg wid1:*, reg wid2:V, reg r7:V, reg notch1:*, reg notch2:V, reg c2:L, reg stats3:*, reg stats4:V, reg c3:L, reg stats6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg conf1:*, reg conf2:V, reg c4:L, reg dx3:V, reg conf4:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r9:V, reg r10:V, reg c5:L, reg c7:V, reg conf5:*, reg conf6:V, reg c8:L, reg c10:L, reg conf8:V, reg dr4:V, reg dc2:L, reg dx8:V, reg c12:L, reg dx9:V, reg __2:cls, reg r11:V, reg stats7:*, reg stats8:V, reg c13:L, reg c15:L, reg dx11:V, reg stats10:V, reg dr6:V, reg dc3:L, reg dx13:V, reg c17:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r12:V, reg r13:V, reg c18:L, reg c19:V, reg xP:cls, reg x1:*, reg x2:V, reg p:p(V +), reg wid3:*, reg wid4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg wid7:V, reg r16:V, reg notch_frac:*, reg notch_frac1:V, reg notch_frac2:*, reg notch_frac3:V, reg r17:V, reg c21:cls, reg r18:V, reg r19:V, reg p1:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg stats11:*, reg stats12:V, reg c22:L, reg stats14:V, reg dr8:V, reg dc4:L, reg dx16:V, reg dx17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg stats17:V, reg r25:V, reg c23:cls, reg r26:V, reg __4:cls, reg r27:V, reg conf9:*, reg conf10:V, reg c24:L, reg conf12:V, reg dr10:V, reg dc5:L, reg dx18:V, reg dx19:V, reg __5:cls, reg r28:V, reg stats18:*, reg stats19:V, reg c25:L, reg stats21:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg __6:cls, reg r29:V, reg conf13:*, reg conf14:V, reg c26:L, reg conf16:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __7:cls, reg r30:V, reg stats22:*, reg stats23:V, reg c27:L, reg stats25:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg stats28:V, reg r32:V, reg c28:cls, reg r33:V, reg __8:cls, reg r34:V, reg conf17:*, reg conf18:V, reg c29:L, reg conf20:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg __9:cls, reg r35:V, reg stats29:*, reg stats30:V, reg c30:L, reg stats32:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg __10:cls, reg r36:V, reg conf21:*, reg conf22:V, reg c31:L, reg conf24:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg __11:cls, reg r37:V, reg c32:cls, reg r38:V, reg xP1:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg wid8:*, reg wid9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg wid12:V, reg r42:V, reg c33:cls, reg r43:V, reg r44:V, reg p3:p(V +), reg r46:V, reg stats33:*, reg stats34:V, reg c34:L, reg stats36:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg stats39:V, reg r48:V, reg c35:cls, reg r49:V, reg __12:cls, reg r50:V, reg notch3:*, reg notch4:V, reg r51:V, reg c36:L, reg notch_frac4:*, reg notch_frac5:V, reg wid13:*, reg wid14:V, reg r53:V, reg xypolygon:cls, reg xx:*, reg xx1:V, reg p4:p(V +), reg yy:*, reg yy1:V, reg p5:p(V +), reg boxfill:*, reg boxfill1:V, reg c37:L, reg boxfill3:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg i1:*, reg i2:V, reg __13:cls, reg r56:V, reg p6:p(V +), reg r58:V, reg xysegments:cls, reg xP2:cls, reg x5:*, reg x6:V, reg p7:p(V +), reg wntch:*, reg wntch1:V, reg r60:V, reg p8:p(V +), reg r62:V, reg p9:p(V +), reg stats40:*, reg stats41:V, reg c38:L, reg stats43:V, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg __14:cls, reg r64:V, reg p10:p(V +), reg xP3:cls, reg x7:*, reg x8:V, reg p11:p(V +), reg wntch2:*, reg wntch3:V, reg r67:V, reg p12:p(V +), reg r69:V, reg p13:p(V +), reg stats44:*, reg stats45:V, reg c39:L, reg stats47:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg __15:cls, reg r71:V, reg p14:p(V +), reg medlty:*, reg medlty1:V, reg c40:L, reg medlty3:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg i3:*, reg i4:V, reg __16:cls, reg r73:V, reg p15:p(V +), reg medlwd:*, reg medlwd1:V, reg c41:L, reg medlwd3:V, reg dr34:V, reg dc17:L, reg dx42:V, reg dx43:V, reg i5:*, reg i6:V, reg __17:cls, reg r75:V, reg p16:p(V +), reg medcol:*, reg medcol1:V, reg c42:L, reg medcol3:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg i7:*, reg i8:V, reg __18:cls, reg r77:V, reg p17:p(V +), reg r79:V, reg xypoints:cls, reg x9:*, reg x10:V, reg p18:p(V +), reg stats48:*, reg stats49:V, reg c43:L, reg stats51:V, reg dr38:V, reg dc19:L, reg dx46:V, reg dx47:V, reg __19:cls, reg r81:V, reg p19:p(V +), reg medpch:*, reg medpch1:V, reg c44:L, reg medpch3:V, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg i9:*, reg i10:V, reg __20:cls, reg r83:V, reg p20:p(V +), reg medcex:*, reg medcex1:V, reg c45:L, reg medcex3:V, reg dr42:V, reg dc21:L, reg dx50:V, reg dx51:V, reg i11:*, reg i12:V, reg __21:cls, reg r85:V, reg p21:p(V +), reg medcol4:*, reg medcol5:V, reg c46:L, reg medcol7:V, reg dr44:V, reg dc22:L, reg dx52:V, reg dx53:V, reg i13:*, reg i14:V, reg __22:cls, reg r87:V, reg p22:p(V +), reg medbg:*, reg medbg1:V, reg c47:L, reg medbg3:V, reg dr46:V, reg dc23:L, reg dx54:V, reg dx55:V, reg i15:*, reg i16:V, reg __23:cls, reg r89:V, reg p23:p(V +), reg r91:V, reg xysegments1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r92:V, reg r93:V, reg x11:*, reg x12:V, reg rep_int:cls, reg r94:V, reg p24:p(V +), reg stats52:*, reg stats53:V, reg c48:L, reg stats55:V, reg dr48:V, reg dc24:L, reg dx56:V, reg dx57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r96:V, reg stats58:V, reg r97:V, reg c49:cls, reg r98:V, reg __24:cls, reg r99:V, reg p25:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r101:V, reg r102:V, reg x13:*, reg x14:V, reg rep_int1:cls, reg r103:V, reg p26:p(V +), reg stats59:*, reg stats60:V, reg c50:L, reg stats62:V, reg dr50:V, reg dc25:L, reg dx58:V, reg dx59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg stats65:V, reg r106:V, reg c51:cls, reg r107:V, reg __25:cls, reg r108:V, reg p27:p(V +), reg whisklty:*, reg whisklty1:V, reg c52:L, reg whisklty3:V, reg dr52:V, reg dc26:L, reg dx60:V, reg dx61:V, reg i17:*, reg i18:V, reg __26:cls, reg r110:V, reg p28:p(V +), reg whisklwd:*, reg whisklwd1:V, reg c53:L, reg whisklwd3:V, reg dr54:V, reg dc27:L, reg dx62:V, reg dx63:V, reg i19:*, reg i20:V, reg __27:cls, reg r112:V, reg p29:p(V +), reg whiskcol:*, reg whiskcol1:V, reg c54:L, reg whiskcol3:V, reg dr56:V, reg dc28:L, reg dx64:V, reg dx65:V, reg i21:*, reg i22:V, reg __28:cls, reg r114:V, reg p30:p(V +), reg r116:V, reg xysegments2:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r117:V, reg r118:V, reg xP4:cls, reg x15:*, reg x16:V, reg p31:p(V +), reg wid15:*, reg wid16:V, reg r120:V, reg staplewex:*, reg staplewex1:V, reg c55:L, reg r122:V, reg staplewex3:V, reg dr58:V, reg dc29:L, reg dx66:V, reg r124:V, reg dx67:V, reg i23:*, reg i24:V, reg __29:cls, reg r125:V, reg r126:V, reg p32:p(V +), reg r128:V, reg rep_int2:cls, reg r129:V, reg p33:p(V +), reg stats66:*, reg stats67:V, reg c56:L, reg stats69:V, reg dr60:V, reg dc30:L, reg dx68:V, reg dx69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r131:V, reg stats72:V, reg r132:V, reg c57:cls, reg r133:V, reg __30:cls, reg r134:V, reg p34:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r136:V, reg r137:V, reg xP5:cls, reg x17:*, reg x18:V, reg p35:p(V +), reg wid17:*, reg wid18:V, reg r139:V, reg staplewex4:*, reg staplewex5:V, reg c58:L, reg r141:V, reg staplewex7:V, reg dr62:V, reg dc31:L, reg dx70:V, reg r143:V, reg dx71:V, reg i25:*, reg i26:V, reg __31:cls, reg r144:V, reg r145:V, reg p36:p(V +), reg r147:V, reg rep_int3:cls, reg r148:V, reg p37:p(V +), reg stats73:*, reg stats74:V, reg c59:L, reg stats76:V, reg dr64:V, reg dc32:L, reg dx72:V, reg dx73:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r150:V, reg stats79:V, reg r151:V, reg c60:cls, reg r152:V, reg __32:cls, reg r153:V, reg p38:p(V +), reg staplelty:*, reg staplelty1:V, reg c61:L, reg staplelty3:V, reg dr66:V, reg dc33:L, reg dx74:V, reg dx75:V, reg i27:*, reg i28:V, reg __33:cls, reg r155:V, reg p39:p(V +), reg staplelwd:*, reg staplelwd1:V, reg c62:L, reg staplelwd3:V, reg dr68:V, reg dc34:L, reg dx76:V, reg dx77:V, reg i29:*, reg i30:V, reg __34:cls, reg r157:V, reg p40:p(V +), reg staplecol:*, reg staplecol1:V, reg c63:L, reg staplecol3:V, reg dr70:V, reg dc35:L, reg dx78:V, reg dx79:V, reg i31:*, reg i32:V, reg __35:cls, reg r159:V, reg p41:p(V +), reg r161:V, reg xypolygon1:cls, reg xx2:*, reg xx3:V, reg p42:p(V +), reg yy2:*, reg yy3:V, reg p43:p(V +), reg boxlty:*, reg boxlty1:V, reg c64:L, reg boxlty3:V, reg dr72:V, reg dc36:L, reg dx80:V, reg dx81:V, reg i33:*, reg i34:V, reg __36:cls, reg r164:V, reg p44:p(V +), reg boxlwd:*, reg boxlwd1:V, reg c65:L, reg boxlwd3:V, reg dr74:V, reg dc37:L, reg dx82:V, reg dx83:V, reg i35:*, reg i36:V, reg __37:cls, reg r166:V, reg p45:p(V +), reg boxcol:*, reg boxcol1:V, reg c66:L, reg boxcol3:V, reg dr76:V, reg dc38:L, reg dx84:V, reg dx85:V, reg i37:*, reg i38:V, reg __38:cls, reg r168:V, reg p46:p(V +), reg r170:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r171:V, reg r172:V, reg out1:*, reg out2:V, reg length:cls, reg r173:V, reg c67:L, reg xysegments3:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r174:V, reg r175:V, reg rep:cls, reg r176:V, reg p47:p(V +), reg out3:*, reg out4:V, reg p48:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r179:V, reg r180:V, reg rep1:cls, reg r181:V, reg p49:p(V +), reg out5:*, reg out6:V, reg p50:p(V +), reg outlty:*, reg outlty1:V, reg c68:L, reg outlty3:V, reg dr78:V, reg dc39:L, reg dx86:V, reg dx87:V, reg i39:*, reg i40:V, reg __39:cls, reg r184:V, reg p51:p(V +), reg outlwd:*, reg outlwd1:V, reg c69:L, reg outlwd3:V, reg dr80:V, reg dc40:L, reg dx88:V, reg dx89:V, reg i41:*, reg i42:V, reg __40:cls, reg r186:V, reg p52:p(V +), reg outcol:*, reg outcol1:V, reg c70:L, reg outcol3:V, reg dr82:V, reg dc41:L, reg dx90:V, reg dx91:V, reg i43:*, reg i44:V, reg __41:cls, reg r188:V, reg p53:p(V +), reg r190:V, reg xypoints1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r191:V, reg r192:V, reg x19:*, reg x20:V, reg nout:*, reg nout1:V, reg rep_int4:cls, reg r193:V, reg p54:p(V +), reg out7:*, reg out8:V, reg p55:p(V +), reg outpch:*, reg outpch1:V, reg c71:L, reg outpch3:V, reg dr84:V, reg dc42:L, reg dx92:V, reg dx93:V, reg i45:*, reg i46:V, reg __42:cls, reg r196:V, reg p56:p(V +), reg outlwd4:*, reg outlwd5:V, reg c72:L, reg outlwd7:V, reg dr86:V, reg dc43:L, reg dx94:V, reg dx95:V, reg i47:*, reg i48:V, reg __43:cls, reg r198:V, reg p57:p(V +), reg outcex:*, reg outcex1:V, reg c73:L, reg outcex3:V, reg dr88:V, reg dc44:L, reg dx96:V, reg dx97:V, reg i49:*, reg i50:V, reg __44:cls, reg r200:V, reg p58:p(V +), reg outcol4:*, reg outcol5:V, reg c74:L, reg outcol7:V, reg dr90:V, reg dc45:L, reg dx98:V, reg dx99:V, reg i51:*, reg i52:V, reg __45:cls, reg r202:V, reg p59:p(V +), reg outbg:*, reg outbg1:V, reg c75:L, reg outbg3:V, reg dr92:V, reg dc46:L, reg dx100:V, reg dx101:V, reg i53:*, reg i54:V, reg __46:cls, reg r204:V, reg p60:p(V +), reg r206:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r208:V, reg r209:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r210:V, reg r211:V, reg out9:*, reg out10:V, reg is_finite:cls, reg r212:V, reg r213:V, reg any:cls, reg r214:V, reg c76:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r215:V, reg r216:V, reg unique:cls, reg out11:*, reg out12:V, reg c77:L, reg out14:V, reg dr94:V, reg dc47:L, reg dx102:V, reg dx103:V, reg inf:*, reg inf1:V, reg __47:cls, reg r217:V, reg p61:p(V +), reg r219:V, reg length1:cls, reg r220:V, reg p62:p(V +), reg r222:V, reg p63:p(V +), reg paste:cls, reg unique1:cls, reg out15:*, reg out16:V, reg c78:L, reg out18:V, reg dr96:V, reg dc48:L, reg dx104:V, reg dx105:V, reg inf2:*, reg inf3:V, reg __48:cls, reg r224:V, reg p64:p(V +), reg r226:V, reg p65:p(V +), reg r228:V, reg p66:p(V +), reg i55:*, reg i56:V, reg p67:p(V +), reg r231:V, reg p68:p(V +), reg r233:V, reg r234:V, reg ok:*, reg ok1:V |
    mkenv;
    st x = x;
    st wid = wid;
    st stats = stats;
    st out = out;
    st conf = conf;
    st notch = notch;
    st xlog = xlog;
    st i = i;
    st ok = TRUE;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L38() else L1();
  L34():
    stats1 = ld stats;
    check L36() else D0();
  L35():
    r = dyn base(<sym stats>);
    goto L0(r);
  D0():
    deopt 5 [stats1];
  L1():
    goto L33();
  L33():
    ok = ld ok;
    check L155() else D52();
  L36():
    stats2 = force? stats1;
    checkMissing(stats2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(stats2);
    check L37() else D1();
  L38():
    xlog1 = ld xlog;
    check L39() else D2();
  D1():
    deopt 8 [r2];
  D2():
    deopt 10 [xlog1];
  D52():
    deopt 269 [ok];
  L37():
    goto L0(r2);
  L39():
    xlog2 = force? xlog1;
    checkMissing(xlog2);
    c1 = `as.logical`(xlog2);
    if c1 then L40() else L2();
  L155():
    ok1 = force? ok;
    checkMissing(ok1);
    popenv;
    return ok1;
  L2():
    r6 = clos inner1152665323;
    goto L3(r6);
  L3(r5):
    st xP = r5;
    wid1 = ld wid;
    check L42() else D3();
  L40():
    r4 = clos inner1152665323;
    goto L3(r4);
  D3():
    deopt 17 [wid1];
  L42():
    wid2 = force? wid1;
    checkMissing(wid2);
    r7 = `/`(wid2, 2.0);
    st wid = r7;
    notch1 = ld notch;
    check L43() else D4();
  D4():
    deopt 22 [notch1];
  L43():
    notch2 = force? notch1;
    checkMissing(notch2);
    c2 = `as.logical`(notch2);
    if c2 then L44() else L4();
  L4():
    xP1 = ldf xP;
    check L107() else D22();
  L21():
    notch3 = ld notch;
    check L116() else D26();
  L44():
    stats3 = ld stats;
    check L45() else D5();
  D5():
    deopt 24 [stats3];
  D22():
    deopt 106 [];
  D26():
    deopt 123 [notch3];
  L45():
    stats4 = force? stats3;
    checkMissing(stats4);
    c3 = `is.object`(stats4);
    if c3 then L46() else L47(stats4);
  L107():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      wid8 = ld wid;
      wid9 = force? wid8;
      checkMissing(wid9);
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(wid12, r42):
      r44 = `*`(wid12, r42);
      return r44;
    L1():
      c33 = ldf c in base;
      r43 = dyn c33(-1.0, 1.0, 1.0, -1.0);
      goto L0(wid9, r43);
    L2():
      r41 = dyn base5(<lang `-`(1.0)>, 1.0, 1.0, <lang `-`(1.0)>);
      goto L0(wid9, r41);
    };
    r46 = dyn xP1(p2, p3);
    check L108() else D23();
  L116():
    notch4 = force? notch3;
    checkMissing(notch4);
    r51 = `!`(notch4);
    c36 = `as.logical`(r51);
    if c36 then L117() else L24();
  D23():
    deopt 109 [r46];
  L5(dx1):
    conf1 = ld conf;
    check L49() else D6();
  L24():
    goto L25();
  L25():
    notch_frac4 = ld `notch.frac`;
    check L119() else D27();
  L46():
    dr = tryDispatchBuiltin.1("[", stats4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(stats6):
    __ = ldf `[` in base;
    r8 = dyn __(stats6, 2);
    goto L5(r8);
  L108():
    st xx = r46;
    stats33 = ld stats;
    check L109() else D24();
  L117():
    st `notch.frac` = 1.0;
    goto L25();
  D6():
    deopt 28 [dx1, conf1];
  D24():
    deopt 111 [stats33];
  D27():
    deopt 131 [notch_frac4];
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L49():
    conf2 = force? conf1;
    checkMissing(conf2);
    c4 = `is.object`(conf2);
    if c4 then L50() else L51(dx1, conf2);
  L109():
    stats34 = force? stats33;
    checkMissing(stats34);
    c34 = `is.object`(stats34);
    if c34 then L110() else L111(stats34);
  L119():
    notch_frac5 = force? notch_frac4;
    checkMissing(notch_frac5);
    wid13 = ld wid;
    check L120() else D28();
  D28():
    deopt 132 [notch_frac5, wid13];
  L6(dx6, dx7):
    r10 = `<=`(dx6, dx7);
    c5 = `as.logical`(r10);
    if c5 then L53() else L7(c5);
  L22(dx33):
    st yy = dx33;
    goto L21();
  L50():
    dr2 = tryDispatchBuiltin.1("[", conf2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dx1, dr2);
  L51(dx3, conf4):
    __1 = ldf `[` in base;
    r9 = dyn __1(conf4, 1);
    goto L6(dx3, r9);
  L110():
    dr24 = tryDispatchBuiltin.1("[", stats34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L112() else L111(dr24);
  L111(stats36):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L113() else L114();
  L120():
    wid14 = force? wid13;
    checkMissing(wid14);
    r53 = `*`(notch_frac5, wid14);
    st wntch = r53;
    xypolygon = ldf xypolygon;
    check L121() else D29();
  D29():
    deopt 137 [];
  L7(c7):
    st ok = c7;
    xP = ldf xP;
    check L63() else D9();
  L23(stats39, r48):
    __12 = ldf `[` in base;
    r50 = dyn __12(stats39, r48);
    goto L22(r50);
  L52():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx1, dx5);
  L53():
    conf5 = ld conf;
    check L54() else D7();
  L112():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L22(dx32);
  L113():
    c35 = ldf c in base;
    r49 = dyn c35(2.0, 2.0, 4.0, 4.0);
    check L115() else D25();
  L114():
    r47 = dyn base6(2.0, 2.0, 4.0, 4.0);
    goto L23(stats36, r47);
  L121():
    p4 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p5 = prom<V +>{
      yy = ld yy;
      yy1 = force? yy;
      checkMissing(yy1);
      return yy1;
    };
    p6 = prom<V +>{
      boxfill = ld boxfill;
      boxfill1 = force? boxfill;
      checkMissing(boxfill1);
      c37 = `is.object`(boxfill1);
      if c37 then L1() else L2(boxfill1);
    L0(dx35):
      return dx35;
    L1():
      dr26 = tryDispatchBuiltin.1("[", boxfill1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(boxfill3):
      i1 = ld i;
      i2 = force? i1;
      __13 = ldf `[` in base;
      r56 = dyn __13(boxfill3, i2);
      goto L0(r56);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx34);
    };
    r58 = dyn xypolygon[, , lty, col](p4, p5, "blank", p6);
    check L122() else D30();
  D7():
    deopt 34 [c5, conf5];
  D9():
    deopt 47 [];
  D25():
    deopt 120 [stats36, r49];
  D30():
    deopt 144 [r58];
  L54():
    conf6 = force? conf5;
    checkMissing(conf6);
    c8 = `is.object`(conf6);
    if c8 then L55() else L56(c5, conf6);
  L63():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      wid3 = ld wid;
      wid4 = force? wid3;
      checkMissing(wid4);
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(wid7, r16):
      r19 = `*`(wid7, r16);
      return r19;
    L1():
      notch_frac = ld `notch.frac`;
      notch_frac1 = force? notch_frac;
      checkMissing(notch_frac1);
      notch_frac2 = ld `notch.frac`;
      notch_frac3 = force? notch_frac2;
      checkMissing(notch_frac3);
      r17 = `-`(<missing>, notch_frac3);
      c21 = ldf c in base;
      r18 = dyn c21(-1.0, 1.0, 1.0, notch_frac1, 1.0, 1.0, -1.0, -1.0, r17, -1.0);
      goto L0(wid4, r18);
    L2():
      r15 = dyn base1(<lang `-`(1.0)>, 1.0, 1.0, <sym notch.frac>, 1.0, 1.0, <lang `-`(1.0)>, <lang `-`(1.0)>, <lang `-`(notch.frac)>, <lang `-`(1.0)>);
      goto L0(wid4, r15);
    };
    r21 = dyn xP(p, p1);
    check L64() else D10();
  L115():
    goto L23(stats36, r49);
  L122():
    xysegments = ldf xysegments;
    check L123() else D31();
  D10():
    deopt 50 [r21];
  D31():
    deopt 146 [];
  L8(c12, dx9):
    stats7 = ld stats;
    check L58() else D8();
  L55():
    dr4 = tryDispatchBuiltin.1("[", conf6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(c5, dr4);
  L56(c10, conf8):
    __2 = ldf `[` in base;
    r11 = dyn __2(conf8, 2);
    goto L8(c10, r11);
  L64():
    st xx = r21;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L123():
    p9 = prom<V +>{
      xP2 = ldf xP;
      p7 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p8 = prom<V +>{
        wntch = ld wntch;
        wntch1 = force? wntch;
        checkMissing(wntch1);
        r60 = `-`(<missing>, wntch1);
        return r60;
      };
      r62 = dyn xP2(p7, p8);
      return r62;
    };
    p10 = prom<V +>{
      stats40 = ld stats;
      stats41 = force? stats40;
      checkMissing(stats41);
      c38 = `is.object`(stats41);
      if c38 then L1() else L2(stats41);
    L0(dx37):
      return dx37;
    L1():
      dr28 = tryDispatchBuiltin.1("[", stats41);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(stats43):
      __14 = ldf `[` in base;
      r64 = dyn __14(stats43, 3);
      goto L0(r64);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx36);
    };
    p13 = prom<V +>{
      xP3 = ldf xP;
      p11 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p12 = prom<V +>{
        wntch2 = ld wntch;
        wntch3 = force? wntch2;
        checkMissing(wntch3);
        r67 = `+`(<missing>, wntch3);
        return r67;
      };
      r69 = dyn xP3(p11, p12);
      return r69;
    };
    p14 = prom<V +>{
      stats44 = ld stats;
      stats45 = force? stats44;
      checkMissing(stats45);
      c39 = `is.object`(stats45);
      if c39 then L1() else L2(stats45);
    L0(dx39):
      return dx39;
    L1():
      dr30 = tryDispatchBuiltin.1("[", stats45);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(stats47):
      __15 = ldf `[` in base;
      r71 = dyn __15(stats47, 3);
      goto L0(r71);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx38);
    };
    p15 = prom<V +>{
      medlty = ld medlty;
      medlty1 = force? medlty;
      checkMissing(medlty1);
      c40 = `is.object`(medlty1);
      if c40 then L1() else L2(medlty1);
    L0(dx41):
      return dx41;
    L1():
      dr32 = tryDispatchBuiltin.1("[", medlty1);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(medlty3):
      i3 = ld i;
      i4 = force? i3;
      __16 = ldf `[` in base;
      r73 = dyn __16(medlty3, i4);
      goto L0(r73);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx40);
    };
    p16 = prom<V +>{
      medlwd = ld medlwd;
      medlwd1 = force? medlwd;
      checkMissing(medlwd1);
      c41 = `is.object`(medlwd1);
      if c41 then L1() else L2(medlwd1);
    L0(dx43):
      return dx43;
    L1():
      dr34 = tryDispatchBuiltin.1("[", medlwd1);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(medlwd3):
      i5 = ld i;
      i6 = force? i5;
      __17 = ldf `[` in base;
      r75 = dyn __17(medlwd3, i6);
      goto L0(r75);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx42);
    };
    p17 = prom<V +>{
      medcol = ld medcol;
      medcol1 = force? medcol;
      checkMissing(medcol1);
      c42 = `is.object`(medcol1);
      if c42 then L1() else L2(medcol1);
    L0(dx45):
      return dx45;
    L1():
      dr36 = tryDispatchBuiltin.1("[", medcol1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(medcol3):
      i7 = ld i;
      i8 = force? i7;
      __18 = ldf `[` in base;
      r77 = dyn __18(medcol3, i8);
      goto L0(r77);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx44);
    };
    r79 = dyn xysegments[, , , , lty, lwd, col, lend](p9, p10, p13, p14, p15, p16, p17, 1.0);
    check L124() else D32();
  D8():
    deopt 38 [c12, dx9, stats7];
  D32():
    deopt 159 [r79];
  L10(r23):
    st yy = r23;
    goto L21();
  L57():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L8(c5, dx8);
  L58():
    stats8 = force? stats7;
    checkMissing(stats8);
    c13 = `is.object`(stats8);
    if c13 then L59() else L60(c12, dx9, stats8);
  L65():
    stats11 = ld stats;
    check L67() else D11();
  L66():
    r22 = dyn base2(<lang `[`(stats, c(2.0, 2.0))>, <lang `[`(conf, 1)>, <lang `[`(stats, 3)>, <lang `[`(conf, 2)>, <lang `[`(stats, c(4.0, 4.0))>, <lang `[`(conf, 2)>, <lang `[`(stats, 3)>, <lang `[`(conf, 1)>);
    goto L10(r22);
  L124():
    xypoints = ldf xypoints;
    check L125() else D33();
  D11():
    deopt 54 [stats11];
  D33():
    deopt 161 [];
  L9(c17, dx14, dx15):
    r13 = `<=`(dx14, dx15);
    c18 = `as.logical`(r13);
    c19 = `&&`(c17, c18);
    goto L7(c19);
  L59():
    dr6 = tryDispatchBuiltin.1("[", stats8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(c12, dx9, dr6);
  L60(c15, dx11, stats10):
    __3 = ldf `[` in base;
    r12 = dyn __3(stats10, 4);
    goto L9(c15, dx11, r12);
  L67():
    stats12 = force? stats11;
    checkMissing(stats12);
    c22 = `is.object`(stats12);
    if c22 then L68() else L69(stats12);
  L125():
    p18 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p19 = prom<V +>{
      stats48 = ld stats;
      stats49 = force? stats48;
      checkMissing(stats49);
      c43 = `is.object`(stats49);
      if c43 then L1() else L2(stats49);
    L0(dx47):
      return dx47;
    L1():
      dr38 = tryDispatchBuiltin.1("[", stats49);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(stats51):
      __19 = ldf `[` in base;
      r81 = dyn __19(stats51, 3);
      goto L0(r81);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx46);
    };
    p20 = prom<V +>{
      medpch = ld medpch;
      medpch1 = force? medpch;
      checkMissing(medpch1);
      c44 = `is.object`(medpch1);
      if c44 then L1() else L2(medpch1);
    L0(dx49):
      return dx49;
    L1():
      dr40 = tryDispatchBuiltin.1("[", medpch1);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(medpch3):
      i9 = ld i;
      i10 = force? i9;
      __20 = ldf `[` in base;
      r83 = dyn __20(medpch3, i10);
      goto L0(r83);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx48);
    };
    p21 = prom<V +>{
      medcex = ld medcex;
      medcex1 = force? medcex;
      checkMissing(medcex1);
      c45 = `is.object`(medcex1);
      if c45 then L1() else L2(medcex1);
    L0(dx51):
      return dx51;
    L1():
      dr42 = tryDispatchBuiltin.1("[", medcex1);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(medcex3):
      i11 = ld i;
      i12 = force? i11;
      __21 = ldf `[` in base;
      r85 = dyn __21(medcex3, i12);
      goto L0(r85);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx50);
    };
    p22 = prom<V +>{
      medcol4 = ld medcol;
      medcol5 = force? medcol4;
      checkMissing(medcol5);
      c46 = `is.object`(medcol5);
      if c46 then L1() else L2(medcol5);
    L0(dx53):
      return dx53;
    L1():
      dr44 = tryDispatchBuiltin.1("[", medcol5);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(medcol7):
      i13 = ld i;
      i14 = force? i13;
      __22 = ldf `[` in base;
      r87 = dyn __22(medcol7, i14);
      goto L0(r87);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx52);
    };
    p23 = prom<V +>{
      medbg = ld medbg;
      medbg1 = force? medbg;
      checkMissing(medbg1);
      c47 = `is.object`(medbg1);
      if c47 then L1() else L2(medbg1);
    L0(dx55):
      return dx55;
    L1():
      dr46 = tryDispatchBuiltin.1("[", medbg1);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(medbg3):
      i15 = ld i;
      i16 = force? i15;
      __23 = ldf `[` in base;
      r89 = dyn __23(medbg3, i16);
      goto L0(r89);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx54);
    };
    r91 = dyn xypoints[, , pch, cex, col, bg](p18, p19, p20, p21, p22, p23);
    check L126() else D34();
  D34():
    deopt 172 [r91];
  L11(dx17):
    conf9 = ld conf;
    check L74() else D13();
  L61():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L9(c12, dx9, dx13);
  L68():
    dr8 = tryDispatchBuiltin.1("[", stats12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(dr8);
  L69(stats14):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L126():
    xysegments1 = ldf xysegments;
    check L127() else D35();
  D13():
    deopt 63 [conf9];
  D35():
    deopt 174 [];
  L12(stats17, r25):
    __4 = ldf `[` in base;
    r27 = dyn __4(stats17, r25);
    goto L11(r27);
  L70():
    dx16 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx16);
  L71():
    c23 = ldf c in base;
    r26 = dyn c23(2.0, 2.0);
    check L73() else D12();
  L72():
    r24 = dyn base3(2.0, 2.0);
    goto L12(stats14, r24);
  L74():
    conf10 = force? conf9;
    checkMissing(conf10);
    c24 = `is.object`(conf10);
    if c24 then L75() else L76(conf10);
  L127():
    p24 = prom<V +>{
      sym7 = ldf `rep.int`;
      base7 = ldf `rep.int` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r93):
      return r93;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      rep_int = ldf `rep.int` in base;
      r94 = dyn rep_int(x12, 2.0);
      goto L0(r94);
    L2():
      r92 = dyn base7(<sym x>, 2.0);
      goto L0(r92);
    };
    p25 = prom<V +>{
      stats52 = ld stats;
      stats53 = force? stats52;
      checkMissing(stats53);
      c48 = `is.object`(stats53);
      if c48 then L2() else L3(stats53);
    L0(dx57):
      return dx57;
    L2():
      dr48 = tryDispatchBuiltin.1("[", stats53);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L4() else L3(dr48);
    L3(stats55):
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L1(stats58, r97):
      __24 = ldf `[` in base;
      r99 = dyn __24(stats58, r97);
      goto L0(r99);
    L4():
      dx56 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx56);
    L5():
      c49 = ldf c in base;
      r98 = dyn c49(1.0, 5.0);
      goto L1(stats55, r98);
    L6():
      r96 = dyn base8(1.0, 5.0);
      goto L1(stats55, r96);
    };
    p26 = prom<V +>{
      sym9 = ldf `rep.int`;
      base9 = ldf `rep.int` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r102):
      return r102;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      rep_int1 = ldf `rep.int` in base;
      r103 = dyn rep_int1(x14, 2.0);
      goto L0(r103);
    L2():
      r101 = dyn base9(<sym x>, 2.0);
      goto L0(r101);
    };
    p27 = prom<V +>{
      stats59 = ld stats;
      stats60 = force? stats59;
      checkMissing(stats60);
      c50 = `is.object`(stats60);
      if c50 then L2() else L3(stats60);
    L0(dx59):
      return dx59;
    L2():
      dr50 = tryDispatchBuiltin.1("[", stats60);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L4() else L3(dr50);
    L3(stats62):
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L5() else L6();
    L1(stats65, r106):
      __25 = ldf `[` in base;
      r108 = dyn __25(stats65, r106);
      goto L0(r108);
    L4():
      dx58 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx58);
    L5():
      c51 = ldf c in base;
      r107 = dyn c51(2.0, 4.0);
      goto L1(stats62, r107);
    L6():
      r105 = dyn base10(2.0, 4.0);
      goto L1(stats62, r105);
    };
    p28 = prom<V +>{
      whisklty = ld whisklty;
      whisklty1 = force? whisklty;
      checkMissing(whisklty1);
      c52 = `is.object`(whisklty1);
      if c52 then L1() else L2(whisklty1);
    L0(dx61):
      return dx61;
    L1():
      dr52 = tryDispatchBuiltin.1("[", whisklty1);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(whisklty3):
      i17 = ld i;
      i18 = force? i17;
      __26 = ldf `[` in base;
      r110 = dyn __26(whisklty3, i18);
      goto L0(r110);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx60);
    };
    p29 = prom<V +>{
      whisklwd = ld whisklwd;
      whisklwd1 = force? whisklwd;
      checkMissing(whisklwd1);
      c53 = `is.object`(whisklwd1);
      if c53 then L1() else L2(whisklwd1);
    L0(dx63):
      return dx63;
    L1():
      dr54 = tryDispatchBuiltin.1("[", whisklwd1);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(whisklwd3):
      i19 = ld i;
      i20 = force? i19;
      __27 = ldf `[` in base;
      r112 = dyn __27(whisklwd3, i20);
      goto L0(r112);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx62);
    };
    p30 = prom<V +>{
      whiskcol = ld whiskcol;
      whiskcol1 = force? whiskcol;
      checkMissing(whiskcol1);
      c54 = `is.object`(whiskcol1);
      if c54 then L1() else L2(whiskcol1);
    L0(dx65):
      return dx65;
    L1():
      dr56 = tryDispatchBuiltin.1("[", whiskcol1);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(whiskcol3):
      i21 = ld i;
      i22 = force? i21;
      __28 = ldf `[` in base;
      r114 = dyn __28(whiskcol3, i22);
      goto L0(r114);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx64);
    };
    r116 = dyn xysegments1[, , , , lty, lwd, col](p24, p25, p26, p27, p28, p29, p30);
    check L128() else D36();
  D12():
    deopt 61 [stats14, r26];
  D36():
    deopt 185 [r116];
  L13(dx19):
    stats18 = ld stats;
    check L78() else D14();
  L73():
    goto L12(stats14, r26);
  L75():
    dr10 = tryDispatchBuiltin.1("[", conf10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L77() else L76(dr10);
  L76(conf12):
    __5 = ldf `[` in base;
    r28 = dyn __5(conf12, 1);
    goto L13(r28);
  L128():
    xysegments2 = ldf xysegments;
    check L129() else D37();
  D14():
    deopt 68 [stats18];
  D37():
    deopt 187 [];
  L77():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx18);
  L78():
    stats19 = force? stats18;
    checkMissing(stats19);
    c25 = `is.object`(stats19);
    if c25 then L79() else L80(stats19);
  L129():
    p33 = prom<V +>{
      sym11 = ldf `rep.int`;
      base11 = ldf `rep.int` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r118):
      return r118;
    L1():
      xP4 = ldf xP;
      p31 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      p32 = prom<V +>{
        wid15 = ld wid;
        wid16 = force? wid15;
        checkMissing(wid16);
        r120 = `-`(<missing>, wid16);
        staplewex = ld staplewex;
        staplewex1 = force? staplewex;
        checkMissing(staplewex1);
        c55 = `is.object`(staplewex1);
        if c55 then L1() else L2(r120, staplewex1);
      L0(r124, dx67):
        r126 = `*`(r124, dx67);
        return r126;
      L1():
        dr58 = tryDispatchBuiltin.1("[", staplewex1);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L3() else L2(r120, dr58);
      L2(r122, staplewex3):
        i23 = ld i;
        i24 = force? i23;
        __29 = ldf `[` in base;
        r125 = dyn __29(staplewex3, i24);
        goto L0(r122, r125);
      L3():
        dx66 = getTryDispatchBuiltinValue(dr58);
        goto L0(r120, dx66);
      };
      r128 = dyn xP4(p31, p32);
      rep_int2 = ldf `rep.int` in base;
      r129 = dyn rep_int2(r128, 2.0);
      goto L0(r129);
    L2():
      r117 = dyn base11(<lang xP(x, `*`(`-`(wid), `[`(staplewex, i)))>, 2.0);
      goto L0(r117);
    };
    p34 = prom<V +>{
      stats66 = ld stats;
      stats67 = force? stats66;
      checkMissing(stats67);
      c56 = `is.object`(stats67);
      if c56 then L2() else L3(stats67);
    L0(dx69):
      return dx69;
    L2():
      dr60 = tryDispatchBuiltin.1("[", stats67);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L4() else L3(dr60);
    L3(stats69):
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L5() else L6();
    L1(stats72, r132):
      __30 = ldf `[` in base;
      r134 = dyn __30(stats72, r132);
      goto L0(r134);
    L4():
      dx68 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx68);
    L5():
      c57 = ldf c in base;
      r133 = dyn c57(1.0, 5.0);
      goto L1(stats69, r133);
    L6():
      r131 = dyn base12(1.0, 5.0);
      goto L1(stats69, r131);
    };
    p37 = prom<V +>{
      sym13 = ldf `rep.int`;
      base13 = ldf `rep.int` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r137):
      return r137;
    L1():
      xP5 = ldf xP;
      p35 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      p36 = prom<V +>{
        wid17 = ld wid;
        wid18 = force? wid17;
        checkMissing(wid18);
        r139 = `+`(<missing>, wid18);
        staplewex4 = ld staplewex;
        staplewex5 = force? staplewex4;
        checkMissing(staplewex5);
        c58 = `is.object`(staplewex5);
        if c58 then L1() else L2(r139, staplewex5);
      L0(r143, dx71):
        r145 = `*`(r143, dx71);
        return r145;
      L1():
        dr62 = tryDispatchBuiltin.1("[", staplewex5);
        dc31 = getTryDispatchBuiltinDispatched(dr62);
        if dc31 then L3() else L2(r139, dr62);
      L2(r141, staplewex7):
        i25 = ld i;
        i26 = force? i25;
        __31 = ldf `[` in base;
        r144 = dyn __31(staplewex7, i26);
        goto L0(r141, r144);
      L3():
        dx70 = getTryDispatchBuiltinValue(dr62);
        goto L0(r139, dx70);
      };
      r147 = dyn xP5(p35, p36);
      rep_int3 = ldf `rep.int` in base;
      r148 = dyn rep_int3(r147, 2.0);
      goto L0(r148);
    L2():
      r136 = dyn base13(<lang xP(x, `*`(`+`(wid), `[`(staplewex, i)))>, 2.0);
      goto L0(r136);
    };
    p38 = prom<V +>{
      stats73 = ld stats;
      stats74 = force? stats73;
      checkMissing(stats74);
      c59 = `is.object`(stats74);
      if c59 then L2() else L3(stats74);
    L0(dx73):
      return dx73;
    L2():
      dr64 = tryDispatchBuiltin.1("[", stats74);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L4() else L3(dr64);
    L3(stats76):
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L5() else L6();
    L1(stats79, r151):
      __32 = ldf `[` in base;
      r153 = dyn __32(stats79, r151);
      goto L0(r153);
    L4():
      dx72 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx72);
    L5():
      c60 = ldf c in base;
      r152 = dyn c60(1.0, 5.0);
      goto L1(stats76, r152);
    L6():
      r150 = dyn base14(1.0, 5.0);
      goto L1(stats76, r150);
    };
    p39 = prom<V +>{
      staplelty = ld staplelty;
      staplelty1 = force? staplelty;
      checkMissing(staplelty1);
      c61 = `is.object`(staplelty1);
      if c61 then L1() else L2(staplelty1);
    L0(dx75):
      return dx75;
    L1():
      dr66 = tryDispatchBuiltin.1("[", staplelty1);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(staplelty3):
      i27 = ld i;
      i28 = force? i27;
      __33 = ldf `[` in base;
      r155 = dyn __33(staplelty3, i28);
      goto L0(r155);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx74);
    };
    p40 = prom<V +>{
      staplelwd = ld staplelwd;
      staplelwd1 = force? staplelwd;
      checkMissing(staplelwd1);
      c62 = `is.object`(staplelwd1);
      if c62 then L1() else L2(staplelwd1);
    L0(dx77):
      return dx77;
    L1():
      dr68 = tryDispatchBuiltin.1("[", staplelwd1);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(staplelwd3):
      i29 = ld i;
      i30 = force? i29;
      __34 = ldf `[` in base;
      r157 = dyn __34(staplelwd3, i30);
      goto L0(r157);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx76);
    };
    p41 = prom<V +>{
      staplecol = ld staplecol;
      staplecol1 = force? staplecol;
      checkMissing(staplecol1);
      c63 = `is.object`(staplecol1);
      if c63 then L1() else L2(staplecol1);
    L0(dx79):
      return dx79;
    L1():
      dr70 = tryDispatchBuiltin.1("[", staplecol1);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(staplecol3):
      i31 = ld i;
      i32 = force? i31;
      __35 = ldf `[` in base;
      r159 = dyn __35(staplecol3, i32);
      goto L0(r159);
    L3():
      dx78 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx78);
    };
    r161 = dyn xysegments2[, , , , lty, lwd, col](p33, p34, p37, p38, p39, p40, p41);
    check L130() else D38();
  D38():
    deopt 198 [r161];
  L14(dx21):
    conf13 = ld conf;
    check L82() else D15();
  L79():
    dr12 = tryDispatchBuiltin.1("[", stats19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L81() else L80(dr12);
  L80(stats21):
    __6 = ldf `[` in base;
    r29 = dyn __6(stats21, 3);
    goto L14(r29);
  L130():
    xypolygon1 = ldf xypolygon;
    check L131() else D39();
  D15():
    deopt 73 [conf13];
  D39():
    deopt 200 [];
  L81():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L14(dx20);
  L82():
    conf14 = force? conf13;
    checkMissing(conf14);
    c26 = `is.object`(conf14);
    if c26 then L83() else L84(conf14);
  L131():
    p42 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p43 = prom<V +>{
      yy2 = ld yy;
      yy3 = force? yy2;
      checkMissing(yy3);
      return yy3;
    };
    p44 = prom<V +>{
      boxlty = ld boxlty;
      boxlty1 = force? boxlty;
      checkMissing(boxlty1);
      c64 = `is.object`(boxlty1);
      if c64 then L1() else L2(boxlty1);
    L0(dx81):
      return dx81;
    L1():
      dr72 = tryDispatchBuiltin.1("[", boxlty1);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L3() else L2(dr72);
    L2(boxlty3):
      i33 = ld i;
      i34 = force? i33;
      __36 = ldf `[` in base;
      r164 = dyn __36(boxlty3, i34);
      goto L0(r164);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr72);
      goto L0(dx80);
    };
    p45 = prom<V +>{
      boxlwd = ld boxlwd;
      boxlwd1 = force? boxlwd;
      checkMissing(boxlwd1);
      c65 = `is.object`(boxlwd1);
      if c65 then L1() else L2(boxlwd1);
    L0(dx83):
      return dx83;
    L1():
      dr74 = tryDispatchBuiltin.1("[", boxlwd1);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(boxlwd3):
      i35 = ld i;
      i36 = force? i35;
      __37 = ldf `[` in base;
      r166 = dyn __37(boxlwd3, i36);
      goto L0(r166);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx82);
    };
    p46 = prom<V +>{
      boxcol = ld boxcol;
      boxcol1 = force? boxcol;
      checkMissing(boxcol1);
      c66 = `is.object`(boxcol1);
      if c66 then L1() else L2(boxcol1);
    L0(dx85):
      return dx85;
    L1():
      dr76 = tryDispatchBuiltin.1("[", boxcol1);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(boxcol3):
      i37 = ld i;
      i38 = force? i37;
      __38 = ldf `[` in base;
      r168 = dyn __38(boxcol3, i38);
      goto L0(r168);
    L3():
      dx84 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx84);
    };
    r170 = dyn xypolygon1[, , lty, lwd, border](p42, p43, p44, p45, p46);
    check L132() else D40();
  D40():
    deopt 209 [r170];
  L15(dx23):
    stats22 = ld stats;
    check L86() else D16();
  L83():
    dr14 = tryDispatchBuiltin.1("[", conf14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L85() else L84(dr14);
  L84(conf16):
    __7 = ldf `[` in base;
    r30 = dyn __7(conf16, 2);
    goto L15(r30);
  L132():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L133() else L134();
  D16():
    deopt 78 [stats22];
  L26(r172):
    st nout = r172;
    c67 = `as.logical`(r172);
    if c67 then L137() else L27();
  L85():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L15(dx22);
  L86():
    stats23 = force? stats22;
    checkMissing(stats23);
    c27 = `is.object`(stats23);
    if c27 then L87() else L88(stats23);
  L133():
    out1 = ld out;
    check L135() else D41();
  L134():
    r171 = dyn base15(<sym out>);
    goto L26(r171);
  D41():
    deopt 212 [out1];
  L16(dx25):
    conf17 = ld conf;
    check L93() else D18();
  L27():
    goto L28();
  L28():
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L143() else L144();
  L87():
    dr16 = tryDispatchBuiltin.1("[", stats23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L89() else L88(dr16);
  L88(stats25):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L90() else L91();
  L135():
    out2 = force? out1;
    checkMissing(out2);
    length = ldf length in base;
    r173 = dyn length(out2);
    check L136() else D42();
  L137():
    xysegments3 = ldf xysegments;
    check L138() else D43();
  D18():
    deopt 87 [conf17];
  D42():
    deopt 215 [r173];
  D43():
    deopt 218 [];
  L17(stats28, r32):
    __8 = ldf `[` in base;
    r34 = dyn __8(stats28, r32);
    goto L16(r34);
  L29(r209):
    c76 = `as.logical`(r209);
    if c76 then L150() else L31();
  L89():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L16(dx24);
  L90():
    c28 = ldf c in base;
    r33 = dyn c28(4.0, 4.0);
    check L92() else D17();
  L91():
    r31 = dyn base4(4.0, 4.0);
    goto L17(stats25, r31);
  L93():
    conf18 = force? conf17;
    checkMissing(conf18);
    c29 = `is.object`(conf18);
    if c29 then L94() else L95(conf18);
  L136():
    goto L26(r173);
  L138():
    p47 = prom<V +>{
      sym16 = ldf rep;
      base16 = ldf rep in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r175):
      return r175;
    L1():
      rep = ldf rep in base;
      r176 = dyn rep(<lang `-`(x, `*`(wid, outwex))>, <sym nout>);
      goto L0(r176);
    L2():
      r174 = dyn base16(<lang `-`(x, `*`(wid, outwex))>, <sym nout>);
      goto L0(r174);
    };
    p48 = prom<V +>{
      out3 = ld out;
      out4 = force? out3;
      checkMissing(out4);
      return out4;
    };
    p49 = prom<V +>{
      sym17 = ldf rep;
      base17 = ldf rep in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r180):
      return r180;
    L1():
      rep1 = ldf rep in base;
      r181 = dyn rep1(<lang `+`(x, `*`(wid, outwex))>, <sym nout>);
      goto L0(r181);
    L2():
      r179 = dyn base17(<lang `+`(x, `*`(wid, outwex))>, <sym nout>);
      goto L0(r179);
    };
    p50 = prom<V +>{
      out5 = ld out;
      out6 = force? out5;
      checkMissing(out6);
      return out6;
    };
    p51 = prom<V +>{
      outlty = ld outlty;
      outlty1 = force? outlty;
      checkMissing(outlty1);
      c68 = `is.object`(outlty1);
      if c68 then L1() else L2(outlty1);
    L0(dx87):
      return dx87;
    L1():
      dr78 = tryDispatchBuiltin.1("[", outlty1);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L3() else L2(dr78);
    L2(outlty3):
      i39 = ld i;
      i40 = force? i39;
      __39 = ldf `[` in base;
      r184 = dyn __39(outlty3, i40);
      goto L0(r184);
    L3():
      dx86 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx86);
    };
    p52 = prom<V +>{
      outlwd = ld outlwd;
      outlwd1 = force? outlwd;
      checkMissing(outlwd1);
      c69 = `is.object`(outlwd1);
      if c69 then L1() else L2(outlwd1);
    L0(dx89):
      return dx89;
    L1():
      dr80 = tryDispatchBuiltin.1("[", outlwd1);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L3() else L2(dr80);
    L2(outlwd3):
      i41 = ld i;
      i42 = force? i41;
      __40 = ldf `[` in base;
      r186 = dyn __40(outlwd3, i42);
      goto L0(r186);
    L3():
      dx88 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx88);
    };
    p53 = prom<V +>{
      outcol = ld outcol;
      outcol1 = force? outcol;
      checkMissing(outcol1);
      c70 = `is.object`(outcol1);
      if c70 then L1() else L2(outcol1);
    L0(dx91):
      return dx91;
    L1():
      dr82 = tryDispatchBuiltin.1("[", outcol1);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(outcol3):
      i43 = ld i;
      i44 = force? i43;
      __41 = ldf `[` in base;
      r188 = dyn __41(outcol3, i44);
      goto L0(r188);
    L3():
      dx90 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx90);
    };
    r190 = dyn xysegments3[, , , , lty, lwd, col](p47, p48, p49, p50, p51, p52, p53);
    check L139() else D44();
  L143():
    sym20 = ldf `is.finite`;
    base20 = ldf `is.finite` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L145() else L146();
  L144():
    r208 = dyn base19(<lang `<-`(inf, `!`(is.finite(out)))>);
    goto L29(r208);
  D17():
    deopt 85 [stats25, r33];
  D44():
    deopt 229 [r190];
  L18(dx27):
    stats29 = ld stats;
    check L97() else D19();
  L30(r211):
    r213 = `!`(r211);
    st inf = r213;
    any = ldf any in base;
    r214 = dyn any(r213);
    check L149() else D49();
  L31():
    goto L32(NULL);
  L32(r234):
    goto L33();
  L92():
    goto L17(stats25, r33);
  L94():
    dr18 = tryDispatchBuiltin.1("[", conf18);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L96() else L95(dr18);
  L95(conf20):
    __9 = ldf `[` in base;
    r35 = dyn __9(conf20, 2);
    goto L18(r35);
  L139():
    xypoints1 = ldf xypoints;
    check L140() else D45();
  L145():
    out9 = ld out;
    check L147() else D47();
  L146():
    r210 = dyn base20(<sym out>);
    goto L30(r210);
  L150():
    warning = ldf warning;
    check L151() else D50();
  D19():
    deopt 92 [stats29];
  D45():
    deopt 231 [];
  D47():
    deopt 251 [out9];
  D49():
    deopt 258 [r214];
  D50():
    deopt 260 [];
  L96():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L18(dx26);
  L97():
    stats30 = force? stats29;
    checkMissing(stats30);
    c30 = `is.object`(stats30);
    if c30 then L98() else L99(stats30);
  L140():
    p54 = prom<V +>{
      sym18 = ldf `rep.int`;
      base18 = ldf `rep.int` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r192):
      return r192;
    L1():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      nout = ld nout;
      nout1 = force? nout;
      checkMissing(nout1);
      rep_int4 = ldf `rep.int` in base;
      r193 = dyn rep_int4(x20, nout1);
      goto L0(r193);
    L2():
      r191 = dyn base18(<sym x>, <sym nout>);
      goto L0(r191);
    };
    p55 = prom<V +>{
      out7 = ld out;
      out8 = force? out7;
      checkMissing(out8);
      return out8;
    };
    p56 = prom<V +>{
      outpch = ld outpch;
      outpch1 = force? outpch;
      checkMissing(outpch1);
      c71 = `is.object`(outpch1);
      if c71 then L1() else L2(outpch1);
    L0(dx93):
      return dx93;
    L1():
      dr84 = tryDispatchBuiltin.1("[", outpch1);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(outpch3):
      i45 = ld i;
      i46 = force? i45;
      __42 = ldf `[` in base;
      r196 = dyn __42(outpch3, i46);
      goto L0(r196);
    L3():
      dx92 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx92);
    };
    p57 = prom<V +>{
      outlwd4 = ld outlwd;
      outlwd5 = force? outlwd4;
      checkMissing(outlwd5);
      c72 = `is.object`(outlwd5);
      if c72 then L1() else L2(outlwd5);
    L0(dx95):
      return dx95;
    L1():
      dr86 = tryDispatchBuiltin.1("[", outlwd5);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(outlwd7):
      i47 = ld i;
      i48 = force? i47;
      __43 = ldf `[` in base;
      r198 = dyn __43(outlwd7, i48);
      goto L0(r198);
    L3():
      dx94 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx94);
    };
    p58 = prom<V +>{
      outcex = ld outcex;
      outcex1 = force? outcex;
      checkMissing(outcex1);
      c73 = `is.object`(outcex1);
      if c73 then L1() else L2(outcex1);
    L0(dx97):
      return dx97;
    L1():
      dr88 = tryDispatchBuiltin.1("[", outcex1);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(outcex3):
      i49 = ld i;
      i50 = force? i49;
      __44 = ldf `[` in base;
      r200 = dyn __44(outcex3, i50);
      goto L0(r200);
    L3():
      dx96 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx96);
    };
    p59 = prom<V +>{
      outcol4 = ld outcol;
      outcol5 = force? outcol4;
      checkMissing(outcol5);
      c74 = `is.object`(outcol5);
      if c74 then L1() else L2(outcol5);
    L0(dx99):
      return dx99;
    L1():
      dr90 = tryDispatchBuiltin.1("[", outcol5);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(outcol7):
      i51 = ld i;
      i52 = force? i51;
      __45 = ldf `[` in base;
      r202 = dyn __45(outcol7, i52);
      goto L0(r202);
    L3():
      dx98 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx98);
    };
    p60 = prom<V +>{
      outbg = ld outbg;
      outbg1 = force? outbg;
      checkMissing(outbg1);
      c75 = `is.object`(outbg1);
      if c75 then L1() else L2(outbg1);
    L0(dx101):
      return dx101;
    L1():
      dr92 = tryDispatchBuiltin.1("[", outbg1);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L3() else L2(dr92);
    L2(outbg3):
      i53 = ld i;
      i54 = force? i53;
      __46 = ldf `[` in base;
      r204 = dyn __46(outbg3, i54);
      goto L0(r204);
    L3():
      dx100 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx100);
    };
    r206 = dyn xypoints1[, , pch, lwd, cex, col, bg](p54, p55, p56, p57, p58, p59, p60);
    check L141() else D46();
  L147():
    out10 = force? out9;
    checkMissing(out10);
    is_finite = ldf `is.finite` in base;
    r212 = dyn is_finite(out10);
    check L148() else D48();
  L149():
    goto L29(r214);
  L151():
    p68 = prom<V +>{
      sprintf = ldf sprintf;
      p63 = prom<V +>{
        ngettext = ldf ngettext;
        p62 = prom<V +>{
          sym21 = ldf length;
          base21 = ldf length in base;
          guard21 = `==`.4(sym21, base21);
          if guard21 then L1() else L2();
        L0(r216):
          return r216;
        L1():
          unique = ldf unique;
          p61 = prom<V +>{
            out11 = ld out;
            out12 = force? out11;
            checkMissing(out12);
            c77 = `is.object`(out12);
            if c77 then L1() else L2(out12);
          L0(dx103):
            return dx103;
          L1():
            dr94 = tryDispatchBuiltin.1("[", out12);
            dc47 = getTryDispatchBuiltinDispatched(dr94);
            if dc47 then L3() else L2(dr94);
          L2(out14):
            inf = ld inf;
            inf1 = force? inf;
            __47 = ldf `[` in base;
            r217 = dyn __47(out14, inf1);
            goto L0(r217);
          L3():
            dx102 = getTryDispatchBuiltinValue(dr94);
            goto L0(dx102);
          };
          r219 = dyn unique(p61);
          length1 = ldf length in base;
          r220 = dyn length1(r219);
          goto L0(r220);
        L2():
          r215 = dyn base21(<lang unique(`[`(out, inf))>);
          goto L0(r215);
        };
        r222 = dyn ngettext(p62, "Outlier (%s) in boxplot %d is not drawn", "Outliers (%s) in boxplot %d are not drawn");
        return r222;
      };
      p66 = prom<V +>{
        paste = ldf paste;
        p65 = prom<V +>{
          unique1 = ldf unique;
          p64 = prom<V +>{
            out15 = ld out;
            out16 = force? out15;
            checkMissing(out16);
            c78 = `is.object`(out16);
            if c78 then L1() else L2(out16);
          L0(dx105):
            return dx105;
          L1():
            dr96 = tryDispatchBuiltin.1("[", out16);
            dc48 = getTryDispatchBuiltinDispatched(dr96);
            if dc48 then L3() else L2(dr96);
          L2(out18):
            inf2 = ld inf;
            inf3 = force? inf2;
            __48 = ldf `[` in base;
            r224 = dyn __48(out18, inf3);
            goto L0(r224);
          L3():
            dx104 = getTryDispatchBuiltinValue(dr96);
            goto L0(dx104);
          };
          r226 = dyn unique1(p64);
          return r226;
        };
        r228 = dyn paste[, collapse](p65, ", ");
        return r228;
      };
      p67 = prom<V +>{
        i55 = ld i;
        i56 = force? i55;
        checkMissing(i56);
        return i56;
      };
      r231 = dyn sprintf(p63, p66, p67);
      return r231;
    };
    r233 = dyn warning[, domain](p68, NA_LGL);
    check L152() else D51();
  D46():
    deopt 244 [r206];
  D48():
    deopt 254 [r212];
  D51():
    deopt 264 [r233];
  L19(dx29):
    conf21 = ld conf;
    check L101() else D20();
  L98():
    dr20 = tryDispatchBuiltin.1("[", stats30);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L100() else L99(dr20);
  L99(stats32):
    __10 = ldf `[` in base;
    r36 = dyn __10(stats32, 3);
    goto L19(r36);
  L141():
    goto L28();
  L148():
    goto L30(r212);
  L152():
    goto L32(r233);
  D20():
    deopt 97 [conf21];
  L100():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L19(dx28);
  L101():
    conf22 = force? conf21;
    checkMissing(conf22);
    c31 = `is.object`(conf22);
    if c31 then L102() else L103(conf22);
  L20(dx31):
    c32 = ldf c in base;
    r38 = dyn c32(dx17, dx19, dx21, dx23, dx25, dx27, dx29, dx31);
    check L105() else D21();
  L102():
    dr22 = tryDispatchBuiltin.1("[", conf22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L104() else L103(dr22);
  L103(conf24):
    __11 = ldf `[` in base;
    r37 = dyn __11(conf24, 1);
    goto L20(r37);
  D21():
    deopt 103 [r38];
  L104():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L20(dx30);
  L105():
    goto L10(r38);
  }
}
fun inner1152665323(x, w) {
  (reg x:*, reg w:*) -+> V { var x:*, var w:*, reg x1:*, reg x2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x5:V, reg r1:V, reg w1:*, reg w2:V, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    st w = w;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(x5, r1):
    r3 = `*`(x5, r1);
    popenv;
    return r3;
  L2():
    w1 = ld w;
    check L4() else D1();
  L3():
    r = dyn base(<sym w>);
    goto L0(x2, r);
  D1():
    deopt 2 [x2, w1];
  L4():
    w2 = force? w1;
    checkMissing(w2);
    r2 = exp(w2);
    goto L0(x2, r2);
  }
}
fun inner844486739(p, def1, def2) {
  (reg p:*, reg def1:*, reg def2:*) -+> V { var p:*, var def1:*, var def2:*, reg def2_isMissing:L, reg def2_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V |
    mkenv;
    st p = p;
    st def1 = def1;
    def2_isMissing = missing.0(def2);
    if def2_isMissing then L0(NULL) else L0(def2);
  L0(def2_orDefault):
    st def2 = def2_orDefault;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    rep = ldf rep in base;
    r2 = dyn rep(<lang if(length(p), p, if(length(def1), def1, def2))>, <sym n>);
    goto L1(r2);
  L3():
    r = dyn base[, `length.out`](<lang if(length(p), p, if(length(def1), def1, def2))>, <sym n>);
    goto L1(r);
  }
}
fun inner29990787(sym) {
  (reg sym:*) -+> V { var sym:*, reg pars:*, reg pars1:V, reg c:L, reg pars3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:*, reg sym2:V, reg __:cls, reg r:V |
    mkenv;
    st sym = sym;
    pars = ld pars;
    check L1() else D0();
  D0():
    deopt 0 [pars];
  L1():
    pars1 = force? pars;
    checkMissing(pars1);
    c = `is.object`(pars1);
    if c then L2() else L3(pars1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[[", pars1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(pars3):
    sym1 = ld sym;
    check L5() else D1();
  D1():
    deopt 2 [pars3, sym1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    sym2 = force? sym1;
    __ = ldf `[[` in base;
    r = dyn __(pars1, sym2, TRUE);
    goto L0(r);
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg points:cls, reg y1:*, reg y2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    points = ldf points;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r2 = dyn points[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2645199738(x0, y0, x1, y1, `...`) {
  (reg x0:*, reg y0:*, reg x1:*, reg y1:*, reg ddd:dots) -+> V { var x0:*, var y0:*, var x1:*, var y1:*, var `...`:dots?, reg segments:cls, reg y2:*, reg y3:V, reg p:p(V +), reg x2:*, reg x3:V, reg p1:p(V +), reg y4:*, reg y5:V, reg p2:p(V +), reg x4:*, reg x5:V, reg p3:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st x0 = x0;
    st y0 = y0;
    st x1 = x1;
    st y1 = y1;
    st `...` = ddd;
    segments = ldf segments;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      y2 = ld y0;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p1 = prom<V +>{
      x2 = ld x0;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p2 = prom<V +>{
      y4 = ld y1;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p3 = prom<V +>{
      x4 = ld x1;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    ddd1 = ld `...`;
    r4 = dyn segments[, , , , `...`](p, p1, p2, p3, ddd1);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}