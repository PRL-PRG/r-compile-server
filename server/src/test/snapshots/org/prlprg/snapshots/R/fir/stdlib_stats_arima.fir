fun main() {
  () -+> V { reg r:cls, reg arima:cls, reg lh:*, reg lh1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg arima1:cls, reg lh2:*, reg lh3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg arima2:cls, reg lh4:*, reg lh5:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg arima3:cls, reg lh6:*, reg lh7:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c3:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg arima4:cls, reg USAccDeaths:*, reg USAccDeaths1:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg c4:cls, reg r28:V, reg p9:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg c5:cls, reg r34:V, reg list:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg arima5:cls, reg USAccDeaths2:*, reg USAccDeaths3:V, reg p11:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg c6:cls, reg r41:V, reg p12:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg c7:cls, reg r47:V, reg list1:cls, reg r48:V, reg p13:p(V +), reg r50:V, reg arima6:cls, reg LakeHuron:*, reg LakeHuron1:V, reg p14:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg c8:cls, reg r54:V, reg p15:p(V +), reg time:cls, reg LakeHuron2:*, reg LakeHuron3:V, reg p16:p(V +), reg r57:V, reg r58:V, reg p17:p(V +), reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p18:p(V +), reg r64:V, reg arima7:cls, reg presidents:*, reg presidents1:V, reg p19:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg r67:V, reg c9:cls, reg r68:V, reg p20:p(V +), reg r70:V, reg nobs:cls, reg fit1:*, reg fit2:V, reg p21:p(V +), reg r72:V, reg tsdiag:cls, reg fit3:*, reg fit4:V, reg p22:p(V +), reg r74:V, reg arima8:cls, reg presidents2:*, reg presidents3:V, reg p23:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg c10:cls, reg r78:V, reg p24:p(V +), reg r80:V, reg tsdiag1:cls, reg fit5:*, reg fit6:V, reg p25:p(V +), reg r82:V, reg BIC:cls, reg fit7:*, reg fit8:V, reg p26:p(V +), reg fit9:*, reg fit10:V, reg p27:p(V +), reg r85:V, reg AIC:cls, reg fit11:*, reg fit12:V, reg p28:p(V +), reg arima9:cls, reg presidents4:*, reg presidents5:V, reg p29:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r88:V, reg r89:V, reg c11:cls, reg r90:V, reg p30:p(V +), reg r92:V, reg p31:p(V +), reg arima10:cls, reg presidents6:*, reg presidents7:V, reg p32:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r95:V, reg r96:V, reg c12:cls, reg r97:V, reg p33:p(V +), reg r99:V, reg p34:p(V +), reg fit13:*, reg fit14:V, reg p35:p(V +), reg arima11:cls, reg presidents8:*, reg presidents9:V, reg p36:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r103:V, reg r104:V, reg c13:cls, reg r105:V, reg p37:p(V +), reg r107:V, reg p38:p(V +), reg r109:V, reg arima12:cls, reg presidents10:*, reg presidents11:V, reg p39:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r111:V, reg r112:V, reg c14:cls, reg r113:V, reg p40:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r115:V, reg r116:V, reg c15:cls, reg r117:V, reg p41:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r119:V, reg r120:V, reg c16:cls, reg r121:V, reg p42:p(V +), reg r123:V, reg AIC1:cls, reg fitSfx:*, reg fitSfx1:V, reg p43:p(V +), reg arima13:cls, reg presidents12:*, reg presidents13:V, reg p44:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r126:V, reg r127:V, reg c17:cls, reg r128:V, reg p45:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r130:V, reg r131:V, reg c18:cls, reg r132:V, reg p46:p(V +), reg r134:V, reg p47:p(V +), reg r136:V, reg predict:cls, reg fit15:*, reg fit16:V, reg p48:p(V +), reg r138:V |
    mkenv;
    r = clos inner3621676403;
    st arima = r;
    arima = ldf arima;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(1.0, 0.0, 0.0);
      goto L0(r4);
    L2():
      r2 = dyn base(1.0, 0.0, 0.0);
      goto L0(r2);
    };
    r6 = dyn arima[, order](p, p1);
    check L2() else D1();
  D1():
    deopt 8 [r6];
  L2():
    arima1 = ldf arima;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      lh2 = ld lh;
      lh3 = force? lh2;
      checkMissing(lh3);
      return lh3;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c1 = ldf c in base;
      r10 = dyn c1(3.0, 0.0, 0.0);
      goto L0(r10);
    L2():
      r8 = dyn base1(3.0, 0.0, 0.0);
      goto L0(r8);
    };
    r12 = dyn arima1[, order](p2, p3);
    check L4() else D3();
  D3():
    deopt 14 [r12];
  L4():
    arima2 = ldf arima;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p4 = prom<V +>{
      lh4 = ld lh;
      lh5 = force? lh4;
      checkMissing(lh5);
      return lh5;
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c2 = ldf c in base;
      r16 = dyn c2(1.0, 0.0, 1.0);
      goto L0(r16);
    L2():
      r14 = dyn base2(1.0, 0.0, 1.0);
      goto L0(r14);
    };
    r18 = dyn arima2[, order](p4, p5);
    check L6() else D5();
  D5():
    deopt 20 [r18];
  L6():
    arima3 = ldf arima;
    check L7() else D6();
  D6():
    deopt 22 [];
  L7():
    p6 = prom<V +>{
      lh6 = ld lh;
      lh7 = force? lh6;
      checkMissing(lh7);
      return lh7;
    };
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c3 = ldf c in base;
      r22 = dyn c3(3.0, 0.0, 0.0);
      goto L0(r22);
    L2():
      r20 = dyn base3(3.0, 0.0, 0.0);
      goto L0(r20);
    };
    r24 = dyn arima3[, order, method](p6, p7, "CSS");
    check L8() else D7();
  D7():
    deopt 28 [r24];
  L8():
    arima4 = ldf arima;
    check L9() else D8();
  D8():
    deopt 30 [];
  L9():
    p8 = prom<V +>{
      USAccDeaths = ld USAccDeaths;
      USAccDeaths1 = force? USAccDeaths;
      checkMissing(USAccDeaths1);
      return USAccDeaths1;
    };
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c4 = ldf c in base;
      r28 = dyn c4(0.0, 1.0, 1.0);
      goto L0(r28);
    L2():
      r26 = dyn base4(0.0, 1.0, 1.0);
      goto L0(r26);
    };
    p10 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r31):
      return r31;
    L2():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r30 = dyn base5[order](<lang c(0.0, 1.0, 1.0)>);
      goto L0(r30);
    L1(r33):
      list = ldf list in base;
      r35 = dyn list(r33);
      goto L0(r35);
    L4():
      c5 = ldf c in base;
      r34 = dyn c5(0.0, 1.0, 1.0);
      goto L1(r34);
    L5():
      r32 = dyn base6(0.0, 1.0, 1.0);
      goto L1(r32);
    };
    r37 = dyn arima4[, order, seasonal](p8, p9, p10);
    check L10() else D9();
  D9():
    deopt 36 [r37];
  L10():
    arima5 = ldf arima;
    check L11() else D10();
  D10():
    deopt 38 [];
  L11():
    p11 = prom<V +>{
      USAccDeaths2 = ld USAccDeaths;
      USAccDeaths3 = force? USAccDeaths2;
      checkMissing(USAccDeaths3);
      return USAccDeaths3;
    };
    p12 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c6 = ldf c in base;
      r41 = dyn c6(0.0, 1.0, 1.0);
      goto L0(r41);
    L2():
      r39 = dyn base7(0.0, 1.0, 1.0);
      goto L0(r39);
    };
    p13 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r44):
      return r44;
    L2():
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r43 = dyn base8[order](<lang c(0.0, 1.0, 1.0)>);
      goto L0(r43);
    L1(r46):
      list1 = ldf list in base;
      r48 = dyn list1(r46);
      goto L0(r48);
    L4():
      c7 = ldf c in base;
      r47 = dyn c7(0.0, 1.0, 1.0);
      goto L1(r47);
    L5():
      r45 = dyn base9(0.0, 1.0, 1.0);
      goto L1(r45);
    };
    r50 = dyn arima5[, order, seasonal, method](p11, p12, p13, "CSS");
    check L12() else D11();
  D11():
    deopt 46 [r50];
  L12():
    arima6 = ldf arima;
    check L13() else D12();
  D12():
    deopt 48 [];
  L13():
    p14 = prom<V +>{
      LakeHuron = ld LakeHuron;
      LakeHuron1 = force? LakeHuron;
      checkMissing(LakeHuron1);
      return LakeHuron1;
    };
    p15 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c8 = ldf c in base;
      r54 = dyn c8(2.0, 0.0, 0.0);
      goto L0(r54);
    L2():
      r52 = dyn base10(2.0, 0.0, 0.0);
      goto L0(r52);
    };
    p17 = prom<V +>{
      time = ldf time;
      p16 = prom<V +>{
        LakeHuron2 = ld LakeHuron;
        LakeHuron3 = force? LakeHuron2;
        checkMissing(LakeHuron3);
        return LakeHuron3;
      };
      r57 = dyn time(p16);
      r58 = `-`(r57, 1920.0);
      return r58;
    };
    r60 = dyn arima6[, order, xreg](p14, p15, p17);
    check L14() else D13();
  D13():
    deopt 54 [r60];
  L14():
    sym11 = ldf require;
    base11 = ldf require in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L15() else L16();
  L0():
    arima7 = ldf arima;
    check L19() else D16();
  L15():
    require = ldf require;
    check L17() else D14();
  L16():
    r61 = dyn base11(<sym graphics>);
    goto L0();
  D14():
    deopt 57 [];
  D16():
    deopt 61 [];
  L17():
    p18 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r64 = dyn require(p18);
    check L18() else D15();
  L19():
    p19 = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    p20 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      c9 = ldf c in base;
      r68 = dyn c9(1.0, 0.0, 0.0);
      goto L0(r68);
    L2():
      r66 = dyn base12(1.0, 0.0, 0.0);
      goto L0(r66);
    };
    r70 = dyn arima7(p19, p20);
    check L20() else D17();
  D15():
    deopt 59 [r64];
  D17():
    deopt 64 [r70];
  L18():
    goto L0();
  L20():
    st fit1 = r70;
    nobs = ldf nobs;
    check L21() else D18();
  D18():
    deopt 67 [];
  L21():
    p21 = prom<V +>{
      fit1 = ld fit1;
      fit2 = force? fit1;
      checkMissing(fit2);
      return fit2;
    };
    r72 = dyn nobs(p21);
    check L22() else D19();
  D19():
    deopt 69 [r72];
  L22():
    tsdiag = ldf tsdiag;
    check L23() else D20();
  D20():
    deopt 71 [];
  L23():
    p22 = prom<V +>{
      fit3 = ld fit1;
      fit4 = force? fit3;
      checkMissing(fit4);
      return fit4;
    };
    r74 = dyn tsdiag(p22);
    check L24() else D21();
  D21():
    deopt 73 [r74];
  L24():
    arima8 = ldf arima;
    check L25() else D22();
  D22():
    deopt 75 [];
  L25():
    p23 = prom<V +>{
      presidents2 = ld presidents;
      presidents3 = force? presidents2;
      checkMissing(presidents3);
      return presidents3;
    };
    p24 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      c10 = ldf c in base;
      r78 = dyn c10(3.0, 0.0, 0.0);
      goto L0(r78);
    L2():
      r76 = dyn base13(3.0, 0.0, 0.0);
      goto L0(r76);
    };
    r80 = dyn arima8(p23, p24);
    check L26() else D23();
  D23():
    deopt 78 [r80];
  L26():
    st fit3 = r80;
    tsdiag1 = ldf tsdiag;
    check L27() else D24();
  D24():
    deopt 81 [];
  L27():
    p25 = prom<V +>{
      fit5 = ld fit3;
      fit6 = force? fit5;
      checkMissing(fit6);
      return fit6;
    };
    r82 = dyn tsdiag1(p25);
    check L28() else D25();
  D25():
    deopt 83 [r82];
  L28():
    BIC = ldf BIC;
    check L29() else D26();
  D26():
    deopt 85 [];
  L29():
    p26 = prom<V +>{
      fit7 = ld fit1;
      fit8 = force? fit7;
      checkMissing(fit8);
      return fit8;
    };
    p27 = prom<V +>{
      fit9 = ld fit3;
      fit10 = force? fit9;
      checkMissing(fit10);
      return fit10;
    };
    r85 = dyn BIC(p26, p27);
    check L30() else D27();
  D27():
    deopt 88 [r85];
  L30():
    AIC = ldf AIC;
    check L31() else D28();
  D28():
    deopt 90 [];
  L31():
    p28 = prom<V +>{
      fit11 = ld fit1;
      fit12 = force? fit11;
      checkMissing(fit12);
      return fit12;
    };
    p31 = prom<V +>{
      arima9 = ldf arima;
      p29 = prom<V +>{
        presidents4 = ld presidents;
        presidents5 = force? presidents4;
        checkMissing(presidents5);
        return presidents5;
      };
      p30 = prom<V +>{
        sym14 = ldf c;
        base14 = ldf c in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r89):
        return r89;
      L1():
        c11 = ldf c in base;
        r90 = dyn c11(2.0, 0.0, 0.0);
        goto L0(r90);
      L2():
        r88 = dyn base14(2.0, 0.0, 0.0);
        goto L0(r88);
      };
      r92 = dyn arima9(p29, p30);
      return r92;
    };
    p34 = prom<V +>{
      arima10 = ldf arima;
      p32 = prom<V +>{
        presidents6 = ld presidents;
        presidents7 = force? presidents6;
        checkMissing(presidents7);
        return presidents7;
      };
      p33 = prom<V +>{
        sym15 = ldf c;
        base15 = ldf c in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r96):
        return r96;
      L1():
        c12 = ldf c in base;
        r97 = dyn c12(2.0, 0.0, 1.0);
        goto L0(r97);
      L2():
        r95 = dyn base15(2.0, 0.0, 1.0);
        goto L0(r95);
      };
      r99 = dyn arima10(p32, p33);
      return r99;
    };
    p35 = prom<V +>{
      fit13 = ld fit3;
      fit14 = force? fit13;
      checkMissing(fit14);
      return fit14;
    };
    p38 = prom<V +>{
      arima11 = ldf arima;
      p36 = prom<V +>{
        presidents8 = ld presidents;
        presidents9 = force? presidents8;
        checkMissing(presidents9);
        return presidents9;
      };
      p37 = prom<V +>{
        sym16 = ldf c;
        base16 = ldf c in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L1() else L2();
      L0(r104):
        return r104;
      L1():
        c13 = ldf c in base;
        r105 = dyn c13(3.0, 0.0, 1.0);
        goto L0(r105);
      L2():
        r103 = dyn base16(3.0, 0.0, 1.0);
        goto L0(r103);
      };
      r107 = dyn arima11(p36, p37);
      return r107;
    };
    r109 = dyn AIC(p28, p31, p34, p35, p38);
    check L32() else D29();
  D29():
    deopt 96 [r109];
  L32():
    arima12 = ldf arima;
    check L33() else D30();
  D30():
    deopt 98 [];
  L33():
    p39 = prom<V +>{
      presidents10 = ld presidents;
      presidents11 = force? presidents10;
      checkMissing(presidents11);
      return presidents11;
    };
    p40 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r112):
      return r112;
    L1():
      c14 = ldf c in base;
      r113 = dyn c14(2.0, 0.0, 1.0);
      goto L0(r113);
    L2():
      r111 = dyn base17(2.0, 0.0, 1.0);
      goto L0(r111);
    };
    p41 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      c15 = ldf c in base;
      r117 = dyn c15(1.0, 0.0, 0.0);
      goto L0(r117);
    L2():
      r115 = dyn base18(1.0, 0.0, 0.0);
      goto L0(r115);
    };
    p42 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c16 = ldf c in base;
      r121 = dyn c16(NA_LGL, NA_LGL, 0.5, -0.1, 50.0);
      goto L0(r121);
    L2():
      r119 = dyn base19(NA_LGL, NA_LGL, 0.5, <lang `-`(0.1)>, 50.0);
      goto L0(r119);
    };
    r123 = dyn arima12[, order, seasonal, fixed, `transform.pars`](p39, p40, p41, p42, FALSE);
    check L34() else D31();
  D31():
    deopt 108 [r123];
  L34():
    st fitSfx = r123;
    AIC1 = ldf AIC;
    check L35() else D32();
  D32():
    deopt 111 [];
  L35():
    p43 = prom<V +>{
      fitSfx = ld fitSfx;
      fitSfx1 = force? fitSfx;
      checkMissing(fitSfx1);
      return fitSfx1;
    };
    p47 = prom<V +>{
      arima13 = ldf arima;
      p44 = prom<V +>{
        presidents12 = ld presidents;
        presidents13 = force? presidents12;
        checkMissing(presidents13);
        return presidents13;
      };
      p45 = prom<V +>{
        sym20 = ldf c;
        base20 = ldf c in base;
        guard20 = `==`.4(sym20, base20);
        if guard20 then L1() else L2();
      L0(r127):
        return r127;
      L1():
        c17 = ldf c in base;
        r128 = dyn c17(2.0, 0.0, 1.0);
        goto L0(r128);
      L2():
        r126 = dyn base20(2.0, 0.0, 1.0);
        goto L0(r126);
      };
      p46 = prom<V +>{
        sym21 = ldf c;
        base21 = ldf c in base;
        guard21 = `==`.4(sym21, base21);
        if guard21 then L1() else L2();
      L0(r131):
        return r131;
      L1():
        c18 = ldf c in base;
        r132 = dyn c18(1.0, 0.0, 0.0);
        goto L0(r132);
      L2():
        r130 = dyn base21(1.0, 0.0, 0.0);
        goto L0(r130);
      };
      r134 = dyn arima13[, order, seasonal](p44, p45, p46);
      return r134;
    };
    r136 = dyn AIC1(p43, p47);
    check L36() else D33();
  D33():
    deopt 114 [r136];
  L36():
    predict = ldf predict;
    check L37() else D34();
  D34():
    deopt 116 [];
  L37():
    p48 = prom<V +>{
      fit15 = ld fit3;
      fit16 = force? fit15;
      checkMissing(fit16);
      return fit16;
    };
    r138 = dyn predict(p48, 3.0);
    check L38() else D35();
  D35():
    deopt 119 [r138];
  L38():
    popenv;
    return r138;
  }
}
fun inner3621676403(x, order, seasonal, xreg, `include.mean`, `transform.pars`, fixed, init, method, `n.cond`, SSinit, `optim.method`, `optim.control`, kappa) {
  (reg x:*, reg order:*, reg seasonal:*, reg xreg:*, reg include_mean:*, reg transform_pars:*, reg fixed:*, reg init:*, reg method:*, reg n_cond:*, reg SSinit:*, reg optim_method:*, reg optim_control:*, reg kappa:*) -+> V { var x:*, var order:*, reg order_isMissing:L, reg order_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var seasonal:*, reg seasonal_isMissing:L, reg seasonal_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg list:cls, reg r9:V, reg p1:p(V +), var xreg:*, reg xreg_isMissing:L, reg xreg_orDefault:*, var `include.mean`:*, reg include_mean_isMissing:L, reg include_mean_orDefault:*, var `transform.pars`:*, reg transform_pars_isMissing:L, reg transform_pars_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var init:*, reg init_isMissing:L, reg init_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), var `n.cond`:*, var SSinit:*, reg SSinit_isMissing:L, reg SSinit_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg c3:cls, reg r17:V, reg p3:p(V +), var `optim.method`:*, reg optim_method_isMissing:L, reg optim_method_orDefault:*, var `optim.control`:*, reg optim_control_isMissing:L, reg optim_control_orDefault:*, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg list1:cls, reg r21:V, reg p4:p(V +), var kappa:*, reg kappa_isMissing:L, reg kappa_orDefault:*, reg r23:cls, reg match_arg:cls, reg SSinit1:*, reg SSinit2:V, reg p5:p(V +), reg r25:V, reg SSinit3:*, reg SSinit4:V, reg r26:V, reg r27:cls, reg r28:cls, reg r29:cls, reg r30:cls, reg r31:cls, reg r32:cls, reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg substitute:cls, reg r35:V, reg p6:p(V +), reg r37:V, reg NCOL:cls, reg x1:*, reg x2:V, reg p7:p(V +), reg r39:V, reg r40:V, reg c4:L, reg stop:cls, reg r41:V, reg match_arg1:cls, reg method1:*, reg method2:V, reg p8:p(V +), reg r44:V, reg as_ts:cls, reg x3:*, reg x4:V, reg p9:p(V +), reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg x5:*, reg x6:V, reg is_numeric:cls, reg r49:V, reg r50:V, reg c5:L, reg stop1:cls, reg r51:V, reg l:*, reg storage_mode__:cls, reg r53:V, reg l1:*, reg dim__:cls, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg x7:*, reg x8:V, reg length:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg missing:cls, reg r60:V, reg r61:V, reg c6:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg order1:*, reg order2:V, reg is_numeric1:cls, reg r64:V, reg r65:V, reg c7:L, reg c8:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg c12:L, reg r67:V, reg order3:*, reg order4:V, reg length1:cls, reg r68:V, reg r69:V, reg c13:L, reg c14:V, reg c16:L, reg c17:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg c21:L, reg r71:V, reg order5:*, reg order6:V, reg r72:V, reg any:cls, reg r73:V, reg c22:L, reg c23:V, reg c25:L, reg stop2:cls, reg r74:V, reg r75:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg r78:V, reg missing1:cls, reg r79:V, reg r80:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg r82:V, reg seasonal1:*, reg seasonal2:V, reg is_list:cls, reg r83:V, reg c27:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r84:V, reg r85:V, reg seasonal3:*, reg seasonal4:V, reg c28:L, reg seasonal6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r86:V, reg c29:V, reg c30:L, reg stop3:cls, reg r87:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg seasonal7:*, reg seasonal8:V, reg c31:L, reg seasonal10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r91:V, reg is_numeric2:cls, reg r92:V, reg r93:V, reg c32:L, reg c33:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg c37:L, reg r95:V, reg seasonal11:*, reg seasonal12:V, reg c38:L, reg c40:L, reg seasonal14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c42:L, reg dx5:V, reg r96:V, reg length2:cls, reg r97:V, reg r98:V, reg c43:L, reg c44:V, reg c46:L, reg c47:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r99:V, reg c51:L, reg r100:V, reg seasonal15:*, reg seasonal16:V, reg c52:L, reg c54:L, reg seasonal18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c56:L, reg dx7:V, reg r101:V, reg r102:V, reg any1:cls, reg r103:V, reg c57:L, reg c58:V, reg c60:L, reg stop4:cls, reg r104:V, reg r105:V, reg r106:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r107:V, reg r108:V, reg order7:*, reg order8:V, reg is_numeric3:cls, reg r109:V, reg c61:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r110:V, reg r111:V, reg order9:*, reg order10:V, reg length3:cls, reg r112:V, reg r113:V, reg c62:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r114:V, reg r115:V, reg seasonal19:*, reg seasonal20:V, reg list2:cls, reg r116:V, reg r117:V, reg stop5:cls, reg r118:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r120:V, reg r121:V, reg seasonal21:*, reg seasonal22:V, reg c63:L, reg seasonal24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r122:V, reg c64:V, reg c65:L, reg c66:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r123:V, reg c70:L, reg r124:V, reg seasonal25:*, reg seasonal26:V, reg c71:L, reg c73:L, reg seasonal28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c75:L, reg dx11:V, reg r125:V, reg is_na:cls, reg r126:V, reg c76:L, reg c77:V, reg c79:L, reg c80:V, reg seasonal29:*, reg seasonal30:V, reg c82:L, reg c84:L, reg seasonal32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c86:L, reg dx13:V, reg r127:V, reg r128:V, reg c87:L, reg c88:V, reg c90:L, reg frequency:cls, reg x9:*, reg x10:V, reg p10:p(V +), reg r130:V, reg l2:*, reg c91:L, reg r132:V, reg l4:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r134:V, reg dx15:V, reg r135:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r137:V, reg r138:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r139:V, reg r140:V, reg order11:*, reg order12:V, reg c92:L, reg order14:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __:cls, reg r141:V, reg seasonal33:*, reg seasonal34:V, reg c93:L, reg seasonal36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r142:V, reg c94:L, reg dx21:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __1:cls, reg r143:V, reg seasonal37:*, reg seasonal38:V, reg c95:L, reg seasonal40:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r144:V, reg order15:*, reg order16:V, reg c96:L, reg order18:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __2:cls, reg r145:V, reg seasonal41:*, reg seasonal42:V, reg c97:L, reg seasonal44:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg r146:V, reg c98:L, reg dx31:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg __3:cls, reg r147:V, reg c99:cls, reg r148:V, reg as_integer:cls, reg r149:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r150:V, reg r151:V, reg arma:*, reg arma1:V, reg c100:L, reg arma3:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg __4:cls, reg r152:V, reg sum:cls, reg r153:V, reg tsp:cls, reg x11:*, reg x12:V, reg p11:p(V +), reg r155:V, reg l5:*, reg tsp__:cls, reg r156:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r157:V, reg r158:V, reg order19:*, reg order20:V, reg c101:L, reg order22:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg __5:cls, reg r159:V, reg r160:I, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c102:L, reg x13:V, reg ___:cls, reg Delta:*, reg Delta1:V, reg p12:p(V +), reg sym28:cls, reg base28:cls, reg guard28:L, reg r162:V, reg r163:V, reg c103:cls, reg r164:V, reg p13:p(V +), reg r166:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r167:V, reg r168:V, reg seasonal45:*, reg seasonal46:V, reg c104:L, reg seasonal48:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg r169:V, reg c105:L, reg dx41:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg __6:cls, reg r170:V, reg r171:I, reg s1:V, reg l7:I, reg i5:I, reg i6:I, reg i7:I, reg c106:L, reg x14:V, reg ___1:cls, reg Delta2:*, reg Delta3:V, reg p14:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r173:V, reg r174:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r175:V, reg r176:V, reg seasonal49:*, reg seasonal50:V, reg c107:L, reg seasonal52:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r177:V, reg r178:V, reg rep_int:cls, reg r179:V, reg c108:cls, reg r180:V, reg p15:p(V +), reg r182:V, reg Delta4:*, reg Delta5:V, reg c109:L, reg Delta7:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg __7:cls, reg r183:V, reg r184:V, reg order23:*, reg order24:V, reg c110:L, reg order26:V, reg dr42:V, reg dc21:L, reg dx48:V, reg dx49:V, reg __8:cls, reg r185:V, reg seasonal53:*, reg seasonal54:V, reg c111:L, reg dx51:V, reg seasonal56:V, reg dr44:V, reg dc22:L, reg dx53:V, reg dx54:V, reg dx55:V, reg r186:V, reg c112:L, reg dx58:V, reg dx59:V, reg dr46:V, reg dc23:L, reg dx61:V, reg dx62:V, reg dx63:V, reg __9:cls, reg r187:V, reg r188:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r189:V, reg r190:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r191:V, reg r192:V, reg x15:*, reg x16:V, reg is_na1:cls, reg r193:V, reg r194:V, reg sum1:cls, reg r195:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r198:V, reg r199:V, reg r200:V, reg Delta8:*, reg Delta9:V, reg length4:cls, reg r201:V, reg r202:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r203:V, reg r204:V, reg xreg1:*, reg xreg2:V, reg c113:V, reg c114:L, reg deparse2:cls, reg sym36:cls, reg base36:cls, reg guard36:L, reg r206:V, reg r207:V, reg substitute1:cls, reg r208:V, reg p16:p(V +), reg r210:V, reg NROW:cls, reg xreg3:*, reg xreg4:V, reg p17:p(V +), reg r212:V, reg n:*, reg n1:V, reg r213:V, reg c115:L, reg stop6:cls, reg r214:V, reg NCOL1:cls, reg xreg5:*, reg xreg6:V, reg p18:p(V +), reg r217:V, reg as_matrix:cls, reg xreg7:*, reg xreg8:V, reg p19:p(V +), reg r219:V, reg l8:*, reg storage_mode__1:cls, reg r220:V, reg l9:*, reg class__:cls, reg r221:V, reg ncxreg:*, reg ncxreg1:V, reg r222:V, reg c116:L, reg c118:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r223:V, reg c121:L, reg r224:V, reg colnames:cls, reg xreg9:*, reg xreg10:V, reg p20:p(V +), reg r226:V, reg c122:V, reg c123:L, reg c124:V, reg c126:L, reg ncxreg2:*, reg ncxreg3:V, reg r227:V, reg c127:L, reg nmxreg:*, reg nmxreg1:V, reg nmxreg2:V, reg paste0:cls, reg nmxreg3:*, reg nmxreg4:V, reg p21:p(V +), reg ncxreg4:*, reg ncxreg5:V, reg r229:V, reg p22:p(V +), reg r231:V, reg l10:*, reg colnames__:cls, reg r232:V, reg include_mean1:*, reg include_mean2:V, reg c128:L, reg c130:V, reg nd:*, reg nd1:V, reg r233:V, reg c131:L, reg c132:V, reg c134:L, reg cbind:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r234:V, reg r235:V, reg rep:cls, reg r236:V, reg p23:p(V +), reg xreg11:*, reg xreg12:V, reg p24:p(V +), reg r239:V, reg ncxreg6:*, reg ncxreg7:V, reg r240:V, reg method3:*, reg method4:V, reg r242:V, reg c135:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r243:V, reg r244:V, reg x17:*, reg x18:V, reg anyNA:cls, reg r245:V, reg ncxreg8:*, reg ncxreg9:V, reg c136:L, reg anyna:*, reg anyna1:V, reg c137:L, reg c138:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r246:V, reg c142:L, reg r247:V, reg xreg13:*, reg xreg14:V, reg anyNA1:cls, reg r248:V, reg c143:L, reg c144:V, reg anyna2:*, reg anyna3:V, reg c147:L, reg r249:V, reg method5:*, reg method6:V, reg r251:V, reg c148:L, reg c149:V, reg method7:*, reg method8:V, reg r252:V, reg c151:L, reg c152:V, reg c154:L, reg order27:*, reg order28:V, reg c155:L, reg order30:V, reg dr48:V, reg dc24:L, reg dx64:V, reg dx65:V, reg __10:cls, reg r253:V, reg seasonal57:*, reg seasonal58:V, reg c156:L, reg dx67:V, reg seasonal60:V, reg dr50:V, reg dc25:L, reg dx69:V, reg dx70:V, reg dx71:V, reg r254:V, reg c157:L, reg dx74:V, reg dx75:V, reg dr52:V, reg dc26:L, reg dx77:V, reg dx78:V, reg dx79:V, reg __11:cls, reg r255:V, reg seasonal61:*, reg seasonal62:V, reg c158:L, reg dx82:V, reg dx83:V, reg seasonal64:V, reg dr54:V, reg dc27:L, reg dx86:V, reg dx87:V, reg dx88:V, reg dx89:V, reg r256:V, reg r257:V, reg r258:V, reg order31:*, reg order32:V, reg c159:L, reg order34:V, reg dr56:V, reg dc28:L, reg dx90:V, reg dx91:V, reg __12:cls, reg r259:V, reg seasonal65:*, reg seasonal66:V, reg c160:L, reg dx93:V, reg seasonal68:V, reg dr58:V, reg dc29:L, reg dx95:V, reg dx96:V, reg dx97:V, reg r260:V, reg seasonal69:*, reg seasonal70:V, reg c161:L, reg dx100:V, reg dx101:V, reg seasonal72:V, reg dr60:V, reg dc30:L, reg dx104:V, reg dx105:V, reg dx106:V, reg dx107:V, reg r261:V, reg c162:L, reg dx111:V, reg dx112:V, reg dx113:V, reg dr62:V, reg dc31:L, reg dx116:V, reg dx117:V, reg dx118:V, reg dx119:V, reg __13:cls, reg r262:V, reg r263:V, reg r264:V, reg ncond:*, reg ncond1:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r265:V, reg ncond4:V, reg r266:V, reg missing2:cls, reg r267:V, reg r268:V, reg c163:L, reg sym42:cls, reg base42:cls, reg guard42:L, reg r269:V, reg ncond9:V, reg r270:V, reg n_cond1:*, reg n_cond2:V, reg ncond10:*, reg ncond11:V, reg max:cls, reg r271:V, reg ncond12:V, reg r272:V, reg ncond13:*, reg ncond14:V, reg r273:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r275:V, reg r276:V, reg fixed1:*, reg fixed2:V, reg c164:V, reg c165:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r277:V, reg r278:V, reg rep1:cls, reg r279:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r281:V, reg r282:V, reg fixed3:*, reg fixed4:V, reg length5:cls, reg r283:V, reg narma:*, reg narma1:V, reg ncxreg10:*, reg ncxreg11:V, reg r284:V, reg r285:V, reg c166:L, reg stop7:cls, reg r286:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r287:V, reg r288:V, reg fixed5:*, reg fixed6:V, reg is_na2:cls, reg r289:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r290:V, reg r291:V, reg mask:*, reg mask1:V, reg any2:cls, reg r292:V, reg r293:V, reg no_optim:*, reg no_optim1:V, reg c167:L, reg transform_pars1:*, reg transform_pars2:V, reg c168:L, reg arma4:*, reg arma5:V, reg c169:L, reg arma7:V, reg dr64:V, reg dc32:L, reg dx120:V, reg dx121:V, reg __14:cls, reg r295:V, reg arma8:*, reg arma9:V, reg c170:L, reg dx123:V, reg arma11:V, reg dr66:V, reg dc33:L, reg dx125:V, reg dx126:V, reg dx127:V, reg __15:cls, reg r296:V, reg r297:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r300:V, reg r301:V, reg r302:V, reg arma12:*, reg arma13:V, reg c171:L, reg r304:V, reg arma15:V, reg dr68:V, reg dc34:L, reg dx128:V, reg r306:V, reg dx129:V, reg __16:cls, reg r307:V, reg r308:I, reg r309:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r310:V, reg r311:V, reg mask2:*, reg mask3:V, reg c172:L, reg mask5:V, reg dr70:V, reg dc35:L, reg dx130:V, reg dx131:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r312:V, reg mask8:V, reg r313:V, reg arma16:*, reg arma17:V, reg c173:L, reg mask10:V, reg arma19:V, reg dr72:V, reg dc36:L, reg dx132:V, reg mask12:V, reg dx133:V, reg __17:cls, reg r314:V, reg r315:I, reg __18:cls, reg r316:V, reg r317:V, reg any3:cls, reg r318:V, reg c174:L, reg c175:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r319:V, reg c179:L, reg r320:V, reg mask13:*, reg mask14:V, reg c180:L, reg c182:L, reg mask16:V, reg dr74:V, reg dc37:L, reg dx134:V, reg c184:L, reg dx135:V, reg ind:*, reg ind1:V, reg __19:cls, reg r321:V, reg r322:V, reg any4:cls, reg r323:V, reg c185:L, reg c186:V, reg c188:L, reg warning:cls, reg r324:V, reg r325:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r327:V, reg r328:V, reg narma2:*, reg narma3:V, reg rep_int1:cls, reg r329:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r330:V, reg r331:V, reg rep2:cls, reg r332:V, reg ncxreg12:*, reg ncxreg13:V, reg c189:L, reg colnames1:cls, reg xreg15:*, reg xreg16:V, reg p25:p(V +), reg r334:V, reg ncxreg14:*, reg ncxreg15:V, reg r335:V, reg c190:L, reg c191:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r336:V, reg c195:L, reg r337:V, reg mask17:*, reg mask18:V, reg c196:L, reg c198:L, reg mask20:V, reg dr76:V, reg dc38:L, reg dx136:V, reg c200:L, reg dx137:V, reg narma4:*, reg narma5:V, reg ncxreg16:*, reg ncxreg17:V, reg r338:V, reg r339:V, reg __20:cls, reg r340:V, reg r341:V, reg any5:cls, reg r342:V, reg c201:L, reg c202:V, reg orig_xreg:*, reg orig_xreg1:V, reg r343:V, reg c204:L, reg svd:cls, reg na_omit:cls, reg xreg17:*, reg xreg18:V, reg p26:p(V +), reg r345:V, reg p27:p(V +), reg r347:V, reg xreg19:*, reg xreg20:V, reg S:*, reg S1:V, reg c205:L, reg S3:V, reg dr78:V, reg dc39:L, reg dx138:V, reg dx139:V, reg r348:V, reg ___2:cls, reg r349:V, reg x19:*, reg x20:V, reg xreg21:*, reg xreg22:V, reg order35:*, reg order36:V, reg c206:L, reg order38:V, reg dr80:V, reg dc40:L, reg dx140:V, reg dx141:V, reg __21:cls, reg r351:V, reg r352:V, reg c207:L, reg diff:cls, reg dx142:*, reg dx143:V, reg p28:p(V +), reg order39:*, reg order40:V, reg c208:L, reg order42:V, reg dr82:V, reg dc41:L, reg dx144:V, reg dx145:V, reg __22:cls, reg r354:V, reg p29:p(V +), reg r356:V, reg diff1:cls, reg dxreg:*, reg dxreg1:V, reg p30:p(V +), reg order43:*, reg order44:V, reg c209:L, reg order46:V, reg dr84:V, reg dc42:L, reg dx146:V, reg dx147:V, reg __23:cls, reg r358:V, reg p31:p(V +), reg r360:V, reg seasonal73:*, reg seasonal74:V, reg c210:L, reg seasonal76:V, reg dr86:V, reg dc43:L, reg dx148:V, reg dx149:V, reg r362:V, reg r363:V, reg c211:L, reg c213:V, reg seasonal77:*, reg seasonal78:V, reg c214:L, reg c216:L, reg seasonal80:V, reg dr88:V, reg dc44:L, reg dx150:V, reg c218:L, reg dx151:V, reg r364:V, reg c219:L, reg c221:L, reg dx153:V, reg dr90:V, reg dc45:L, reg dx154:V, reg c223:L, reg dx155:V, reg __24:cls, reg r365:V, reg r366:V, reg c224:L, reg c225:V, reg c227:L, reg diff2:cls, reg dx156:*, reg dx157:V, reg p32:p(V +), reg seasonal81:*, reg seasonal82:V, reg c228:L, reg seasonal84:V, reg dr92:V, reg dc46:L, reg dx158:V, reg dx159:V, reg r368:V, reg p33:p(V +), reg seasonal85:*, reg seasonal86:V, reg c229:L, reg seasonal88:V, reg dr94:V, reg dc47:L, reg dx160:V, reg dx161:V, reg r370:V, reg c230:L, reg dx163:V, reg dr96:V, reg dc48:L, reg dx164:V, reg dx165:V, reg __25:cls, reg r371:V, reg p34:p(V +), reg r373:V, reg diff3:cls, reg dxreg2:*, reg dxreg3:V, reg p35:p(V +), reg seasonal89:*, reg seasonal90:V, reg c231:L, reg seasonal92:V, reg dr98:V, reg dc49:L, reg dx166:V, reg dx167:V, reg r375:V, reg p36:p(V +), reg seasonal93:*, reg seasonal94:V, reg c232:L, reg seasonal96:V, reg dr100:V, reg dc50:L, reg dx168:V, reg dx169:V, reg r377:V, reg c233:L, reg dx171:V, reg dr102:V, reg dc51:L, reg dx172:V, reg dx173:V, reg __26:cls, reg r378:V, reg p37:p(V +), reg r380:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r382:V, reg r383:V, reg dx174:*, reg dx175:V, reg length6:cls, reg r384:V, reg ncol:cls, reg dxreg4:*, reg dxreg5:V, reg p38:p(V +), reg r386:V, reg r387:V, reg c234:L, reg lm:cls, reg __27:cls, reg r388:V, reg p39:p(V +), reg na_omit1:*, reg na_omit2:V, reg p40:p(V +), reg r391:V, reg r392:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r393:V, reg list3:cls, reg r394:V, reg fit:*, reg fit1:V, reg c235:L, reg fit3:V, reg dr104:V, reg dc52:L, reg dx176:V, reg dx177:V, reg r395:V, reg r396:V, reg c236:L, reg lm1:cls, reg __28:cls, reg r397:V, reg p41:p(V +), reg na_omit3:*, reg na_omit4:V, reg p42:p(V +), reg r400:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r402:V, reg r403:V, reg x21:*, reg x22:V, reg is_na3:cls, reg r404:V, reg apply:cls, reg xreg23:*, reg xreg24:V, reg p43:p(V +), reg anyNA2:*, reg anyNA3:V, reg p44:p(V +), reg r407:V, reg r408:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r409:V, reg r410:V, reg isna:*, reg isna1:V, reg r411:V, reg sum2:cls, reg r412:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r415:V, reg r416:V, reg r417:V, reg Delta10:*, reg Delta11:V, reg length7:cls, reg r418:V, reg r419:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r420:V, reg r421:V, reg init1:*, reg init2:V, reg coef:cls, reg fit4:*, reg fit5:V, reg p45:p(V +), reg r423:V, reg c237:cls, reg r424:V, reg summary:cls, reg fit6:*, reg fit7:V, reg p46:p(V +), reg r426:V, reg c238:L, reg r428:V, reg dr106:V, reg dc53:L, reg dx178:V, reg dx179:V, reg r429:V, reg c239:L, reg dr108:V, reg dc54:L, reg dx182:V, reg dx183:V, reg __29:cls, reg r430:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r431:V, reg r432:V, reg parscale:*, reg parscale1:V, reg ses:*, reg ses1:V, reg r433:V, reg c240:cls, reg r434:V, reg n_used:*, reg n_used1:V, reg r436:V, reg c241:L, reg stop8:cls, reg r437:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r439:V, reg r440:V, reg init3:*, reg init4:V, reg c242:V, reg r441:V, reg c243:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r442:V, reg r443:V, reg init5:*, reg init6:V, reg length8:cls, reg r444:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r447:V, reg r448:V, reg r449:V, reg init7:*, reg init8:V, reg length9:cls, reg r450:V, reg r451:V, reg c244:L, reg stop9:cls, reg r452:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r454:V, reg r455:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r456:V, reg r457:V, reg init9:*, reg init10:V, reg is_na4:cls, reg r458:V, reg any6:cls, reg r459:V, reg c245:L, reg init11:*, reg init12:V, reg c246:L, reg init14:V, reg dr110:V, reg dc55:L, reg dx184:V, reg dx185:V, reg ind2:*, reg ind3:V, reg __30:cls, reg r460:V, reg l11:*, reg c247:L, reg dx187:V, reg l13:*, reg dr112:V, reg dc56:L, reg dx189:V, reg dx190:V, reg dx191:V, reg ind4:*, reg ind5:V, reg ___3:cls, reg r461:V, reg method9:*, reg method10:V, reg r462:V, reg c248:L, reg arma20:*, reg arma21:V, reg c249:L, reg arma23:V, reg dr114:V, reg dc57:L, reg dx193:V, reg dx194:V, reg __31:cls, reg r463:V, reg r464:V, reg c250:L, reg arCheck:cls, reg init15:*, reg init16:V, reg c251:L, reg init18:V, reg dr116:V, reg dc58:L, reg dx195:V, reg dx196:V, reg arma24:*, reg arma25:V, reg c252:L, reg init20:V, reg r466:I, reg arma27:V, reg dr118:V, reg dc59:L, reg dx197:V, reg init22:V, reg r468:I, reg dx198:V, reg __32:cls, reg r469:V, reg r470:V, reg __33:cls, reg r471:V, reg p47:p(V +), reg r473:V, reg r474:V, reg c253:L, reg stop10:cls, reg r475:V, reg r476:V, reg arma28:*, reg arma29:V, reg c254:L, reg arma31:V, reg dr120:V, reg dc60:L, reg dx199:V, reg dx200:V, reg __34:cls, reg r478:V, reg r479:V, reg c255:L, reg arCheck1:cls, reg init23:*, reg init24:V, reg c256:L, reg init26:V, reg dr122:V, reg dc61:L, reg dx201:V, reg dx202:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r480:V, reg init29:V, reg r481:V, reg arma32:*, reg arma33:V, reg c257:L, reg init31:V, reg arma35:V, reg dr124:V, reg dc62:L, reg dx203:V, reg init33:V, reg dx204:V, reg __35:cls, reg r482:V, reg sum3:cls, reg r483:V, reg arma36:*, reg arma37:V, reg c258:L, reg init35:V, reg r486:V, reg r487:I, reg arma39:V, reg dr126:V, reg dc63:L, reg dx205:V, reg init37:V, reg r490:V, reg r491:I, reg dx206:V, reg __36:cls, reg r492:V, reg r493:V, reg r494:V, reg __37:cls, reg r495:V, reg p48:p(V +), reg r497:V, reg r498:V, reg c259:L, reg stop11:cls, reg r499:V, reg r500:V, reg transform_pars3:*, reg transform_pars4:V, reg c260:L, reg sym68:cls, reg base68:cls, reg guard68:L, reg r502:V, reg r503:V, reg C_ARIMA_Invtrans:*, reg C_ARIMA_Invtrans1:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r504:V, reg C_ARIMA_Invtrans4:V, reg r505:V, reg init38:*, reg init39:V, reg as_double:cls, reg r506:V, reg arma40:*, reg arma41:V, reg vargs:dots, reg r507:V, reg r508:V, reg r509:V, reg init40:*, reg init41:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r511:V, reg r512:V, reg fixed7:*, reg fixed8:V, reg as_double1:cls, reg r513:V, reg _in_:cls, reg sym71:cls, reg base71:cls, reg guard71:L, reg r514:V, reg r515:V, reg optim_control1:*, reg optim_control2:V, reg names:cls, reg r516:V, reg p49:p(V +), reg r518:V, reg r519:V, reg c261:L, reg parscale2:*, reg parscale3:V, reg c262:L, reg parscale5:V, reg dr128:V, reg dc64:L, reg dx207:V, reg dx208:V, reg mask21:*, reg mask22:V, reg __38:cls, reg r520:V, reg l14:*, reg c263:L, reg dx210:V, reg l16:*, reg dr130:V, reg dc65:L, reg dx212:V, reg dx213:V, reg dx214:V, reg r521:V, reg method11:*, reg method12:V, reg r522:V, reg c264:L, reg no_optim2:*, reg no_optim3:V, reg c265:L, reg sym72:cls, reg base72:cls, reg guard72:L, reg r523:V, reg r524:V, reg numeric:cls, reg r525:V, reg armaCSS:cls, reg numeric1:cls, reg r526:V, reg p50:p(V +), reg r528:V, reg list4:cls, reg r529:V, reg r530:V, reg optim:cls, reg init42:*, reg init43:V, reg c266:L, reg init45:V, reg dr132:V, reg dc66:L, reg dx216:V, reg dx217:V, reg mask23:*, reg mask24:V, reg __39:cls, reg r531:V, reg p51:p(V +), reg armaCSS1:*, reg armaCSS2:V, reg p52:p(V +), reg optim_method1:*, reg optim_method2:V, reg p53:p(V +), reg optim_control3:*, reg optim_control4:V, reg p54:p(V +), reg r536:V, reg res:*, reg res1:V, reg c267:L, reg res3:V, reg dr134:V, reg dc67:L, reg dx218:V, reg dx219:V, reg r537:V, reg r538:V, reg c268:L, reg warning1:cls, reg gettextf:cls, reg res4:*, reg res5:V, reg c269:L, reg res7:V, reg dr136:V, reg dc68:L, reg dx220:V, reg dx221:V, reg r539:V, reg p55:p(V +), reg r541:V, reg p56:p(V +), reg r543:V, reg res8:*, reg res9:V, reg c270:L, reg res11:V, reg dr138:V, reg dc69:L, reg dx222:V, reg dx223:V, reg r545:V, reg l17:*, reg c271:L, reg dx225:V, reg l19:*, reg dr140:V, reg dc70:L, reg dx227:V, reg dx229:V, reg mask25:*, reg mask26:V, reg ___4:cls, reg r546:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r547:V, reg r548:V, reg C_ARIMA_transPars:*, reg C_ARIMA_transPars1:V, reg coef1:*, reg coef2:V, reg arma42:*, reg arma43:V, reg vargs1:dots, reg r549:V, reg makeARIMA:cls, reg trarma:*, reg trarma1:V, reg c272:L, reg trarma3:V, reg dr142:V, reg dc71:L, reg dx230:V, reg dx231:V, reg __40:cls, reg r550:V, reg p57:p(V +), reg trarma4:*, reg trarma5:V, reg c273:L, reg trarma7:V, reg dr144:V, reg dc72:L, reg dx232:V, reg dx233:V, reg __41:cls, reg r552:V, reg p58:p(V +), reg Delta12:*, reg Delta13:V, reg p59:p(V +), reg kappa1:*, reg kappa2:V, reg p60:p(V +), reg SSinit5:*, reg SSinit6:V, reg p61:p(V +), reg r557:V, reg ncxreg18:*, reg ncxreg19:V, reg r558:V, reg c274:L, reg x23:*, reg x24:V, reg xreg25:*, reg xreg26:V, reg coef3:*, reg coef4:V, reg c275:L, reg x26:V, reg coef6:V, reg dr146:V, reg dc73:L, reg dx234:V, reg x28:V, reg dx235:V, reg narma6:*, reg narma7:V, reg ncxreg20:*, reg ncxreg21:V, reg r559:V, reg r560:V, reg __42:cls, reg r561:V, reg ___5:cls, reg r562:V, reg r563:V, reg arimaSS:cls, reg x29:*, reg x30:V, reg p62:p(V +), reg mod:*, reg mod1:V, reg p63:p(V +), reg r567:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r568:V, reg r569:V, reg C_ARIMA_CSS:*, reg C_ARIMA_CSS1:V, reg x31:*, reg x32:V, reg arma44:*, reg arma45:V, reg trarma8:*, reg trarma9:V, reg c276:L, reg C_ARIMA_CSS3:V, reg x34:V, reg arma47:V, reg trarma11:V, reg dr148:V, reg dc74:L, reg dx236:V, reg C_ARIMA_CSS5:V, reg x36:V, reg arma49:V, reg dx237:V, reg __43:cls, reg r570:V, reg trarma12:*, reg trarma13:V, reg c277:L, reg C_ARIMA_CSS7:V, reg x38:V, reg arma51:V, reg dx239:V, reg trarma15:V, reg dr150:V, reg dc75:L, reg dx241:V, reg C_ARIMA_CSS9:V, reg x40:V, reg arma53:V, reg dx242:V, reg dx243:V, reg __44:cls, reg r571:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r572:V, reg C_ARIMA_CSS12:V, reg x43:V, reg arma56:V, reg dx248:V, reg dx249:V, reg r573:V, reg ncond15:*, reg ncond16:V, reg as_integer1:cls, reg r574:V, reg vargs2:dots, reg r575:V, reg val:*, reg val1:V, reg c278:L, reg val3:V, reg dr152:V, reg dc76:L, reg dx250:V, reg dx251:V, reg __45:cls, reg r576:V, reg no_optim4:*, reg no_optim5:V, reg c279:L, reg numeric2:cls, reg r577:V, reg r578:V, reg solve:cls, reg res12:*, reg res13:V, reg c280:L, reg res15:V, reg dr154:V, reg dc77:L, reg dx252:V, reg dx253:V, reg r579:V, reg n_used2:*, reg n_used3:V, reg r580:V, reg p64:p(V +), reg r582:V, reg method13:*, reg method14:V, reg r584:V, reg c281:L, reg no_optim6:*, reg no_optim7:V, reg c282:L, reg sym76:cls, reg base76:cls, reg guard76:L, reg r585:V, reg r586:V, reg numeric3:cls, reg r587:V, reg armaCSS3:cls, reg numeric4:cls, reg r588:V, reg p65:p(V +), reg r590:V, reg list5:cls, reg r591:V, reg r592:V, reg optim1:cls, reg init46:*, reg init47:V, reg c283:L, reg init49:V, reg dr156:V, reg dc78:L, reg dx254:V, reg dx255:V, reg mask27:*, reg mask28:V, reg __46:cls, reg r593:V, reg p66:p(V +), reg armaCSS4:*, reg armaCSS5:V, reg p67:p(V +), reg optim_method3:*, reg optim_method4:V, reg p68:p(V +), reg optim_control5:*, reg optim_control6:V, reg p69:p(V +), reg r598:V, reg res16:*, reg res17:V, reg c284:L, reg res19:V, reg dr158:V, reg dc79:L, reg dx256:V, reg dx257:V, reg r599:V, reg r600:V, reg c285:L, reg res20:*, reg res21:V, reg c286:L, reg res23:V, reg dr160:V, reg dc80:L, reg dx258:V, reg dx259:V, reg r601:V, reg l20:*, reg c287:L, reg dx261:V, reg l22:*, reg dr162:V, reg dc81:L, reg dx263:V, reg dx264:V, reg dx265:V, reg mask29:*, reg mask30:V, reg ___6:cls, reg r602:V, reg arma57:*, reg arma58:V, reg c288:L, reg arma60:V, reg dr164:V, reg dc82:L, reg dx267:V, reg dx268:V, reg __47:cls, reg r603:V, reg r604:V, reg c289:L, reg arCheck2:cls, reg init50:*, reg init51:V, reg c290:L, reg init53:V, reg dr166:V, reg dc83:L, reg dx269:V, reg dx270:V, reg arma61:*, reg arma62:V, reg c291:L, reg init55:V, reg r606:I, reg arma64:V, reg dr168:V, reg dc84:L, reg dx271:V, reg init57:V, reg r608:I, reg dx272:V, reg __48:cls, reg r609:V, reg r610:V, reg __49:cls, reg r611:V, reg p70:p(V +), reg r613:V, reg r614:V, reg c292:L, reg stop12:cls, reg r615:V, reg r616:V, reg arma65:*, reg arma66:V, reg c293:L, reg arma68:V, reg dr170:V, reg dc85:L, reg dx273:V, reg dx274:V, reg __50:cls, reg r618:V, reg r619:V, reg c294:L, reg arCheck3:cls, reg init58:*, reg init59:V, reg c295:L, reg init61:V, reg dr172:V, reg dc86:L, reg dx275:V, reg dx276:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r620:V, reg init64:V, reg r621:V, reg arma69:*, reg arma70:V, reg c296:L, reg init66:V, reg arma72:V, reg dr174:V, reg dc87:L, reg dx277:V, reg init68:V, reg dx278:V, reg __51:cls, reg r622:V, reg sum4:cls, reg r623:V, reg arma73:*, reg arma74:V, reg c297:L, reg init70:V, reg r626:V, reg r627:I, reg arma76:V, reg dr176:V, reg dc88:L, reg dx279:V, reg init72:V, reg r630:V, reg r631:I, reg dx280:V, reg __52:cls, reg r632:V, reg r633:V, reg r634:V, reg __53:cls, reg r635:V, reg p71:p(V +), reg r637:V, reg r638:V, reg c298:L, reg stop13:cls, reg r639:V, reg r640:V, reg transform_pars5:*, reg transform_pars6:V, reg c299:L, reg sym78:cls, reg base78:cls, reg guard78:L, reg r643:V, reg r644:V, reg C_ARIMA_Invtrans5:*, reg C_ARIMA_Invtrans6:V, reg init73:*, reg init74:V, reg arma77:*, reg arma78:V, reg vargs3:dots, reg r645:V, reg arma79:*, reg arma80:V, reg c300:L, reg arma82:V, reg dr178:V, reg dc89:L, reg dx281:V, reg dx282:V, reg __54:cls, reg r646:V, reg r647:V, reg c301:L, reg arma83:*, reg arma84:V, reg c302:L, reg arma86:V, reg dr180:V, reg dc90:L, reg dx283:V, reg dx284:V, reg __55:cls, reg r648:V, reg arma87:*, reg arma88:V, reg c303:L, reg dx286:V, reg r650:I, reg arma90:V, reg dr182:V, reg dc91:L, reg dx288:V, reg dx289:V, reg r652:I, reg dx290:V, reg __56:cls, reg r653:V, reg r654:V, reg r655:V, reg maInvert:cls, reg init75:*, reg init76:V, reg c304:L, reg init78:V, reg dr184:V, reg dc92:L, reg dx291:V, reg dx292:V, reg ind6:*, reg ind7:V, reg __57:cls, reg r656:V, reg p72:p(V +), reg r658:V, reg l23:*, reg c305:L, reg r660:V, reg l25:*, reg dr186:V, reg dc93:L, reg dx293:V, reg r662:V, reg dx294:V, reg ind8:*, reg ind9:V, reg ___7:cls, reg r663:V, reg arma91:*, reg arma92:V, reg c306:L, reg arma94:V, reg dr188:V, reg dc94:L, reg dx295:V, reg dx296:V, reg __58:cls, reg r665:V, reg r666:V, reg c307:L, reg sym79:cls, reg base79:cls, reg guard79:L, reg r667:V, reg r668:V, reg arma95:*, reg arma96:V, reg c308:L, reg arma98:V, reg dr190:V, reg dc95:L, reg dx297:V, reg dx298:V, reg __59:cls, reg r669:V, reg sum5:cls, reg r670:V, reg arma99:*, reg arma100:V, reg c309:L, reg r673:V, reg r674:I, reg arma102:V, reg dr192:V, reg dc96:L, reg dx299:V, reg r677:V, reg r678:I, reg dx300:V, reg __60:cls, reg r679:V, reg r680:V, reg r681:V, reg maInvert1:cls, reg init79:*, reg init80:V, reg c310:L, reg init82:V, reg dr194:V, reg dc97:L, reg dx301:V, reg dx302:V, reg ind10:*, reg ind11:V, reg __61:cls, reg r682:V, reg p73:p(V +), reg r684:V, reg l26:*, reg c311:L, reg r686:V, reg l28:*, reg dr196:V, reg dc98:L, reg dx303:V, reg r688:V, reg dx304:V, reg ind12:*, reg ind13:V, reg ___8:cls, reg r689:V, reg r690:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r692:V, reg r693:V, reg C_ARIMA_transPars2:*, reg C_ARIMA_transPars3:V, reg init83:*, reg init84:V, reg arma103:*, reg arma104:V, reg transform_pars7:*, reg transform_pars8:V, reg vargs4:dots, reg r694:V, reg makeARIMA1:cls, reg trarma16:*, reg trarma17:V, reg c312:L, reg trarma19:V, reg dr198:V, reg dc99:L, reg dx305:V, reg dx306:V, reg __62:cls, reg r695:V, reg p74:p(V +), reg trarma20:*, reg trarma21:V, reg c313:L, reg trarma23:V, reg dr200:V, reg dc100:L, reg dx307:V, reg dx308:V, reg __63:cls, reg r697:V, reg p75:p(V +), reg Delta14:*, reg Delta15:V, reg p76:p(V +), reg kappa3:*, reg kappa4:V, reg p77:p(V +), reg SSinit7:*, reg SSinit8:V, reg p78:p(V +), reg r702:V, reg no_optim8:*, reg no_optim9:V, reg c314:L, reg sym81:cls, reg base81:cls, reg guard81:L, reg r703:V, reg r704:V, reg numeric5:cls, reg r705:V, reg armafn:cls, reg numeric6:cls, reg r706:V, reg p79:p(V +), reg sym82:cls, reg base82:cls, reg guard82:L, reg r708:V, reg r709:V, reg transform_pars9:*, reg transform_pars10:V, reg as_logical:cls, reg r710:V, reg p80:p(V +), reg r712:V, reg list6:cls, reg r713:V, reg r714:V, reg optim2:cls, reg init85:*, reg init86:V, reg c315:L, reg init88:V, reg dr202:V, reg dc101:L, reg dx309:V, reg dx310:V, reg mask31:*, reg mask32:V, reg __64:cls, reg r715:V, reg p81:p(V +), reg armafn1:*, reg armafn2:V, reg p82:p(V +), reg optim_method5:*, reg optim_method6:V, reg p83:p(V +), reg optim_control7:*, reg optim_control8:V, reg p84:p(V +), reg sym83:cls, reg base83:cls, reg guard83:L, reg r720:V, reg r721:V, reg transform_pars11:*, reg transform_pars12:V, reg as_logical1:cls, reg r722:V, reg p85:p(V +), reg r724:V, reg res24:*, reg res25:V, reg c316:L, reg res27:V, reg dr204:V, reg dc102:L, reg dx311:V, reg dx312:V, reg r725:V, reg r726:V, reg c317:L, reg warning2:cls, reg gettextf1:cls, reg res28:*, reg res29:V, reg c318:L, reg res31:V, reg dr206:V, reg dc103:L, reg dx313:V, reg dx314:V, reg r727:V, reg p86:p(V +), reg r729:V, reg p87:p(V +), reg r731:V, reg res32:*, reg res33:V, reg c319:L, reg res35:V, reg dr208:V, reg dc104:L, reg dx315:V, reg dx316:V, reg r733:V, reg l29:*, reg c320:L, reg dx318:V, reg l31:*, reg dr210:V, reg dc105:L, reg dx320:V, reg dx322:V, reg mask33:*, reg mask34:V, reg ___9:cls, reg r734:V, reg transform_pars13:*, reg transform_pars14:V, reg c321:L, reg arma105:*, reg arma106:V, reg c322:L, reg arma108:V, reg dr212:V, reg dc106:L, reg dx323:V, reg dx324:V, reg __65:cls, reg r735:V, reg r736:V, reg c323:L, reg arma109:*, reg arma110:V, reg c324:L, reg arma112:V, reg dr214:V, reg dc107:L, reg dx325:V, reg dx326:V, reg __66:cls, reg r737:V, reg arma113:*, reg arma114:V, reg c325:L, reg dx328:V, reg r739:I, reg arma116:V, reg dr216:V, reg dc108:L, reg dx330:V, reg dx331:V, reg r741:I, reg dx332:V, reg __67:cls, reg r742:V, reg r743:V, reg r744:V, reg sym84:cls, reg base84:cls, reg guard84:L, reg r745:V, reg r746:V, reg mask35:*, reg mask36:V, reg c326:L, reg mask38:V, reg dr218:V, reg dc109:L, reg dx333:V, reg dx334:V, reg ind14:*, reg ind15:V, reg __68:cls, reg r747:V, reg all:cls, reg r748:V, reg c327:L, reg maInvert2:cls, reg coef7:*, reg coef8:V, reg c328:L, reg coef10:V, reg dr220:V, reg dc110:L, reg dx335:V, reg dx336:V, reg ind16:*, reg ind17:V, reg __69:cls, reg r749:V, reg p88:p(V +), reg r751:V, reg l32:*, reg c329:L, reg r753:V, reg l34:*, reg dr222:V, reg dc111:L, reg dx337:V, reg r755:V, reg dx338:V, reg ind18:*, reg ind19:V, reg ___10:cls, reg r756:V, reg r757:V, reg arma117:*, reg arma118:V, reg c330:L, reg arma120:V, reg dr224:V, reg dc112:L, reg dx339:V, reg dx340:V, reg __70:cls, reg r759:V, reg r760:V, reg c331:L, reg sym85:cls, reg base85:cls, reg guard85:L, reg r761:V, reg r762:V, reg arma121:*, reg arma122:V, reg c332:L, reg arma124:V, reg dr226:V, reg dc113:L, reg dx341:V, reg dx342:V, reg __71:cls, reg r763:V, reg sum6:cls, reg r764:V, reg arma125:*, reg arma126:V, reg c333:L, reg r767:V, reg r768:I, reg arma128:V, reg dr228:V, reg dc114:L, reg dx343:V, reg r771:V, reg r772:I, reg dx344:V, reg __72:cls, reg r773:V, reg r774:V, reg r775:V, reg sym86:cls, reg base86:cls, reg guard86:L, reg r776:V, reg r777:V, reg mask39:*, reg mask40:V, reg c334:L, reg mask42:V, reg dr230:V, reg dc115:L, reg dx345:V, reg dx346:V, reg ind20:*, reg ind21:V, reg __73:cls, reg r778:V, reg all1:cls, reg r779:V, reg c335:L, reg maInvert3:cls, reg coef11:*, reg coef12:V, reg c336:L, reg coef14:V, reg dr232:V, reg dc116:L, reg dx347:V, reg dx348:V, reg ind22:*, reg ind23:V, reg __74:cls, reg r780:V, reg p89:p(V +), reg r782:V, reg l35:*, reg c337:L, reg r784:V, reg l37:*, reg dr234:V, reg dc117:L, reg dx349:V, reg r786:V, reg dx350:V, reg ind24:*, reg ind25:V, reg ___11:cls, reg r787:V, reg r788:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r790:V, reg r791:V, reg coef15:*, reg coef16:V, reg c338:L, reg coef18:V, reg dr236:V, reg dc118:L, reg dx351:V, reg dx352:V, reg mask43:*, reg mask44:V, reg __75:cls, reg r792:V, reg res36:*, reg res37:V, reg c339:L, reg dx354:V, reg res39:V, reg dr238:V, reg dc119:L, reg dx356:V, reg dx357:V, reg dx358:V, reg r793:V, reg r794:V, reg any7:cls, reg r795:V, reg c340:L, reg res40:*, reg res41:V, reg c341:L, reg res43:V, reg dr240:V, reg dc120:L, reg dx359:V, reg dx360:V, reg r796:V, reg optim3:cls, reg coef19:*, reg coef20:V, reg c342:L, reg coef22:V, reg dr242:V, reg dc121:L, reg dx361:V, reg dx362:V, reg mask45:*, reg mask46:V, reg __76:cls, reg r797:V, reg p90:p(V +), reg armafn3:*, reg armafn4:V, reg p91:p(V +), reg optim_method7:*, reg optim_method8:V, reg p92:p(V +), reg sym88:cls, reg base88:cls, reg guard88:L, reg r801:V, reg r802:V, reg optim_control9:*, reg optim_control10:V, reg c343:L, reg optim_control12:V, reg dr244:V, reg dc122:L, reg dx363:V, reg dx364:V, reg r803:V, reg list7:cls, reg r804:V, reg p93:p(V +), reg r806:V, reg oldcode:*, reg oldcode1:V, reg l38:*, reg c344:L, reg oldcode3:V, reg l40:*, reg dr246:V, reg dc123:L, reg dx365:V, reg dx366:V, reg r807:V, reg res44:*, reg res45:V, reg c345:L, reg res47:V, reg dr248:V, reg dc124:L, reg dx367:V, reg dx368:V, reg r808:V, reg l41:*, reg c346:L, reg dx370:V, reg l43:*, reg dr250:V, reg dc125:L, reg dx372:V, reg dx373:V, reg dx374:V, reg mask47:*, reg mask48:V, reg ___12:cls, reg r809:V, reg sym89:cls, reg base89:cls, reg guard89:L, reg r810:V, reg r811:V, reg C_ARIMA_Gradtrans:*, reg C_ARIMA_Gradtrans1:V, reg sym90:cls, reg base90:cls, reg guard90:L, reg r812:V, reg C_ARIMA_Gradtrans4:V, reg r813:V, reg coef23:*, reg coef24:V, reg as_double2:cls, reg r814:V, reg arma129:*, reg arma130:V, reg vargs5:dots, reg r815:V, reg A:*, reg A1:V, reg c347:L, reg A3:V, reg dr252:V, reg dc126:L, reg dx376:V, reg dx377:V, reg mask49:*, reg mask50:V, reg mask51:*, reg mask52:V, reg __77:cls, reg r816:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r817:V, reg r818:V, reg A4:*, reg A5:V, reg solve1:cls, reg res48:*, reg res49:V, reg c348:L, reg res51:V, reg dr254:V, reg dc127:L, reg dx378:V, reg dx379:V, reg r819:V, reg n_used4:*, reg n_used5:V, reg r820:V, reg p94:p(V +), reg A6:*, reg A7:V, reg p95:p(V +), reg r823:V, reg crossprod:cls, reg r824:V, reg sym92:cls, reg base92:cls, reg guard92:L, reg r825:V, reg r826:V, reg C_ARIMA_undoPars:*, reg C_ARIMA_undoPars1:V, reg coef25:*, reg coef26:V, reg arma131:*, reg arma132:V, reg vargs6:dots, reg r827:V, reg no_optim10:*, reg no_optim11:V, reg c349:L, reg numeric7:cls, reg r829:V, reg r830:V, reg solve2:cls, reg res52:*, reg res53:V, reg c350:L, reg res55:V, reg dr256:V, reg dc128:L, reg dx380:V, reg dx381:V, reg r831:V, reg n_used6:*, reg n_used7:V, reg r832:V, reg p96:p(V +), reg r834:V, reg sym93:cls, reg base93:cls, reg guard93:L, reg r835:V, reg r836:V, reg C_ARIMA_transPars4:*, reg C_ARIMA_transPars5:V, reg coef27:*, reg coef28:V, reg arma133:*, reg arma134:V, reg vargs7:dots, reg r837:V, reg makeARIMA2:cls, reg trarma24:*, reg trarma25:V, reg c351:L, reg trarma27:V, reg dr258:V, reg dc129:L, reg dx382:V, reg dx383:V, reg __78:cls, reg r838:V, reg p97:p(V +), reg trarma28:*, reg trarma29:V, reg c352:L, reg trarma31:V, reg dr260:V, reg dc130:L, reg dx384:V, reg dx385:V, reg __79:cls, reg r840:V, reg p98:p(V +), reg Delta16:*, reg Delta17:V, reg p99:p(V +), reg kappa5:*, reg kappa6:V, reg p100:p(V +), reg SSinit9:*, reg SSinit10:V, reg p101:p(V +), reg r845:V, reg ncxreg22:*, reg ncxreg23:V, reg r846:V, reg c353:L, reg arimaSS1:cls, reg x44:*, reg x45:V, reg xreg27:*, reg xreg28:V, reg coef29:*, reg coef30:V, reg c354:L, reg x47:V, reg coef32:V, reg dr262:V, reg dc131:L, reg dx386:V, reg x49:V, reg dx387:V, reg narma8:*, reg narma9:V, reg ncxreg24:*, reg ncxreg25:V, reg r847:V, reg r848:V, reg __80:cls, reg r849:V, reg ___13:cls, reg r850:V, reg r851:V, reg p102:p(V +), reg mod2:*, reg mod3:V, reg p103:p(V +), reg r854:V, reg r855:V, reg arimaSS2:cls, reg x50:*, reg x51:V, reg p104:p(V +), reg mod4:*, reg mod5:V, reg p105:p(V +), reg r858:V, reg val4:*, reg val5:V, reg c355:L, reg val7:V, reg dr264:V, reg dc132:L, reg dx388:V, reg dx389:V, reg __81:cls, reg r859:V, reg c356:L, reg dx391:V, reg dr266:V, reg dc133:L, reg dx392:V, reg dx393:V, reg __82:cls, reg r860:V, reg n_used8:*, reg n_used9:V, reg r861:V, reg n_used10:*, reg n_used11:V, reg r862:V, reg res56:*, reg res57:V, reg c357:L, reg r864:V, reg res59:V, reg dr268:V, reg dc134:L, reg dx394:V, reg r866:V, reg dx395:V, reg r867:V, reg r868:V, reg n_used12:*, reg n_used13:V, reg r869:V, reg n_used14:*, reg n_used15:V, reg sym94:cls, reg base94:cls, reg guard94:L, reg r872:V, reg r873:V, reg n_used18:V, reg r874:V, reg r875:V, reg r876:V, reg r877:V, reg method15:*, reg method16:V, reg r878:V, reg c358:L, reg value:*, reg value1:V, reg sym95:cls, reg base95:cls, reg guard95:L, reg r881:V, reg value4:V, reg r882:R, reg r883:V, reg mask53:*, reg mask54:V, reg sum7:cls, reg r884:V, reg r885:V, reg r886:V, reg r887:V, reg r888:V, reg arma135:*, reg arma136:V, reg c359:L, reg arma138:V, reg dr270:V, reg dc135:L, reg dx396:V, reg dx397:V, reg __83:cls, reg r889:V, reg r890:V, reg c360:L, reg sym96:cls, reg base96:cls, reg guard96:L, reg r891:V, reg r892:V, reg nm:*, reg nm1:V, reg paste1:cls, reg arma139:*, reg arma140:V, reg c361:L, reg r894:I, reg arma142:V, reg dr272:V, reg dc136:L, reg dx398:V, reg r896:I, reg dx399:V, reg __84:cls, reg r897:V, reg r898:V, reg p106:p(V +), reg r900:V, reg c362:cls, reg r901:V, reg arma143:*, reg arma144:V, reg c363:L, reg arma146:V, reg dr274:V, reg dc137:L, reg dx400:V, reg dx401:V, reg __85:cls, reg r903:V, reg r904:V, reg c364:L, reg sym97:cls, reg base97:cls, reg guard97:L, reg r905:V, reg r906:V, reg nm2:*, reg nm3:V, reg paste2:cls, reg arma147:*, reg arma148:V, reg c365:L, reg r908:I, reg arma150:V, reg dr276:V, reg dc138:L, reg dx402:V, reg r910:I, reg dx403:V, reg __86:cls, reg r911:V, reg r912:V, reg p107:p(V +), reg r914:V, reg c366:cls, reg r915:V, reg arma151:*, reg arma152:V, reg c367:L, reg arma154:V, reg dr278:V, reg dc139:L, reg dx404:V, reg dx405:V, reg __87:cls, reg r917:V, reg r918:V, reg c368:L, reg sym98:cls, reg base98:cls, reg guard98:L, reg r919:V, reg r920:V, reg nm4:*, reg nm5:V, reg paste3:cls, reg arma155:*, reg arma156:V, reg c369:L, reg r922:I, reg arma158:V, reg dr280:V, reg dc140:L, reg dx406:V, reg r924:I, reg dx407:V, reg __88:cls, reg r925:V, reg r926:V, reg p108:p(V +), reg r928:V, reg c370:cls, reg r929:V, reg arma159:*, reg arma160:V, reg c371:L, reg arma162:V, reg dr282:V, reg dc141:L, reg dx408:V, reg dx409:V, reg __89:cls, reg r931:V, reg r932:V, reg c372:L, reg sym99:cls, reg base99:cls, reg guard99:L, reg r933:V, reg r934:V, reg nm6:*, reg nm7:V, reg paste4:cls, reg arma163:*, reg arma164:V, reg c373:L, reg r936:I, reg arma166:V, reg dr284:V, reg dc142:L, reg dx410:V, reg r938:I, reg dx411:V, reg __90:cls, reg r939:V, reg r940:V, reg p109:p(V +), reg r942:V, reg c374:cls, reg r943:V, reg ncxreg26:*, reg ncxreg27:V, reg r945:V, reg c375:L, reg sym100:cls, reg base100:cls, reg guard100:L, reg r946:V, reg r947:V, reg nm8:*, reg nm9:V, reg cn:*, reg cn1:V, reg c376:cls, reg r948:V, reg orig_xreg2:*, reg orig_xreg3:V, reg r949:V, reg c377:L, reg narma10:*, reg narma11:V, reg ncxreg28:*, reg ncxreg29:V, reg r950:V, reg r951:V, reg S4:*, reg S5:V, reg c378:L, reg S7:V, reg dr286:V, reg dc143:L, reg dx412:V, reg dx413:V, reg r952:V, reg coef33:*, reg coef34:V, reg c379:L, reg coef36:V, reg dr288:V, reg dc144:L, reg dx414:V, reg dx415:V, reg ind26:*, reg ind27:V, reg __91:cls, reg r953:V, reg ___14:cls, reg r954:V, reg l44:*, reg c380:L, reg r956:V, reg l46:*, reg dr290:V, reg dc145:L, reg dx416:V, reg dx417:V, reg ind28:*, reg ind29:V, reg ___15:cls, reg r959:V, reg diag:cls, reg narma12:*, reg narma13:V, reg ncxreg30:*, reg ncxreg31:V, reg r960:V, reg p110:p(V +), reg r962:V, reg S8:*, reg S9:V, reg c381:L, reg S11:V, reg dr292:V, reg dc146:L, reg dx418:V, reg dx419:V, reg r963:V, reg l47:*, reg c382:L, reg dx421:V, reg l49:*, reg dr294:V, reg dc147:L, reg dx423:V, reg dx425:V, reg ind30:*, reg ind31:V, reg ind32:*, reg ind33:V, reg ___16:cls, reg r964:V, reg A8:*, reg A9:V, reg c383:L, reg A11:V, reg dr296:V, reg dc148:L, reg dx426:V, reg dx427:V, reg mask55:*, reg mask56:V, reg mask57:*, reg mask58:V, reg __92:cls, reg r965:V, reg A12:*, reg A13:V, reg var:*, reg var1:V, reg ___17:cls, reg r966:V, reg t:cls, reg A14:*, reg A15:V, reg p111:p(V +), reg r968:V, reg ___18:cls, reg r969:V, reg r970:V, reg nm10:*, reg nm11:V, reg l50:*, reg names__:cls, reg r972:V, reg no_optim12:*, reg no_optim13:V, reg r973:V, reg c384:L, reg sym101:cls, reg base101:cls, reg guard101:L, reg r974:V, reg r975:V, reg nm12:*, reg nm13:V, reg c385:L, reg nm15:V, reg dr298:V, reg dc149:L, reg dx428:V, reg dx429:V, reg mask59:*, reg mask60:V, reg __93:cls, reg r976:V, reg nm16:*, reg nm17:V, reg c386:L, reg nm19:V, reg dr300:V, reg dc150:L, reg dx430:V, reg dx431:V, reg mask61:*, reg mask62:V, reg __94:cls, reg r977:V, reg list8:cls, reg r978:V, reg l51:*, reg dimnames__:cls, reg r979:V, reg val8:*, reg val9:V, reg c387:L, reg val11:V, reg dr302:V, reg dc151:L, reg dx432:V, reg dx433:V, reg __95:cls, reg r981:V, reg xtsp:*, reg xtsp1:V, reg l52:*, reg tsp__1:cls, reg r982:V, reg l53:*, reg class__1:cls, reg r983:V, reg structure:cls, reg sym102:cls, reg base102:cls, reg guard102:L, reg r984:V, reg r985:V, reg coef37:*, reg coef38:V, reg sigma2:*, reg sigma3:V, reg var2:*, reg var3:V, reg mask63:*, reg mask64:V, reg value5:*, reg value6:V, reg r986:V, reg aic:*, reg aic1:V, reg arma167:*, reg arma168:V, reg resid:*, reg resid1:V, reg match_call:cls, reg r987:V, reg series:*, reg series1:V, reg res60:*, reg res61:V, reg c388:L, reg res63:V, reg dr304:V, reg dc152:L, reg dx434:V, reg dx435:V, reg r988:V, reg ncond17:*, reg ncond18:V, reg n_used19:*, reg n_used20:V, reg mod6:*, reg mod7:V, reg list9:cls, reg r989:V, reg p112:p(V +), reg r991:V |
    mkenv;
    st x = x;
    order_isMissing = missing.0(order);
    if order_isMissing then L0() else L1(order);
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
      r2 = dyn c(0, 0, 0);
      goto L0(r2);
    L2():
      r = dyn base(0, 0, 0);
      goto L0(r);
    };
    goto L1(p);
  L1(order_orDefault):
    st order = order_orDefault;
    seasonal_isMissing = missing.0(seasonal);
    if seasonal_isMissing then L2() else L3(seasonal);
  L2():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r4 = dyn base1[order, period](<lang c(0, 0, 0)>, NA_LGL);
      goto L0(r4);
    L1(r7):
      list = ldf list in base;
      r9 = dyn list(r7, NA_LGL);
      goto L0(r9);
    L4():
      c1 = ldf c in base;
      r8 = dyn c1(0, 0, 0);
      goto L1(r8);
    L5():
      r6 = dyn base2(0, 0, 0);
      goto L1(r6);
    };
    goto L3(p1);
  L3(seasonal_orDefault):
    st seasonal = seasonal_orDefault;
    xreg_isMissing = missing.0(xreg);
    if xreg_isMissing then L4(NULL) else L4(xreg);
  L4(xreg_orDefault):
    st xreg = xreg_orDefault;
    include_mean_isMissing = missing.0(include_mean);
    if include_mean_isMissing then L5(TRUE) else L5(include_mean);
  L5(include_mean_orDefault):
    st `include.mean` = include_mean_orDefault;
    transform_pars_isMissing = missing.0(transform_pars);
    if transform_pars_isMissing then L6(TRUE) else L6(transform_pars);
  L6(transform_pars_orDefault):
    st `transform.pars` = transform_pars_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L7(NULL) else L7(fixed);
  L7(fixed_orDefault):
    st fixed = fixed_orDefault;
    init_isMissing = missing.0(init);
    if init_isMissing then L8(NULL) else L8(init);
  L8(init_orDefault):
    st init = init_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L9() else L10(method);
  L9():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("CSS-ML", "ML", "CSS");
      goto L0(r13);
    L2():
      r11 = dyn base3("CSS-ML", "ML", "CSS");
      goto L0(r11);
    };
    goto L10(p2);
  L10(method_orDefault):
    st method = method_orDefault;
    st `n.cond` = n_cond;
    SSinit_isMissing = missing.0(SSinit);
    if SSinit_isMissing then L11() else L12(SSinit);
  L11():
    p3 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c3 = ldf c in base;
      r17 = dyn c3("Gardner1980", "Rossignol2011");
      goto L0(r17);
    L2():
      r15 = dyn base4("Gardner1980", "Rossignol2011");
      goto L0(r15);
    };
    goto L12(p3);
  L12(SSinit_orDefault):
    st SSinit = SSinit_orDefault;
    optim_method_isMissing = missing.0(optim_method);
    if optim_method_isMissing then L13("BFGS") else L13(optim_method);
  L13(optim_method_orDefault):
    st `optim.method` = optim_method_orDefault;
    optim_control_isMissing = missing.0(optim_control);
    if optim_control_isMissing then L14() else L15(optim_control);
  L14():
    p4 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      list1 = ldf list in base;
      r21 = dyn list1();
      goto L0(r21);
    L2():
      r19 = dyn base5();
      goto L0(r19);
    };
    goto L15(p4);
  L15(optim_control_orDefault):
    st `optim.control` = optim_control_orDefault;
    kappa_isMissing = missing.0(kappa);
    if kappa_isMissing then L16(1000000.0) else L16(kappa);
  L16(kappa_orDefault):
    st kappa = kappa_orDefault;
    r23 = clos inner3950065357;
    st `%+%` = r23;
    match_arg = ldf `match.arg`;
    check L339() else D0();
  D0():
    deopt 4 [];
  L339():
    p5 = prom<V +>{
      SSinit1 = ld SSinit;
      SSinit2 = force? SSinit1;
      checkMissing(SSinit2);
      return SSinit2;
    };
    r25 = dyn match_arg(p5);
    check L340() else D1();
  D1():
    deopt 6 [r25];
  L340():
    st SSinit = r25;
    SSinit3 = ld SSinit;
    check L341() else D2();
  D2():
    deopt 8 [SSinit3];
  L341():
    SSinit4 = force? SSinit3;
    checkMissing(SSinit4);
    r26 = `==`(SSinit4, "Gardner1980");
    st `SS.G` = r26;
    r27 = clos inner4232768843;
    st upARIMA = r27;
    r28 = clos inner4274529045;
    st arimaSS = r28;
    r29 = clos inner3178308452;
    st armafn = r29;
    r30 = clos inner3913899244;
    st armaCSS = r30;
    r31 = clos inner619691793;
    st arCheck = r31;
    r32 = clos inner223529780;
    st maInvert = r32;
    deparse1 = ldf deparse1;
    check L342() else D3();
  D3():
    deopt 32 [];
  L342():
    p6 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      substitute = ldf substitute in base;
      r35 = dyn substitute(<sym x>);
      goto L0(r35);
    L2():
      r33 = dyn base6(<sym x>);
      goto L0(r33);
    };
    r37 = dyn deparse1(p6);
    check L343() else D4();
  D4():
    deopt 34 [r37];
  L343():
    st series = r37;
    NCOL = ldf NCOL;
    check L344() else D5();
  D5():
    deopt 37 [];
  L344():
    p7 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r39 = dyn NCOL(p7);
    check L345() else D6();
  D6():
    deopt 39 [r39];
  L345():
    r40 = `>`(r39, 1);
    c4 = `as.logical`(r40);
    if c4 then L346() else L17();
  L17():
    goto L18();
  L18():
    match_arg1 = ldf `match.arg`;
    check L350() else D9();
  L346():
    stop = ldf stop;
    check L347() else D7();
  D7():
    deopt 43 [];
  D9():
    deopt 49 [];
  L347():
    r41 = dyn stop("only implemented for univariate time series");
    check L348() else D8();
  L350():
    p8 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r44 = dyn match_arg1(p8);
    check L351() else D10();
  D8():
    deopt 45 [r41];
  D10():
    deopt 51 [r44];
  L348():
    goto L18();
  L351():
    st method = r44;
    as_ts = ldf `as.ts`;
    check L352() else D11();
  D11():
    deopt 54 [];
  L352():
    p9 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r46 = dyn as_ts(p9);
    check L353() else D12();
  D12():
    deopt 56 [r46];
  L353():
    st x = r46;
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L354() else L355();
  L19(r48):
    r50 = `!`(r48);
    c5 = `as.logical`(r50);
    if c5 then L358() else L20();
  L354():
    x5 = ld x;
    check L356() else D13();
  L355():
    r47 = dyn base7(<sym x>);
    goto L19(r47);
  D13():
    deopt 60 [x5];
  L20():
    goto L21();
  L21():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L362() else D17();
  L356():
    x6 = force? x5;
    checkMissing(x6);
    is_numeric = ldf `is.numeric` in base;
    r49 = dyn is_numeric(x6);
    check L357() else D14();
  L358():
    stop1 = ldf stop;
    check L359() else D15();
  D14():
    deopt 63 [r49];
  D15():
    deopt 66 [];
  D17():
    deopt 74 ["double", l, "double"];
  L357():
    goto L19(r49);
  L359():
    r51 = dyn stop1("'x' must be numeric");
    check L360() else D16();
  L362():
    r53 = dyn storage_mode__(l, NULL, "double");
    check L363() else D18();
  D16():
    deopt 68 [r51];
  D18():
    deopt 76 ["double", r53];
  L360():
    goto L21();
  L363():
    st x = r53;
    l1 = ld x;
    dim__ = ldf `dim<-`;
    check L364() else D19();
  D19():
    deopt 81 [NULL, l1, NULL];
  L364():
    r54 = dyn dim__(l1, NULL, NULL);
    check L365() else D20();
  D20():
    deopt 83 [NULL, r54];
  L365():
    st x = r54;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L366() else L367();
  L22(r56):
    st n = r56;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L370() else L371();
  L366():
    x7 = ld x;
    check L368() else D21();
  L367():
    r55 = dyn base8(<sym x>);
    goto L22(r55);
  D21():
    deopt 87 [x7];
  L23(r59):
    r61 = `!`(r59);
    c6 = `as.logical`(r61);
    if c6 then L372() else L24();
  L368():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r57 = dyn length(x8);
    check L369() else D22();
  L370():
    missing = ldf missing in base;
    r60 = dyn missing(<sym order>);
    goto L23(r60);
  L371():
    r58 = dyn base9(<sym order>);
    goto L23(r58);
  D22():
    deopt 90 [r57];
  L24():
    goto L32();
  L32():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L394() else L395();
  L369():
    goto L22(r57);
  L372():
    sym10 = ldf `is.numeric`;
    base10 = ldf `is.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L373() else L374();
  L25(r63):
    r65 = `!`(r63);
    c7 = `as.logical`(r65);
    if c7 then L26(c7) else L377();
  L33(r78):
    r80 = `!`(r78);
    c26 = `as.logical`(r80);
    if c26 then L396() else L34();
  L373():
    order1 = ld order;
    check L375() else D23();
  L374():
    r62 = dyn base10(<sym order>);
    goto L25(r62);
  L394():
    missing1 = ldf missing in base;
    r79 = dyn missing1(<sym seasonal>);
    goto L33(r79);
  L395():
    r77 = dyn base13(<sym seasonal>);
    goto L33(r77);
  D23():
    deopt 98 [order1];
  L26(c8):
    c16 = `as.logical`(c8);
    if c16 then L28(c16) else L383();
  L34():
    goto L54();
  L54():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L465() else L466();
  L375():
    order2 = force? order1;
    checkMissing(order2);
    is_numeric1 = ldf `is.numeric` in base;
    r64 = dyn is_numeric1(order2);
    check L376() else D24();
  L377():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L378() else L379();
  L396():
    sym14 = ldf `is.list`;
    base14 = ldf `is.list` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L397() else L398();
  D24():
    deopt 101 [r64];
  L27(c12, r67):
    r69 = `!=`(r67, 3);
    c13 = `as.logical`(r69);
    c14 = `||`(c12, c13);
    goto L26(c14);
  L28(c17):
    c25 = `as.logical`(c17);
    if c25 then L389() else L30();
  L35(r82):
    c27 = `as.logical`(r82);
    if c27 then L401() else L36();
  L55(r121):
    c65 = `as.logical`(r121);
    if c65 then L56(c65) else L472();
  L376():
    goto L25(r64);
  L378():
    order3 = ld order;
    check L380() else D25();
  L379():
    r66 = dyn base11(<sym order>);
    goto L27(c7, r66);
  L383():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L384() else L385();
  L397():
    seasonal1 = ld seasonal;
    check L399() else D31();
  L398():
    r81 = dyn base14(<sym seasonal>);
    goto L35(r81);
  L465():
    seasonal21 = ld seasonal;
    check L467() else D52();
  L466():
    r120 = dyn base22(<lang `$`(seasonal, period)>);
    goto L55(r120);
  D25():
    deopt 105 [c7, order3];
  D31():
    deopt 135 [seasonal1];
  D52():
    deopt 215 [seasonal21];
  L29(c21, r71):
    c22 = `as.logical`(r71);
    c23 = `||`(c21, c22);
    goto L28(c23);
  L30():
    goto L31(NULL);
  L31(r75):
    goto L32();
  L36():
    sym19 = ldf `is.numeric`;
    base19 = ldf `is.numeric` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L446() else L447();
  L47(r106):
    goto L54();
  L56(c66):
    c79 = `as.logical`(c66);
    if c79 then L58(c79) else L482();
  L380():
    order4 = force? order3;
    checkMissing(order4);
    length1 = ldf length in base;
    r68 = dyn length1(order4);
    check L381() else D26();
  L384():
    order5 = ld order;
    check L386() else D27();
  L385():
    r70 = dyn base12(<lang `<`(order, 0.0)>);
    goto L29(c16, r70);
  L389():
    stop2 = ldf stop;
    check L390() else D29();
  L399():
    seasonal2 = force? seasonal1;
    checkMissing(seasonal2);
    is_list = ldf `is.list` in base;
    r83 = dyn is_list(seasonal2);
    check L400() else D32();
  L401():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L402() else L403();
  L467():
    seasonal22 = force? seasonal21;
    checkMissing(seasonal22);
    c63 = `is.object`(seasonal22);
    if c63 then L469() else L470(seasonal22);
  L472():
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L473() else L474();
  D26():
    deopt 108 [c7, r68];
  D27():
    deopt 114 [c16, order5];
  D29():
    deopt 122 [];
  D32():
    deopt 138 [r83];
  L37(r85):
    c30 = `as.logical`(r85);
    if c30 then L409() else L38();
  L48(r108):
    c61 = `as.logical`(r108);
    if c61 then L450() else L49();
  L57(c70, r124):
    c76 = `as.logical`(r124);
    c77 = `||`(c70, c76);
    goto L56(c77);
  L58(c80):
    c90 = `as.logical`(c80);
    if c90 then L489() else L59();
  L381():
    goto L27(c7, r68);
  L386():
    order6 = force? order5;
    checkMissing(order6);
    r72 = `<`(order6, 0.0);
    any = ldf any in base;
    r73 = dyn any(r72);
    check L387() else D28();
  L390():
    r74 = dyn stop2("'order' must be a non-negative numeric vector of length 3");
    check L391() else D30();
  L400():
    goto L35(r83);
  L402():
    seasonal3 = ld seasonal;
    check L404() else D33();
  L403():
    r84 = dyn base15(<lang `$`(seasonal, order)>);
    goto L37(r84);
  L446():
    order7 = ld order;
    check L448() else D44();
  L447():
    r107 = dyn base19(<sym order>);
    goto L48(r107);
  L468(dx9):
    c64 = `==`(dx9, NULL);
    goto L55(c64);
  L469():
    dr8 = tryDispatchBuiltin.1("$", seasonal22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L471() else L470(dr8);
  L470(seasonal24):
    r122 = `$`(seasonal24, <sym period>);
    goto L468(r122);
  L473():
    seasonal25 = ld seasonal;
    check L475() else D53();
  L474():
    r123 = dyn base23(<lang `$`(seasonal, period)>);
    goto L57(c65, r123);
  L482():
    seasonal29 = ld seasonal;
    check L483() else D55();
  D28():
    deopt 119 [c16, r73];
  D30():
    deopt 124 [r74];
  D33():
    deopt 140 [seasonal3];
  D44():
    deopt 186 [order7];
  D53():
    deopt 221 [c65, seasonal25];
  D55():
    deopt 227 [c79, seasonal29];
  L38():
    goto L39();
  L39():
    sym16 = ldf `is.numeric`;
    base16 = ldf `is.numeric` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L413() else L414();
  L49():
    stop5 = ldf stop;
    check L462() else D50();
  L59():
    goto L60();
  L60():
    sym24 = ldf `as.integer`;
    base24 = ldf `as.integer` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L497() else L498();
  L387():
    goto L29(c16, r73);
  L391():
    goto L31(r74);
  L404():
    seasonal4 = force? seasonal3;
    checkMissing(seasonal4);
    c28 = `is.object`(seasonal4);
    if c28 then L406() else L407(seasonal4);
  L409():
    stop3 = ldf stop;
    check L410() else D34();
  L448():
    order8 = force? order7;
    checkMissing(order8);
    is_numeric3 = ldf `is.numeric` in base;
    r109 = dyn is_numeric3(order8);
    check L449() else D45();
  L450():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L451() else L452();
  L471():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L468(dx8);
  L475():
    seasonal26 = force? seasonal25;
    checkMissing(seasonal26);
    c71 = `is.object`(seasonal26);
    if c71 then L477() else L478(c65, seasonal26);
  L483():
    seasonal30 = force? seasonal29;
    checkMissing(seasonal30);
    c82 = `is.object`(seasonal30);
    if c82 then L485() else L486(c79, seasonal30);
  L489():
    frequency = ldf frequency;
    check L490() else D56();
  D34():
    deopt 145 [];
  D45():
    deopt 189 [r109];
  D50():
    deopt 209 [];
  D56():
    deopt 234 [];
  L40(r90):
    r93 = `!`(r90);
    c32 = `as.logical`(r93);
    if c32 then L41(c32) else L421();
  L50(r111):
    r113 = `==`(r111, 3);
    c62 = `as.logical`(r113);
    if c62 then L455() else L51();
  L61(r138):
    st arma = r138;
    sym26 = ldf sum;
    base26 = ldf sum in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L532() else L533();
  L405(dx1):
    c29 = `==`(dx1, NULL);
    goto L37(c29);
  L406():
    dr = tryDispatchBuiltin.1("$", seasonal4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L408() else L407(dr);
  L407(seasonal6):
    r86 = `$`(seasonal6, <sym order>);
    goto L405(r86);
  L410():
    r87 = dyn stop3("'seasonal' must be a list with component 'order'");
    check L411() else D35();
  L413():
    seasonal7 = ld seasonal;
    check L415() else D36();
  L414():
    r89 = dyn base16(<lang `$`(seasonal, order)>);
    goto L40(r89);
  L449():
    goto L48(r109);
  L451():
    order9 = ld order;
    check L453() else D46();
  L452():
    r110 = dyn base20(<sym order>);
    goto L50(r110);
  L462():
    r118 = dyn stop5("'seasonal' must be a list with component 'order'");
    check L463() else D51();
  L476(c75, dx11):
    is_na = ldf `is.na` in base;
    r126 = dyn is_na(dx11);
    check L480() else D54();
  L477():
    dr10 = tryDispatchBuiltin.1("$", seasonal26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L479() else L478(c65, dr10);
  L478(c73, seasonal28):
    r125 = `$`(seasonal28, <sym period>);
    goto L476(c73, r125);
  L484(c86, dx13):
    r128 = `==`(dx13, 0.0);
    c87 = `as.logical`(r128);
    c88 = `||`(c86, c87);
    goto L58(c88);
  L485():
    dr12 = tryDispatchBuiltin.1("$", seasonal30);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L487() else L486(c79, dr12);
  L486(c84, seasonal32):
    r127 = `$`(seasonal32, <sym period>);
    goto L484(c84, r127);
  L490():
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r130 = dyn frequency(p10);
    check L491() else D57();
  L497():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L499() else L500();
  L498():
    r137 = dyn base24(<lang c(`[`(order, `-`(2)), `[`(`$`(seasonal, order), `-`(2)), `$`(seasonal, period), `[`(order, 2), `[`(`$`(seasonal, order), 2))>);
    goto L61(r137);
  D35():
    deopt 147 [r87];
  D36():
    deopt 152 [seasonal7];
  D46():
    deopt 192 [order9];
  D51():
    deopt 211 [r118];
  D54():
    deopt 225 [c75, r126];
  D57():
    deopt 236 [r130];
  L41(c33):
    c46 = `as.logical`(c33);
    if c46 then L43(c46) else L431();
  L51():
    goto L53("'seasonal' is of the wrong length");
  L53(r117):
    goto L47(r117);
  L62(r140):
    as_integer = ldf `as.integer` in base;
    r149 = dyn as_integer(r140);
    check L531() else D64();
  L67(r151):
    st narma = r151;
    tsp = ldf tsp;
    check L539() else D67();
  L408():
    dx = getTryDispatchBuiltinValue(dr);
    goto L405(dx);
  L411():
    goto L39();
  L415():
    seasonal8 = force? seasonal7;
    checkMissing(seasonal8);
    c31 = `is.object`(seasonal8);
    if c31 then L417() else L418(seasonal8);
  L421():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L422() else L423();
  L453():
    order10 = force? order9;
    checkMissing(order10);
    length3 = ldf length in base;
    r112 = dyn length3(order10);
    check L454() else D47();
  L455():
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L456() else L457();
  L463():
    goto L47(r118);
  L479():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L476(c65, dx10);
  L480():
    goto L57(c75, r126);
  L487():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L484(c79, dx12);
  L491():
    l2 = ld seasonal;
    c91 = `is.object`(l2);
    if c91 then L493() else L494(r130, l2);
  L499():
    order11 = ld order;
    check L501() else D58();
  L500():
    r139 = dyn base25(<lang `[`(order, `-`(2))>, <lang `[`(`$`(seasonal, order), `-`(2))>, <lang `$`(seasonal, period)>, <lang `[`(order, 2)>, <lang `[`(`$`(seasonal, order), 2)>);
    goto L62(r139);
  L532():
    arma = ld arma;
    check L534() else D65();
  L533():
    r150 = dyn base26(<lang `[`(arma, `:`(1, 4))>);
    goto L67(r150);
  D47():
    deopt 195 [r112];
  D58():
    deopt 246 [order11];
  D64():
    deopt 274 [r149];
  D65():
    deopt 278 [arma];
  D67():
    deopt 287 [];
  L42(c37, r95):
    r98 = `!=`(r95, 3);
    c43 = `as.logical`(r98);
    c44 = `||`(c37, c43);
    goto L41(c44);
  L43(c47):
    c60 = `as.logical`(c47);
    if c60 then L441() else L45();
  L52(r115):
    st seasonal = r115;
    goto L53(r115);
  L416(dx3):
    is_numeric2 = ldf `is.numeric` in base;
    r92 = dyn is_numeric2(dx3);
    check L420() else D37();
  L417():
    dr2 = tryDispatchBuiltin.1("$", seasonal8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L419() else L418(dr2);
  L418(seasonal10):
    r91 = `$`(seasonal10, <sym order>);
    goto L416(r91);
  L422():
    seasonal11 = ld seasonal;
    check L424() else D38();
  L423():
    r94 = dyn base17(<lang `$`(seasonal, order)>);
    goto L42(c32, r94);
  L431():
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L432() else L433();
  L454():
    goto L50(r112);
  L456():
    seasonal19 = ld seasonal;
    check L458() else D48();
  L457():
    r114 = dyn base21[order](<sym seasonal>);
    goto L52(r114);
  L492(r134, dx15):
    st seasonal = dx15;
    goto L60();
  L493():
    dr14 = tryDispatchBuiltin.0("$<-", l2, r130);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L495() else L494(r130, dr14);
  L494(r132, l4):
    r135 = `$<-`(l4, <sym period>, r130);
    goto L492(r132, r135);
  L501():
    order12 = force? order11;
    checkMissing(order12);
    c92 = `is.object`(order12);
    if c92 then L502() else L503(order12);
  L531():
    goto L61(r149);
  L534():
    arma1 = force? arma;
    checkMissing(arma1);
    c100 = `is.object`(arma1);
    if c100 then L535() else L536(arma1);
  L539():
    p11 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r155 = dyn tsp(p11);
    check L540() else D68();
  D37():
    deopt 156 [r92];
  D38():
    deopt 160 [c32, seasonal11];
  D48():
    deopt 200 [seasonal19];
  D68():
    deopt 289 [r155];
  L44(c51, r100):
    c57 = `as.logical`(r100);
    c58 = `||`(c51, c57);
    goto L43(c58);
  L45():
    goto L46(NULL);
  L46(r105):
    goto L47(r105);
  L63(dx17):
    seasonal33 = ld seasonal;
    check L505() else D59();
  L68(dx35):
    sum = ldf sum in base;
    r153 = dyn sum(dx35);
    check L538() else D66();
  L419():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L416(dx2);
  L420():
    goto L40(r92);
  L424():
    seasonal12 = force? seasonal11;
    checkMissing(seasonal12);
    c38 = `is.object`(seasonal12);
    if c38 then L426() else L427(c32, seasonal12);
  L432():
    seasonal15 = ld seasonal;
    check L434() else D40();
  L433():
    r99 = dyn base18(<lang `<`(`$`(seasonal, order), 0)>);
    goto L44(c46, r99);
  L441():
    stop4 = ldf stop;
    check L442() else D42();
  L458():
    seasonal20 = force? seasonal19;
    checkMissing(seasonal20);
    list2 = ldf list in base;
    r116 = dyn list2(seasonal20);
    check L459() else D49();
  L495():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L492(r130, dx14);
  L502():
    dr16 = tryDispatchBuiltin.1("[", order12);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L504() else L503(dr16);
  L503(order14):
    __ = ldf `[` in base;
    r141 = dyn __(order14, -2);
    goto L63(r141);
  L535():
    dr30 = tryDispatchBuiltin.1("[", arma1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L537() else L536(dr30);
  L536(arma3):
    __4 = ldf `[` in base;
    r152 = dyn __4(arma3, <int 1, 2, 3, 4>);
    goto L68(r152);
  L540():
    st xtsp = r155;
    l5 = ld x;
    tsp__ = ldf `tsp<-`;
    check L541() else D69();
  D40():
    deopt 170 [c46, seasonal15];
  D42():
    deopt 179 [];
  D49():
    deopt 204 [r116];
  D59():
    deopt 251 [seasonal33];
  D66():
    deopt 284 [r153];
  D69():
    deopt 294 [NULL, l5, NULL];
  L425(c42, dx5):
    length2 = ldf length in base;
    r97 = dyn length2(dx5);
    check L429() else D39();
  L426():
    dr4 = tryDispatchBuiltin.1("$", seasonal12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L428() else L427(c32, dr4);
  L427(c40, seasonal14):
    r96 = `$`(seasonal14, <sym order>);
    goto L425(c40, r96);
  L434():
    seasonal16 = force? seasonal15;
    checkMissing(seasonal16);
    c52 = `is.object`(seasonal16);
    if c52 then L436() else L437(c46, seasonal16);
  L442():
    r104 = dyn stop4("'seasonal$order' must be a non-negative numeric vector of length 3");
    check L443() else D43();
  L459():
    goto L52(r116);
  L504():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L63(dx16);
  L505():
    seasonal34 = force? seasonal33;
    checkMissing(seasonal34);
    c93 = `is.object`(seasonal34);
    if c93 then L507() else L508(seasonal34);
  L537():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L68(dx34);
  L538():
    goto L67(r153);
  L541():
    r156 = dyn tsp__(l5, NULL, NULL);
    check L542() else D70();
  D39():
    deopt 164 [c42, r97];
  D43():
    deopt 181 [r104];
  D70():
    deopt 296 [NULL, r156];
  L428():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L425(c32, dx4);
  L429():
    goto L42(c42, r97);
  L435(c56, dx7):
    r102 = `<`(dx7, 0);
    any1 = ldf any in base;
    r103 = dyn any1(r102);
    check L439() else D41();
  L436():
    dr6 = tryDispatchBuiltin.1("$", seasonal16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L438() else L437(c46, dr6);
  L437(c54, seasonal18):
    r101 = `$`(seasonal18, <sym order>);
    goto L435(c54, r101);
  L443():
    goto L46(r104);
  L506(dx19):
    c94 = `is.object`(dx19);
    if c94 then L510() else L511(dx19);
  L507():
    dr18 = tryDispatchBuiltin.1("$", seasonal34);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L509() else L508(dr18);
  L508(seasonal36):
    r142 = `$`(seasonal36, <sym order>);
    goto L506(r142);
  L542():
    st x = r156;
    st Delta = 1.0;
    sym27 = ldf seq_len;
    base27 = ldf seq_len in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L543() else L544();
  D41():
    deopt 176 [c56, r103];
  L64(dx23):
    seasonal37 = ld seasonal;
    check L513() else D60();
  L69(r158):
    s = toForSeq(r158);
    l6 = length(s);
    i = 0;
    goto L71(i);
  L438():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L435(c46, dx6);
  L439():
    goto L44(c56, r103);
  L509():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L506(dx18);
  L510():
    dr20 = tryDispatchBuiltin.1("[", dx19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L512() else L511(dr20);
  L511(dx21):
    __1 = ldf `[` in base;
    r143 = dyn __1(dx21, -2);
    goto L64(r143);
  L543():
    order19 = ld order;
    check L545() else D71();
  L544():
    r157 = dyn base27(<lang `[`(order, 2)>);
    goto L69(r157);
  D60():
    deopt 257 [seasonal37];
  D71():
    deopt 302 [order19];
  L71(i1):
    i2 = `+`.1(i1, 1);
    c102 = `<`.1(l6, i2);
    if c102 then L549() else L72();
  L512():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L64(dx22);
  L513():
    seasonal38 = force? seasonal37;
    checkMissing(seasonal38);
    c95 = `is.object`(seasonal38);
    if c95 then L515() else L516(seasonal38);
  L545():
    order20 = force? order19;
    checkMissing(order20);
    c101 = `is.object`(order20);
    if c101 then L546() else L547(order20);
  L70(dx37):
    r160 = seq_len(dx37);
    goto L69(r160);
  L72():
    x13 = `[[`(s, i2, NULL, TRUE);
    st i = x13;
    ___ = ldf `%+%`;
    check L550() else D72();
  L514(dx25):
    order15 = ld order;
    check L518() else D61();
  L515():
    dr22 = tryDispatchBuiltin.1("$", seasonal38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L517() else L516(dr22);
  L516(seasonal40):
    r144 = `$`(seasonal40, <sym period>);
    goto L514(r144);
  L546():
    dr32 = tryDispatchBuiltin.1("[", order20);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L548() else L547(dr32);
  L547(order22):
    __5 = ldf `[` in base;
    r159 = dyn __5(order22, 2);
    goto L70(r159);
  L549():
    sym29 = ldf seq_len;
    base29 = ldf seq_len in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L552() else L553();
  D61():
    deopt 260 [order15];
  D72():
    deopt 309 [i2];
  L73(r168):
    s1 = toForSeq(r168);
    l7 = length(s1);
    i5 = 0;
    goto L75(i5);
  L517():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L514(dx24);
  L518():
    order16 = force? order15;
    checkMissing(order16);
    c96 = `is.object`(order16);
    if c96 then L519() else L520(order16);
  L548():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L70(dx36);
  L550():
    p12 = prom<V +>{
      Delta = ld Delta;
      Delta1 = force? Delta;
      checkMissing(Delta1);
      return Delta1;
    };
    p13 = prom<V +>{
      sym28 = ldf c;
      base28 = ldf c in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r163):
      return r163;
    L1():
      c103 = ldf c in base;
      r164 = dyn c103(1.0, -1.0);
      goto L0(r164);
    L2():
      r162 = dyn base28(1.0, <lang `-`(1.0)>);
      goto L0(r162);
    };
    r166 = dyn ___(p12, p13);
    check L551() else D73();
  L552():
    seasonal45 = ld seasonal;
    check L554() else D74();
  L553():
    r167 = dyn base29(<lang `[`(`$`(seasonal, order), 2)>);
    goto L73(r167);
  D73():
    deopt 312 [i2, r166];
  D74():
    deopt 318 [seasonal45];
  L65(dx27):
    seasonal41 = ld seasonal;
    check L522() else D62();
  L75(i6):
    i7 = `+`.1(i6, 1);
    c106 = `<`.1(l7, i7);
    if c106 then L562() else L76();
  L519():
    dr24 = tryDispatchBuiltin.1("[", order16);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L521() else L520(dr24);
  L520(order18):
    __2 = ldf `[` in base;
    r145 = dyn __2(order18, 2);
    goto L65(r145);
  L551():
    st Delta = r166;
    goto L71(i2);
  L554():
    seasonal46 = force? seasonal45;
    checkMissing(seasonal46);
    c104 = `is.object`(seasonal46);
    if c104 then L556() else L557(seasonal46);
  D62():
    deopt 265 [seasonal41];
  L76():
    x14 = `[[`(s1, i7, NULL, TRUE);
    st i = x14;
    ___1 = ldf `%+%`;
    check L563() else D75();
  L521():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L65(dx26);
  L522():
    seasonal42 = force? seasonal41;
    checkMissing(seasonal42);
    c97 = `is.object`(seasonal42);
    if c97 then L524() else L525(seasonal42);
  L555(dx39):
    c105 = `is.object`(dx39);
    if c105 then L559() else L560(dx39);
  L556():
    dr34 = tryDispatchBuiltin.1("$", seasonal46);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L558() else L557(dr34);
  L557(seasonal48):
    r169 = `$`(seasonal48, <sym order>);
    goto L555(r169);
  L562():
    Delta4 = ld Delta;
    check L565() else D77();
  D75():
    deopt 326 [i7];
  D77():
    deopt 334 [Delta4];
  L74(dx43):
    r171 = seq_len(dx43);
    goto L73(r171);
  L523(dx29):
    c98 = `is.object`(dx29);
    if c98 then L527() else L528(dx29);
  L524():
    dr26 = tryDispatchBuiltin.1("$", seasonal42);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L526() else L525(dr26);
  L525(seasonal44):
    r146 = `$`(seasonal44, <sym order>);
    goto L523(r146);
  L558():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L555(dx38);
  L559():
    dr36 = tryDispatchBuiltin.1("[", dx39);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L561() else L560(dr36);
  L560(dx41):
    __6 = ldf `[` in base;
    r170 = dyn __6(dx41, 2);
    goto L74(r170);
  L563():
    p14 = prom<V +>{
      Delta2 = ld Delta;
      Delta3 = force? Delta2;
      checkMissing(Delta3);
      return Delta3;
    };
    p15 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L2() else L3();
    L0(r174):
      return r174;
    L2():
      sym31 = ldf `rep.int`;
      base31 = ldf `rep.int` in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L4() else L5();
    L3():
      r173 = dyn base30(1.0, <lang rep.int(0.0, `-`(`$`(seasonal, period), 1.0))>, <lang `-`(1.0)>);
      goto L0(r173);
    L1(r176):
      c108 = ldf c in base;
      r180 = dyn c108(1.0, r176, -1.0);
      goto L0(r180);
    L4():
      seasonal49 = ld seasonal;
      seasonal50 = force? seasonal49;
      checkMissing(seasonal50);
      c107 = `is.object`(seasonal50);
      if c107 then L7() else L8(seasonal50);
    L5():
      r175 = dyn base31(0.0, <lang `-`(`$`(seasonal, period), 1.0)>);
      goto L1(r175);
    L6(dx45):
      r178 = `-`(dx45, 1.0);
      rep_int = ldf `rep.int` in base;
      r179 = dyn rep_int(0.0, r178);
      goto L1(r179);
    L7():
      dr38 = tryDispatchBuiltin.1("$", seasonal50);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L9() else L8(dr38);
    L8(seasonal52):
      r177 = `$`(seasonal52, <sym period>);
      goto L6(r177);
    L9():
      dx44 = getTryDispatchBuiltinValue(dr38);
      goto L6(dx44);
    };
    r182 = dyn ___1(p14, p15);
    check L564() else D76();
  L565():
    Delta5 = force? Delta4;
    checkMissing(Delta5);
    c109 = `is.object`(Delta5);
    if c109 then L566() else L567(Delta5);
  D76():
    deopt 329 [i7, r182];
  L66(dx33):
    c99 = ldf c in base;
    r148 = dyn c99(dx17, dx23, dx25, dx27, dx33);
    check L530() else D63();
  L77(dx47):
    r184 = `-`(<missing>, dx47);
    st Delta = r184;
    order23 = ld order;
    check L569() else D78();
  L526():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L523(dx28);
  L527():
    dr28 = tryDispatchBuiltin.1("[", dx29);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L529() else L528(dr28);
  L528(dx31):
    __3 = ldf `[` in base;
    r147 = dyn __3(dx31, 2);
    goto L66(r147);
  L561():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L74(dx42);
  L564():
    st Delta = r182;
    goto L75(i7);
  L566():
    dr40 = tryDispatchBuiltin.1("[", Delta5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L568() else L567(dr40);
  L567(Delta7):
    __7 = ldf `[` in base;
    r183 = dyn __7(Delta7, -1);
    goto L77(r183);
  D63():
    deopt 272 [r148];
  D78():
    deopt 341 [order23];
  L529():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L66(dx32);
  L530():
    goto L62(r148);
  L568():
    dx46 = getTryDispatchBuiltinValue(dr40);
    goto L77(dx46);
  L569():
    order24 = force? order23;
    checkMissing(order24);
    c110 = `is.object`(order24);
    if c110 then L570() else L571(order24);
  L78(dx49):
    seasonal53 = ld seasonal;
    check L573() else D79();
  L570():
    dr42 = tryDispatchBuiltin.1("[", order24);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L572() else L571(dr42);
  L571(order26):
    __8 = ldf `[` in base;
    r185 = dyn __8(order26, 2);
    goto L78(r185);
  D79():
    deopt 345 [dx49, seasonal53];
  L572():
    dx48 = getTryDispatchBuiltinValue(dr42);
    goto L78(dx48);
  L573():
    seasonal54 = force? seasonal53;
    checkMissing(seasonal54);
    c111 = `is.object`(seasonal54);
    if c111 then L575() else L576(dx49, seasonal54);
  L574(dx54, dx55):
    c112 = `is.object`(dx55);
    if c112 then L578() else L579(dx54, dx55);
  L575():
    dr44 = tryDispatchBuiltin.1("$", seasonal54);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L577() else L576(dx49, dr44);
  L576(dx51, seasonal56):
    r186 = `$`(seasonal56, <sym order>);
    goto L574(dx51, r186);
  L79(dx62, dx63):
    r188 = `+`(dx62, dx63);
    st nd = r188;
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L581() else L582();
  L577():
    dx53 = getTryDispatchBuiltinValue(dr44);
    goto L574(dx49, dx53);
  L578():
    dr46 = tryDispatchBuiltin.1("[", dx55);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L580() else L579(dx54, dr46);
  L579(dx58, dx59):
    __9 = ldf `[` in base;
    r187 = dyn __9(dx59, 2);
    goto L79(dx58, r187);
  L80(r190):
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L588() else L589();
  L580():
    dx61 = getTryDispatchBuiltinValue(dr46);
    goto L79(dx54, dx61);
  L581():
    sym33 = ldf `is.na`;
    base33 = ldf `is.na` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L583() else L584();
  L582():
    r189 = dyn base32(<lang `!`(is.na(x))>);
    goto L80(r189);
  L81(r192):
    r194 = `!`(r192);
    sum1 = ldf sum in base;
    r195 = dyn sum1(r194);
    check L587() else D82();
  L82(r199, r200):
    r202 = `-`(r199, r200);
    st `n.used` = r202;
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L592() else L593();
  L583():
    x15 = ld x;
    check L585() else D80();
  L584():
    r191 = dyn base33(<sym x>);
    goto L81(r191);
  L588():
    Delta8 = ld Delta;
    check L590() else D83();
  L589():
    r198 = dyn base34(<sym Delta>);
    goto L82(r190, r198);
  D80():
    deopt 357 [x15];
  D82():
    deopt 363 [r195];
  D83():
    deopt 365 [r190, Delta8];
  L83(r204):
    c114 = `as.logical`(r204);
    if c114 then L595() else L84();
  L585():
    x16 = force? x15;
    checkMissing(x16);
    is_na1 = ldf `is.na` in base;
    r193 = dyn is_na1(x16);
    check L586() else D81();
  L587():
    goto L80(r195);
  L590():
    Delta9 = force? Delta8;
    checkMissing(Delta9);
    length4 = ldf length in base;
    r201 = dyn length4(Delta9);
    check L591() else D84();
  L592():
    xreg1 = ld xreg;
    check L594() else D85();
  L593():
    r203 = dyn base35(<sym xreg>);
    goto L83(r203);
  D81():
    deopt 360 [r193];
  D84():
    deopt 368 [r190, r201];
  D85():
    deopt 372 [xreg1];
  L84():
    deparse2 = ldf deparse1;
    check L597() else D86();
  L85():
    l9 = ld xreg;
    class__ = ldf `class<-`;
    check L612() else D99();
  L586():
    goto L81(r193);
  L591():
    goto L82(r190, r201);
  L594():
    xreg2 = force? xreg1;
    checkMissing(xreg2);
    c113 = `==`(xreg2, NULL);
    goto L83(c113);
  L595():
    st ncxreg = 0;
    goto L85();
  D86():
    deopt 379 [];
  D99():
    deopt 415 [NULL, l9, NULL];
  L597():
    p16 = prom<V +>{
      sym36 = ldf substitute;
      base36 = ldf substitute in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L1() else L2();
    L0(r207):
      return r207;
    L1():
      substitute1 = ldf substitute in base;
      r208 = dyn substitute1(<sym xreg>);
      goto L0(r208);
    L2():
      r206 = dyn base36(<sym xreg>);
      goto L0(r206);
    };
    r210 = dyn deparse2(p16);
    check L598() else D87();
  L612():
    r221 = dyn class__(l9, NULL, NULL);
    check L613() else D100();
  D87():
    deopt 381 [r210];
  D100():
    deopt 417 [NULL, r221];
  L598():
    st nmxreg = r210;
    NROW = ldf NROW;
    check L599() else D88();
  L613():
    st xreg = r221;
    ncxreg = ld ncxreg;
    check L614() else D101();
  D88():
    deopt 384 [];
  D101():
    deopt 419 [ncxreg];
  L599():
    p17 = prom<V +>{
      xreg3 = ld xreg;
      xreg4 = force? xreg3;
      checkMissing(xreg4);
      return xreg4;
    };
    r212 = dyn NROW(p17);
    check L600() else D89();
  L614():
    ncxreg1 = force? ncxreg;
    checkMissing(ncxreg1);
    r222 = `>`(ncxreg1, 0);
    c116 = `as.logical`(r222);
    if c116 then L615() else L88(c116);
  D89():
    deopt 386 [r212];
  L88(c118):
    c126 = `as.logical`(c118);
    if c126 then L621() else L90();
  L600():
    n = ld n;
    check L601() else D90();
  L615():
    sym37 = ldf `is.null`;
    base37 = ldf `is.null` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L616() else L617();
  D90():
    deopt 386 [r212, n];
  L89(c121, r224):
    c123 = `as.logical`(r224);
    c124 = `&&`(c121, c123);
    goto L88(c124);
  L90():
    goto L93();
  L93():
    include_mean1 = ld `include.mean`;
    check L631() else D110();
  L601():
    n1 = force? n;
    checkMissing(n1);
    r213 = `!=`(r212, n1);
    c115 = `as.logical`(r213);
    if c115 then L602() else L86();
  L616():
    colnames = ldf colnames;
    check L618() else D102();
  L617():
    r223 = dyn base37(<lang colnames(xreg)>);
    goto L89(c116, r223);
  L621():
    ncxreg2 = ld ncxreg;
    check L622() else D104();
  D102():
    deopt 425 [c116];
  D104():
    deopt 430 [ncxreg2];
  D110():
    deopt 448 [include_mean1];
  L86():
    goto L87();
  L87():
    NCOL1 = ldf NCOL;
    check L606() else D93();
  L602():
    stop6 = ldf stop;
    check L603() else D91();
  L618():
    p20 = prom<V +>{
      xreg9 = ld xreg;
      xreg10 = force? xreg9;
      checkMissing(xreg10);
      return xreg10;
    };
    r226 = dyn colnames(p20);
    check L619() else D103();
  L622():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r227 = `==`(ncxreg3, 1);
    c127 = `as.logical`(r227);
    if c127 then L623() else L91();
  L631():
    include_mean2 = force? include_mean1;
    checkMissing(include_mean2);
    c128 = `as.logical`(include_mean2);
    if c128 then L632() else L94(c128);
  D91():
    deopt 390 [];
  D93():
    deopt 396 [];
  D103():
    deopt 427 [c116, r226];
  L91():
    paste0 = ldf paste0;
    check L626() else D106();
  L92(nmxreg2):
    l10 = ld xreg;
    colnames__ = ldf `colnames<-`;
    check L628() else D108();
  L94(c130):
    c134 = `as.logical`(c130);
    if c134 then L635() else L95();
  L603():
    r214 = dyn stop6("lengths of 'x' and 'xreg' do not match");
    check L604() else D92();
  L606():
    p18 = prom<V +>{
      xreg5 = ld xreg;
      xreg6 = force? xreg5;
      checkMissing(xreg6);
      return xreg6;
    };
    r217 = dyn NCOL1(p18);
    check L607() else D94();
  L619():
    c122 = `==`(r226, NULL);
    goto L89(c116, c122);
  L623():
    nmxreg = ld nmxreg;
    check L624() else D105();
  L632():
    nd = ld nd;
    check L633() else D111();
  D92():
    deopt 392 [r214];
  D94():
    deopt 398 [r217];
  D105():
    deopt 434 [nmxreg];
  D106():
    deopt 437 [];
  D108():
    deopt 442 [nmxreg2, l10, nmxreg2];
  D111():
    deopt 450 [c128, nd];
  L95():
    goto L96();
  L96():
    method3 = ld method;
    check L640() else D115();
  L604():
    goto L87();
  L607():
    st ncxreg = r217;
    as_matrix = ldf `as.matrix`;
    check L608() else D95();
  L624():
    nmxreg1 = force? nmxreg;
    checkMissing(nmxreg1);
    goto L92(nmxreg1);
  L626():
    p21 = prom<V +>{
      nmxreg3 = ld nmxreg;
      nmxreg4 = force? nmxreg3;
      checkMissing(nmxreg4);
      return nmxreg4;
    };
    p22 = prom<V +>{
      ncxreg4 = ld ncxreg;
      ncxreg5 = force? ncxreg4;
      checkMissing(ncxreg5);
      r229 = `:`(1, ncxreg5);
      return r229;
    };
    r231 = dyn paste0(p21, p22);
    check L627() else D107();
  L628():
    r232 = dyn colnames__(l10, NULL, nmxreg2);
    check L629() else D109();
  L633():
    nd1 = force? nd;
    checkMissing(nd1);
    r233 = `==`(nd1, 0);
    c131 = `as.logical`(r233);
    c132 = `&&`(c128, c131);
    goto L94(c132);
  L635():
    cbind = ldf cbind;
    check L636() else D112();
  D95():
    deopt 401 [];
  D107():
    deopt 440 [r231];
  D109():
    deopt 444 [nmxreg2, r232];
  D112():
    deopt 456 [];
  D115():
    deopt 470 [method3];
  L608():
    p19 = prom<V +>{
      xreg7 = ld xreg;
      xreg8 = force? xreg7;
      checkMissing(xreg8);
      return xreg8;
    };
    r219 = dyn as_matrix(p19);
    check L609() else D96();
  L627():
    goto L92(r231);
  L629():
    st xreg = r232;
    goto L93();
  L636():
    p23 = prom<V +>{
      sym38 = ldf rep;
      base38 = ldf rep in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r235):
      return r235;
    L1():
      rep = ldf rep in base;
      r236 = dyn rep(1.0, <sym n>);
      goto L0(r236);
    L2():
      r234 = dyn base38(1.0, <sym n>);
      goto L0(r234);
    };
    p24 = prom<V +>{
      xreg11 = ld xreg;
      xreg12 = force? xreg11;
      checkMissing(xreg12);
      return xreg12;
    };
    r239 = dyn cbind[intercept, xreg](p23, p24);
    check L637() else D113();
  L640():
    method4 = force? method3;
    checkMissing(method4);
    r242 = `==`(method4, "CSS-ML");
    c135 = `as.logical`(r242);
    if c135 then L641() else L97();
  D96():
    deopt 403 [r219];
  D113():
    deopt 461 [r239];
  L97():
    goto L105();
  L105():
    method5 = ld method;
    check L660() else D123();
  L609():
    st xreg = r219;
    l8 = ld xreg;
    storage_mode__1 = ldf `storage.mode<-`;
    check L610() else D97();
  L637():
    st xreg = r239;
    ncxreg6 = ld ncxreg;
    check L638() else D114();
  L641():
    sym39 = ldf anyNA;
    base39 = ldf anyNA in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L642() else L643();
  D97():
    deopt 408 ["double", l8, "double"];
  D114():
    deopt 463 [ncxreg6];
  D123():
    deopt 504 [method5];
  L98(r244):
    st anyna = r244;
    ncxreg8 = ld ncxreg;
    check L646() else D118();
  L610():
    r220 = dyn storage_mode__1(l8, NULL, "double");
    check L611() else D98();
  L638():
    ncxreg7 = force? ncxreg6;
    checkMissing(ncxreg7);
    r240 = `+`(ncxreg7, 1);
    st ncxreg = r240;
    goto L96();
  L642():
    x17 = ld x;
    check L644() else D116();
  L643():
    r243 = dyn base39(<sym x>);
    goto L98(r243);
  L660():
    method6 = force? method5;
    checkMissing(method6);
    r251 = `==`(method6, "CSS");
    c148 = `as.logical`(r251);
    if c148 then L106(c148) else L661();
  D98():
    deopt 410 ["double", r220];
  D116():
    deopt 476 [x17];
  D118():
    deopt 481 [ncxreg8];
  L106(c149):
    c154 = `as.logical`(c149);
    if c154 then L664() else L107();
  L611():
    st xreg = r220;
    goto L85();
  L644():
    x18 = force? x17;
    checkMissing(x18);
    anyNA = ldf anyNA in base;
    r245 = dyn anyNA(x18);
    check L645() else D117();
  L646():
    ncxreg9 = force? ncxreg8;
    checkMissing(ncxreg9);
    c136 = `as.logical`(ncxreg9);
    if c136 then L647() else L99();
  L661():
    method7 = ld method;
    check L662() else D124();
  D117():
    deopt 479 [r245];
  D124():
    deopt 508 [c148, method7];
  L99():
    goto L102();
  L102():
    anyna2 = ld anyna;
    check L656() else D122();
  L107():
    st ncond = 0.0;
    goto L116();
  L116():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L711() else L712();
  L645():
    goto L98(r245);
  L647():
    anyna = ld anyna;
    check L648() else D119();
  L662():
    method8 = force? method7;
    checkMissing(method8);
    r252 = `==`(method8, "CSS-ML");
    c151 = `as.logical`(r252);
    c152 = `||`(c148, c151);
    goto L106(c152);
  L664():
    order27 = ld order;
    check L665() else D125();
  D119():
    deopt 483 [anyna];
  D122():
    deopt 495 [anyna2];
  D125():
    deopt 513 [order27];
  L117(r276):
    c165 = `as.logical`(r276);
    if c165 then L714() else L118();
  L648():
    anyna1 = force? anyna;
    checkMissing(anyna1);
    c137 = `as.logical`(anyna1);
    if c137 then L100(c137) else L649();
  L656():
    anyna3 = force? anyna2;
    checkMissing(anyna3);
    c147 = `as.logical`(anyna3);
    if c147 then L657() else L103();
  L665():
    order28 = force? order27;
    checkMissing(order28);
    c155 = `is.object`(order28);
    if c155 then L666() else L667(order28);
  L711():
    fixed1 = ld fixed;
    check L713() else D136();
  L712():
    r275 = dyn base43(<sym fixed>);
    goto L117(r275);
  D136():
    deopt 564 [fixed1];
  L100(c138):
    st anyna = c138;
    goto L102();
  L103():
    goto L104(NULL);
  L104(r249):
    goto L105();
  L108(dx65):
    seasonal57 = ld seasonal;
    check L669() else D126();
  L118():
    sym45 = ldf length;
    base45 = ldf length in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L718() else L719();
  L120():
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L728() else L729();
  L649():
    sym40 = ldf anyNA;
    base40 = ldf anyNA in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L650() else L651();
  L657():
    st method = "ML";
    goto L104("ML");
  L666():
    dr48 = tryDispatchBuiltin.1("[", order28);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L668() else L667(dr48);
  L667(order30):
    __10 = ldf `[` in base;
    r253 = dyn __10(order30, 2);
    goto L108(r253);
  L713():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    c164 = `==`(fixed2, NULL);
    goto L117(c164);
  L714():
    sym44 = ldf rep;
    base44 = ldf rep in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L715() else L716();
  D126():
    deopt 517 [dx65, seasonal57];
  L101(c142, r247):
    c143 = `as.logical`(r247);
    c144 = `||`(c142, c143);
    goto L100(c144);
  L119(r278):
    st fixed = r278;
    goto L120();
  L121(r282):
    narma = ld narma;
    check L722() else D139();
  L123(r288):
    st mask = r288;
    sym47 = ldf any;
    base47 = ldf any in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L732() else L733();
  L650():
    xreg13 = ld xreg;
    check L652() else D120();
  L651():
    r246 = dyn base40(<sym xreg>);
    goto L101(c137, r246);
  L668():
    dx64 = getTryDispatchBuiltinValue(dr48);
    goto L108(dx64);
  L669():
    seasonal58 = force? seasonal57;
    checkMissing(seasonal58);
    c156 = `is.object`(seasonal58);
    if c156 then L671() else L672(dx65, seasonal58);
  L715():
    rep1 = ldf rep in base;
    r279 = dyn rep1(NA_REAL, <lang `+`(narma, ncxreg)>);
    goto L119(r279);
  L716():
    r277 = dyn base44(NA_REAL, <lang `+`(narma, ncxreg)>);
    goto L119(r277);
  L718():
    fixed3 = ld fixed;
    check L720() else D137();
  L719():
    r281 = dyn base45(<sym fixed>);
    goto L121(r281);
  L728():
    fixed5 = ld fixed;
    check L730() else D143();
  L729():
    r287 = dyn base46(<sym fixed>);
    goto L123(r287);
  D120():
    deopt 487 [c137, xreg13];
  D137():
    deopt 573 [fixed3];
  D139():
    deopt 576 [r282, narma];
  D143():
    deopt 589 [fixed5];
  L124(r291):
    r293 = `!`(r291);
    st `no.optim` = r293;
    no_optim = ld `no.optim`;
    check L736() else D147();
  L652():
    xreg14 = force? xreg13;
    checkMissing(xreg14);
    anyNA1 = ldf anyNA in base;
    r248 = dyn anyNA1(xreg14);
    check L653() else D121();
  L670(dx70, dx71):
    c157 = `is.object`(dx71);
    if c157 then L674() else L675(dx70, dx71);
  L671():
    dr50 = tryDispatchBuiltin.1("$", seasonal58);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L673() else L672(dx65, dr50);
  L672(dx67, seasonal60):
    r254 = `$`(seasonal60, <sym order>);
    goto L670(dx67, r254);
  L720():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    length5 = ldf length in base;
    r283 = dyn length5(fixed4);
    check L721() else D138();
  L722():
    narma1 = force? narma;
    checkMissing(narma1);
    ncxreg10 = ld ncxreg;
    check L723() else D140();
  L730():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    is_na2 = ldf `is.na` in base;
    r289 = dyn is_na2(fixed6);
    check L731() else D144();
  L732():
    mask = ld mask;
    check L734() else D145();
  L733():
    r290 = dyn base47(<sym mask>);
    goto L124(r290);
  D121():
    deopt 490 [c137, r248];
  D138():
    deopt 576 [r283];
  D140():
    deopt 577 [r282, narma1, ncxreg10];
  D144():
    deopt 592 [r289];
  D145():
    deopt 596 [mask];
  D147():
    deopt 602 [no_optim];
  L109(dx78, dx79):
    seasonal61 = ld seasonal;
    check L677() else D127();
  L653():
    goto L101(c137, r248);
  L673():
    dx69 = getTryDispatchBuiltinValue(dr50);
    goto L670(dx65, dx69);
  L674():
    dr52 = tryDispatchBuiltin.1("[", dx71);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L676() else L675(dx70, dr52);
  L675(dx74, dx75):
    __11 = ldf `[` in base;
    r255 = dyn __11(dx75, 2);
    goto L109(dx74, r255);
  L721():
    goto L121(r283);
  L723():
    ncxreg11 = force? ncxreg10;
    checkMissing(ncxreg11);
    r284 = `+`(narma1, ncxreg11);
    r285 = `!=`(r282, r284);
    c166 = `as.logical`(r285);
    if c166 then L724() else L122();
  L731():
    goto L123(r289);
  L734():
    mask1 = force? mask;
    checkMissing(mask1);
    any2 = ldf any in base;
    r292 = dyn any2(mask1);
    check L735() else D146();
  L736():
    no_optim1 = force? no_optim;
    checkMissing(no_optim1);
    c167 = `as.logical`(no_optim1);
    if c167 then L737() else L125();
  D127():
    deopt 522 [dx78, dx79, seasonal61];
  D146():
    deopt 599 [r292];
  L122():
    goto L120();
  L125():
    goto L126();
  L126():
    transform_pars1 = ld `transform.pars`;
    check L739() else D148();
  L676():
    dx77 = getTryDispatchBuiltinValue(dr52);
    goto L109(dx70, dx77);
  L677():
    seasonal62 = force? seasonal61;
    checkMissing(seasonal62);
    c158 = `is.object`(seasonal62);
    if c158 then L679() else L680(dx78, dx79, seasonal62);
  L724():
    stop7 = ldf stop;
    check L725() else D141();
  L735():
    goto L124(r292);
  L737():
    st `transform.pars` = FALSE;
    goto L126();
  D141():
    deopt 582 [];
  D148():
    deopt 609 [transform_pars1];
  L678(dx87, dx88, dx89):
    r257 = `*`(dx88, dx89);
    r258 = `+`(dx87, r257);
    st ncond = r258;
    order31 = ld order;
    check L682() else D128();
  L679():
    dr54 = tryDispatchBuiltin.1("$", seasonal62);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L681() else L680(dx78, dx79, dr54);
  L680(dx82, dx83, seasonal64):
    r256 = `$`(seasonal64, <sym period>);
    goto L678(dx82, dx83, r256);
  L725():
    r286 = dyn stop7("wrong length for 'fixed'");
    check L726() else D142();
  L739():
    transform_pars2 = force? transform_pars1;
    checkMissing(transform_pars2);
    c168 = `as.logical`(transform_pars2);
    if c168 then L740() else L127();
  D128():
    deopt 528 [order31];
  D142():
    deopt 584 [r286];
  L127():
    goto L141();
  L141():
    sym52 = ldf `rep.int`;
    base52 = ldf `rep.int` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L783() else L784();
  L681():
    dx86 = getTryDispatchBuiltinValue(dr54);
    goto L678(dx78, dx79, dx86);
  L682():
    order32 = force? order31;
    checkMissing(order32);
    c159 = `is.object`(order32);
    if c159 then L683() else L684(order32);
  L726():
    goto L120();
  L740():
    arma4 = ld arma;
    check L741() else D149();
  D149():
    deopt 611 [arma4];
  L110(dx91):
    seasonal65 = ld seasonal;
    check L686() else D129();
  L142(r328):
    st init0 = r328;
    sym53 = ldf rep;
    base53 = ldf rep in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L787() else L788();
  L683():
    dr56 = tryDispatchBuiltin.1("[", order32);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L685() else L684(dr56);
  L684(order34):
    __12 = ldf `[` in base;
    r259 = dyn __12(order34, 1);
    goto L110(r259);
  L741():
    arma5 = force? arma4;
    checkMissing(arma5);
    c169 = `is.object`(arma5);
    if c169 then L742() else L743(arma5);
  L783():
    narma2 = ld narma;
    check L785() else D160();
  L784():
    r327 = dyn base52(0.0, <sym narma>);
    goto L142(r327);
  D129():
    deopt 532 [dx91, seasonal65];
  D160():
    deopt 669 [narma2];
  L128(dx121):
    arma8 = ld arma;
    check L745() else D150();
  L143(r331):
    st parscale = r331;
    ncxreg12 = ld ncxreg;
    check L789() else D162();
  L685():
    dx90 = getTryDispatchBuiltinValue(dr56);
    goto L110(dx90);
  L686():
    seasonal66 = force? seasonal65;
    checkMissing(seasonal66);
    c160 = `is.object`(seasonal66);
    if c160 then L688() else L689(dx91, seasonal66);
  L742():
    dr64 = tryDispatchBuiltin.1("[", arma5);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L744() else L743(dr64);
  L743(arma7):
    __14 = ldf `[` in base;
    r295 = dyn __14(arma7, 1);
    goto L128(r295);
  L785():
    narma3 = force? narma2;
    checkMissing(narma3);
    rep_int1 = ldf `rep.int` in base;
    r329 = dyn rep_int1(0.0, narma3);
    check L786() else D161();
  L787():
    rep2 = ldf rep in base;
    r332 = dyn rep2(1.0, <sym narma>);
    goto L143(r332);
  L788():
    r330 = dyn base53(1.0, <sym narma>);
    goto L143(r330);
  D150():
    deopt 615 [dx121, arma8];
  D161():
    deopt 672 [r329];
  D162():
    deopt 678 [ncxreg12];
  L687(dx96, dx97):
    seasonal69 = ld seasonal;
    check L691() else D130();
  L688():
    dr58 = tryDispatchBuiltin.1("$", seasonal66);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L690() else L689(dx91, dr58);
  L689(dx93, seasonal68):
    r260 = `$`(seasonal68, <sym period>);
    goto L687(dx93, r260);
  L744():
    dx120 = getTryDispatchBuiltinValue(dr64);
    goto L128(dx120);
  L745():
    arma9 = force? arma8;
    checkMissing(arma9);
    c170 = `is.object`(arma9);
    if c170 then L746() else L747(dx121, arma9);
  L786():
    goto L142(r329);
  L789():
    ncxreg13 = force? ncxreg12;
    checkMissing(ncxreg13);
    c189 = `as.logical`(ncxreg13);
    if c189 then L790() else L144();
  D130():
    deopt 534 [dx96, dx97, seasonal69];
  L129(dx126, dx127):
    r297 = `+`(dx126, dx127);
    sym48 = ldf seq_len;
    base48 = ldf seq_len in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L749() else L750();
  L144():
    goto L168();
  L168():
    n_used = ld `n.used`;
    check L907() else D216();
  L690():
    dx95 = getTryDispatchBuiltinValue(dr58);
    goto L687(dx91, dx95);
  L691():
    seasonal70 = force? seasonal69;
    checkMissing(seasonal70);
    c161 = `is.object`(seasonal70);
    if c161 then L693() else L694(dx96, dx97, seasonal70);
  L746():
    dr66 = tryDispatchBuiltin.1("[", arma9);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L748() else L747(dx121, dr66);
  L747(dx123, arma11):
    __15 = ldf `[` in base;
    r296 = dyn __15(arma11, 2);
    goto L129(dx123, r296);
  L790():
    colnames1 = ldf colnames;
    check L791() else D163();
  D163():
    deopt 681 [];
  D216():
    deopt 881 [n_used];
  L130(r301, r302):
    r309 = `+`(r301, r302);
    st ind = r309;
    sym49 = ldf any;
    base49 = ldf any in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L755() else L756();
  L692(dx105, dx106, dx107):
    c162 = `is.object`(dx107);
    if c162 then L696() else L697(dx105, dx106, dx107);
  L693():
    dr60 = tryDispatchBuiltin.1("$", seasonal70);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L695() else L694(dx96, dx97, dr60);
  L694(dx100, dx101, seasonal72):
    r261 = `$`(seasonal72, <sym order>);
    goto L692(dx100, dx101, r261);
  L748():
    dx125 = getTryDispatchBuiltinValue(dr66);
    goto L129(dx121, dx125);
  L749():
    arma12 = ld arma;
    check L751() else D151();
  L750():
    r300 = dyn base48(<lang `[`(arma, 3)>);
    goto L130(r297, r300);
  L791():
    p25 = prom<V +>{
      xreg15 = ld xreg;
      xreg16 = force? xreg15;
      checkMissing(xreg16);
      return xreg16;
    };
    r334 = dyn colnames1(p25);
    check L792() else D164();
  L907():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    r436 = `<=`(n_used1, 0.0);
    c241 = `as.logical`(r436);
    if c241 then L908() else L169();
  D151():
    deopt 621 [r297, arma12];
  D164():
    deopt 683 [r334];
  L111(dx117, dx118, dx119):
    r263 = `*`(dx118, dx119);
    r264 = `+`(dx117, r263);
    st ncond1 = r264;
    ncond = ld ncond;
    check L699() else D131();
  L132(r311):
    c174 = `as.logical`(r311);
    if c174 then L136(c174) else L768();
  L169():
    goto L170();
  L170():
    sym62 = ldf `is.null`;
    base62 = ldf `is.null` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L912() else L913();
  L695():
    dx104 = getTryDispatchBuiltinValue(dr60);
    goto L692(dx96, dx97, dx104);
  L696():
    dr62 = tryDispatchBuiltin.1("[", dx107);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L698() else L697(dx105, dx106, dr62);
  L697(dx111, dx112, dx113):
    __13 = ldf `[` in base;
    r262 = dyn __13(dx113, 1);
    goto L111(dx111, dx112, r262);
  L751():
    arma13 = force? arma12;
    checkMissing(arma13);
    c171 = `is.object`(arma13);
    if c171 then L752() else L753(r297, arma13);
  L755():
    mask2 = ld mask;
    check L757() else D152();
  L756():
    r310 = dyn base49(<lang `!`(`[`(mask, seq_len(`[`(arma, 1))))>);
    goto L132(r310);
  L792():
    st cn = r334;
    ncxreg14 = ld ncxreg;
    check L793() else D165();
  L908():
    stop8 = ldf stop;
    check L909() else D217();
  D131():
    deopt 543 [ncond];
  D152():
    deopt 631 [mask2];
  D165():
    deopt 685 [ncxreg14];
  D217():
    deopt 886 [];
  L131(r306, dx129):
    r308 = seq_len(dx129);
    goto L130(r306, r308);
  L136(c175):
    c188 = `as.logical`(c175);
    if c188 then L778() else L139();
  L171(r440):
    r441 = `!`(r440);
    c243 = `as.logical`(r441);
    if c243 then L915() else L172();
  L698():
    dx116 = getTryDispatchBuiltinValue(dr62);
    goto L111(dx105, dx106, dx116);
  L699():
    ncond1 = force? ncond;
    checkMissing(ncond1);
    sym41 = ldf missing;
    base41 = ldf missing in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L700() else L701();
  L752():
    dr68 = tryDispatchBuiltin.1("[", arma13);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L754() else L753(r297, dr68);
  L753(r304, arma15):
    __16 = ldf `[` in base;
    r307 = dyn __16(arma15, 3);
    goto L131(r304, r307);
  L757():
    mask3 = force? mask2;
    checkMissing(mask3);
    c172 = `is.object`(mask3);
    if c172 then L758() else L759(mask3);
  L768():
    sym51 = ldf any;
    base51 = ldf any in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L769() else L770();
  L793():
    ncxreg15 = force? ncxreg14;
    checkMissing(ncxreg15);
    r335 = `==`(ncxreg15, 1);
    c190 = `as.logical`(r335);
    if c190 then L145(c190) else L794();
  L909():
    r437 = dyn stop8("too few non-missing observations");
    check L910() else D218();
  L912():
    init3 = ld init;
    check L914() else D219();
  L913():
    r439 = dyn base62(<sym init>);
    goto L171(r439);
  D218():
    deopt 888 [r437];
  D219():
    deopt 892 [init3];
  L112(ncond4, r266):
    r268 = `!`(r266);
    c163 = `as.logical`(r268);
    if c163 then L702() else L113();
  L133(dx131):
    r317 = `!`(dx131);
    any3 = ldf any in base;
    r318 = dyn any3(r317);
    check L767() else D154();
  L137(c179, r320):
    c185 = `as.logical`(r320);
    c186 = `||`(c179, c185);
    goto L136(c186);
  L139():
    goto L140(NULL);
  L140(r325):
    goto L141();
  L145(c191):
    st `orig.xreg` = c191;
    orig_xreg = ld `orig.xreg`;
    check L805() else D170();
  L172():
    init40 = ld init0;
    check L985() else D248();
  L199():
    sym70 = ldf `as.double`;
    base70 = ldf `as.double` in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L986() else L987();
  L700():
    missing2 = ldf missing in base;
    r267 = dyn missing2(<sym n.cond>);
    goto L112(ncond1, r267);
  L701():
    r265 = dyn base41(<sym n.cond>);
    goto L112(ncond1, r265);
  L754():
    dx128 = getTryDispatchBuiltinValue(dr68);
    goto L131(r297, dx128);
  L758():
    dr70 = tryDispatchBuiltin.1("[", mask3);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L760() else L759(dr70);
  L759(mask5):
    sym50 = ldf seq_len;
    base50 = ldf seq_len in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L761() else L762();
  L769():
    mask13 = ld mask;
    check L771() else D155();
  L770():
    r319 = dyn base51(<lang `!`(`[`(mask, ind))>);
    goto L137(c174, r319);
  L778():
    warning = ldf warning;
    check L779() else D158();
  L794():
    sym54 = ldf any;
    base54 = ldf any in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L795() else L796();
  L910():
    goto L170();
  L914():
    init4 = force? init3;
    checkMissing(init4);
    c242 = `==`(init4, NULL);
    goto L171(c242);
  L915():
    sym63 = ldf length;
    base63 = ldf length in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L916() else L917();
  D154():
    deopt 643 [r318];
  D155():
    deopt 646 [c174, mask13];
  D158():
    deopt 656 [];
  D170():
    deopt 705 [orig_xreg];
  D248():
    deopt 998 [init40];
  L113():
    ncond13 = ld ncond1;
    check L709() else D135();
  L115(ncond12, r272):
    r273 = `+`(ncond12, r272);
    st ncond = r273;
    goto L116();
  L134(mask8, r313):
    __18 = ldf `[` in base;
    r316 = dyn __18(mask8, r313);
    goto L133(r316);
  L146(c195, r337):
    c201 = `as.logical`(r337);
    c202 = `||`(c195, c201);
    goto L145(c202);
  L173(r443):
    sym64 = ldf length;
    base64 = ldf length in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L920() else L921();
  L200(r512):
    st coef = r512;
    _in_ = ldf `%in%`;
    check L990() else D251();
  L702():
    sym42 = ldf max;
    base42 = ldf max in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L703() else L704();
  L760():
    dx130 = getTryDispatchBuiltinValue(dr70);
    goto L133(dx130);
  L761():
    arma16 = ld arma;
    check L763() else D153();
  L762():
    r312 = dyn base50(<lang `[`(arma, 1)>);
    goto L134(mask5, r312);
  L767():
    goto L132(r318);
  L771():
    mask14 = force? mask13;
    checkMissing(mask14);
    c180 = `is.object`(mask14);
    if c180 then L772() else L773(c174, mask14);
  L779():
    r324 = dyn warning("some AR parameters were fixed: setting transform.pars = FALSE");
    check L780() else D159();
  L795():
    mask17 = ld mask;
    check L797() else D166();
  L796():
    r336 = dyn base54(<lang `!`(`[`(mask, `+`(narma, `:`(1, ncxreg))))>);
    goto L146(c190, r336);
  L805():
    orig_xreg1 = force? orig_xreg;
    checkMissing(orig_xreg1);
    r343 = `!`(orig_xreg1);
    c204 = `as.logical`(r343);
    if c204 then L806() else L148();
  L916():
    init5 = ld init;
    check L918() else D220();
  L917():
    r442 = dyn base63(<sym init>);
    goto L173(r442);
  L985():
    init41 = force? init40;
    checkMissing(init41);
    st init = init41;
    goto L199();
  L986():
    fixed7 = ld fixed;
    check L988() else D249();
  L987():
    r511 = dyn base70(<sym fixed>);
    goto L200(r511);
  D135():
    deopt 556 [ncond4, ncond13];
  D153():
    deopt 634 [mask5, arma16];
  D159():
    deopt 658 [r324];
  D166():
    deopt 691 [c190, mask17];
  D220():
    deopt 898 [init5];
  D249():
    deopt 1003 [fixed7];
  D251():
    deopt 1009 [];
  L114(ncond9, r270):
    goto L115(ncond9, r270);
  L138(c184, dx135):
    r322 = `!`(dx135);
    any4 = ldf any in base;
    r323 = dyn any4(r322);
    check L776() else D157();
  L148():
    goto L149();
  L149():
    x19 = ld x;
    check L817() else D176();
  L174(r448, r449):
    r451 = `!=`(r448, r449);
    c244 = `as.logical`(r451);
    if c244 then L924() else L175();
  L703():
    n_cond1 = ld `n.cond`;
    check L705() else D132();
  L704():
    r269 = dyn base42(<sym n.cond>, <sym ncond1>);
    goto L114(ncond4, r269);
  L709():
    ncond14 = force? ncond13;
    checkMissing(ncond14);
    goto L115(ncond4, ncond14);
  L763():
    arma17 = force? arma16;
    checkMissing(arma17);
    c173 = `is.object`(arma17);
    if c173 then L764() else L765(mask5, arma17);
  L772():
    dr74 = tryDispatchBuiltin.1("[", mask14);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L774() else L773(c174, dr74);
  L773(c182, mask16):
    ind = ld ind;
    check L775() else D156();
  L780():
    st `transform.pars` = FALSE;
    goto L140(FALSE);
  L797():
    mask18 = force? mask17;
    checkMissing(mask18);
    c196 = `is.object`(mask18);
    if c196 then L798() else L799(c190, mask18);
  L806():
    svd = ldf svd;
    check L807() else D171();
  L918():
    init6 = force? init5;
    checkMissing(init6);
    length8 = ldf length in base;
    r444 = dyn length8(init6);
    check L919() else D221();
  L920():
    init7 = ld init0;
    check L922() else D222();
  L921():
    r447 = dyn base64(<sym init0>);
    goto L174(r443, r447);
  L988():
    fixed8 = force? fixed7;
    checkMissing(fixed8);
    as_double1 = ldf `as.double` in base;
    r513 = dyn as_double1(fixed8);
    check L989() else D250();
  L990():
    p49 = prom<V +>{
      sym71 = ldf names;
      base71 = ldf names in base;
      guard71 = `==`.4(sym71, base71);
      if guard71 then L1() else L2();
    L0(r515):
      return r515;
    L1():
      optim_control1 = ld `optim.control`;
      optim_control2 = force? optim_control1;
      checkMissing(optim_control2);
      names = ldf names in base;
      r516 = dyn names(optim_control2);
      goto L0(r516);
    L2():
      r514 = dyn base71(<sym optim.control>);
      goto L0(r514);
    };
    r518 = dyn _in_("parscale", p49);
    check L991() else D252();
  D132():
    deopt 550 [ncond4, n_cond1];
  D156():
    deopt 648 [c182, mask16, ind];
  D157():
    deopt 653 [c184, r323];
  D171():
    deopt 709 [];
  D176():
    deopt 724 [x19];
  D221():
    deopt 901 [r444];
  D222():
    deopt 903 [r443, init7];
  D250():
    deopt 1006 [r513];
  D252():
    deopt 1012 [r518];
  L135(mask12, dx133):
    r315 = seq_len(dx133);
    goto L134(mask12, r315);
  L147(c200, dx137):
    r341 = `!`(dx137);
    any5 = ldf any in base;
    r342 = dyn any5(r341);
    check L803() else D169();
  L175():
    goto L176();
  L176():
    sym65 = ldf any;
    base65 = ldf any in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L928() else L929();
  L705():
    n_cond2 = force? n_cond1;
    checkMissing(n_cond2);
    ncond10 = ld ncond1;
    check L706() else D133();
  L764():
    dr72 = tryDispatchBuiltin.1("[", arma17);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L766() else L765(mask5, dr72);
  L765(mask10, arma19):
    __17 = ldf `[` in base;
    r314 = dyn __17(arma19, 1);
    goto L135(mask10, r314);
  L774():
    dx134 = getTryDispatchBuiltinValue(dr74);
    goto L138(c174, dx134);
  L775():
    ind1 = force? ind;
    __19 = ldf `[` in base;
    r321 = dyn __19(mask16, ind1);
    goto L138(c182, r321);
  L776():
    goto L137(c184, r323);
  L798():
    dr76 = tryDispatchBuiltin.1("[", mask18);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L800() else L799(c190, dr76);
  L799(c198, mask20):
    narma4 = ld narma;
    check L801() else D167();
  L807():
    p27 = prom<V +>{
      na_omit = ldf `na.omit`;
      p26 = prom<V +>{
        xreg17 = ld xreg;
        xreg18 = force? xreg17;
        checkMissing(xreg18);
        return xreg18;
      };
      r345 = dyn na_omit(p26);
      return r345;
    };
    r347 = dyn svd(p27);
    check L808() else D172();
  L817():
    x20 = force? x19;
    checkMissing(x20);
    st dx = x20;
    xreg21 = ld xreg;
    check L818() else D177();
  L919():
    goto L173(r444);
  L922():
    init8 = force? init7;
    checkMissing(init8);
    length9 = ldf length in base;
    r450 = dyn length9(init8);
    check L923() else D223();
  L924():
    stop9 = ldf stop;
    check L925() else D224();
  L989():
    goto L200(r513);
  L991():
    r519 = `!`(r518);
    c261 = `as.logical`(r519);
    if c261 then L992() else L201();
  D133():
    deopt 552 [ncond4, ncond10];
  D167():
    deopt 693 [c198, mask20, narma4];
  D169():
    deopt 702 [c200, r342];
  D172():
    deopt 711 [r347];
  D177():
    deopt 727 [xreg21];
  D223():
    deopt 906 [r443, r450];
  D224():
    deopt 909 [];
  L177(r455):
    c245 = `as.logical`(r455);
    if c245 then L935() else L179();
  L201():
    goto L203();
  L203():
    method11 = ld method;
    check L1003() else D255();
  L706():
    ncond11 = force? ncond10;
    checkMissing(ncond11);
    max = ldf max in base;
    r271 = dyn max(n_cond2, ncond11);
    check L707() else D134();
  L766():
    dx132 = getTryDispatchBuiltinValue(dr72);
    goto L135(mask5, dx132);
  L800():
    dx136 = getTryDispatchBuiltinValue(dr76);
    goto L147(c190, dx136);
  L801():
    narma5 = force? narma4;
    checkMissing(narma5);
    ncxreg16 = ld ncxreg;
    check L802() else D168();
  L803():
    goto L146(c200, r342);
  L808():
    st S = r347;
    xreg19 = ld xreg;
    check L809() else D173();
  L818():
    xreg22 = force? xreg21;
    checkMissing(xreg22);
    st dxreg = xreg22;
    order35 = ld order;
    check L819() else D178();
  L923():
    goto L174(r443, r450);
  L925():
    r452 = dyn stop9("'init' is of the wrong length");
    check L926() else D225();
  L928():
    sym66 = ldf `is.na`;
    base66 = ldf `is.na` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L930() else L931();
  L929():
    r454 = dyn base65(<lang `<-`(ind, is.na(init))>);
    goto L177(r454);
  L992():
    parscale2 = ld parscale;
    check L993() else D253();
  D134():
    deopt 555 [ncond4, r271];
  D168():
    deopt 695 [c198, mask20, narma5, 1, ncxreg16];
  D173():
    deopt 714 [xreg19];
  D178():
    deopt 730 [order35];
  D225():
    deopt 911 [r452];
  D253():
    deopt 1014 [parscale2];
  D255():
    deopt 1024 [method11];
  L178(r457):
    st ind = r457;
    any6 = ldf any in base;
    r459 = dyn any6(r457);
    check L934() else D228();
  L179():
    goto L182();
  L182():
    method9 = ld method;
    check L946() else D232();
  L707():
    goto L114(ncond4, r271);
  L802():
    ncxreg17 = force? ncxreg16;
    checkMissing(ncxreg17);
    r338 = `:`(1, ncxreg17);
    r339 = `+`(narma5, r338);
    __20 = ldf `[` in base;
    r340 = dyn __20(mask20, r339);
    goto L147(c198, r340);
  L809():
    xreg20 = force? xreg19;
    checkMissing(xreg20);
    S = ld S;
    check L810() else D174();
  L819():
    order36 = force? order35;
    checkMissing(order36);
    c206 = `is.object`(order36);
    if c206 then L820() else L821(order36);
  L926():
    goto L176();
  L930():
    init9 = ld init;
    check L932() else D226();
  L931():
    r456 = dyn base66(<sym init>);
    goto L178(r456);
  L935():
    init11 = ld init0;
    check L936() else D229();
  L993():
    parscale3 = force? parscale2;
    checkMissing(parscale3);
    c262 = `is.object`(parscale3);
    if c262 then L994() else L995(parscale3);
  L1003():
    method12 = force? method11;
    checkMissing(method12);
    r522 = `==`(method12, "CSS");
    c264 = `as.logical`(r522);
    if c264 then L1004() else L204();
  D174():
    deopt 716 [S];
  D226():
    deopt 918 [init9];
  D228():
    deopt 924 [r459];
  D229():
    deopt 925 [init11];
  D232():
    deopt 937 [method9];
  L150(dx141):
    r352 = `>`(dx141, 0);
    c207 = `as.logical`(r352);
    if c207 then L823() else L151();
  L202(dx208):
    l14 = ld `optim.control`;
    c263 = `is.object`(l14);
    if c263 then L999() else L1000(dx208, l14);
  L204():
    method13 = ld method;
    check L1085() else D296();
  L222():
    n_used10 = ld `n.used`;
    check L1385() else D415();
  L810():
    S1 = force? S;
    checkMissing(S1);
    c205 = `is.object`(S1);
    if c205 then L812() else L813(S1);
  L820():
    dr80 = tryDispatchBuiltin.1("[", order36);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L822() else L821(dr80);
  L821(order38):
    __21 = ldf `[` in base;
    r351 = dyn __21(order38, 2);
    goto L150(r351);
  L932():
    init10 = force? init9;
    checkMissing(init10);
    is_na4 = ldf `is.na` in base;
    r458 = dyn is_na4(init10);
    check L933() else D227();
  L934():
    goto L177(r459);
  L936():
    init12 = force? init11;
    checkMissing(init12);
    c246 = `is.object`(init12);
    if c246 then L937() else L938(init12);
  L946():
    method10 = force? method9;
    checkMissing(method10);
    r462 = `==`(method10, "ML");
    c248 = `as.logical`(r462);
    if c248 then L947() else L183();
  L994():
    dr128 = tryDispatchBuiltin.1("[", parscale3);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L996() else L995(dr128);
  L995(parscale5):
    mask21 = ld mask;
    check L997() else D254();
  L1004():
    no_optim2 = ld `no.optim`;
    check L1005() else D256();
  D227():
    deopt 921 [r458];
  D254():
    deopt 1016 [parscale5, mask21];
  D256():
    deopt 1028 [no_optim2];
  D296():
    deopt 1160 [method13];
  D415():
    deopt 1626 [2.0, n_used10];
  L151():
    goto L152();
  L152():
    seasonal73 = ld seasonal;
    check L829() else D183();
  L180(dx185):
    l11 = ld init;
    c247 = `is.object`(l11);
    if c247 then L941() else L942(dx185, l11);
  L183():
    goto L198(NULL);
  L198(r509):
    goto L199();
  L811(dx139):
    ___2 = ldf `%*%` in base;
    r349 = dyn ___2(xreg20, dx139);
    check L815() else D175();
  L812():
    dr78 = tryDispatchBuiltin.1("$", S1);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L814() else L813(dr78);
  L813(S3):
    r348 = `$`(S3, <sym v>);
    goto L811(r348);
  L822():
    dx140 = getTryDispatchBuiltinValue(dr80);
    goto L150(dx140);
  L823():
    diff = ldf diff;
    check L824() else D179();
  L933():
    goto L178(r458);
  L937():
    dr110 = tryDispatchBuiltin.1("[", init12);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L939() else L938(dr110);
  L938(init14):
    ind2 = ld ind;
    check L940() else D230();
  L947():
    arma20 = ld arma;
    check L948() else D233();
  L996():
    dx207 = getTryDispatchBuiltinValue(dr128);
    goto L202(dx207);
  L997():
    mask22 = force? mask21;
    __38 = ldf `[` in base;
    r520 = dyn __38(parscale5, mask22);
    goto L202(r520);
  L998(dx213, dx214):
    st `optim.control` = dx214;
    goto L203();
  L999():
    dr130 = tryDispatchBuiltin.0("$<-", l14, dx208);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L1001() else L1000(dx208, dr130);
  L1000(dx210, l16):
    r521 = `$<-`(l16, <sym parscale>, dx208);
    goto L998(dx210, r521);
  L1005():
    no_optim3 = force? no_optim2;
    checkMissing(no_optim3);
    c265 = `as.logical`(no_optim3);
    if c265 then L1006() else L205();
  L1085():
    method14 = force? method13;
    checkMissing(method14);
    r584 = `==`(method14, "CSS-ML");
    c281 = `as.logical`(r584);
    if c281 then L1086() else L223();
  L1385():
    n_used11 = force? n_used10;
    checkMissing(n_used11);
    r862 = `*`(2.0, n_used11);
    res56 = ld res;
    check L1386() else D416();
  D175():
    deopt 720 [r349];
  D179():
    deopt 738 [];
  D183():
    deopt 753 [seasonal73];
  D230():
    deopt 927 [init14, ind2];
  D233():
    deopt 941 [arma20];
  D416():
    deopt 1628 [r862, res56];
  L181(dx190, dx191):
    st init = dx191;
    goto L182();
  L205():
    optim = ldf optim;
    check L1015() else D262();
  L207(r530):
    st res = r530;
    res = ld res;
    check L1017() else D264();
  L223():
    goto L240();
  L240():
    transform_pars5 = ld `transform.pars`;
    check L1140() else D318();
  L814():
    dx138 = getTryDispatchBuiltinValue(dr78);
    goto L811(dx138);
  L815():
    st xreg = r349;
    goto L149();
  L824():
    p28 = prom<V +>{
      dx142 = ld dx;
      dx143 = force? dx142;
      checkMissing(dx143);
      return dx143;
    };
    p29 = prom<V +>{
      order39 = ld order;
      order40 = force? order39;
      checkMissing(order40);
      c208 = `is.object`(order40);
      if c208 then L1() else L2(order40);
    L0(dx145):
      return dx145;
    L1():
      dr82 = tryDispatchBuiltin.1("[", order40);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(order42):
      __22 = ldf `[` in base;
      r354 = dyn __22(order42, 2);
      goto L0(r354);
    L3():
      dx144 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx144);
    };
    r356 = dyn diff(p28, 1, p29);
    check L825() else D180();
  L829():
    seasonal74 = force? seasonal73;
    checkMissing(seasonal74);
    c210 = `is.object`(seasonal74);
    if c210 then L831() else L832(seasonal74);
  L939():
    dx184 = getTryDispatchBuiltinValue(dr110);
    goto L180(dx184);
  L940():
    ind3 = force? ind2;
    __30 = ldf `[` in base;
    r460 = dyn __30(init14, ind3);
    goto L180(r460);
  L941():
    dr112 = tryDispatchBuiltin.0("[<-", l11, dx185);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L943() else L942(dx185, dr112);
  L942(dx187, l13):
    ind4 = ld ind;
    check L944() else D231();
  L948():
    arma21 = force? arma20;
    checkMissing(arma21);
    c249 = `is.object`(arma21);
    if c249 then L949() else L950(arma21);
  L1001():
    dx212 = getTryDispatchBuiltinValue(dr130);
    goto L998(dx208, dx212);
  L1006():
    sym72 = ldf list;
    base72 = ldf list in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L1007() else L1008();
  L1086():
    no_optim6 = ld `no.optim`;
    check L1087() else D297();
  L1386():
    res57 = force? res56;
    checkMissing(res57);
    c357 = `is.object`(res57);
    if c357 then L1388() else L1389(r862, res57);
  D180():
    deopt 742 [r356];
  D231():
    deopt 931 [dx187, l13, dx185, ind4];
  D262():
    deopt 1046 [];
  D264():
    deopt 1057 [res];
  D297():
    deopt 1164 [no_optim6];
  D318():
    deopt 1253 [transform_pars5];
  L184(dx194):
    r464 = `>`(dx194, 0.0);
    c250 = `as.logical`(r464);
    if c250 then L952() else L185();
  L206(r524):
    goto L207(r524);
  L825():
    st dx = r356;
    diff1 = ldf diff;
    check L826() else D181();
  L830(dx149):
    r363 = `>`(dx149, 1);
    c211 = `as.logical`(r363);
    if c211 then L834() else L153(c211);
  L831():
    dr86 = tryDispatchBuiltin.1("$", seasonal74);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L833() else L832(dr86);
  L832(seasonal76):
    r362 = `$`(seasonal76, <sym period>);
    goto L830(r362);
  L943():
    dx189 = getTryDispatchBuiltinValue(dr112);
    goto L181(dx185, dx189);
  L944():
    ind5 = force? ind4;
    ___3 = ldf `[<-` in base;
    r461 = dyn ___3(l13, dx185, ind5);
    goto L181(dx187, r461);
  L949():
    dr114 = tryDispatchBuiltin.1("[", arma21);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L951() else L950(dr114);
  L950(arma23):
    __31 = ldf `[` in base;
    r463 = dyn __31(arma23, 1);
    goto L184(r463);
  L1007():
    numeric = ldf numeric;
    check L1009() else D257();
  L1008():
    r523 = dyn base72[convergence, par, value](0, <lang numeric()>, <lang armaCSS(numeric())>);
    goto L206(r523);
  L1015():
    p51 = prom<V +>{
      init42 = ld init;
      init43 = force? init42;
      checkMissing(init43);
      c266 = `is.object`(init43);
      if c266 then L1() else L2(init43);
    L0(dx217):
      return dx217;
    L1():
      dr132 = tryDispatchBuiltin.1("[", init43);
      dc66 = getTryDispatchBuiltinDispatched(dr132);
      if dc66 then L3() else L2(dr132);
    L2(init45):
      mask23 = ld mask;
      mask24 = force? mask23;
      __39 = ldf `[` in base;
      r531 = dyn __39(init45, mask24);
      goto L0(r531);
    L3():
      dx216 = getTryDispatchBuiltinValue(dr132);
      goto L0(dx216);
    };
    p52 = prom<V +>{
      armaCSS1 = ld armaCSS;
      armaCSS2 = force? armaCSS1;
      checkMissing(armaCSS2);
      return armaCSS2;
    };
    p53 = prom<V +>{
      optim_method1 = ld `optim.method`;
      optim_method2 = force? optim_method1;
      checkMissing(optim_method2);
      return optim_method2;
    };
    p54 = prom<V +>{
      optim_control3 = ld `optim.control`;
      optim_control4 = force? optim_control3;
      checkMissing(optim_control4);
      return optim_control4;
    };
    r536 = dyn optim[, , method, hessian, control](p51, p52, p53, TRUE, p54);
    check L1016() else D263();
  L1017():
    res1 = force? res;
    checkMissing(res1);
    c267 = `is.object`(res1);
    if c267 then L1019() else L1020(res1);
  L1087():
    no_optim7 = force? no_optim6;
    checkMissing(no_optim7);
    c282 = `as.logical`(no_optim7);
    if c282 then L1088() else L224();
  L1140():
    transform_pars6 = force? transform_pars5;
    checkMissing(transform_pars6);
    c299 = `as.logical`(transform_pars6);
    if c299 then L1141() else L241();
  L1387(r866, dx395):
    r868 = `*`(r866, dx395);
    n_used12 = ld `n.used`;
    check L1391() else D417();
  L1388():
    dr268 = tryDispatchBuiltin.1("$", res57);
    dc134 = getTryDispatchBuiltinDispatched(dr268);
    if dc134 then L1390() else L1389(r862, dr268);
  L1389(r864, res59):
    r867 = `$`(res59, <sym value>);
    goto L1387(r864, r867);
  D181():
    deopt 745 [];
  D257():
    deopt 1035 [];
  D263():
    deopt 1055 [r536];
  D417():
    deopt 1631 [r868, n_used12];
  L153(c213):
    c227 = `as.logical`(c213);
    if c227 then L844() else L155();
  L185():
    goto L188();
  L188():
    arma28 = ld arma;
    check L960() else D238();
  L224():
    optim1 = ldf optim;
    check L1097() else D303();
  L226(r592):
    st res = r592;
    res16 = ld res;
    check L1099() else D305();
  L241():
    goto L256();
  L256():
    sym80 = ldf `.Call`;
    base80 = ldf `.Call` in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L1191() else L1192();
  L826():
    p30 = prom<V +>{
      dxreg = ld dxreg;
      dxreg1 = force? dxreg;
      checkMissing(dxreg1);
      return dxreg1;
    };
    p31 = prom<V +>{
      order43 = ld order;
      order44 = force? order43;
      checkMissing(order44);
      c209 = `is.object`(order44);
      if c209 then L1() else L2(order44);
    L0(dx147):
      return dx147;
    L1():
      dr84 = tryDispatchBuiltin.1("[", order44);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(order46):
      __23 = ldf `[` in base;
      r358 = dyn __23(order46, 2);
      goto L0(r358);
    L3():
      dx146 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx146);
    };
    r360 = dyn diff1(p30, 1, p31);
    check L827() else D182();
  L833():
    dx148 = getTryDispatchBuiltinValue(dr86);
    goto L830(dx148);
  L834():
    seasonal77 = ld seasonal;
    check L835() else D184();
  L951():
    dx193 = getTryDispatchBuiltinValue(dr114);
    goto L184(dx193);
  L952():
    arCheck = ldf arCheck;
    check L953() else D234();
  L1009():
    r525 = dyn numeric();
    check L1010() else D258();
  L1016():
    goto L207(r536);
  L1018(dx219):
    r538 = `>`(dx219, 0.0);
    c268 = `as.logical`(r538);
    if c268 then L1022() else L208();
  L1019():
    dr134 = tryDispatchBuiltin.1("$", res1);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L1021() else L1020(dr134);
  L1020(res3):
    r537 = `$`(res3, <sym convergence>);
    goto L1018(r537);
  L1088():
    sym76 = ldf list;
    base76 = ldf list in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L1089() else L1090();
  L1141():
    sym78 = ldf `.Call`;
    base78 = ldf `.Call` in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L1142() else L1143();
  L1390():
    dx394 = getTryDispatchBuiltinValue(dr268);
    goto L1387(r862, dx394);
  L1391():
    n_used13 = force? n_used12;
    checkMissing(n_used13);
    r869 = `+`(r868, n_used13);
    n_used14 = ld `n.used`;
    check L1392() else D418();
  D182():
    deopt 749 [r360];
  D184():
    deopt 758 [c211, seasonal77];
  D234():
    deopt 949 [];
  D238():
    deopt 961 [arma28];
  D258():
    deopt 1036 [r525];
  D303():
    deopt 1182 [];
  D305():
    deopt 1193 [res16];
  D418():
    deopt 1633 [r869, n_used14];
  L155():
    goto L156();
  L156():
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L850() else L851();
  L208():
    goto L209();
  L209():
    res8 = ld res;
    check L1026() else D267();
  L225(r586):
    goto L226(r586);
  L242(r644):
    st init = r644;
    arma79 = ld arma;
    check L1147() else D322();
  L257(r693):
    st trarma = r693;
    makeARIMA1 = ldf makeARIMA;
    check L1197() else D339();
  L827():
    st dxreg = r360;
    goto L152();
  L835():
    seasonal78 = force? seasonal77;
    checkMissing(seasonal78);
    c214 = `is.object`(seasonal78);
    if c214 then L837() else L838(c211, seasonal78);
  L844():
    diff2 = ldf diff;
    check L845() else D185();
  L953():
    p47 = prom<V +>{
      init15 = ld init;
      init16 = force? init15;
      checkMissing(init16);
      c251 = `is.object`(init16);
      if c251 then L2() else L3(init16);
    L0(dx196):
      return dx196;
    L2():
      dr116 = tryDispatchBuiltin.1("[", init16);
      dc58 = getTryDispatchBuiltinDispatched(dr116);
      if dc58 then L4() else L3(dr116);
    L3(init18):
      arma24 = ld arma;
      arma25 = force? arma24;
      checkMissing(arma25);
      c252 = `is.object`(arma25);
      if c252 then L5() else L6(init18, 1, arma25);
    L1(init22, r468, dx198):
      r470 = `:`(r468, dx198);
      __33 = ldf `[` in base;
      r471 = dyn __33(init22, r470);
      goto L0(r471);
    L4():
      dx195 = getTryDispatchBuiltinValue(dr116);
      goto L0(dx195);
    L5():
      dr118 = tryDispatchBuiltin.1("[", arma25);
      dc59 = getTryDispatchBuiltinDispatched(dr118);
      if dc59 then L7() else L6(init18, 1, dr118);
    L6(init20, r466, arma27):
      __32 = ldf `[` in base;
      r469 = dyn __32(arma27, 1);
      goto L1(init20, r466, r469);
    L7():
      dx197 = getTryDispatchBuiltinValue(dr118);
      goto L1(init18, 1, dx197);
    };
    r473 = dyn arCheck(p47);
    check L954() else D235();
  L960():
    arma29 = force? arma28;
    checkMissing(arma29);
    c254 = `is.object`(arma29);
    if c254 then L961() else L962(arma29);
  L1010():
    armaCSS = ldf armaCSS;
    check L1011() else D259();
  L1021():
    dx218 = getTryDispatchBuiltinValue(dr134);
    goto L1018(dx218);
  L1022():
    warning1 = ldf warning;
    check L1023() else D265();
  L1089():
    numeric3 = ldf numeric;
    check L1091() else D298();
  L1090():
    r585 = dyn base76[convergence, par, value](0, <lang numeric()>, <lang armaCSS(numeric())>);
    goto L225(r585);
  L1097():
    p66 = prom<V +>{
      init46 = ld init;
      init47 = force? init46;
      checkMissing(init47);
      c283 = `is.object`(init47);
      if c283 then L1() else L2(init47);
    L0(dx255):
      return dx255;
    L1():
      dr156 = tryDispatchBuiltin.1("[", init47);
      dc78 = getTryDispatchBuiltinDispatched(dr156);
      if dc78 then L3() else L2(dr156);
    L2(init49):
      mask27 = ld mask;
      mask28 = force? mask27;
      __46 = ldf `[` in base;
      r593 = dyn __46(init49, mask28);
      goto L0(r593);
    L3():
      dx254 = getTryDispatchBuiltinValue(dr156);
      goto L0(dx254);
    };
    p67 = prom<V +>{
      armaCSS4 = ld armaCSS;
      armaCSS5 = force? armaCSS4;
      checkMissing(armaCSS5);
      return armaCSS5;
    };
    p68 = prom<V +>{
      optim_method3 = ld `optim.method`;
      optim_method4 = force? optim_method3;
      checkMissing(optim_method4);
      return optim_method4;
    };
    p69 = prom<V +>{
      optim_control5 = ld `optim.control`;
      optim_control6 = force? optim_control5;
      checkMissing(optim_control6);
      return optim_control6;
    };
    r598 = dyn optim1[, , method, hessian, control](p66, p67, p68, FALSE, p69);
    check L1098() else D304();
  L1099():
    res17 = force? res16;
    checkMissing(res17);
    c284 = `is.object`(res17);
    if c284 then L1101() else L1102(res17);
  L1142():
    C_ARIMA_Invtrans5 = ld C_ARIMA_Invtrans;
    check L1144() else D319();
  L1143():
    r643 = dyn base78(<sym C_ARIMA_Invtrans>, <sym init>, <sym arma>);
    goto L242(r643);
  L1191():
    C_ARIMA_transPars2 = ld C_ARIMA_transPars;
    check L1193() else D335();
  L1192():
    r692 = dyn base80(<sym C_ARIMA_transPars>, <sym init>, <sym arma>, <sym transform.pars>);
    goto L257(r692);
  L1392():
    n_used15 = force? n_used14;
    checkMissing(n_used15);
    sym94 = ldf log;
    base94 = ldf log in base;
    guard94 = `==`.4(sym94, base94);
    if guard94 then L1393() else L1394();
  D185():
    deopt 768 [];
  D235():
    deopt 951 [r473];
  D259():
    deopt 1039 [];
  D265():
    deopt 1063 [];
  D267():
    deopt 1070 [res8];
  D298():
    deopt 1171 [];
  D304():
    deopt 1191 [r598];
  D319():
    deopt 1256 [C_ARIMA_Invtrans5];
  D322():
    deopt 1262 [arma79];
  D335():
    deopt 1331 [C_ARIMA_transPars2];
  D339():
    deopt 1339 [];
  L157(r383):
    ncol = ldf ncol;
    check L854() else D191();
  L189(dx200):
    r479 = `>`(dx200, 0.0);
    c255 = `as.logical`(r479);
    if c255 then L964() else L190();
  L304(r873, n_used18, r874):
    r876 = `*`(n_used18, r874);
    r877 = `+`(r873, r876);
    st value = r877;
    method15 = ld method;
    check L1395() else D419();
  L836(c218, dx151):
    c219 = `is.object`(dx151);
    if c219 then L840() else L841(c218, dx151);
  L837():
    dr88 = tryDispatchBuiltin.1("$", seasonal78);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L839() else L838(c211, dr88);
  L838(c216, seasonal80):
    r364 = `$`(seasonal80, <sym order>);
    goto L836(c216, r364);
  L845():
    p32 = prom<V +>{
      dx156 = ld dx;
      dx157 = force? dx156;
      checkMissing(dx157);
      return dx157;
    };
    p33 = prom<V +>{
      seasonal81 = ld seasonal;
      seasonal82 = force? seasonal81;
      checkMissing(seasonal82);
      c228 = `is.object`(seasonal82);
      if c228 then L1() else L2(seasonal82);
    L0(dx159):
      return dx159;
    L1():
      dr92 = tryDispatchBuiltin.1("$", seasonal82);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L3() else L2(dr92);
    L2(seasonal84):
      r368 = `$`(seasonal84, <sym period>);
      goto L0(r368);
    L3():
      dx158 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx158);
    };
    p34 = prom<V +>{
      seasonal85 = ld seasonal;
      seasonal86 = force? seasonal85;
      checkMissing(seasonal86);
      c229 = `is.object`(seasonal86);
      if c229 then L2() else L3(seasonal86);
    L1(dx161):
      c230 = `is.object`(dx161);
      if c230 then L5() else L6(dx161);
    L2():
      dr94 = tryDispatchBuiltin.1("$", seasonal86);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L4() else L3(dr94);
    L3(seasonal88):
      r370 = `$`(seasonal88, <sym order>);
      goto L1(r370);
    L0(dx165):
      return dx165;
    L4():
      dx160 = getTryDispatchBuiltinValue(dr94);
      goto L1(dx160);
    L5():
      dr96 = tryDispatchBuiltin.1("[", dx161);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L7() else L6(dr96);
    L6(dx163):
      __25 = ldf `[` in base;
      r371 = dyn __25(dx163, 2);
      goto L0(r371);
    L7():
      dx164 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx164);
    };
    r373 = dyn diff2(p32, p33, p34);
    check L846() else D186();
  L850():
    dx174 = ld dx;
    check L852() else D189();
  L851():
    r382 = dyn base55(<sym dx>);
    goto L157(r382);
  L954():
    r474 = `!`(r473);
    c253 = `as.logical`(r474);
    if c253 then L955() else L186();
  L961():
    dr120 = tryDispatchBuiltin.1("[", arma29);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L963() else L962(dr120);
  L962(arma31):
    __34 = ldf `[` in base;
    r478 = dyn __34(arma31, 3);
    goto L189(r478);
  L1011():
    p50 = prom<V +>{
      numeric1 = ldf numeric;
      r526 = dyn numeric1();
      return r526;
    };
    r528 = dyn armaCSS(p50);
    check L1012() else D260();
  L1023():
    p56 = prom<V +>{
      gettextf = ldf gettextf;
      p55 = prom<V +>{
        res4 = ld res;
        res5 = force? res4;
        checkMissing(res5);
        c269 = `is.object`(res5);
        if c269 then L1() else L2(res5);
      L0(dx221):
        return dx221;
      L1():
        dr136 = tryDispatchBuiltin.1("$", res5);
        dc68 = getTryDispatchBuiltinDispatched(dr136);
        if dc68 then L3() else L2(dr136);
      L2(res7):
        r539 = `$`(res7, <sym convergence>);
        goto L0(r539);
      L3():
        dx220 = getTryDispatchBuiltinValue(dr136);
        goto L0(dx220);
      };
      r541 = dyn gettextf("possible convergence problem: optim gave code = %d", p55);
      return r541;
    };
    r543 = dyn warning1[, domain](p56, NA_LGL);
    check L1024() else D266();
  L1026():
    res9 = force? res8;
    checkMissing(res9);
    c270 = `is.object`(res9);
    if c270 then L1028() else L1029(res9);
  L1091():
    r587 = dyn numeric3();
    check L1092() else D299();
  L1098():
    goto L226(r598);
  L1100(dx257):
    r600 = `==`(dx257, 0.0);
    c285 = `as.logical`(r600);
    if c285 then L1104() else L227();
  L1101():
    dr158 = tryDispatchBuiltin.1("$", res17);
    dc79 = getTryDispatchBuiltinDispatched(dr158);
    if dc79 then L1103() else L1102(dr158);
  L1102(res19):
    r599 = `$`(res19, <sym convergence>);
    goto L1100(r599);
  L1144():
    C_ARIMA_Invtrans6 = force? C_ARIMA_Invtrans5;
    checkMissing(C_ARIMA_Invtrans6);
    init73 = ld init;
    check L1145() else D320();
  L1147():
    arma80 = force? arma79;
    checkMissing(arma80);
    c300 = `is.object`(arma80);
    if c300 then L1148() else L1149(arma80);
  L1193():
    C_ARIMA_transPars3 = force? C_ARIMA_transPars2;
    checkMissing(C_ARIMA_transPars3);
    init83 = ld init;
    check L1194() else D336();
  L1197():
    p74 = prom<V +>{
      trarma16 = ld trarma;
      trarma17 = force? trarma16;
      checkMissing(trarma17);
      c312 = `is.object`(trarma17);
      if c312 then L1() else L2(trarma17);
    L0(dx306):
      return dx306;
    L1():
      dr198 = tryDispatchBuiltin.1("[[", trarma17);
      dc99 = getTryDispatchBuiltinDispatched(dr198);
      if dc99 then L3() else L2(dr198);
    L2(trarma19):
      __62 = ldf `[[` in base;
      r695 = dyn __62(trarma19, 1);
      goto L0(r695);
    L3():
      dx305 = getTryDispatchBuiltinValue(dr198);
      goto L0(dx305);
    };
    p75 = prom<V +>{
      trarma20 = ld trarma;
      trarma21 = force? trarma20;
      checkMissing(trarma21);
      c313 = `is.object`(trarma21);
      if c313 then L1() else L2(trarma21);
    L0(dx308):
      return dx308;
    L1():
      dr200 = tryDispatchBuiltin.1("[[", trarma21);
      dc100 = getTryDispatchBuiltinDispatched(dr200);
      if dc100 then L3() else L2(dr200);
    L2(trarma23):
      __63 = ldf `[[` in base;
      r697 = dyn __63(trarma23, 2);
      goto L0(r697);
    L3():
      dx307 = getTryDispatchBuiltinValue(dr200);
      goto L0(dx307);
    };
    p76 = prom<V +>{
      Delta14 = ld Delta;
      Delta15 = force? Delta14;
      checkMissing(Delta15);
      return Delta15;
    };
    p77 = prom<V +>{
      kappa3 = ld kappa;
      kappa4 = force? kappa3;
      checkMissing(kappa4);
      return kappa4;
    };
    p78 = prom<V +>{
      SSinit7 = ld SSinit;
      SSinit8 = force? SSinit7;
      checkMissing(SSinit8);
      return SSinit8;
    };
    r702 = dyn makeARIMA1(p74, p75, p76, p77, p78);
    check L1198() else D340();
  L1393():
    r875 = log(6.283185307179586, 2.718281828459045);
    goto L304(r869, n_used15, r875);
  L1394():
    r872 = dyn base94(<lang `*`(2.0, pi)>);
    goto L304(r869, n_used15, r872);
  D186():
    deopt 772 [r373];
  D189():
    deopt 785 [dx174];
  D191():
    deopt 789 [r383];
  D260():
    deopt 1041 [r528];
  D266():
    deopt 1067 [r543];
  D299():
    deopt 1172 [r587];
  D320():
    deopt 1257 [C_ARIMA_Invtrans6, init73];
  D336():
    deopt 1332 [C_ARIMA_transPars3, init83];
  D340():
    deopt 1345 [r702];
  D419():
    deopt 1641 [method15];
  L154(c223, dx155):
    r366 = `>`(dx155, 0.0);
    c224 = `as.logical`(r366);
    c225 = `&&`(c223, c224);
    goto L153(c225);
  L186():
    goto L187(NULL);
  L187(r476):
    goto L188();
  L190():
    goto L193();
  L193():
    transform_pars3 = ld `transform.pars`;
    check L972() else D243();
  L227():
    goto L229();
  L229():
    arma57 = ld arma;
    check L1115() else D308();
  L243(dx282):
    r647 = `>`(dx282, 0.0);
    c301 = `as.logical`(r647);
    if c301 then L1151() else L244();
  L839():
    dx150 = getTryDispatchBuiltinValue(dr88);
    goto L836(c211, dx150);
  L840():
    dr90 = tryDispatchBuiltin.1("[", dx151);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L842() else L841(c218, dr90);
  L841(c221, dx153):
    __24 = ldf `[` in base;
    r365 = dyn __24(dx153, 2);
    goto L154(c221, r365);
  L846():
    st dx = r373;
    diff3 = ldf diff;
    check L847() else D187();
  L852():
    dx175 = force? dx174;
    checkMissing(dx175);
    length6 = ldf length in base;
    r384 = dyn length6(dx175);
    check L853() else D190();
  L854():
    p38 = prom<V +>{
      dxreg4 = ld dxreg;
      dxreg5 = force? dxreg4;
      checkMissing(dxreg5);
      return dxreg5;
    };
    r386 = dyn ncol(p38);
    check L855() else D192();
  L955():
    stop10 = ldf stop;
    check L956() else D236();
  L963():
    dx199 = getTryDispatchBuiltinValue(dr120);
    goto L189(dx199);
  L964():
    arCheck1 = ldf arCheck;
    check L965() else D239();
  L1012():
    list4 = ldf list in base;
    r529 = dyn list4(0, r525, r528);
    check L1013() else D261();
  L1024():
    goto L209();
  L1027(dx223):
    l17 = ld coef;
    c271 = `is.object`(l17);
    if c271 then L1031() else L1032(dx223, l17);
  L1028():
    dr138 = tryDispatchBuiltin.1("$", res9);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L1030() else L1029(dr138);
  L1029(res11):
    r545 = `$`(res11, <sym par>);
    goto L1027(r545);
  L1092():
    armaCSS3 = ldf armaCSS;
    check L1093() else D300();
  L1103():
    dx256 = getTryDispatchBuiltinValue(dr158);
    goto L1100(dx256);
  L1104():
    res20 = ld res;
    check L1105() else D306();
  L1145():
    init74 = force? init73;
    checkMissing(init74);
    arma77 = ld arma;
    check L1146() else D321();
  L1148():
    dr178 = tryDispatchBuiltin.1("[", arma80);
    dc89 = getTryDispatchBuiltinDispatched(dr178);
    if dc89 then L1150() else L1149(dr178);
  L1149(arma82):
    __54 = ldf `[` in base;
    r646 = dyn __54(arma82, 2);
    goto L243(r646);
  L1194():
    init84 = force? init83;
    checkMissing(init84);
    arma103 = ld arma;
    check L1195() else D337();
  L1198():
    st mod = r702;
    no_optim8 = ld `no.optim`;
    check L1199() else D341();
  L1395():
    method16 = force? method15;
    checkMissing(method16);
    r878 = `!=`(method16, "CSS");
    c358 = `as.logical`(r878);
    if c358 then L1396() else L305();
  D187():
    deopt 775 [];
  D190():
    deopt 788 [r384];
  D192():
    deopt 791 [r383, r386];
  D236():
    deopt 954 [];
  D239():
    deopt 969 [];
  D243():
    deopt 981 [transform_pars3];
  D261():
    deopt 1044 [r529];
  D300():
    deopt 1175 [];
  D306():
    deopt 1198 [res20];
  D308():
    deopt 1208 [arma57];
  D321():
    deopt 1258 [C_ARIMA_Invtrans6, init74, arma77];
  D337():
    deopt 1333 [C_ARIMA_transPars3, init84, arma103];
  D341():
    deopt 1347 [no_optim8];
  L210(dx229):
    st coef = dx229;
    sym73 = ldf `.Call`;
    base73 = ldf `.Call` in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L1035() else L1036();
  L244():
    goto L248();
  L248():
    arma91 = ld arma;
    check L1167() else D328();
  L305():
    goto L307(NA_LGL);
  L307(r888):
    st aic = r888;
    st nm = NULL;
    arma135 = ld arma;
    check L1403() else D423();
  L842():
    dx154 = getTryDispatchBuiltinValue(dr90);
    goto L154(c218, dx154);
  L847():
    p35 = prom<V +>{
      dxreg2 = ld dxreg;
      dxreg3 = force? dxreg2;
      checkMissing(dxreg3);
      return dxreg3;
    };
    p36 = prom<V +>{
      seasonal89 = ld seasonal;
      seasonal90 = force? seasonal89;
      checkMissing(seasonal90);
      c231 = `is.object`(seasonal90);
      if c231 then L1() else L2(seasonal90);
    L0(dx167):
      return dx167;
    L1():
      dr98 = tryDispatchBuiltin.1("$", seasonal90);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(seasonal92):
      r375 = `$`(seasonal92, <sym period>);
      goto L0(r375);
    L3():
      dx166 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx166);
    };
    p37 = prom<V +>{
      seasonal93 = ld seasonal;
      seasonal94 = force? seasonal93;
      checkMissing(seasonal94);
      c232 = `is.object`(seasonal94);
      if c232 then L2() else L3(seasonal94);
    L1(dx169):
      c233 = `is.object`(dx169);
      if c233 then L5() else L6(dx169);
    L2():
      dr100 = tryDispatchBuiltin.1("$", seasonal94);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L4() else L3(dr100);
    L3(seasonal96):
      r377 = `$`(seasonal96, <sym order>);
      goto L1(r377);
    L0(dx173):
      return dx173;
    L4():
      dx168 = getTryDispatchBuiltinValue(dr100);
      goto L1(dx168);
    L5():
      dr102 = tryDispatchBuiltin.1("[", dx169);
      dc51 = getTryDispatchBuiltinDispatched(dr102);
      if dc51 then L7() else L6(dr102);
    L6(dx171):
      __26 = ldf `[` in base;
      r378 = dyn __26(dx171, 2);
      goto L0(r378);
    L7():
      dx172 = getTryDispatchBuiltinValue(dr102);
      goto L0(dx172);
    };
    r380 = dyn diff3(p35, p36, p37);
    check L848() else D188();
  L853():
    goto L157(r384);
  L855():
    r387 = `>`(r383, r386);
    c234 = `as.logical`(r387);
    if c234 then L856() else L158();
  L956():
    r475 = dyn stop10("non-stationary AR part");
    check L957() else D237();
  L965():
    p48 = prom<V +>{
      init23 = ld init;
      init24 = force? init23;
      checkMissing(init24);
      c256 = `is.object`(init24);
      if c256 then L4() else L5(init24);
    L0(dx202):
      return dx202;
    L4():
      dr122 = tryDispatchBuiltin.1("[", init24);
      dc61 = getTryDispatchBuiltinDispatched(dr122);
      if dc61 then L6() else L5(dr122);
    L5(init26):
      sym67 = ldf sum;
      base67 = ldf sum in base;
      guard67 = `==`.4(sym67, base67);
      if guard67 then L7() else L8();
    L1(init29, r481):
      arma36 = ld arma;
      arma37 = force? arma36;
      checkMissing(arma37);
      c258 = `is.object`(arma37);
      if c258 then L12() else L13(init29, r481, 1, arma37);
    L6():
      dx201 = getTryDispatchBuiltinValue(dr122);
      goto L0(dx201);
    L7():
      arma32 = ld arma;
      arma33 = force? arma32;
      checkMissing(arma33);
      c257 = `is.object`(arma33);
      if c257 then L9() else L10(init26, arma33);
    L8():
      r480 = dyn base67(<lang `[`(arma, `:`(1, 2))>);
      goto L1(init26, r480);
    L2(init33, dx204):
      sum3 = ldf sum in base;
      r483 = dyn sum3(dx204);
      goto L1(init33, r483);
    L3(init37, r490, r491, dx206):
      r493 = `:`(r491, dx206);
      r494 = `+`(r490, r493);
      __37 = ldf `[` in base;
      r495 = dyn __37(init37, r494);
      goto L0(r495);
    L9():
      dr124 = tryDispatchBuiltin.1("[", arma33);
      dc62 = getTryDispatchBuiltinDispatched(dr124);
      if dc62 then L11() else L10(init26, dr124);
    L10(init31, arma35):
      __35 = ldf `[` in base;
      r482 = dyn __35(arma35, <int 1, 2>);
      goto L2(init31, r482);
    L12():
      dr126 = tryDispatchBuiltin.1("[", arma37);
      dc63 = getTryDispatchBuiltinDispatched(dr126);
      if dc63 then L14() else L13(init29, r481, 1, dr126);
    L13(init35, r486, r487, arma39):
      __36 = ldf `[` in base;
      r492 = dyn __36(arma39, 3);
      goto L3(init35, r486, r487, r492);
    L11():
      dx203 = getTryDispatchBuiltinValue(dr124);
      goto L2(init26, dx203);
    L14():
      dx205 = getTryDispatchBuiltinValue(dr126);
      goto L3(init29, r481, 1, dx205);
    };
    r497 = dyn arCheck1(p48);
    check L966() else D240();
  L972():
    transform_pars4 = force? transform_pars3;
    checkMissing(transform_pars4);
    c260 = `as.logical`(transform_pars4);
    if c260 then L973() else L194();
  L1013():
    goto L206(r529);
  L1030():
    dx222 = getTryDispatchBuiltinValue(dr138);
    goto L1027(dx222);
  L1031():
    dr140 = tryDispatchBuiltin.0("[<-", l17, dx223);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L1033() else L1032(dx223, dr140);
  L1032(dx225, l19):
    mask25 = ld mask;
    check L1034() else D268();
  L1093():
    p65 = prom<V +>{
      numeric4 = ldf numeric;
      r588 = dyn numeric4();
      return r588;
    };
    r590 = dyn armaCSS3(p65);
    check L1094() else D301();
  L1105():
    res21 = force? res20;
    checkMissing(res21);
    c286 = `is.object`(res21);
    if c286 then L1107() else L1108(res21);
  L1115():
    arma58 = force? arma57;
    checkMissing(arma58);
    c288 = `is.object`(arma58);
    if c288 then L1116() else L1117(arma58);
  L1146():
    arma78 = force? arma77;
    checkMissing(arma78);
    vargs3 = dots[init74, arma78];
    r645 = `.Call`(C_ARIMA_Invtrans6, vargs3, <missing>);
    goto L242(r645);
  L1150():
    dx281 = getTryDispatchBuiltinValue(dr178);
    goto L243(dx281);
  L1151():
    arma83 = ld arma;
    check L1152() else D323();
  L1195():
    arma104 = force? arma103;
    checkMissing(arma104);
    transform_pars7 = ld `transform.pars`;
    check L1196() else D338();
  L1199():
    no_optim9 = force? no_optim8;
    checkMissing(no_optim9);
    c314 = `as.logical`(no_optim9);
    if c314 then L1200() else L258();
  L1396():
    value = ld value;
    check L1397() else D420();
  D188():
    deopt 779 [r380];
  D237():
    deopt 956 [r475];
  D240():
    deopt 971 [r497];
  D268():
    deopt 1074 [dx225, l19, dx223, mask25];
  D301():
    deopt 1177 [r590];
  D323():
    deopt 1269 [arma83];
  D328():
    deopt 1293 [arma91];
  D338():
    deopt 1334 [C_ARIMA_transPars3, init84, arma104, transform_pars7];
  D420():
    deopt 1645 [value];
  D423():
    deopt 1663 [arma135];
  L158():
    sym56 = ldf list;
    base56 = ldf list in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L860() else L861();
  L159(r392):
    st fit = r392;
    fit = ld fit;
    check L863() else D196();
  L194():
    goto L197(NULL);
  L197(r508):
    goto L198(r508);
  L211(r548):
    st trarma = r548;
    makeARIMA = ldf makeARIMA;
    check L1040() else D272();
  L230(dx268):
    r604 = `>`(dx268, 0.0);
    c289 = `as.logical`(r604);
    if c289 then L1119() else L231();
  L258():
    optim2 = ldf optim;
    check L1209() else D347();
  L260(r714):
    st res = r714;
    res24 = ld res;
    check L1211() else D349();
  L848():
    st dxreg = r380;
    goto L156();
  L856():
    lm = ldf lm;
    check L857() else D193();
  L957():
    goto L187(r475);
  L966():
    r498 = `!`(r497);
    c259 = `as.logical`(r498);
    if c259 then L967() else L191();
  L973():
    sym68 = ldf `.Call`;
    base68 = ldf `.Call` in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L974() else L975();
  L1033():
    dx227 = getTryDispatchBuiltinValue(dr140);
    goto L210(dx227);
  L1034():
    mask26 = force? mask25;
    ___4 = ldf `[<-` in base;
    r546 = dyn ___4(l19, dx223, mask26);
    goto L210(r546);
  L1035():
    C_ARIMA_transPars = ld C_ARIMA_transPars;
    check L1037() else D269();
  L1036():
    r547 = dyn base73(<sym C_ARIMA_transPars>, <sym coef>, <sym arma>, FALSE);
    goto L211(r547);
  L1094():
    list5 = ldf list in base;
    r591 = dyn list5(0, r587, r590);
    check L1095() else D302();
  L1106(dx259):
    l20 = ld init;
    c287 = `is.object`(l20);
    if c287 then L1110() else L1111(dx259, l20);
  L1107():
    dr160 = tryDispatchBuiltin.1("$", res21);
    dc80 = getTryDispatchBuiltinDispatched(dr160);
    if dc80 then L1109() else L1108(dr160);
  L1108(res23):
    r601 = `$`(res23, <sym par>);
    goto L1106(r601);
  L1116():
    dr164 = tryDispatchBuiltin.1("[", arma58);
    dc82 = getTryDispatchBuiltinDispatched(dr164);
    if dc82 then L1118() else L1117(dr164);
  L1117(arma60):
    __47 = ldf `[` in base;
    r603 = dyn __47(arma60, 1);
    goto L230(r603);
  L1152():
    arma84 = force? arma83;
    checkMissing(arma84);
    c302 = `is.object`(arma84);
    if c302 then L1153() else L1154(arma84);
  L1167():
    arma92 = force? arma91;
    checkMissing(arma92);
    c306 = `is.object`(arma92);
    if c306 then L1168() else L1169(arma92);
  L1196():
    transform_pars8 = force? transform_pars7;
    checkMissing(transform_pars8);
    vargs4 = dots[init84, arma104, transform_pars8];
    r694 = `.Call`(C_ARIMA_transPars3, vargs4, <missing>);
    goto L257(r694);
  L1200():
    sym81 = ldf list;
    base81 = ldf list in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L1201() else L1202();
  L1397():
    value1 = force? value;
    checkMissing(value1);
    sym95 = ldf sum;
    base95 = ldf sum in base;
    guard95 = `==`.4(sym95, base95);
    if guard95 then L1398() else L1399();
  L1403():
    arma136 = force? arma135;
    checkMissing(arma136);
    c359 = `is.object`(arma136);
    if c359 then L1404() else L1405(arma136);
  D193():
    deopt 794 [];
  D196():
    deopt 806 [fit];
  D269():
    deopt 1079 [C_ARIMA_transPars];
  D272():
    deopt 1087 [];
  D302():
    deopt 1180 [r591];
  D347():
    deopt 1366 [];
  D349():
    deopt 1379 [res24];
  L191():
    goto L192(NULL);
  L192(r500):
    goto L193();
  L195(r503):
    st init = r503;
    goto L197(r503);
  L228(dx264, dx265):
    st init = dx265;
    goto L229();
  L231():
    goto L234();
  L234():
    arma65 = ld arma;
    check L1127() else D313();
  L245(dx284):
    arma87 = ld arma;
    check L1156() else D324();
  L249(dx296):
    r666 = `>`(dx296, 0.0);
    c307 = `as.logical`(r666);
    if c307 then L1171() else L250();
  L259(r704):
    goto L260(r704);
  L306(value4, r882, r883):
    r885 = `*`(r882, r883);
    r886 = `+`(value4, r885);
    r887 = `+`(r886, 2.0);
    goto L307(r887);
  L308(dx397):
    r890 = `>`(dx397, 0);
    c360 = `as.logical`(r890);
    if c360 then L1407() else L309();
  L857():
    p39 = prom<V +>{
      __27 = ldf `~` in base;
      r388 = dyn __27(<sym dx>, <lang `-`(dxreg, 1.0)>);
      return r388;
    };
    p40 = prom<V +>{
      na_omit1 = ld `na.omit`;
      na_omit2 = force? na_omit1;
      checkMissing(na_omit2);
      return na_omit2;
    };
    r391 = dyn lm[, `na.action`](p39, p40);
    check L858() else D194();
  L860():
    list3 = ldf list in base;
    r394 = dyn list3(0);
    check L862() else D195();
  L861():
    r393 = dyn base56[rank](0);
    goto L159(r393);
  L863():
    fit1 = force? fit;
    checkMissing(fit1);
    c235 = `is.object`(fit1);
    if c235 then L865() else L866(fit1);
  L967():
    stop11 = ldf stop;
    check L968() else D241();
  L974():
    C_ARIMA_Invtrans = ld C_ARIMA_Invtrans;
    check L976() else D244();
  L975():
    r502 = dyn base68(<sym C_ARIMA_Invtrans>, <lang as.double(init)>, <sym arma>);
    goto L195(r502);
  L1037():
    C_ARIMA_transPars1 = force? C_ARIMA_transPars;
    checkMissing(C_ARIMA_transPars1);
    coef1 = ld coef;
    check L1038() else D270();
  L1040():
    p57 = prom<V +>{
      trarma = ld trarma;
      trarma1 = force? trarma;
      checkMissing(trarma1);
      c272 = `is.object`(trarma1);
      if c272 then L1() else L2(trarma1);
    L0(dx231):
      return dx231;
    L1():
      dr142 = tryDispatchBuiltin.1("[[", trarma1);
      dc71 = getTryDispatchBuiltinDispatched(dr142);
      if dc71 then L3() else L2(dr142);
    L2(trarma3):
      __40 = ldf `[[` in base;
      r550 = dyn __40(trarma3, 1);
      goto L0(r550);
    L3():
      dx230 = getTryDispatchBuiltinValue(dr142);
      goto L0(dx230);
    };
    p58 = prom<V +>{
      trarma4 = ld trarma;
      trarma5 = force? trarma4;
      checkMissing(trarma5);
      c273 = `is.object`(trarma5);
      if c273 then L1() else L2(trarma5);
    L0(dx233):
      return dx233;
    L1():
      dr144 = tryDispatchBuiltin.1("[[", trarma5);
      dc72 = getTryDispatchBuiltinDispatched(dr144);
      if dc72 then L3() else L2(dr144);
    L2(trarma7):
      __41 = ldf `[[` in base;
      r552 = dyn __41(trarma7, 2);
      goto L0(r552);
    L3():
      dx232 = getTryDispatchBuiltinValue(dr144);
      goto L0(dx232);
    };
    p59 = prom<V +>{
      Delta12 = ld Delta;
      Delta13 = force? Delta12;
      checkMissing(Delta13);
      return Delta13;
    };
    p60 = prom<V +>{
      kappa1 = ld kappa;
      kappa2 = force? kappa1;
      checkMissing(kappa2);
      return kappa2;
    };
    p61 = prom<V +>{
      SSinit5 = ld SSinit;
      SSinit6 = force? SSinit5;
      checkMissing(SSinit6);
      return SSinit6;
    };
    r557 = dyn makeARIMA(p57, p58, p59, p60, p61);
    check L1041() else D273();
  L1095():
    goto L225(r591);
  L1109():
    dx258 = getTryDispatchBuiltinValue(dr160);
    goto L1106(dx258);
  L1110():
    dr162 = tryDispatchBuiltin.0("[<-", l20, dx259);
    dc81 = getTryDispatchBuiltinDispatched(dr162);
    if dc81 then L1112() else L1111(dx259, dr162);
  L1111(dx261, l22):
    mask29 = ld mask;
    check L1113() else D307();
  L1118():
    dx267 = getTryDispatchBuiltinValue(dr164);
    goto L230(dx267);
  L1119():
    arCheck2 = ldf arCheck;
    check L1120() else D309();
  L1153():
    dr180 = tryDispatchBuiltin.1("[", arma84);
    dc90 = getTryDispatchBuiltinDispatched(dr180);
    if dc90 then L1155() else L1154(dr180);
  L1154(arma86):
    __55 = ldf `[` in base;
    r648 = dyn __55(arma86, 1);
    goto L245(r648);
  L1168():
    dr188 = tryDispatchBuiltin.1("[", arma92);
    dc94 = getTryDispatchBuiltinDispatched(dr188);
    if dc94 then L1170() else L1169(dr188);
  L1169(arma94):
    __58 = ldf `[` in base;
    r665 = dyn __58(arma94, 4);
    goto L249(r665);
  L1201():
    numeric5 = ldf numeric;
    check L1203() else D342();
  L1202():
    r703 = dyn base81[convergence, par, value](0.0, <lang numeric()>, <lang armafn(numeric(), as.logical(transform.pars))>);
    goto L259(r703);
  L1209():
    p81 = prom<V +>{
      init85 = ld init;
      init86 = force? init85;
      checkMissing(init86);
      c315 = `is.object`(init86);
      if c315 then L1() else L2(init86);
    L0(dx310):
      return dx310;
    L1():
      dr202 = tryDispatchBuiltin.1("[", init86);
      dc101 = getTryDispatchBuiltinDispatched(dr202);
      if dc101 then L3() else L2(dr202);
    L2(init88):
      mask31 = ld mask;
      mask32 = force? mask31;
      __64 = ldf `[` in base;
      r715 = dyn __64(init88, mask32);
      goto L0(r715);
    L3():
      dx309 = getTryDispatchBuiltinValue(dr202);
      goto L0(dx309);
    };
    p82 = prom<V +>{
      armafn1 = ld armafn;
      armafn2 = force? armafn1;
      checkMissing(armafn2);
      return armafn2;
    };
    p83 = prom<V +>{
      optim_method5 = ld `optim.method`;
      optim_method6 = force? optim_method5;
      checkMissing(optim_method6);
      return optim_method6;
    };
    p84 = prom<V +>{
      optim_control7 = ld `optim.control`;
      optim_control8 = force? optim_control7;
      checkMissing(optim_control8);
      return optim_control8;
    };
    p85 = prom<V +>{
      sym83 = ldf `as.logical`;
      base83 = ldf `as.logical` in base;
      guard83 = `==`.4(sym83, base83);
      if guard83 then L1() else L2();
    L0(r721):
      return r721;
    L1():
      transform_pars11 = ld `transform.pars`;
      transform_pars12 = force? transform_pars11;
      checkMissing(transform_pars12);
      as_logical1 = ldf `as.logical` in base;
      r722 = dyn as_logical1(transform_pars12);
      goto L0(r722);
    L2():
      r720 = dyn base83(<sym transform.pars>);
      goto L0(r720);
    };
    r724 = dyn optim2[, , method, hessian, control, trans](p81, p82, p83, TRUE, p84, p85);
    check L1210() else D348();
  L1211():
    res25 = force? res24;
    checkMissing(res25);
    c316 = `is.object`(res25);
    if c316 then L1213() else L1214(res25);
  L1398():
    mask53 = ld mask;
    check L1400() else D421();
  L1399():
    r881 = dyn base95(<sym mask>);
    goto L306(value1, 2.0, r881);
  L1404():
    dr270 = tryDispatchBuiltin.1("[", arma136);
    dc135 = getTryDispatchBuiltinDispatched(dr270);
    if dc135 then L1406() else L1405(dr270);
  L1405(arma138):
    __83 = ldf `[` in base;
    r889 = dyn __83(arma138, 1);
    goto L308(r889);
  D194():
    deopt 798 [r391];
  D195():
    deopt 804 [r394];
  D241():
    deopt 974 [];
  D244():
    deopt 984 [C_ARIMA_Invtrans];
  D270():
    deopt 1080 [C_ARIMA_transPars1, coef1];
  D273():
    deopt 1093 [r557];
  D307():
    deopt 1202 [dx261, l22, dx259, mask29];
  D309():
    deopt 1216 [];
  D313():
    deopt 1228 [arma65];
  D324():
    deopt 1274 [dx284, 1, arma87];
  D342():
    deopt 1354 [];
  D348():
    deopt 1377 [r724];
  D421():
    deopt 1649 [value1, 2.0, mask53];
  L250():
    goto L255(NULL);
  L255(r690):
    goto L256();
  L309():
    goto L311();
  L311():
    arma143 = ld arma;
    check L1415() else D428();
  L858():
    goto L159(r391);
  L862():
    goto L159(r394);
  L864(dx177):
    r396 = `==`(dx177, 0);
    c236 = `as.logical`(r396);
    if c236 then L868() else L160();
  L865():
    dr104 = tryDispatchBuiltin.1("$", fit1);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L867() else L866(dr104);
  L866(fit3):
    r395 = `$`(fit3, <sym rank>);
    goto L864(r395);
  L968():
    r499 = dyn stop11("non-stationary seasonal AR part");
    check L969() else D242();
  L976():
    C_ARIMA_Invtrans1 = force? C_ARIMA_Invtrans;
    checkMissing(C_ARIMA_Invtrans1);
    sym69 = ldf `as.double`;
    base69 = ldf `as.double` in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L977() else L978();
  L1038():
    coef2 = force? coef1;
    checkMissing(coef2);
    arma42 = ld arma;
    check L1039() else D271();
  L1041():
    st mod = r557;
    ncxreg18 = ld ncxreg;
    check L1042() else D274();
  L1112():
    dx263 = getTryDispatchBuiltinValue(dr162);
    goto L228(dx259, dx263);
  L1113():
    mask30 = force? mask29;
    ___6 = ldf `[<-` in base;
    r602 = dyn ___6(l22, dx259, mask30);
    goto L228(dx261, r602);
  L1120():
    p70 = prom<V +>{
      init50 = ld init;
      init51 = force? init50;
      checkMissing(init51);
      c290 = `is.object`(init51);
      if c290 then L2() else L3(init51);
    L0(dx270):
      return dx270;
    L2():
      dr166 = tryDispatchBuiltin.1("[", init51);
      dc83 = getTryDispatchBuiltinDispatched(dr166);
      if dc83 then L4() else L3(dr166);
    L3(init53):
      arma61 = ld arma;
      arma62 = force? arma61;
      checkMissing(arma62);
      c291 = `is.object`(arma62);
      if c291 then L5() else L6(init53, 1, arma62);
    L1(init57, r608, dx272):
      r610 = `:`(r608, dx272);
      __49 = ldf `[` in base;
      r611 = dyn __49(init57, r610);
      goto L0(r611);
    L4():
      dx269 = getTryDispatchBuiltinValue(dr166);
      goto L0(dx269);
    L5():
      dr168 = tryDispatchBuiltin.1("[", arma62);
      dc84 = getTryDispatchBuiltinDispatched(dr168);
      if dc84 then L7() else L6(init53, 1, dr168);
    L6(init55, r606, arma64):
      __48 = ldf `[` in base;
      r609 = dyn __48(arma64, 1);
      goto L1(init55, r606, r609);
    L7():
      dx271 = getTryDispatchBuiltinValue(dr168);
      goto L1(init53, 1, dx271);
    };
    r613 = dyn arCheck2(p70);
    check L1121() else D310();
  L1127():
    arma66 = force? arma65;
    checkMissing(arma66);
    c293 = `is.object`(arma66);
    if c293 then L1128() else L1129(arma66);
  L1155():
    dx283 = getTryDispatchBuiltinValue(dr180);
    goto L245(dx283);
  L1156():
    arma88 = force? arma87;
    checkMissing(arma88);
    c303 = `is.object`(arma88);
    if c303 then L1157() else L1158(dx284, 1, arma88);
  L1170():
    dx295 = getTryDispatchBuiltinValue(dr188);
    goto L249(dx295);
  L1171():
    sym79 = ldf sum;
    base79 = ldf sum in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L1172() else L1173();
  L1203():
    r705 = dyn numeric5();
    check L1204() else D343();
  L1210():
    goto L260(r724);
  L1212(dx312):
    r726 = `>`(dx312, 0.0);
    c317 = `as.logical`(r726);
    if c317 then L1216() else L261();
  L1213():
    dr204 = tryDispatchBuiltin.1("$", res25);
    dc102 = getTryDispatchBuiltinDispatched(dr204);
    if dc102 then L1215() else L1214(dr204);
  L1214(res27):
    r725 = `$`(res27, <sym convergence>);
    goto L1212(r725);
  L1400():
    mask54 = force? mask53;
    checkMissing(mask54);
    sum7 = ldf sum in base;
    r884 = dyn sum7(mask54);
    check L1401() else D422();
  L1406():
    dx396 = getTryDispatchBuiltinValue(dr270);
    goto L308(dx396);
  L1407():
    sym96 = ldf c;
    base96 = ldf c in base;
    guard96 = `==`.4(sym96, base96);
    if guard96 then L1408() else L1409();
  D242():
    deopt 976 [r499];
  D271():
    deopt 1081 [C_ARIMA_transPars1, coef2, arma42];
  D274():
    deopt 1095 [ncxreg18];
  D310():
    deopt 1218 [r613];
  D343():
    deopt 1355 [r705];
  D422():
    deopt 1652 [value1, 2.0, r884];
  D428():
    deopt 1684 [arma143];
  L160():
    goto L161();
  L161():
    sym57 = ldf `is.na`;
    base57 = ldf `is.na` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L872() else L873();
  L196(C_ARIMA_Invtrans4, r505):
    arma40 = ld arma;
    check L981() else D247();
  L235(dx274):
    r619 = `>`(dx274, 0.0);
    c294 = `as.logical`(r619);
    if c294 then L1131() else L236();
  L246(dx289, r652, dx290):
    r654 = `:`(r652, dx290);
    r655 = `+`(dx289, r654);
    st ind = r655;
    maInvert = ldf maInvert;
    check L1160() else D325();
  L251(r668):
    arma99 = ld arma;
    check L1179() else D331();
  L261():
    goto L262();
  L262():
    res32 = ld res;
    check L1220() else D352();
  L310(r892):
    st nm = r892;
    goto L311();
  L867():
    dx176 = getTryDispatchBuiltinValue(dr104);
    goto L864(dx176);
  L868():
    lm1 = ldf lm;
    check L869() else D197();
  L969():
    goto L192(r499);
  L977():
    init38 = ld init;
    check L979() else D245();
  L978():
    r504 = dyn base69(<sym init>);
    goto L196(C_ARIMA_Invtrans1, r504);
  L1039():
    arma43 = force? arma42;
    checkMissing(arma43);
    vargs1 = dots[coef2, arma43, FALSE];
    r549 = `.Call`(C_ARIMA_transPars1, vargs1, <missing>);
    goto L211(r549);
  L1042():
    ncxreg19 = force? ncxreg18;
    checkMissing(ncxreg19);
    r558 = `>`(ncxreg19, 0.0);
    c274 = `as.logical`(r558);
    if c274 then L1043() else L212();
  L1121():
    r614 = `!`(r613);
    c292 = `as.logical`(r614);
    if c292 then L1122() else L232();
  L1128():
    dr170 = tryDispatchBuiltin.1("[", arma66);
    dc85 = getTryDispatchBuiltinDispatched(dr170);
    if dc85 then L1130() else L1129(dr170);
  L1129(arma68):
    __50 = ldf `[` in base;
    r618 = dyn __50(arma68, 3);
    goto L235(r618);
  L1157():
    dr182 = tryDispatchBuiltin.1("[", arma88);
    dc91 = getTryDispatchBuiltinDispatched(dr182);
    if dc91 then L1159() else L1158(dx284, 1, dr182);
  L1158(dx286, r650, arma90):
    __56 = ldf `[` in base;
    r653 = dyn __56(arma90, 2);
    goto L246(dx286, r650, r653);
  L1172():
    arma95 = ld arma;
    check L1174() else D329();
  L1173():
    r667 = dyn base79(<lang `[`(arma, `:`(1, 3))>);
    goto L251(r667);
  L1204():
    armafn = ldf armafn;
    check L1205() else D344();
  L1215():
    dx311 = getTryDispatchBuiltinValue(dr204);
    goto L1212(dx311);
  L1216():
    warning2 = ldf warning;
    check L1217() else D350();
  L1401():
    goto L306(value1, 2.0, r884);
  L1408():
    nm = ld nm;
    check L1410() else D424();
  L1409():
    r891 = dyn base96(<sym nm>, <lang paste0("ar", `:`(1, `[`(arma, 1)))>);
    goto L310(r891);
  L1415():
    arma144 = force? arma143;
    checkMissing(arma144);
    c363 = `is.object`(arma144);
    if c363 then L1416() else L1417(arma144);
  D197():
    deopt 812 [];
  D245():
    deopt 987 [C_ARIMA_Invtrans1, init38];
  D247():
    deopt 990 [C_ARIMA_Invtrans4, r505, arma40];
  D325():
    deopt 1283 [];
  D329():
    deopt 1302 [arma95];
  D331():
    deopt 1309 [r668, 1, arma99];
  D344():
    deopt 1358 [];
  D350():
    deopt 1385 [];
  D352():
    deopt 1392 [res32];
  D424():
    deopt 1672 [nm];
  L162(r403):
    apply = ldf apply;
    check L876() else D201();
  L212():
    goto L214();
  L214():
    arimaSS = ldf arimaSS;
    check L1054() else D281();
  L232():
    goto L233(NULL);
  L233(r616):
    goto L234();
  L236():
    goto L239();
  L239():
    st ncond = 0;
    goto L240();
  L312(dx401):
    r904 = `>`(dx401, 0);
    c364 = `as.logical`(r904);
    if c364 then L1419() else L313();
  L869():
    p41 = prom<V +>{
      __28 = ldf `~` in base;
      r397 = dyn __28(<sym x>, <lang `-`(xreg, 1.0)>);
      return r397;
    };
    p42 = prom<V +>{
      na_omit3 = ld `na.omit`;
      na_omit4 = force? na_omit3;
      checkMissing(na_omit4);
      return na_omit4;
    };
    r400 = dyn lm1[, `na.action`](p41, p42);
    check L870() else D198();
  L872():
    x21 = ld x;
    check L874() else D199();
  L873():
    r402 = dyn base57(<sym x>);
    goto L162(r402);
  L979():
    init39 = force? init38;
    checkMissing(init39);
    as_double = ldf `as.double` in base;
    r506 = dyn as_double(init39);
    check L980() else D246();
  L981():
    arma41 = force? arma40;
    checkMissing(arma41);
    vargs = dots[r505, arma41];
    r507 = `.Call`(C_ARIMA_Invtrans4, vargs, <missing>);
    goto L195(r507);
  L1043():
    x23 = ld x;
    check L1044() else D275();
  L1122():
    stop12 = ldf stop;
    check L1123() else D311();
  L1130():
    dx273 = getTryDispatchBuiltinValue(dr170);
    goto L235(dx273);
  L1131():
    arCheck3 = ldf arCheck;
    check L1132() else D314();
  L1159():
    dx288 = getTryDispatchBuiltinValue(dr182);
    goto L246(dx284, 1, dx288);
  L1160():
    p72 = prom<V +>{
      init75 = ld init;
      init76 = force? init75;
      checkMissing(init76);
      c304 = `is.object`(init76);
      if c304 then L1() else L2(init76);
    L0(dx292):
      return dx292;
    L1():
      dr184 = tryDispatchBuiltin.1("[", init76);
      dc92 = getTryDispatchBuiltinDispatched(dr184);
      if dc92 then L3() else L2(dr184);
    L2(init78):
      ind6 = ld ind;
      ind7 = force? ind6;
      __57 = ldf `[` in base;
      r656 = dyn __57(init78, ind7);
      goto L0(r656);
    L3():
      dx291 = getTryDispatchBuiltinValue(dr184);
      goto L0(dx291);
    };
    r658 = dyn maInvert(p72);
    check L1161() else D326();
  L1174():
    arma96 = force? arma95;
    checkMissing(arma96);
    c308 = `is.object`(arma96);
    if c308 then L1175() else L1176(arma96);
  L1179():
    arma100 = force? arma99;
    checkMissing(arma100);
    c309 = `is.object`(arma100);
    if c309 then L1180() else L1181(r668, 1, arma100);
  L1205():
    p79 = prom<V +>{
      numeric6 = ldf numeric;
      r706 = dyn numeric6();
      return r706;
    };
    p80 = prom<V +>{
      sym82 = ldf `as.logical`;
      base82 = ldf `as.logical` in base;
      guard82 = `==`.4(sym82, base82);
      if guard82 then L1() else L2();
    L0(r709):
      return r709;
    L1():
      transform_pars9 = ld `transform.pars`;
      transform_pars10 = force? transform_pars9;
      checkMissing(transform_pars10);
      as_logical = ldf `as.logical` in base;
      r710 = dyn as_logical(transform_pars10);
      goto L0(r710);
    L2():
      r708 = dyn base82(<sym transform.pars>);
      goto L0(r708);
    };
    r712 = dyn armafn(p79, p80);
    check L1206() else D345();
  L1217():
    p87 = prom<V +>{
      gettextf1 = ldf gettextf;
      p86 = prom<V +>{
        res28 = ld res;
        res29 = force? res28;
        checkMissing(res29);
        c318 = `is.object`(res29);
        if c318 then L1() else L2(res29);
      L0(dx314):
        return dx314;
      L1():
        dr206 = tryDispatchBuiltin.1("$", res29);
        dc103 = getTryDispatchBuiltinDispatched(dr206);
        if dc103 then L3() else L2(dr206);
      L2(res31):
        r727 = `$`(res31, <sym convergence>);
        goto L0(r727);
      L3():
        dx313 = getTryDispatchBuiltinValue(dr206);
        goto L0(dx313);
      };
      r729 = dyn gettextf1("possible convergence problem: optim gave code = %d", p86);
      return r729;
    };
    r731 = dyn warning2[, domain](p87, NA_LGL);
    check L1218() else D351();
  L1220():
    res33 = force? res32;
    checkMissing(res33);
    c319 = `is.object`(res33);
    if c319 then L1222() else L1223(res33);
  L1410():
    nm1 = force? nm;
    checkMissing(nm1);
    paste1 = ldf paste0;
    check L1411() else D425();
  L1416():
    dr274 = tryDispatchBuiltin.1("[", arma144);
    dc137 = getTryDispatchBuiltinDispatched(dr274);
    if dc137 then L1418() else L1417(dr274);
  L1417(arma146):
    __85 = ldf `[` in base;
    r903 = dyn __85(arma146, 2);
    goto L312(r903);
  D198():
    deopt 816 [r400];
  D199():
    deopt 822 [x21];
  D201():
    deopt 826 [r403];
  D246():
    deopt 990 [C_ARIMA_Invtrans1, r506];
  D275():
    deopt 1099 [x23];
  D281():
    deopt 1119 [];
  D311():
    deopt 1221 [];
  D314():
    deopt 1236 [];
  D326():
    deopt 1285 [r658];
  D345():
    deopt 1361 [r712];
  D351():
    deopt 1389 [r731];
  D425():
    deopt 1675 [];
  L252(dx298):
    sum5 = ldf sum in base;
    r670 = dyn sum5(dx298);
    check L1178() else D330();
  L253(r677, r678, dx300):
    r680 = `:`(r678, dx300);
    r681 = `+`(r677, r680);
    st ind = r681;
    maInvert1 = ldf maInvert;
    check L1183() else D332();
  L313():
    goto L315();
  L315():
    arma151 = ld arma;
    check L1427() else D433();
  L870():
    st fit = r400;
    goto L161();
  L874():
    x22 = force? x21;
    checkMissing(x22);
    is_na3 = ldf `is.na` in base;
    r404 = dyn is_na3(x22);
    check L875() else D200();
  L876():
    p43 = prom<V +>{
      xreg23 = ld xreg;
      xreg24 = force? xreg23;
      checkMissing(xreg24);
      return xreg24;
    };
    p44 = prom<V +>{
      anyNA2 = ld anyNA;
      anyNA3 = force? anyNA2;
      checkMissing(anyNA3);
      return anyNA3;
    };
    r407 = dyn apply(p43, 1, p44);
    check L877() else D202();
  L980():
    goto L196(C_ARIMA_Invtrans1, r506);
  L1044():
    x24 = force? x23;
    checkMissing(x24);
    xreg25 = ld xreg;
    check L1045() else D276();
  L1054():
    p62 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p63 = prom<V +>{
      mod = ld mod;
      mod1 = force? mod;
      checkMissing(mod1);
      return mod1;
    };
    r567 = dyn arimaSS(p62, p63);
    check L1055() else D282();
  L1123():
    r615 = dyn stop12("non-stationary AR part from CSS");
    check L1124() else D312();
  L1132():
    p71 = prom<V +>{
      init58 = ld init;
      init59 = force? init58;
      checkMissing(init59);
      c295 = `is.object`(init59);
      if c295 then L4() else L5(init59);
    L0(dx276):
      return dx276;
    L4():
      dr172 = tryDispatchBuiltin.1("[", init59);
      dc86 = getTryDispatchBuiltinDispatched(dr172);
      if dc86 then L6() else L5(dr172);
    L5(init61):
      sym77 = ldf sum;
      base77 = ldf sum in base;
      guard77 = `==`.4(sym77, base77);
      if guard77 then L7() else L8();
    L1(init64, r621):
      arma73 = ld arma;
      arma74 = force? arma73;
      checkMissing(arma74);
      c297 = `is.object`(arma74);
      if c297 then L12() else L13(init64, r621, 1, arma74);
    L6():
      dx275 = getTryDispatchBuiltinValue(dr172);
      goto L0(dx275);
    L7():
      arma69 = ld arma;
      arma70 = force? arma69;
      checkMissing(arma70);
      c296 = `is.object`(arma70);
      if c296 then L9() else L10(init61, arma70);
    L8():
      r620 = dyn base77(<lang `[`(arma, `:`(1, 2))>);
      goto L1(init61, r620);
    L2(init68, dx278):
      sum4 = ldf sum in base;
      r623 = dyn sum4(dx278);
      goto L1(init68, r623);
    L3(init72, r630, r631, dx280):
      r633 = `:`(r631, dx280);
      r634 = `+`(r630, r633);
      __53 = ldf `[` in base;
      r635 = dyn __53(init72, r634);
      goto L0(r635);
    L9():
      dr174 = tryDispatchBuiltin.1("[", arma70);
      dc87 = getTryDispatchBuiltinDispatched(dr174);
      if dc87 then L11() else L10(init61, dr174);
    L10(init66, arma72):
      __51 = ldf `[` in base;
      r622 = dyn __51(arma72, <int 1, 2>);
      goto L2(init66, r622);
    L12():
      dr176 = tryDispatchBuiltin.1("[", arma74);
      dc88 = getTryDispatchBuiltinDispatched(dr176);
      if dc88 then L14() else L13(init64, r621, 1, dr176);
    L13(init70, r626, r627, arma76):
      __52 = ldf `[` in base;
      r632 = dyn __52(arma76, 3);
      goto L3(init70, r626, r627, r632);
    L11():
      dx277 = getTryDispatchBuiltinValue(dr174);
      goto L2(init61, dx277);
    L14():
      dx279 = getTryDispatchBuiltinValue(dr176);
      goto L3(init64, r621, 1, dx279);
    };
    r637 = dyn arCheck3(p71);
    check L1133() else D315();
  L1161():
    l23 = ld init;
    c305 = `is.object`(l23);
    if c305 then L1162() else L1163(r658, l23);
  L1175():
    dr190 = tryDispatchBuiltin.1("[", arma96);
    dc95 = getTryDispatchBuiltinDispatched(dr190);
    if dc95 then L1177() else L1176(dr190);
  L1176(arma98):
    __59 = ldf `[` in base;
    r669 = dyn __59(arma98, <int 1, 2, 3>);
    goto L252(r669);
  L1180():
    dr192 = tryDispatchBuiltin.1("[", arma100);
    dc96 = getTryDispatchBuiltinDispatched(dr192);
    if dc96 then L1182() else L1181(r668, 1, dr192);
  L1181(r673, r674, arma102):
    __60 = ldf `[` in base;
    r679 = dyn __60(arma102, 4);
    goto L253(r673, r674, r679);
  L1206():
    list6 = ldf list in base;
    r713 = dyn list6(0.0, r705, r712);
    check L1207() else D346();
  L1218():
    goto L262();
  L1221(dx316):
    l29 = ld coef;
    c320 = `is.object`(l29);
    if c320 then L1225() else L1226(dx316, l29);
  L1222():
    dr208 = tryDispatchBuiltin.1("$", res33);
    dc104 = getTryDispatchBuiltinDispatched(dr208);
    if dc104 then L1224() else L1223(dr208);
  L1223(res35):
    r733 = `$`(res35, <sym par>);
    goto L1221(r733);
  L1411():
    p106 = prom<V +>{
      arma139 = ld arma;
      arma140 = force? arma139;
      checkMissing(arma140);
      c361 = `is.object`(arma140);
      if c361 then L1() else L2(1, arma140);
    L0(r896, dx399):
      r898 = `:`(r896, dx399);
      return r898;
    L1():
      dr272 = tryDispatchBuiltin.1("[", arma140);
      dc136 = getTryDispatchBuiltinDispatched(dr272);
      if dc136 then L3() else L2(1, dr272);
    L2(r894, arma142):
      __84 = ldf `[` in base;
      r897 = dyn __84(arma142, 1);
      goto L0(r894, r897);
    L3():
      dx398 = getTryDispatchBuiltinValue(dr272);
      goto L0(1, dx398);
    };
    r900 = dyn paste1("ar", p106);
    check L1412() else D426();
  L1418():
    dx400 = getTryDispatchBuiltinValue(dr274);
    goto L312(dx400);
  L1419():
    sym97 = ldf c;
    base97 = ldf c in base;
    guard97 = `==`.4(sym97, base97);
    if guard97 then L1420() else L1421();
  D200():
    deopt 825 [r404];
  D202():
    deopt 830 [r403, r407];
  D276():
    deopt 1101 [x24, xreg25];
  D282():
    deopt 1122 [r567];
  D312():
    deopt 1223 [r615];
  D315():
    deopt 1238 [r637];
  D330():
    deopt 1308 [r670];
  D332():
    deopt 1318 [];
  D346():
    deopt 1364 [r713];
  D426():
    deopt 1678 [r900];
  D433():
    deopt 1705 [arma151];
  L247(r662, dx294):
    st init = dx294;
    goto L248();
  L263(dx322):
    st coef = dx322;
    transform_pars13 = ld `transform.pars`;
    check L1229() else D354();
  L314(r906):
    st nm = r906;
    goto L315();
  L875():
    goto L162(r404);
  L877():
    r408 = `||`(r403, r407);
    st isna = r408;
    sym58 = ldf sum;
    base58 = ldf sum in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L878() else L879();
  L1045():
    xreg26 = force? xreg25;
    checkMissing(xreg26);
    coef3 = ld coef;
    check L1046() else D277();
  L1055():
    sym74 = ldf `.Call`;
    base74 = ldf `.Call` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L1056() else L1057();
  L1124():
    goto L233(r615);
  L1133():
    r638 = `!`(r637);
    c298 = `as.logical`(r638);
    if c298 then L1134() else L237();
  L1162():
    dr186 = tryDispatchBuiltin.0("[<-", l23, r658);
    dc93 = getTryDispatchBuiltinDispatched(dr186);
    if dc93 then L1164() else L1163(r658, dr186);
  L1163(r660, l25):
    ind8 = ld ind;
    check L1165() else D327();
  L1177():
    dx297 = getTryDispatchBuiltinValue(dr190);
    goto L252(dx297);
  L1178():
    goto L251(r670);
  L1182():
    dx299 = getTryDispatchBuiltinValue(dr192);
    goto L253(r668, 1, dx299);
  L1183():
    p73 = prom<V +>{
      init79 = ld init;
      init80 = force? init79;
      checkMissing(init80);
      c310 = `is.object`(init80);
      if c310 then L1() else L2(init80);
    L0(dx302):
      return dx302;
    L1():
      dr194 = tryDispatchBuiltin.1("[", init80);
      dc97 = getTryDispatchBuiltinDispatched(dr194);
      if dc97 then L3() else L2(dr194);
    L2(init82):
      ind10 = ld ind;
      ind11 = force? ind10;
      __61 = ldf `[` in base;
      r682 = dyn __61(init82, ind11);
      goto L0(r682);
    L3():
      dx301 = getTryDispatchBuiltinValue(dr194);
      goto L0(dx301);
    };
    r684 = dyn maInvert1(p73);
    check L1184() else D333();
  L1207():
    goto L259(r713);
  L1224():
    dx315 = getTryDispatchBuiltinValue(dr208);
    goto L1221(dx315);
  L1225():
    dr210 = tryDispatchBuiltin.0("[<-", l29, dx316);
    dc105 = getTryDispatchBuiltinDispatched(dr210);
    if dc105 then L1227() else L1226(dx316, dr210);
  L1226(dx318, l31):
    mask33 = ld mask;
    check L1228() else D353();
  L1412():
    c362 = ldf c in base;
    r901 = dyn c362(nm1, r900);
    check L1413() else D427();
  L1420():
    nm2 = ld nm;
    check L1422() else D429();
  L1421():
    r905 = dyn base97(<sym nm>, <lang paste0("ma", `:`(1, `[`(arma, 2)))>);
    goto L314(r905);
  L1427():
    arma152 = force? arma151;
    checkMissing(arma152);
    c367 = `is.object`(arma152);
    if c367 then L1428() else L1429(arma152);
  D277():
    deopt 1103 [x24, coef3];
  D327():
    deopt 1287 [r660, l25, r658, ind8];
  D333():
    deopt 1320 [r684];
  D353():
    deopt 1396 [dx318, l31, dx316, mask33];
  D354():
    deopt 1400 [transform_pars13];
  D427():
    deopt 1680 [r901];
  D429():
    deopt 1693 [nm2];
  L163(r410):
    sym59 = ldf length;
    base59 = ldf length in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L882() else L883();
  L215(r569):
    st val = r569;
    val = ld val;
    check L1073() else D290();
  L237():
    goto L238(NULL);
  L238(r640):
    goto L239();
  L316(dx405):
    r918 = `>`(dx405, 0);
    c368 = `as.logical`(r918);
    if c368 then L1431() else L317();
  L878():
    isna = ld isna;
    check L880() else D203();
  L879():
    r409 = dyn base58(<lang `!`(isna)>);
    goto L163(r409);
  L1046():
    coef4 = force? coef3;
    checkMissing(coef4);
    c275 = `is.object`(coef4);
    if c275 then L1047() else L1048(x24, coef4);
  L1056():
    C_ARIMA_CSS = ld C_ARIMA_CSS;
    check L1058() else D283();
  L1057():
    r568 = dyn base74(<sym C_ARIMA_CSS>, <sym x>, <sym arma>, <lang `[[`(trarma, 1)>, <lang `[[`(trarma, 2)>, <lang as.integer(ncond)>, TRUE);
    goto L215(r568);
  L1134():
    stop13 = ldf stop;
    check L1135() else D316();
  L1164():
    dx293 = getTryDispatchBuiltinValue(dr186);
    goto L247(r658, dx293);
  L1165():
    ind9 = force? ind8;
    ___7 = ldf `[<-` in base;
    r663 = dyn ___7(l25, r658, ind9);
    goto L247(r660, r663);
  L1184():
    l26 = ld init;
    c311 = `is.object`(l26);
    if c311 then L1185() else L1186(r684, l26);
  L1227():
    dx320 = getTryDispatchBuiltinValue(dr210);
    goto L263(dx320);
  L1228():
    mask34 = force? mask33;
    ___9 = ldf `[<-` in base;
    r734 = dyn ___9(l31, dx316, mask34);
    goto L263(r734);
  L1229():
    transform_pars14 = force? transform_pars13;
    checkMissing(transform_pars14);
    c321 = `as.logical`(transform_pars14);
    if c321 then L1230() else L264();
  L1413():
    goto L310(r901);
  L1422():
    nm3 = force? nm2;
    checkMissing(nm3);
    paste2 = ldf paste0;
    check L1423() else D430();
  L1428():
    dr278 = tryDispatchBuiltin.1("[", arma152);
    dc139 = getTryDispatchBuiltinDispatched(dr278);
    if dc139 then L1430() else L1429(dr278);
  L1429(arma154):
    __87 = ldf `[` in base;
    r917 = dyn __87(arma154, 3);
    goto L316(r917);
  D203():
    deopt 835 [isna];
  D283():
    deopt 1124 [C_ARIMA_CSS];
  D290():
    deopt 1144 [val];
  D316():
    deopt 1241 [];
  D430():
    deopt 1696 [];
  L164(r416, r417):
    r419 = `-`(r416, r417);
    st `n.used` = r419;
    sym60 = ldf c;
    base60 = ldf c in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L886() else L887();
  L213(x28, dx235):
    ___5 = ldf `%*%` in base;
    r562 = dyn ___5(xreg26, dx235);
    check L1052() else D280();
  L254(r688, dx304):
    st init = dx304;
    goto L255(r688);
  L264():
    no_optim10 = ld `no.optim`;
    check L1356() else D398();
  L296():
    sym93 = ldf `.Call`;
    base93 = ldf `.Call` in base;
    guard93 = `==`.4(sym93, base93);
    if guard93 then L1363() else L1364();
  L317():
    goto L319();
  L319():
    arma159 = ld arma;
    check L1439() else D438();
  L880():
    isna1 = force? isna;
    checkMissing(isna1);
    r411 = `!`(isna1);
    sum2 = ldf sum in base;
    r412 = dyn sum2(r411);
    check L881() else D204();
  L882():
    Delta10 = ld Delta;
    check L884() else D205();
  L883():
    r415 = dyn base59(<sym Delta>);
    goto L164(r410, r415);
  L1047():
    dr146 = tryDispatchBuiltin.1("[", coef4);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L1049() else L1048(x24, dr146);
  L1048(x26, coef6):
    narma6 = ld narma;
    check L1050() else D278();
  L1058():
    C_ARIMA_CSS1 = force? C_ARIMA_CSS;
    checkMissing(C_ARIMA_CSS1);
    x31 = ld x;
    check L1059() else D284();
  L1073():
    val1 = force? val;
    checkMissing(val1);
    c278 = `is.object`(val1);
    if c278 then L1074() else L1075(val1);
  L1135():
    r639 = dyn stop13("non-stationary seasonal AR part from CSS");
    check L1136() else D317();
  L1185():
    dr196 = tryDispatchBuiltin.0("[<-", l26, r684);
    dc98 = getTryDispatchBuiltinDispatched(dr196);
    if dc98 then L1187() else L1186(r684, dr196);
  L1186(r686, l28):
    ind12 = ld ind;
    check L1188() else D334();
  L1230():
    arma105 = ld arma;
    check L1231() else D355();
  L1423():
    p107 = prom<V +>{
      arma147 = ld arma;
      arma148 = force? arma147;
      checkMissing(arma148);
      c365 = `is.object`(arma148);
      if c365 then L1() else L2(1, arma148);
    L0(r910, dx403):
      r912 = `:`(r910, dx403);
      return r912;
    L1():
      dr276 = tryDispatchBuiltin.1("[", arma148);
      dc138 = getTryDispatchBuiltinDispatched(dr276);
      if dc138 then L3() else L2(1, dr276);
    L2(r908, arma150):
      __86 = ldf `[` in base;
      r911 = dyn __86(arma150, 2);
      goto L0(r908, r911);
    L3():
      dx402 = getTryDispatchBuiltinValue(dr276);
      goto L0(1, dx402);
    };
    r914 = dyn paste2("ma", p107);
    check L1424() else D431();
  L1430():
    dx404 = getTryDispatchBuiltinValue(dr278);
    goto L316(dx404);
  L1431():
    sym98 = ldf c;
    base98 = ldf c in base;
    guard98 = `==`.4(sym98, base98);
    if guard98 then L1432() else L1433();
  D204():
    deopt 839 [r412];
  D205():
    deopt 841 [r410, Delta10];
  D278():
    deopt 1105 [x26, coef6, narma6];
  D280():
    deopt 1113 [x28, r562];
  D284():
    deopt 1125 [C_ARIMA_CSS1, x31];
  D317():
    deopt 1243 [r639];
  D334():
    deopt 1322 [r686, l28, r684, ind12];
  D355():
    deopt 1402 [arma105];
  D398():
    deopt 1572 [no_optim10];
  D431():
    deopt 1699 [r914];
  D438():
    deopt 1726 [arma159];
  L165(r421):
    st init0 = r421;
    summary = ldf summary;
    check L892() else D211();
  L219(dx251):
    st sigma2 = dx251;
    no_optim4 = ld `no.optim`;
    check L1077() else D291();
  L299(r836):
    st trarma = r836;
    makeARIMA2 = ldf makeARIMA;
    check L1368() else D406();
  L318(r920):
    st nm = r920;
    goto L319();
  L881():
    goto L163(r412);
  L884():
    Delta11 = force? Delta10;
    checkMissing(Delta11);
    length7 = ldf length in base;
    r418 = dyn length7(Delta11);
    check L885() else D206();
  L886():
    init1 = ld init0;
    check L888() else D207();
  L887():
    r420 = dyn base60(<sym init0>, <lang coef(fit)>);
    goto L165(r420);
  L1049():
    dx234 = getTryDispatchBuiltinValue(dr146);
    goto L213(x24, dx234);
  L1050():
    narma7 = force? narma6;
    checkMissing(narma7);
    ncxreg20 = ld ncxreg;
    check L1051() else D279();
  L1052():
    r563 = `-`(x28, r562);
    st x = r563;
    goto L214();
  L1059():
    x32 = force? x31;
    checkMissing(x32);
    arma44 = ld arma;
    check L1060() else D285();
  L1074():
    dr152 = tryDispatchBuiltin.1("[[", val1);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L1076() else L1075(dr152);
  L1075(val3):
    __45 = ldf `[[` in base;
    r576 = dyn __45(val3, 1);
    goto L219(r576);
  L1136():
    goto L238(r639);
  L1187():
    dx303 = getTryDispatchBuiltinValue(dr196);
    goto L254(r684, dx303);
  L1188():
    ind13 = force? ind12;
    ___8 = ldf `[<-` in base;
    r689 = dyn ___8(l28, r684, ind13);
    goto L254(r686, r689);
  L1231():
    arma106 = force? arma105;
    checkMissing(arma106);
    c322 = `is.object`(arma106);
    if c322 then L1232() else L1233(arma106);
  L1356():
    no_optim11 = force? no_optim10;
    checkMissing(no_optim11);
    c349 = `as.logical`(no_optim11);
    if c349 then L1357() else L297();
  L1363():
    C_ARIMA_transPars4 = ld C_ARIMA_transPars;
    check L1365() else D403();
  L1364():
    r835 = dyn base93(<sym C_ARIMA_transPars>, <sym coef>, <sym arma>, FALSE);
    goto L299(r835);
  L1424():
    c366 = ldf c in base;
    r915 = dyn c366(nm3, r914);
    check L1425() else D432();
  L1432():
    nm4 = ld nm;
    check L1434() else D434();
  L1433():
    r919 = dyn base98(<sym nm>, <lang paste0("sar", `:`(1, `[`(arma, 3)))>);
    goto L318(r919);
  L1439():
    arma160 = force? arma159;
    checkMissing(arma160);
    c371 = `is.object`(arma160);
    if c371 then L1440() else L1441(arma160);
  D206():
    deopt 844 [r410, r418];
  D207():
    deopt 849 [init1];
  D211():
    deopt 859 [];
  D279():
    deopt 1107 [x26, coef6, narma7, 1, ncxreg20];
  D285():
    deopt 1126 [C_ARIMA_CSS1, x32, arma44];
  D291():
    deopt 1150 [no_optim4];
  D403():
    deopt 1583 [C_ARIMA_transPars4];
  D406():
    deopt 1591 [];
  D432():
    deopt 1701 [r915];
  D434():
    deopt 1714 [nm4];
  L265(dx324):
    r736 = `>`(dx324, 0);
    c323 = `as.logical`(r736);
    if c323 then L1235() else L266();
  L297():
    solve2 = ldf solve;
    check L1361() else D401();
  L298(r830):
    st var = r830;
    goto L296();
  L320(dx409):
    r932 = `>`(dx409, 0);
    c372 = `as.logical`(r932);
    if c372 then L1443() else L321();
  L885():
    goto L164(r410, r418);
  L888():
    init2 = force? init1;
    checkMissing(init2);
    coef = ldf coef;
    check L889() else D208();
  L892():
    p46 = prom<V +>{
      fit6 = ld fit;
      fit7 = force? fit6;
      checkMissing(fit7);
      return fit7;
    };
    r426 = dyn summary(p46);
    check L893() else D212();
  L1051():
    ncxreg21 = force? ncxreg20;
    checkMissing(ncxreg21);
    r559 = `:`(1, ncxreg21);
    r560 = `+`(narma7, r559);
    __42 = ldf `[` in base;
    r561 = dyn __42(coef6, r560);
    goto L213(x26, r561);
  L1060():
    arma45 = force? arma44;
    checkMissing(arma45);
    trarma8 = ld trarma;
    check L1061() else D286();
  L1076():
    dx250 = getTryDispatchBuiltinValue(dr152);
    goto L219(dx250);
  L1077():
    no_optim5 = force? no_optim4;
    checkMissing(no_optim5);
    c279 = `as.logical`(no_optim5);
    if c279 then L1078() else L220();
  L1232():
    dr212 = tryDispatchBuiltin.1("[", arma106);
    dc106 = getTryDispatchBuiltinDispatched(dr212);
    if dc106 then L1234() else L1233(dr212);
  L1233(arma108):
    __65 = ldf `[` in base;
    r735 = dyn __65(arma108, 2);
    goto L265(r735);
  L1357():
    numeric7 = ldf numeric;
    check L1358() else D399();
  L1365():
    C_ARIMA_transPars5 = force? C_ARIMA_transPars4;
    checkMissing(C_ARIMA_transPars5);
    coef27 = ld coef;
    check L1366() else D404();
  L1368():
    p97 = prom<V +>{
      trarma24 = ld trarma;
      trarma25 = force? trarma24;
      checkMissing(trarma25);
      c351 = `is.object`(trarma25);
      if c351 then L1() else L2(trarma25);
    L0(dx383):
      return dx383;
    L1():
      dr258 = tryDispatchBuiltin.1("[[", trarma25);
      dc129 = getTryDispatchBuiltinDispatched(dr258);
      if dc129 then L3() else L2(dr258);
    L2(trarma27):
      __78 = ldf `[[` in base;
      r838 = dyn __78(trarma27, 1);
      goto L0(r838);
    L3():
      dx382 = getTryDispatchBuiltinValue(dr258);
      goto L0(dx382);
    };
    p98 = prom<V +>{
      trarma28 = ld trarma;
      trarma29 = force? trarma28;
      checkMissing(trarma29);
      c352 = `is.object`(trarma29);
      if c352 then L1() else L2(trarma29);
    L0(dx385):
      return dx385;
    L1():
      dr260 = tryDispatchBuiltin.1("[[", trarma29);
      dc130 = getTryDispatchBuiltinDispatched(dr260);
      if dc130 then L3() else L2(dr260);
    L2(trarma31):
      __79 = ldf `[[` in base;
      r840 = dyn __79(trarma31, 2);
      goto L0(r840);
    L3():
      dx384 = getTryDispatchBuiltinValue(dr260);
      goto L0(dx384);
    };
    p99 = prom<V +>{
      Delta16 = ld Delta;
      Delta17 = force? Delta16;
      checkMissing(Delta17);
      return Delta17;
    };
    p100 = prom<V +>{
      kappa5 = ld kappa;
      kappa6 = force? kappa5;
      checkMissing(kappa6);
      return kappa6;
    };
    p101 = prom<V +>{
      SSinit9 = ld SSinit;
      SSinit10 = force? SSinit9;
      checkMissing(SSinit10);
      return SSinit10;
    };
    r845 = dyn makeARIMA2(p97, p98, p99, p100, p101);
    check L1369() else D407();
  L1425():
    goto L314(r915);
  L1434():
    nm5 = force? nm4;
    checkMissing(nm5);
    paste3 = ldf paste0;
    check L1435() else D435();
  L1440():
    dr282 = tryDispatchBuiltin.1("[", arma160);
    dc141 = getTryDispatchBuiltinDispatched(dr282);
    if dc141 then L1442() else L1441(dr282);
  L1441(arma162):
    __89 = ldf `[` in base;
    r931 = dyn __89(arma162, 4);
    goto L320(r931);
  D208():
    deopt 852 [];
  D212():
    deopt 861 [r426];
  D286():
    deopt 1127 [C_ARIMA_CSS1, x32, arma45, trarma8];
  D399():
    deopt 1575 [];
  D401():
    deopt 1578 [];
  D404():
    deopt 1584 [C_ARIMA_transPars5, coef27];
  D407():
    deopt 1597 [r845];
  D435():
    deopt 1717 [];
  L220():
    solve = ldf solve;
    check L1082() else D294();
  L221(r578):
    st var = r578;
    goto L222();
  L266():
    goto L274();
  L274():
    arma117 = ld arma;
    check L1261() else D364();
  L321():
    goto L323();
  L323():
    ncxreg26 = ld ncxreg;
    check L1451() else D443();
  L889():
    p45 = prom<V +>{
      fit4 = ld fit;
      fit5 = force? fit4;
      checkMissing(fit5);
      return fit5;
    };
    r423 = dyn coef(p45);
    check L890() else D209();
  L893():
    c238 = `is.object`(r426);
    if c238 then L895() else L896(r426);
  L1061():
    trarma9 = force? trarma8;
    checkMissing(trarma9);
    c276 = `is.object`(trarma9);
    if c276 then L1062() else L1063(C_ARIMA_CSS1, x32, arma45, trarma9);
  L1078():
    numeric2 = ldf numeric;
    check L1079() else D292();
  L1234():
    dx323 = getTryDispatchBuiltinValue(dr212);
    goto L265(dx323);
  L1235():
    arma109 = ld arma;
    check L1236() else D356();
  L1358():
    r829 = dyn numeric7();
    check L1359() else D400();
  L1361():
    p96 = prom<V +>{
      res52 = ld res;
      res53 = force? res52;
      checkMissing(res53);
      c350 = `is.object`(res53);
      if c350 then L1() else L2(res53);
    L0(dx381):
      n_used6 = ld `n.used`;
      n_used7 = force? n_used6;
      checkMissing(n_used7);
      r832 = `*`(dx381, n_used7);
      return r832;
    L1():
      dr256 = tryDispatchBuiltin.1("$", res53);
      dc128 = getTryDispatchBuiltinDispatched(dr256);
      if dc128 then L3() else L2(dr256);
    L2(res55):
      r831 = `$`(res55, <sym hessian>);
      goto L0(r831);
    L3():
      dx380 = getTryDispatchBuiltinValue(dr256);
      goto L0(dx380);
    };
    r834 = dyn solve2(p96);
    check L1362() else D402();
  L1366():
    coef28 = force? coef27;
    checkMissing(coef28);
    arma133 = ld arma;
    check L1367() else D405();
  L1369():
    st mod = r845;
    ncxreg22 = ld ncxreg;
    check L1370() else D408();
  L1435():
    p108 = prom<V +>{
      arma155 = ld arma;
      arma156 = force? arma155;
      checkMissing(arma156);
      c369 = `is.object`(arma156);
      if c369 then L1() else L2(1, arma156);
    L0(r924, dx407):
      r926 = `:`(r924, dx407);
      return r926;
    L1():
      dr280 = tryDispatchBuiltin.1("[", arma156);
      dc140 = getTryDispatchBuiltinDispatched(dr280);
      if dc140 then L3() else L2(1, dr280);
    L2(r922, arma158):
      __88 = ldf `[` in base;
      r925 = dyn __88(arma158, 3);
      goto L0(r922, r925);
    L3():
      dx406 = getTryDispatchBuiltinValue(dr280);
      goto L0(1, dx406);
    };
    r928 = dyn paste3("sar", p108);
    check L1436() else D436();
  L1442():
    dx408 = getTryDispatchBuiltinValue(dr282);
    goto L320(dx408);
  L1443():
    sym99 = ldf c;
    base99 = ldf c in base;
    guard99 = `==`.4(sym99, base99);
    if guard99 then L1444() else L1445();
  D209():
    deopt 854 [r423];
  D292():
    deopt 1153 [];
  D294():
    deopt 1156 [];
  D356():
    deopt 1409 [arma109];
  D364():
    deopt 1444 [arma117];
  D400():
    deopt 1576 [r829];
  D402():
    deopt 1580 [r834];
  D405():
    deopt 1585 [C_ARIMA_transPars5, coef28, arma133];
  D408():
    deopt 1599 [ncxreg22];
  D436():
    deopt 1720 [r928];
  D443():
    deopt 1747 [ncxreg26];
  L216(C_ARIMA_CSS5, x36, arma49, dx237):
    trarma12 = ld trarma;
    check L1065() else D287();
  L322(r934):
    st nm = r934;
    goto L323();
  L890():
    c237 = ldf c in base;
    r424 = dyn c237(init2, r423);
    check L891() else D210();
  L894(dx179):
    c239 = `is.object`(dx179);
    if c239 then L898() else L899();
  L895():
    dr106 = tryDispatchBuiltin.1("$", r426);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L897() else L896(dr106);
  L896(r428):
    r429 = `$`(r428, <sym coefficients>);
    goto L894(r429);
  L1062():
    dr148 = tryDispatchBuiltin.1("[[", trarma9);
    dc74 = getTryDispatchBuiltinDispatched(dr148);
    if dc74 then L1064() else L1063(C_ARIMA_CSS1, x32, arma45, dr148);
  L1063(C_ARIMA_CSS3, x34, arma47, trarma11):
    __43 = ldf `[[` in base;
    r570 = dyn __43(trarma11, 1);
    goto L216(C_ARIMA_CSS3, x34, arma47, r570);
  L1079():
    r577 = dyn numeric2();
    check L1080() else D293();
  L1082():
    p64 = prom<V +>{
      res12 = ld res;
      res13 = force? res12;
      checkMissing(res13);
      c280 = `is.object`(res13);
      if c280 then L1() else L2(res13);
    L0(dx253):
      n_used2 = ld `n.used`;
      n_used3 = force? n_used2;
      checkMissing(n_used3);
      r580 = `*`(dx253, n_used3);
      return r580;
    L1():
      dr154 = tryDispatchBuiltin.1("$", res13);
      dc77 = getTryDispatchBuiltinDispatched(dr154);
      if dc77 then L3() else L2(dr154);
    L2(res15):
      r579 = `$`(res15, <sym hessian>);
      goto L0(r579);
    L3():
      dx252 = getTryDispatchBuiltinValue(dr154);
      goto L0(dx252);
    };
    r582 = dyn solve(p64);
    check L1083() else D295();
  L1236():
    arma110 = force? arma109;
    checkMissing(arma110);
    c324 = `is.object`(arma110);
    if c324 then L1237() else L1238(arma110);
  L1261():
    arma118 = force? arma117;
    checkMissing(arma118);
    c330 = `is.object`(arma118);
    if c330 then L1262() else L1263(arma118);
  L1359():
    goto L298(r829);
  L1362():
    goto L298(r834);
  L1367():
    arma134 = force? arma133;
    checkMissing(arma134);
    vargs7 = dots[coef28, arma134, FALSE];
    r837 = `.Call`(C_ARIMA_transPars5, vargs7, <missing>);
    goto L299(r837);
  L1370():
    ncxreg23 = force? ncxreg22;
    checkMissing(ncxreg23);
    r846 = `>`(ncxreg23, 0);
    c353 = `as.logical`(r846);
    if c353 then L1371() else L300();
  L1436():
    c370 = ldf c in base;
    r929 = dyn c370(nm5, r928);
    check L1437() else D437();
  L1444():
    nm6 = ld nm;
    check L1446() else D439();
  L1445():
    r933 = dyn base99(<sym nm>, <lang paste0("sma", `:`(1, `[`(arma, 4)))>);
    goto L322(r933);
  L1451():
    ncxreg27 = force? ncxreg26;
    checkMissing(ncxreg27);
    r945 = `>`(ncxreg27, 0);
    c375 = `as.logical`(r945);
    if c375 then L1452() else L324();
  D210():
    deopt 856 [r424];
  D287():
    deopt 1131 [C_ARIMA_CSS5, x36, arma49, dx237, trarma12];
  D293():
    deopt 1154 [r577];
  D295():
    deopt 1158 [r582];
  D437():
    deopt 1722 [r929];
  D439():
    deopt 1735 [nm6];
  L166(dx183):
    st ses = dx183;
    sym61 = ldf c;
    base61 = ldf c in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L901() else L902();
  L267(dx326):
    arma113 = ld arma;
    check L1240() else D357();
  L275(dx340):
    r760 = `>`(dx340, 0);
    c331 = `as.logical`(r760);
    if c331 then L1265() else L276();
  L300():
    arimaSS2 = ldf arimaSS;
    check L1375() else D411();
  L301(r855):
    st val = r855;
    val4 = ld val;
    check L1377() else D413();
  L324():
    goto L332();
  L332():
    nm10 = ld nm;
    check L1503() else D469();
  L891():
    goto L165(r424);
  L897():
    dx178 = getTryDispatchBuiltinValue(dr106);
    goto L894(dx178);
  L898():
    dr108 = tryDispatchBuiltin.1("[", dx179);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L900() else L899();
  L899():
    __29 = ldf `[` in base;
    r430 = dyn __29(dx179, <missing>, 2);
    goto L166(r430);
  L1064():
    dx236 = getTryDispatchBuiltinValue(dr148);
    goto L216(C_ARIMA_CSS1, x32, arma45, dx236);
  L1065():
    trarma13 = force? trarma12;
    checkMissing(trarma13);
    c277 = `is.object`(trarma13);
    if c277 then L1066() else L1067(C_ARIMA_CSS5, x36, arma49, dx237, trarma13);
  L1080():
    goto L221(r577);
  L1083():
    goto L221(r582);
  L1237():
    dr214 = tryDispatchBuiltin.1("[", arma110);
    dc107 = getTryDispatchBuiltinDispatched(dr214);
    if dc107 then L1239() else L1238(dr214);
  L1238(arma112):
    __66 = ldf `[` in base;
    r737 = dyn __66(arma112, 1);
    goto L267(r737);
  L1262():
    dr224 = tryDispatchBuiltin.1("[", arma118);
    dc112 = getTryDispatchBuiltinDispatched(dr224);
    if dc112 then L1264() else L1263(dr224);
  L1263(arma120):
    __70 = ldf `[` in base;
    r759 = dyn __70(arma120, 4);
    goto L275(r759);
  L1371():
    arimaSS1 = ldf arimaSS;
    check L1372() else D409();
  L1437():
    goto L318(r929);
  L1446():
    nm7 = force? nm6;
    checkMissing(nm7);
    paste4 = ldf paste0;
    check L1447() else D440();
  L1452():
    sym100 = ldf c;
    base100 = ldf c in base;
    guard100 = `==`.4(sym100, base100);
    if guard100 then L1453() else L1454();
  D357():
    deopt 1414 [dx326, 1, arma113];
  D409():
    deopt 1604 [];
  D411():
    deopt 1609 [];
  D413():
    deopt 1614 [val4];
  D440():
    deopt 1738 [];
  D469():
    deopt 1826 [nm10];
  L167(r432):
    st parscale = r432;
    goto L168();
  L217(C_ARIMA_CSS9, x40, arma53, dx242, dx243):
    sym75 = ldf `as.integer`;
    base75 = ldf `as.integer` in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L1069() else L1070();
  L276():
    goto L285();
  L285():
    sym87 = ldf any;
    base87 = ldf any in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L1294() else L1295();
  L325(r947):
    st nm = r947;
    orig_xreg2 = ld `orig.xreg`;
    check L1458() else D447();
  L900():
    dx182 = getTryDispatchBuiltinValue(dr108);
    goto L166(dx182);
  L901():
    parscale = ld parscale;
    check L903() else D213();
  L902():
    r431 = dyn base61(<sym parscale>, <lang `*`(10.0, ses)>);
    goto L167(r431);
  L1066():
    dr150 = tryDispatchBuiltin.1("[[", trarma13);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L1068() else L1067(C_ARIMA_CSS5, x36, arma49, dx237, dr150);
  L1067(C_ARIMA_CSS7, x38, arma51, dx239, trarma15):
    __44 = ldf `[[` in base;
    r571 = dyn __44(trarma15, 2);
    goto L217(C_ARIMA_CSS7, x38, arma51, dx239, r571);
  L1239():
    dx325 = getTryDispatchBuiltinValue(dr214);
    goto L267(dx325);
  L1240():
    arma114 = force? arma113;
    checkMissing(arma114);
    c325 = `is.object`(arma114);
    if c325 then L1241() else L1242(dx326, 1, arma114);
  L1264():
    dx339 = getTryDispatchBuiltinValue(dr224);
    goto L275(dx339);
  L1265():
    sym85 = ldf sum;
    base85 = ldf sum in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L1266() else L1267();
  L1372():
    p102 = prom<V +>{
      x44 = ld x;
      x45 = force? x44;
      checkMissing(x45);
      xreg27 = ld xreg;
      xreg28 = force? xreg27;
      checkMissing(xreg28);
      coef29 = ld coef;
      coef30 = force? coef29;
      checkMissing(coef30);
      c354 = `is.object`(coef30);
      if c354 then L1() else L2(x45, coef30);
    L0(x49, dx387):
      ___13 = ldf `%*%` in base;
      r850 = dyn ___13(xreg28, dx387);
      r851 = `-`(x49, r850);
      return r851;
    L1():
      dr262 = tryDispatchBuiltin.1("[", coef30);
      dc131 = getTryDispatchBuiltinDispatched(dr262);
      if dc131 then L3() else L2(x45, dr262);
    L2(x47, coef32):
      narma8 = ld narma;
      narma9 = force? narma8;
      checkMissing(narma9);
      ncxreg24 = ld ncxreg;
      ncxreg25 = force? ncxreg24;
      checkMissing(ncxreg25);
      r847 = `:`(1, ncxreg25);
      r848 = `+`(narma9, r847);
      __80 = ldf `[` in base;
      r849 = dyn __80(coef32, r848);
      goto L0(x47, r849);
    L3():
      dx386 = getTryDispatchBuiltinValue(dr262);
      goto L0(x45, dx386);
    };
    p103 = prom<V +>{
      mod2 = ld mod;
      mod3 = force? mod2;
      checkMissing(mod3);
      return mod3;
    };
    r854 = dyn arimaSS1(p102, p103);
    check L1373() else D410();
  L1375():
    p104 = prom<V +>{
      x50 = ld x;
      x51 = force? x50;
      checkMissing(x51);
      return x51;
    };
    p105 = prom<V +>{
      mod4 = ld mod;
      mod5 = force? mod4;
      checkMissing(mod5);
      return mod5;
    };
    r858 = dyn arimaSS2(p104, p105);
    check L1376() else D412();
  L1377():
    val5 = force? val4;
    checkMissing(val5);
    c355 = `is.object`(val5);
    if c355 then L1378() else L1379(val5);
  L1447():
    p109 = prom<V +>{
      arma163 = ld arma;
      arma164 = force? arma163;
      checkMissing(arma164);
      c373 = `is.object`(arma164);
      if c373 then L1() else L2(1, arma164);
    L0(r938, dx411):
      r940 = `:`(r938, dx411);
      return r940;
    L1():
      dr284 = tryDispatchBuiltin.1("[", arma164);
      dc142 = getTryDispatchBuiltinDispatched(dr284);
      if dc142 then L3() else L2(1, dr284);
    L2(r936, arma166):
      __90 = ldf `[` in base;
      r939 = dyn __90(arma166, 4);
      goto L0(r936, r939);
    L3():
      dx410 = getTryDispatchBuiltinValue(dr284);
      goto L0(1, dx410);
    };
    r942 = dyn paste4("sma", p109);
    check L1448() else D441();
  L1453():
    nm8 = ld nm;
    check L1455() else D444();
  L1454():
    r946 = dyn base100(<sym nm>, <sym cn>);
    goto L325(r946);
  L1503():
    nm11 = force? nm10;
    checkMissing(nm11);
    l50 = ld coef;
    names__ = ldf `names<-`;
    check L1504() else D470();
  D213():
    deopt 870 [parscale];
  D410():
    deopt 1607 [r854];
  D412():
    deopt 1612 [r858];
  D441():
    deopt 1741 [r942];
  D444():
    deopt 1753 [nm8];
  D447():
    deopt 1760 [orig_xreg2];
  D470():
    deopt 1829 [nm11, l50, nm11];
  L218(C_ARIMA_CSS12, x43, arma56, dx248, dx249, r573):
    vargs2 = dots[x43, arma56, dx248, dx249, r573, TRUE];
    r575 = `.Call`(C_ARIMA_CSS12, vargs2, <missing>);
    goto L215(r575);
  L268(dx331, r741, dx332):
    r743 = `:`(r741, dx332);
    r744 = `+`(dx331, r743);
    st ind = r744;
    sym84 = ldf all;
    base84 = ldf all in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L1244() else L1245();
  L277(r762):
    arma125 = ld arma;
    check L1273() else D367();
  L286(r791):
    c340 = `as.logical`(r791);
    if c340 then L1307() else L288();
  L302(dx389):
    c356 = `is.object`(dx389);
    if c356 then L1381() else L1382(dx389);
  L903():
    parscale1 = force? parscale;
    checkMissing(parscale1);
    ses = ld ses;
    check L904() else D214();
  L1068():
    dx241 = getTryDispatchBuiltinValue(dr150);
    goto L217(C_ARIMA_CSS5, x36, arma49, dx237, dx241);
  L1069():
    ncond15 = ld ncond;
    check L1071() else D288();
  L1070():
    r572 = dyn base75(<sym ncond>);
    goto L218(C_ARIMA_CSS9, x40, arma53, dx242, dx243, r572);
  L1241():
    dr216 = tryDispatchBuiltin.1("[", arma114);
    dc108 = getTryDispatchBuiltinDispatched(dr216);
    if dc108 then L1243() else L1242(dx326, 1, dr216);
  L1242(dx328, r739, arma116):
    __67 = ldf `[` in base;
    r742 = dyn __67(arma116, 2);
    goto L268(dx328, r739, r742);
  L1266():
    arma121 = ld arma;
    check L1268() else D365();
  L1267():
    r761 = dyn base85(<lang `[`(arma, `:`(1, 3))>);
    goto L277(r761);
  L1294():
    coef15 = ld coef;
    check L1296() else D374();
  L1295():
    r790 = dyn base87(<lang `!=`(`[`(coef, mask), `$`(res, par))>);
    goto L286(r790);
  L1373():
    goto L301(r854);
  L1376():
    goto L301(r858);
  L1378():
    dr264 = tryDispatchBuiltin.1("[[", val5);
    dc132 = getTryDispatchBuiltinDispatched(dr264);
    if dc132 then L1380() else L1379(dr264);
  L1379(val7):
    __81 = ldf `[[` in base;
    r859 = dyn __81(val7, 1);
    goto L302(r859);
  L1448():
    c374 = ldf c in base;
    r943 = dyn c374(nm7, r942);
    check L1449() else D442();
  L1455():
    nm9 = force? nm8;
    checkMissing(nm9);
    cn = ld cn;
    check L1456() else D445();
  L1458():
    orig_xreg3 = force? orig_xreg2;
    checkMissing(orig_xreg3);
    r949 = `!`(orig_xreg3);
    c377 = `as.logical`(r949);
    if c377 then L1459() else L326();
  L1504():
    r972 = dyn names__(l50, NULL, nm11);
    check L1505() else D471();
  D214():
    deopt 873 [10.0, ses];
  D288():
    deopt 1137 [C_ARIMA_CSS9, x40, arma53, dx242, dx243, ncond15];
  D365():
    deopt 1453 [arma121];
  D367():
    deopt 1460 [r762, 1, arma125];
  D374():
    deopt 1492 [coef15];
  D442():
    deopt 1743 [r943];
  D445():
    deopt 1755 [cn];
  D471():
    deopt 1831 [nm11, r972];
  L269(r746):
    c327 = `as.logical`(r746);
    if c327 then L1252() else L271();
  L288():
    goto L290();
  L290():
    sym89 = ldf `.Call`;
    base89 = ldf `.Call` in base;
    guard89 = `==`.4(sym89, base89);
    if guard89 then L1330() else L1331();
  L303(dx393):
    n_used8 = ld `n.used`;
    check L1384() else D414();
  L326():
    goto L331(NULL);
  L331(r970):
    goto L332();
  L904():
    ses1 = force? ses;
    checkMissing(ses1);
    r433 = `*`(10.0, ses1);
    c240 = ldf c in base;
    r434 = dyn c240(parscale1, r433);
    check L905() else D215();
  L1071():
    ncond16 = force? ncond15;
    checkMissing(ncond16);
    as_integer1 = ldf `as.integer` in base;
    r574 = dyn as_integer1(ncond16);
    check L1072() else D289();
  L1243():
    dx330 = getTryDispatchBuiltinValue(dr216);
    goto L268(dx326, 1, dx330);
  L1244():
    mask35 = ld mask;
    check L1246() else D358();
  L1245():
    r745 = dyn base84(<lang `[`(mask, ind)>);
    goto L269(r745);
  L1268():
    arma122 = force? arma121;
    checkMissing(arma122);
    c332 = `is.object`(arma122);
    if c332 then L1269() else L1270(arma122);
  L1273():
    arma126 = force? arma125;
    checkMissing(arma126);
    c333 = `is.object`(arma126);
    if c333 then L1274() else L1275(r762, 1, arma126);
  L1296():
    coef16 = force? coef15;
    checkMissing(coef16);
    c338 = `is.object`(coef16);
    if c338 then L1297() else L1298(coef16);
  L1307():
    res40 = ld res;
    check L1308() else D378();
  L1380():
    dx388 = getTryDispatchBuiltinValue(dr264);
    goto L302(dx388);
  L1381():
    dr266 = tryDispatchBuiltin.1("[", dx389);
    dc133 = getTryDispatchBuiltinDispatched(dr266);
    if dc133 then L1383() else L1382(dr266);
  L1382(dx391):
    __82 = ldf `[` in base;
    r860 = dyn __82(dx391, 1);
    goto L303(r860);
  L1449():
    goto L322(r943);
  L1456():
    cn1 = force? cn;
    checkMissing(cn1);
    c376 = ldf c in base;
    r948 = dyn c376(nm9, cn1);
    check L1457() else D446();
  L1459():
    narma10 = ld narma;
    check L1460() else D448();
  L1505():
    st coef = r972;
    no_optim12 = ld `no.optim`;
    check L1506() else D472();
  D215():
    deopt 877 [r434];
  D289():
    deopt 1140 [C_ARIMA_CSS9, x40, arma53, dx242, dx243, r574];
  D358():
    deopt 1424 [mask35];
  D378():
    deopt 1502 [res40];
  D414():
    deopt 1621 [dx393, n_used8];
  D446():
    deopt 1758 [r948];
  D448():
    deopt 1763 [narma10];
  D472():
    deopt 1833 [no_optim12];
  L271():
    goto L273(NULL);
  L273(r757):
    goto L274();
  L278(dx342):
    sum6 = ldf sum in base;
    r764 = dyn sum6(dx342);
    check L1272() else D366();
  L279(r771, r772, dx344):
    r774 = `:`(r772, dx344);
    r775 = `+`(r771, r774);
    st ind = r775;
    sym86 = ldf all;
    base86 = ldf all in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L1277() else L1278();
  L287(dx352):
    res36 = ld res;
    check L1301() else D376();
  L291(r811):
    st A = r811;
    A = ld A;
    check L1338() else D388();
  L905():
    goto L167(r434);
  L1072():
    goto L218(C_ARIMA_CSS9, x40, arma53, dx242, dx243, r574);
  L1246():
    mask36 = force? mask35;
    checkMissing(mask36);
    c326 = `is.object`(mask36);
    if c326 then L1247() else L1248(mask36);
  L1252():
    maInvert2 = ldf maInvert;
    check L1253() else D361();
  L1269():
    dr226 = tryDispatchBuiltin.1("[", arma122);
    dc113 = getTryDispatchBuiltinDispatched(dr226);
    if dc113 then L1271() else L1270(dr226);
  L1270(arma124):
    __71 = ldf `[` in base;
    r763 = dyn __71(arma124, <int 1, 2, 3>);
    goto L278(r763);
  L1274():
    dr228 = tryDispatchBuiltin.1("[", arma126);
    dc114 = getTryDispatchBuiltinDispatched(dr228);
    if dc114 then L1276() else L1275(r762, 1, dr228);
  L1275(r767, r768, arma128):
    __72 = ldf `[` in base;
    r773 = dyn __72(arma128, 4);
    goto L279(r767, r768, r773);
  L1297():
    dr236 = tryDispatchBuiltin.1("[", coef16);
    dc118 = getTryDispatchBuiltinDispatched(dr236);
    if dc118 then L1299() else L1298(dr236);
  L1298(coef18):
    mask43 = ld mask;
    check L1300() else D375();
  L1308():
    res41 = force? res40;
    checkMissing(res41);
    c341 = `is.object`(res41);
    if c341 then L1310() else L1311(res41);
  L1330():
    C_ARIMA_Gradtrans = ld C_ARIMA_Gradtrans;
    check L1332() else D384();
  L1331():
    r810 = dyn base89(<sym C_ARIMA_Gradtrans>, <lang as.double(coef)>, <sym arma>);
    goto L291(r810);
  L1383():
    dx392 = getTryDispatchBuiltinValue(dr266);
    goto L303(dx392);
  L1384():
    n_used9 = force? n_used8;
    checkMissing(n_used9);
    r861 = `/`(dx393, n_used9);
    st sigma2 = r861;
    goto L222();
  L1457():
    goto L325(r948);
  L1460():
    narma11 = force? narma10;
    checkMissing(narma11);
    ncxreg28 = ld ncxreg;
    check L1461() else D449();
  L1506():
    no_optim13 = force? no_optim12;
    checkMissing(no_optim13);
    r973 = `!`(no_optim13);
    c384 = `as.logical`(r973);
    if c384 then L1507() else L333();
  D361():
    deopt 1432 [];
  D366():
    deopt 1459 [r764];
  D375():
    deopt 1494 [coef18, mask43];
  D376():
    deopt 1496 [dx352, res36];
  D384():
    deopt 1536 [C_ARIMA_Gradtrans];
  D388():
    deopt 1546 [A];
  D449():
    deopt 1765 [narma11, 1, ncxreg28];
  L270(dx334):
    all = ldf all in base;
    r748 = dyn all(dx334);
    check L1251() else D360();
  L280(r777):
    c335 = `as.logical`(r777);
    if c335 then L1285() else L282();
  L333():
    goto L337();
  L337():
    val8 = ld val;
    check L1524() else D480();
  L1247():
    dr218 = tryDispatchBuiltin.1("[", mask36);
    dc109 = getTryDispatchBuiltinDispatched(dr218);
    if dc109 then L1249() else L1248(dr218);
  L1248(mask38):
    ind14 = ld ind;
    check L1250() else D359();
  L1253():
    p88 = prom<V +>{
      coef7 = ld coef;
      coef8 = force? coef7;
      checkMissing(coef8);
      c328 = `is.object`(coef8);
      if c328 then L1() else L2(coef8);
    L0(dx336):
      return dx336;
    L1():
      dr220 = tryDispatchBuiltin.1("[", coef8);
      dc110 = getTryDispatchBuiltinDispatched(dr220);
      if dc110 then L3() else L2(dr220);
    L2(coef10):
      ind16 = ld ind;
      ind17 = force? ind16;
      __69 = ldf `[` in base;
      r749 = dyn __69(coef10, ind17);
      goto L0(r749);
    L3():
      dx335 = getTryDispatchBuiltinValue(dr220);
      goto L0(dx335);
    };
    r751 = dyn maInvert2(p88);
    check L1254() else D362();
  L1271():
    dx341 = getTryDispatchBuiltinValue(dr226);
    goto L278(dx341);
  L1272():
    goto L277(r764);
  L1276():
    dx343 = getTryDispatchBuiltinValue(dr228);
    goto L279(r762, 1, dx343);
  L1277():
    mask39 = ld mask;
    check L1279() else D368();
  L1278():
    r776 = dyn base86(<lang `[`(mask, ind)>);
    goto L280(r776);
  L1299():
    dx351 = getTryDispatchBuiltinValue(dr236);
    goto L287(dx351);
  L1300():
    mask44 = force? mask43;
    __75 = ldf `[` in base;
    r792 = dyn __75(coef18, mask44);
    goto L287(r792);
  L1301():
    res37 = force? res36;
    checkMissing(res37);
    c339 = `is.object`(res37);
    if c339 then L1303() else L1304(dx352, res37);
  L1309(dx360):
    st oldcode = dx360;
    optim3 = ldf optim;
    check L1313() else D379();
  L1310():
    dr240 = tryDispatchBuiltin.1("$", res41);
    dc120 = getTryDispatchBuiltinDispatched(dr240);
    if dc120 then L1312() else L1311(dr240);
  L1311(res43):
    r796 = `$`(res43, <sym convergence>);
    goto L1309(r796);
  L1332():
    C_ARIMA_Gradtrans1 = force? C_ARIMA_Gradtrans;
    checkMissing(C_ARIMA_Gradtrans1);
    sym90 = ldf `as.double`;
    base90 = ldf `as.double` in base;
    guard90 = `==`.4(sym90, base90);
    if guard90 then L1333() else L1334();
  L1338():
    A1 = force? A;
    checkMissing(A1);
    c347 = `is.object`(A1);
    if c347 then L1339() else L1340(A1);
  L1461():
    ncxreg29 = force? ncxreg28;
    checkMissing(ncxreg29);
    r950 = `:`(1, ncxreg29);
    r951 = `+`(narma11, r950);
    st ind = r951;
    S4 = ld S;
    check L1462() else D450();
  L1507():
    sym101 = ldf list;
    base101 = ldf list in base;
    guard101 = `==`.4(sym101, base101);
    if guard101 then L1508() else L1509();
  D359():
    deopt 1426 [mask38, ind14];
  D360():
    deopt 1430 [r748];
  D362():
    deopt 1434 [r751];
  D368():
    deopt 1470 [mask39];
  D379():
    deopt 1507 [];
  D450():
    deopt 1771 [S4];
  D480():
    deopt 1857 [val8];
  L282():
    goto L284(NULL);
  L284(r788):
    goto L285();
  L292(C_ARIMA_Gradtrans4, r813):
    arma129 = ld arma;
    check L1337() else D387();
  L293(dx377):
    st A = dx377;
    sym91 = ldf crossprod;
    base91 = ldf crossprod in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1344() else L1345();
  L334(r975):
    l51 = ld var;
    dimnames__ = ldf `dimnames<-`;
    check L1521() else D478();
  L1249():
    dx333 = getTryDispatchBuiltinValue(dr218);
    goto L270(dx333);
  L1250():
    ind15 = force? ind14;
    __68 = ldf `[` in base;
    r747 = dyn __68(mask38, ind15);
    goto L270(r747);
  L1251():
    goto L269(r748);
  L1254():
    l32 = ld coef;
    c329 = `is.object`(l32);
    if c329 then L1255() else L1256(r751, l32);
  L1279():
    mask40 = force? mask39;
    checkMissing(mask40);
    c334 = `is.object`(mask40);
    if c334 then L1280() else L1281(mask40);
  L1285():
    maInvert3 = ldf maInvert;
    check L1286() else D371();
  L1302(dx357, dx358):
    r794 = `!=`(dx357, dx358);
    any7 = ldf any in base;
    r795 = dyn any7(r794);
    check L1306() else D377();
  L1303():
    dr238 = tryDispatchBuiltin.1("$", res37);
    dc119 = getTryDispatchBuiltinDispatched(dr238);
    if dc119 then L1305() else L1304(dx352, dr238);
  L1304(dx354, res39):
    r793 = `$`(res39, <sym par>);
    goto L1302(dx354, r793);
  L1312():
    dx359 = getTryDispatchBuiltinValue(dr240);
    goto L1309(dx359);
  L1313():
    p90 = prom<V +>{
      coef19 = ld coef;
      coef20 = force? coef19;
      checkMissing(coef20);
      c342 = `is.object`(coef20);
      if c342 then L1() else L2(coef20);
    L0(dx362):
      return dx362;
    L1():
      dr242 = tryDispatchBuiltin.1("[", coef20);
      dc121 = getTryDispatchBuiltinDispatched(dr242);
      if dc121 then L3() else L2(dr242);
    L2(coef22):
      mask45 = ld mask;
      mask46 = force? mask45;
      __76 = ldf `[` in base;
      r797 = dyn __76(coef22, mask46);
      goto L0(r797);
    L3():
      dx361 = getTryDispatchBuiltinValue(dr242);
      goto L0(dx361);
    };
    p91 = prom<V +>{
      armafn3 = ld armafn;
      armafn4 = force? armafn3;
      checkMissing(armafn4);
      return armafn4;
    };
    p92 = prom<V +>{
      optim_method7 = ld `optim.method`;
      optim_method8 = force? optim_method7;
      checkMissing(optim_method8);
      return optim_method8;
    };
    p93 = prom<V +>{
      sym88 = ldf list;
      base88 = ldf list in base;
      guard88 = `==`.4(sym88, base88);
      if guard88 then L1() else L2();
    L0(r802):
      return r802;
    L1():
      optim_control9 = ld `optim.control`;
      optim_control10 = force? optim_control9;
      checkMissing(optim_control10);
      c343 = `is.object`(optim_control10);
      if c343 then L4() else L5(optim_control10);
    L2():
      r801 = dyn base88[maxit, parscale](0, <lang `$`(optim.control, parscale)>);
      goto L0(r801);
    L3(dx364):
      list7 = ldf list in base;
      r804 = dyn list7(0, dx364);
      goto L0(r804);
    L4():
      dr244 = tryDispatchBuiltin.1("$", optim_control10);
      dc122 = getTryDispatchBuiltinDispatched(dr244);
      if dc122 then L6() else L5(dr244);
    L5(optim_control12):
      r803 = `$`(optim_control12, <sym parscale>);
      goto L3(r803);
    L6():
      dx363 = getTryDispatchBuiltinValue(dr244);
      goto L3(dx363);
    };
    r806 = dyn optim3[, , method, hessian, control, trans](p90, p91, p92, TRUE, p93, TRUE);
    check L1314() else D380();
  L1333():
    coef23 = ld coef;
    check L1335() else D385();
  L1334():
    r812 = dyn base90(<sym coef>);
    goto L292(C_ARIMA_Gradtrans1, r812);
  L1339():
    dr252 = tryDispatchBuiltin.1("[", A1);
    dc126 = getTryDispatchBuiltinDispatched(dr252);
    if dc126 then L1341() else L1340(dr252);
  L1340(A3):
    mask49 = ld mask;
    check L1342() else D389();
  L1462():
    S5 = force? S4;
    checkMissing(S5);
    c378 = `is.object`(S5);
    if c378 then L1464() else L1465(S5);
  L1508():
    nm12 = ld nm;
    check L1510() else D473();
  L1509():
    r974 = dyn base101(<lang `[`(nm, mask)>, <lang `[`(nm, mask)>);
    goto L334(r974);
  L1524():
    val9 = force? val8;
    checkMissing(val9);
    c387 = `is.object`(val9);
    if c387 then L1525() else L1526(val9);
  D371():
    deopt 1478 [];
  D377():
    deopt 1501 [r795];
  D380():
    deopt 1518 [r806];
  D385():
    deopt 1539 [C_ARIMA_Gradtrans1, coef23];
  D387():
    deopt 1542 [C_ARIMA_Gradtrans4, r813, arma129];
  D389():
    deopt 1548 [A3, mask49];
  D473():
    deopt 1838 [nm12];
  D478():
    deopt 1851 [r975, l51, r975];
  L272(r755, dx338):
    st coef = dx338;
    goto L273(r755);
  L281(dx346):
    all1 = ldf all in base;
    r779 = dyn all1(dx346);
    check L1284() else D370();
  L294(r818):
    st var = r818;
    sym92 = ldf `.Call`;
    base92 = ldf `.Call` in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L1350() else L1351();
  L338(dx433):
    st resid = dx433;
    xtsp = ld xtsp;
    check L1528() else D481();
  L1255():
    dr222 = tryDispatchBuiltin.0("[<-", l32, r751);
    dc111 = getTryDispatchBuiltinDispatched(dr222);
    if dc111 then L1257() else L1256(r751, dr222);
  L1256(r753, l34):
    ind18 = ld ind;
    check L1258() else D363();
  L1280():
    dr230 = tryDispatchBuiltin.1("[", mask40);
    dc115 = getTryDispatchBuiltinDispatched(dr230);
    if dc115 then L1282() else L1281(dr230);
  L1281(mask42):
    ind20 = ld ind;
    check L1283() else D369();
  L1286():
    p89 = prom<V +>{
      coef11 = ld coef;
      coef12 = force? coef11;
      checkMissing(coef12);
      c336 = `is.object`(coef12);
      if c336 then L1() else L2(coef12);
    L0(dx348):
      return dx348;
    L1():
      dr232 = tryDispatchBuiltin.1("[", coef12);
      dc116 = getTryDispatchBuiltinDispatched(dr232);
      if dc116 then L3() else L2(dr232);
    L2(coef14):
      ind22 = ld ind;
      ind23 = force? ind22;
      __74 = ldf `[` in base;
      r780 = dyn __74(coef14, ind23);
      goto L0(r780);
    L3():
      dx347 = getTryDispatchBuiltinValue(dr232);
      goto L0(dx347);
    };
    r782 = dyn maInvert3(p89);
    check L1287() else D372();
  L1305():
    dx356 = getTryDispatchBuiltinValue(dr238);
    goto L1302(dx352, dx356);
  L1306():
    goto L286(r795);
  L1314():
    st res = r806;
    oldcode = ld oldcode;
    check L1315() else D381();
  L1335():
    coef24 = force? coef23;
    checkMissing(coef24);
    as_double2 = ldf `as.double` in base;
    r814 = dyn as_double2(coef24);
    check L1336() else D386();
  L1337():
    arma130 = force? arma129;
    checkMissing(arma130);
    vargs5 = dots[r813, arma130];
    r815 = `.Call`(C_ARIMA_Gradtrans4, vargs5, <missing>);
    goto L291(r815);
  L1341():
    dx376 = getTryDispatchBuiltinValue(dr252);
    goto L293(dx376);
  L1342():
    mask50 = force? mask49;
    mask51 = ld mask;
    check L1343() else D390();
  L1344():
    A4 = ld A;
    check L1346() else D391();
  L1345():
    r817 = dyn base91(<sym A>, <lang solve(`*`(`$`(res, hessian), n.used), A)>);
    goto L294(r817);
  L1463(dx413):
    coef33 = ld coef;
    check L1467() else D451();
  L1464():
    dr286 = tryDispatchBuiltin.1("$", S5);
    dc143 = getTryDispatchBuiltinDispatched(dr286);
    if dc143 then L1466() else L1465(dr286);
  L1465(S7):
    r952 = `$`(S7, <sym v>);
    goto L1463(r952);
  L1510():
    nm13 = force? nm12;
    checkMissing(nm13);
    c385 = `is.object`(nm13);
    if c385 then L1511() else L1512(nm13);
  L1521():
    r979 = dyn dimnames__(l51, NULL, r975);
    check L1522() else D479();
  L1525():
    dr302 = tryDispatchBuiltin.1("[[", val9);
    dc151 = getTryDispatchBuiltinDispatched(dr302);
    if dc151 then L1527() else L1526(dr302);
  L1526(val11):
    __95 = ldf `[[` in base;
    r981 = dyn __95(val11, 2);
    goto L338(r981);
  D363():
    deopt 1436 [r753, l34, r751, ind18];
  D369():
    deopt 1472 [mask42, ind20];
  D370():
    deopt 1476 [r779];
  D372():
    deopt 1480 [r782];
  D381():
    deopt 1520 [oldcode];
  D386():
    deopt 1542 [C_ARIMA_Gradtrans1, r814];
  D390():
    deopt 1549 [A3, mask50, mask51];
  D391():
    deopt 1555 [A4];
  D451():
    deopt 1774 [coef33];
  D479():
    deopt 1853 [r975, r979];
  D481():
    deopt 1863 [xtsp];
  L295(r826):
    st coef = r826;
    goto L296();
  L335(dx429):
    nm16 = ld nm;
    check L1515() else D475();
  L1257():
    dx337 = getTryDispatchBuiltinValue(dr222);
    goto L272(r751, dx337);
  L1258():
    ind19 = force? ind18;
    ___10 = ldf `[<-` in base;
    r756 = dyn ___10(l34, r751, ind19);
    goto L272(r753, r756);
  L1282():
    dx345 = getTryDispatchBuiltinValue(dr230);
    goto L281(dx345);
  L1283():
    ind21 = force? ind20;
    __73 = ldf `[` in base;
    r778 = dyn __73(mask42, ind21);
    goto L281(r778);
  L1284():
    goto L280(r779);
  L1287():
    l35 = ld coef;
    c337 = `is.object`(l35);
    if c337 then L1288() else L1289(r782, l35);
  L1315():
    oldcode1 = force? oldcode;
    checkMissing(oldcode1);
    l38 = ld res;
    c344 = `is.object`(l38);
    if c344 then L1317() else L1318(oldcode1, l38);
  L1336():
    goto L292(C_ARIMA_Gradtrans1, r814);
  L1343():
    mask52 = force? mask51;
    __77 = ldf `[` in base;
    r816 = dyn __77(A3, mask50, mask52);
    goto L293(r816);
  L1346():
    A5 = force? A4;
    checkMissing(A5);
    solve1 = ldf solve;
    check L1347() else D392();
  L1350():
    C_ARIMA_undoPars = ld C_ARIMA_undoPars;
    check L1352() else D395();
  L1351():
    r825 = dyn base92(<sym C_ARIMA_undoPars>, <sym coef>, <sym arma>);
    goto L295(r825);
  L1466():
    dx412 = getTryDispatchBuiltinValue(dr286);
    goto L1463(dx412);
  L1467():
    coef34 = force? coef33;
    checkMissing(coef34);
    c379 = `is.object`(coef34);
    if c379 then L1468() else L1469(coef34);
  L1511():
    dr298 = tryDispatchBuiltin.1("[", nm13);
    dc149 = getTryDispatchBuiltinDispatched(dr298);
    if dc149 then L1513() else L1512(dr298);
  L1512(nm15):
    mask59 = ld mask;
    check L1514() else D474();
  L1522():
    st var = r979;
    goto L337();
  L1527():
    dx432 = getTryDispatchBuiltinValue(dr302);
    goto L338(dx432);
  L1528():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l52 = ld resid;
    tsp__1 = ldf `tsp<-`;
    check L1529() else D482();
  D392():
    deopt 1558 [];
  D395():
    deopt 1566 [C_ARIMA_undoPars];
  D474():
    deopt 1840 [nm15, mask59];
  D475():
    deopt 1843 [nm16];
  D482():
    deopt 1866 [xtsp1, l52, xtsp1];
  L283(r786, dx350):
    st coef = dx350;
    goto L284(r786);
  L327(dx415):
    ___14 = ldf `%*%` in base;
    r954 = dyn ___14(dx413, dx415);
    check L1472() else D453();
  L1288():
    dr234 = tryDispatchBuiltin.0("[<-", l35, r782);
    dc117 = getTryDispatchBuiltinDispatched(dr234);
    if dc117 then L1290() else L1289(r782, dr234);
  L1289(r784, l37):
    ind24 = ld ind;
    check L1291() else D373();
  L1316(dx366):
    st res = dx366;
    res44 = ld res;
    check L1320() else D382();
  L1317():
    dr246 = tryDispatchBuiltin.0("$<-", l38, oldcode1);
    dc123 = getTryDispatchBuiltinDispatched(dr246);
    if dc123 then L1319() else L1318(oldcode1, dr246);
  L1318(oldcode3, l40):
    r807 = `$<-`(l40, <sym convergence>, oldcode1);
    goto L1316(r807);
  L1347():
    p94 = prom<V +>{
      res48 = ld res;
      res49 = force? res48;
      checkMissing(res49);
      c348 = `is.object`(res49);
      if c348 then L1() else L2(res49);
    L0(dx379):
      n_used4 = ld `n.used`;
      n_used5 = force? n_used4;
      checkMissing(n_used5);
      r820 = `*`(dx379, n_used5);
      return r820;
    L1():
      dr254 = tryDispatchBuiltin.1("$", res49);
      dc127 = getTryDispatchBuiltinDispatched(dr254);
      if dc127 then L3() else L2(dr254);
    L2(res51):
      r819 = `$`(res51, <sym hessian>);
      goto L0(r819);
    L3():
      dx378 = getTryDispatchBuiltinValue(dr254);
      goto L0(dx378);
    };
    p95 = prom<V +>{
      A6 = ld A;
      A7 = force? A6;
      checkMissing(A7);
      return A7;
    };
    r823 = dyn solve1(p94, p95);
    check L1348() else D393();
  L1352():
    C_ARIMA_undoPars1 = force? C_ARIMA_undoPars;
    checkMissing(C_ARIMA_undoPars1);
    coef25 = ld coef;
    check L1353() else D396();
  L1468():
    dr288 = tryDispatchBuiltin.1("[", coef34);
    dc144 = getTryDispatchBuiltinDispatched(dr288);
    if dc144 then L1470() else L1469(dr288);
  L1469(coef36):
    ind26 = ld ind;
    check L1471() else D452();
  L1513():
    dx428 = getTryDispatchBuiltinValue(dr298);
    goto L335(dx428);
  L1514():
    mask60 = force? mask59;
    __93 = ldf `[` in base;
    r976 = dyn __93(nm15, mask60);
    goto L335(r976);
  L1515():
    nm17 = force? nm16;
    checkMissing(nm17);
    c386 = `is.object`(nm17);
    if c386 then L1516() else L1517(nm17);
  L1529():
    r982 = dyn tsp__1(l52, NULL, xtsp1);
    check L1530() else D483();
  D373():
    deopt 1482 [r784, l37, r782, ind24];
  D382():
    deopt 1525 [res44];
  D393():
    deopt 1561 [r823];
  D396():
    deopt 1567 [C_ARIMA_undoPars1, coef25];
  D452():
    deopt 1776 [coef36, ind26];
  D453():
    deopt 1780 [r954];
  D483():
    deopt 1868 [xtsp1, r982];
  L336(dx431):
    list8 = ldf list in base;
    r978 = dyn list8(dx429, dx431);
    check L1520() else D477();
  L1290():
    dx349 = getTryDispatchBuiltinValue(dr234);
    goto L283(r782, dx349);
  L1291():
    ind25 = force? ind24;
    ___11 = ldf `[<-` in base;
    r787 = dyn ___11(l37, r782, ind25);
    goto L283(r784, r787);
  L1319():
    dx365 = getTryDispatchBuiltinValue(dr246);
    goto L1316(dx365);
  L1320():
    res45 = force? res44;
    checkMissing(res45);
    c345 = `is.object`(res45);
    if c345 then L1322() else L1323(res45);
  L1348():
    crossprod = ldf crossprod in base;
    r824 = dyn crossprod(A5, r823);
    check L1349() else D394();
  L1353():
    coef26 = force? coef25;
    checkMissing(coef26);
    arma131 = ld arma;
    check L1354() else D397();
  L1470():
    dx414 = getTryDispatchBuiltinValue(dr288);
    goto L327(dx414);
  L1471():
    ind27 = force? ind26;
    __91 = ldf `[` in base;
    r953 = dyn __91(coef36, ind27);
    goto L327(r953);
  L1472():
    l44 = ld coef;
    c380 = `is.object`(l44);
    if c380 then L1473() else L1474(r954, l44);
  L1516():
    dr300 = tryDispatchBuiltin.1("[", nm17);
    dc150 = getTryDispatchBuiltinDispatched(dr300);
    if dc150 then L1518() else L1517(dr300);
  L1517(nm19):
    mask61 = ld mask;
    check L1519() else D476();
  L1530():
    st resid = r982;
    l53 = ld resid;
    class__1 = ldf `class<-`;
    check L1531() else D484();
  D394():
    deopt 1563 [r824];
  D397():
    deopt 1568 [C_ARIMA_undoPars1, coef26, arma131];
  D476():
    deopt 1845 [nm19, mask61];
  D477():
    deopt 1849 [r978];
  D484():
    deopt 1873 ["ts", l53, "ts"];
  L328(dx417):
    st coef = dx417;
    diag = ldf diag;
    check L1477() else D455();
  L1321(dx368):
    l41 = ld coef;
    c346 = `is.object`(l41);
    if c346 then L1325() else L1326(dx368, l41);
  L1322():
    dr248 = tryDispatchBuiltin.1("$", res45);
    dc124 = getTryDispatchBuiltinDispatched(dr248);
    if dc124 then L1324() else L1323(dr248);
  L1323(res47):
    r808 = `$`(res47, <sym par>);
    goto L1321(r808);
  L1349():
    goto L294(r824);
  L1354():
    arma132 = force? arma131;
    checkMissing(arma132);
    vargs6 = dots[coef26, arma132];
    r827 = `.Call`(C_ARIMA_undoPars1, vargs6, <missing>);
    goto L295(r827);
  L1473():
    dr290 = tryDispatchBuiltin.0("[<-", l44, r954);
    dc145 = getTryDispatchBuiltinDispatched(dr290);
    if dc145 then L1475() else L1474(r954, dr290);
  L1474(r956, l46):
    ind28 = ld ind;
    check L1476() else D454();
  L1518():
    dx430 = getTryDispatchBuiltinValue(dr300);
    goto L336(dx430);
  L1519():
    mask62 = force? mask61;
    __94 = ldf `[` in base;
    r977 = dyn __94(nm19, mask62);
    goto L336(r977);
  L1520():
    goto L334(r978);
  L1531():
    r983 = dyn class__1(l53, NULL, "ts");
    check L1532() else D485();
  D454():
    deopt 1782 [r956, l46, r954, ind28];
  D455():
    deopt 1787 [];
  D485():
    deopt 1875 ["ts", r983];
  L289(dx373, dx374):
    st coef = dx374;
    goto L290();
  L1324():
    dx367 = getTryDispatchBuiltinValue(dr248);
    goto L1321(dx367);
  L1325():
    dr250 = tryDispatchBuiltin.0("[<-", l41, dx368);
    dc125 = getTryDispatchBuiltinDispatched(dr250);
    if dc125 then L1327() else L1326(dx368, dr250);
  L1326(dx370, l43):
    mask47 = ld mask;
    check L1328() else D383();
  L1475():
    dx416 = getTryDispatchBuiltinValue(dr290);
    goto L328(dx416);
  L1476():
    ind29 = force? ind28;
    ___15 = ldf `[<-` in base;
    r959 = dyn ___15(l46, r954, ind29);
    goto L328(r959);
  L1477():
    p110 = prom<V +>{
      narma12 = ld narma;
      narma13 = force? narma12;
      checkMissing(narma13);
      ncxreg30 = ld ncxreg;
      ncxreg31 = force? ncxreg30;
      checkMissing(ncxreg31);
      r960 = `+`(narma13, ncxreg31);
      return r960;
    };
    r962 = dyn diag(p110);
    check L1478() else D456();
  L1532():
    st resid = r983;
    structure = ldf structure;
    check L1533() else D486();
  D383():
    deopt 1529 [dx370, l43, dx368, mask47];
  D456():
    deopt 1789 [r962];
  D486():
    deopt 1878 [];
  L1327():
    dx372 = getTryDispatchBuiltinValue(dr250);
    goto L289(dx368, dx372);
  L1328():
    mask48 = force? mask47;
    ___12 = ldf `[<-` in base;
    r809 = dyn ___12(l43, dx368, mask48);
    goto L289(dx370, r809);
  L1478():
    st A = r962;
    S8 = ld S;
    check L1479() else D457();
  L1533():
    p112 = prom<V +>{
      sym102 = ldf list;
      base102 = ldf list in base;
      guard102 = `==`.4(sym102, base102);
      if guard102 then L1() else L2();
    L0(r985):
      return r985;
    L1():
      coef37 = ld coef;
      coef38 = force? coef37;
      checkMissing(coef38);
      sigma2 = ld sigma2;
      sigma3 = force? sigma2;
      checkMissing(sigma3);
      var2 = ld var;
      var3 = force? var2;
      checkMissing(var3);
      mask63 = ld mask;
      mask64 = force? mask63;
      checkMissing(mask64);
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      r986 = `*`(-0.5, value6);
      aic = ld aic;
      aic1 = force? aic;
      checkMissing(aic1);
      arma167 = ld arma;
      arma168 = force? arma167;
      checkMissing(arma168);
      resid = ld resid;
      resid1 = force? resid;
      checkMissing(resid1);
      match_call = ldf `match.call`;
      r987 = dyn match_call();
      series = ld series;
      series1 = force? series;
      checkMissing(series1);
      res60 = ld res;
      res61 = force? res60;
      checkMissing(res61);
      c388 = `is.object`(res61);
      if c388 then L4() else L5(res61);
    L2():
      r984 = dyn base102[coef, sigma2, `var.coef`, mask, loglik, aic, arma, residuals, call, series, code, `n.cond`, nobs, model](<sym coef>, <sym sigma2>, <sym var>, <sym mask>, <lang `*`(`-`(0.5), value)>, <sym aic>, <sym arma>, <sym resid>, <lang match.call()>, <sym series>, <lang `$`(res, convergence)>, <sym ncond>, <sym n.used>, <sym mod>);
      goto L0(r984);
    L3(dx435):
      ncond17 = ld ncond;
      ncond18 = force? ncond17;
      checkMissing(ncond18);
      n_used19 = ld `n.used`;
      n_used20 = force? n_used19;
      checkMissing(n_used20);
      mod6 = ld mod;
      mod7 = force? mod6;
      checkMissing(mod7);
      list9 = ldf list in base;
      r989 = dyn list9(coef38, sigma3, var3, mask64, r986, aic1, arma168, resid1, r987, series1, dx435, ncond18, n_used20, mod7);
      goto L0(r989);
    L4():
      dr304 = tryDispatchBuiltin.1("$", res61);
      dc152 = getTryDispatchBuiltinDispatched(dr304);
      if dc152 then L6() else L5(dr304);
    L5(res63):
      r988 = `$`(res63, <sym convergence>);
      goto L3(r988);
    L6():
      dx434 = getTryDispatchBuiltinValue(dr304);
      goto L3(dx434);
    };
    r991 = dyn structure[, class](p112, "Arima");
    check L1534() else D487();
  D457():
    deopt 1791 [S8];
  D487():
    deopt 1882 [r991];
  L1479():
    S9 = force? S8;
    checkMissing(S9);
    c381 = `is.object`(S9);
    if c381 then L1481() else L1482(S9);
  L1534():
    popenv;
    return r991;
  L1480(dx419):
    l47 = ld A;
    c382 = `is.object`(l47);
    if c382 then L1484() else L1485(dx419, l47);
  L1481():
    dr292 = tryDispatchBuiltin.1("$", S9);
    dc146 = getTryDispatchBuiltinDispatched(dr292);
    if dc146 then L1483() else L1482(dr292);
  L1482(S11):
    r963 = `$`(S11, <sym v>);
    goto L1480(r963);
  L329(dx425):
    st A = dx425;
    A8 = ld A;
    check L1489() else D460();
  L1483():
    dx418 = getTryDispatchBuiltinValue(dr292);
    goto L1480(dx418);
  L1484():
    dr294 = tryDispatchBuiltin.0("[<-", l47, dx419);
    dc147 = getTryDispatchBuiltinDispatched(dr294);
    if dc147 then L1486() else L1485(dx419, dr294);
  L1485(dx421, l49):
    ind30 = ld ind;
    check L1487() else D458();
  D458():
    deopt 1795 [dx421, l49, dx419, ind30];
  D460():
    deopt 1800 [A8];
  L1486():
    dx423 = getTryDispatchBuiltinValue(dr294);
    goto L329(dx423);
  L1487():
    ind31 = force? ind30;
    ind32 = ld ind;
    check L1488() else D459();
  L1489():
    A9 = force? A8;
    checkMissing(A9);
    c383 = `is.object`(A9);
    if c383 then L1490() else L1491(A9);
  D459():
    deopt 1796 [dx421, l49, dx419, ind31, ind32];
  L330(dx427):
    st A = dx427;
    A12 = ld A;
    check L1495() else D463();
  L1488():
    ind33 = force? ind32;
    ___16 = ldf `[<-` in base;
    r964 = dyn ___16(l49, dx419, ind31, ind33);
    goto L329(r964);
  L1490():
    dr296 = tryDispatchBuiltin.1("[", A9);
    dc148 = getTryDispatchBuiltinDispatched(dr296);
    if dc148 then L1492() else L1491(dr296);
  L1491(A11):
    mask55 = ld mask;
    check L1493() else D461();
  D461():
    deopt 1802 [A11, mask55];
  D463():
    deopt 1809 [A12];
  L1492():
    dx426 = getTryDispatchBuiltinValue(dr296);
    goto L330(dx426);
  L1493():
    mask56 = force? mask55;
    mask57 = ld mask;
    check L1494() else D462();
  L1495():
    A13 = force? A12;
    checkMissing(A13);
    var = ld var;
    check L1496() else D464();
  D462():
    deopt 1803 [A11, mask56, mask57];
  D464():
    deopt 1811 [var];
  L1494():
    mask58 = force? mask57;
    __92 = ldf `[` in base;
    r965 = dyn __92(A11, mask56, mask58);
    goto L330(r965);
  L1496():
    var1 = force? var;
    checkMissing(var1);
    ___17 = ldf `%*%` in base;
    r966 = dyn ___17(A13, var1);
    check L1497() else D465();
  D465():
    deopt 1814 [r966];
  L1497():
    t = ldf t;
    check L1498() else D466();
  D466():
    deopt 1816 [];
  L1498():
    p111 = prom<V +>{
      A14 = ld A;
      A15 = force? A14;
      checkMissing(A15);
      return A15;
    };
    r968 = dyn t(p111);
    check L1499() else D467();
  D467():
    deopt 1818 [r968];
  L1499():
    ___18 = ldf `%*%` in base;
    r969 = dyn ___18(r966, r968);
    check L1500() else D468();
  D468():
    deopt 1820 [r969];
  L1500():
    st var = r969;
    goto L331(r969);
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_TSconv:*, reg C_TSconv1:V, reg a1:*, reg a2:V, reg b1:*, reg b2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st a = a;
    st b = b;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_TSconv = ld C_TSconv;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_TSconv>, <sym a>, <sym b>);
    goto L0(r);
  D0():
    deopt 1 [C_TSconv];
  L3():
    C_TSconv1 = force? C_TSconv;
    checkMissing(C_TSconv1);
    a1 = ld a;
    check L4() else D1();
  D1():
    deopt 2 [C_TSconv1, a1];
  L4():
    a2 = force? a1;
    checkMissing(a2);
    b1 = ld b;
    check L5() else D2();
  D2():
    deopt 3 [C_TSconv1, a2, b1];
  L5():
    b2 = force? b1;
    checkMissing(b2);
    vargs = dots[a2, b2];
    r2 = `.Call`(C_TSconv1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner4232768843(mod, phi, theta) {
  (reg mod:*, reg phi:*, reg theta:*) -+> V { var mod:*, var phi:*, var theta:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg phi1:*, reg phi2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg theta1:*, reg theta2:V, reg length1:cls, reg r5:V, reg phi3:*, reg phi4:V, reg l:*, reg c:L, reg phi6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg theta3:*, reg theta4:V, reg l3:*, reg c1:L, reg theta6:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg p:*, reg p1:V, reg q:*, reg q1:V, reg r10:V, reg max:cls, reg r11:V, reg p2:*, reg p3:V, reg r12:V, reg c2:L, reg phi9:*, reg phi10:V, reg l6:*, reg c3:L, reg phi13:V, reg l9:*, reg phi14:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg phi17:V, reg l12:*, reg phi18:V, reg dx5:V, reg r13:V, reg c4:L, reg phi20:V, reg l14:*, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg phi22:V, reg l16:*, reg dx9:V, reg p4:*, reg p5:V, reg r14:V, reg ___:cls, reg r15:V, reg c5:L, reg phi24:V, reg l18:*, reg dr8:V, reg dc4:L, reg dx10:V, reg phi26:V, reg dx11:V, reg r16:V, reg r17:*, reg r18:V, reg r19:V, reg c6:L, reg SS_G:*, reg SS_G1:V, reg c7:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg C_getQ0:*, reg C_getQ1:V, reg phi28:*, reg phi29:V, reg theta9:*, reg theta10:V, reg vargs:dots, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg C_getQ0bis:*, reg C_getQ0bis1:V, reg phi30:*, reg phi31:V, reg theta11:*, reg theta12:V, reg _Call:cls, reg r25:V, reg l19:*, reg c8:L, reg r28:V, reg l22:*, reg r29:V, reg l23:*, reg dr10:V, reg dc5:L, reg dx12:V, reg r32:V, reg l25:*, reg r33:V, reg dx13:V, reg r34:V, reg c9:L, reg r36:V, reg l27:*, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg r38:V, reg l29:*, reg dx17:V, reg r39:*, reg r40:V, reg r41:V, reg r42:*, reg r43:V, reg r44:V, reg ___1:cls, reg r45:V, reg c10:L, reg r47:V, reg l31:*, reg dr14:V, reg dc7:L, reg dx18:V, reg r49:V, reg dx19:V, reg r50:V, reg p6:*, reg p7:V, reg r52:V, reg c11:L, reg phi32:*, reg phi33:V, reg r53:V, reg r54:V, reg r55:V, reg r56:V, reg l32:*, reg c12:L, reg r59:V, reg l35:*, reg r60:V, reg l36:*, reg dr16:V, reg dc8:L, reg dx20:V, reg r63:V, reg l38:*, reg r64:V, reg dx21:V, reg r65:V, reg c13:L, reg r67:V, reg l40:*, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg r69:V, reg l42:*, reg dx25:V, reg ___2:cls, reg r70:V, reg c14:L, reg r72:V, reg l44:*, reg dr20:V, reg dc10:L, reg dx26:V, reg r74:V, reg dx27:V, reg r75:V, reg l45:*, reg c15:L, reg r78:R, reg l48:*, reg r79:R, reg l49:*, reg dr22:V, reg dc11:L, reg dx28:V, reg r82:R, reg l51:*, reg r83:R, reg dx29:V, reg r84:V, reg c16:L, reg r86:R, reg l53:*, reg dr24:V, reg dc12:L, reg dx32:V, reg r88:R, reg l55:*, reg dx33:V, reg ___3:cls, reg r89:V, reg c17:L, reg r91:R, reg l57:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r94:V, reg mod1:*, reg mod2:V |
    mkenv;
    st mod = mod;
    st phi = phi;
    st theta = theta;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st p = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    phi1 = ld phi;
    check L18() else D0();
  L17():
    r = dyn base(<sym phi>);
    goto L0(r);
  D0():
    deopt 2 [phi1];
  L1(r4):
    st q = r4;
    phi3 = ld phi;
    check L24() else D4();
  L18():
    phi2 = force? phi1;
    checkMissing(phi2);
    length = ldf length in base;
    r2 = dyn length(phi2);
    check L19() else D1();
  L20():
    theta1 = ld theta;
    check L22() else D2();
  L21():
    r3 = dyn base1(<sym theta>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [theta1];
  D4():
    deopt 14 [phi3];
  L19():
    goto L0(r2);
  L22():
    theta2 = force? theta1;
    checkMissing(theta2);
    length1 = ldf length in base;
    r5 = dyn length1(theta2);
    check L23() else D3();
  L24():
    phi4 = force? phi3;
    checkMissing(phi4);
    l = ld mod;
    c = `is.object`(l);
    if c then L26() else L27(phi4, l);
  D3():
    deopt 12 [r5];
  L23():
    goto L1(r5);
  L25(dx1):
    st mod = dx1;
    theta3 = ld theta;
    check L29() else D5();
  L26():
    dr = tryDispatchBuiltin.0("$<-", l, phi4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(phi4, dr);
  L27(phi6, l2):
    r6 = `$<-`(l2, <sym phi>, phi4);
    goto L25(r6);
  D5():
    deopt 19 [theta3];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(dx);
  L29():
    theta4 = force? theta3;
    checkMissing(theta4);
    l3 = ld mod;
    c1 = `is.object`(l3);
    if c1 then L31() else L32(theta4, l3);
  L30(dx3):
    st mod = dx3;
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L31():
    dr2 = tryDispatchBuiltin.0("$<-", l3, theta4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(theta4, dr2);
  L32(theta6, l5):
    r7 = `$<-`(l5, <sym theta>, theta4);
    goto L30(r7);
  L2(r9):
    st r = r9;
    p2 = ld p;
    check L39() else D9();
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx2);
  L34():
    p = ld p;
    check L36() else D6();
  L35():
    r8 = dyn base2(<sym p>, <lang `+`(q, 1)>);
    goto L2(r8);
  D6():
    deopt 26 [p];
  D9():
    deopt 35 [p2];
  L36():
    p1 = force? p;
    checkMissing(p1);
    q = ld q;
    check L37() else D7();
  L39():
    p3 = force? p2;
    checkMissing(p3);
    r12 = `>`(p3, 0.0);
    c2 = `as.logical`(r12);
    if c2 then L40() else L3();
  D7():
    deopt 28 [q];
  L3():
    goto L5();
  L5():
    r17 = ld r;
    check L55() else D12();
  L37():
    q1 = force? q;
    checkMissing(q1);
    r10 = `+`(q1, 1);
    max = ldf max in base;
    r11 = dyn max(p1, r10);
    check L38() else D8();
  L40():
    phi9 = ld phi;
    check L41() else D10();
  D8():
    deopt 33 [r11];
  D10():
    deopt 39 [phi9];
  D12():
    deopt 55 [r17];
  L38():
    goto L2(r11);
  L41():
    phi10 = force? phi9;
    checkMissing(phi10);
    l6 = ld mod;
    c3 = `is.object`(l6);
    if c3 then L43() else L44(phi10, l6, phi10, l6);
  L55():
    r18 = force? r17;
    checkMissing(r18);
    r19 = `>`(r18, 1);
    c6 = `as.logical`(r19);
    if c6 then L56() else L6();
  L6():
    p6 = ld p;
    check L85() else D23();
  L11():
    l45 = ld mod;
    c15 = `is.object`(l45);
    if c15 then L101() else L102(0.0, l45, 0.0, l45);
  L42(phi17, l12, phi18, dx5):
    c4 = `is.object`(dx5);
    if c4 then L46() else L47(phi17, l12, dx5);
  L43():
    dr4 = tryDispatchBuiltin.1("$", l6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(phi10, l6, phi10, dr4);
  L44(phi13, l9, phi14, l10):
    r13 = `$`(l10, <sym T>);
    goto L42(phi13, l9, phi14, r13);
  L56():
    SS_G = ld `SS.G`;
    check L57() else D13();
  D13():
    deopt 59 [SS_G];
  D23():
    deopt 93 [p6];
  L4(phi22, l16, dx9):
    c5 = `is.object`(l16);
    if c5 then L51() else L52(phi22, l16);
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L42(phi10, l6, phi10, dx4);
  L46():
    dr6 = tryDispatchBuiltin.0("[<-", dx5, phi18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(phi17, l12, dr6);
  L47(phi20, l14, dx7):
    p4 = ld p;
    check L49() else D11();
  L57():
    SS_G1 = force? SS_G;
    checkMissing(SS_G1);
    c7 = `as.logical`(SS_G1);
    if c7 then L58() else L7();
  L85():
    p7 = force? p6;
    checkMissing(p7);
    r52 = `>`(p7, 0.0);
    c11 = `as.logical`(r52);
    if c11 then L86() else L12();
  L100(r82, l51, r83, dx29):
    c16 = `is.object`(dx29);
    if c16 then L104() else L105(r82, l51);
  L101():
    dr22 = tryDispatchBuiltin.1("$", l45);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L103() else L102(0.0, l45, 0.0, dr22);
  L102(r78, l48, r79, l49):
    r84 = `$`(l49, <sym a>);
    goto L100(r78, l48, r79, r84);
  D11():
    deopt 46 [phi20, l14, dx7, phi18, 1, p4];
  L7():
    sym4 = ldf `.Call`;
    base4 = ldf `.Call` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L9(r23):
    l19 = ld mod;
    c8 = `is.object`(l19);
    if c8 then L72() else L73(r23, l19, r23, l19);
  L12():
    goto L13(1.0);
  L13(r56):
    l32 = ld mod;
    c12 = `is.object`(l32);
    if c12 then L90() else L91(r56, l32, r56, l32);
  L15(r88, l55, dx33):
    c17 = `is.object`(l55);
    if c17 then L108() else L109(r88, l55);
  L48():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L4(phi17, l12, dx8);
  L49():
    p5 = force? p4;
    checkMissing(p5);
    r14 = `:`(1, p5);
    ___ = ldf `[<-` in base;
    r15 = dyn ___(dx7, phi18, r14, 1);
    goto L4(phi20, l14, r15);
  L50(phi26, dx11):
    st mod = dx11;
    goto L5();
  L51():
    dr8 = tryDispatchBuiltin.0("$<-", l16, dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(phi22, dr8);
  L52(phi24, l18):
    r16 = `$<-`(l18, <sym T>, dx9);
    goto L50(phi24, r16);
  L58():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L86():
    phi32 = ld phi;
    check L87() else D24();
  L103():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L100(0.0, l45, 0.0, dx28);
  L104():
    dr24 = tryDispatchBuiltin.0("[<-", dx29, r83);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L106() else L105(r82, l51);
  L105(r86, l53):
    ___3 = ldf `[<-` in base;
    r89 = dyn ___3(dx29, <missing>, r83);
    goto L15(r86, l53, r89);
  D24():
    deopt 99 [1.0, 1.0, phi32];
  L8(r21):
    goto L9(r21);
  L53():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L50(phi22, dx10);
  L59():
    C_getQ0 = ld C_getQ0;
    check L61() else D14();
  L60():
    r20 = dyn base3(<sym C_getQ0>, <sym phi>, <sym theta>);
    goto L8(r20);
  L65():
    C_getQ0bis = ld C_getQ0bis;
    check L67() else D17();
  L66():
    r24 = dyn base4[, , , tol](<sym C_getQ0bis>, <sym phi>, <sym theta>, 0.0);
    goto L9(r24);
  L71(r32, l25, r33, dx13):
    c9 = `is.object`(dx13);
    if c9 then L75() else L76(r32, l25, dx13);
  L72():
    dr10 = tryDispatchBuiltin.1("$", l19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L74() else L73(r23, l19, r23, dr10);
  L73(r28, l22, r29, l23):
    r34 = `$`(l23, <sym Pn>);
    goto L71(r28, l22, r29, r34);
  L87():
    phi33 = force? phi32;
    checkMissing(phi33);
    r53 = `^`(phi33, 2.0);
    r54 = `-`(1.0, r53);
    r55 = `/`(1.0, r54);
    goto L13(r55);
  L89(r63, l38, r64, dx21):
    c13 = `is.object`(dx21);
    if c13 then L93() else L94(r63, l38, dx21);
  L90():
    dr16 = tryDispatchBuiltin.1("$", l32);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L92() else L91(r56, l32, r56, dr16);
  L91(r59, l35, r60, l36):
    r65 = `$`(l36, <sym Pn>);
    goto L89(r59, l35, r60, r65);
  L106():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L15(r82, l51, dx32);
  L107(dx35):
    st mod = dx35;
    mod1 = ld mod;
    check L111() else D25();
  L108():
    dr26 = tryDispatchBuiltin.0("$<-", l55, dx33);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L110() else L109(r88, dr26);
  L109(r91, l57):
    r94 = `$<-`(l57, <sym a>, dx33);
    goto L107(r94);
  D14():
    deopt 62 [C_getQ0];
  D17():
    deopt 69 [C_getQ0bis];
  D25():
    deopt 128 [mod1];
  L10(r38, l29, dx17):
    c10 = `is.object`(l29);
    if c10 then L81() else L82(r38, l29);
  L14(r69, l42, dx25):
    c14 = `is.object`(l42);
    if c14 then L97() else L98(r69, l42);
  L61():
    C_getQ1 = force? C_getQ0;
    checkMissing(C_getQ1);
    phi28 = ld phi;
    check L62() else D15();
  L67():
    C_getQ0bis1 = force? C_getQ0bis;
    checkMissing(C_getQ0bis1);
    phi30 = ld phi;
    check L68() else D18();
  L74():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L71(r23, l19, r23, dx12);
  L75():
    dr12 = tryDispatchBuiltin.0("[<-", dx13, r33);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L77() else L76(r32, l25, dr12);
  L76(r36, l27, dx15):
    r39 = ld r;
    check L78() else D21();
  L92():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L89(r56, l32, r56, dx20);
  L93():
    dr18 = tryDispatchBuiltin.0("[<-", dx21, r64);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L95() else L94(r63, l38, dr18);
  L94(r67, l40, dx23):
    ___2 = ldf `[<-` in base;
    r70 = dyn ___2(dx23, r64, 1, 1);
    goto L14(r67, l40, r70);
  L110():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L107(dx34);
  L111():
    mod2 = force? mod1;
    checkMissing(mod2);
    popenv;
    return mod2;
  D15():
    deopt 63 [C_getQ1, phi28];
  D18():
    deopt 71 [phi30];
  D21():
    deopt 84 [r36, l27, dx15, r33, 1, r39];
  L62():
    phi29 = force? phi28;
    checkMissing(phi29);
    theta9 = ld theta;
    check L63() else D16();
  L68():
    phi31 = force? phi30;
    checkMissing(phi31);
    theta11 = ld theta;
    check L69() else D19();
  L77():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L10(r32, l25, dx16);
  L78():
    r40 = force? r39;
    checkMissing(r40);
    r41 = `:`(1, r40);
    r42 = ld r;
    check L79() else D22();
  L80(r49, dx19):
    st mod = dx19;
    goto L11();
  L81():
    dr14 = tryDispatchBuiltin.0("$<-", l29, dx17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L83() else L82(r38, dr14);
  L82(r47, l31):
    r50 = `$<-`(l31, <sym Pn>, dx17);
    goto L80(r47, r50);
  L95():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L14(r63, l38, dx24);
  L96(r74, dx27):
    st mod = dx27;
    goto L11();
  L97():
    dr20 = tryDispatchBuiltin.0("$<-", l42, dx25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L99() else L98(r69, dr20);
  L98(r72, l44):
    r75 = `$<-`(l44, <sym Pn>, dx25);
    goto L96(r72, r75);
  D16():
    deopt 64 [C_getQ1, phi29, theta9];
  D19():
    deopt 73 [theta11];
  D22():
    deopt 87 [r36, l27, dx15, r33, r41, 1, r42];
  L63():
    theta10 = force? theta9;
    checkMissing(theta10);
    vargs = dots[phi29, theta10];
    r22 = `.Call`(C_getQ1, vargs, <missing>);
    goto L8(r22);
  L69():
    theta12 = force? theta11;
    checkMissing(theta12);
    _Call = ldf `.Call` in base;
    r25 = dyn _Call(C_getQ0bis1, phi31, theta12, 0.0);
    check L70() else D20();
  L79():
    r43 = force? r42;
    checkMissing(r43);
    r44 = `:`(1, r43);
    ___1 = ldf `[<-` in base;
    r45 = dyn ___1(dx15, r33, r41, r44);
    goto L10(r36, l27, r45);
  L83():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L80(r38, dx18);
  L99():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L96(r69, dx26);
  D20():
    deopt 78 [r25];
  L70():
    goto L9(r25);
  }
}
fun inner4274529045(y, mod) {
  (reg y:*, reg mod:*) -+> V { var y:*, var mod:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_ARIMA_Like:*, reg C_ARIMA_Like1:V, reg y1:*, reg y2:V, reg mod1:*, reg mod2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st y = y;
    st mod = mod;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_ARIMA_Like = ld C_ARIMA_Like;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_ARIMA_Like>, <sym y>, <sym mod>, 0, TRUE);
    goto L0(r);
  D0():
    deopt 1 [C_ARIMA_Like];
  L3():
    C_ARIMA_Like1 = force? C_ARIMA_Like;
    checkMissing(C_ARIMA_Like1);
    y1 = ld y;
    check L4() else D1();
  D1():
    deopt 2 [C_ARIMA_Like1, y1];
  L4():
    y2 = force? y1;
    checkMissing(y2);
    mod1 = ld mod;
    check L5() else D2();
  D2():
    deopt 3 [C_ARIMA_Like1, y2, mod1];
  L5():
    mod2 = force? mod1;
    checkMissing(mod2);
    vargs = dots[y2, mod2, 0, TRUE];
    r2 = `.Call`(C_ARIMA_Like1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner3178308452(p, trans) {
  (reg p:*, reg trans:*) -+> V { var p:*, var trans:*, reg coef:*, reg coef1:V, reg p1:*, reg p2:V, reg l:*, reg c:L, reg p4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg mask:*, reg mask1:V, reg ___:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg C_ARIMA_transPars:*, reg C_ARIMA_transPars1:V, reg par:*, reg par1:V, reg arma:*, reg arma1:V, reg trans1:*, reg trans2:V, reg vargs:dots, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg tryCatch:cls, reg upARIMA:cls, reg mod:*, reg mod1:V, reg p7:p(V +), reg trarma:*, reg trarma1:V, reg c1:L, reg trarma3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r7:V, reg p8:p(V +), reg trarma4:*, reg trarma5:V, reg c2:L, reg trarma7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r9:V, reg p9:p(V +), reg r11:V, reg p10:p(V +), reg r13:cls, reg p11:p(V +), reg r15:V, reg c3:V, reg c4:L, reg _Machine:*, reg _Machine1:V, reg c5:L, reg _Machine3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg ncxreg:*, reg ncxreg1:V, reg r19:V, reg c6:L, reg x:*, reg x1:V, reg xreg:*, reg xreg1:V, reg par2:*, reg par3:V, reg c7:L, reg x3:V, reg par5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg x5:V, reg dx9:V, reg narma:*, reg narma1:V, reg ncxreg2:*, reg ncxreg3:V, reg r20:V, reg r21:V, reg __2:cls, reg r22:V, reg ___1:cls, reg r23:V, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg C_ARIMA_Like:*, reg C_ARIMA_Like1:V, reg x6:*, reg x7:V, reg Z:*, reg Z1:V, reg vargs1:dots, reg r28:V, reg res:*, reg res1:V, reg c8:L, reg res3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r29:V, reg res4:*, reg res5:V, reg c9:L, reg dx13:V, reg res7:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg __4:cls, reg r30:V, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:R, reg r36:V, reg s2:*, reg s3:V, reg r37:V, reg res8:*, reg res9:V, reg c10:L, reg r40:R, reg r41:V, reg res11:V, reg dr14:V, reg dc7:L, reg dx18:V, reg r44:R, reg r45:V, reg dx19:V, reg __5:cls, reg r46:V, reg res12:*, reg res13:V, reg c11:L, reg r49:R, reg r50:V, reg dx21:V, reg res15:V, reg dr16:V, reg dc8:L, reg dx23:V, reg r53:R, reg r54:V, reg dx24:V, reg dx25:V, reg __6:cls, reg r55:V, reg r56:V, reg r57:V, reg r58:V |
    mkenv;
    st p = p;
    st trans = trans;
    coef = ld coef;
    check L14() else D0();
  D0():
    deopt 0 [coef];
  L14():
    coef1 = force? coef;
    checkMissing(coef1);
    st par = coef1;
    p1 = ld p;
    check L15() else D1();
  D1():
    deopt 3 [p1];
  L15():
    p2 = force? p1;
    checkMissing(p2);
    l = ld par;
    c = `is.object`(l);
    if c then L16() else L17(p2, l);
  L0(dx1):
    st par = dx1;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L16():
    dr = tryDispatchBuiltin.0("[<-", l, p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(p2, dr);
  L17(p4, l2):
    mask = ld mask;
    check L19() else D2();
  D2():
    deopt 6 [p4, l2, p2, mask];
  L1(r2):
    st trarma = r2;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L19():
    mask1 = force? mask;
    ___ = ldf `[<-` in base;
    r = dyn ___(l2, p2, mask1);
    goto L0(r);
  L20():
    C_ARIMA_transPars = ld C_ARIMA_transPars;
    check L22() else D3();
  L21():
    r1 = dyn base(<sym C_ARIMA_transPars>, <sym par>, <sym arma>, <sym trans>);
    goto L1(r1);
  D3():
    deopt 11 [C_ARIMA_transPars];
  L2(r5):
    c4 = `as.logical`(r5);
    if c4 then L30() else L3();
  L22():
    C_ARIMA_transPars1 = force? C_ARIMA_transPars;
    checkMissing(C_ARIMA_transPars1);
    par = ld par;
    check L23() else D4();
  L26():
    tryCatch = ldf tryCatch;
    check L28() else D7();
  L27():
    r4 = dyn base1(<lang `<-`(Z, tryCatch(upARIMA(mod, `[[`(trarma, 1), `[[`(trarma, 2)), error=function((e=), NULL, NULL)))>);
    goto L2(r4);
  D4():
    deopt 12 [C_ARIMA_transPars1, par];
  D7():
    deopt 20 [];
  L3():
    ncxreg = ld ncxreg;
    check L38() else D10();
  L23():
    par1 = force? par;
    checkMissing(par1);
    arma = ld arma;
    check L24() else D5();
  L28():
    p10 = prom<V +>{
      upARIMA = ldf upARIMA;
      p7 = prom<V +>{
        mod = ld mod;
        mod1 = force? mod;
        checkMissing(mod1);
        return mod1;
      };
      p8 = prom<V +>{
        trarma = ld trarma;
        trarma1 = force? trarma;
        checkMissing(trarma1);
        c1 = `is.object`(trarma1);
        if c1 then L1() else L2(trarma1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", trarma1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(trarma3):
        __ = ldf `[[` in base;
        r7 = dyn __(trarma3, 1);
        goto L0(r7);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p9 = prom<V +>{
        trarma4 = ld trarma;
        trarma5 = force? trarma4;
        checkMissing(trarma5);
        c2 = `is.object`(trarma5);
        if c2 then L1() else L2(trarma5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", trarma5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(trarma7):
        __1 = ldf `[[` in base;
        r9 = dyn __1(trarma7, 2);
        goto L0(r9);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r11 = dyn upARIMA(p7, p8, p9);
      return r11;
    };
    p11 = prom<V +>{
      r13 = clos inner3708401697;
      return r13;
    };
    r15 = dyn tryCatch[, error](p10, p11);
    check L29() else D8();
  L30():
    _Machine = ld `.Machine`;
    check L31() else D9();
  D5():
    deopt 13 [C_ARIMA_transPars1, par1, arma];
  D8():
    deopt 24 [r15];
  D9():
    deopt 27 [_Machine];
  D10():
    deopt 33 [ncxreg];
  L24():
    arma1 = force? arma;
    checkMissing(arma1);
    trans1 = ld trans;
    check L25() else D6();
  L29():
    st Z = r15;
    c3 = `==`(r15, NULL);
    goto L2(c3);
  L31():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c5 = `is.object`(_Machine1);
    if c5 then L33() else L34(_Machine1);
  L38():
    ncxreg1 = force? ncxreg;
    checkMissing(ncxreg1);
    r19 = `>`(ncxreg1, 0.0);
    c6 = `as.logical`(r19);
    if c6 then L39() else L5();
  D6():
    deopt 14 [C_ARIMA_transPars1, par1, arma1, trans1];
  L5():
    goto L7();
  L7():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L25():
    trans2 = force? trans1;
    checkMissing(trans2);
    vargs = dots[par1, arma1, trans2];
    r3 = `.Call`(C_ARIMA_transPars1, vargs, <missing>);
    goto L1(r3);
  L32(dx7):
    popenv;
    return dx7;
  L33():
    dr6 = tryDispatchBuiltin.1("$", _Machine1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(dr6);
  L34(_Machine3):
    r16 = `$`(_Machine3, <sym double.xmax>);
    goto L32(r16);
  L39():
    x = ld x;
    check L40() else D11();
  D11():
    deopt 37 [x];
  L8(r27):
    st res = r27;
    res = ld res;
    check L55() else D20();
  L35():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx6);
  L40():
    x1 = force? x;
    checkMissing(x1);
    xreg = ld xreg;
    check L41() else D12();
  L50():
    C_ARIMA_Like = ld C_ARIMA_Like;
    check L52() else D17();
  L51():
    r26 = dyn base2(<sym C_ARIMA_Like>, <sym x>, <sym Z>, 0, FALSE);
    goto L8(r26);
  D12():
    deopt 39 [x1, xreg];
  D17():
    deopt 57 [C_ARIMA_Like];
  D20():
    deopt 65 [res];
  L41():
    xreg1 = force? xreg;
    checkMissing(xreg1);
    par2 = ld par;
    check L42() else D13();
  L52():
    C_ARIMA_Like1 = force? C_ARIMA_Like;
    checkMissing(C_ARIMA_Like1);
    x6 = ld x;
    check L53() else D18();
  L55():
    res1 = force? res;
    checkMissing(res1);
    c8 = `is.object`(res1);
    if c8 then L56() else L57(res1);
  D13():
    deopt 41 [x1, par2];
  D18():
    deopt 58 [C_ARIMA_Like1, x6];
  L9(dx11):
    res4 = ld res;
    check L59() else D21();
  L42():
    par3 = force? par2;
    checkMissing(par3);
    c7 = `is.object`(par3);
    if c7 then L43() else L44(x1, par3);
  L53():
    x7 = force? x6;
    checkMissing(x7);
    Z = ld Z;
    check L54() else D19();
  L56():
    dr10 = tryDispatchBuiltin.1("[", res1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L58() else L57(dr10);
  L57(res3):
    __3 = ldf `[` in base;
    r29 = dyn __3(res3, 1);
    goto L9(r29);
  D19():
    deopt 59 [C_ARIMA_Like1, x7, Z];
  D21():
    deopt 69 [dx11, res4];
  L6(x5, dx9):
    ___1 = ldf `%*%` in base;
    r23 = dyn ___1(xreg1, dx9);
    check L48() else D16();
  L43():
    dr8 = tryDispatchBuiltin.1("[", par3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(x1, dr8);
  L44(x3, par5):
    narma = ld narma;
    check L46() else D14();
  L54():
    Z1 = force? Z;
    checkMissing(Z1);
    vargs1 = dots[x7, Z1, 0, FALSE];
    r28 = `.Call`(C_ARIMA_Like1, vargs1, <missing>);
    goto L8(r28);
  L58():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L59():
    res5 = force? res4;
    checkMissing(res5);
    c9 = `is.object`(res5);
    if c9 then L60() else L61(dx11, res5);
  D14():
    deopt 43 [x3, par5, narma];
  D16():
    deopt 51 [x5, r23];
  L10(dx16, dx17):
    r31 = `/`(dx16, dx17);
    st s2 = r31;
    sym3 = ldf log;
    base3 = ldf log in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L45():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(x1, dx8);
  L46():
    narma1 = force? narma;
    checkMissing(narma1);
    ncxreg2 = ld ncxreg;
    check L47() else D15();
  L48():
    r24 = `-`(x5, r23);
    st x = r24;
    goto L7();
  L60():
    dr12 = tryDispatchBuiltin.1("[", res5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L62() else L61(dx11, dr12);
  L61(dx13, res7):
    __4 = ldf `[` in base;
    r30 = dyn __4(res7, 3);
    goto L10(dx13, r30);
  D15():
    deopt 45 [x3, par5, narma1, 1, ncxreg2];
  L11(r35, r36):
    res8 = ld res;
    check L66() else D23();
  L47():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r20 = `:`(1, ncxreg3);
    r21 = `+`(narma1, r20);
    __2 = ldf `[` in base;
    r22 = dyn __2(par5, r21);
    goto L6(x3, r22);
  L62():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx11, dx15);
  L63():
    s2 = ld s2;
    check L65() else D22();
  L64():
    r34 = dyn base3(<sym s2>);
    goto L11(0.5, r34);
  D22():
    deopt 78 [0.5, s2];
  D23():
    deopt 80 [r35, r36, res8];
  L65():
    s3 = force? s2;
    checkMissing(s3);
    r37 = log(s3, 2.718281828459045);
    goto L11(0.5, r37);
  L66():
    res9 = force? res8;
    checkMissing(res9);
    c10 = `is.object`(res9);
    if c10 then L67() else L68(r35, r36, res9);
  L12(r44, r45, dx19):
    res12 = ld res;
    check L70() else D24();
  L67():
    dr14 = tryDispatchBuiltin.1("[", res9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L69() else L68(r35, r36, dr14);
  L68(r40, r41, res11):
    __5 = ldf `[` in base;
    r46 = dyn __5(res11, 2);
    goto L12(r40, r41, r46);
  D24():
    deopt 84 [r44, r45, dx19, res12];
  L69():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L12(r35, r36, dx18);
  L70():
    res13 = force? res12;
    checkMissing(res13);
    c11 = `is.object`(res13);
    if c11 then L71() else L72(r44, r45, dx19, res13);
  L13(r53, r54, dx24, dx25):
    r56 = `/`(dx24, dx25);
    r57 = `+`(r54, r56);
    r58 = `*`(r53, r57);
    popenv;
    return r58;
  L71():
    dr16 = tryDispatchBuiltin.1("[", res13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L73() else L72(r44, r45, dx19, dr16);
  L72(r49, r50, dx21, res15):
    __6 = ldf `[` in base;
    r55 = dyn __6(res15, 3);
    goto L13(r49, r50, dx21, r55);
  L73():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L13(r44, r45, dx19, dx23);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fixed:*, reg fixed1:V, reg as_double:cls, reg r2:V, reg p1:*, reg p2:V, reg l:*, reg c:L, reg p4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg mask:*, reg mask1:V, reg ___:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg C_ARIMA_transPars:*, reg C_ARIMA_transPars1:V, reg par:*, reg par1:V, reg arma:*, reg arma1:V, reg vargs:dots, reg r6:V, reg ncxreg:*, reg ncxreg1:V, reg r7:V, reg c1:L, reg x:*, reg x1:V, reg xreg:*, reg xreg1:V, reg par2:*, reg par3:V, reg c2:L, reg x3:V, reg par5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg x5:V, reg dx3:V, reg narma:*, reg narma1:V, reg ncxreg2:*, reg ncxreg3:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg ___1:cls, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg C_ARIMA_CSS:*, reg C_ARIMA_CSS1:V, reg x6:*, reg x7:V, reg arma2:*, reg arma3:V, reg trarma:*, reg trarma1:V, reg c3:L, reg C_ARIMA_CSS3:V, reg x9:V, reg arma5:V, reg trarma3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg C_ARIMA_CSS5:V, reg x11:V, reg arma7:V, reg dx5:V, reg __1:cls, reg r16:V, reg trarma4:*, reg trarma5:V, reg c4:L, reg C_ARIMA_CSS7:V, reg x13:V, reg arma9:V, reg dx7:V, reg trarma7:V, reg dr6:V, reg dc3:L, reg dx9:V, reg C_ARIMA_CSS9:V, reg x15:V, reg arma11:V, reg dx10:V, reg dx11:V, reg __2:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg C_ARIMA_CSS12:V, reg x18:V, reg arma14:V, reg dx16:V, reg dx17:V, reg r19:V, reg ncond:*, reg ncond1:V, reg as_integer:cls, reg r20:V, reg vargs1:dots, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:R, reg r26:V, reg res:*, reg res1:V, reg r27:V, reg r28:V |
    mkenv;
    st p = p;
    sym = ldf `as.double`;
    base = ldf `as.double` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st par = r1;
    p1 = ld p;
    check L15() else D2();
  L11():
    fixed = ld fixed;
    check L13() else D0();
  L12():
    r = dyn base(<sym fixed>);
    goto L0(r);
  D0():
    deopt 2 [fixed];
  D2():
    deopt 7 [p1];
  L13():
    fixed1 = force? fixed;
    checkMissing(fixed1);
    as_double = ldf `as.double` in base;
    r2 = dyn as_double(fixed1);
    check L14() else D1();
  L15():
    p2 = force? p1;
    checkMissing(p2);
    l = ld par;
    c = `is.object`(l);
    if c then L16() else L17(p2, l);
  D1():
    deopt 5 [r2];
  L1(dx1):
    st par = dx1;
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    goto L0(r2);
  L16():
    dr = tryDispatchBuiltin.0("[<-", l, p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(p2, dr);
  L17(p4, l2):
    mask = ld mask;
    check L19() else D3();
  D3():
    deopt 10 [p4, l2, p2, mask];
  L2(r5):
    st trarma = r5;
    ncxreg = ld ncxreg;
    check L25() else D7();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L19():
    mask1 = force? mask;
    ___ = ldf `[<-` in base;
    r3 = dyn ___(l2, p2, mask1);
    goto L1(r3);
  L20():
    C_ARIMA_transPars = ld C_ARIMA_transPars;
    check L22() else D4();
  L21():
    r4 = dyn base1(<sym C_ARIMA_transPars>, <sym par>, <sym arma>, FALSE);
    goto L2(r4);
  D4():
    deopt 15 [C_ARIMA_transPars];
  D7():
    deopt 22 [ncxreg];
  L22():
    C_ARIMA_transPars1 = force? C_ARIMA_transPars;
    checkMissing(C_ARIMA_transPars1);
    par = ld par;
    check L23() else D5();
  L25():
    ncxreg1 = force? ncxreg;
    checkMissing(ncxreg1);
    r7 = `>`(ncxreg1, 0.0);
    c1 = `as.logical`(r7);
    if c1 then L26() else L3();
  D5():
    deopt 16 [C_ARIMA_transPars1, par];
  L3():
    goto L5();
  L5():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L23():
    par1 = force? par;
    checkMissing(par1);
    arma = ld arma;
    check L24() else D6();
  L26():
    x = ld x;
    check L27() else D8();
  D6():
    deopt 17 [C_ARIMA_transPars1, par1, arma];
  D8():
    deopt 26 [x];
  L6(r15):
    st res = r15;
    sym4 = ldf log;
    base4 = ldf log in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L24():
    arma1 = force? arma;
    checkMissing(arma1);
    vargs = dots[par1, arma1, FALSE];
    r6 = `.Call`(C_ARIMA_transPars1, vargs, <missing>);
    goto L2(r6);
  L27():
    x1 = force? x;
    checkMissing(x1);
    xreg = ld xreg;
    check L28() else D9();
  L37():
    C_ARIMA_CSS = ld C_ARIMA_CSS;
    check L39() else D14();
  L38():
    r14 = dyn base2(<sym C_ARIMA_CSS>, <sym x>, <sym arma>, <lang `[[`(trarma, 1)>, <lang `[[`(trarma, 2)>, <lang as.integer(ncond)>, FALSE);
    goto L6(r14);
  D9():
    deopt 28 [x1, xreg];
  D14():
    deopt 46 [C_ARIMA_CSS];
  L10(r25, r26):
    r28 = `*`(r25, r26);
    popenv;
    return r28;
  L28():
    xreg1 = force? xreg;
    checkMissing(xreg1);
    par2 = ld par;
    check L29() else D10();
  L39():
    C_ARIMA_CSS1 = force? C_ARIMA_CSS;
    checkMissing(C_ARIMA_CSS1);
    x6 = ld x;
    check L40() else D15();
  L54():
    res = ld res;
    check L56() else D21();
  L55():
    r24 = dyn base4(<sym res>);
    goto L10(0.5, r24);
  D10():
    deopt 30 [x1, par2];
  D15():
    deopt 47 [C_ARIMA_CSS1, x6];
  D21():
    deopt 68 [0.5, res];
  L29():
    par3 = force? par2;
    checkMissing(par3);
    c2 = `is.object`(par3);
    if c2 then L30() else L31(x1, par3);
  L40():
    x7 = force? x6;
    checkMissing(x7);
    arma2 = ld arma;
    check L41() else D16();
  L56():
    res1 = force? res;
    checkMissing(res1);
    r27 = log(res1, 2.718281828459045);
    goto L10(0.5, r27);
  D16():
    deopt 48 [C_ARIMA_CSS1, x7, arma2];
  L4(x5, dx3):
    ___1 = ldf `%*%` in base;
    r11 = dyn ___1(xreg1, dx3);
    check L35() else D13();
  L30():
    dr2 = tryDispatchBuiltin.1("[", par3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(x1, dr2);
  L31(x3, par5):
    narma = ld narma;
    check L33() else D11();
  L41():
    arma3 = force? arma2;
    checkMissing(arma3);
    trarma = ld trarma;
    check L42() else D17();
  D11():
    deopt 32 [x3, par5, narma];
  D13():
    deopt 40 [x5, r11];
  D17():
    deopt 49 [C_ARIMA_CSS1, x7, arma3, trarma];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(x1, dx2);
  L33():
    narma1 = force? narma;
    checkMissing(narma1);
    ncxreg2 = ld ncxreg;
    check L34() else D12();
  L35():
    r12 = `-`(x5, r11);
    st x = r12;
    goto L5();
  L42():
    trarma1 = force? trarma;
    checkMissing(trarma1);
    c3 = `is.object`(trarma1);
    if c3 then L43() else L44(C_ARIMA_CSS1, x7, arma3, trarma1);
  D12():
    deopt 34 [x3, par5, narma1, 1, ncxreg2];
  L7(C_ARIMA_CSS5, x11, arma7, dx5):
    trarma4 = ld trarma;
    check L46() else D18();
  L34():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r8 = `:`(1, ncxreg3);
    r9 = `+`(narma1, r8);
    __ = ldf `[` in base;
    r10 = dyn __(par5, r9);
    goto L4(x3, r10);
  L43():
    dr4 = tryDispatchBuiltin.1("[[", trarma1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(C_ARIMA_CSS1, x7, arma3, dr4);
  L44(C_ARIMA_CSS3, x9, arma5, trarma3):
    __1 = ldf `[[` in base;
    r16 = dyn __1(trarma3, 1);
    goto L7(C_ARIMA_CSS3, x9, arma5, r16);
  D18():
    deopt 53 [C_ARIMA_CSS5, x11, arma7, dx5, trarma4];
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(C_ARIMA_CSS1, x7, arma3, dx4);
  L46():
    trarma5 = force? trarma4;
    checkMissing(trarma5);
    c4 = `is.object`(trarma5);
    if c4 then L47() else L48(C_ARIMA_CSS5, x11, arma7, dx5, trarma5);
  L8(C_ARIMA_CSS9, x15, arma11, dx10, dx11):
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L47():
    dr6 = tryDispatchBuiltin.1("[[", trarma5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L49() else L48(C_ARIMA_CSS5, x11, arma7, dx5, dr6);
  L48(C_ARIMA_CSS7, x13, arma9, dx7, trarma7):
    __2 = ldf `[[` in base;
    r17 = dyn __2(trarma7, 2);
    goto L8(C_ARIMA_CSS7, x13, arma9, dx7, r17);
  L9(C_ARIMA_CSS12, x18, arma14, dx16, dx17, r19):
    vargs1 = dots[x18, arma14, dx16, dx17, r19, FALSE];
    r21 = `.Call`(C_ARIMA_CSS12, vargs1, <missing>);
    goto L6(r21);
  L49():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L8(C_ARIMA_CSS5, x11, arma7, dx5, dx9);
  L50():
    ncond = ld ncond;
    check L52() else D19();
  L51():
    r18 = dyn base3(<sym ncond>);
    goto L9(C_ARIMA_CSS9, x15, arma11, dx10, dx11, r18);
  D19():
    deopt 59 [C_ARIMA_CSS9, x15, arma11, dx10, dx11, ncond];
  L52():
    ncond1 = force? ncond;
    checkMissing(ncond1);
    as_integer = ldf `as.integer` in base;
    r20 = dyn as_integer(ncond1);
    check L53() else D20();
  D20():
    deopt 62 [C_ARIMA_CSS9, x15, arma11, dx10, dx11, r20];
  L53():
    goto L9(C_ARIMA_CSS9, x15, arma11, dx10, dx11, r20);
  }
}
fun inner619691793(ar) {
  (reg ar:*) -+> V { var ar:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg which:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg ar1:*, reg ar2:V, reg r4:V, reg c:cls, reg r5:V, reg r6:V, reg p:p(V +), reg r8:V, reg max:cls, reg r9:V, reg r10:V, reg p1:*, reg p2:V, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg ar3:*, reg ar4:V, reg c2:L, reg ar6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p3:*, reg p4:V, reg r22:V, reg __:cls, reg r23:V, reg r24:V, reg c3:cls, reg r25:V, reg polyroot:cls, reg r26:V, reg Mod:cls, reg r27:V, reg r28:V, reg all:cls, reg r29:V |
    mkenv;
    st ar = ar;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r10 = `-`(r1, 1.0);
    st p = r10;
    p1 = ld p;
    check L13() else D3();
  L8():
    which = ldf which;
    check L10() else D0();
  L9():
    r = dyn base(<lang which(`!=`(c(1.0, `-`(ar)), 0.0))>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 11 [p1];
  L10():
    p = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      r6 = `!=`(r3, 0.0);
      return r6;
    L1():
      ar1 = ld ar;
      ar2 = force? ar1;
      checkMissing(ar2);
      r4 = `-`(<missing>, ar2);
      c = ldf c in base;
      r5 = dyn c(1.0, r4);
      goto L0(r5);
    L2():
      r2 = dyn base1(1.0, <lang `-`(ar)>);
      goto L0(r2);
    };
    r8 = dyn which(p);
    check L11() else D1();
  L13():
    p2 = force? p1;
    checkMissing(p2);
    r11 = `!`(p2);
    c1 = `as.logical`(r11);
    if c1 then L14() else L1();
  D1():
    deopt 5 [r8];
  L1():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L11():
    max = ldf max in base;
    r9 = dyn max(r8);
    check L12() else D2();
  L14():
    popenv;
    return TRUE;
  D2():
    deopt 7 [r9];
  L3(r15):
    popenv;
    return r15;
  L12():
    goto L0(r9);
  L17():
    sym3 = ldf Mod;
    base3 = ldf Mod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L18():
    r14 = dyn base2(<lang `>`(Mod(polyroot(c(1.0, `-`(`[`(ar, `:`(1, p)))))), 1.0)>);
    goto L3(r14);
  L4(r17):
    r28 = `>`(r17, 1.0);
    all = ldf all in base;
    r29 = dyn all(r28);
    check L33() else D9();
  L19():
    sym4 = ldf polyroot;
    base4 = ldf polyroot in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L20():
    r16 = dyn base3(<lang polyroot(c(1.0, `-`(`[`(ar, `:`(1, p)))))>);
    goto L4(r16);
  D9():
    deopt 45 [r29];
  L5(r19):
    Mod = ldf Mod in base;
    r27 = dyn Mod(r19);
    check L32() else D8();
  L21():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L23() else L24();
  L22():
    r18 = dyn base4(<lang c(1.0, `-`(`[`(ar, `:`(1, p))))>);
    goto L5(r18);
  L33():
    goto L3(r29);
  D8():
    deopt 41 [r27];
  L6(r21):
    polyroot = ldf polyroot in base;
    r26 = dyn polyroot(r21);
    check L31() else D7();
  L23():
    ar3 = ld ar;
    check L25() else D4();
  L24():
    r20 = dyn base5(1.0, <lang `-`(`[`(ar, `:`(1, p)))>);
    goto L6(r20);
  L32():
    goto L4(r27);
  D4():
    deopt 28 [ar3];
  D7():
    deopt 39 [r26];
  L25():
    ar4 = force? ar3;
    checkMissing(ar4);
    c2 = `is.object`(ar4);
    if c2 then L26() else L27(ar4);
  L31():
    goto L5(r26);
  L7(dx1):
    r24 = `-`(<missing>, dx1);
    c3 = ldf c in base;
    r25 = dyn c3(1.0, r24);
    check L30() else D6();
  L26():
    dr = tryDispatchBuiltin.1("[", ar4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(ar6):
    p3 = ld p;
    check L29() else D5();
  D5():
    deopt 31 [ar6, 1, p3];
  D6():
    deopt 37 [r25];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L29():
    p4 = force? p3;
    checkMissing(p4);
    r22 = `:`(1, p4);
    __ = ldf `[` in base;
    r23 = dyn __(ar6, r22);
    goto L7(r23);
  L30():
    goto L6(r25);
  }
}
fun inner223529780(ma) {
  (reg ma:*) -+> V { var ma:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ma1:*, reg ma2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg which:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg ma3:*, reg ma4:V, reg c:cls, reg r7:V, reg r8:V, reg p:p(V +), reg r10:V, reg max:cls, reg r11:V, reg r12:V, reg q0:*, reg q1:V, reg r13:V, reg c1:L, reg ma5:*, reg ma6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg ma7:*, reg ma8:V, reg c2:L, reg ma10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg q2:*, reg q3:V, reg r20:V, reg __:cls, reg r21:V, reg c3:cls, reg r22:V, reg polyroot:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg roots:*, reg roots1:V, reg Mod:cls, reg r26:V, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg ind:*, reg ind1:V, reg r30:V, reg all:cls, reg r31:V, reg c4:L, reg ma11:*, reg ma12:V, reg q4:*, reg q5:V, reg r34:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg ma13:*, reg ma14:V, reg c6:L, reg r38:R, reg ma16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r40:R, reg dx3:V, reg __1:cls, reg r41:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg q6:*, reg q7:V, reg q8:*, reg q9:V, reg r45:V, reg rep_int:cls, reg r46:V, reg c7:cls, reg r47:V, reg roots2:*, reg roots3:V, reg c8:L, reg r51:R, reg roots5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r53:R, reg dx5:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r54:V, reg r55:V, reg l:*, reg c9:L, reg r57:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r60:V, reg roots6:*, reg roots7:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg i7:I, reg r62:V, reg x1:*, reg x2:V, reg c11:cls, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg i10:I, reg r67:V, reg r68:V, reg x3:*, reg x4:V, reg c12:cls, reg r69:V, reg r70:*, reg r71:V, reg r72:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg r77:V, reg x5:*, reg x6:V, reg c13:L, reg x8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r78:V, reg Re:cls, reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg q10:*, reg q11:V, reg q12:*, reg q13:V, reg r82:V, reg rep_int1:cls, reg r83:V, reg c14:cls, reg r84:V |
    mkenv;
    st ma = ma;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    st q = r1;
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    ma1 = ld ma;
    check L28() else D0();
  L27():
    r = dyn base(<sym ma>);
    goto L0(r);
  D0():
    deopt 2 [ma1];
  L1(r4):
    r12 = `-`(r4, 1);
    st q0 = r12;
    q0 = ld q0;
    check L35() else D5();
  L28():
    ma2 = force? ma1;
    checkMissing(ma2);
    length = ldf length in base;
    r2 = dyn length(ma2);
    check L29() else D1();
  L30():
    which = ldf which;
    check L32() else D2();
  L31():
    r3 = dyn base1(<lang which(`!=`(c(1.0, ma), 0.0))>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [];
  D5():
    deopt 18 [q0];
  L29():
    goto L0(r2);
  L32():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      r8 = `!=`(r6, 0.0);
      return r8;
    L1():
      ma3 = ld ma;
      ma4 = force? ma3;
      checkMissing(ma4);
      c = ldf c in base;
      r7 = dyn c(1.0, ma4);
      goto L0(r7);
    L2():
      r5 = dyn base2(1.0, <sym ma>);
      goto L0(r5);
    };
    r10 = dyn which(p);
    check L33() else D3();
  L35():
    q1 = force? q0;
    checkMissing(q1);
    r13 = `!`(q1);
    c1 = `as.logical`(r13);
    if c1 then L36() else L2();
  D3():
    deopt 12 [r10];
  L2():
    sym3 = ldf polyroot;
    base3 = ldf polyroot in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L33():
    max = ldf max in base;
    r11 = dyn max(r10);
    check L34() else D4();
  L36():
    ma5 = ld ma;
    check L37() else D6();
  D4():
    deopt 14 [r11];
  D6():
    deopt 21 [ma5];
  L4(r17):
    st roots = r17;
    sym5 = ldf Mod;
    base5 = ldf Mod in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L34():
    goto L1(r11);
  L37():
    ma6 = force? ma5;
    checkMissing(ma6);
    popenv;
    return ma6;
  L40():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L41():
    r16 = dyn base3(<lang c(1.0, `[`(ma, `:`(1, q0)))>);
    goto L4(r16);
  L5(r19):
    polyroot = ldf polyroot in base;
    r23 = dyn polyroot(r19);
    check L50() else D10();
  L7(r25):
    r27 = `<`(r25, 1.0);
    st ind = r27;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L42():
    ma7 = ld ma;
    check L44() else D7();
  L43():
    r18 = dyn base4(1.0, <lang `[`(ma, `:`(1, q0))>);
    goto L5(r18);
  L51():
    roots = ld roots;
    check L53() else D11();
  L52():
    r24 = dyn base5(<sym roots>);
    goto L7(r24);
  D7():
    deopt 31 [ma7];
  D10():
    deopt 41 [r23];
  D11():
    deopt 45 [roots];
  L8(r29):
    c4 = `as.logical`(r29);
    if c4 then L59() else L9();
  L44():
    ma8 = force? ma7;
    checkMissing(ma8);
    c2 = `is.object`(ma8);
    if c2 then L45() else L46(ma8);
  L50():
    goto L4(r23);
  L53():
    roots1 = force? roots;
    checkMissing(roots1);
    Mod = ldf Mod in base;
    r26 = dyn Mod(roots1);
    check L54() else D12();
  L55():
    ind = ld ind;
    check L57() else D13();
  L56():
    r28 = dyn base6(<lang `!`(ind)>);
    goto L8(r28);
  D12():
    deopt 48 [r26];
  D13():
    deopt 54 [ind];
  L6(dx1):
    c3 = ldf c in base;
    r22 = dyn c3(1.0, dx1);
    check L49() else D9();
  L9():
    q4 = ld q0;
    check L63() else D16();
  L45():
    dr = tryDispatchBuiltin.1("[", ma8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(ma10):
    q2 = ld q0;
    check L48() else D8();
  L54():
    goto L7(r26);
  L57():
    ind1 = force? ind;
    checkMissing(ind1);
    r30 = `!`(ind1);
    all = ldf all in base;
    r31 = dyn all(r30);
    check L58() else D14();
  L59():
    ma11 = ld ma;
    check L60() else D15();
  D8():
    deopt 34 [ma10, 1, q2];
  D9():
    deopt 39 [r22];
  D14():
    deopt 58 [r31];
  D15():
    deopt 59 [ma11];
  D16():
    deopt 64 [q4];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L48():
    q3 = force? q2;
    checkMissing(q3);
    r20 = `:`(1, q3);
    __ = ldf `[` in base;
    r21 = dyn __(ma10, r20);
    goto L6(r21);
  L49():
    goto L5(r22);
  L58():
    goto L8(r31);
  L60():
    ma12 = force? ma11;
    checkMissing(ma12);
    popenv;
    return ma12;
  L63():
    q5 = force? q4;
    checkMissing(q5);
    r34 = `==`(q5, 1.0);
    c5 = `as.logical`(r34);
    if c5 then L64() else L11();
  L11():
    roots2 = ld roots;
    check L79() else D22();
  L64():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L65() else L66();
  D22():
    deopt 92 [1.0, roots2];
  L12(r36):
    popenv;
    return r36;
  L65():
    ma13 = ld ma;
    check L67() else D17();
  L66():
    r35 = dyn base7(<lang `/`(1.0, `[`(ma, 1))>, <lang rep.int(0.0, `-`(q, q0))>);
    goto L12(r35);
  L79():
    roots3 = force? roots2;
    checkMissing(roots3);
    c8 = `is.object`(roots3);
    if c8 then L80() else L81(1.0, roots3);
  D17():
    deopt 71 [1.0, ma13];
  L16(r53, dx5):
    r55 = `/`(r53, dx5);
    l = ld roots;
    c9 = `is.object`(l);
    if c9 then L84() else L85(r55, l);
  L67():
    ma14 = force? ma13;
    checkMissing(ma14);
    c6 = `is.object`(ma14);
    if c6 then L68() else L69(1.0, ma14);
  L80():
    dr4 = tryDispatchBuiltin.1("[", roots3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L82() else L81(1.0, dr4);
  L81(r51, roots5):
    ind2 = ld ind;
    check L83() else D23();
  D23():
    deopt 94 [r51, roots5, ind2];
  L13(r40, dx3):
    r42 = `/`(r40, dx3);
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L17(dx7):
    st roots = dx7;
    st x = 1.0;
    roots6 = ld roots;
    check L88() else D25();
  L68():
    dr2 = tryDispatchBuiltin.1("[", ma14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(1.0, dr2);
  L69(r38, ma16):
    __1 = ldf `[` in base;
    r41 = dyn __1(ma16, 1);
    goto L13(r38, r41);
  L82():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(1.0, dx4);
  L83():
    ind3 = force? ind2;
    __2 = ldf `[` in base;
    r54 = dyn __2(roots5, ind3);
    goto L16(r51, r54);
  L84():
    dr6 = tryDispatchBuiltin.0("[<-", l, r55);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L86() else L85(r55, dr6);
  L85(r57, l2):
    ind4 = ld ind;
    check L87() else D24();
  D24():
    deopt 99 [r57, l2, r55, ind4];
  D25():
    deopt 106 [roots6];
  L14(r44):
    c7 = ldf c in base;
    r47 = dyn c7(r42, r44);
    check L76() else D21();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(1.0, dx2);
  L71():
    q6 = ld q;
    check L73() else D18();
  L72():
    r43 = dyn base8(0.0, <lang `-`(q, q0)>);
    goto L14(r43);
  L86():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L87():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l2, r55, ind5);
    goto L17(r60);
  L88():
    roots7 = force? roots6;
    checkMissing(roots7);
    s = toForSeq(roots7);
    l3 = length(s);
    i = 0;
    goto L18(i);
  D18():
    deopt 80 [q6];
  D21():
    deopt 87 [r47];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l3, i2);
    if c10 then L89() else L21();
  L73():
    q7 = force? q6;
    checkMissing(q7);
    q8 = ld q0;
    check L74() else D19();
  L76():
    goto L12(r47);
  D19():
    deopt 81 [q7, q8];
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st r = x;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  L74():
    q9 = force? q8;
    checkMissing(q9);
    r45 = `-`(q7, q9);
    rep_int = ldf `rep.int` in base;
    r46 = dyn rep_int(0.0, r45);
    check L75() else D20();
  L89():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  D20():
    deopt 85 [r46];
  L19(i7, r62):
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L94() else L95();
  L22(r75):
    popenv;
    return r75;
  L75():
    goto L14(r46);
  L90():
    x1 = ld x;
    check L92() else D26();
  L91():
    r61 = dyn base9(<sym x>, 0.0);
    goto L19(i2, r61);
  L99():
    sym12 = ldf Re;
    base12 = ldf Re in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L101() else L102();
  L100():
    r74 = dyn base11(<lang Re(`[`(x, `-`(1)))>, <lang rep.int(0.0, `-`(q, q0))>);
    goto L22(r74);
  D26():
    deopt 110 [i2, x1];
  L20(i10, r67, r68):
    r70 = ld r;
    check L98() else D30();
  L23(r77):
    sym13 = ldf `rep.int`;
    base13 = ldf `rep.int` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L108() else L109();
  L92():
    x2 = force? x1;
    checkMissing(x2);
    c11 = ldf c in base;
    r63 = dyn c11(x2, 0.0);
    check L93() else D27();
  L94():
    x3 = ld x;
    check L96() else D28();
  L95():
    r66 = dyn base10(0.0, <sym x>);
    goto L20(i7, r62, r66);
  L101():
    x5 = ld x;
    check L103() else D31();
  L102():
    r76 = dyn base12(<lang `[`(x, `-`(1))>);
    goto L23(r76);
  D27():
    deopt 114 [i2, r63];
  D28():
    deopt 117 [i7, r62, x3];
  D30():
    deopt 120 [i10, r67, r68, r70];
  D31():
    deopt 132 [x5];
  L25(r81):
    c14 = ldf c in base;
    r84 = dyn c14(r77, r81);
    check L113() else D36();
  L93():
    goto L19(i2, r63);
  L96():
    x4 = force? x3;
    checkMissing(x4);
    c12 = ldf c in base;
    r69 = dyn c12(0.0, x4);
    check L97() else D29();
  L98():
    r71 = force? r70;
    checkMissing(r71);
    r72 = `/`(r68, r71);
    r73 = `-`(r67, r72);
    st x = r73;
    goto L18(i10);
  L103():
    x6 = force? x5;
    checkMissing(x6);
    c13 = `is.object`(x6);
    if c13 then L104() else L105(x6);
  L108():
    q10 = ld q;
    check L110() else D33();
  L109():
    r80 = dyn base13(0.0, <lang `-`(q, q0)>);
    goto L25(r80);
  D29():
    deopt 120 [i7, r62, r69];
  D33():
    deopt 142 [q10];
  D36():
    deopt 149 [r84];
  L24(dx9):
    Re = ldf Re in base;
    r79 = dyn Re(dx9);
    check L107() else D32();
  L97():
    goto L20(i7, r62, r69);
  L104():
    dr8 = tryDispatchBuiltin.1("[", x6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(dr8);
  L105(x8):
    __3 = ldf `[` in base;
    r78 = dyn __3(x8, -1);
    goto L24(r78);
  L110():
    q11 = force? q10;
    checkMissing(q11);
    q12 = ld q0;
    check L111() else D34();
  L113():
    goto L22(r84);
  D32():
    deopt 138 [r79];
  D34():
    deopt 143 [q11, q12];
  L106():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L107():
    goto L23(r79);
  L111():
    q13 = force? q12;
    checkMissing(q13);
    r82 = `-`(q11, q13);
    rep_int1 = ldf `rep.int` in base;
    r83 = dyn rep_int1(0.0, r82);
    check L112() else D35();
  D35():
    deopt 147 [r83];
  L112():
    goto L25(r83);
  }
}