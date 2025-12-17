fun main() {
  () -+> V { reg r:cls, reg aggregate:cls, reg state_x77:*, reg state_x78:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg state_region:*, reg state_region1:V, reg list:cls, reg r4:V, reg p1:p(V +), reg mean:*, reg mean1:V, reg p2:p(V +), reg r7:V, reg aggregate1:cls, reg state_x79:*, reg state_x80:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg state_region2:*, reg state_region3:V, reg state_x81:*, reg state_x82:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg r12:V, reg list1:cls, reg r13:V, reg p4:p(V +), reg mean2:*, reg mean3:V, reg p5:p(V +), reg r16:V, reg data_frame:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg c1:cls, reg r19:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg p7:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg c3:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg c4:cls, reg r31:V, reg aggregate2:cls, reg testDF:*, reg testDF1:V, reg p8:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg by1:*, reg by2:V, reg by3:*, reg by4:V, reg list2:cls, reg r35:V, reg p9:p(V +), reg r37:V, reg factor:cls, reg by5:*, reg by6:V, reg p10:p(V +), reg r39:V, reg factor1:cls, reg by7:*, reg by8:V, reg p11:p(V +), reg r41:V, reg aggregate3:cls, reg testDF2:*, reg testDF3:V, reg p12:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg fby1:*, reg fby2:V, reg fby3:*, reg fby4:V, reg list3:cls, reg r45:V, reg p13:p(V +), reg r47:V, reg aggregate4:cls, reg __1:cls, reg r48:V, reg p14:p(V +), reg chickwts:*, reg chickwts1:V, reg p15:p(V +), reg mean4:*, reg mean5:V, reg p16:p(V +), reg r52:V, reg aggregate5:cls, reg __2:cls, reg r53:V, reg p17:p(V +), reg warpbreaks:*, reg warpbreaks1:V, reg p18:p(V +), reg mean6:*, reg mean7:V, reg p19:p(V +), reg r57:V, reg aggregate6:cls, reg __3:cls, reg r58:V, reg p20:p(V +), reg airquality:*, reg airquality1:V, reg p21:p(V +), reg mean8:*, reg mean9:V, reg p22:p(V +), reg r62:V, reg aggregate7:cls, reg __4:cls, reg r63:V, reg p23:p(V +), reg esoph:*, reg esoph1:V, reg p24:p(V +), reg sum:*, reg sum1:V, reg p25:p(V +), reg r67:V, reg colSums:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg airquality2:*, reg airquality3:V, reg is_na:cls, reg r70:V, reg p26:p(V +), reg r72:V, reg aggregate8:cls, reg __5:cls, reg r73:V, reg p27:p(V +), reg airquality4:*, reg airquality5:V, reg p28:p(V +), reg mean10:*, reg mean11:V, reg p29:p(V +), reg r77:V, reg aggregate9:cls, reg __6:cls, reg r78:V, reg p30:p(V +), reg airquality6:*, reg airquality7:V, reg p31:p(V +), reg mean12:*, reg mean13:V, reg p32:p(V +), reg na_pass:*, reg na_pass1:V, reg p33:p(V +), reg r83:V, reg aggregate10:cls, reg __7:cls, reg r84:V, reg p34:p(V +), reg iris:*, reg iris1:V, reg p35:p(V +), reg mean14:*, reg mean15:V, reg p36:p(V +), reg r88:V, reg aggregate11:cls, reg __8:cls, reg r89:V, reg p37:p(V +), reg ToothGrowth:*, reg ToothGrowth1:V, reg p38:p(V +), reg mean16:*, reg mean17:V, reg p39:p(V +), reg r93:V, reg aggregate12:cls, reg __9:cls, reg r94:V, reg p40:p(V +), reg ToothGrowth2:*, reg ToothGrowth3:V, reg p41:p(V +), reg mean18:*, reg mean19:V, reg p42:p(V +), reg r98:V, reg xtabs:cls, reg __10:cls, reg r99:V, reg p43:p(V +), reg ag:*, reg ag1:V, reg p44:p(V +), reg r102:V, reg aggregate13:cls, reg ToothGrowth4:*, reg ToothGrowth5:V, reg p45:p(V +), reg __11:cls, reg r104:V, reg p46:p(V +), reg mean20:*, reg mean21:V, reg p47:p(V +), reg r107:V, reg aggregate14:cls, reg presidents:*, reg presidents1:V, reg p48:p(V +), reg mean22:*, reg mean23:V, reg p49:p(V +), reg r110:V, reg aggregate15:cls, reg presidents2:*, reg presidents3:V, reg p50:p(V +), reg weighted_mean:*, reg weighted_mean1:V, reg p51:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r113:V, reg r114:V, reg c5:cls, reg r115:V, reg p52:p(V +), reg r117:V |
    mkenv;
    r = clos inner2044426018;
    st aggregate = r;
    aggregate = ldf aggregate;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      state_x77 = ld `state.x77`;
      state_x78 = force? state_x77;
      checkMissing(state_x78);
      return state_x78;
    };
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      state_region = ld `state.region`;
      state_region1 = force? state_region;
      checkMissing(state_region1);
      list = ldf list in base;
      r4 = dyn list(state_region1);
      goto L0(r4);
    L2():
      r2 = dyn base[Region](<sym state.region>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r7 = dyn aggregate(p, p1, p2);
    check L3() else D1();
  D1():
    deopt 8 [r7];
  L3():
    aggregate1 = ldf aggregate;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p3 = prom<V +>{
      state_x79 = ld `state.x77`;
      state_x80 = force? state_x79;
      checkMissing(state_x80);
      return state_x80;
    };
    p4 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r10):
      return r10;
    L2():
      state_region2 = ld `state.region`;
      state_region3 = force? state_region2;
      checkMissing(state_region3);
      state_x81 = ld `state.x77`;
      state_x82 = force? state_x81;
      checkMissing(state_x82);
      c = `is.object`(state_x82);
      if c then L4() else L5();
    L3():
      r9 = dyn base1[Region, Cold](<sym state.region>, <lang `>`(`[`(state.x77, , "Frost"), 130.0)>);
      goto L0(r9);
    L1(dx1):
      r12 = `>`(dx1, 130.0);
      list1 = ldf list in base;
      r13 = dyn list1(state_region3, r12);
      goto L0(r13);
    L4():
      dr = tryDispatchBuiltin.1("[", state_x82);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5();
    L5():
      __ = ldf `[` in base;
      r11 = dyn __(state_x82, <missing>, "Frost");
      goto L1(r11);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p5 = prom<V +>{
      mean2 = ld mean;
      mean3 = force? mean2;
      checkMissing(mean3);
      return mean3;
    };
    r16 = dyn aggregate1(p3, p4, p5);
    check L5() else D3();
  D3():
    deopt 14 [r16];
  L5():
    data_frame = ldf `data.frame`;
    check L6() else D4();
  D4():
    deopt 16 [];
  L6():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c1 = ldf c in base;
      r19 = dyn c1(1.0, 3.0, 5.0, 7.0, 8.0, 3.0, 5.0, NA_LGL, 4.0, 5.0, 7.0, 9.0);
      goto L0(r19);
    L2():
      r17 = dyn base2(1.0, 3.0, 5.0, 7.0, 8.0, 3.0, 5.0, NA_LGL, 4.0, 5.0, 7.0, 9.0);
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
      c2 = ldf c in base;
      r23 = dyn c2(11.0, 33.0, 55.0, 77.0, 88.0, 33.0, 55.0, NA_LGL, 44.0, 55.0, 77.0, 99.0);
      goto L0(r23);
    L2():
      r21 = dyn base3(11.0, 33.0, 55.0, 77.0, 88.0, 33.0, 55.0, NA_LGL, 44.0, 55.0, 77.0, 99.0);
      goto L0(r21);
    };
    r25 = dyn data_frame[v1, v2](p6, p7);
    check L7() else D5();
  D5():
    deopt 21 [r25];
  L7():
    st testDF = r25;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L8() else L9();
  L0(r27):
    st by1 = r27;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L11() else L12();
  L8():
    c3 = ldf c in base;
    r28 = dyn c3("red", "blue", 1.0, 2.0, NA_LGL, "big", 1.0, 2.0, "red", 1.0, NA_LGL, 12.0);
    check L10() else D6();
  L9():
    r26 = dyn base4("red", "blue", 1.0, 2.0, NA_LGL, "big", 1.0, 2.0, "red", 1.0, NA_LGL, 12.0);
    goto L0(r26);
  D6():
    deopt 38 [r28];
  L1(r30):
    st by2 = r30;
    aggregate2 = ldf aggregate;
    check L14() else D8();
  L10():
    goto L0(r28);
  L11():
    c4 = ldf c in base;
    r31 = dyn c4("wet", "dry", 99.0, 95.0, NA_LGL, "damp", 95.0, 99.0, "red", 99.0, NA_LGL, NA_LGL);
    check L13() else D7();
  L12():
    r29 = dyn base5("wet", "dry", 99.0, 95.0, NA_LGL, "damp", 95.0, 99.0, "red", 99.0, NA_LGL, NA_LGL);
    goto L1(r29);
  D7():
    deopt 55 [r31];
  D8():
    deopt 58 [];
  L13():
    goto L1(r31);
  L14():
    p8 = prom<V +>{
      testDF = ld testDF;
      testDF1 = force? testDF;
      checkMissing(testDF1);
      return testDF1;
    };
    p9 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      by1 = ld by1;
      by2 = force? by1;
      checkMissing(by2);
      by3 = ld by2;
      by4 = force? by3;
      checkMissing(by4);
      list2 = ldf list in base;
      r35 = dyn list2(by2, by4);
      goto L0(r35);
    L2():
      r33 = dyn base6(<sym by1>, <sym by2>);
      goto L0(r33);
    };
    r37 = dyn aggregate2[x, by, FUN](p8, p9, "mean");
    check L15() else D9();
  D9():
    deopt 65 [r37];
  L15():
    factor = ldf factor;
    check L16() else D10();
  D10():
    deopt 67 [];
  L16():
    p10 = prom<V +>{
      by5 = ld by1;
      by6 = force? by5;
      checkMissing(by6);
      return by6;
    };
    r39 = dyn factor[, exclude](p10, "");
    check L17() else D11();
  D11():
    deopt 71 [r39];
  L17():
    st fby1 = r39;
    factor1 = ldf factor;
    check L18() else D12();
  D12():
    deopt 74 [];
  L18():
    p11 = prom<V +>{
      by7 = ld by2;
      by8 = force? by7;
      checkMissing(by8);
      return by8;
    };
    r41 = dyn factor1[, exclude](p11, "");
    check L19() else D13();
  D13():
    deopt 78 [r41];
  L19():
    st fby2 = r41;
    aggregate3 = ldf aggregate;
    check L20() else D14();
  D14():
    deopt 81 [];
  L20():
    p12 = prom<V +>{
      testDF2 = ld testDF;
      testDF3 = force? testDF2;
      checkMissing(testDF3);
      return testDF3;
    };
    p13 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      fby1 = ld fby1;
      fby2 = force? fby1;
      checkMissing(fby2);
      fby3 = ld fby2;
      fby4 = force? fby3;
      checkMissing(fby4);
      list3 = ldf list in base;
      r45 = dyn list3(fby2, fby4);
      goto L0(r45);
    L2():
      r43 = dyn base7(<sym fby1>, <sym fby2>);
      goto L0(r43);
    };
    r47 = dyn aggregate3[x, by, FUN](p12, p13, "mean");
    check L21() else D15();
  D15():
    deopt 88 [r47];
  L21():
    aggregate4 = ldf aggregate;
    check L22() else D16();
  D16():
    deopt 90 [];
  L22():
    p14 = prom<V +>{
      __1 = ldf `~` in base;
      r48 = dyn __1(<sym weight>, <sym feed>);
      return r48;
    };
    p15 = prom<V +>{
      chickwts = ld chickwts;
      chickwts1 = force? chickwts;
      checkMissing(chickwts1);
      return chickwts1;
    };
    p16 = prom<V +>{
      mean4 = ld mean;
      mean5 = force? mean4;
      checkMissing(mean5);
      return mean5;
    };
    r52 = dyn aggregate4[, data, ](p14, p15, p16);
    check L23() else D17();
  D17():
    deopt 95 [r52];
  L23():
    aggregate5 = ldf aggregate;
    check L24() else D18();
  D18():
    deopt 97 [];
  L24():
    p17 = prom<V +>{
      __2 = ldf `~` in base;
      r53 = dyn __2(<sym breaks>, <lang `+`(wool, tension)>);
      return r53;
    };
    p18 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    p19 = prom<V +>{
      mean6 = ld mean;
      mean7 = force? mean6;
      checkMissing(mean7);
      return mean7;
    };
    r57 = dyn aggregate5[, data, ](p17, p18, p19);
    check L25() else D19();
  D19():
    deopt 102 [r57];
  L25():
    aggregate6 = ldf aggregate;
    check L26() else D20();
  D20():
    deopt 104 [];
  L26():
    p20 = prom<V +>{
      __3 = ldf `~` in base;
      r58 = dyn __3(<lang cbind(Ozone, Temp)>, <sym Month>);
      return r58;
    };
    p21 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p22 = prom<V +>{
      mean8 = ld mean;
      mean9 = force? mean8;
      checkMissing(mean9);
      return mean9;
    };
    r62 = dyn aggregate6[, data, ](p20, p21, p22);
    check L27() else D21();
  D21():
    deopt 109 [r62];
  L27():
    aggregate7 = ldf aggregate;
    check L28() else D22();
  D22():
    deopt 111 [];
  L28():
    p23 = prom<V +>{
      __4 = ldf `~` in base;
      r63 = dyn __4(<lang cbind(ncases, ncontrols)>, <lang `+`(alcgp, tobgp)>);
      return r63;
    };
    p24 = prom<V +>{
      esoph = ld esoph;
      esoph1 = force? esoph;
      checkMissing(esoph1);
      return esoph1;
    };
    p25 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r67 = dyn aggregate7[, data, ](p23, p24, p25);
    check L29() else D23();
  D23():
    deopt 116 [r67];
  L29():
    colSums = ldf colSums;
    check L30() else D24();
  D24():
    deopt 118 [];
  L30():
    p26 = prom<V +>{
      sym8 = ldf `is.na`;
      base8 = ldf `is.na` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      is_na = ldf `is.na` in base;
      r70 = dyn is_na(airquality3);
      goto L0(r70);
    L2():
      r68 = dyn base8(<sym airquality>);
      goto L0(r68);
    };
    r72 = dyn colSums(p26);
    check L31() else D25();
  D25():
    deopt 120 [r72];
  L31():
    aggregate8 = ldf aggregate;
    check L32() else D26();
  D26():
    deopt 122 [];
  L32():
    p27 = prom<V +>{
      __5 = ldf `~` in base;
      r73 = dyn __5(<lang cbind(Ozone, Temp)>, <sym Month>);
      return r73;
    };
    p28 = prom<V +>{
      airquality4 = ld airquality;
      airquality5 = force? airquality4;
      checkMissing(airquality5);
      return airquality5;
    };
    p29 = prom<V +>{
      mean10 = ld mean;
      mean11 = force? mean10;
      checkMissing(mean11);
      return mean11;
    };
    r77 = dyn aggregate8[, data, FUN](p27, p28, p29);
    check L33() else D27();
  D27():
    deopt 128 [r77];
  L33():
    aggregate9 = ldf aggregate;
    check L34() else D28();
  D28():
    deopt 130 [];
  L34():
    p30 = prom<V +>{
      __6 = ldf `~` in base;
      r78 = dyn __6(<lang cbind(Ozone, Temp)>, <sym Month>);
      return r78;
    };
    p31 = prom<V +>{
      airquality6 = ld airquality;
      airquality7 = force? airquality6;
      checkMissing(airquality7);
      return airquality7;
    };
    p32 = prom<V +>{
      mean12 = ld mean;
      mean13 = force? mean12;
      checkMissing(mean13);
      return mean13;
    };
    p33 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r83 = dyn aggregate9[, data, FUN, `na.action`, `na.rm`](p30, p31, p32, p33, TRUE);
    check L35() else D29();
  D29():
    deopt 140 [r83];
  L35():
    aggregate10 = ldf aggregate;
    check L36() else D30();
  D30():
    deopt 142 [];
  L36():
    p34 = prom<V +>{
      __7 = ldf `~` in base;
      r84 = dyn __7(<sym .>, <sym Species>);
      return r84;
    };
    p35 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    p36 = prom<V +>{
      mean14 = ld mean;
      mean15 = force? mean14;
      checkMissing(mean15);
      return mean15;
    };
    r88 = dyn aggregate10[, data, ](p34, p35, p36);
    check L37() else D31();
  D31():
    deopt 147 [r88];
  L37():
    aggregate11 = ldf aggregate;
    check L38() else D32();
  D32():
    deopt 149 [];
  L38():
    p37 = prom<V +>{
      __8 = ldf `~` in base;
      r89 = dyn __8(<sym len>, <sym .>);
      return r89;
    };
    p38 = prom<V +>{
      ToothGrowth = ld ToothGrowth;
      ToothGrowth1 = force? ToothGrowth;
      checkMissing(ToothGrowth1);
      return ToothGrowth1;
    };
    p39 = prom<V +>{
      mean16 = ld mean;
      mean17 = force? mean16;
      checkMissing(mean17);
      return mean17;
    };
    r93 = dyn aggregate11[, data, ](p37, p38, p39);
    check L39() else D33();
  D33():
    deopt 154 [r93];
  L39():
    aggregate12 = ldf aggregate;
    check L40() else D34();
  D34():
    deopt 156 [];
  L40():
    p40 = prom<V +>{
      __9 = ldf `~` in base;
      r94 = dyn __9(<sym len>, <sym .>);
      return r94;
    };
    p41 = prom<V +>{
      ToothGrowth2 = ld ToothGrowth;
      ToothGrowth3 = force? ToothGrowth2;
      checkMissing(ToothGrowth3);
      return ToothGrowth3;
    };
    p42 = prom<V +>{
      mean18 = ld mean;
      mean19 = force? mean18;
      checkMissing(mean19);
      return mean19;
    };
    r98 = dyn aggregate12[, data, ](p40, p41, p42);
    check L41() else D35();
  D35():
    deopt 161 [r98];
  L41():
    st ag = r98;
    xtabs = ldf xtabs;
    check L42() else D36();
  D36():
    deopt 164 [];
  L42():
    p43 = prom<V +>{
      __10 = ldf `~` in base;
      r99 = dyn __10(<sym len>, <sym .>);
      return r99;
    };
    p44 = prom<V +>{
      ag = ld ag;
      ag1 = force? ag;
      checkMissing(ag1);
      return ag1;
    };
    r102 = dyn xtabs[, data](p43, p44);
    check L43() else D37();
  D37():
    deopt 168 [r102];
  L43():
    aggregate13 = ldf aggregate;
    check L44() else D38();
  D38():
    deopt 170 [];
  L44():
    p45 = prom<V +>{
      ToothGrowth4 = ld ToothGrowth;
      ToothGrowth5 = force? ToothGrowth4;
      checkMissing(ToothGrowth5);
      return ToothGrowth5;
    };
    p46 = prom<V +>{
      __11 = ldf `~` in base;
      r104 = dyn __11(<sym len>, <sym .>);
      return r104;
    };
    p47 = prom<V +>{
      mean20 = ld mean;
      mean21 = force? mean20;
      checkMissing(mean21);
      return mean21;
    };
    r107 = dyn aggregate13[, , FUN](p45, p46, p47);
    check L45() else D39();
  D39():
    deopt 175 [r107];
  L45():
    aggregate14 = ldf aggregate;
    check L46() else D40();
  D40():
    deopt 177 [];
  L46():
    p48 = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    p49 = prom<V +>{
      mean22 = ld mean;
      mean23 = force? mean22;
      checkMissing(mean23);
      return mean23;
    };
    r110 = dyn aggregate14[, nfrequency, FUN](p48, 1.0, p49);
    check L47() else D41();
  D41():
    deopt 183 [r110];
  L47():
    aggregate15 = ldf aggregate;
    check L48() else D42();
  D42():
    deopt 185 [];
  L48():
    p50 = prom<V +>{
      presidents2 = ld presidents;
      presidents3 = force? presidents2;
      checkMissing(presidents3);
      return presidents3;
    };
    p51 = prom<V +>{
      weighted_mean = ld `weighted.mean`;
      weighted_mean1 = force? weighted_mean;
      checkMissing(weighted_mean1);
      return weighted_mean1;
    };
    p52 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      c5 = ldf c in base;
      r115 = dyn c5(1.0, 1.0, 0.5, 1.0);
      goto L0(r115);
    L2():
      r113 = dyn base9(1.0, 1.0, 0.5, 1.0);
      goto L0(r113);
    };
    r117 = dyn aggregate15[, nfrequency, FUN, w](p50, 1.0, p51, p52);
    check L49() else D43();
  D43():
    deopt 193 [r117];
  L49():
    popenv;
    return r117;
  }
}
fun inner2044426018(x, `...`) {
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
    r2 = dyn UseMethod("aggregate");
    goto L0(r2);
  L2():
    r = dyn base("aggregate");
    goto L0(r);
  }
}