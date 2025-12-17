fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg stars:cls, reg mtcars:*, reg mtcars1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg stars1:cls, reg mtcars4:*, reg mtcars5:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c3:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg stars2:cls, reg mtcars8:*, reg mtcars9:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c5:cls, reg r23:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg c6:cls, reg r27:V, reg p7:p(V +), reg r29:V, reg palette:cls, reg rainbow:cls, reg r30:V, reg p8:p(V +), reg r32:V, reg stars3:cls, reg mtcars12:*, reg mtcars13:V, reg c7:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r33:V, reg p9:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg c8:cls, reg r37:V, reg p10:p(V +), reg r39:V, reg stars4:cls, reg mtcars16:*, reg mtcars17:V, reg c9:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r40:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg c10:cls, reg r44:V, reg p12:p(V +), reg r46:V, reg apply:cls, reg USJudgeRatings:*, reg USJudgeRatings1:V, reg p13:p(V +), reg r48:cls, reg p14:p(V +), reg r50:V, reg row_names:cls, reg USJudgeRatings2:*, reg USJudgeRatings3:V, reg p15:p(V +), reg r52:V, reg abbreviate:cls, reg substring:cls, reg Jnam:*, reg Jnam1:V, reg p16:p(V +), reg regexpr:cls, reg Jnam2:*, reg Jnam3:V, reg p17:p(V +), reg r55:V, reg r56:V, reg p18:p(V +), reg r58:V, reg p19:p(V +), reg r60:V, reg stars5:cls, reg USJudge:*, reg USJudge1:V, reg p20:p(V +), reg Jnam4:*, reg Jnam5:V, reg p21:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg c11:cls, reg r65:V, reg p22:p(V +), reg r67:V, reg stars6:cls, reg USJudge2:*, reg USJudge3:V, reg p23:p(V +), reg Snam:*, reg Snam1:V, reg p24:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg c12:cls, reg r72:V, reg p25:p(V +), reg r74:V, reg stars7:cls, reg USJudge4:*, reg USJudge5:V, reg p26:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg r77:V, reg c13:cls, reg r78:V, reg p27:p(V +), reg r80:V, reg text:cls, reg loc:*, reg loc1:V, reg p28:p(V +), reg Snam2:*, reg Snam3:V, reg p29:p(V +), reg r83:V, reg stars8:cls, reg USJudge6:*, reg USJudge7:V, reg p30:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r85:V, reg r86:V, reg c14:cls, reg r87:V, reg p31:p(V +), reg r89:V, reg stars9:cls, reg USJudgeRatings4:*, reg USJudgeRatings5:V, reg p32:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg c15:cls, reg r93:V, reg p33:p(V +), reg p34:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r96:V, reg r97:V, reg c16:cls, reg r98:V, reg p35:p(V +), reg r100:V, reg stars10:cls, reg USJudgeRatings6:*, reg USJudgeRatings7:V, reg p36:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r102:V, reg r103:V, reg c17:cls, reg r104:V, reg p37:p(V +), reg p38:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r107:V, reg r108:V, reg c18:cls, reg r109:V, reg p39:p(V +), reg r111:V, reg stars11:cls, reg USJudgeRatings8:*, reg USJudgeRatings9:V, reg c19:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r112:V, reg p40:p(V +), reg p41:p(V +), reg p42:p(V +), reg p43:p(V +), reg r117:V, reg palette1:cls, reg r118:V, reg stars12:cls, reg cbind:cls, reg r119:V, reg p44:p(V +), reg r121:V, reg r122:V, reg p45:p(V +), reg r124:V, reg p46:p(V +), reg r126:V |
    mkenv;
    r = clos inner1092625633;
    st stars = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    stars = ldf stars;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym grDevices>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      c = `is.object`(mtcars1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", mtcars1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r5 = dyn __(mtcars1, <missing>, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1(14.0, 2.0);
      goto L0(r9);
    L2():
      r7 = dyn base1(14.0, 2.0);
      goto L0(r7);
    };
    r11 = dyn stars[, `key.loc`, main, full](p1, p2, "Motor Trend Cars : stars(*, full = F)", FALSE);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 17 [r11];
  L4():
    goto L0();
  L6():
    stars1 = ldf stars;
    check L7() else D4();
  D4():
    deopt 19 [];
  L7():
    p3 = prom<V +>{
      mtcars4 = ld mtcars;
      mtcars5 = force? mtcars4;
      checkMissing(mtcars5);
      c2 = `is.object`(mtcars5);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", mtcars5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r12 = dyn __1(mtcars5, <missing>, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c3 = ldf c in base;
      r16 = dyn c3(14.0, 1.5);
      goto L0(r16);
    L2():
      r14 = dyn base2(14.0, 1.5);
      goto L0(r14);
    };
    r18 = dyn stars1[, `key.loc`, main, `flip.labels`](p3, p4, "Motor Trend Cars : full stars()", FALSE);
    check L8() else D5();
  D5():
    deopt 27 [r18];
  L8():
    stars2 = ldf stars;
    check L9() else D6();
  D6():
    deopt 29 [];
  L9():
    p5 = prom<V +>{
      mtcars8 = ld mtcars;
      mtcars9 = force? mtcars8;
      checkMissing(mtcars9);
      c4 = `is.object`(mtcars9);
      if c4 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", mtcars9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r19 = dyn __2(mtcars9, <missing>, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c5 = ldf c in base;
      r23 = dyn c5(0.0, 0.0);
      goto L0(r23);
    L2():
      r21 = dyn base3(0.0, 0.0);
      goto L0(r21);
    };
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c6 = ldf c in base;
      r27 = dyn c6(0.0, 0.0);
      goto L0(r27);
    L2():
      r25 = dyn base4(0.0, 0.0);
      goto L0(r25);
    };
    r29 = dyn stars2[, locations, radius, `key.loc`, main, lty](p5, p6, FALSE, p7, "Motor Trend Cars", 2.0);
    check L10() else D7();
  D7():
    deopt 41 [r29];
  L10():
    palette = ldf palette;
    check L11() else D8();
  D8():
    deopt 43 [];
  L11():
    p8 = prom<V +>{
      rainbow = ldf rainbow;
      r30 = dyn rainbow[, s, v](12.0, 0.6, 0.75);
      return r30;
    };
    r32 = dyn palette(p8);
    check L12() else D9();
  D9():
    deopt 45 [r32];
  L12():
    stars3 = ldf stars;
    check L13() else D10();
  D10():
    deopt 47 [];
  L13():
    p9 = prom<V +>{
      mtcars12 = ld mtcars;
      mtcars13 = force? mtcars12;
      checkMissing(mtcars13);
      c7 = `is.object`(mtcars13);
      if c7 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", mtcars13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r33 = dyn __3(mtcars13, <missing>, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r33);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p10 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c8 = ldf c in base;
      r37 = dyn c8(12.0, 1.5);
      goto L0(r37);
    L2():
      r35 = dyn base5(12.0, 1.5);
      goto L0(r35);
    };
    r39 = dyn stars3[, len, `key.loc`, main, `draw.segments`](p9, 0.8, p10, "Motor Trend Cars", TRUE);
    check L14() else D11();
  D11():
    deopt 57 [r39];
  L14():
    stars4 = ldf stars;
    check L15() else D12();
  D12():
    deopt 59 [];
  L15():
    p11 = prom<V +>{
      mtcars16 = ld mtcars;
      mtcars17 = force? mtcars16;
      checkMissing(mtcars17);
      c9 = `is.object`(mtcars17);
      if c9 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", mtcars17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r40 = dyn __4(mtcars17, <missing>, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r40);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p12 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      c10 = ldf c in base;
      r44 = dyn c10(1.5, 0.0);
      goto L0(r44);
    L2():
      r42 = dyn base6(1.5, 0.0);
      goto L0(r42);
    };
    r46 = dyn stars4[, len, `key.loc`, main, `draw.segments`, `frame.plot`, nrow, cex](p11, 0.6, p12, "Motor Trend Cars", TRUE, TRUE, 4.0, 0.7);
    check L16() else D13();
  D13():
    deopt 75 [r46];
  L16():
    apply = ldf apply;
    check L17() else D14();
  D14():
    deopt 77 [];
  L17():
    p13 = prom<V +>{
      USJudgeRatings = ld USJudgeRatings;
      USJudgeRatings1 = force? USJudgeRatings;
      checkMissing(USJudgeRatings1);
      return USJudgeRatings1;
    };
    p14 = prom<V +>{
      r48 = clos inner2501545716;
      return r48;
    };
    r50 = dyn apply(p13, 2.0, p14);
    check L18() else D15();
  D15():
    deopt 81 [r50];
  L18():
    st USJudge = r50;
    row_names = ldf `row.names`;
    check L19() else D16();
  D16():
    deopt 84 [];
  L19():
    p15 = prom<V +>{
      USJudgeRatings2 = ld USJudgeRatings;
      USJudgeRatings3 = force? USJudgeRatings2;
      checkMissing(USJudgeRatings3);
      return USJudgeRatings3;
    };
    r52 = dyn row_names(p15);
    check L20() else D17();
  D17():
    deopt 86 [r52];
  L20():
    st Jnam = r52;
    abbreviate = ldf abbreviate;
    check L21() else D18();
  D18():
    deopt 89 [];
  L21():
    p19 = prom<V +>{
      substring = ldf substring;
      p16 = prom<V +>{
        Jnam = ld Jnam;
        Jnam1 = force? Jnam;
        checkMissing(Jnam1);
        return Jnam1;
      };
      p18 = prom<V +>{
        regexpr = ldf regexpr;
        p17 = prom<V +>{
          Jnam2 = ld Jnam;
          Jnam3 = force? Jnam2;
          checkMissing(Jnam3);
          return Jnam3;
        };
        r55 = dyn regexpr("[,.]", p17);
        r56 = `-`(r55, 1.0);
        return r56;
      };
      r58 = dyn substring(p16, 1.0, p18);
      return r58;
    };
    r60 = dyn abbreviate(p19, 7.0);
    check L22() else D19();
  D19():
    deopt 92 [r60];
  L22():
    st Snam = r60;
    stars5 = ldf stars;
    check L23() else D20();
  D20():
    deopt 95 [];
  L23():
    p20 = prom<V +>{
      USJudge = ld USJudge;
      USJudge1 = force? USJudge;
      checkMissing(USJudge1);
      return USJudge1;
    };
    p21 = prom<V +>{
      Jnam4 = ld Jnam;
      Jnam5 = force? Jnam4;
      checkMissing(Jnam5);
      return Jnam5;
    };
    p22 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      c11 = ldf c in base;
      r65 = dyn c11(13.0, 1.5);
      goto L0(r65);
    L2():
      r63 = dyn base7(13.0, 1.5);
      goto L0(r63);
    };
    r67 = dyn stars5[, labels, scale, `key.loc`, main, len](p20, p21, FALSE, p22, "Judge not ...", 0.8);
    check L24() else D21();
  D21():
    deopt 107 [r67];
  L24():
    stars6 = ldf stars;
    check L25() else D22();
  D22():
    deopt 109 [];
  L25():
    p23 = prom<V +>{
      USJudge2 = ld USJudge;
      USJudge3 = force? USJudge2;
      checkMissing(USJudge3);
      return USJudge3;
    };
    p24 = prom<V +>{
      Snam = ld Snam;
      Snam1 = force? Snam;
      checkMissing(Snam1);
      return Snam1;
    };
    p25 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      c12 = ldf c in base;
      r72 = dyn c12(13.0, 1.5);
      goto L0(r72);
    L2():
      r70 = dyn base8(13.0, 1.5);
      goto L0(r70);
    };
    r74 = dyn stars6[, labels, scale, `key.loc`, radius](p23, p24, FALSE, p25, FALSE);
    check L26() else D23();
  D23():
    deopt 119 [r74];
  L26():
    stars7 = ldf stars;
    check L27() else D24();
  D24():
    deopt 121 [];
  L27():
    p26 = prom<V +>{
      USJudge4 = ld USJudge;
      USJudge5 = force? USJudge4;
      checkMissing(USJudge5);
      return USJudge5;
    };
    p27 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      c13 = ldf c in base;
      r78 = dyn c13(13.0, 1.5);
      goto L0(r78);
    L2():
      r76 = dyn base9(13.0, 1.5);
      goto L0(r76);
    };
    r80 = dyn stars7[, labels, scale, radius, `frame.plot`, `key.loc`, main, len](p26, NULL, FALSE, FALSE, TRUE, p27, "Judge not ...", 1.2);
    check L28() else D25();
  D25():
    deopt 137 [r80];
  L28():
    st loc = r80;
    text = ldf text;
    check L29() else D26();
  D26():
    deopt 140 [];
  L29():
    p28 = prom<V +>{
      loc = ld loc;
      loc1 = force? loc;
      checkMissing(loc1);
      return loc1;
    };
    p29 = prom<V +>{
      Snam2 = ld Snam;
      Snam3 = force? Snam2;
      checkMissing(Snam3);
      return Snam3;
    };
    r83 = dyn text[, , col, cex, xpd](p28, p29, "blue", 0.8, TRUE);
    check L30() else D27();
  D27():
    deopt 149 [r83];
  L30():
    stars8 = ldf stars;
    check L31() else D28();
  D28():
    deopt 151 [];
  L31():
    p30 = prom<V +>{
      USJudge6 = ld USJudge;
      USJudge7 = force? USJudge6;
      checkMissing(USJudge7);
      return USJudge7;
    };
    p31 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r86):
      return r86;
    L1():
      c14 = ldf c in base;
      r87 = dyn c14(13.0, 1.5);
      goto L0(r87);
    L2():
      r85 = dyn base10(13.0, 1.5);
      goto L0(r85);
    };
    r89 = dyn stars8[, `draw.segments`, scale, `key.loc`](p30, TRUE, FALSE, p31);
    check L32() else D29();
  D29():
    deopt 159 [r89];
  L32():
    stars9 = ldf stars;
    check L33() else D30();
  D30():
    deopt 161 [];
  L33():
    p32 = prom<V +>{
      USJudgeRatings4 = ld USJudgeRatings;
      USJudgeRatings5 = force? USJudgeRatings4;
      checkMissing(USJudgeRatings5);
      return USJudgeRatings5;
    };
    p33 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c15 = ldf c in base;
      r93 = dyn c15(0.0, 0.0);
      goto L0(r93);
    L2():
      r91 = dyn base11(0.0, 0.0);
      goto L0(r91);
    };
    p34 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p35 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r97):
      return r97;
    L1():
      c16 = ldf c in base;
      r98 = dyn c16(0.0, 0.0);
      goto L0(r98);
    L2():
      r96 = dyn base12(0.0, 0.0);
      goto L0(r96);
    };
    r100 = dyn stars9[, locations, scale, radius, `col.stars`, `key.loc`, main](p32, p33, FALSE, FALSE, p34, p35, "US Judges rated");
    check L34() else D31();
  D31():
    deopt 175 [r100];
  L34():
    stars10 = ldf stars;
    check L35() else D32();
  D32():
    deopt 177 [];
  L35():
    p36 = prom<V +>{
      USJudgeRatings6 = ld USJudgeRatings;
      USJudgeRatings7 = force? USJudgeRatings6;
      checkMissing(USJudgeRatings7);
      return USJudgeRatings7;
    };
    p37 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r103):
      return r103;
    L1():
      c17 = ldf c in base;
      r104 = dyn c17(0.0, 0.0);
      goto L0(r104);
    L2():
      r102 = dyn base13(0.0, 0.0);
      goto L0(r102);
    };
    p38 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p39 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      c18 = ldf c in base;
      r109 = dyn c18(0.0, 0.0);
      goto L0(r109);
    L2():
      r107 = dyn base14(0.0, 0.0);
      goto L0(r107);
    };
    r111 = dyn stars10[, locations, scale, radius, `col.lines`, `key.loc`, main](p36, p37, FALSE, FALSE, p38, p39, "US Judges rated");
    check L36() else D33();
  D33():
    deopt 191 [r111];
  L36():
    stars11 = ldf stars;
    check L37() else D34();
  D34():
    deopt 193 [];
  L37():
    p40 = prom<V +>{
      USJudgeRatings8 = ld USJudgeRatings;
      USJudgeRatings9 = force? USJudgeRatings8;
      checkMissing(USJudgeRatings9);
      c19 = `is.object`(USJudgeRatings9);
      if c19 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", USJudgeRatings9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r112 = dyn __5(USJudgeRatings9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>);
      goto L0(r112);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p41 = prom<V +>{
      return <int 0, 1>;
    };
    p42 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p43 = prom<V +>{
      return <int 0, 1>;
    };
    r117 = dyn stars11[, locations, scale, `draw.segments`, `col.segments`, `col.stars`, `key.loc`, main](p40, p41, FALSE, TRUE, 0.0, p42, p43, "US Judges 1-10 ");
    check L38() else D35();
  D35():
    deopt 209 [r117];
  L38():
    palette1 = ldf palette;
    check L39() else D36();
  D36():
    deopt 211 [];
  L39():
    r118 = dyn palette1("default");
    check L40() else D37();
  D37():
    deopt 213 [r118];
  L40():
    stars12 = ldf stars;
    check L41() else D38();
  D38():
    deopt 215 [];
  L41():
    p46 = prom<V +>{
      cbind = ldf cbind;
      p44 = prom<V +>{
        r119 = `:`(1.0, 16.0);
        return r119;
      };
      p45 = prom<V +>{
        r121 = `:`(16.0, 1.0);
        r122 = `*`(10.0, r121);
        return r122;
      };
      r124 = dyn cbind(p44, p45);
      return r124;
    };
    r126 = dyn stars12[, `draw.segments`, main](p46, TRUE, "A Joke -- do *not* use symbols on 2D data!");
    check L42() else D39();
  D39():
    deopt 221 [r126];
  L42():
    popenv;
    return r126;
  }
}
fun inner1092625633(x, full, scale, radius, labels, locations, nrow, ncol, len, `key.loc`, `key.labels`, `key.xpd`, xlim, ylim, `flip.labels`, `draw.segments`, `col.segments`, `col.stars`, `col.lines`, axes, `frame.plot`, main, sub, xlab, ylab, cex, lwd, lty, xpd, mar, add, plot, `...`) {
  (reg x:*, reg full:*, reg scale:*, reg radius:*, reg labels:*, reg locations:*, reg nrow:*, reg ncol:*, reg len:*, reg key_loc:*, reg key_labels:*, reg key_xpd:*, reg xlim:*, reg ylim:*, reg flip_labels:*, reg draw_segments:*, reg col_segments:*, reg col_stars:*, reg col_lines:*, reg axes:*, reg frame_plot:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg cex:*, reg lwd:*, reg lty:*, reg xpd:*, reg mar:*, reg add:*, reg plot:*, reg ddd:dots) -+> V { var x:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var radius:*, reg radius_isMissing:L, reg radius_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dimnames:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), var locations:*, reg locations_isMissing:L, reg locations_orDefault:*, var nrow:*, reg nrow_isMissing:L, reg nrow_orDefault:*, var ncol:*, reg ncol_isMissing:L, reg ncol_orDefault:*, var len:*, reg len_isMissing:L, reg len_orDefault:*, var `key.loc`:*, reg key_loc_isMissing:L, reg key_loc_orDefault:*, var `key.labels`:*, reg key_labels_isMissing:L, reg key_labels_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg dimnames1:cls, reg r9:V, reg c1:L, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p1:p(V +), var `key.xpd`:*, reg key_xpd_isMissing:L, reg key_xpd_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var `flip.labels`:*, reg flip_labels_isMissing:L, reg flip_labels_orDefault:*, var `draw.segments`:*, reg draw_segments_isMissing:L, reg draw_segments_orDefault:*, var `col.segments`:*, reg col_segments_isMissing:L, reg col_segments_orDefault:*, reg n_seg:*, reg n_seg1:V, reg r14:V, reg p2:p(V +), var `col.stars`:*, reg col_stars_isMissing:L, reg col_stars_orDefault:*, var `col.lines`:*, reg col_lines_isMissing:L, reg col_lines_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p3:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par:cls, reg r17:V, reg p4:p(V +), var xpd:*, reg xpd_isMissing:L, reg xpd_orDefault:*, var mar:*, reg mar_isMissing:L, reg mar_orDefault:*, reg pmin:cls, reg par1:cls, reg r19:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:R, reg r25:V, reg axes3:*, reg axes4:V, reg r26:V, reg xlab1:*, reg xlab2:V, reg r27:V, reg r28:V, reg axes5:*, reg axes6:V, reg r29:V, reg ylab1:*, reg ylab2:V, reg r30:V, reg r31:V, reg c2:cls, reg r32:V, reg r33:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), var add:*, reg add_isMissing:L, reg add_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `...`:dots?, reg is_data_frame:cls, reg x5:*, reg x6:V, reg p8:p(V +), reg r38:V, reg c3:L, reg data_matrix:cls, reg x7:*, reg x8:V, reg p9:p(V +), reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg x9:*, reg x10:V, reg is_matrix:cls, reg r44:V, reg r45:V, reg c4:L, reg stop:cls, reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg x11:*, reg x12:V, reg is_numeric:cls, reg r49:V, reg r50:V, reg c5:L, reg stop1:cls, reg r51:V, reg nrow1:cls, reg x13:*, reg x14:V, reg p10:p(V +), reg r54:V, reg ncol1:cls, reg x15:*, reg x16:V, reg p11:p(V +), reg r56:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg locations1:*, reg locations2:V, reg c6:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:V, reg nrow2:*, reg nrow3:V, reg c8:V, reg c9:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg ncol2:*, reg ncol3:V, reg is_numeric1:cls, reg r65:V, reg r66:V, reg c10:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg n_loc:*, reg n_loc1:V, reg r69:V, reg r70:V, reg n_loc2:*, reg n_loc3:V, reg ncol4:*, reg ncol5:V, reg r71:V, reg r72:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg ncol6:*, reg ncol7:V, reg c11:V, reg c12:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg n_loc4:*, reg n_loc5:V, reg nrow4:*, reg nrow5:V, reg r78:V, reg r79:V, reg nrow6:*, reg nrow7:V, reg ncol8:*, reg ncol9:V, reg r81:V, reg n_loc6:*, reg n_loc7:V, reg r82:V, reg c13:L, reg stop2:cls, reg r83:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg labels1:*, reg labels2:V, reg c14:V, reg r87:V, reg c15:L, reg r88:R, reg expand_grid:cls, reg ff:*, reg ff1:V, reg ncol10:*, reg ncol11:V, reg r89:V, reg r90:V, reg p12:p(V +), reg ff2:*, reg ff3:V, reg nrow8:*, reg nrow9:V, reg r92:V, reg r93:V, reg p13:p(V +), reg r95:V, reg c16:L, reg r97:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n_loc8:*, reg n_loc9:V, reg r98:V, reg __2:cls, reg r99:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r100:V, reg r101:V, reg labels3:*, reg labels4:V, reg c17:V, reg r102:V, reg c18:L, reg c20:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg c23:L, reg r104:V, reg missing:cls, reg r105:V, reg c24:L, reg c25:L, reg c26:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r106:V, reg c33:L, reg c34:L, reg r107:V, reg flip_labels1:*, reg flip_labels2:V, reg c35:L, reg r108:V, reg c36:L, reg c37:V, reg c40:L, reg c41:V, reg c43:L, reg ncol12:*, reg ncol13:V, reg mean:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r109:V, reg r110:V, reg labels5:*, reg labels6:V, reg nchar:cls, reg r111:V, reg p14:p(V +), reg r113:V, reg r114:V, reg r115:V, reg r116:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r118:V, reg r119:V, reg locations3:*, reg locations4:V, reg is_numeric2:cls, reg r120:V, reg c44:L, reg c46:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r121:V, reg c49:L, reg r122:V, reg locations5:*, reg locations6:V, reg length:cls, reg r123:V, reg r124:V, reg c50:L, reg c51:V, reg c53:L, reg cbind:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r125:V, reg r126:V, reg locations7:*, reg locations8:V, reg c54:L, reg locations10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r127:V, reg n_loc10:*, reg n_loc11:V, reg rep_int:cls, reg r128:V, reg p15:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r130:V, reg r131:V, reg locations11:*, reg locations12:V, reg c55:L, reg locations14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r132:V, reg n_loc12:*, reg n_loc13:V, reg rep_int1:cls, reg r133:V, reg p16:p(V +), reg r135:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r136:V, reg r137:V, reg missing1:cls, reg r138:V, reg r139:V, reg c56:L, reg c58:V, reg n_loc14:*, reg n_loc15:V, reg r140:V, reg c59:L, reg c60:V, reg c62:L, reg warning:cls, reg r141:V, reg r142:V, reg is_data_frame1:cls, reg locations15:*, reg locations16:V, reg p17:p(V +), reg r145:V, reg c63:L, reg data_matrix1:cls, reg locations17:*, reg locations18:V, reg p18:p(V +), reg r147:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r149:V, reg r150:V, reg locations19:*, reg locations20:V, reg is_matrix1:cls, reg r151:V, reg r152:V, reg c64:L, reg c65:V, reg ncol14:cls, reg locations21:*, reg locations22:V, reg p19:p(V +), reg r154:V, reg r155:V, reg c67:L, reg c68:V, reg c70:L, reg stop3:cls, reg r156:V, reg n_loc16:*, reg n_loc17:V, reg nrow10:cls, reg locations23:*, reg locations24:V, reg p20:p(V +), reg r159:V, reg r160:V, reg c71:L, reg stop4:cls, reg r161:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r162:V, reg r163:V, reg missing2:cls, reg r164:V, reg c72:L, reg c73:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r165:V, reg c77:L, reg r166:V, reg flip_labels3:*, reg flip_labels4:V, reg c78:L, reg r167:V, reg c79:L, reg c80:V, reg c82:L, reg locations25:*, reg locations26:V, reg c83:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r168:V, reg locations29:*, reg locations30:V, reg c84:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r169:V, reg full1:*, reg full2:V, reg c85:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r170:V, reg r171:V, reg n_seg2:*, reg n_seg3:V, reg r172:V, reg seq_int:cls, reg r173:V, reg c86:L, reg r175:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg n_seg4:*, reg n_seg5:V, reg r176:V, reg r177:V, reg __7:cls, reg r178:V, reg dx16:V, reg draw_segments1:*, reg draw_segments2:V, reg c87:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r179:V, reg r180:V, reg n_seg6:*, reg n_seg7:V, reg r181:V, reg seq_int1:cls, reg r182:V, reg c88:L, reg r184:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg n_seg8:*, reg n_seg9:V, reg r185:V, reg r186:V, reg __8:cls, reg r187:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r188:V, reg n_seg10:*, reg n_seg11:V, reg seq_int2:cls, reg r189:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r190:V, reg r191:V, reg angles:*, reg angles1:V, reg length1:cls, reg r192:V, reg n_seg12:*, reg n_seg13:V, reg r193:V, reg c89:L, reg stop5:cls, reg r194:V, reg scale1:*, reg scale2:V, reg c90:L, reg apply:cls, reg x17:*, reg x18:V, reg p21:p(V +), reg r197:cls, reg p22:p(V +), reg r199:V, reg l:*, reg c91:L, reg r202:R, reg l2:*, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r209:V, reg r210:R, reg l5:*, reg r211:R, reg r212:V, reg x19:*, reg x20:V, reg is_na:cls, reg r213:V, reg ___:cls, reg r214:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r215:V, reg r216:V, reg x21:*, reg x22:V, reg len1:*, reg len2:V, reg r217:V, reg max:cls, reg r218:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r219:V, reg r220:V, reg xlim1:*, reg xlim2:V, reg c92:V, reg c93:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r221:V, reg r222:V, reg xloc:*, reg xloc1:V, reg range:cls, reg r223:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r226:V, reg r227:V, reg r228:V, reg mx:*, reg mx1:V, reg r229:V, reg mx2:*, reg mx3:V, reg c94:cls, reg r230:V, reg r231:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r233:V, reg r234:V, reg ylim1:*, reg ylim2:V, reg c95:V, reg c96:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r235:V, reg r236:V, reg yloc:*, reg yloc1:V, reg range1:cls, reg r237:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r240:V, reg r241:V, reg r242:V, reg mx4:*, reg mx5:V, reg r243:V, reg mx6:*, reg mx7:V, reg c97:cls, reg r244:V, reg r245:V, reg par2:cls, reg mar1:*, reg mar2:V, reg p23:p(V +), reg xpd1:*, reg xpd2:V, reg p24:p(V +), reg r249:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r250:V, reg on_exit:cls, reg r252:V, reg dev_hold:cls, reg r253:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r254:V, reg on_exit1:cls, reg r256:V, reg plot1:*, reg plot2:V, reg c98:L, reg c100:V, reg add1:*, reg add2:V, reg r257:V, reg c101:L, reg c102:V, reg c104:L, reg plot3:cls, reg ddd1:dots?, reg xlim3:*, reg xlim4:V, reg p25:p(V +), reg ylim3:*, reg ylim4:V, reg p26:p(V +), reg main1:*, reg main2:V, reg p27:p(V +), reg sub1:*, reg sub2:V, reg p28:p(V +), reg xlab3:*, reg xlab4:V, reg p29:p(V +), reg ylab3:*, reg ylab4:V, reg p30:p(V +), reg axes7:*, reg axes8:V, reg p31:p(V +), reg r265:V, reg plot4:*, reg plot5:V, reg r267:V, reg c105:L, reg locations33:*, reg locations34:V, reg xloc2:*, reg xloc3:V, reg x23:*, reg x24:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r270:V, reg xloc6:V, reg x27:V, reg r271:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r272:V, reg xloc9:V, reg x30:V, reg r273:V, reg angles2:*, reg angles3:V, reg r274:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r275:V, reg xloc12:V, reg x33:V, reg r276:V, reg n_loc18:*, reg n_loc19:V, reg n_seg14:*, reg n_seg15:V, reg rep_int2:cls, reg r277:V, reg rep_int3:cls, reg r278:V, reg r279:V, reg r280:V, reg yloc2:*, reg yloc3:V, reg x34:*, reg x35:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r281:V, reg yloc6:V, reg x38:V, reg r282:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r283:V, reg yloc9:V, reg x41:V, reg r284:V, reg angles4:*, reg angles5:V, reg r285:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r286:V, reg yloc12:V, reg x44:V, reg r287:V, reg n_loc20:*, reg n_loc21:V, reg n_seg16:*, reg n_seg17:V, reg rep_int4:cls, reg r288:V, reg rep_int5:cls, reg r289:V, reg r290:V, reg r291:V, reg draw_segments3:*, reg draw_segments4:V, reg c106:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r292:V, reg r293:V, reg angles6:*, reg angles7:V, reg full3:*, reg full4:V, reg c107:L, reg r294:R, reg c108:cls, reg r295:V, reg n_loc22:*, reg n_loc23:V, reg r296:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c109:L, reg x45:V, reg numeric:cls, reg r297:V, reg n_seg18:*, reg n_seg19:V, reg r298:V, reg s1:V, reg l7:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c110:L, reg x46:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r299:V, reg i17:I, reg i18:I, reg r300:V, reg aangl:*, reg aangl1:V, reg c111:L, reg i21:I, reg i22:I, reg aangl3:V, reg dr20:V, reg dc10:L, reg dx21:V, reg i25:I, reg i26:I, reg dx22:V, reg j:*, reg j1:V, reg __9:cls, reg r301:V, reg aangl4:*, reg aangl5:V, reg c112:L, reg i29:I, reg i30:I, reg aangl7:V, reg dr22:V, reg dc11:L, reg dx23:V, reg i33:I, reg i34:I, reg dx24:V, reg j2:*, reg j3:V, reg r302:V, reg __10:cls, reg r303:V, reg deg:*, reg deg1:V, reg r304:V, reg seq_int3:cls, reg r305:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r306:V, reg i39:I, reg i40:I, reg r307:V, reg px:*, reg px1:V, reg xloc13:*, reg xloc14:V, reg c113:L, reg i43:I, reg i44:I, reg xloc16:V, reg dr24:V, reg dc12:L, reg dx25:V, reg i47:I, reg i48:I, reg dx26:V, reg i49:*, reg i50:V, reg __11:cls, reg r308:V, reg s_x:*, reg s_x1:V, reg c114:L, reg i53:I, reg i54:I, reg s_x3:V, reg dr26:V, reg dc13:L, reg dx27:V, reg i57:I, reg i58:I, reg dx28:V, reg i59:*, reg i60:V, reg j4:*, reg j5:V, reg __12:cls, reg r309:V, reg x47:*, reg x48:V, reg c115:L, reg i63:I, reg i64:I, reg x50:V, reg dr28:V, reg dc14:L, reg dx29:V, reg i67:I, reg i68:I, reg dx30:V, reg i69:*, reg i70:V, reg j6:*, reg j7:V, reg __13:cls, reg r310:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r311:V, reg i75:I, reg i76:I, reg dx33:V, reg r312:V, reg k:*, reg k1:V, reg r313:V, reg r314:V, reg xloc17:*, reg xloc18:V, reg c116:L, reg i79:I, reg i80:I, reg r316:V, reg xloc20:V, reg dr30:V, reg dc15:L, reg dx34:V, reg i83:I, reg i84:I, reg r318:V, reg dx35:V, reg i85:*, reg i86:V, reg __14:cls, reg r319:V, reg r320:V, reg c117:cls, reg r321:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r322:V, reg i91:I, reg i92:I, reg r323:V, reg py:*, reg py1:V, reg yloc13:*, reg yloc14:V, reg c118:L, reg i95:I, reg i96:I, reg yloc16:V, reg dr32:V, reg dc16:L, reg dx36:V, reg i99:I, reg i100:I, reg dx37:V, reg i101:*, reg i102:V, reg __15:cls, reg r324:V, reg s_y:*, reg s_y1:V, reg c119:L, reg i105:I, reg i106:I, reg s_y3:V, reg dr34:V, reg dc17:L, reg dx38:V, reg i109:I, reg i110:I, reg dx39:V, reg i111:*, reg i112:V, reg j8:*, reg j9:V, reg __16:cls, reg r325:V, reg x51:*, reg x52:V, reg c120:L, reg i115:I, reg i116:I, reg x54:V, reg dr36:V, reg dc18:L, reg dx40:V, reg i119:I, reg i120:I, reg dx41:V, reg i121:*, reg i122:V, reg j10:*, reg j11:V, reg __17:cls, reg r326:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r327:V, reg i127:I, reg i128:I, reg dx44:V, reg r328:V, reg k2:*, reg k3:V, reg r329:V, reg r330:V, reg yloc17:*, reg yloc18:V, reg c121:L, reg i131:I, reg i132:I, reg r332:V, reg yloc20:V, reg dr38:V, reg dc19:L, reg dx45:V, reg i135:I, reg i136:I, reg r334:V, reg dx46:V, reg i137:*, reg i138:V, reg __18:cls, reg r335:V, reg r336:V, reg c122:cls, reg r337:V, reg polygon:cls, reg px2:*, reg px3:V, reg p32:p(V +), reg py2:*, reg py3:V, reg p33:p(V +), reg col_segments1:*, reg col_segments2:V, reg p34:p(V +), reg lwd1:*, reg lwd2:V, reg p35:p(V +), reg lty1:*, reg lty2:V, reg p36:p(V +), reg r343:V, reg n_loc24:*, reg n_loc25:V, reg r344:V, reg s2:V, reg l8:I, reg i140:I, reg i141:I, reg i142:I, reg c123:L, reg x55:V, reg polygon1:cls, reg s_x4:*, reg s_x5:V, reg c124:L, reg dr40:V, reg dc20:L, reg dx47:V, reg dx48:V, reg i145:*, reg i146:V, reg __19:cls, reg r345:V, reg p37:p(V +), reg s_y4:*, reg s_y5:V, reg c125:L, reg dr42:V, reg dc21:L, reg dx49:V, reg dx50:V, reg i147:*, reg i148:V, reg __20:cls, reg r347:V, reg p38:p(V +), reg lwd3:*, reg lwd4:V, reg p39:p(V +), reg lty3:*, reg lty4:V, reg p40:p(V +), reg col_stars1:*, reg col_stars2:V, reg c126:L, reg col_stars4:V, reg dr44:V, reg dc22:L, reg dx51:V, reg dx52:V, reg i149:*, reg i150:V, reg __21:cls, reg r351:V, reg p41:p(V +), reg r353:V, reg polygon2:cls, reg s_x8:*, reg s_x9:V, reg c127:L, reg dr46:V, reg dc23:L, reg dx53:V, reg dx54:V, reg i151:*, reg i152:V, reg __22:cls, reg r354:V, reg p42:p(V +), reg s_y8:*, reg s_y9:V, reg c128:L, reg dr48:V, reg dc24:L, reg dx55:V, reg dx56:V, reg i153:*, reg i154:V, reg __23:cls, reg r356:V, reg p43:p(V +), reg lwd5:*, reg lwd6:V, reg p44:p(V +), reg lty5:*, reg lty6:V, reg p45:p(V +), reg col_lines1:*, reg col_lines2:V, reg c129:L, reg col_lines4:V, reg dr50:V, reg dc25:L, reg dx57:V, reg dx58:V, reg i155:*, reg i156:V, reg __24:cls, reg r360:V, reg p46:p(V +), reg col_stars5:*, reg col_stars6:V, reg c130:L, reg col_stars8:V, reg dr52:V, reg dc26:L, reg dx59:V, reg dx60:V, reg i157:*, reg i158:V, reg __25:cls, reg r362:V, reg p47:p(V +), reg r364:V, reg radius1:*, reg radius2:V, reg c131:L, reg segments:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r365:V, reg r366:V, reg xloc21:*, reg xloc22:V, reg c132:L, reg xloc24:V, reg dr54:V, reg dc27:L, reg dx61:V, reg dx62:V, reg i161:*, reg i162:V, reg __26:cls, reg r367:V, reg n_seg20:*, reg n_seg21:V, reg rep_int6:cls, reg r368:V, reg p48:p(V +), reg sym52:cls, reg base52:cls, reg guard52:L, reg r370:V, reg r371:V, reg yloc21:*, reg yloc22:V, reg c133:L, reg yloc24:V, reg dr56:V, reg dc28:L, reg dx63:V, reg dx64:V, reg i163:*, reg i164:V, reg __27:cls, reg r372:V, reg n_seg22:*, reg n_seg23:V, reg rep_int7:cls, reg r373:V, reg p49:p(V +), reg s_x12:*, reg s_x13:V, reg c134:L, reg dr58:V, reg dc29:L, reg dx65:V, reg dx66:V, reg i165:*, reg i166:V, reg __28:cls, reg r375:V, reg p50:p(V +), reg s_y12:*, reg s_y13:V, reg c135:L, reg dr60:V, reg dc30:L, reg dx67:V, reg dx68:V, reg i167:*, reg i168:V, reg __29:cls, reg r377:V, reg p51:p(V +), reg lwd7:*, reg lwd8:V, reg p52:p(V +), reg lty7:*, reg lty8:V, reg p53:p(V +), reg r381:V, reg i169:I, reg sym53:cls, reg base53:cls, reg guard53:L, reg r383:V, reg r384:V, reg labels7:*, reg labels8:V, reg c136:V, reg r385:V, reg c137:L, reg mx8:*, reg mx9:V, reg full5:*, reg full6:V, reg c138:L, reg mx12:V, reg r386:R, reg r387:V, reg flip_labels5:*, reg flip_labels6:V, reg c139:L, reg y_off:*, reg y_off1:V, reg cex1:*, reg cex2:V, reg par3:cls, reg r388:V, reg c140:L, reg y_off3:V, reg cex4:V, reg r390:V, reg dr62:V, reg dc31:L, reg dx69:V, reg y_off5:V, reg cex6:V, reg dx70:V, reg __30:cls, reg r391:V, reg r392:V, reg n_loc26:*, reg n_loc27:V, reg r393:V, reg __31:cls, reg r394:V, reg full7:*, reg full8:V, reg c141:L, reg y_off8:V, reg r399:V, reg r400:V, reg r401:R, reg r402:V, reg r403:V, reg r404:V, reg text:cls, reg xloc25:*, reg xloc26:V, reg p54:p(V +), reg yloc25:*, reg yloc26:V, reg y_off9:*, reg y_off10:V, reg r407:V, reg p55:p(V +), reg labels9:*, reg labels10:V, reg p56:p(V +), reg cex7:*, reg cex8:V, reg p57:p(V +), reg sym54:cls, reg base54:cls, reg guard54:L, reg r411:V, reg r412:V, reg c142:cls, reg r413:V, reg p58:p(V +), reg r415:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r417:V, reg r418:V, reg key_loc1:*, reg key_loc2:V, reg c143:V, reg r419:V, reg c144:L, reg par4:cls, reg key_xpd1:*, reg key_xpd2:V, reg p59:p(V +), reg r421:V, reg len3:*, reg len4:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r422:V, reg len7:V, reg r423:V, reg angles8:*, reg angles9:V, reg r424:V, reg r425:V, reg key_loc3:*, reg key_loc4:V, reg c145:L, reg r427:V, reg key_loc6:V, reg dr64:V, reg dc32:L, reg dx71:V, reg r429:V, reg dx72:V, reg __32:cls, reg r430:V, reg r431:V, reg len8:*, reg len9:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r432:V, reg len12:V, reg r433:V, reg angles10:*, reg angles11:V, reg r434:V, reg r435:V, reg key_loc7:*, reg key_loc8:V, reg c146:L, reg r437:V, reg key_loc10:V, reg dr66:V, reg dc33:L, reg dx73:V, reg r439:V, reg dx74:V, reg __33:cls, reg r440:V, reg r441:V, reg draw_segments5:*, reg draw_segments6:V, reg c147:L, reg numeric1:cls, reg r442:V, reg n_seg24:*, reg n_seg25:V, reg r443:V, reg s3:V, reg l9:I, reg i170:I, reg i171:I, reg i172:I, reg c148:L, reg x56:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r444:V, reg i177:I, reg r445:V, reg aangl8:*, reg aangl9:V, reg c149:L, reg i179:I, reg aangl11:V, reg dr68:V, reg dc34:L, reg dx75:V, reg i181:I, reg dx76:V, reg j12:*, reg j13:V, reg __34:cls, reg r446:V, reg aangl12:*, reg aangl13:V, reg c150:L, reg i183:I, reg aangl15:V, reg dr70:V, reg dc35:L, reg dx77:V, reg i185:I, reg dx78:V, reg j14:*, reg j15:V, reg r447:V, reg __35:cls, reg r448:V, reg deg2:*, reg deg3:V, reg r449:V, reg seq_int4:cls, reg r450:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r451:V, reg i188:I, reg r452:V, reg px4:*, reg px5:V, reg key_loc11:*, reg key_loc12:V, reg c151:L, reg i190:I, reg key_loc14:V, reg dr72:V, reg dc36:L, reg dx79:V, reg i192:I, reg dx80:V, reg __36:cls, reg r453:V, reg key_x:*, reg key_x1:V, reg c152:L, reg i194:I, reg key_x3:V, reg dr74:V, reg dc37:L, reg dx81:V, reg i196:I, reg dx82:V, reg j16:*, reg j17:V, reg __37:cls, reg r454:V, reg len13:*, reg len14:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r455:V, reg i199:I, reg len17:V, reg r456:V, reg k4:*, reg k5:V, reg r457:V, reg r458:V, reg key_loc15:*, reg key_loc16:V, reg c153:L, reg i201:I, reg r460:V, reg key_loc18:V, reg dr76:V, reg dc38:L, reg dx83:V, reg i203:I, reg r462:V, reg dx84:V, reg __38:cls, reg r463:V, reg r464:V, reg c154:cls, reg r465:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r466:V, reg i206:I, reg r467:V, reg py4:*, reg py5:V, reg key_loc19:*, reg key_loc20:V, reg c155:L, reg i208:I, reg key_loc22:V, reg dr78:V, reg dc39:L, reg dx85:V, reg i210:I, reg dx86:V, reg __39:cls, reg r468:V, reg key_y:*, reg key_y1:V, reg c156:L, reg i212:I, reg key_y3:V, reg dr80:V, reg dc40:L, reg dx87:V, reg i214:I, reg dx88:V, reg j18:*, reg j19:V, reg __40:cls, reg r469:V, reg len18:*, reg len19:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r470:V, reg i217:I, reg len22:V, reg r471:V, reg k6:*, reg k7:V, reg r472:V, reg r473:V, reg key_loc23:*, reg key_loc24:V, reg c157:L, reg i219:I, reg r475:V, reg key_loc26:V, reg dr82:V, reg dc41:L, reg dx89:V, reg i221:I, reg r477:V, reg dx90:V, reg __41:cls, reg r478:V, reg r479:V, reg c158:cls, reg r480:V, reg polygon3:cls, reg px6:*, reg px7:V, reg p60:p(V +), reg py6:*, reg py7:V, reg p61:p(V +), reg col_segments3:*, reg col_segments4:V, reg p62:p(V +), reg lwd9:*, reg lwd10:V, reg p63:p(V +), reg lty9:*, reg lty10:V, reg p64:p(V +), reg r486:V, reg polygon4:cls, reg key_x4:*, reg key_x5:V, reg p65:p(V +), reg key_y4:*, reg key_y5:V, reg p66:p(V +), reg lwd11:*, reg lwd12:V, reg p67:p(V +), reg lty11:*, reg lty12:V, reg p68:p(V +), reg r492:V, reg radius3:*, reg radius4:V, reg c159:L, reg segments1:cls, reg sym63:cls, reg base63:cls, reg guard63:L, reg r493:V, reg r494:V, reg key_loc27:*, reg key_loc28:V, reg c160:L, reg key_loc30:V, reg dr84:V, reg dc42:L, reg dx91:V, reg dx92:V, reg __42:cls, reg r495:V, reg n_seg26:*, reg n_seg27:V, reg rep_int8:cls, reg r496:V, reg p69:p(V +), reg sym64:cls, reg base64:cls, reg guard64:L, reg r498:V, reg r499:V, reg key_loc31:*, reg key_loc32:V, reg c161:L, reg key_loc34:V, reg dr86:V, reg dc43:L, reg dx93:V, reg dx94:V, reg __43:cls, reg r500:V, reg n_seg28:*, reg n_seg29:V, reg rep_int9:cls, reg r501:V, reg p70:p(V +), reg key_x6:*, reg key_x7:V, reg p71:p(V +), reg key_y6:*, reg key_y7:V, reg p72:p(V +), reg lwd13:*, reg lwd14:V, reg p73:p(V +), reg lty13:*, reg lty14:V, reg p74:p(V +), reg r507:V, reg angles12:*, reg angles13:V, reg draw_segments7:*, reg draw_segments8:V, reg c162:L, reg angles16:*, reg angles17:V, reg c163:L, reg angles20:V, reg angles21:V, reg dr88:V, reg dc44:L, reg dx95:V, reg angles23:V, reg dx96:V, reg __44:cls, reg r508:V, reg angles24:*, reg angles25:V, reg c164:L, reg angles28:V, reg dx98:V, reg angles29:V, reg dr90:V, reg dc45:L, reg dx100:V, reg angles31:V, reg dx101:V, reg dx102:V, reg __45:cls, reg r509:V, reg r510:V, reg r511:V, reg angles32:V, reg r512:V, reg r513:V, reg len23:*, reg len24:V, reg r514:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r517:V, reg r518:V, reg r519:V, reg lab_angl:*, reg lab_angl1:V, reg r520:V, reg r521:V, reg key_loc35:*, reg key_loc36:V, reg c165:L, reg r523:V, reg key_loc38:V, reg dr92:V, reg dc46:L, reg dx103:V, reg r525:V, reg dx104:V, reg __46:cls, reg r526:V, reg r527:V, reg len25:*, reg len26:V, reg r528:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r531:V, reg r532:V, reg r533:V, reg lab_angl2:*, reg lab_angl3:V, reg r534:V, reg r535:V, reg key_loc39:*, reg key_loc40:V, reg c166:L, reg r537:V, reg key_loc42:V, reg dr94:V, reg dc47:L, reg dx105:V, reg r539:V, reg dx106:V, reg __47:cls, reg r540:V, reg r541:V, reg n_seg30:*, reg n_seg31:V, reg r542:V, reg s4:V, reg l10:I, reg i222:I, reg i223:I, reg i224:I, reg c167:L, reg x57:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r543:V, reg i229:I, reg r544:V, reg lab_angl4:*, reg lab_angl5:V, reg c168:L, reg i231:I, reg lab_angl7:V, reg dr96:V, reg dc48:L, reg dx107:V, reg i233:I, reg dx108:V, reg k8:*, reg k9:V, reg __48:cls, reg r545:V, reg deg4:*, reg deg5:V, reg r546:V, reg r547:V, reg c169:L, reg i234:I, reg c170:V, reg lab_angl8:*, reg lab_angl9:V, reg c172:L, reg i237:I, reg c174:L, reg lab_angl11:V, reg dr98:V, reg dc49:L, reg dx109:V, reg i239:I, reg c176:L, reg dx110:V, reg k10:*, reg k11:V, reg __49:cls, reg r548:V, reg deg6:*, reg deg7:V, reg r549:V, reg r550:V, reg c177:L, reg c178:V, reg c180:L, reg i243:I, reg r551:R, reg lab_angl12:*, reg lab_angl13:V, reg c181:L, reg i245:I, reg lab_angl15:V, reg dr100:V, reg dc50:L, reg dx111:V, reg i247:I, reg dx112:V, reg k12:*, reg k13:V, reg __50:cls, reg r552:V, reg deg8:*, reg deg9:V, reg r553:V, reg r554:V, reg c182:L, reg i249:I, reg c184:V, reg lab_angl16:*, reg lab_angl17:V, reg c185:L, reg i251:I, reg c187:L, reg lab_angl19:V, reg dr102:V, reg dc51:L, reg dx113:V, reg i253:I, reg c189:L, reg dx114:V, reg k14:*, reg k15:V, reg __51:cls, reg r555:V, reg deg10:*, reg deg11:V, reg r556:V, reg r557:V, reg c190:L, reg c191:V, reg c193:L, reg lab_angl20:*, reg lab_angl21:V, reg c194:L, reg i258:I, reg lab_angl23:V, reg dr104:V, reg dc52:L, reg dx115:V, reg i260:I, reg dx116:V, reg k16:*, reg k17:V, reg __52:cls, reg r558:V, reg deg12:*, reg deg13:V, reg r559:V, reg r560:V, reg c195:L, reg lab_angl24:*, reg lab_angl25:V, reg c196:L, reg i264:I, reg r562:R, reg lab_angl27:V, reg dr106:V, reg dc53:L, reg dx117:V, reg i266:I, reg r564:R, reg dx118:V, reg k18:*, reg k19:V, reg __53:cls, reg r565:V, reg deg14:*, reg deg15:V, reg r566:V, reg r567:V, reg r568:V, reg r569:V, reg i267:I, reg r570:V, reg lab_angl28:*, reg lab_angl29:V, reg c197:L, reg i269:I, reg lab_angl31:V, reg dr108:V, reg dc54:L, reg dx119:V, reg i271:I, reg dx120:V, reg k20:*, reg k21:V, reg __54:cls, reg r571:V, reg deg16:*, reg deg17:V, reg r572:V, reg r573:V, reg c198:L, reg lab_angl32:*, reg lab_angl33:V, reg c199:L, reg i275:I, reg lab_angl35:V, reg dr110:V, reg dc55:L, reg dx121:V, reg i277:I, reg dx122:V, reg k22:*, reg k23:V, reg __55:cls, reg r574:V, reg deg18:*, reg deg19:V, reg r575:V, reg r576:V, reg deg20:*, reg deg21:V, reg r577:V, reg r578:V, reg lab_angl36:*, reg lab_angl37:V, reg c200:L, reg i279:I, reg r580:R, reg lab_angl39:V, reg dr112:V, reg dc56:L, reg dx123:V, reg i281:I, reg r582:R, reg dx124:V, reg k24:*, reg k25:V, reg __56:cls, reg r583:V, reg deg22:*, reg deg23:V, reg r584:V, reg r585:V, reg deg24:*, reg deg25:V, reg r586:V, reg r587:V, reg r588:V, reg c201:cls, reg r589:V, reg text1:cls, reg label_x:*, reg label_x1:V, reg c202:L, reg label_x3:V, reg dr114:V, reg dc57:L, reg dx125:V, reg dx126:V, reg k26:*, reg k27:V, reg __57:cls, reg r590:V, reg p75:p(V +), reg label_y:*, reg label_y1:V, reg c203:L, reg label_y3:V, reg dr116:V, reg dc58:L, reg dx127:V, reg dx128:V, reg k28:*, reg k29:V, reg __58:cls, reg r592:V, reg p76:p(V +), reg key_labels1:*, reg key_labels2:V, reg c204:L, reg key_labels4:V, reg dr118:V, reg dc59:L, reg dx129:V, reg dx130:V, reg k30:*, reg k31:V, reg __59:cls, reg r594:V, reg p77:p(V +), reg cex9:*, reg cex10:V, reg p78:p(V +), reg text_adj:*, reg text_adj1:V, reg p79:p(V +), reg r598:V, reg frame_plot1:*, reg frame_plot2:V, reg c205:L, reg box:cls, reg ddd2:dots?, reg r599:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r601:V, reg r602:V, reg locations35:*, reg locations36:V, reg invisible:cls, reg r603:V |
    mkenv;
    st x = x;
    full_isMissing = missing.0(full);
    if full_isMissing then L0(TRUE) else L0(full);
  L0(full_orDefault):
    st full = full_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(TRUE) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    radius_isMissing = missing.0(radius);
    if radius_isMissing then L2(TRUE) else L2(radius);
  L2(radius_orDefault):
    st radius = radius_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L3() else L4(labels);
  L3():
    p = prom<V +>{
      sym = ldf dimnames;
      base = ldf dimnames in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dimnames = ldf dimnames in base;
      r2 = dyn dimnames(x2);
      goto L0(r2);
    L3():
      r = dyn base(<sym x>);
      goto L0(r);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r4):
      __ = ldf `[[` in base;
      r5 = dyn __(r4, 1);
      goto L1(r5);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    goto L4(p);
  L4(labels_orDefault):
    st labels = labels_orDefault;
    locations_isMissing = missing.0(locations);
    if locations_isMissing then L5(NULL) else L5(locations);
  L5(locations_orDefault):
    st locations = locations_orDefault;
    nrow_isMissing = missing.0(nrow);
    if nrow_isMissing then L6(NULL) else L6(nrow);
  L6(nrow_orDefault):
    st nrow = nrow_orDefault;
    ncol_isMissing = missing.0(ncol);
    if ncol_isMissing then L7(NULL) else L7(ncol);
  L7(ncol_orDefault):
    st ncol = ncol_orDefault;
    len_isMissing = missing.0(len);
    if len_isMissing then L8(1.0) else L8(len);
  L8(len_orDefault):
    st len = len_orDefault;
    key_loc_isMissing = missing.0(key_loc);
    if key_loc_isMissing then L9(NULL) else L9(key_loc);
  L9(key_loc_orDefault):
    st `key.loc` = key_loc_orDefault;
    key_labels_isMissing = missing.0(key_labels);
    if key_labels_isMissing then L10() else L11(key_labels);
  L10():
    p1 = prom<V +>{
      sym1 = ldf dimnames;
      base1 = ldf dimnames in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r8):
      c1 = `is.object`(r8);
      if c1 then L4() else L5(r8);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      dimnames1 = ldf dimnames in base;
      r9 = dyn dimnames1(x4);
      goto L0(r9);
    L3():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[[", r8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r11):
      __1 = ldf `[[` in base;
      r12 = dyn __1(r11, 2);
      goto L1(r12);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    goto L11(p1);
  L11(key_labels_orDefault):
    st `key.labels` = key_labels_orDefault;
    key_xpd_isMissing = missing.0(key_xpd);
    if key_xpd_isMissing then L12(TRUE) else L12(key_xpd);
  L12(key_xpd_orDefault):
    st `key.xpd` = key_xpd_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L13(NULL) else L13(xlim);
  L13(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L14(NULL) else L14(ylim);
  L14(ylim_orDefault):
    st ylim = ylim_orDefault;
    flip_labels_isMissing = missing.0(flip_labels);
    if flip_labels_isMissing then L15(NULL) else L15(flip_labels);
  L15(flip_labels_orDefault):
    st `flip.labels` = flip_labels_orDefault;
    draw_segments_isMissing = missing.0(draw_segments);
    if draw_segments_isMissing then L16(FALSE) else L16(draw_segments);
  L16(draw_segments_orDefault):
    st `draw.segments` = draw_segments_orDefault;
    col_segments_isMissing = missing.0(col_segments);
    if col_segments_isMissing then L17() else L18(col_segments);
  L17():
    p2 = prom<V +>{
      n_seg = ld `n.seg`;
      n_seg1 = force? n_seg;
      checkMissing(n_seg1);
      r14 = `:`(1, n_seg1);
      return r14;
    };
    goto L18(p2);
  L18(col_segments_orDefault):
    st `col.segments` = col_segments_orDefault;
    col_stars_isMissing = missing.0(col_stars);
    if col_stars_isMissing then L19(NA_LGL) else L19(col_stars);
  L19(col_stars_orDefault):
    st `col.stars` = col_stars_orDefault;
    col_lines_isMissing = missing.0(col_lines);
    if col_lines_isMissing then L20(NA_LGL) else L20(col_lines);
  L20(col_lines_orDefault):
    st `col.lines` = col_lines_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L21(FALSE) else L21(axes);
  L21(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L22() else L23(frame_plot);
  L22():
    p3 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L23(p3);
  L23(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L24(NULL) else L24(main);
  L24(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L25(NULL) else L25(sub);
  L25(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L26("") else L26(xlab);
  L26(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L27("") else L27(ylab);
  L27(ylab_orDefault):
    st ylab = ylab_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L28(0.8) else L28(cex);
  L28(cex_orDefault):
    st cex = cex_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L29(0.25) else L29(lwd);
  L29(lwd_orDefault):
    st lwd = lwd_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L30() else L31(lty);
  L30():
    p4 = prom<V +>{
      par = ldf par;
      r17 = dyn par("lty");
      return r17;
    };
    goto L31(p4);
  L31(lty_orDefault):
    st lty = lty_orDefault;
    xpd_isMissing = missing.0(xpd);
    if xpd_isMissing then L32(FALSE) else L32(xpd);
  L32(xpd_orDefault):
    st xpd = xpd_orDefault;
    mar_isMissing = missing.0(mar);
    if mar_isMissing then L33() else L34(mar);
  L33():
    p7 = prom<V +>{
      pmin = ldf pmin;
      p5 = prom<V +>{
        par1 = ldf par;
        r19 = dyn par1("mar");
        return r19;
      };
      p6 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r24, r25):
        r33 = `+`(r24, r25);
        return r33;
      L1():
        axes3 = ld axes;
        axes4 = force? axes3;
        checkMissing(axes4);
        r26 = `*`(2.0, axes4);
        xlab1 = ld xlab;
        xlab2 = force? xlab1;
        checkMissing(xlab2);
        r27 = `!=`(xlab2, "");
        r28 = `+`(r26, r27);
        axes5 = ld axes;
        axes6 = force? axes5;
        checkMissing(axes6);
        r29 = `*`(2.0, axes6);
        ylab1 = ld ylab;
        ylab2 = force? ylab1;
        checkMissing(ylab2);
        r30 = `!=`(ylab2, "");
        r31 = `+`(r29, r30);
        c2 = ldf c in base;
        r32 = dyn c2(r28, r31, 1.0, 0.0);
        goto L0(1.1, r32);
      L2():
        r23 = dyn base2(<lang `+`(`*`(2.0, axes), `(`(`!=`(xlab, "")))>, <lang `+`(`*`(2.0, axes), `(`(`!=`(ylab, "")))>, 1.0, 0.0);
        goto L0(1.1, r23);
      };
      r35 = dyn pmin(p5, p6);
      return r35;
    };
    goto L34(p7);
  L34(mar_orDefault):
    st mar = mar_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L35(FALSE) else L35(add);
  L35(add_orDefault):
    st add = add_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L36(TRUE) else L36(plot);
  L36(plot_orDefault):
    st plot = plot_orDefault;
    st `...` = ddd;
    is_data_frame = ldf `is.data.frame`;
    check L226() else D0();
  D0():
    deopt 1 [];
  L226():
    p8 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r38 = dyn is_data_frame(p8);
    check L227() else D1();
  D1():
    deopt 3 [r38];
  L227():
    c3 = `as.logical`(r38);
    if c3 then L228() else L37();
  L37():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L232() else L233();
  L38():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L240() else L241();
  L228():
    data_matrix = ldf `data.matrix`;
    check L229() else D2();
  D2():
    deopt 5 [];
  L39(r43):
    r45 = `!`(r43);
    c4 = `as.logical`(r45);
    if c4 then L236() else L40();
  L41(r48):
    r50 = `!`(r48);
    c5 = `as.logical`(r50);
    if c5 then L244() else L42();
  L229():
    p9 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r40 = dyn data_matrix(p9);
    check L230() else D3();
  L232():
    x9 = ld x;
    check L234() else D4();
  L233():
    r42 = dyn base3(<sym x>);
    goto L39(r42);
  L240():
    x11 = ld x;
    check L242() else D8();
  L241():
    r47 = dyn base4(<sym x>);
    goto L41(r47);
  D3():
    deopt 7 [r40];
  D4():
    deopt 11 [x9];
  D8():
    deopt 24 [x11];
  L40():
    goto L38();
  L42():
    goto L43();
  L43():
    nrow1 = ldf nrow;
    check L248() else D12();
  L230():
    st x = r40;
    goto L38();
  L234():
    x10 = force? x9;
    checkMissing(x10);
    is_matrix = ldf `is.matrix` in base;
    r44 = dyn is_matrix(x10);
    check L235() else D5();
  L236():
    stop = ldf stop;
    check L237() else D6();
  L242():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric = ldf `is.numeric` in base;
    r49 = dyn is_numeric(x12);
    check L243() else D9();
  L244():
    stop1 = ldf stop;
    check L245() else D10();
  D5():
    deopt 14 [r44];
  D6():
    deopt 17 [];
  D9():
    deopt 27 [r49];
  D10():
    deopt 30 [];
  D12():
    deopt 36 [];
  L235():
    goto L39(r44);
  L237():
    r46 = dyn stop("'x' must be a matrix or a data frame");
    check L238() else D7();
  L243():
    goto L41(r49);
  L245():
    r51 = dyn stop1("data in 'x' must be numeric");
    check L246() else D11();
  L248():
    p10 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r54 = dyn nrow1(p10);
    check L249() else D13();
  D7():
    deopt 19 [r46];
  D11():
    deopt 32 [r51];
  D13():
    deopt 38 [r54];
  L238():
    goto L38();
  L246():
    goto L43();
  L249():
    st `n.loc` = r54;
    ncol1 = ldf ncol;
    check L250() else D14();
  D14():
    deopt 41 [];
  L250():
    p11 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r56 = dyn ncol1(p11);
    check L251() else D15();
  D15():
    deopt 43 [r56];
  L251():
    st `n.seg` = r56;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L252() else L253();
  L44(r58):
    c7 = `as.logical`(r58);
    if c7 then L255() else L45();
  L252():
    locations1 = ld locations;
    check L254() else D16();
  L253():
    r57 = dyn base5(<sym locations>);
    goto L44(r57);
  D16():
    deopt 46 [locations1];
  L45():
    sym17 = ldf `is.numeric`;
    base17 = ldf `is.numeric` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L319() else L320();
  L71():
    locations25 = ld locations;
    check L376() else D65();
  L254():
    locations2 = force? locations1;
    checkMissing(locations2);
    c6 = `==`(locations2, NULL);
    goto L44(c6);
  L255():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L256() else L257();
  D65():
    deopt 241 [locations25];
  L46(r60):
    c9 = `as.logical`(r60);
    if c9 then L259() else L47();
  L72(r119):
    c44 = `as.logical`(r119);
    if c44 then L323() else L73(c44);
  L256():
    nrow2 = ld nrow;
    check L258() else D17();
  L257():
    r59 = dyn base6(<sym nrow>);
    goto L46(r59);
  L319():
    locations3 = ld locations;
    check L321() else D40();
  L320():
    r118 = dyn base17(<sym locations>);
    goto L72(r118);
  L376():
    locations26 = force? locations25;
    checkMissing(locations26);
    c83 = `is.object`(locations26);
    if c83 then L377() else L378();
  D17():
    deopt 50 [nrow2];
  D40():
    deopt 149 [locations3];
  L47():
    goto L53();
  L53():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L274() else L275();
  L73(c46):
    c53 = `as.logical`(c46);
    if c53 then L329() else L75();
  L92(dx11):
    st xloc = dx11;
    locations29 = ld locations;
    check L380() else D66();
  L258():
    nrow3 = force? nrow2;
    checkMissing(nrow3);
    c8 = `==`(nrow3, NULL);
    goto L46(c8);
  L259():
    sym7 = ldf ceiling;
    base7 = ldf ceiling in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L260() else L261();
  L321():
    locations4 = force? locations3;
    checkMissing(locations4);
    is_numeric2 = ldf `is.numeric` in base;
    r120 = dyn is_numeric2(locations4);
    check L322() else D41();
  L323():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L324() else L325();
  L377():
    dr10 = tryDispatchBuiltin.1("[", locations26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L379() else L378();
  L378():
    __5 = ldf `[` in base;
    r168 = dyn __5(locations26, <missing>, 1.0);
    goto L92(r168);
  D41():
    deopt 152 [r120];
  D66():
    deopt 248 [locations29];
  L48(r62):
    st nrow = r62;
    goto L53();
  L54(r75):
    c12 = `as.logical`(r75);
    if c12 then L277() else L55();
  L74(c49, r122):
    r124 = `==`(r122, 2.0);
    c50 = `as.logical`(r124);
    c51 = `&&`(c49, c50);
    goto L73(c51);
  L75():
    is_data_frame1 = ldf `is.data.frame`;
    check L342() else D49();
  L80():
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L367() else L368();
  L260():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L262() else L263();
  L261():
    r61 = dyn base7(<lang if(`!`(is.numeric(ncol)), sqrt(n.loc), `/`(n.loc, ncol))>);
    goto L48(r61);
  L274():
    ncol6 = ld ncol;
    check L276() else D23();
  L275():
    r74 = dyn base10(<sym ncol>);
    goto L54(r74);
  L322():
    goto L72(r120);
  L324():
    locations5 = ld locations;
    check L326() else D42();
  L325():
    r121 = dyn base18(<sym locations>);
    goto L74(c44, r121);
  L329():
    cbind = ldf cbind;
    check L330() else D44();
  L379():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L92(dx10);
  L380():
    locations30 = force? locations29;
    checkMissing(locations30);
    c84 = `is.object`(locations30);
    if c84 then L381() else L382();
  D23():
    deopt 74 [ncol6];
  D42():
    deopt 155 [c44, locations5];
  D44():
    deopt 163 [];
  D49():
    deopt 185 [];
  L49(r64):
    r66 = `!`(r64);
    c10 = `as.logical`(r66);
    if c10 then L266() else L50();
  L55():
    goto L57();
  L57():
    nrow6 = ld nrow;
    check L283() else D26();
  L88(r163):
    c72 = `as.logical`(r163);
    if c72 then L89(c72) else L369();
  L93(dx13):
    st yloc = dx13;
    full1 = ld full;
    check L384() else D67();
  L262():
    ncol2 = ld ncol;
    check L264() else D18();
  L263():
    r63 = dyn base8(<sym ncol>);
    goto L49(r63);
  L276():
    ncol7 = force? ncol6;
    checkMissing(ncol7);
    c11 = `==`(ncol7, NULL);
    goto L54(c11);
  L277():
    sym11 = ldf ceiling;
    base11 = ldf ceiling in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L278() else L279();
  L326():
    locations6 = force? locations5;
    checkMissing(locations6);
    length = ldf length in base;
    r123 = dyn length(locations6);
    check L327() else D43();
  L330():
    p15 = prom<V +>{
      sym19 = ldf `rep.int`;
      base19 = ldf `rep.int` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L2() else L3();
    L0(r126):
      return r126;
    L2():
      locations7 = ld locations;
      locations8 = force? locations7;
      checkMissing(locations8);
      c54 = `is.object`(locations8);
      if c54 then L4() else L5(locations8);
    L3():
      r125 = dyn base19(<lang `[`(locations, 1)>, <sym n.loc>);
      goto L0(r125);
    L1(dx7):
      n_loc10 = ld `n.loc`;
      n_loc11 = force? n_loc10;
      checkMissing(n_loc11);
      rep_int = ldf `rep.int` in base;
      r128 = dyn rep_int(dx7, n_loc11);
      goto L0(r128);
    L4():
      dr6 = tryDispatchBuiltin.1("[", locations8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(locations10):
      __3 = ldf `[` in base;
      r127 = dyn __3(locations10, 1);
      goto L1(r127);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    p16 = prom<V +>{
      sym20 = ldf `rep.int`;
      base20 = ldf `rep.int` in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L2() else L3();
    L0(r131):
      return r131;
    L2():
      locations11 = ld locations;
      locations12 = force? locations11;
      checkMissing(locations12);
      c55 = `is.object`(locations12);
      if c55 then L4() else L5(locations12);
    L3():
      r130 = dyn base20(<lang `[`(locations, 2)>, <sym n.loc>);
      goto L0(r130);
    L1(dx9):
      n_loc12 = ld `n.loc`;
      n_loc13 = force? n_loc12;
      checkMissing(n_loc13);
      rep_int1 = ldf `rep.int` in base;
      r133 = dyn rep_int1(dx9, n_loc13);
      goto L0(r133);
    L4():
      dr8 = tryDispatchBuiltin.1("[", locations12);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(locations14):
      __4 = ldf `[` in base;
      r132 = dyn __4(locations14, 2);
      goto L1(r132);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r135 = dyn cbind(p15, p16);
    check L331() else D45();
  L342():
    p17 = prom<V +>{
      locations15 = ld locations;
      locations16 = force? locations15;
      checkMissing(locations16);
      return locations16;
    };
    r145 = dyn is_data_frame1(p17);
    check L343() else D50();
  L367():
    missing2 = ldf missing in base;
    r164 = dyn missing2(<sym flip.labels>);
    goto L88(r164);
  L368():
    r162 = dyn base23(<sym flip.labels>);
    goto L88(r162);
  L381():
    dr12 = tryDispatchBuiltin.1("[", locations30);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L383() else L382();
  L382():
    __6 = ldf `[` in base;
    r169 = dyn __6(locations30, <missing>, 2.0);
    goto L93(r169);
  D18():
    deopt 56 [ncol2];
  D26():
    deopt 86 [nrow6];
  D43():
    deopt 158 [c44, r123];
  D45():
    deopt 166 [r135];
  D50():
    deopt 187 [r145];
  D67():
    deopt 255 [full1];
  L50():
    n_loc2 = ld `n.loc`;
    check L271() else D21();
  L52(r70):
    r72 = ceiling(r70);
    goto L48(r72);
  L56(r77):
    st ncol = r77;
    goto L57();
  L89(c73):
    c82 = `as.logical`(c73);
    if c82 then L374() else L91();
  L264():
    ncol3 = force? ncol2;
    checkMissing(ncol3);
    is_numeric1 = ldf `is.numeric` in base;
    r65 = dyn is_numeric1(ncol3);
    check L265() else D19();
  L266():
    sym9 = ldf sqrt;
    base9 = ldf sqrt in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L267() else L268();
  L278():
    n_loc4 = ld `n.loc`;
    check L280() else D24();
  L279():
    r76 = dyn base11(<lang `/`(n.loc, nrow)>);
    goto L56(r76);
  L283():
    nrow7 = force? nrow6;
    checkMissing(nrow7);
    ncol8 = ld ncol;
    check L284() else D27();
  L327():
    goto L74(c44, r123);
  L331():
    st locations = r135;
    sym21 = ldf missing;
    base21 = ldf missing in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L332() else L333();
  L343():
    c63 = `as.logical`(r145);
    if c63 then L344() else L81();
  L369():
    sym24 = ldf `is.logical`;
    base24 = ldf `is.logical` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L370() else L371();
  L383():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L93(dx12);
  L384():
    full2 = force? full1;
    checkMissing(full2);
    c85 = `as.logical`(full2);
    if c85 then L385() else L94();
  D19():
    deopt 59 [r65];
  D21():
    deopt 65 [n_loc2];
  D24():
    deopt 78 [n_loc4];
  D27():
    deopt 87 [nrow7, ncol8];
  L51(r68):
    goto L52(r68);
  L76(r137):
    r139 = `!`(r137);
    c56 = `as.logical`(r139);
    if c56 then L334() else L77(c56);
  L81():
    goto L82();
  L82():
    sym22 = ldf `is.matrix`;
    base22 = ldf `is.matrix` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L348() else L349();
  L90(c77, r166):
    r167 = `!`(r166);
    c79 = `as.logical`(r167);
    c80 = `||`(c77, c79);
    goto L89(c80);
  L91():
    goto L71();
  L94():
    draw_segments1 = ld `draw.segments`;
    check L395() else D71();
  L97(dx16):
    st angles = dx16;
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L410() else L411();
  L265():
    goto L49(r65);
  L267():
    n_loc = ld `n.loc`;
    check L269() else D20();
  L268():
    r67 = dyn base9(<sym n.loc>);
    goto L51(r67);
  L271():
    n_loc3 = force? n_loc2;
    checkMissing(n_loc3);
    ncol4 = ld ncol;
    check L272() else D22();
  L280():
    n_loc5 = force? n_loc4;
    checkMissing(n_loc5);
    nrow4 = ld nrow;
    check L281() else D25();
  L284():
    ncol9 = force? ncol8;
    checkMissing(ncol9);
    r81 = `*`(nrow7, ncol9);
    n_loc6 = ld `n.loc`;
    check L285() else D28();
  L332():
    missing1 = ldf missing in base;
    r138 = dyn missing1(<sym labels>);
    goto L76(r138);
  L333():
    r136 = dyn base21(<sym labels>);
    goto L76(r136);
  L344():
    data_matrix1 = ldf `data.matrix`;
    check L345() else D51();
  L370():
    flip_labels3 = ld `flip.labels`;
    check L372() else D64();
  L371():
    r165 = dyn base24(<sym flip.labels>);
    goto L90(c72, r165);
  L374():
    st `flip.labels` = FALSE;
    goto L71();
  L385():
    sym25 = ldf `seq.int`;
    base25 = ldf `seq.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L386() else L387();
  D20():
    deopt 62 [n_loc];
  D22():
    deopt 66 [n_loc3, ncol4];
  D25():
    deopt 79 [n_loc5, nrow4];
  D28():
    deopt 89 [r81, n_loc6];
  D51():
    deopt 189 [];
  D64():
    deopt 231 [c72, flip_labels3];
  D71():
    deopt 275 [draw_segments1];
  L77(c58):
    c62 = `as.logical`(c58);
    if c62 then L337() else L78();
  L83(r150):
    r152 = `!`(r150);
    c64 = `as.logical`(r152);
    if c64 then L84(c64) else L352();
  L95(r171):
    c86 = `is.object`(r171);
    if c86 then L390() else L391(r171);
  L101(r191):
    n_seg12 = ld `n.seg`;
    check L414() else D79();
  L269():
    n_loc1 = force? n_loc;
    checkMissing(n_loc1);
    r69 = sqrt(n_loc1);
    goto L51(r69);
  L272():
    ncol5 = force? ncol4;
    checkMissing(ncol5);
    r71 = `/`(n_loc3, ncol5);
    goto L52(r71);
  L281():
    nrow5 = force? nrow4;
    checkMissing(nrow5);
    r78 = `/`(n_loc5, nrow5);
    r79 = ceiling(r78);
    goto L56(r79);
  L285():
    n_loc7 = force? n_loc6;
    checkMissing(n_loc7);
    r82 = `<`(r81, n_loc7);
    c13 = `as.logical`(r82);
    if c13 then L286() else L58();
  L334():
    n_loc14 = ld `n.loc`;
    check L335() else D46();
  L345():
    p18 = prom<V +>{
      locations17 = ld locations;
      locations18 = force? locations17;
      checkMissing(locations18);
      return locations18;
    };
    r147 = dyn data_matrix1(p18);
    check L346() else D52();
  L348():
    locations19 = ld locations;
    check L350() else D53();
  L349():
    r149 = dyn base22(<sym locations>);
    goto L83(r149);
  L372():
    flip_labels4 = force? flip_labels3;
    checkMissing(flip_labels4);
    c78 = `is.logical`(flip_labels4);
    goto L90(c72, c78);
  L386():
    n_seg2 = ld `n.seg`;
    check L388() else D68();
  L387():
    r170 = dyn base25[, , `length.out`](0.0, <lang `*`(2.0, pi)>, <lang `+`(n.seg, 1.0)>);
    goto L95(r170);
  L395():
    draw_segments2 = force? draw_segments1;
    checkMissing(draw_segments2);
    c87 = `as.logical`(draw_segments2);
    if c87 then L396() else L98();
  L410():
    angles = ld angles;
    check L412() else D77();
  L411():
    r190 = dyn base28(<sym angles>);
    goto L101(r190);
  D46():
    deopt 172 [c56, n_loc14];
  D52():
    deopt 191 [r147];
  D53():
    deopt 197 [locations19];
  D68():
    deopt 262 [n_seg2];
  D77():
    deopt 306 [angles];
  D79():
    deopt 309 [r191, n_seg12];
  L58():
    goto L59();
  L59():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L290() else L291();
  L78():
    st labels = NULL;
    goto L79(NULL);
  L79(r142):
    goto L80();
  L84(c65):
    c70 = `as.logical`(c65);
    if c70 then L356() else L85();
  L96(dx15):
    goto L97(dx15);
  L98():
    sym27 = ldf `seq.int`;
    base27 = ldf `seq.int` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L406() else L407();
  L286():
    stop2 = ldf stop;
    check L287() else D29();
  L335():
    n_loc15 = force? n_loc14;
    checkMissing(n_loc15);
    r140 = `>`(n_loc15, 1.0);
    c59 = `as.logical`(r140);
    c60 = `&&`(c56, c59);
    goto L77(c60);
  L337():
    warning = ldf warning;
    check L338() else D47();
  L346():
    st locations = r147;
    goto L82();
  L350():
    locations20 = force? locations19;
    checkMissing(locations20);
    is_matrix1 = ldf `is.matrix` in base;
    r151 = dyn is_matrix1(locations20);
    check L351() else D54();
  L352():
    ncol14 = ldf ncol;
    check L353() else D55();
  L388():
    n_seg3 = force? n_seg2;
    checkMissing(n_seg3);
    r172 = `+`(n_seg3, 1.0);
    seq_int = ldf `seq.int` in base;
    r173 = dyn seq_int(0.0, 6.283185307179586, r172);
    check L389() else D69();
  L390():
    dr14 = tryDispatchBuiltin.1("[", r171);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L392() else L391(dr14);
  L391(r175):
    n_seg4 = ld `n.seg`;
    check L393() else D70();
  L396():
    sym26 = ldf `seq.int`;
    base26 = ldf `seq.int` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L397() else L398();
  L412():
    angles1 = force? angles;
    checkMissing(angles1);
    length1 = ldf length in base;
    r192 = dyn length1(angles1);
    check L413() else D78();
  L414():
    n_seg13 = force? n_seg12;
    checkMissing(n_seg13);
    r193 = `!=`(r191, n_seg13);
    c89 = `as.logical`(r193);
    if c89 then L415() else L102();
  D29():
    deopt 93 [];
  D47():
    deopt 178 [];
  D54():
    deopt 200 [r151];
  D55():
    deopt 203 [c64];
  D69():
    deopt 268 [r173];
  D70():
    deopt 269 [r175, n_seg4];
  D78():
    deopt 309 [r192];
  L60(r86):
    r87 = `!`(r86);
    c15 = `as.logical`(r87);
    if c15 then L293() else L61();
  L85():
    goto L86();
  L86():
    n_loc16 = ld `n.loc`;
    check L360() else D59();
  L99(r180):
    c88 = `is.object`(r180);
    if c88 then L401() else L402(r180);
  L102():
    goto L103();
  L103():
    scale1 = ld scale;
    check L419() else D82();
  L287():
    r83 = dyn stop2("'nrow * ncol' is less than the number of observations");
    check L288() else D30();
  L290():
    labels1 = ld labels;
    check L292() else D31();
  L291():
    r85 = dyn base12(<sym labels>);
    goto L60(r85);
  L338():
    r141 = dyn warning("labels do not make sense for a single location");
    check L339() else D48();
  L351():
    goto L83(r151);
  L353():
    p19 = prom<V +>{
      locations21 = ld locations;
      locations22 = force? locations21;
      checkMissing(locations22);
      return locations22;
    };
    r154 = dyn ncol14(p19);
    check L354() else D56();
  L356():
    stop3 = ldf stop;
    check L357() else D57();
  L389():
    goto L95(r173);
  L392():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L96(dx14);
  L393():
    n_seg5 = force? n_seg4;
    checkMissing(n_seg5);
    r176 = `+`(n_seg5, 1.0);
    r177 = `-`(<missing>, r176);
    __7 = ldf `[` in base;
    r178 = dyn __7(r175, r177);
    goto L96(r178);
  L397():
    n_seg6 = ld `n.seg`;
    check L399() else D72();
  L398():
    r179 = dyn base26[, , `length.out`](0.0, <sym pi>, <lang `+`(n.seg, 1.0)>);
    goto L99(r179);
  L406():
    n_seg10 = ld `n.seg`;
    check L408() else D75();
  L407():
    r188 = dyn base27[, , `length.out`](0.0, <sym pi>, <sym n.seg>);
    goto L97(r188);
  L413():
    goto L101(r192);
  L415():
    stop5 = ldf stop;
    check L416() else D80();
  D30():
    deopt 95 [r83];
  D31():
    deopt 99 [labels1];
  D48():
    deopt 180 [r141];
  D56():
    deopt 205 [c64, r154];
  D57():
    deopt 210 [];
  D59():
    deopt 215 [n_loc16];
  D72():
    deopt 281 [n_seg6];
  D75():
    deopt 298 [n_seg10];
  D80():
    deopt 313 [];
  D82():
    deopt 318 [scale1];
  L61():
    goto L62(2.1);
  L62(r88):
    st ff = r88;
    expand_grid = ldf `expand.grid`;
    check L295() else D32();
  L100(dx18):
    goto L97(dx18);
  L288():
    goto L59();
  L292():
    labels2 = force? labels1;
    checkMissing(labels2);
    c14 = `==`(labels2, NULL);
    goto L60(c14);
  L293():
    goto L62(2.3);
  L339():
    goto L79(r141);
  L354():
    r155 = `!=`(r154, 2.0);
    c67 = `as.logical`(r155);
    c68 = `||`(c64, c67);
    goto L84(c68);
  L357():
    r156 = dyn stop3("'locations' must be a 2-column matrix.");
    check L358() else D58();
  L360():
    n_loc17 = force? n_loc16;
    checkMissing(n_loc17);
    nrow10 = ldf nrow;
    check L361() else D60();
  L399():
    n_seg7 = force? n_seg6;
    checkMissing(n_seg7);
    r181 = `+`(n_seg7, 1.0);
    seq_int1 = ldf `seq.int` in base;
    r182 = dyn seq_int1(0.0, 3.141592653589793, r181);
    check L400() else D73();
  L401():
    dr16 = tryDispatchBuiltin.1("[", r180);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L403() else L402(dr16);
  L402(r184):
    n_seg8 = ld `n.seg`;
    check L404() else D74();
  L408():
    n_seg11 = force? n_seg10;
    checkMissing(n_seg11);
    seq_int2 = ldf `seq.int` in base;
    r189 = dyn seq_int2(0.0, 3.141592653589793, n_seg11);
    check L409() else D76();
  L416():
    r194 = dyn stop5("length of 'angles' must equal 'ncol(x)'");
    check L417() else D81();
  L419():
    scale2 = force? scale1;
    checkMissing(scale2);
    c90 = `as.logical`(scale2);
    if c90 then L420() else L104();
  D32():
    deopt 109 [];
  D58():
    deopt 212 [r156];
  D60():
    deopt 217 [n_loc17];
  D73():
    deopt 287 [r182];
  D74():
    deopt 288 [r184, n_seg8];
  D76():
    deopt 302 [r189];
  D81():
    deopt 315 [r194];
  L104():
    goto L105();
  L105():
    l = ld x;
    c91 = `is.object`(l);
    if c91 then L424() else L425(0.0, l);
  L295():
    p12 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      ncol10 = ld ncol;
      ncol11 = force? ncol10;
      checkMissing(ncol11);
      r89 = `:`(1, ncol11);
      r90 = `*`(ff1, r89);
      return r90;
    };
    p13 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      nrow8 = ld nrow;
      nrow9 = force? nrow8;
      checkMissing(nrow9);
      r92 = `:`(nrow9, 1.0);
      r93 = `*`(ff3, r92);
      return r93;
    };
    r95 = dyn expand_grid(p12, p13);
    check L296() else D33();
  L358():
    goto L86();
  L361():
    p20 = prom<V +>{
      locations23 = ld locations;
      locations24 = force? locations23;
      checkMissing(locations24);
      return locations24;
    };
    r159 = dyn nrow10(p20);
    check L362() else D61();
  L400():
    goto L99(r182);
  L403():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L100(dx17);
  L404():
    n_seg9 = force? n_seg8;
    checkMissing(n_seg9);
    r185 = `+`(n_seg9, 1.0);
    r186 = `-`(<missing>, r185);
    __8 = ldf `[` in base;
    r187 = dyn __8(r184, r186);
    goto L100(r187);
  L409():
    goto L97(r189);
  L417():
    goto L103();
  L420():
    apply = ldf apply;
    check L421() else D83();
  D33():
    deopt 112 [r95];
  D61():
    deopt 219 [n_loc17, r159];
  D83():
    deopt 321 [];
  L106(dx20):
    st x = dx20;
    sym30 = ldf max;
    base30 = ldf max in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L431() else L432();
  L296():
    c16 = `is.object`(r95);
    if c16 then L297() else L298(r95);
  L362():
    r160 = `!=`(n_loc17, r159);
    c71 = `as.logical`(r160);
    if c71 then L363() else L87();
  L421():
    p21 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p22 = prom<V +>{
      r197 = clos inner2501545716;
      return r197;
    };
    r199 = dyn apply(p21, 2, p22);
    check L422() else D84();
  L424():
    dr18 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L426() else L425(0.0, dr18);
  L425(r202, l2):
    sym29 = ldf `is.na`;
    base29 = ldf `is.na` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L427() else L428();
  D84():
    deopt 325 [r199];
  L63(dx5):
    st locations = dx5;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L301() else L302();
  L87():
    goto L80();
  L107(r210, l5, r211, r212):
    ___ = ldf `[<-` in base;
    r214 = dyn ___(l5, r211, r212);
    goto L106(r214);
  L108(r216):
    st mx = r216;
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L436() else L437();
  L297():
    dr4 = tryDispatchBuiltin.1("[", r95);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L299() else L298(dr4);
  L298(r97):
    n_loc8 = ld `n.loc`;
    check L300() else D34();
  L363():
    stop4 = ldf stop;
    check L364() else D62();
  L422():
    st x = r199;
    goto L105();
  L426():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L106(dx19);
  L427():
    x19 = ld x;
    check L429() else D85();
  L428():
    r209 = dyn base29(<sym x>);
    goto L107(r202, l2, 0.0, r209);
  L431():
    x21 = ld x;
    check L433() else D87();
  L432():
    r215 = dyn base30(<lang `<-`(x, `*`(x, len))>);
    goto L108(r215);
  D34():
    deopt 114 [r97, 1, n_loc8];
  D62():
    deopt 222 [];
  D85():
    deopt 334 [r202, l2, 0.0, x19];
  D87():
    deopt 342 [x21];
  L64(r101):
    r102 = `!`(r101);
    c18 = `as.logical`(r102);
    if c18 then L304() else L65(c18);
  L109(r220):
    c93 = `as.logical`(r220);
    if c93 then L439() else L110();
  L299():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L63(dx4);
  L300():
    n_loc9 = force? n_loc8;
    checkMissing(n_loc9);
    r98 = `:`(1, n_loc9);
    __2 = ldf `[` in base;
    r99 = dyn __2(r95, r98, <missing>);
    goto L63(r99);
  L301():
    labels3 = ld labels;
    check L303() else D35();
  L302():
    r100 = dyn base13(<sym labels>);
    goto L64(r100);
  L364():
    r161 = dyn stop4("number of rows of 'locations' and 'x' must be equal.");
    check L365() else D63();
  L429():
    x20 = force? x19;
    checkMissing(x20);
    is_na = ldf `is.na` in base;
    r213 = dyn is_na(x20);
    check L430() else D86();
  L433():
    x22 = force? x21;
    checkMissing(x22);
    len1 = ld len;
    check L434() else D88();
  L436():
    xlim1 = ld xlim;
    check L438() else D90();
  L437():
    r219 = dyn base31(<sym xlim>);
    goto L109(r219);
  D35():
    deopt 122 [labels3];
  D63():
    deopt 224 [r161];
  D86():
    deopt 337 [r202, l2, 0.0, r213];
  D88():
    deopt 343 [x22, len1];
  D90():
    deopt 351 [xlim1];
  L65(c20):
    c43 = `as.logical`(c20);
    if c43 then L313() else L69();
  L110():
    goto L113();
  L113():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L450() else L451();
  L303():
    labels4 = force? labels3;
    checkMissing(labels4);
    c17 = `==`(labels4, NULL);
    goto L64(c17);
  L304():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L305() else L306();
  L365():
    goto L80();
  L430():
    goto L107(r202, l2, 0.0, r213);
  L434():
    len2 = force? len1;
    checkMissing(len2);
    r217 = `*`(x22, len2);
    st x = r217;
    max = ldf max in base;
    r218 = dyn max(r217);
    check L435() else D89();
  L438():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c92 = `==`(xlim2, NULL);
    goto L109(c92);
  L439():
    sym32 = ldf range;
    base32 = ldf range in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L440() else L441();
  D89():
    deopt 348 [r218];
  L66(c23, r104):
    c24 = `as.logical`(r104);
    if c24 then L67(c23, c24) else L307();
  L69():
    goto L70(NULL);
  L70(r116):
    goto L71();
  L111(r222):
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L444() else L445();
  L114(r234):
    c96 = `as.logical`(r234);
    if c96 then L453() else L115();
  L305():
    missing = ldf missing in base;
    r105 = dyn missing(<sym flip.labels>);
    goto L66(c18, r105);
  L306():
    r103 = dyn base14(<sym flip.labels>);
    goto L66(c18, r103);
  L313():
    ncol12 = ld ncol;
    check L314() else D37();
  L435():
    goto L108(r218);
  L440():
    xloc = ld xloc;
    check L442() else D91();
  L441():
    r221 = dyn base32(<sym xloc>);
    goto L111(r221);
  L450():
    ylim1 = ld ylim;
    check L452() else D96();
  L451():
    r233 = dyn base34(<sym ylim>);
    goto L114(r233);
  D37():
    deopt 136 [ncol12];
  D91():
    deopt 356 [xloc];
  D96():
    deopt 373 [ylim1];
  L67(c25, c26):
    c40 = `as.logical`(c26);
    c41 = `&&`(c25, c40);
    goto L65(c41);
  L112(r227, r228):
    r231 = `+`(r227, r228);
    st xlim = r231;
    goto L113();
  L115():
    goto L118();
  L118():
    st deg = 0.017453292519943295;
    par2 = ldf par;
    check L464() else D102();
  L307():
    sym15 = ldf `is.logical`;
    base15 = ldf `is.logical` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L308() else L309();
  L314():
    ncol13 = force? ncol12;
    checkMissing(ncol13);
    mean = ldf mean;
    check L315() else D38();
  L442():
    xloc1 = force? xloc;
    checkMissing(xloc1);
    range = ldf range in base;
    r223 = dyn range(xloc1);
    check L443() else D92();
  L444():
    mx = ld mx;
    check L446() else D93();
  L445():
    r226 = dyn base33(<lang `-`(mx)>, <sym mx>);
    goto L112(r222, r226);
  L452():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c95 = `==`(ylim2, NULL);
    goto L114(c95);
  L453():
    sym35 = ldf range;
    base35 = ldf range in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L454() else L455();
  D38():
    deopt 138 [ncol13];
  D92():
    deopt 359 [r223];
  D93():
    deopt 361 [r222, mx];
  D102():
    deopt 398 [];
  L68(c33, c34, r107):
    r108 = `!`(r107);
    c36 = `as.logical`(r108);
    c37 = `||`(c34, c36);
    goto L67(c33, c37);
  L116(r236):
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L458() else L459();
  L308():
    flip_labels1 = ld `flip.labels`;
    check L310() else D36();
  L309():
    r106 = dyn base15(<sym flip.labels>);
    goto L68(c23, c24, r106);
  L315():
    p14 = prom<V +>{
      sym16 = ldf nchar;
      base16 = ldf nchar in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r110):
      return r110;
    L1():
      labels5 = ld labels;
      labels6 = force? labels5;
      checkMissing(labels6);
      nchar = ldf nchar in base;
      r111 = dyn nchar(labels6, "c", FALSE, NA_LGL);
      goto L0(r111);
    L2():
      r109 = dyn base16[, type](<sym labels>, "c");
      goto L0(r109);
    };
    r113 = dyn mean(p14);
    check L316() else D39();
  L443():
    goto L111(r223);
  L446():
    mx1 = force? mx;
    checkMissing(mx1);
    r229 = `-`(<missing>, mx1);
    mx2 = ld mx;
    check L447() else D94();
  L454():
    yloc = ld yloc;
    check L456() else D97();
  L455():
    r235 = dyn base35(<sym yloc>);
    goto L116(r235);
  L464():
    p23 = prom<V +>{
      mar1 = ld mar;
      mar2 = force? mar1;
      checkMissing(mar2);
      return mar2;
    };
    p24 = prom<V +>{
      xpd1 = ld xpd;
      xpd2 = force? xpd1;
      checkMissing(xpd2);
      return xpd2;
    };
    r249 = dyn par2[mar, xpd](p23, p24);
    check L465() else D103();
  D36():
    deopt 130 [c23, c24, flip_labels1];
  D39():
    deopt 140 [ncol13, r113];
  D94():
    deopt 364 [r222, mx2];
  D97():
    deopt 378 [yloc];
  D103():
    deopt 403 [r249];
  L117(r241, r242):
    r245 = `+`(r241, r242);
    st ylim = r245;
    goto L118();
  L310():
    flip_labels2 = force? flip_labels1;
    checkMissing(flip_labels2);
    c35 = `is.logical`(flip_labels2);
    goto L68(c23, c24, c35);
  L316():
    r114 = `*`(ncol13, r113);
    r115 = `>`(r114, 30.0);
    st `flip.labels` = r115;
    goto L70(r115);
  L447():
    mx3 = force? mx2;
    checkMissing(mx3);
    c94 = ldf c in base;
    r230 = dyn c94(r229, mx3);
    check L448() else D95();
  L456():
    yloc1 = force? yloc;
    checkMissing(yloc1);
    range1 = ldf range in base;
    r237 = dyn range1(yloc1);
    check L457() else D98();
  L458():
    mx4 = ld mx;
    check L460() else D99();
  L459():
    r240 = dyn base36(<lang `-`(mx)>, <sym mx>);
    goto L117(r236, r240);
  L465():
    st op = r249;
    sym37 = ldf `on.exit`;
    base37 = ldf `on.exit` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L466() else L467();
  D95():
    deopt 367 [r222, r230];
  D98():
    deopt 381 [r237];
  D99():
    deopt 383 [r236, mx4];
  L119():
    dev_hold = ldf `dev.hold`;
    check L468() else D104();
  L448():
    goto L112(r222, r230);
  L457():
    goto L116(r237);
  L460():
    mx5 = force? mx4;
    checkMissing(mx5);
    r243 = `-`(<missing>, mx5);
    mx6 = ld mx;
    check L461() else D100();
  L466():
    on_exit = ldf `on.exit` in base;
    r252 = dyn on_exit(<lang par(op)>);
    goto L119();
  L467():
    r250 = dyn base37(<lang par(op)>);
    goto L119();
  D100():
    deopt 386 [r236, mx6];
  D104():
    deopt 409 [];
  L461():
    mx7 = force? mx6;
    checkMissing(mx7);
    c97 = ldf c in base;
    r244 = dyn c97(r243, mx7);
    check L462() else D101();
  L468():
    r253 = dyn dev_hold();
    check L469() else D105();
  D101():
    deopt 389 [r236, r244];
  D105():
    deopt 410 [r253];
  L462():
    goto L117(r236, r244);
  L469():
    sym38 = ldf `on.exit`;
    base38 = ldf `on.exit` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L470() else L471();
  L120():
    plot1 = ld plot;
    check L472() else D106();
  L470():
    on_exit1 = ldf `on.exit` in base;
    r256 = dyn on_exit1(<lang dev.flush()>, TRUE);
    goto L120();
  L471():
    r254 = dyn base38[, add](<lang dev.flush()>, TRUE);
    goto L120();
  D106():
    deopt 414 [plot1];
  L472():
    plot2 = force? plot1;
    checkMissing(plot2);
    c98 = `as.logical`(plot2);
    if c98 then L473() else L121(c98);
  L121(c100):
    c104 = `as.logical`(c100);
    if c104 then L476() else L122();
  L473():
    add1 = ld add;
    check L474() else D107();
  D107():
    deopt 416 [c98, add1];
  L122():
    goto L123();
  L123():
    plot4 = ld plot;
    check L480() else D110();
  L474():
    add2 = force? add1;
    checkMissing(add2);
    r257 = `!`(add2);
    c101 = `as.logical`(r257);
    c102 = `&&`(c98, c101);
    goto L121(c102);
  L476():
    plot3 = ldf plot;
    check L477() else D108();
  D108():
    deopt 421 [];
  D110():
    deopt 445 [plot4];
  L477():
    ddd1 = ld `...`;
    p25 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p26 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p27 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p28 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    p29 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p30 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p31 = prom<V +>{
      axes7 = ld axes;
      axes8 = force? axes7;
      checkMissing(axes8);
      return axes8;
    };
    r265 = dyn plot3[, type, `...`, xlim, ylim, main, sub, xlab, ylab, asp, axes](0.0, "n", ddd1, p25, p26, p27, p28, p29, p30, 1.0, p31);
    check L478() else D109();
  L480():
    plot5 = force? plot4;
    checkMissing(plot5);
    r267 = `!`(plot5);
    c105 = `as.logical`(r267);
    if c105 then L481() else L124();
  D109():
    deopt 442 [r265];
  L124():
    xloc2 = ld xloc;
    check L485() else D112();
  L478():
    goto L123();
  L481():
    locations33 = ld locations;
    check L482() else D111();
  D111():
    deopt 448 [locations33];
  D112():
    deopt 453 [xloc2];
  L482():
    locations34 = force? locations33;
    checkMissing(locations34);
    popenv;
    return locations34;
  L485():
    xloc3 = force? xloc2;
    checkMissing(xloc3);
    x23 = ld x;
    check L486() else D113();
  D113():
    deopt 454 [xloc3, x23];
  L486():
    x24 = force? x23;
    checkMissing(x24);
    sym39 = ldf `rep.int`;
    base39 = ldf `rep.int` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L487() else L488();
  L126(xloc6, x27, r271):
    r279 = `*`(x27, r271);
    r280 = `+`(xloc6, r279);
    st `s.x` = r280;
    yloc2 = ld yloc;
    check L498() else D119();
  L487():
    sym40 = ldf cos;
    base40 = ldf cos in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L489() else L490();
  L488():
    r270 = dyn base39(<lang cos(angles)>, <lang rep.int(n.loc, n.seg)>);
    goto L126(xloc3, x24, r270);
  D119():
    deopt 474 [yloc2];
  L127(xloc9, x30, r273):
    sym41 = ldf `rep.int`;
    base41 = ldf `rep.int` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L492() else L493();
  L489():
    angles2 = ld angles;
    check L491() else D114();
  L490():
    r272 = dyn base40(<sym angles>);
    goto L127(xloc3, x24, r272);
  L498():
    yloc3 = force? yloc2;
    checkMissing(yloc3);
    x34 = ld x;
    check L499() else D120();
  D114():
    deopt 458 [xloc3, x24, angles2];
  D120():
    deopt 475 [yloc3, x34];
  L128(xloc12, x33, r276):
    rep_int3 = ldf `rep.int` in base;
    r278 = dyn rep_int3(r273, r276);
    check L497() else D118();
  L491():
    angles3 = force? angles2;
    checkMissing(angles3);
    r274 = cos(angles3);
    goto L127(xloc3, x24, r274);
  L492():
    n_loc18 = ld `n.loc`;
    check L494() else D115();
  L493():
    r275 = dyn base41(<sym n.loc>, <sym n.seg>);
    goto L128(xloc9, x30, r275);
  L499():
    x35 = force? x34;
    checkMissing(x35);
    sym42 = ldf `rep.int`;
    base42 = ldf `rep.int` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L500() else L501();
  D115():
    deopt 463 [xloc9, x30, n_loc18];
  D118():
    deopt 470 [xloc12, x33, r278];
  L129(yloc6, x38, r282):
    r290 = `*`(x38, r282);
    r291 = `+`(yloc6, r290);
    st `s.y` = r291;
    draw_segments3 = ld `draw.segments`;
    check L511() else D126();
  L494():
    n_loc19 = force? n_loc18;
    checkMissing(n_loc19);
    n_seg14 = ld `n.seg`;
    check L495() else D116();
  L497():
    goto L126(xloc12, x33, r278);
  L500():
    sym43 = ldf sin;
    base43 = ldf sin in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L502() else L503();
  L501():
    r281 = dyn base42(<lang sin(angles)>, <lang rep.int(n.loc, n.seg)>);
    goto L129(yloc3, x35, r281);
  D116():
    deopt 465 [xloc9, x30, n_seg14];
  D126():
    deopt 495 [draw_segments3];
  L130(yloc9, x41, r284):
    sym44 = ldf `rep.int`;
    base44 = ldf `rep.int` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L505() else L506();
  L495():
    n_seg15 = force? n_seg14;
    checkMissing(n_seg15);
    rep_int2 = ldf `rep.int` in base;
    r277 = dyn rep_int2(n_loc19, n_seg15);
    check L496() else D117();
  L502():
    angles4 = ld angles;
    check L504() else D121();
  L503():
    r283 = dyn base43(<sym angles>);
    goto L130(yloc3, x35, r283);
  L511():
    draw_segments4 = force? draw_segments3;
    checkMissing(draw_segments4);
    c106 = `as.logical`(draw_segments4);
    if c106 then L512() else L132();
  D117():
    deopt 468 [xloc9, x30, r277];
  D121():
    deopt 479 [yloc3, x35, angles4];
  L131(yloc12, x44, r287):
    rep_int5 = ldf `rep.int` in base;
    r289 = dyn rep_int5(r284, r287);
    check L510() else D125();
  L132():
    n_loc24 = ld `n.loc`;
    check L601() else D168();
  L155():
    sym53 = ldf `is.null`;
    base53 = ldf `is.null` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L612() else L613();
  L496():
    goto L128(xloc9, x30, r277);
  L504():
    angles5 = force? angles4;
    checkMissing(angles5);
    r285 = sin(angles5);
    goto L130(yloc3, x35, r285);
  L505():
    n_loc20 = ld `n.loc`;
    check L507() else D122();
  L506():
    r286 = dyn base44(<sym n.loc>, <sym n.seg>);
    goto L131(yloc9, x41, r286);
  L512():
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L513() else L514();
  D122():
    deopt 484 [yloc9, x41, n_loc20];
  D125():
    deopt 491 [yloc12, x44, r289];
  D168():
    deopt 633 [1, n_loc24];
  L133(r293):
    st aangl = r293;
    n_loc22 = ld `n.loc`;
    check L520() else D130();
  L160(r384):
    r385 = `!`(r384);
    c137 = `as.logical`(r385);
    if c137 then L615() else L161();
  L507():
    n_loc21 = force? n_loc20;
    checkMissing(n_loc21);
    n_seg16 = ld `n.seg`;
    check L508() else D123();
  L510():
    goto L129(yloc12, x44, r289);
  L513():
    angles6 = ld angles;
    check L515() else D127();
  L514():
    r292 = dyn base45(<sym angles>, <lang if(full, `*`(2.0, pi), pi)>);
    goto L133(r292);
  L601():
    n_loc25 = force? n_loc24;
    checkMissing(n_loc25);
    r344 = `:`(1, n_loc25);
    s2 = toForSeq(r344);
    l8 = length(s2);
    i140 = 0;
    goto L156(i140);
  L612():
    labels7 = ld labels;
    check L614() else D176();
  L613():
    r383 = dyn base53(<sym labels>);
    goto L160(r383);
  D123():
    deopt 486 [yloc9, x41, n_seg16];
  D127():
    deopt 499 [angles6];
  D130():
    deopt 511 [1, n_loc22];
  D176():
    deopt 679 [labels7];
  L156(i141):
    i142 = `+`.1(i141, 1);
    c123 = `<`.1(l8, i142);
    if c123 then L602() else L159();
  L161():
    goto L169();
  L169():
    sym55 = ldf `is.null`;
    base55 = ldf `is.null` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L638() else L639();
  L508():
    n_seg17 = force? n_seg16;
    checkMissing(n_seg17);
    rep_int4 = ldf `rep.int` in base;
    r288 = dyn rep_int4(n_loc21, n_seg17);
    check L509() else D124();
  L515():
    angles7 = force? angles6;
    checkMissing(angles7);
    full3 = ld full;
    check L516() else D128();
  L520():
    n_loc23 = force? n_loc22;
    checkMissing(n_loc23);
    r296 = `:`(1, n_loc23);
    s = toForSeq(r296);
    l6 = length(s);
    i = 0;
    goto L136(i);
  L614():
    labels8 = force? labels7;
    checkMissing(labels8);
    c136 = `==`(labels8, NULL);
    goto L160(c136);
  L615():
    mx8 = ld mx;
    check L616() else D177();
  D124():
    deopt 489 [yloc9, x41, r288];
  D128():
    deopt 501 [full3];
  D177():
    deopt 683 [mx8];
  L136(i1):
    i2 = `+`.1(i1, 1);
    c109 = `<`.1(l6, i2);
    if c109 then L521() else L154();
  L159():
    x55 = `[[`(s2, i142, NULL, TRUE);
    st i = x55;
    polygon1 = ldf polygon;
    check L603() else D169();
  L170(r418):
    r419 = `!`(r418);
    c144 = `as.logical`(r419);
    if c144 then L641() else L171();
  L509():
    goto L131(yloc9, x41, r288);
  L516():
    full4 = force? full3;
    checkMissing(full4);
    c107 = `as.logical`(full4);
    if c107 then L517() else L134();
  L602():
    goto L155();
  L616():
    mx9 = force? mx8;
    checkMissing(mx9);
    full5 = ld full;
    check L617() else D178();
  L638():
    key_loc1 = ld `key.loc`;
    check L640() else D189();
  L639():
    r417 = dyn base55(<sym key.loc>);
    goto L170(r417);
  D169():
    deopt 637 [i142];
  D178():
    deopt 684 [mx9, full5];
  D189():
    deopt 735 [key_loc1];
  L134():
    goto L135(3.141592653589793);
  L135(r294):
    c108 = ldf c in base;
    r295 = dyn c108(angles7, r294);
    check L519() else D129();
  L154():
    x45 = `[[`(s, i2, NULL, TRUE);
    st i = x45;
    numeric = ldf numeric;
    check L522() else D131();
  L171():
    goto L222();
  L222():
    frame_plot1 = ld `frame.plot`;
    check L836() else D274();
  L517():
    goto L135(6.283185307179586);
  L521():
    goto L155();
  L603():
    p37 = prom<V +>{
      s_x4 = ld `s.x`;
      s_x5 = force? s_x4;
      checkMissing(s_x5);
      c124 = `is.object`(s_x5);
      if c124 then L1() else L2();
    L0(dx48):
      return dx48;
    L1():
      dr40 = tryDispatchBuiltin.1("[", s_x5);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2();
    L2():
      i145 = ld i;
      i146 = force? i145;
      __19 = ldf `[` in base;
      r345 = dyn __19(s_x5, i146, <missing>);
      goto L0(r345);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx47);
    };
    p38 = prom<V +>{
      s_y4 = ld `s.y`;
      s_y5 = force? s_y4;
      checkMissing(s_y5);
      c125 = `is.object`(s_y5);
      if c125 then L1() else L2();
    L0(dx50):
      return dx50;
    L1():
      dr42 = tryDispatchBuiltin.1("[", s_y5);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2();
    L2():
      i147 = ld i;
      i148 = force? i147;
      __20 = ldf `[` in base;
      r347 = dyn __20(s_y5, i148, <missing>);
      goto L0(r347);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx49);
    };
    p39 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    p40 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    p41 = prom<V +>{
      col_stars1 = ld `col.stars`;
      col_stars2 = force? col_stars1;
      checkMissing(col_stars2);
      c126 = `is.object`(col_stars2);
      if c126 then L1() else L2(col_stars2);
    L0(dx52):
      return dx52;
    L1():
      dr44 = tryDispatchBuiltin.1("[", col_stars2);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(col_stars4):
      i149 = ld i;
      i150 = force? i149;
      __21 = ldf `[` in base;
      r351 = dyn __21(col_stars4, i150);
      goto L0(r351);
    L3():
      dx51 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx51);
    };
    r353 = dyn polygon1[, , lwd, lty, col](p37, p38, p39, p40, p41);
    check L604() else D170();
  L617():
    full6 = force? full5;
    checkMissing(full6);
    c138 = `as.logical`(full6);
    if c138 then L618() else L162();
  L640():
    key_loc2 = force? key_loc1;
    checkMissing(key_loc2);
    c143 = `==`(key_loc2, NULL);
    goto L170(c143);
  L641():
    par4 = ldf par;
    check L642() else D190();
  D129():
    deopt 508 [r295];
  D131():
    deopt 515 [i2];
  D170():
    deopt 646 [i142, r353];
  D190():
    deopt 740 [];
  D274():
    deopt 1074 [frame_plot1];
  L162():
    goto L163(mx9, 0.1);
  L163(mx12, r386):
    r387 = `*`(mx12, r386);
    st `y.off` = r387;
    flip_labels5 = ld `flip.labels`;
    check L620() else D179();
  L519():
    goto L133(r295);
  L522():
    r297 = dyn numeric();
    check L523() else D132();
  L604():
    polygon2 = ldf polygon;
    check L605() else D171();
  L618():
    goto L163(mx9, 1.0);
  L642():
    p59 = prom<V +>{
      key_xpd1 = ld `key.xpd`;
      key_xpd2 = force? key_xpd1;
      checkMissing(key_xpd2);
      return key_xpd2;
    };
    r421 = dyn par4[xpd](p59);
    check L643() else D191();
  L836():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c205 = `as.logical`(frame_plot2);
    if c205 then L837() else L223();
  D132():
    deopt 516 [i2, r297];
  D171():
    deopt 648 [i142];
  D179():
    deopt 692 [flip_labels5];
  D191():
    deopt 743 [r421];
  L223():
    goto L224();
  L224():
    sym68 = ldf invisible;
    base68 = ldf invisible in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L841() else L842();
  L523():
    st py = r297;
    st px = r297;
    n_seg18 = ld `n.seg`;
    check L524() else D133();
  L605():
    p42 = prom<V +>{
      s_x8 = ld `s.x`;
      s_x9 = force? s_x8;
      checkMissing(s_x9);
      c127 = `is.object`(s_x9);
      if c127 then L1() else L2();
    L0(dx54):
      return dx54;
    L1():
      dr46 = tryDispatchBuiltin.1("[", s_x9);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      i151 = ld i;
      i152 = force? i151;
      __22 = ldf `[` in base;
      r354 = dyn __22(s_x9, i152, <missing>);
      goto L0(r354);
    L3():
      dx53 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx53);
    };
    p43 = prom<V +>{
      s_y8 = ld `s.y`;
      s_y9 = force? s_y8;
      checkMissing(s_y9);
      c128 = `is.object`(s_y9);
      if c128 then L1() else L2();
    L0(dx56):
      return dx56;
    L1():
      dr48 = tryDispatchBuiltin.1("[", s_y9);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2();
    L2():
      i153 = ld i;
      i154 = force? i153;
      __23 = ldf `[` in base;
      r356 = dyn __23(s_y9, i154, <missing>);
      goto L0(r356);
    L3():
      dx55 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx55);
    };
    p44 = prom<V +>{
      lwd5 = ld lwd;
      lwd6 = force? lwd5;
      checkMissing(lwd6);
      return lwd6;
    };
    p45 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      return lty6;
    };
    p46 = prom<V +>{
      col_lines1 = ld `col.lines`;
      col_lines2 = force? col_lines1;
      checkMissing(col_lines2);
      c129 = `is.object`(col_lines2);
      if c129 then L1() else L2(col_lines2);
    L0(dx58):
      return dx58;
    L1():
      dr50 = tryDispatchBuiltin.1("[", col_lines2);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(col_lines4):
      i155 = ld i;
      i156 = force? i155;
      __24 = ldf `[` in base;
      r360 = dyn __24(col_lines4, i156);
      goto L0(r360);
    L3():
      dx57 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx57);
    };
    p47 = prom<V +>{
      col_stars5 = ld `col.stars`;
      col_stars6 = force? col_stars5;
      checkMissing(col_stars6);
      c130 = `is.object`(col_stars6);
      if c130 then L1() else L2(col_stars6);
    L0(dx60):
      return dx60;
    L1():
      dr52 = tryDispatchBuiltin.1("[", col_stars6);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(col_stars8):
      i157 = ld i;
      i158 = force? i157;
      __25 = ldf `[` in base;
      r362 = dyn __25(col_stars8, i158);
      goto L0(r362);
    L3():
      dx59 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx59);
    };
    r364 = dyn polygon2[, , lwd, lty, border, col](p42, p43, p44, p45, p46, p47);
    check L606() else D172();
  L620():
    flip_labels6 = force? flip_labels5;
    checkMissing(flip_labels6);
    c139 = `as.logical`(flip_labels6);
    if c139 then L621() else L164();
  L643():
    len3 = ld len;
    check L644() else D192();
  L837():
    box = ldf box;
    check L838() else D275();
  D133():
    deopt 520 [i2, 1, n_seg18];
  D172():
    deopt 659 [i142, r364];
  D192():
    deopt 744 [len3];
  D275():
    deopt 1077 [];
  L164():
    goto L168();
  L168():
    text = ldf text;
    check L635() else D187();
  L225(r602):
    popenv;
    return r602;
  L524():
    n_seg19 = force? n_seg18;
    checkMissing(n_seg19);
    r298 = `:`(1, n_seg19);
    s1 = toForSeq(r298);
    l7 = length(s1);
    i5 = 0;
    goto L137(i2, i5);
  L606():
    radius1 = ld radius;
    check L607() else D173();
  L621():
    y_off = ld `y.off`;
    check L622() else D180();
  L644():
    len4 = force? len3;
    checkMissing(len4);
    sym56 = ldf cos;
    base56 = ldf cos in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L645() else L646();
  L838():
    ddd2 = ld `...`;
    r599 = dyn box[`...`](ddd2);
    check L839() else D276();
  L841():
    locations35 = ld locations;
    check L843() else D277();
  L842():
    r601 = dyn base68(<sym locations>);
    goto L225(r601);
  D173():
    deopt 660 [i142, radius1];
  D180():
    deopt 694 [y_off];
  D187():
    deopt 723 [];
  D276():
    deopt 1079 [r599];
  D277():
    deopt 1084 [locations35];
  L137(i6, i7):
    i8 = `+`.1(i7, 1);
    c110 = `<`.1(l7, i8);
    if c110 then L525() else L153();
  L172(len7, r423):
    r425 = `*`(len7, r423);
    key_loc3 = ld `key.loc`;
    check L648() else D194();
  L607():
    radius2 = force? radius1;
    checkMissing(radius2);
    c131 = `as.logical`(radius2);
    if c131 then L608() else L157();
  L622():
    y_off1 = force? y_off;
    checkMissing(y_off1);
    cex1 = ld cex;
    check L623() else D181();
  L635():
    p54 = prom<V +>{
      xloc25 = ld xloc;
      xloc26 = force? xloc25;
      checkMissing(xloc26);
      return xloc26;
    };
    p55 = prom<V +>{
      yloc25 = ld yloc;
      yloc26 = force? yloc25;
      checkMissing(yloc26);
      y_off9 = ld `y.off`;
      y_off10 = force? y_off9;
      checkMissing(y_off10);
      r407 = `-`(yloc26, y_off10);
      return r407;
    };
    p56 = prom<V +>{
      labels9 = ld labels;
      labels10 = force? labels9;
      checkMissing(labels10);
      return labels10;
    };
    p57 = prom<V +>{
      cex7 = ld cex;
      cex8 = force? cex7;
      checkMissing(cex8);
      return cex8;
    };
    p58 = prom<V +>{
      sym54 = ldf c;
      base54 = ldf c in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L1() else L2();
    L0(r412):
      return r412;
    L1():
      c142 = ldf c in base;
      r413 = dyn c142(0.5, 1.0);
      goto L0(r413);
    L2():
      r411 = dyn base54(0.5, 1.0);
      goto L0(r411);
    };
    r415 = dyn text[, , , cex, adj](p54, p55, p56, p57, p58);
    check L636() else D188();
  L645():
    angles8 = ld angles;
    check L647() else D193();
  L646():
    r422 = dyn base56(<sym angles>);
    goto L172(len4, r422);
  L839():
    goto L224();
  L843():
    locations36 = force? locations35;
    checkMissing(locations36);
    invisible = ldf invisible in base;
    r603 = dyn invisible(locations36);
    check L844() else D278();
  D181():
    deopt 695 [y_off1, cex1];
  D188():
    deopt 731 [r415];
  D193():
    deopt 746 [len4, angles8];
  D194():
    deopt 749 [r425, key_loc3];
  D278():
    deopt 1087 [r603];
  L153():
    x46 = `[[`(s1, i8, NULL, TRUE);
    st j = x46;
    sym46 = ldf `seq.int`;
    base46 = ldf `seq.int` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L526() else L527();
  L157():
    goto L158(i142);
  L158(i169):
    goto L156(i169);
  L525():
    polygon = ldf polygon;
    check L598() else D166();
  L608():
    segments = ldf segments;
    check L609() else D174();
  L623():
    cex2 = force? cex1;
    checkMissing(cex2);
    par3 = ldf par;
    check L624() else D182();
  L636():
    goto L169();
  L647():
    angles9 = force? angles8;
    checkMissing(angles9);
    r424 = cos(angles9);
    goto L172(len4, r424);
  L648():
    key_loc4 = force? key_loc3;
    checkMissing(key_loc4);
    c145 = `is.object`(key_loc4);
    if c145 then L649() else L650(r425, key_loc4);
  L844():
    goto L225(r603);
  D166():
    deopt 619 [i6];
  D174():
    deopt 663 [i142];
  D182():
    deopt 697 [y_off1, cex2];
  L138(i17, i18, r300):
    st k = r300;
    sym47 = ldf c;
    base47 = ldf c in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L540() else L541();
  L173(r429, dx72):
    r431 = `+`(r429, dx72);
    st `key.x` = r431;
    len8 = ld len;
    check L652() else D195();
  L526():
    aangl = ld aangl;
    check L528() else D134();
  L527():
    r299 = dyn base46[from, to, by](<lang `[`(aangl, j)>, <lang `[`(aangl, `+`(j, 1.0))>, <lang `*`(1.0, deg)>);
    goto L138(i6, i8, r299);
  L598():
    p32 = prom<V +>{
      px2 = ld px;
      px3 = force? px2;
      checkMissing(px3);
      return px3;
    };
    p33 = prom<V +>{
      py2 = ld py;
      py3 = force? py2;
      checkMissing(py3);
      return py3;
    };
    p34 = prom<V +>{
      col_segments1 = ld `col.segments`;
      col_segments2 = force? col_segments1;
      checkMissing(col_segments2);
      return col_segments2;
    };
    p35 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    p36 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    r343 = dyn polygon[, , col, lwd, lty](p32, p33, p34, p35, p36);
    check L599() else D167();
  L609():
    p48 = prom<V +>{
      sym51 = ldf `rep.int`;
      base51 = ldf `rep.int` in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L2() else L3();
    L0(r366):
      return r366;
    L2():
      xloc21 = ld xloc;
      xloc22 = force? xloc21;
      checkMissing(xloc22);
      c132 = `is.object`(xloc22);
      if c132 then L4() else L5(xloc22);
    L3():
      r365 = dyn base51(<lang `[`(xloc, i)>, <sym n.seg>);
      goto L0(r365);
    L1(dx62):
      n_seg20 = ld `n.seg`;
      n_seg21 = force? n_seg20;
      checkMissing(n_seg21);
      rep_int6 = ldf `rep.int` in base;
      r368 = dyn rep_int6(dx62, n_seg21);
      goto L0(r368);
    L4():
      dr54 = tryDispatchBuiltin.1("[", xloc22);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L6() else L5(dr54);
    L5(xloc24):
      i161 = ld i;
      i162 = force? i161;
      __26 = ldf `[` in base;
      r367 = dyn __26(xloc24, i162);
      goto L1(r367);
    L6():
      dx61 = getTryDispatchBuiltinValue(dr54);
      goto L1(dx61);
    };
    p49 = prom<V +>{
      sym52 = ldf `rep.int`;
      base52 = ldf `rep.int` in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L2() else L3();
    L0(r371):
      return r371;
    L2():
      yloc21 = ld yloc;
      yloc22 = force? yloc21;
      checkMissing(yloc22);
      c133 = `is.object`(yloc22);
      if c133 then L4() else L5(yloc22);
    L3():
      r370 = dyn base52(<lang `[`(yloc, i)>, <sym n.seg>);
      goto L0(r370);
    L1(dx64):
      n_seg22 = ld `n.seg`;
      n_seg23 = force? n_seg22;
      checkMissing(n_seg23);
      rep_int7 = ldf `rep.int` in base;
      r373 = dyn rep_int7(dx64, n_seg23);
      goto L0(r373);
    L4():
      dr56 = tryDispatchBuiltin.1("[", yloc22);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L6() else L5(dr56);
    L5(yloc24):
      i163 = ld i;
      i164 = force? i163;
      __27 = ldf `[` in base;
      r372 = dyn __27(yloc24, i164);
      goto L1(r372);
    L6():
      dx63 = getTryDispatchBuiltinValue(dr56);
      goto L1(dx63);
    };
    p50 = prom<V +>{
      s_x12 = ld `s.x`;
      s_x13 = force? s_x12;
      checkMissing(s_x13);
      c134 = `is.object`(s_x13);
      if c134 then L1() else L2();
    L0(dx66):
      return dx66;
    L1():
      dr58 = tryDispatchBuiltin.1("[", s_x13);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2();
    L2():
      i165 = ld i;
      i166 = force? i165;
      __28 = ldf `[` in base;
      r375 = dyn __28(s_x13, i166, <missing>);
      goto L0(r375);
    L3():
      dx65 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx65);
    };
    p51 = prom<V +>{
      s_y12 = ld `s.y`;
      s_y13 = force? s_y12;
      checkMissing(s_y13);
      c135 = `is.object`(s_y13);
      if c135 then L1() else L2();
    L0(dx68):
      return dx68;
    L1():
      dr60 = tryDispatchBuiltin.1("[", s_y13);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2();
    L2():
      i167 = ld i;
      i168 = force? i167;
      __29 = ldf `[` in base;
      r377 = dyn __29(s_y13, i168, <missing>);
      goto L0(r377);
    L3():
      dx67 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx67);
    };
    p52 = prom<V +>{
      lwd7 = ld lwd;
      lwd8 = force? lwd7;
      checkMissing(lwd8);
      return lwd8;
    };
    p53 = prom<V +>{
      lty7 = ld lty;
      lty8 = force? lty7;
      checkMissing(lty8);
      return lty8;
    };
    r381 = dyn segments[, , , , lwd, lty](p48, p49, p50, p51, p52, p53);
    check L610() else D175();
  L624():
    r388 = dyn par3("cxy");
    check L625() else D183();
  L649():
    dr64 = tryDispatchBuiltin.1("[", key_loc4);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L651() else L650(r425, dr64);
  L650(r427, key_loc6):
    __32 = ldf `[` in base;
    r430 = dyn __32(key_loc6, 1);
    goto L173(r427, r430);
  D134():
    deopt 525 [i6, i8, aangl];
  D167():
    deopt 628 [i6, r343];
  D175():
    deopt 672 [i142, r381];
  D183():
    deopt 699 [y_off1, cex2, r388];
  D195():
    deopt 756 [len8];
  L141(i39, i40, r307):
    st px = r307;
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L569() else L570();
  L528():
    aangl1 = force? aangl;
    checkMissing(aangl1);
    c111 = `is.object`(aangl1);
    if c111 then L529() else L530(i6, i8, aangl1);
  L540():
    px = ld px;
    check L542() else D140();
  L541():
    r306 = dyn base47(<sym px>, <lang `[`(xloc, i)>, <lang `[`(s.x, i, j)>, <lang `+`(`*`(`[`(x, i, j), cos(k)), `[`(xloc, i))>, NA_LGL);
    goto L141(i17, i18, r306);
  L599():
    goto L136(i6);
  L610():
    goto L158(i142);
  L625():
    c140 = `is.object`(r388);
    if c140 then L626() else L627(y_off1, cex2, r388);
  L651():
    dx71 = getTryDispatchBuiltinValue(dr64);
    goto L173(r425, dx71);
  L652():
    len9 = force? len8;
    checkMissing(len9);
    sym57 = ldf sin;
    base57 = ldf sin in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L653() else L654();
  D140():
    deopt 549 [i17, i18, px];
  L139(i25, i26, dx22):
    aangl4 = ld aangl;
    check L533() else D136();
  L147(i91, i92, r323):
    st py = r323;
    goto L137(i91, i92);
  L165(y_off5, cex6, dx70):
    r392 = `*`(cex6, dx70);
    n_loc26 = ld `n.loc`;
    check L629() else D184();
  L174(len12, r433):
    r435 = `*`(len12, r433);
    key_loc7 = ld `key.loc`;
    check L656() else D197();
  L529():
    dr20 = tryDispatchBuiltin.1("[", aangl1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L531() else L530(i6, i8, dr20);
  L530(i21, i22, aangl3):
    j = ld j;
    check L532() else D135();
  L542():
    px1 = force? px;
    checkMissing(px1);
    xloc13 = ld xloc;
    check L543() else D141();
  L569():
    py = ld py;
    check L571() else D153();
  L570():
    r322 = dyn base49(<sym py>, <lang `[`(yloc, i)>, <lang `[`(s.y, i, j)>, <lang `+`(`*`(`[`(x, i, j), sin(k)), `[`(yloc, i))>, NA_LGL);
    goto L147(i39, i40, r322);
  L626():
    dr62 = tryDispatchBuiltin.1("[", r388);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L628() else L627(y_off1, cex2, dr62);
  L627(y_off3, cex4, r390):
    __30 = ldf `[` in base;
    r391 = dyn __30(r390, 2);
    goto L165(y_off3, cex4, r391);
  L653():
    angles10 = ld angles;
    check L655() else D196();
  L654():
    r432 = dyn base57(<sym angles>);
    goto L174(len9, r432);
  D135():
    deopt 527 [i21, i22, aangl3, j];
  D136():
    deopt 531 [i25, i26, aangl4];
  D141():
    deopt 551 [i17, i18, xloc13];
  D153():
    deopt 583 [i39, i40, py];
  D184():
    deopt 705 [y_off5, r392, 1, n_loc26];
  D196():
    deopt 758 [len9, angles10];
  D197():
    deopt 761 [r435, key_loc7];
  L531():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L139(i6, i8, dx21);
  L532():
    j1 = force? j;
    __9 = ldf `[` in base;
    r301 = dyn __9(aangl3, j1);
    goto L139(i21, i22, r301);
  L533():
    aangl5 = force? aangl4;
    checkMissing(aangl5);
    c112 = `is.object`(aangl5);
    if c112 then L534() else L535(i25, i26, aangl5);
  L543():
    xloc14 = force? xloc13;
    checkMissing(xloc14);
    c113 = `is.object`(xloc14);
    if c113 then L544() else L545(i17, i18, xloc14);
  L571():
    py1 = force? py;
    checkMissing(py1);
    yloc13 = ld yloc;
    check L572() else D154();
  L628():
    dx69 = getTryDispatchBuiltinValue(dr62);
    goto L165(y_off1, cex2, dx69);
  L629():
    n_loc27 = force? n_loc26;
    checkMissing(n_loc27);
    r393 = `:`(1, n_loc27);
    __31 = ldf `%%` in base;
    r394 = dyn __31(r393, 2.0);
    check L630() else D185();
  L655():
    angles11 = force? angles10;
    checkMissing(angles11);
    r434 = sin(angles11);
    goto L174(len9, r434);
  L656():
    key_loc8 = force? key_loc7;
    checkMissing(key_loc8);
    c146 = `is.object`(key_loc8);
    if c146 then L657() else L658(r435, key_loc8);
  D154():
    deopt 585 [i39, i40, yloc13];
  D185():
    deopt 710 [y_off5, r392, r394];
  L140(i33, i34, dx24):
    deg = ld deg;
    check L538() else D138();
  L142(i47, i48, dx26):
    s_x = ld `s.x`;
    check L548() else D143();
  L175(r439, dx74):
    r441 = `+`(r439, dx74);
    st `key.y` = r441;
    draw_segments5 = ld `draw.segments`;
    check L660() else D198();
  L534():
    dr22 = tryDispatchBuiltin.1("[", aangl5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L536() else L535(i25, i26, dr22);
  L535(i29, i30, aangl7):
    j2 = ld j;
    check L537() else D137();
  L544():
    dr24 = tryDispatchBuiltin.1("[", xloc14);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L546() else L545(i17, i18, dr24);
  L545(i43, i44, xloc16):
    i49 = ld i;
    check L547() else D142();
  L572():
    yloc14 = force? yloc13;
    checkMissing(yloc14);
    c118 = `is.object`(yloc14);
    if c118 then L573() else L574(i39, i40, yloc14);
  L630():
    full7 = ld full;
    check L631() else D186();
  L657():
    dr66 = tryDispatchBuiltin.1("[", key_loc8);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L659() else L658(r435, dr66);
  L658(r437, key_loc10):
    __33 = ldf `[` in base;
    r440 = dyn __33(key_loc10, 2);
    goto L175(r437, r440);
  D137():
    deopt 533 [i29, i30, aangl7, j2];
  D138():
    deopt 540 [i33, i34, 1.0, deg];
  D142():
    deopt 553 [i43, i44, xloc16, i49];
  D143():
    deopt 556 [i47, i48, s_x];
  D186():
    deopt 710 [y_off5, r392, r394, full7];
  D198():
    deopt 768 [draw_segments5];
  L148(i99, i100, dx37):
    s_y = ld `s.y`;
    check L577() else D156();
  L536():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L140(i25, i26, dx23);
  L537():
    j3 = force? j2;
    checkMissing(j3);
    r302 = `+`(j3, 1.0);
    __10 = ldf `[` in base;
    r303 = dyn __10(aangl7, r302);
    goto L140(i29, i30, r303);
  L538():
    deg1 = force? deg;
    checkMissing(deg1);
    r304 = `*`(1.0, deg1);
    seq_int3 = ldf `seq.int` in base;
    r305 = dyn seq_int3(dx22, dx24, r304);
    check L539() else D139();
  L546():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L142(i17, i18, dx25);
  L547():
    i50 = force? i49;
    __11 = ldf `[` in base;
    r308 = dyn __11(xloc16, i50);
    goto L142(i43, i44, r308);
  L548():
    s_x1 = force? s_x;
    checkMissing(s_x1);
    c114 = `is.object`(s_x1);
    if c114 then L549() else L550(i47, i48, s_x1);
  L573():
    dr32 = tryDispatchBuiltin.1("[", yloc14);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L575() else L574(i39, i40, dr32);
  L574(i95, i96, yloc16):
    i101 = ld i;
    check L576() else D155();
  L631():
    full8 = force? full7;
    checkMissing(full8);
    c141 = `as.logical`(full8);
    if c141 then L632() else L166();
  L659():
    dx73 = getTryDispatchBuiltinValue(dr66);
    goto L175(r435, dx73);
  L660():
    draw_segments6 = force? draw_segments5;
    checkMissing(draw_segments6);
    c147 = `as.logical`(draw_segments6);
    if c147 then L661() else L176();
  D139():
    deopt 545 [i33, i34, r305];
  D155():
    deopt 587 [i95, i96, yloc16, i101];
  D156():
    deopt 590 [i99, i100, s_y];
  L143(i57, i58, dx28):
    x47 = ld x;
    check L554() else D146();
  L166():
    goto L167(y_off5, r392, r394, 0.0);
  L167(y_off8, r399, r400, r401):
    r402 = `-`(r400, r401);
    r403 = `*`(r399, r402);
    r404 = `+`(y_off8, r403);
    st `y.off` = r404;
    goto L168();
  L176():
    polygon4 = ldf polygon;
    check L725() else D226();
  L192():
    angles12 = ld angles;
    check L732() else D231();
  L539():
    goto L138(i33, i34, r305);
  L549():
    dr26 = tryDispatchBuiltin.1("[", s_x1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L551() else L550(i47, i48, dr26);
  L550(i53, i54, s_x3):
    i59 = ld i;
    check L552() else D144();
  L575():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L148(i39, i40, dx36);
  L576():
    i102 = force? i101;
    __15 = ldf `[` in base;
    r324 = dyn __15(yloc16, i102);
    goto L148(i95, i96, r324);
  L577():
    s_y1 = force? s_y;
    checkMissing(s_y1);
    c119 = `is.object`(s_y1);
    if c119 then L578() else L579(i99, i100, s_y1);
  L632():
    goto L167(y_off5, r392, r394, 0.4);
  L661():
    numeric1 = ldf numeric;
    check L662() else D199();
  D144():
    deopt 558 [i53, i54, s_x3, i59];
  D146():
    deopt 562 [i57, i58, x47];
  D199():
    deopt 771 [];
  D226():
    deopt 876 [];
  D231():
    deopt 899 [angles12];
  L149(i109, i110, dx39):
    x51 = ld x;
    check L583() else D159();
  L551():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L143(i47, i48, dx27);
  L552():
    i60 = force? i59;
    j4 = ld j;
    check L553() else D145();
  L554():
    x48 = force? x47;
    checkMissing(x48);
    c115 = `is.object`(x48);
    if c115 then L555() else L556(i57, i58, x48);
  L578():
    dr34 = tryDispatchBuiltin.1("[", s_y1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L580() else L579(i99, i100, dr34);
  L579(i105, i106, s_y3):
    i111 = ld i;
    check L581() else D157();
  L662():
    r442 = dyn numeric1();
    check L663() else D200();
  L725():
    p65 = prom<V +>{
      key_x4 = ld `key.x`;
      key_x5 = force? key_x4;
      checkMissing(key_x5);
      return key_x5;
    };
    p66 = prom<V +>{
      key_y4 = ld `key.y`;
      key_y5 = force? key_y4;
      checkMissing(key_y5);
      return key_y5;
    };
    p67 = prom<V +>{
      lwd11 = ld lwd;
      lwd12 = force? lwd11;
      checkMissing(lwd12);
      return lwd12;
    };
    p68 = prom<V +>{
      lty11 = ld lty;
      lty12 = force? lty11;
      checkMissing(lty12);
      return lty12;
    };
    r492 = dyn polygon4[, , lwd, lty](p65, p66, p67, p68);
    check L726() else D227();
  L732():
    angles13 = force? angles12;
    checkMissing(angles13);
    draw_segments7 = ld `draw.segments`;
    check L733() else D232();
  D145():
    deopt 559 [i53, i54, s_x3, i60, j4];
  D157():
    deopt 592 [i105, i106, s_y3, i111];
  D159():
    deopt 596 [i109, i110, x51];
  D200():
    deopt 772 [r442];
  D227():
    deopt 883 [r492];
  D232():
    deopt 900 [angles13, draw_segments7];
  L144(i67, i68, dx30):
    sym48 = ldf cos;
    base48 = ldf cos in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L560() else L561();
  L553():
    j5 = force? j4;
    __12 = ldf `[` in base;
    r309 = dyn __12(s_x3, i60, j5);
    goto L143(i53, i54, r309);
  L555():
    dr28 = tryDispatchBuiltin.1("[", x48);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L557() else L556(i57, i58, dr28);
  L556(i63, i64, x50):
    i69 = ld i;
    check L558() else D147();
  L580():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L149(i99, i100, dx38);
  L581():
    i112 = force? i111;
    j8 = ld j;
    check L582() else D158();
  L583():
    x52 = force? x51;
    checkMissing(x52);
    c120 = `is.object`(x52);
    if c120 then L584() else L585(i109, i110, x52);
  L663():
    st py = r442;
    st px = r442;
    n_seg24 = ld `n.seg`;
    check L664() else D201();
  L726():
    radius3 = ld radius;
    check L727() else D228();
  L733():
    draw_segments8 = force? draw_segments7;
    checkMissing(draw_segments8);
    c162 = `as.logical`(draw_segments8);
    if c162 then L734() else L194();
  D147():
    deopt 564 [i63, i64, x50, i69];
  D158():
    deopt 593 [i105, i106, s_y3, i112, j8];
  D201():
    deopt 776 [1, n_seg24];
  D228():
    deopt 884 [radius3];
  L145(i75, i76, dx33, r312):
    r314 = `*`(dx33, r312);
    xloc17 = ld xloc;
    check L563() else D150();
  L150(i119, i120, dx41):
    sym50 = ldf sin;
    base50 = ldf sin in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L589() else L590();
  L194():
    goto L197(angles13, 0.0);
  L197(angles32, r512):
    r513 = `+`(angles32, r512);
    st `lab.angl` = r513;
    len23 = ld len;
    check L744() else D235();
  L557():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L144(i57, i58, dx29);
  L558():
    i70 = force? i69;
    j6 = ld j;
    check L559() else D148();
  L560():
    k = ld k;
    check L562() else D149();
  L561():
    r311 = dyn base48(<sym k>);
    goto L145(i67, i68, dx30, r311);
  L582():
    j9 = force? j8;
    __16 = ldf `[` in base;
    r325 = dyn __16(s_y3, i112, j9);
    goto L149(i105, i106, r325);
  L584():
    dr36 = tryDispatchBuiltin.1("[", x52);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L586() else L585(i109, i110, dr36);
  L585(i115, i116, x54):
    i121 = ld i;
    check L587() else D160();
  L664():
    n_seg25 = force? n_seg24;
    checkMissing(n_seg25);
    r443 = `:`(1, n_seg25);
    s3 = toForSeq(r443);
    l9 = length(s3);
    i170 = 0;
    goto L177(i170);
  L727():
    radius4 = force? radius3;
    checkMissing(radius4);
    c159 = `as.logical`(radius4);
    if c159 then L728() else L193();
  L734():
    angles16 = ld angles;
    check L735() else D233();
  D148():
    deopt 565 [i63, i64, x50, i70, j6];
  D149():
    deopt 568 [i67, i68, dx30, k];
  D150():
    deopt 571 [i75, i76, r314, xloc17];
  D160():
    deopt 598 [i115, i116, x54, i121];
  D233():
    deopt 902 [angles13, angles16];
  D235():
    deopt 919 [1.1, len23];
  L151(i127, i128, dx44, r328):
    r330 = `*`(dx44, r328);
    yloc17 = ld yloc;
    check L592() else D163();
  L177(i171):
    i172 = `+`.1(i171, 1);
    c148 = `<`.1(l9, i172);
    if c148 then L665() else L191();
  L193():
    goto L192();
  L559():
    j7 = force? j6;
    __13 = ldf `[` in base;
    r310 = dyn __13(x50, i70, j7);
    goto L144(i63, i64, r310);
  L562():
    k1 = force? k;
    checkMissing(k1);
    r313 = cos(k1);
    goto L145(i67, i68, dx30, r313);
  L563():
    xloc18 = force? xloc17;
    checkMissing(xloc18);
    c116 = `is.object`(xloc18);
    if c116 then L564() else L565(i75, i76, r314, xloc18);
  L586():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L150(i109, i110, dx40);
  L587():
    i122 = force? i121;
    j10 = ld j;
    check L588() else D161();
  L589():
    k2 = ld k;
    check L591() else D162();
  L590():
    r327 = dyn base50(<sym k>);
    goto L151(i119, i120, dx41, r327);
  L728():
    segments1 = ldf segments;
    check L729() else D229();
  L735():
    angles17 = force? angles16;
    checkMissing(angles17);
    c163 = `is.object`(angles17);
    if c163 then L736() else L737(angles13, angles17);
  L744():
    len24 = force? len23;
    checkMissing(len24);
    r514 = `*`(1.1, len24);
    sym65 = ldf cos;
    base65 = ldf cos in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L745() else L746();
  D161():
    deopt 599 [i115, i116, x54, i122, j10];
  D162():
    deopt 602 [i119, i120, dx41, k2];
  D163():
    deopt 605 [i127, i128, r330, yloc17];
  D229():
    deopt 887 [];
  L146(i83, i84, r318, dx35):
    r320 = `+`(r318, dx35);
    c117 = ldf c in base;
    r321 = dyn c117(px1, dx26, dx28, r320, NA_LGL);
    check L568() else D152();
  L191():
    x56 = `[[`(s3, i172, NULL, TRUE);
    st j = x56;
    sym58 = ldf `seq.int`;
    base58 = ldf `seq.int` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L666() else L667();
  L195(angles23, dx96):
    angles24 = ld angles;
    check L739() else D234();
  L198(r518, r519):
    r521 = `*`(r518, r519);
    key_loc35 = ld `key.loc`;
    check L748() else D237();
  L564():
    dr30 = tryDispatchBuiltin.1("[", xloc18);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L566() else L565(i75, i76, r314, dr30);
  L565(i79, i80, r316, xloc20):
    i85 = ld i;
    check L567() else D151();
  L588():
    j11 = force? j10;
    __17 = ldf `[` in base;
    r326 = dyn __17(x54, i122, j11);
    goto L150(i115, i116, r326);
  L591():
    k3 = force? k2;
    checkMissing(k3);
    r329 = sin(k3);
    goto L151(i119, i120, dx41, r329);
  L592():
    yloc18 = force? yloc17;
    checkMissing(yloc18);
    c121 = `is.object`(yloc18);
    if c121 then L593() else L594(i127, i128, r330, yloc18);
  L665():
    polygon3 = ldf polygon;
    check L722() else D224();
  L729():
    p69 = prom<V +>{
      sym63 = ldf `rep.int`;
      base63 = ldf `rep.int` in base;
      guard63 = `==`.4(sym63, base63);
      if guard63 then L2() else L3();
    L0(r494):
      return r494;
    L2():
      key_loc27 = ld `key.loc`;
      key_loc28 = force? key_loc27;
      checkMissing(key_loc28);
      c160 = `is.object`(key_loc28);
      if c160 then L4() else L5(key_loc28);
    L3():
      r493 = dyn base63(<lang `[`(key.loc, 1)>, <sym n.seg>);
      goto L0(r493);
    L1(dx92):
      n_seg26 = ld `n.seg`;
      n_seg27 = force? n_seg26;
      checkMissing(n_seg27);
      rep_int8 = ldf `rep.int` in base;
      r496 = dyn rep_int8(dx92, n_seg27);
      goto L0(r496);
    L4():
      dr84 = tryDispatchBuiltin.1("[", key_loc28);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L6() else L5(dr84);
    L5(key_loc30):
      __42 = ldf `[` in base;
      r495 = dyn __42(key_loc30, 1);
      goto L1(r495);
    L6():
      dx91 = getTryDispatchBuiltinValue(dr84);
      goto L1(dx91);
    };
    p70 = prom<V +>{
      sym64 = ldf `rep.int`;
      base64 = ldf `rep.int` in base;
      guard64 = `==`.4(sym64, base64);
      if guard64 then L2() else L3();
    L0(r499):
      return r499;
    L2():
      key_loc31 = ld `key.loc`;
      key_loc32 = force? key_loc31;
      checkMissing(key_loc32);
      c161 = `is.object`(key_loc32);
      if c161 then L4() else L5(key_loc32);
    L3():
      r498 = dyn base64(<lang `[`(key.loc, 2)>, <sym n.seg>);
      goto L0(r498);
    L1(dx94):
      n_seg28 = ld `n.seg`;
      n_seg29 = force? n_seg28;
      checkMissing(n_seg29);
      rep_int9 = ldf `rep.int` in base;
      r501 = dyn rep_int9(dx94, n_seg29);
      goto L0(r501);
    L4():
      dr86 = tryDispatchBuiltin.1("[", key_loc32);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L6() else L5(dr86);
    L5(key_loc34):
      __43 = ldf `[` in base;
      r500 = dyn __43(key_loc34, 2);
      goto L1(r500);
    L6():
      dx93 = getTryDispatchBuiltinValue(dr86);
      goto L1(dx93);
    };
    p71 = prom<V +>{
      key_x6 = ld `key.x`;
      key_x7 = force? key_x6;
      checkMissing(key_x7);
      return key_x7;
    };
    p72 = prom<V +>{
      key_y6 = ld `key.y`;
      key_y7 = force? key_y6;
      checkMissing(key_y7);
      return key_y7;
    };
    p73 = prom<V +>{
      lwd13 = ld lwd;
      lwd14 = force? lwd13;
      checkMissing(lwd14);
      return lwd14;
    };
    p74 = prom<V +>{
      lty13 = ld lty;
      lty14 = force? lty13;
      checkMissing(lty14);
      return lty14;
    };
    r507 = dyn segments1[, , , , lwd, lty](p69, p70, p71, p72, p73, p74);
    check L730() else D230();
  L736():
    dr88 = tryDispatchBuiltin.1("[", angles17);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L738() else L737(angles13, dr88);
  L737(angles20, angles21):
    __44 = ldf `[` in base;
    r508 = dyn __44(angles21, 2);
    goto L195(angles20, r508);
  L745():
    lab_angl = ld `lab.angl`;
    check L747() else D236();
  L746():
    r517 = dyn base65(<sym lab.angl>);
    goto L198(r514, r517);
  D151():
    deopt 573 [i79, i80, r316, xloc20, i85];
  D152():
    deopt 579 [i83, i84, r321];
  D224():
    deopt 865 [];
  D230():
    deopt 896 [r507];
  D234():
    deopt 906 [angles23, dx96, angles24];
  D236():
    deopt 922 [r514, lab_angl];
  D237():
    deopt 925 [r521, key_loc35];
  L152(i135, i136, r334, dx46):
    r336 = `+`(r334, dx46);
    c122 = ldf c in base;
    r337 = dyn c122(py1, dx37, dx39, r336, NA_LGL);
    check L597() else D165();
  L178(i177, r445):
    st k = r445;
    sym59 = ldf c;
    base59 = ldf c in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L680() else L681();
  L566():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L146(i75, i76, r314, dx34);
  L567():
    i86 = force? i85;
    __14 = ldf `[` in base;
    r319 = dyn __14(xloc20, i86);
    goto L146(i79, i80, r316, r319);
  L568():
    goto L141(i83, i84, r321);
  L593():
    dr38 = tryDispatchBuiltin.1("[", yloc18);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L595() else L594(i127, i128, r330, dr38);
  L594(i131, i132, r332, yloc20):
    i137 = ld i;
    check L596() else D164();
  L666():
    aangl8 = ld aangl;
    check L668() else D202();
  L667():
    r444 = dyn base58[from, to, by](<lang `[`(aangl, j)>, <lang `[`(aangl, `+`(j, 1.0))>, <lang `*`(1.0, deg)>);
    goto L178(i172, r444);
  L722():
    p60 = prom<V +>{
      px6 = ld px;
      px7 = force? px6;
      checkMissing(px7);
      return px7;
    };
    p61 = prom<V +>{
      py6 = ld py;
      py7 = force? py6;
      checkMissing(py7);
      return py7;
    };
    p62 = prom<V +>{
      col_segments3 = ld `col.segments`;
      col_segments4 = force? col_segments3;
      checkMissing(col_segments4);
      return col_segments4;
    };
    p63 = prom<V +>{
      lwd9 = ld lwd;
      lwd10 = force? lwd9;
      checkMissing(lwd10);
      return lwd10;
    };
    p64 = prom<V +>{
      lty9 = ld lty;
      lty10 = force? lty9;
      checkMissing(lty10);
      return lty10;
    };
    r486 = dyn polygon3[, , col, lwd, lty](p60, p61, p62, p63, p64);
    check L723() else D225();
  L730():
    goto L192();
  L738():
    dx95 = getTryDispatchBuiltinValue(dr88);
    goto L195(angles13, dx95);
  L739():
    angles25 = force? angles24;
    checkMissing(angles25);
    c164 = `is.object`(angles25);
    if c164 then L740() else L741(angles23, dx96, angles25);
  L747():
    lab_angl1 = force? lab_angl;
    checkMissing(lab_angl1);
    r520 = cos(lab_angl1);
    goto L198(r514, r520);
  L748():
    key_loc36 = force? key_loc35;
    checkMissing(key_loc36);
    c165 = `is.object`(key_loc36);
    if c165 then L749() else L750(r521, key_loc36);
  D164():
    deopt 607 [i131, i132, r332, yloc20, i137];
  D165():
    deopt 613 [i135, i136, r337];
  D202():
    deopt 781 [i172, aangl8];
  D225():
    deopt 874 [r486];
  L181(i188, r452):
    st px = r452;
    sym61 = ldf c;
    base61 = ldf c in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L701() else L702();
  L196(angles31, dx101, dx102):
    r510 = `-`(dx101, dx102);
    r511 = `/`(r510, 2.0);
    goto L197(angles31, r511);
  L199(r525, dx104):
    r527 = `+`(r525, dx104);
    st `label.x` = r527;
    len25 = ld len;
    check L752() else D238();
  L595():
    dx45 = getTryDispatchBuiltinValue(dr38);
    goto L152(i127, i128, r330, dx45);
  L596():
    i138 = force? i137;
    __18 = ldf `[` in base;
    r335 = dyn __18(yloc20, i138);
    goto L152(i131, i132, r332, r335);
  L597():
    goto L147(i135, i136, r337);
  L668():
    aangl9 = force? aangl8;
    checkMissing(aangl9);
    c149 = `is.object`(aangl9);
    if c149 then L669() else L670(i172, aangl9);
  L680():
    px4 = ld px;
    check L682() else D208();
  L681():
    r451 = dyn base59(<sym px>, <lang `[`(key.loc, 1)>, <lang `[`(key.x, j)>, <lang `+`(`*`(len, cos(k)), `[`(key.loc, 1))>, NA_LGL);
    goto L181(i177, r451);
  L723():
    goto L192();
  L740():
    dr90 = tryDispatchBuiltin.1("[", angles25);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L742() else L741(angles23, dx96, dr90);
  L741(angles28, dx98, angles29):
    __45 = ldf `[` in base;
    r509 = dyn __45(angles29, 1);
    goto L196(angles28, dx98, r509);
  L749():
    dr92 = tryDispatchBuiltin.1("[", key_loc36);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L751() else L750(r521, dr92);
  L750(r523, key_loc38):
    __46 = ldf `[` in base;
    r526 = dyn __46(key_loc38, 1);
    goto L199(r523, r526);
  D208():
    deopt 805 [i177, px4];
  D238():
    deopt 933 [1.1, len25];
  L179(i181, dx76):
    aangl12 = ld aangl;
    check L673() else D204();
  L186(i206, r467):
    st py = r467;
    goto L177(i206);
  L669():
    dr68 = tryDispatchBuiltin.1("[", aangl9);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L671() else L670(i172, dr68);
  L670(i179, aangl11):
    j12 = ld j;
    check L672() else D203();
  L682():
    px5 = force? px4;
    checkMissing(px5);
    key_loc11 = ld `key.loc`;
    check L683() else D209();
  L701():
    py4 = ld py;
    check L703() else D216();
  L702():
    r466 = dyn base61(<sym py>, <lang `[`(key.loc, 2)>, <lang `[`(key.y, j)>, <lang `+`(`*`(len, sin(k)), `[`(key.loc, 2))>, NA_LGL);
    goto L186(i188, r466);
  L742():
    dx100 = getTryDispatchBuiltinValue(dr90);
    goto L196(angles23, dx96, dx100);
  L751():
    dx103 = getTryDispatchBuiltinValue(dr92);
    goto L199(r521, dx103);
  L752():
    len26 = force? len25;
    checkMissing(len26);
    r528 = `*`(1.1, len26);
    sym66 = ldf sin;
    base66 = ldf sin in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L753() else L754();
  D203():
    deopt 783 [i179, aangl11, j12];
  D204():
    deopt 787 [i181, aangl12];
  D209():
    deopt 807 [i177, key_loc11];
  D216():
    deopt 834 [i188, py4];
  L200(r532, r533):
    r535 = `*`(r532, r533);
    key_loc39 = ld `key.loc`;
    check L756() else D240();
  L671():
    dx75 = getTryDispatchBuiltinValue(dr68);
    goto L179(i172, dx75);
  L672():
    j13 = force? j12;
    __34 = ldf `[` in base;
    r446 = dyn __34(aangl11, j13);
    goto L179(i179, r446);
  L673():
    aangl13 = force? aangl12;
    checkMissing(aangl13);
    c150 = `is.object`(aangl13);
    if c150 then L674() else L675(i181, aangl13);
  L683():
    key_loc12 = force? key_loc11;
    checkMissing(key_loc12);
    c151 = `is.object`(key_loc12);
    if c151 then L684() else L685(i177, key_loc12);
  L703():
    py5 = force? py4;
    checkMissing(py5);
    key_loc19 = ld `key.loc`;
    check L704() else D217();
  L753():
    lab_angl2 = ld `lab.angl`;
    check L755() else D239();
  L754():
    r531 = dyn base66(<sym lab.angl>);
    goto L200(r528, r531);
  D217():
    deopt 836 [i188, key_loc19];
  D239():
    deopt 936 [r528, lab_angl2];
  D240():
    deopt 939 [r535, key_loc39];
  L180(i185, dx78):
    deg2 = ld deg;
    check L678() else D206();
  L182(i192, dx80):
    key_x = ld `key.x`;
    check L687() else D210();
  L674():
    dr70 = tryDispatchBuiltin.1("[", aangl13);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L676() else L675(i181, dr70);
  L675(i183, aangl15):
    j14 = ld j;
    check L677() else D205();
  L684():
    dr72 = tryDispatchBuiltin.1("[", key_loc12);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L686() else L685(i177, dr72);
  L685(i190, key_loc14):
    __36 = ldf `[` in base;
    r453 = dyn __36(key_loc14, 1);
    goto L182(i190, r453);
  L704():
    key_loc20 = force? key_loc19;
    checkMissing(key_loc20);
    c155 = `is.object`(key_loc20);
    if c155 then L705() else L706(i188, key_loc20);
  L755():
    lab_angl3 = force? lab_angl2;
    checkMissing(lab_angl3);
    r534 = sin(lab_angl3);
    goto L200(r528, r534);
  L756():
    key_loc40 = force? key_loc39;
    checkMissing(key_loc40);
    c166 = `is.object`(key_loc40);
    if c166 then L757() else L758(r535, key_loc40);
  D205():
    deopt 789 [i183, aangl15, j14];
  D206():
    deopt 796 [i185, 1.0, deg2];
  D210():
    deopt 812 [i192, key_x];
  L187(i210, dx86):
    key_y = ld `key.y`;
    check L708() else D218();
  L201(r539, dx106):
    r541 = `+`(r539, dx106);
    st `label.y` = r541;
    n_seg30 = ld `n.seg`;
    check L760() else D241();
  L676():
    dx77 = getTryDispatchBuiltinValue(dr70);
    goto L180(i181, dx77);
  L677():
    j15 = force? j14;
    checkMissing(j15);
    r447 = `+`(j15, 1.0);
    __35 = ldf `[` in base;
    r448 = dyn __35(aangl15, r447);
    goto L180(i183, r448);
  L678():
    deg3 = force? deg2;
    checkMissing(deg3);
    r449 = `*`(1.0, deg3);
    seq_int4 = ldf `seq.int` in base;
    r450 = dyn seq_int4(dx76, dx78, r449);
    check L679() else D207();
  L686():
    dx79 = getTryDispatchBuiltinValue(dr72);
    goto L182(i177, dx79);
  L687():
    key_x1 = force? key_x;
    checkMissing(key_x1);
    c152 = `is.object`(key_x1);
    if c152 then L688() else L689(i192, key_x1);
  L705():
    dr78 = tryDispatchBuiltin.1("[", key_loc20);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L707() else L706(i188, dr78);
  L706(i208, key_loc22):
    __39 = ldf `[` in base;
    r468 = dyn __39(key_loc22, 2);
    goto L187(i208, r468);
  L757():
    dr94 = tryDispatchBuiltin.1("[", key_loc40);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L759() else L758(r535, dr94);
  L758(r537, key_loc42):
    __47 = ldf `[` in base;
    r540 = dyn __47(key_loc42, 2);
    goto L201(r537, r540);
  D207():
    deopt 801 [i185, r450];
  D218():
    deopt 841 [i210, key_y];
  D241():
    deopt 947 [1, n_seg30];
  L183(i196, dx82):
    len13 = ld len;
    check L692() else D212();
  L679():
    goto L178(i185, r450);
  L688():
    dr74 = tryDispatchBuiltin.1("[", key_x1);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L690() else L689(i192, dr74);
  L689(i194, key_x3):
    j16 = ld j;
    check L691() else D211();
  L707():
    dx85 = getTryDispatchBuiltinValue(dr78);
    goto L187(i188, dx85);
  L708():
    key_y1 = force? key_y;
    checkMissing(key_y1);
    c156 = `is.object`(key_y1);
    if c156 then L709() else L710(i210, key_y1);
  L759():
    dx105 = getTryDispatchBuiltinValue(dr94);
    goto L201(r535, dx105);
  L760():
    n_seg31 = force? n_seg30;
    checkMissing(n_seg31);
    r542 = `:`(1, n_seg31);
    s4 = toForSeq(r542);
    l10 = length(s4);
    i222 = 0;
    goto L202(i222);
  D211():
    deopt 814 [i194, key_x3, j16];
  D212():
    deopt 817 [i196, len13];
  L188(i214, dx88):
    len18 = ld len;
    check L713() else D220();
  L202(i223):
    i224 = `+`.1(i223, 1);
    c167 = `<`.1(l10, i224);
    if c167 then L761() else L221();
  L690():
    dx81 = getTryDispatchBuiltinValue(dr74);
    goto L183(i192, dx81);
  L691():
    j17 = force? j16;
    __37 = ldf `[` in base;
    r454 = dyn __37(key_x3, j17);
    goto L183(i194, r454);
  L692():
    len14 = force? len13;
    checkMissing(len14);
    sym60 = ldf cos;
    base60 = ldf cos in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L693() else L694();
  L709():
    dr80 = tryDispatchBuiltin.1("[", key_y1);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L711() else L710(i210, dr80);
  L710(i212, key_y3):
    j18 = ld j;
    check L712() else D219();
  D219():
    deopt 843 [i212, key_y3, j18];
  D220():
    deopt 846 [i214, len18];
  L184(i199, len17, r456):
    r458 = `*`(len17, r456);
    key_loc15 = ld `key.loc`;
    check L696() else D214();
  L221():
    x57 = `[[`(s4, i224, NULL, TRUE);
    st k = x57;
    sym67 = ldf c;
    base67 = ldf c in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L762() else L763();
  L693():
    k4 = ld k;
    check L695() else D213();
  L694():
    r455 = dyn base60(<sym k>);
    goto L184(i196, len14, r455);
  L711():
    dx87 = getTryDispatchBuiltinValue(dr80);
    goto L188(i210, dx87);
  L712():
    j19 = force? j18;
    __40 = ldf `[` in base;
    r469 = dyn __40(key_y3, j19);
    goto L188(i212, r469);
  L713():
    len19 = force? len18;
    checkMissing(len19);
    sym62 = ldf sin;
    base62 = ldf sin in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L714() else L715();
  L761():
    goto L222();
  D213():
    deopt 819 [i196, len14, k4];
  D214():
    deopt 822 [i199, r458, key_loc15];
  L189(i217, len22, r471):
    r473 = `*`(len22, r471);
    key_loc23 = ld `key.loc`;
    check L717() else D222();
  L203(i229, r544):
    st `text.adj` = r544;
    text1 = ldf text;
    check L833() else D272();
  L695():
    k5 = force? k4;
    checkMissing(k5);
    r457 = cos(k5);
    goto L184(i196, len14, r457);
  L696():
    key_loc16 = force? key_loc15;
    checkMissing(key_loc16);
    c153 = `is.object`(key_loc16);
    if c153 then L697() else L698(i199, r458, key_loc16);
  L714():
    k6 = ld k;
    check L716() else D221();
  L715():
    r470 = dyn base62(<sym k>);
    goto L189(i214, len19, r470);
  L762():
    lab_angl4 = ld `lab.angl`;
    check L764() else D242();
  L763():
    r543 = dyn base67(<lang if(`||`(`<`(`[`(lab.angl, k), `*`(90.0, deg)), `>`(`[`(lab.angl, k), `*`(270.0, deg))), 0.0, if(`&&`(`>`(`[`(lab.angl, k), `*`(90.0, deg)), `<`(`[`(lab.angl, k), `*`(270.0, deg))), 1.0, 0.5))>, <lang if(`<=`(`[`(lab.angl, k), `*`(90.0, deg)), `/`(`(`(`-`(1.0, `/`(`[`(lab.angl, k), `(`(`*`(90.0, deg))))), 2.0), if(`<=`(`[`(lab.angl, k), `*`(270.0, deg)), `/`(`(`(`-`(`[`(lab.angl, k), `*`(90.0, deg))), `(`(`*`(180.0, deg))), `-`(1.0, `/`(`(`(`-`(`[`(lab.angl, k), `*`(270.0, deg))), `(`(`*`(180.0, deg))))))>);
    goto L203(i224, r543);
  D221():
    deopt 848 [i214, len19, k6];
  D222():
    deopt 851 [i217, r473, key_loc23];
  D242():
    deopt 952 [i224, lab_angl4];
  D272():
    deopt 1059 [i229];
  L185(i203, r462, dx84):
    r464 = `+`(r462, dx84);
    c154 = ldf c in base;
    r465 = dyn c154(px5, dx80, dx82, r464, NA_LGL);
    check L700() else D215();
  L697():
    dr76 = tryDispatchBuiltin.1("[", key_loc16);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L699() else L698(i199, r458, dr76);
  L698(i201, r460, key_loc18):
    __38 = ldf `[` in base;
    r463 = dyn __38(key_loc18, 1);
    goto L185(i201, r460, r463);
  L716():
    k7 = force? k6;
    checkMissing(k7);
    r472 = sin(k7);
    goto L189(i214, len19, r472);
  L717():
    key_loc24 = force? key_loc23;
    checkMissing(key_loc24);
    c157 = `is.object`(key_loc24);
    if c157 then L718() else L719(i217, r473, key_loc24);
  L764():
    lab_angl5 = force? lab_angl4;
    checkMissing(lab_angl5);
    c168 = `is.object`(lab_angl5);
    if c168 then L765() else L766(i224, lab_angl5);
  L833():
    p75 = prom<V +>{
      label_x = ld `label.x`;
      label_x1 = force? label_x;
      checkMissing(label_x1);
      c202 = `is.object`(label_x1);
      if c202 then L1() else L2(label_x1);
    L0(dx126):
      return dx126;
    L1():
      dr114 = tryDispatchBuiltin.1("[", label_x1);
      dc57 = getTryDispatchBuiltinDispatched(dr114);
      if dc57 then L3() else L2(dr114);
    L2(label_x3):
      k26 = ld k;
      k27 = force? k26;
      __57 = ldf `[` in base;
      r590 = dyn __57(label_x3, k27);
      goto L0(r590);
    L3():
      dx125 = getTryDispatchBuiltinValue(dr114);
      goto L0(dx125);
    };
    p76 = prom<V +>{
      label_y = ld `label.y`;
      label_y1 = force? label_y;
      checkMissing(label_y1);
      c203 = `is.object`(label_y1);
      if c203 then L1() else L2(label_y1);
    L0(dx128):
      return dx128;
    L1():
      dr116 = tryDispatchBuiltin.1("[", label_y1);
      dc58 = getTryDispatchBuiltinDispatched(dr116);
      if dc58 then L3() else L2(dr116);
    L2(label_y3):
      k28 = ld k;
      k29 = force? k28;
      __58 = ldf `[` in base;
      r592 = dyn __58(label_y3, k29);
      goto L0(r592);
    L3():
      dx127 = getTryDispatchBuiltinValue(dr116);
      goto L0(dx127);
    };
    p77 = prom<V +>{
      key_labels1 = ld `key.labels`;
      key_labels2 = force? key_labels1;
      checkMissing(key_labels2);
      c204 = `is.object`(key_labels2);
      if c204 then L1() else L2(key_labels2);
    L0(dx130):
      return dx130;
    L1():
      dr118 = tryDispatchBuiltin.1("[", key_labels2);
      dc59 = getTryDispatchBuiltinDispatched(dr118);
      if dc59 then L3() else L2(dr118);
    L2(key_labels4):
      k30 = ld k;
      k31 = force? k30;
      __59 = ldf `[` in base;
      r594 = dyn __59(key_labels4, k31);
      goto L0(r594);
    L3():
      dx129 = getTryDispatchBuiltinValue(dr118);
      goto L0(dx129);
    };
    p78 = prom<V +>{
      cex9 = ld cex;
      cex10 = force? cex9;
      checkMissing(cex10);
      return cex10;
    };
    p79 = prom<V +>{
      text_adj = ld `text.adj`;
      text_adj1 = force? text_adj;
      checkMissing(text_adj1);
      return text_adj1;
    };
    r598 = dyn text1[, , labels, cex, adj](p75, p76, p77, p78, p79);
    check L834() else D273();
  D215():
    deopt 830 [i203, r465];
  D273():
    deopt 1068 [i229, r598];
  L190(i221, r477, dx90):
    r479 = `+`(r477, dx90);
    c158 = ldf c in base;
    r480 = dyn c158(py5, dx86, dx88, r479, NA_LGL);
    check L721() else D223();
  L204(i233, dx108):
    deg4 = ld deg;
    check L769() else D244();
  L699():
    dx83 = getTryDispatchBuiltinValue(dr76);
    goto L185(i199, r458, dx83);
  L700():
    goto L181(i203, r465);
  L718():
    dr82 = tryDispatchBuiltin.1("[", key_loc24);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L720() else L719(i217, r473, dr82);
  L719(i219, r475, key_loc26):
    __41 = ldf `[` in base;
    r478 = dyn __41(key_loc26, 2);
    goto L190(i219, r475, r478);
  L765():
    dr96 = tryDispatchBuiltin.1("[", lab_angl5);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L767() else L766(i224, dr96);
  L766(i231, lab_angl7):
    k8 = ld k;
    check L768() else D243();
  L834():
    goto L202(i229);
  D223():
    deopt 859 [i221, r480];
  D243():
    deopt 954 [i231, lab_angl7, k8];
  D244():
    deopt 957 [i233, dx108, 90.0, deg4];
  L720():
    dx89 = getTryDispatchBuiltinValue(dr82);
    goto L190(i217, r473, dx89);
  L721():
    goto L186(i221, r480);
  L767():
    dx107 = getTryDispatchBuiltinValue(dr96);
    goto L204(i224, dx107);
  L768():
    k9 = force? k8;
    __48 = ldf `[` in base;
    r545 = dyn __48(lab_angl7, k9);
    goto L204(i231, r545);
  L769():
    deg5 = force? deg4;
    checkMissing(deg5);
    r546 = `*`(90.0, deg5);
    r547 = `<`(dx108, r546);
    c169 = `as.logical`(r547);
    if c169 then L205(i233, c169) else L770();
  L205(i234, c170):
    c180 = `as.logical`(c170);
    if c180 then L778() else L207();
  L770():
    lab_angl8 = ld `lab.angl`;
    check L771() else D245();
  D245():
    deopt 961 [i233, c169, lab_angl8];
  L207():
    lab_angl12 = ld `lab.angl`;
    check L780() else D248();
  L208(i243, r551):
    lab_angl20 = ld `lab.angl`;
    check L796() else D254();
  L771():
    lab_angl9 = force? lab_angl8;
    checkMissing(lab_angl9);
    c172 = `is.object`(lab_angl9);
    if c172 then L772() else L773(i233, c169, lab_angl9);
  L778():
    goto L208(i234, 0.0);
  D248():
    deopt 973 [i234, lab_angl12];
  D254():
    deopt 996 [i243, lab_angl20];
  L206(i239, c176, dx110):
    deg6 = ld deg;
    check L776() else D247();
  L772():
    dr98 = tryDispatchBuiltin.1("[", lab_angl9);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L774() else L773(i233, c169, dr98);
  L773(i237, c174, lab_angl11):
    k10 = ld k;
    check L775() else D246();
  L780():
    lab_angl13 = force? lab_angl12;
    checkMissing(lab_angl13);
    c181 = `is.object`(lab_angl13);
    if c181 then L781() else L782(i234, lab_angl13);
  L796():
    lab_angl21 = force? lab_angl20;
    checkMissing(lab_angl21);
    c194 = `is.object`(lab_angl21);
    if c194 then L797() else L798(i243, lab_angl21);
  D246():
    deopt 963 [i237, c174, lab_angl11, k10];
  D247():
    deopt 966 [i239, c176, dx110, 270.0, deg6];
  L209(i247, dx112):
    deg8 = ld deg;
    check L785() else D250();
  L213(i260, dx116):
    deg12 = ld deg;
    check L801() else D256();
  L774():
    dx109 = getTryDispatchBuiltinValue(dr98);
    goto L206(i233, c169, dx109);
  L775():
    k11 = force? k10;
    __49 = ldf `[` in base;
    r548 = dyn __49(lab_angl11, k11);
    goto L206(i237, c174, r548);
  L776():
    deg7 = force? deg6;
    checkMissing(deg7);
    r549 = `*`(270.0, deg7);
    r550 = `>`(dx110, r549);
    c177 = `as.logical`(r550);
    c178 = `||`(c176, c177);
    goto L205(i239, c178);
  L781():
    dr100 = tryDispatchBuiltin.1("[", lab_angl13);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L783() else L782(i234, dr100);
  L782(i245, lab_angl15):
    k12 = ld k;
    check L784() else D249();
  L797():
    dr104 = tryDispatchBuiltin.1("[", lab_angl21);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L799() else L798(i243, dr104);
  L798(i258, lab_angl23):
    k16 = ld k;
    check L800() else D255();
  D249():
    deopt 975 [i245, lab_angl15, k12];
  D250():
    deopt 978 [i247, dx112, 90.0, deg8];
  D255():
    deopt 998 [i258, lab_angl23, k16];
  D256():
    deopt 1001 [i260, dx116, 90.0, deg12];
  L783():
    dx111 = getTryDispatchBuiltinValue(dr100);
    goto L209(i234, dx111);
  L784():
    k13 = force? k12;
    __50 = ldf `[` in base;
    r552 = dyn __50(lab_angl15, k13);
    goto L209(i245, r552);
  L785():
    deg9 = force? deg8;
    checkMissing(deg9);
    r553 = `*`(90.0, deg9);
    r554 = `>`(dx112, r553);
    c182 = `as.logical`(r554);
    if c182 then L786() else L210(i247, c182);
  L799():
    dx115 = getTryDispatchBuiltinValue(dr104);
    goto L213(i243, dx115);
  L800():
    k17 = force? k16;
    __52 = ldf `[` in base;
    r558 = dyn __52(lab_angl23, k17);
    goto L213(i258, r558);
  L801():
    deg13 = force? deg12;
    checkMissing(deg13);
    r559 = `*`(90.0, deg13);
    r560 = `<=`(dx116, r559);
    c195 = `as.logical`(r560);
    if c195 then L802() else L214();
  L210(i249, c184):
    c193 = `as.logical`(c184);
    if c193 then L794() else L212();
  L214():
    lab_angl28 = ld `lab.angl`;
    check L810() else D260();
  L216(i267, r570):
    c201 = ldf c in base;
    r589 = dyn c201(r551, r570);
    check L832() else D271();
  L786():
    lab_angl16 = ld `lab.angl`;
    check L787() else D251();
  L802():
    lab_angl24 = ld `lab.angl`;
    check L803() else D257();
  D251():
    deopt 982 [i247, c182, lab_angl16];
  D257():
    deopt 1006 [i260, 1.0, lab_angl24];
  D260():
    deopt 1018 [i260, lab_angl28];
  D271():
    deopt 1056 [i267, r589];
  L212():
    goto L208(i249, 0.5);
  L787():
    lab_angl17 = force? lab_angl16;
    checkMissing(lab_angl17);
    c185 = `is.object`(lab_angl17);
    if c185 then L788() else L789(i247, c182, lab_angl17);
  L794():
    goto L208(i249, 1.0);
  L803():
    lab_angl25 = force? lab_angl24;
    checkMissing(lab_angl25);
    c196 = `is.object`(lab_angl25);
    if c196 then L804() else L805(i260, 1.0, lab_angl25);
  L810():
    lab_angl29 = force? lab_angl28;
    checkMissing(lab_angl29);
    c197 = `is.object`(lab_angl29);
    if c197 then L811() else L812(i260, lab_angl29);
  L832():
    goto L203(i267, r589);
  L211(i253, c189, dx114):
    deg10 = ld deg;
    check L792() else D253();
  L215(i266, r564, dx118):
    deg14 = ld deg;
    check L808() else D259();
  L217(i271, dx120):
    deg16 = ld deg;
    check L815() else D262();
  L788():
    dr102 = tryDispatchBuiltin.1("[", lab_angl17);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L790() else L789(i247, c182, dr102);
  L789(i251, c187, lab_angl19):
    k14 = ld k;
    check L791() else D252();
  L804():
    dr106 = tryDispatchBuiltin.1("[", lab_angl25);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L806() else L805(i260, 1.0, dr106);
  L805(i264, r562, lab_angl27):
    k18 = ld k;
    check L807() else D258();
  L811():
    dr108 = tryDispatchBuiltin.1("[", lab_angl29);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L813() else L812(i260, dr108);
  L812(i269, lab_angl31):
    k20 = ld k;
    check L814() else D261();
  D252():
    deopt 984 [i251, c187, lab_angl19, k14];
  D253():
    deopt 987 [i253, c189, dx114, 270.0, deg10];
  D258():
    deopt 1008 [i264, r562, lab_angl27, k18];
  D259():
    deopt 1011 [i266, r564, dx118, 90.0, deg14];
  D261():
    deopt 1020 [i269, lab_angl31, k20];
  D262():
    deopt 1023 [i271, dx120, 270.0, deg16];
  L790():
    dx113 = getTryDispatchBuiltinValue(dr102);
    goto L211(i247, c182, dx113);
  L791():
    k15 = force? k14;
    __51 = ldf `[` in base;
    r555 = dyn __51(lab_angl19, k15);
    goto L211(i251, c187, r555);
  L792():
    deg11 = force? deg10;
    checkMissing(deg11);
    r556 = `*`(270.0, deg11);
    r557 = `<`(dx114, r556);
    c190 = `as.logical`(r557);
    c191 = `&&`(c189, c190);
    goto L210(i253, c191);
  L806():
    dx117 = getTryDispatchBuiltinValue(dr106);
    goto L215(i260, 1.0, dx117);
  L807():
    k19 = force? k18;
    __53 = ldf `[` in base;
    r565 = dyn __53(lab_angl27, k19);
    goto L215(i264, r562, r565);
  L808():
    deg15 = force? deg14;
    checkMissing(deg15);
    r566 = `*`(90.0, deg15);
    r567 = `/`(dx118, r566);
    r568 = `-`(r564, r567);
    r569 = `/`(r568, 2.0);
    goto L216(i266, r569);
  L813():
    dx119 = getTryDispatchBuiltinValue(dr108);
    goto L217(i260, dx119);
  L814():
    k21 = force? k20;
    __54 = ldf `[` in base;
    r571 = dyn __54(lab_angl31, k21);
    goto L217(i269, r571);
  L815():
    deg17 = force? deg16;
    checkMissing(deg17);
    r572 = `*`(270.0, deg17);
    r573 = `<=`(dx120, r572);
    c198 = `as.logical`(r573);
    if c198 then L816() else L218();
  L218():
    lab_angl36 = ld `lab.angl`;
    check L825() else D267();
  L816():
    lab_angl32 = ld `lab.angl`;
    check L817() else D263();
  D263():
    deopt 1027 [i271, lab_angl32];
  D267():
    deopt 1041 [i271, 1.0, lab_angl36];
  L817():
    lab_angl33 = force? lab_angl32;
    checkMissing(lab_angl33);
    c199 = `is.object`(lab_angl33);
    if c199 then L818() else L819(i271, lab_angl33);
  L825():
    lab_angl37 = force? lab_angl36;
    checkMissing(lab_angl37);
    c200 = `is.object`(lab_angl37);
    if c200 then L826() else L827(i271, 1.0, lab_angl37);
  L219(i277, dx122):
    deg18 = ld deg;
    check L822() else D265();
  L220(i281, r582, dx124):
    deg22 = ld deg;
    check L830() else D269();
  L818():
    dr110 = tryDispatchBuiltin.1("[", lab_angl33);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L820() else L819(i271, dr110);
  L819(i275, lab_angl35):
    k22 = ld k;
    check L821() else D264();
  L826():
    dr112 = tryDispatchBuiltin.1("[", lab_angl37);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L828() else L827(i271, 1.0, dr112);
  L827(i279, r580, lab_angl39):
    k24 = ld k;
    check L829() else D268();
  D264():
    deopt 1029 [i275, lab_angl35, k22];
  D265():
    deopt 1032 [i277, dx122, 90.0, deg18];
  D268():
    deopt 1043 [i279, r580, lab_angl39, k24];
  D269():
    deopt 1046 [i281, r582, dx124, 270.0, deg22];
  L820():
    dx121 = getTryDispatchBuiltinValue(dr110);
    goto L219(i271, dx121);
  L821():
    k23 = force? k22;
    __55 = ldf `[` in base;
    r574 = dyn __55(lab_angl35, k23);
    goto L219(i275, r574);
  L822():
    deg19 = force? deg18;
    checkMissing(deg19);
    r575 = `*`(90.0, deg19);
    r576 = `-`(dx122, r575);
    deg20 = ld deg;
    check L823() else D266();
  L828():
    dx123 = getTryDispatchBuiltinValue(dr112);
    goto L220(i271, 1.0, dx123);
  L829():
    k25 = force? k24;
    __56 = ldf `[` in base;
    r583 = dyn __56(lab_angl39, k25);
    goto L220(i279, r580, r583);
  L830():
    deg23 = force? deg22;
    checkMissing(deg23);
    r584 = `*`(270.0, deg23);
    r585 = `-`(dx124, r584);
    deg24 = ld deg;
    check L831() else D270();
  D266():
    deopt 1036 [i277, r576, 180.0, deg20];
  D270():
    deopt 1050 [i281, r582, r585, 180.0, deg24];
  L823():
    deg21 = force? deg20;
    checkMissing(deg21);
    r577 = `*`(180.0, deg21);
    r578 = `/`(r576, r577);
    goto L216(i277, r578);
  L831():
    deg25 = force? deg24;
    checkMissing(deg25);
    r586 = `*`(180.0, deg25);
    r587 = `/`(r585, r586);
    r588 = `-`(r582, r587);
    goto L216(i281, r588);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x5:V, reg r1:V, reg x6:*, reg x7:V, reg min:cls, reg r2:V, reg r3:V, reg diff:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x8:*, reg x9:V, reg range:cls, reg r6:V, reg p:p(V +), reg r8:V, reg r9:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(x5, r1):
    r3 = `-`(x5, r1);
    diff = ldf diff;
    check L6() else D3();
  L2():
    x6 = ld x;
    check L4() else D1();
  L3():
    r = dyn base[, `na.rm`](<sym x>, TRUE);
    goto L0(x2, r);
  D1():
    deopt 3 [x2, x6];
  D3():
    deopt 10 [r3];
  L4():
    x7 = force? x6;
    checkMissing(x7);
    min = ldf min in base;
    r2 = dyn min(x7, TRUE);
    check L5() else D2();
  L6():
    p = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      range = ldf range in base;
      r6 = dyn range(x9, TRUE);
      goto L0(r6);
    L2():
      r4 = dyn base1[, `na.rm`](<sym x>, TRUE);
      goto L0(r4);
    };
    r8 = dyn diff(p);
    check L7() else D4();
  D2():
    deopt 8 [x2, r2];
  D4():
    deopt 12 [r3, r8];
  L5():
    goto L0(x2, r2);
  L7():
    r9 = `/`(r3, r8);
    popenv;
    return r9;
  }
}