fun main() {
  () -+> V { reg r:cls, reg boxplot:cls, reg __:cls, reg r1:V, reg p:p(V +), reg InsectSprays:*, reg InsectSprays1:V, reg p1:p(V +), reg r4:V, reg boxplot1:cls, reg __1:cls, reg r5:V, reg p2:p(V +), reg InsectSprays2:*, reg InsectSprays3:V, reg p3:p(V +), reg r8:V, reg boxplot2:cls, reg __2:cls, reg r9:V, reg p4:p(V +), reg OrchardSprays:*, reg OrchardSprays1:V, reg p5:p(V +), reg r12:V, reg boxplot3:cls, reg __3:cls, reg r13:V, reg p6:p(V +), reg OrchardSprays2:*, reg OrchardSprays3:V, reg p7:p(V +), reg r16:V, reg boxplot4:cls, reg __4:cls, reg r17:V, reg p8:p(V +), reg OrchardSprays4:*, reg OrchardSprays5:V, reg p9:p(V +), reg r20:V, reg title:cls, reg r21:V, reg tapply:cls, reg OrchardSprays6:*, reg OrchardSprays7:V, reg c:L, reg OrchardSprays9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg p10:p(V +), reg OrchardSprays10:*, reg OrchardSprays11:V, reg c1:L, reg OrchardSprays13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r24:V, reg p11:p(V +), reg mean:*, reg mean1:V, reg p12:p(V +), reg r27:V, reg tapply1:cls, reg OrchardSprays14:*, reg OrchardSprays15:V, reg c2:L, reg OrchardSprays17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r28:V, reg p13:p(V +), reg OrchardSprays18:*, reg OrchardSprays19:V, reg c3:L, reg OrchardSprays21:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r30:V, reg p14:p(V +), reg sd:*, reg sd1:V, reg p15:p(V +), reg r33:V, reg seq:cls, reg rb:*, reg rb1:V, reg c4:L, reg rb3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r34:V, reg p16:p(V +), reg r36:V, reg r37:V, reg points:cls, reg xi:*, reg xi1:V, reg p17:p(V +), reg mn_t:*, reg mn_t1:V, reg p18:p(V +), reg r40:V, reg arrows:cls, reg xi2:*, reg xi3:V, reg p19:p(V +), reg mn_t2:*, reg mn_t3:V, reg sd_t:*, reg sd_t1:V, reg r42:V, reg p20:p(V +), reg xi4:*, reg xi5:V, reg p21:p(V +), reg mn_t4:*, reg mn_t5:V, reg sd_t2:*, reg sd_t3:V, reg r45:V, reg p22:p(V +), reg r47:V, reg cbind:cls, reg r48:V, reg r49:V, reg p23:p(V +), reg rnorm:cls, reg r51:V, reg p24:p(V +), reg rt:cls, reg r53:V, reg p25:p(V +), reg rgamma:cls, reg r55:V, reg p26:p(V +), reg r57:V, reg boxplot5:cls, reg mat:*, reg mat1:V, reg p27:p(V +), reg r59:V, reg as_data_frame:cls, reg mat2:*, reg mat3:V, reg p28:p(V +), reg r61:V, reg par:cls, reg r62:V, reg boxplot6:cls, reg df_:*, reg df_1:V, reg p29:p(V +), reg r64:V, reg boxplot7:cls, reg __5:cls, reg r65:V, reg p30:p(V +), reg ToothGrowth:*, reg ToothGrowth1:V, reg p31:p(V +), reg p32:p(V +), reg supp:*, reg supp1:V, reg r69:V, reg p33:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r71:V, reg r72:V, reg c5:cls, reg r73:V, reg p34:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r75:V, reg r76:V, reg c6:cls, reg r77:V, reg p35:p(V +), reg r79:V, reg boxplot8:cls, reg __6:cls, reg r80:V, reg p36:p(V +), reg ToothGrowth2:*, reg ToothGrowth3:V, reg p37:p(V +), reg p38:p(V +), reg supp2:*, reg supp3:V, reg r84:V, reg p39:p(V +), reg r86:V, reg legend:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r87:V, reg r88:V, reg c7:cls, reg r89:V, reg p40:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r91:V, reg r92:V, reg c8:cls, reg r93:V, reg p41:p(V +), reg r95:V, reg boxplot9:cls, reg __7:cls, reg r96:V, reg p42:p(V +), reg ToothGrowth4:*, reg ToothGrowth5:V, reg p43:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r99:V, reg r100:V, reg c9:cls, reg r101:V, reg p44:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r103:V, reg r104:V, reg c10:cls, reg r105:V, reg p45:p(V +), reg r107:V |
    mkenv;
    r = clos `inner-103057629`;
    st boxplot = r;
    boxplot = ldf boxplot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym count>, <sym spray>);
      return r1;
    };
    p1 = prom<V +>{
      InsectSprays = ld InsectSprays;
      InsectSprays1 = force? InsectSprays;
      checkMissing(InsectSprays1);
      return InsectSprays1;
    };
    r4 = dyn boxplot[, data, col](p, p1, "lightgray");
    check L1() else D1();
  D1():
    deopt 10 [r4];
  L1():
    boxplot1 = ldf boxplot;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p2 = prom<V +>{
      __1 = ldf `~` in base;
      r5 = dyn __1(<sym count>, <sym spray>);
      return r5;
    };
    p3 = prom<V +>{
      InsectSprays2 = ld InsectSprays;
      InsectSprays3 = force? InsectSprays2;
      checkMissing(InsectSprays3);
      return InsectSprays3;
    };
    r8 = dyn boxplot1[, data, notch, add, col](p2, p3, TRUE, TRUE, "blue");
    check L3() else D3();
  D3():
    deopt 22 [r8];
  L3():
    boxplot2 = ldf boxplot;
    check L4() else D4();
  D4():
    deopt 24 [];
  L4():
    p4 = prom<V +>{
      __2 = ldf `~` in base;
      r9 = dyn __2(<sym decrease>, <sym treatment>);
      return r9;
    };
    p5 = prom<V +>{
      OrchardSprays = ld OrchardSprays;
      OrchardSprays1 = force? OrchardSprays;
      checkMissing(OrchardSprays1);
      return OrchardSprays1;
    };
    r12 = dyn boxplot2[, data, col, log](p4, p5, "bisque", "y");
    check L5() else D5();
  D5():
    deopt 32 [r12];
  L5():
    boxplot3 = ldf boxplot;
    check L6() else D6();
  D6():
    deopt 34 [];
  L6():
    p6 = prom<V +>{
      __3 = ldf `~` in base;
      r13 = dyn __3(<sym decrease>, <sym treatment>);
      return r13;
    };
    p7 = prom<V +>{
      OrchardSprays2 = ld OrchardSprays;
      OrchardSprays3 = force? OrchardSprays2;
      checkMissing(OrchardSprays3);
      return OrchardSprays3;
    };
    r16 = dyn boxplot3[, data, col, log, horizontal](p6, p7, "bisque", "x", TRUE);
    check L7() else D7();
  D7():
    deopt 44 [r16];
  L7():
    boxplot4 = ldf boxplot;
    check L8() else D8();
  D8():
    deopt 46 [];
  L8():
    p8 = prom<V +>{
      __4 = ldf `~` in base;
      r17 = dyn __4(<sym decrease>, <sym treatment>);
      return r17;
    };
    p9 = prom<V +>{
      OrchardSprays4 = ld OrchardSprays;
      OrchardSprays5 = force? OrchardSprays4;
      checkMissing(OrchardSprays5);
      return OrchardSprays5;
    };
    r20 = dyn boxplot4[, data, col](p8, p9, "bisque");
    check L9() else D9();
  D9():
    deopt 52 [r20];
  L9():
    st rb = r20;
    title = ldf title;
    check L10() else D10();
  D10():
    deopt 55 [];
  L10():
    r21 = dyn title("Comparing boxplot()s and non-robust mean +/- SD");
    check L11() else D11();
  D11():
    deopt 57 [r21];
  L11():
    tapply = ldf tapply;
    check L12() else D12();
  D12():
    deopt 59 [];
  L12():
    p10 = prom<V +>{
      OrchardSprays6 = ld OrchardSprays;
      OrchardSprays7 = force? OrchardSprays6;
      checkMissing(OrchardSprays7);
      c = `is.object`(OrchardSprays7);
      if c then L1() else L2(OrchardSprays7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", OrchardSprays7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(OrchardSprays9):
      r22 = `$`(OrchardSprays9, <sym decrease>);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p11 = prom<V +>{
      OrchardSprays10 = ld OrchardSprays;
      OrchardSprays11 = force? OrchardSprays10;
      checkMissing(OrchardSprays11);
      c1 = `is.object`(OrchardSprays11);
      if c1 then L1() else L2(OrchardSprays11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", OrchardSprays11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(OrchardSprays13):
      r24 = `$`(OrchardSprays13, <sym treatment>);
      goto L0(r24);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p12 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r27 = dyn tapply(p10, p11, p12);
    check L13() else D13();
  D13():
    deopt 63 [r27];
  L13():
    st `mn.t` = r27;
    tapply1 = ldf tapply;
    check L14() else D14();
  D14():
    deopt 66 [];
  L14():
    p13 = prom<V +>{
      OrchardSprays14 = ld OrchardSprays;
      OrchardSprays15 = force? OrchardSprays14;
      checkMissing(OrchardSprays15);
      c2 = `is.object`(OrchardSprays15);
      if c2 then L1() else L2(OrchardSprays15);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", OrchardSprays15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(OrchardSprays17):
      r28 = `$`(OrchardSprays17, <sym decrease>);
      goto L0(r28);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p14 = prom<V +>{
      OrchardSprays18 = ld OrchardSprays;
      OrchardSprays19 = force? OrchardSprays18;
      checkMissing(OrchardSprays19);
      c3 = `is.object`(OrchardSprays19);
      if c3 then L1() else L2(OrchardSprays19);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", OrchardSprays19);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(OrchardSprays21):
      r30 = `$`(OrchardSprays21, <sym treatment>);
      goto L0(r30);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p15 = prom<V +>{
      sd = ld sd;
      sd1 = force? sd;
      checkMissing(sd1);
      return sd1;
    };
    r33 = dyn tapply1(p13, p14, p15);
    check L15() else D15();
  D15():
    deopt 70 [r33];
  L15():
    st `sd.t` = r33;
    seq = ldf seq;
    check L16() else D16();
  D16():
    deopt 74 [0.3];
  L16():
    p16 = prom<V +>{
      rb = ld rb;
      rb1 = force? rb;
      checkMissing(rb1);
      c4 = `is.object`(rb1);
      if c4 then L1() else L2(rb1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", rb1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(rb3):
      r34 = `$`(rb3, <sym n>);
      goto L0(r34);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r36 = dyn seq(p16);
    check L17() else D17();
  D17():
    deopt 76 [0.3, r36];
  L17():
    r37 = `+`(0.3, r36);
    st xi = r37;
    points = ldf points;
    check L18() else D18();
  D18():
    deopt 80 [];
  L18():
    p17 = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      return xi1;
    };
    p18 = prom<V +>{
      mn_t = ld `mn.t`;
      mn_t1 = force? mn_t;
      checkMissing(mn_t1);
      return mn_t1;
    };
    r40 = dyn points[, , col, pch](p17, p18, "orange", 18.0);
    check L19() else D19();
  D19():
    deopt 87 [r40];
  L19():
    arrows = ldf arrows;
    check L20() else D20();
  D20():
    deopt 89 [];
  L20():
    p19 = prom<V +>{
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      return xi3;
    };
    p20 = prom<V +>{
      mn_t2 = ld `mn.t`;
      mn_t3 = force? mn_t2;
      checkMissing(mn_t3);
      sd_t = ld `sd.t`;
      sd_t1 = force? sd_t;
      checkMissing(sd_t1);
      r42 = `-`(mn_t3, sd_t1);
      return r42;
    };
    p21 = prom<V +>{
      xi4 = ld xi;
      xi5 = force? xi4;
      checkMissing(xi5);
      return xi5;
    };
    p22 = prom<V +>{
      mn_t4 = ld `mn.t`;
      mn_t5 = force? mn_t4;
      checkMissing(mn_t5);
      sd_t2 = ld `sd.t`;
      sd_t3 = force? sd_t2;
      checkMissing(sd_t3);
      r45 = `+`(mn_t5, sd_t3);
      return r45;
    };
    r47 = dyn arrows[, , , , code, col, angle, length](p19, p20, p21, p22, 3.0, "pink", 75.0, 0.1);
    check L21() else D21();
  D21():
    deopt 102 [r47];
  L21():
    cbind = ldf cbind;
    check L22() else D22();
  D22():
    deopt 104 [];
  L22():
    p23 = prom<V +>{
      r48 = `:`(1.0, 100.0);
      r49 = `/`(r48, 21.0);
      return r49;
    };
    p24 = prom<V +>{
      rnorm = ldf rnorm;
      r51 = dyn rnorm(100.0);
      return r51;
    };
    p25 = prom<V +>{
      rt = ldf rt;
      r53 = dyn rt[, df](100.0, 5.0);
      return r53;
    };
    p26 = prom<V +>{
      rgamma = ldf rgamma;
      r55 = dyn rgamma[, shape](100.0, 2.0);
      return r55;
    };
    r57 = dyn cbind[Uni05, Norm, `5T`, Gam2](p23, p24, p25, p26);
    check L23() else D23();
  D23():
    deopt 113 [r57];
  L23():
    st mat = r57;
    boxplot5 = ldf boxplot;
    check L24() else D24();
  D24():
    deopt 116 [];
  L24():
    p27 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    r59 = dyn boxplot5(p27);
    check L25() else D25();
  D25():
    deopt 118 [r59];
  L25():
    as_data_frame = ldf `as.data.frame`;
    check L26() else D26();
  D26():
    deopt 120 [];
  L26():
    p28 = prom<V +>{
      mat2 = ld mat;
      mat3 = force? mat2;
      checkMissing(mat3);
      return mat3;
    };
    r61 = dyn as_data_frame(p28);
    check L27() else D27();
  D27():
    deopt 122 [r61];
  L27():
    st `df.` = r61;
    par = ldf par;
    check L28() else D28();
  D28():
    deopt 125 [];
  L28():
    r62 = dyn par[las](1.0);
    check L29() else D29();
  D29():
    deopt 128 [r62];
  L29():
    boxplot6 = ldf boxplot;
    check L30() else D30();
  D30():
    deopt 130 [];
  L30():
    p29 = prom<V +>{
      df_ = ld `df.`;
      df_1 = force? df_;
      checkMissing(df_1);
      return df_1;
    };
    r64 = dyn boxplot6[, main, horizontal](p29, "boxplot(*, horizontal = TRUE)", TRUE);
    check L31() else D31();
  D31():
    deopt 136 [r64];
  L31():
    boxplot7 = ldf boxplot;
    check L32() else D32();
  D32():
    deopt 138 [];
  L32():
    p30 = prom<V +>{
      __5 = ldf `~` in base;
      r65 = dyn __5(<sym len>, <sym dose>);
      return r65;
    };
    p31 = prom<V +>{
      ToothGrowth = ld ToothGrowth;
      ToothGrowth1 = force? ToothGrowth;
      checkMissing(ToothGrowth1);
      return ToothGrowth1;
    };
    p32 = prom<V +>{
      return <real 0.8, 1.8, 2.8>;
    };
    p33 = prom<V +>{
      supp = ld supp;
      supp1 = force? supp;
      checkMissing(supp1);
      r69 = `==`(supp1, "VC");
      return r69;
    };
    p34 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r72):
      return r72;
    L1():
      c5 = ldf c in base;
      r73 = dyn c5(0.5, 3.5);
      goto L0(r73);
    L2():
      r71 = dyn base(0.5, 3.5);
      goto L0(r71);
    };
    p35 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      c6 = ldf c in base;
      r77 = dyn c6(0.0, 35.0);
      goto L0(r77);
    L2():
      r75 = dyn base1(0.0, 35.0);
      goto L0(r75);
    };
    r79 = dyn boxplot7[, data, boxwex, at, subset, col, main, xlab, ylab, xlim, ylim, yaxs](p30, p31, 0.25, p32, p33, "yellow", "Guinea Pigs' Tooth Growth", "Vitamin C dose mg", "tooth length", p34, p35, "i");
    check L33() else D33();
  D33():
    deopt 162 [r79];
  L33():
    boxplot8 = ldf boxplot;
    check L34() else D34();
  D34():
    deopt 164 [];
  L34():
    p36 = prom<V +>{
      __6 = ldf `~` in base;
      r80 = dyn __6(<sym len>, <sym dose>);
      return r80;
    };
    p37 = prom<V +>{
      ToothGrowth2 = ld ToothGrowth;
      ToothGrowth3 = force? ToothGrowth2;
      checkMissing(ToothGrowth3);
      return ToothGrowth3;
    };
    p38 = prom<V +>{
      return <real 1.2, 2.2, 3.2>;
    };
    p39 = prom<V +>{
      supp2 = ld supp;
      supp3 = force? supp2;
      checkMissing(supp3);
      r84 = `==`(supp3, "OJ");
      return r84;
    };
    r86 = dyn boxplot8[, data, add, boxwex, at, subset, col](p36, p37, TRUE, 0.25, p38, p39, "orange");
    check L35() else D35();
  D35():
    deopt 178 [r86];
  L35():
    legend = ldf legend;
    check L36() else D36();
  D36():
    deopt 180 [];
  L36():
    p40 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r88):
      return r88;
    L1():
      c7 = ldf c in base;
      r89 = dyn c7("Ascorbic acid", "Orange juice");
      goto L0(r89);
    L2():
      r87 = dyn base2("Ascorbic acid", "Orange juice");
      goto L0(r87);
    };
    p41 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c8 = ldf c in base;
      r93 = dyn c8("yellow", "orange");
      goto L0(r93);
    L2():
      r91 = dyn base3("yellow", "orange");
      goto L0(r91);
    };
    r95 = dyn legend[, , , fill](2.0, 9.0, p40, p41);
    check L37() else D37();
  D37():
    deopt 186 [r95];
  L37():
    boxplot9 = ldf boxplot;
    check L38() else D38();
  D38():
    deopt 188 [];
  L38():
    p42 = prom<V +>{
      __7 = ldf `~` in base;
      r96 = dyn __7(<sym len>, <lang `:`(dose, supp)>);
      return r96;
    };
    p43 = prom<V +>{
      ToothGrowth4 = ld ToothGrowth;
      ToothGrowth5 = force? ToothGrowth4;
      checkMissing(ToothGrowth5);
      return ToothGrowth5;
    };
    p44 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r100):
      return r100;
    L1():
      c9 = ldf c in base;
      r101 = dyn c9("orange", "yellow");
      goto L0(r101);
    L2():
      r99 = dyn base4("orange", "yellow");
      goto L0(r99);
    };
    p45 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      c10 = ldf c in base;
      r105 = dyn c10(0.0, 35.0);
      goto L0(r105);
    L2():
      r103 = dyn base5(0.0, 35.0);
      goto L0(r103);
    };
    r107 = dyn boxplot9[, data, boxwex, col, main, xlab, ylab, sep, `lex.order`, ylim, yaxs](p42, p43, 0.5, p44, "Guinea Pigs' Tooth Growth", "Vitamin C dose mg", "tooth length", ":", TRUE, p45, "i");
    check L39() else D39();
  D39():
    deopt 210 [r107];
  L39():
    popenv;
    return r107;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("boxplot");
    goto L0(r2);
  L2():
    r = dyn base("boxplot");
    goto L0(r);
  }
}