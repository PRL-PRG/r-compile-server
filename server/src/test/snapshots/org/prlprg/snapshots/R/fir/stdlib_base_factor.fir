fun main() {
  () -+> V { reg r:cls, reg factor:cls, reg substring:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg p2:p(V +), reg letters:*, reg letters1:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg ff:*, reg ff1:V, reg as_integer:cls, reg r9:V, reg factor1:cls, reg ff2:*, reg ff3:V, reg p4:p(V +), reg r11:V, reg ff4:*, reg ff5:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r12:V, reg factor2:cls, reg letters2:*, reg letters3:V, reg c1:L, reg letters5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg __1:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg ordered:cls, reg p6:p(V +), reg r20:V, reg class:cls, reg r21:V, reg factor3:cls, reg LETTERS:*, reg LETTERS1:V, reg c2:L, reg LETTERS3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg stopifnot:cls, reg sort:cls, reg z:*, reg z1:V, reg p8:p(V +), reg r26:V, reg c3:L, reg r28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg r33:V, reg c4:cls, reg r34:V, reg __3:cls, reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg dx10:V, reg r37:V, reg z2:*, reg z3:V, reg range:cls, reg r38:V, reg r39:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg z4:*, reg z5:V, reg min:cls, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg r48:V, reg z6:*, reg z7:V, reg max:cls, reg r49:V, reg r50:V, reg p10:p(V +), reg r52:V, reg ordered1:cls, reg ff8:*, reg ff9:V, reg p11:p(V +), reg r54:V, reg stopifnot1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg of:*, reg of1:V, reg rev:cls, reg of2:*, reg of3:V, reg p12:p(V +), reg r60:V, reg range1:cls, reg r61:V, reg of4:*, reg of5:V, reg c5:L, reg of7:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r62:V, reg identical:cls, reg r63:V, reg p13:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg of8:*, reg of9:V, reg max1:cls, reg r69:V, reg of10:*, reg of11:V, reg c6:L, reg of13:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r70:V, reg identical1:cls, reg r71:V, reg p14:p(V +), reg r73:V, reg factor4:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg c7:cls, reg r76:V, reg p15:p(V +), reg r78:V, reg l:*, reg is_na:cls, reg r79:V, reg c8:L, reg r82:L, reg l2:*, reg r83:V, reg dr12:V, reg dc6:L, reg dx15:V, reg r85:L, reg l4:*, reg dx16:V, reg ___:cls, reg r86:V, reg is_na__:cls, reg r87:V, reg x:*, reg x1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r88:V, reg x2:*, reg x3:V, reg is_na1:cls, reg r90:V, reg factor5:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r91:V, reg r92:V, reg c9:cls, reg r93:V, reg p16:p(V +), reg r95:V, reg factor6:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg r97:V, reg c10:cls, reg r98:V, reg p17:p(V +), reg r100:V, reg z8:*, reg z9:V, reg factor7:cls, reg z10:*, reg z11:V, reg p18:p(V +), reg r102:V, reg factor8:cls, reg z12:*, reg z13:V, reg p19:p(V +), reg r104:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg r106:V, reg c11:cls, reg r107:V, reg factor9:cls, reg x4:*, reg x5:V, reg p20:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r109:V, reg r110:V, reg c12:cls, reg r111:V, reg p21:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r113:V, reg r114:V, reg c13:cls, reg r115:V, reg p22:p(V +), reg r117:V, reg airquality:*, reg airquality1:V, reg c14:L, reg airquality3:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg r118:V, reg table:cls, reg addNA:cls, reg Month:*, reg Month1:V, reg p23:p(V +), reg r120:V, reg p24:p(V +), reg r122:V, reg table1:cls, reg addNA1:cls, reg Month2:*, reg Month3:V, reg p25:p(V +), reg r124:V, reg p26:p(V +), reg r126:V |
    mkenv;
    r = clos inner3541960985;
    st factor = r;
    factor = ldf factor;
    check L6() else D0();
  D0():
    deopt 4 [];
  L6():
    p2 = prom<V +>{
      substring = ldf substring;
      p = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p1 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      r3 = dyn substring("statistics", p, p1);
      return r3;
    };
    p3 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r6 = dyn factor[, levels](p2, p3);
    check L7() else D1();
  D1():
    deopt 8 [r6];
  L7():
    st ff = r6;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0():
    factor1 = ldf factor;
    check L12() else D4();
  L8():
    ff = ld ff;
    check L10() else D2();
  L9():
    r7 = dyn base(<sym ff>);
    goto L0();
  D2():
    deopt 12 [ff];
  D4():
    deopt 17 [];
  L10():
    ff1 = force? ff;
    checkMissing(ff1);
    as_integer = ldf `as.integer` in base;
    r9 = dyn as_integer(ff1);
    check L11() else D3();
  L12():
    p4 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r11 = dyn factor1(p4);
    check L13() else D5();
  D3():
    deopt 15 [r9];
  D5():
    deopt 19 [r11];
  L11():
    goto L0();
  L13():
    st `f.` = r11;
    ff4 = ld ff;
    check L14() else D6();
  D6():
    deopt 21 [ff4];
  L14():
    ff5 = force? ff4;
    checkMissing(ff5);
    c = `is.object`(ff5);
    if c then L15() else L16();
  L1():
    factor2 = ldf factor;
    check L18() else D7();
  L15():
    dr = tryDispatchBuiltin.1("[", ff5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16();
  L16():
    __ = ldf `[` in base;
    r12 = dyn __(ff5, <missing>, TRUE);
    goto L1();
  D7():
    deopt 29 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1();
  L18():
    p5 = prom<V +>{
      letters2 = ld letters;
      letters3 = force? letters2;
      checkMissing(letters3);
      c1 = `is.object`(letters3);
      if c1 then L1() else L2(letters3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", letters3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(letters5):
      r13 = `:`(1.0, 20.0);
      __1 = ldf `[` in base;
      r14 = dyn __1(letters5, r13);
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r16 = dyn factor2[, labels](p5, "letter");
    check L19() else D8();
  D8():
    deopt 33 [r16];
  L19():
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L2():
    factor3 = ldf factor;
    check L25() else D12();
  L20():
    ordered = ldf ordered;
    check L22() else D9();
  L21():
    r17 = dyn base1(<lang ordered(`:`(4.0, 1.0))>);
    goto L2();
  D9():
    deopt 37 [];
  D12():
    deopt 43 [];
  L22():
    p6 = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r20 = dyn ordered(p6);
    check L23() else D10();
  L25():
    p7 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c2 = `is.object`(LETTERS1);
      if c2 then L1() else L2(LETTERS1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", LETTERS1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(LETTERS3):
      __2 = ldf `[` in base;
      r22 = dyn __2(LETTERS3, <int 3, 2, 1>);
      goto L0(r22);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r24 = dyn factor3[, ordered](p7, TRUE);
    check L26() else D13();
  D10():
    deopt 39 [r20];
  D13():
    deopt 47 [r24];
  L23():
    class = ldf class in base;
    r21 = dyn class(r20);
    check L24() else D11();
  L26():
    st z = r24;
    stopifnot = ldf stopifnot;
    check L27() else D14();
  D11():
    deopt 41 [r21];
  D14():
    deopt 50 [];
  L24():
    goto L2();
  L27():
    p9 = prom<V +>{
      sort = ldf sort;
      p8 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        return z1;
      };
      r26 = dyn sort(p8);
      c3 = `is.object`(r26);
      if c3 then L3() else L4(r26);
    L0(dx7):
      sym3 = ldf range;
      base3 = ldf range in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L3():
      dr6 = tryDispatchBuiltin.1("[", r26);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L5() else L4(dr6);
    L4(r28):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L1(r32, r33):
      __3 = ldf `[` in base;
      r35 = dyn __3(r32, r33);
      goto L0(r35);
    L2(dx10, r37):
      r39 = `==`(dx10, r37);
      return r39;
    L5():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L6():
      c4 = ldf c in base;
      r34 = dyn c4(1.0, 3.0);
      goto L1(r28, r34);
    L7():
      r31 = dyn base2(1.0, 3.0);
      goto L1(r28, r31);
    L8():
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      range = ldf range in base;
      r38 = dyn range(z3);
      goto L2(dx7, r38);
    L9():
      r36 = dyn base3(<sym z>);
      goto L2(dx7, r36);
    };
    p10 = prom<V +>{
      sym4 = ldf min;
      base4 = ldf min in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r42):
      sym5 = ldf max;
      base5 = ldf max in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L2():
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      min = ldf min in base;
      r43 = dyn min(z5);
      goto L0(r43);
    L3():
      r41 = dyn base4(<sym z>);
      goto L0(r41);
    L1(r47, r48):
      r50 = `<`(r47, r48);
      return r50;
    L4():
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      max = ldf max in base;
      r49 = dyn max(z7);
      goto L1(r42, r49);
    L5():
      r46 = dyn base5(<sym z>);
      goto L1(r42, r46);
    };
    r52 = dyn stopifnot(p9, p10);
    check L28() else D15();
  D15():
    deopt 53 [r52];
  L28():
    ordered1 = ldf ordered;
    check L29() else D16();
  D16():
    deopt 55 [];
  L29():
    p11 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      return ff9;
    };
    r54 = dyn ordered1(p11);
    check L30() else D17();
  D17():
    deopt 57 [r54];
  L30():
    st of = r54;
    stopifnot1 = ldf stopifnot;
    check L31() else D18();
  D18():
    deopt 60 [];
  L31():
    p13 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r56):
      return r56;
    L3():
      sym7 = ldf range;
      base7 = ldf range in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L4():
      r55 = dyn base6(<lang range(of, rev(of))>, <lang `[`(of, `:`(3.0, 2.0))>);
      goto L0(r55);
    L1(r58):
      of4 = ld of;
      of5 = force? of4;
      checkMissing(of5);
      c5 = `is.object`(of5);
      if c5 then L7() else L8(of5);
    L5():
      of = ld of;
      of1 = force? of;
      checkMissing(of1);
      rev = ldf rev;
      p12 = prom<V +>{
        of2 = ld of;
        of3 = force? of2;
        checkMissing(of3);
        return of3;
      };
      r60 = dyn rev(p12);
      range1 = ldf range in base;
      r61 = dyn range1(of1, r60);
      goto L1(r61);
    L6():
      r57 = dyn base7(<sym of>, <lang rev(of)>);
      goto L1(r57);
    L2(dx12):
      identical = ldf identical in base;
      r63 = dyn identical(r58, dx12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r63);
    L7():
      dr8 = tryDispatchBuiltin.1("[", of5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L9() else L8(dr8);
    L8(of7):
      __4 = ldf `[` in base;
      r62 = dyn __4(of7, <int 3, 2>);
      goto L2(r62);
    L9():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L2(dx11);
    };
    p14 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r66):
      return r66;
    L3():
      sym9 = ldf max;
      base9 = ldf max in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L5() else L6();
    L4():
      r65 = dyn base8(<lang max(of)>, <lang `[`(of, 2.0)>);
      goto L0(r65);
    L1(r68):
      of10 = ld of;
      of11 = force? of10;
      checkMissing(of11);
      c6 = `is.object`(of11);
      if c6 then L7() else L8(of11);
    L5():
      of8 = ld of;
      of9 = force? of8;
      checkMissing(of9);
      max1 = ldf max in base;
      r69 = dyn max1(of9);
      goto L1(r69);
    L6():
      r67 = dyn base9(<sym of>);
      goto L1(r67);
    L2(dx14):
      identical1 = ldf identical in base;
      r71 = dyn identical1(r68, dx14, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r71);
    L7():
      dr10 = tryDispatchBuiltin.1("[", of11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L9() else L8(dr10);
    L8(of13):
      __5 = ldf `[` in base;
      r70 = dyn __5(of13, 2.0);
      goto L2(r70);
    L9():
      dx13 = getTryDispatchBuiltinValue(dr10);
      goto L2(dx13);
    };
    r73 = dyn stopifnot1(p13, p14);
    check L32() else D19();
  D19():
    deopt 63 [r73];
  L32():
    factor4 = ldf factor;
    check L33() else D20();
  D20():
    deopt 65 [];
  L33():
    p15 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c7 = ldf c in base;
      r76 = dyn c7(1.0, 2.0, NA_LGL);
      goto L0(r76);
    L2():
      r74 = dyn base10(1.0, 2.0, NA_LGL);
      goto L0(r74);
    };
    r78 = dyn factor4[, exclude](p15, NULL);
    check L34() else D21();
  D21():
    deopt 69 [r78];
  L34():
    st x = r78;
    l = ld x;
    is_na = ldf `is.na`;
    check L35() else D22();
  D22():
    deopt 74 [TRUE, l, TRUE];
  L35():
    r79 = dyn is_na(TRUE, NULL);
    check L36() else D23();
  D23():
    deopt 76 [TRUE, l, TRUE, r79];
  L36():
    c8 = `is.object`(r79);
    if c8 then L37() else L38(TRUE, l, r79);
  L3(r85, l4, dx16):
    is_na__ = ldf `is.na<-`;
    check L40() else D24();
  L37():
    dr12 = tryDispatchBuiltin.0("[<-", r79, TRUE);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L39() else L38(TRUE, l, dr12);
  L38(r82, l2, r83):
    ___ = ldf `[<-` in base;
    r86 = dyn ___(r83, TRUE, 2.0);
    goto L3(r82, l2, r86);
  D24():
    deopt 81 [r85, l4, dx16];
  L39():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L3(TRUE, l, dx15);
  L40():
    r87 = dyn is_na__(l4, NULL, dx16);
    check L41() else D25();
  D25():
    deopt 83 [r85, r87];
  L41():
    st x = r87;
    x = ld x;
    check L42() else D26();
  D26():
    deopt 85 [x];
  L42():
    x1 = force? x;
    checkMissing(x1);
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L43() else L44();
  L4():
    factor5 = ldf factor;
    check L47() else D29();
  L43():
    x2 = ld x;
    check L45() else D27();
  L44():
    r88 = dyn base11(<sym x>);
    goto L4();
  D27():
    deopt 89 [x2];
  D29():
    deopt 94 [];
  L45():
    x3 = force? x2;
    checkMissing(x3);
    is_na1 = ldf `is.na` in base;
    r90 = dyn is_na1(x3);
    check L46() else D28();
  L47():
    p16 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c9 = ldf c in base;
      r93 = dyn c9(<int 1, 2>, NA_LGL);
      goto L0(r93);
    L2():
      r91 = dyn base12(<lang `:`(1.0, 2.0)>, NA_LGL);
      goto L0(r91);
    };
    r95 = dyn factor5[, exclude](p16, "");
    check L48() else D30();
  D28():
    deopt 92 [r90];
  D30():
    deopt 98 [r95];
  L46():
    goto L4();
  L48():
    factor6 = ldf factor;
    check L49() else D31();
  D31():
    deopt 100 [];
  L49():
    p17 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r97):
      return r97;
    L1():
      c10 = ldf c in base;
      r98 = dyn c10(<int 1, 2>, NA_LGL);
      goto L0(r98);
    L2():
      r96 = dyn base13(<lang `:`(1.0, 2.0)>, NA_LGL);
      goto L0(r96);
    };
    r100 = dyn factor6[, exclude](p17, NULL);
    check L50() else D32();
  D32():
    deopt 104 [r100];
  L50():
    z8 = ld z;
    check L51() else D33();
  D33():
    deopt 105 [z8];
  L51():
    z9 = force? z8;
    checkMissing(z9);
    factor7 = ldf factor;
    check L52() else D34();
  D34():
    deopt 108 [];
  L52():
    p18 = prom<V +>{
      z10 = ld z;
      z11 = force? z10;
      checkMissing(z11);
      return z11;
    };
    r102 = dyn factor7[, exclude](p18, "C");
    check L53() else D35();
  D35():
    deopt 112 [r102];
  L53():
    factor8 = ldf factor;
    check L54() else D36();
  D36():
    deopt 114 [];
  L54():
    p19 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      return z13;
    };
    r104 = dyn factor8[, exclude](p19, "B");
    check L55() else D37();
  D37():
    deopt 118 [r104];
  L55():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L56() else L57();
  L5(r106):
    st x = r106;
    factor9 = ldf factor;
    check L59() else D39();
  L56():
    c11 = ldf c in base;
    r107 = dyn c11("Man", "Male", "Man", "Lady", "Female");
    check L58() else D38();
  L57():
    r105 = dyn base14("Man", "Male", "Man", "Lady", "Female");
    goto L5(r105);
  D38():
    deopt 127 [r107];
  D39():
    deopt 130 [];
  L58():
    goto L5(r107);
  L59():
    p20 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p21 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r110):
      return r110;
    L1():
      c12 = ldf c in base;
      r111 = dyn c12("Male", "Man", "Lady", "Female");
      goto L0(r111);
    L2():
      r109 = dyn base15("Male", "Man", "Lady", "Female");
      goto L0(r109);
    };
    p22 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      c13 = ldf c in base;
      r115 = dyn c13("Male", "Male", "Female", "Female");
      goto L0(r115);
    L2():
      r113 = dyn base16("Male", "Male", "Female", "Female");
      goto L0(r113);
    };
    r117 = dyn factor9[, levels, labels](p20, p21, p22);
    check L60() else D40();
  D40():
    deopt 136 [r117];
  L60():
    st xf = r117;
    airquality = ld airquality;
    check L61() else D41();
  D41():
    deopt 138 [airquality];
  L61():
    airquality1 = force? airquality;
    checkMissing(airquality1);
    c14 = `is.object`(airquality1);
    if c14 then L63() else L64(airquality1);
  L62(dx18):
    st Month = dx18;
    table = ldf table;
    check L66() else D42();
  L63():
    dr14 = tryDispatchBuiltin.1("$", airquality1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L65() else L64(dr14);
  L64(airquality3):
    r118 = `$`(airquality3, <sym Month>);
    goto L62(r118);
  D42():
    deopt 143 [];
  L65():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L62(dx17);
  L66():
    p24 = prom<V +>{
      addNA = ldf addNA;
      p23 = prom<V +>{
        Month = ld Month;
        Month1 = force? Month;
        checkMissing(Month1);
        return Month1;
      };
      r120 = dyn addNA(p23);
      return r120;
    };
    r122 = dyn table(p24);
    check L67() else D43();
  D43():
    deopt 145 [r122];
  L67():
    table1 = ldf table;
    check L68() else D44();
  D44():
    deopt 147 [];
  L68():
    p26 = prom<V +>{
      addNA1 = ldf addNA;
      p25 = prom<V +>{
        Month2 = ld Month;
        Month3 = force? Month2;
        checkMissing(Month3);
        return Month3;
      };
      r124 = dyn addNA1[, ifany](p25, TRUE);
      return r124;
    };
    r126 = dyn table1(p26);
    check L69() else D45();
  D45():
    deopt 149 [r126];
  L69():
    popenv;
    return r126;
  }
}
fun inner3541960985(x, levels, labels, exclude, ordered, nmax) {
  (reg x:*, reg levels:*, reg labels:*, reg exclude:*, reg ordered:*, reg nmax:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var levels:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg levels1:*, reg levels2:V, reg p1:p(V +), var exclude:*, reg exclude_isMissing:L, reg exclude_orDefault:*, var ordered:*, reg ordered_isMissing:L, reg ordered_orDefault:*, reg is_ordered:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var nmax:*, reg nmax_isMissing:L, reg nmax_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg c:V, reg c1:L, reg character1:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg names:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg c2:L, reg unique:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg nmax1:*, reg nmax2:V, reg p5:p(V +), reg r18:V, reg order:cls, reg y:*, reg y1:V, reg p6:p(V +), reg r20:V, reg unique1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg y2:*, reg y3:V, reg as_character:cls, reg r23:V, reg c3:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg force:cls, reg ordered1:*, reg ordered2:V, reg p8:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg x9:*, reg x10:V, reg c4:L, reg r34:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg x11:*, reg x12:V, reg as_character1:cls, reg r37:V, reg levels3:*, reg levels4:V, reg c6:L, reg levels6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg levels9:V, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg levels12:V, reg r42:V, reg levels13:*, reg levels14:V, reg exclude1:*, reg exclude2:V, reg match:cls, reg r43:V, reg is_na:cls, reg r44:V, reg __1:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg x13:*, reg x14:V, reg levels15:*, reg levels16:V, reg match1:cls, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg nx:*, reg nx1:V, reg c7:V, reg r51:V, reg c8:L, reg nx2:*, reg nx3:V, reg l:*, reg names__:cls, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg missing1:cls, reg r55:V, reg c9:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg levels17:*, reg levels18:V, reg as_character2:cls, reg r58:V, reg l1:*, reg levels__:cls, reg r59:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg labels1:*, reg labels2:V, reg length:cls, reg r63:V, reg nlab:*, reg nlab1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg nlab4:V, reg r65:V, reg levels19:*, reg levels20:V, reg length1:cls, reg r66:V, reg r67:V, reg c10:L, reg unique2:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg labels3:*, reg labels4:V, reg as_character3:cls, reg r70:V, reg p9:p(V +), reg r72:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg r74:V, reg f:*, reg f1:V, reg attributes:cls, reg r75:V, reg nlevs:*, reg nlevs1:V, reg l2:*, reg c11:L, reg nlevs3:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r76:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r77:V, reg r78:V, reg xlevs:*, reg xlevs1:V, reg nlevs6:*, reg nlevs7:V, reg match2:cls, reg r79:V, reg c12:L, reg r81:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg f2:*, reg f3:V, reg __2:cls, reg r82:V, reg at:*, reg at1:V, reg l5:*, reg attributes__:cls, reg r83:V, reg nlab5:*, reg nlab6:V, reg r84:V, reg c13:L, reg paste0:cls, reg labels5:*, reg labels6:V, reg p10:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r86:V, reg r87:V, reg levels21:*, reg levels22:V, reg r88:I, reg p11:p(V +), reg r90:V, reg l6:*, reg levels__1:cls, reg r91:V, reg stop:cls, reg gettextf:cls, reg nlab7:*, reg nlab8:V, reg p12:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r93:V, reg r94:V, reg levels23:*, reg levels24:V, reg length2:cls, reg r95:V, reg p13:p(V +), reg r97:V, reg p14:p(V +), reg r99:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r100:V, reg r101:V, reg ordered3:*, reg ordered4:V, reg c14:L, reg r102:V, reg c15:cls, reg r103:V, reg l7:*, reg class__:cls, reg r104:V, reg f4:*, reg f5:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    st levels = levels;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L2() else L3(labels);
  L2():
    p1 = prom<V +>{
      levels1 = ld levels;
      levels2 = force? levels1;
      checkMissing(levels2);
      return levels2;
    };
    goto L3(p1);
  L3(labels_orDefault):
    st labels = labels_orDefault;
    exclude_isMissing = missing.0(exclude);
    if exclude_isMissing then L4(NA_LGL) else L4(exclude);
  L4(exclude_orDefault):
    st exclude = exclude_orDefault;
    ordered_isMissing = missing.0(ordered);
    if ordered_isMissing then L5() else L6(ordered);
  L5():
    p3 = prom<V +>{
      is_ordered = ldf `is.ordered`;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r4 = dyn is_ordered(p2);
      return r4;
    };
    goto L6(p3);
  L6(ordered_orDefault):
    st ordered = ordered_orDefault;
    nmax_isMissing = missing.0(nmax);
    if nmax_isMissing then L7(NA_LGL) else L7(nmax);
  L7(nmax_orDefault):
    st nmax = nmax_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L8(r7):
    c1 = `as.logical`(r7);
    if c1 then L43() else L9();
  L40():
    x3 = ld x;
    check L42() else D0();
  L41():
    r6 = dyn base(<sym x>);
    goto L8(r6);
  D0():
    deopt 1 [x3];
  L9():
    goto L10();
  L10():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L42():
    x4 = force? x3;
    checkMissing(x4);
    c = `==`(x4, NULL);
    goto L8(c);
  L43():
    character1 = ldf character;
    check L44() else D1();
  D1():
    deopt 5 [];
  L11(r11):
    st nx = r11;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L44():
    r8 = dyn character1();
    check L45() else D2();
  L47():
    x5 = ld x;
    check L49() else D3();
  L48():
    r10 = dyn base1(<sym x>);
    goto L11(r10);
  D2():
    deopt 6 [r8];
  D3():
    deopt 12 [x5];
  L12(r14):
    c2 = `as.logical`(r14);
    if c2 then L53() else L13();
  L45():
    st x = r8;
    goto L10();
  L49():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r12 = dyn names(x6);
    check L50() else D4();
  L51():
    missing = ldf missing in base;
    r15 = dyn missing(<sym levels>);
    goto L12(r15);
  L52():
    r13 = dyn base2(<sym levels>);
    goto L12(r13);
  D4():
    deopt 15 [r12];
  L13():
    goto L14();
  L14():
    force = ldf force;
    check L61() else D11();
  L50():
    goto L11(r12);
  L53():
    unique = ldf unique;
    check L54() else D5();
  D5():
    deopt 21 [];
  D11():
    deopt 40 [];
  L54():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p5 = prom<V +>{
      nmax1 = ld nmax;
      nmax2 = force? nmax1;
      checkMissing(nmax2);
      return nmax2;
    };
    r18 = dyn unique[, nmax](p4, p5);
    check L55() else D6();
  L61():
    p8 = prom<V +>{
      ordered1 = ld ordered;
      ordered2 = force? ordered1;
      checkMissing(ordered2);
      return ordered2;
    };
    r31 = dyn force(p8);
    check L62() else D12();
  D6():
    deopt 25 [r18];
  D12():
    deopt 42 [r31];
  L55():
    st y = r18;
    order = ldf order;
    check L56() else D7();
  L62():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  D7():
    deopt 28 [];
  L15(r33):
    r34 = `!`(r33);
    c5 = `as.logical`(r34);
    if c5 then L66() else L16();
  L56():
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r20 = dyn order(p6);
    check L57() else D8();
  L63():
    x9 = ld x;
    check L65() else D13();
  L64():
    r32 = dyn base4(<sym x>);
    goto L15(r32);
  D8():
    deopt 30 [r20];
  D13():
    deopt 44 [x9];
  L16():
    goto L18();
  L18():
    levels3 = ld levels;
    check L72() else D16();
  L57():
    st ind = r20;
    unique1 = ldf unique;
    check L58() else D9();
  L65():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.character`(x10);
    goto L15(c4);
  L66():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  D9():
    deopt 33 [];
  D16():
    deopt 57 [levels3];
  L17(r36):
    st x = r36;
    goto L18();
  L58():
    p7 = prom<V +>{
      sym3 = ldf `as.character`;
      base3 = ldf `as.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r22):
      c3 = `is.object`(r22);
      if c3 then L4() else L5(r22);
    L2():
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      as_character = ldf `as.character` in base;
      r23 = dyn as_character(y3);
      goto L0(r23);
    L3():
      r21 = dyn base3(<sym y>);
      goto L0(r21);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r22);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r25):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r26 = dyn __(r25, ind1);
      goto L1(r26);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r28 = dyn unique1(p7);
    check L59() else D10();
  L67():
    x11 = ld x;
    check L69() else D14();
  L68():
    r35 = dyn base5(<sym x>);
    goto L17(r35);
  L72():
    levels4 = force? levels3;
    checkMissing(levels4);
    c6 = `is.object`(levels4);
    if c6 then L73() else L74(levels4);
  D10():
    deopt 35 [r28];
  D14():
    deopt 50 [x11];
  L19(dx3):
    st levels = dx3;
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L59():
    st levels = r28;
    goto L14();
  L69():
    x12 = force? x11;
    checkMissing(x12);
    as_character1 = ldf `as.character` in base;
    r37 = dyn as_character1(x12);
    check L70() else D15();
  L73():
    dr2 = tryDispatchBuiltin.1("[", levels4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(dr2);
  L74(levels6):
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  D15():
    deopt 53 [r37];
  L20(levels9, r40):
    __1 = ldf `[` in base;
    r45 = dyn __1(levels9, r40);
    goto L19(r45);
  L22(r47):
    st f = r47;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  L70():
    goto L17(r37);
  L75():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L76():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L77():
    r39 = dyn base6(<lang match(levels, exclude)>);
    goto L20(levels6, r39);
  L84():
    x13 = ld x;
    check L86() else D21();
  L85():
    r46 = dyn base8(<sym x>, <sym levels>);
    goto L22(r46);
  D21():
    deopt 77 [x13];
  L21(levels12, r42):
    is_na = ldf `is.na` in base;
    r44 = dyn is_na(r42);
    check L83() else D20();
  L23(r50):
    r51 = `!`(r50);
    c8 = `as.logical`(r51);
    if c8 then L92() else L24();
  L78():
    levels13 = ld levels;
    check L80() else D17();
  L79():
    r41 = dyn base7(<sym levels>, <sym exclude>);
    goto L21(levels6, r41);
  L86():
    x14 = force? x13;
    checkMissing(x14);
    levels15 = ld levels;
    check L87() else D22();
  L89():
    nx = ld nx;
    check L91() else D24();
  L90():
    r49 = dyn base9(<sym nx>);
    goto L23(r49);
  D17():
    deopt 63 [levels6, levels13];
  D20():
    deopt 72 [levels12, r44];
  D22():
    deopt 79 [levels15];
  D24():
    deopt 87 [nx];
  L24():
    goto L25();
  L25():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  L80():
    levels14 = force? levels13;
    checkMissing(levels14);
    exclude1 = ld exclude;
    check L81() else D18();
  L83():
    goto L20(levels12, r44);
  L87():
    levels16 = force? levels15;
    checkMissing(levels16);
    match1 = ldf match in base;
    r48 = dyn match1(x14, levels16, NA_INT, NULL);
    check L88() else D23();
  L91():
    nx1 = force? nx;
    checkMissing(nx1);
    c7 = `==`(nx1, NULL);
    goto L23(c7);
  L92():
    nx2 = ld nx;
    check L93() else D25();
  D18():
    deopt 65 [levels6, exclude1];
  D23():
    deopt 84 [r48];
  D25():
    deopt 91 [nx2];
  L26(r54):
    c9 = `as.logical`(r54);
    if c9 then L99() else L27();
  L81():
    exclude2 = force? exclude1;
    checkMissing(exclude2);
    match = ldf match in base;
    r43 = dyn match(levels14, exclude2, NA_INT, NULL);
    check L82() else D19();
  L88():
    goto L22(r48);
  L93():
    nx3 = force? nx2;
    checkMissing(nx3);
    l = ld f;
    names__ = ldf `names<-`;
    check L94() else D26();
  L97():
    missing1 = ldf missing in base;
    r55 = dyn missing1(<sym labels>);
    goto L26(r55);
  L98():
    r53 = dyn base10(<sym labels>);
    goto L26(r53);
  D19():
    deopt 70 [levels6, r43];
  D26():
    deopt 94 [nx3, l, nx3];
  L27():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L107() else L108();
  L29():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L150() else L151();
  L82():
    goto L21(levels6, r43);
  L94():
    r52 = dyn names__(l, NULL, nx3);
    check L95() else D27();
  L99():
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L100() else L101();
  D27():
    deopt 96 [nx3, r52];
  L28(r57):
    l1 = ld f;
    levels__ = ldf `levels<-`;
    check L104() else D30();
  L30(r62):
    st nlab = r62;
    nlab = ld nlab;
    check L111() else D34();
  L37(r101):
    l7 = ld f;
    class__ = ldf `class<-`;
    check L156() else D58();
  L95():
    st f = r52;
    goto L25();
  L100():
    levels17 = ld levels;
    check L102() else D28();
  L101():
    r56 = dyn base11(<sym levels>);
    goto L28(r56);
  L107():
    labels1 = ld labels;
    check L109() else D32();
  L108():
    r61 = dyn base12(<sym labels>);
    goto L30(r61);
  L150():
    ordered3 = ld ordered;
    check L152() else D56();
  L151():
    r100 = dyn base19(<lang if(ordered, "ordered")>, "factor");
    goto L37(r100);
  D28():
    deopt 105 [levels17];
  D30():
    deopt 110 [r57, l1, r57];
  D32():
    deopt 116 [labels1];
  D34():
    deopt 121 [nlab];
  D56():
    deopt 189 [ordered3];
  D58():
    deopt 199 [r101, l7, r101];
  L102():
    levels18 = force? levels17;
    checkMissing(levels18);
    as_character2 = ldf `as.character` in base;
    r58 = dyn as_character2(levels18);
    check L103() else D29();
  L104():
    r59 = dyn levels__(l1, NULL, r57);
    check L105() else D31();
  L109():
    labels2 = force? labels1;
    checkMissing(labels2);
    length = ldf length in base;
    r63 = dyn length(labels2);
    check L110() else D33();
  L111():
    nlab1 = force? nlab;
    checkMissing(nlab1);
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L112() else L113();
  L152():
    ordered4 = force? ordered3;
    checkMissing(ordered4);
    c14 = `as.logical`(ordered4);
    if c14 then L153() else L38();
  L156():
    r104 = dyn class__(l7, NULL, r101);
    check L157() else D59();
  D29():
    deopt 108 [r58];
  D31():
    deopt 112 [r57, r59];
  D33():
    deopt 119 [r63];
  D59():
    deopt 201 [r101, r104];
  L31(nlab4, r65):
    r67 = `==`(nlab4, r65);
    c10 = `as.logical`(r67);
    if c10 then L116() else L32();
  L38():
    goto L39(NULL);
  L39(r102):
    c15 = ldf c in base;
    r103 = dyn c15(r102, "factor");
    check L155() else D57();
  L103():
    goto L28(r58);
  L105():
    st f = r59;
    goto L29();
  L110():
    goto L30(r63);
  L112():
    levels19 = ld levels;
    check L114() else D35();
  L113():
    r64 = dyn base13(<sym levels>);
    goto L31(nlab1, r64);
  L153():
    goto L39("ordered");
  L157():
    st f = r104;
    f4 = ld f;
    check L158() else D60();
  D35():
    deopt 124 [nlab1, levels19];
  D57():
    deopt 197 [r103];
  D60():
    deopt 203 [f4];
  L32():
    nlab5 = ld nlab;
    check L141() else D49();
  L114():
    levels20 = force? levels19;
    checkMissing(levels20);
    length1 = ldf length in base;
    r66 = dyn length1(levels20);
    check L115() else D36();
  L116():
    unique2 = ldf unique;
    check L117() else D37();
  L155():
    goto L37(r103);
  L158():
    f5 = force? f4;
    checkMissing(f5);
    popenv;
    return f5;
  D36():
    deopt 127 [nlab1, r66];
  D37():
    deopt 130 [];
  D49():
    deopt 167 [nlab5];
  L115():
    goto L31(nlab1, r66);
  L117():
    p9 = prom<V +>{
      sym14 = ldf `as.character`;
      base14 = ldf `as.character` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r69):
      st xlevs = r69;
      invisible.0();
      return r69;
    L1():
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      as_character3 = ldf `as.character` in base;
      r70 = dyn as_character3(labels4);
      goto L0(r70);
    L2():
      r68 = dyn base14(<sym labels>);
      goto L0(r68);
    };
    r72 = dyn unique2(p9);
    check L118() else D38();
  L141():
    nlab6 = force? nlab5;
    checkMissing(nlab6);
    r84 = `==`(nlab6, 1);
    c13 = `as.logical`(r84);
    if c13 then L142() else L36();
  D38():
    deopt 132 [r72];
  L36():
    stop = ldf stop;
    check L148() else D54();
  L118():
    st nlevs = r72;
    sym15 = ldf attributes;
    base15 = ldf attributes in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L119() else L120();
  L142():
    paste0 = ldf paste0;
    check L143() else D50();
  D50():
    deopt 172 [];
  D54():
    deopt 182 [];
  L33(r74):
    st at = r74;
    nlevs = ld nlevs;
    check L123() else D41();
  L119():
    f = ld f;
    check L121() else D39();
  L120():
    r73 = dyn base15(<sym f>);
    goto L33(r73);
  L143():
    p10 = prom<V +>{
      labels5 = ld labels;
      labels6 = force? labels5;
      checkMissing(labels6);
      return labels6;
    };
    p11 = prom<V +>{
      sym17 = ldf seq_along;
      base17 = ldf seq_along in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      levels21 = ld levels;
      levels22 = force? levels21;
      checkMissing(levels22);
      r88 = seq_along(levels22);
      goto L0(r88);
    L2():
      r86 = dyn base17(<sym levels>);
      goto L0(r86);
    };
    r90 = dyn paste0(p10, p11);
    check L144() else D51();
  L148():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        nlab7 = ld nlab;
        nlab8 = force? nlab7;
        checkMissing(nlab8);
        return nlab8;
      };
      p13 = prom<V +>{
        sym18 = ldf length;
        base18 = ldf length in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L1() else L2();
      L0(r94):
        return r94;
      L1():
        levels23 = ld levels;
        levels24 = force? levels23;
        checkMissing(levels24);
        length2 = ldf length in base;
        r95 = dyn length2(levels24);
        goto L0(r95);
      L2():
        r93 = dyn base18(<sym levels>);
        goto L0(r93);
      };
      r97 = dyn gettextf("invalid 'labels'; length %d should be 1 or %d", p12, p13);
      return r97;
    };
    r99 = dyn stop[, domain](p14, NA_LGL);
    check L149() else D55();
  D39():
    deopt 136 [f];
  D41():
    deopt 141 [nlevs];
  D51():
    deopt 175 [r90];
  D55():
    deopt 186 [r99];
  L121():
    f1 = force? f;
    checkMissing(f1);
    attributes = ldf attributes in base;
    r75 = dyn attributes(f1);
    check L122() else D40();
  L123():
    nlevs1 = force? nlevs;
    checkMissing(nlevs1);
    l2 = ld at;
    c11 = `is.object`(l2);
    if c11 then L125() else L126(nlevs1, l2);
  L144():
    l6 = ld f;
    levels__1 = ldf `levels<-`;
    check L145() else D52();
  L149():
    goto L29();
  D40():
    deopt 139 [r75];
  D52():
    deopt 177 [r90, l6, r90];
  L122():
    goto L33(r75);
  L124(dx5):
    st at = dx5;
    sym16 = ldf match;
    base16 = ldf match in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L128() else L129();
  L125():
    dr4 = tryDispatchBuiltin.0("$<-", l2, nlevs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L127() else L126(nlevs1, dr4);
  L126(nlevs3, l4):
    r76 = `$<-`(l4, <sym levels>, nlevs1);
    goto L124(r76);
  L145():
    r91 = dyn levels__1(l6, NULL, r90);
    check L146() else D53();
  D53():
    deopt 179 [r90, r91];
  L34(r78):
    c12 = `is.object`(r78);
    if c12 then L133() else L134(r78);
  L127():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L124(dx4);
  L128():
    xlevs = ld xlevs;
    check L130() else D42();
  L129():
    r77 = dyn base16(<sym xlevs>, <sym nlevs>);
    goto L34(r77);
  L146():
    st f = r91;
    goto L29();
  D42():
    deopt 148 [xlevs];
  L35(dx7):
    st f = dx7;
    at = ld at;
    check L137() else D46();
  L130():
    xlevs1 = force? xlevs;
    checkMissing(xlevs1);
    nlevs6 = ld nlevs;
    check L131() else D43();
  L133():
    dr6 = tryDispatchBuiltin.1("[", r78);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L135() else L134(dr6);
  L134(r81):
    f2 = ld f;
    check L136() else D45();
  D43():
    deopt 150 [nlevs6];
  D45():
    deopt 156 [r81, f2];
  D46():
    deopt 160 [at];
  L131():
    nlevs7 = force? nlevs6;
    checkMissing(nlevs7);
    match2 = ldf match in base;
    r79 = dyn match2(xlevs1, nlevs7, NA_INT, NULL);
    check L132() else D44();
  L135():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L136():
    f3 = force? f2;
    __2 = ldf `[` in base;
    r82 = dyn __2(r81, f3);
    goto L35(r82);
  L137():
    at1 = force? at;
    checkMissing(at1);
    l5 = ld f;
    attributes__ = ldf `attributes<-`;
    check L138() else D47();
  D44():
    deopt 155 [r79];
  D47():
    deopt 163 [at1, l5, at1];
  L132():
    goto L34(r79);
  L138():
    r83 = dyn attributes__(l5, NULL, at1);
    check L139() else D48();
  D48():
    deopt 165 [at1, r83];
  L139():
    st f = r83;
    goto L29();
  }
}