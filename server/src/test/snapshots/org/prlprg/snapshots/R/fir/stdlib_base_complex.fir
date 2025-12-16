fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg matrix:cls, reg r5:V, reg r6:V, reg p1:p(V +), reg r8:V, reg complex:cls, reg __:cls, reg r9:V, reg r10:cls, reg r11:V, reg p2:p(V +), reg __1:cls, reg r13:V, reg r14:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg rep:cls, reg r20:V, reg r21:V, reg r22:V, reg complex1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg zz:*, reg zz1:V, reg Mod:cls, reg r25:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg zz2:*, reg zz3:V, reg Arg:cls, reg r29:V, reg r30:V, reg p5:p(V +), reg r32:V, reg plot:cls, reg zz4:*, reg zz5:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg c:cls, reg r36:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg c1:cls, reg r40:V, reg p8:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg expression:cls, reg r44:V, reg p9:p(V +), reg r46:V, reg abline:cls, reg r47:V, reg points:cls, reg zz_shift:*, reg zz_shift1:V, reg p10:p(V +), reg r49:V, reg stopifnot:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg as_complex:cls, reg r54:V, reg identical:cls, reg r55:V, reg p11:p(V +), reg r57:V, reg vapply:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg list:cls, reg r60:V, reg p12:p(V +), reg as_complex1:*, reg as_complex2:V, reg p13:p(V +), reg p14:p(V +), reg r64:V, reg stopifnot1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg NAs:*, reg NAs1:V, reg is_na:cls, reg r67:V, reg p15:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg NAs2:*, reg NAs3:V, reg Re:cls, reg r73:V, reg is_na1:cls, reg r74:V, reg p16:p(V +), reg r76:V, reg r77:cls, reg showC:cls, reg NAs4:*, reg NAs5:V, reg p17:p(V +), reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg NAs6:*, reg NAs7:V, reg Im:cls, reg r82:V, reg stopifnot2:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg r84:V, reg NAs8:*, reg NAs9:V, reg Im1:cls, reg r85:V, reg c2:L, reg r87:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r88:V, reg r89:V, reg p18:p(V +), reg r91:V, reg str:cls, reg NpNA:*, reg NpNA1:V, reg p19:p(V +), reg r93:V, reg stopifnot3:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r94:V, reg r95:V, reg NpNA2:*, reg NpNA3:V, reg is_na2:cls, reg r96:V, reg p20:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg is_na3:cls, reg r100:V, reg p21:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r102:V, reg r103:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg Re1:cls, reg r106:V, reg is_na4:cls, reg r107:V, reg p22:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r109:V, reg r110:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r111:V, reg r112:V, reg Im2:cls, reg r113:V, reg is_na5:cls, reg r114:V, reg p23:p(V +), reg r116:V, reg showC1:cls, reg NpNA4:*, reg NpNA5:V, reg p24:p(V +), reg r118:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r119:V, reg NpNA6:*, reg NpNA7:V, reg identical1:cls, reg r121:V, reg showC2:cls, reg r122:V |
    mkenv;
    r = clos inner1990462342;
    st complex = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    matrix = ldf matrix;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 11 [];
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      r5 = `:`(-6.0, 5.0);
      r6 = `^`(1.0i, r5);
      return r6;
    };
    r8 = dyn matrix[, nrow](p1, 4.0);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r8];
  L7():
    goto L0();
  L9():
    complex = ldf complex;
    check L10() else D4();
  D4():
    deopt 19 [];
  L10():
    p2 = prom<V +>{
      __ = ldf `::`;
      r9 = dyn __("stats", "rnorm");
      checkFun.0(r9);
      r10 = r9 as cls;
      r11 = dyn r10(100.0);
      return r11;
    };
    p3 = prom<V +>{
      __1 = ldf `::`;
      r13 = dyn __1("stats", "rnorm");
      checkFun.0(r13);
      r14 = r13 as cls;
      r15 = dyn r14(100.0);
      return r15;
    };
    r17 = dyn complex[real, imaginary](p2, p3);
    check L11() else D5();
  D5():
    deopt 24 [r17];
  L11():
    st z = r17;
    st z2 = <cplx 1.0+8.0i, 2.0+9.0i>;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(r19):
    r21 = `+`(r19, <cplx 9.0i, 8.0i, 7.0i, 6.0i, 5.0i, 4.0i, 3.0i, 2.0i, 1.0i>);
    r22 = `/`(r21, 10.0);
    st zz = r22;
    complex1 = ldf complex;
    check L14() else D6();
  L12():
    rep = ldf rep in base;
    r20 = dyn rep(<lang `:`(1.0, 4.0)>, 9.0);
    goto L1(r20);
  L13():
    r18 = dyn base1[, `length.out`](<lang `:`(1.0, 4.0)>, 9.0);
    goto L1(r18);
  D6():
    deopt 38 [];
  L14():
    p4 = prom<V +>{
      sym2 = ldf Mod;
      base2 = ldf Mod in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      Mod = ldf Mod in base;
      r25 = dyn Mod(zz1);
      goto L0(r25);
    L2():
      r23 = dyn base2(<sym zz>);
      goto L0(r23);
    };
    p5 = prom<V +>{
      sym3 = ldf Arg;
      base3 = ldf Arg in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      r30 = `+`(r28, 3.141592653589793);
      return r30;
    L1():
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      Arg = ldf Arg in base;
      r29 = dyn Arg(zz3);
      goto L0(r29);
    L2():
      r27 = dyn base3(<sym zz>);
      goto L0(r27);
    };
    r32 = dyn complex1[modulus, argument](p4, p5);
    check L15() else D7();
  D7():
    deopt 43 [r32];
  L15():
    st `zz.shift` = r32;
    plot = ldf plot;
    check L16() else D8();
  D8():
    deopt 46 [];
  L16():
    p6 = prom<V +>{
      zz4 = ld zz;
      zz5 = force? zz4;
      checkMissing(zz5);
      return zz5;
    };
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c = ldf c in base;
      r36 = dyn c(-1.0, 1.0);
      goto L0(r36);
    L2():
      r34 = dyn base4(<lang `-`(1.0)>, 1.0);
      goto L0(r34);
    };
    p8 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      c1 = ldf c in base;
      r40 = dyn c1(-1.0, 1.0);
      goto L0(r40);
    L2():
      r38 = dyn base5(<lang `-`(1.0)>, 1.0);
      goto L0(r38);
    };
    p9 = prom<V +>{
      sym6 = ldf expression;
      base6 = ldf expression in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      expression = ldf expression in base;
      r44 = dyn expression(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>);
      goto L0(r44);
    L2():
      r42 = dyn base6(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>);
      goto L0(r42);
    };
    r46 = dyn plot[, xlim, ylim, col, asp, main](p6, p7, p8, "red", 1.0, p9);
    check L17() else D9();
  D9():
    deopt 58 [r46];
  L17():
    abline = ldf abline;
    check L18() else D10();
  D10():
    deopt 60 [];
  L18():
    r47 = dyn abline[h, v, col, lty](0.0, 0.0, "blue", 3.0);
    check L19() else D11();
  D11():
    deopt 69 [r47];
  L19():
    points = ldf points;
    check L20() else D12();
  D12():
    deopt 71 [];
  L20():
    p10 = prom<V +>{
      zz_shift = ld `zz.shift`;
      zz_shift1 = force? zz_shift;
      checkMissing(zz_shift1);
      return zz_shift1;
    };
    r49 = dyn points[, col](p10, "orange");
    check L21() else D13();
  D13():
    deopt 75 [r49];
  L21():
    stopifnot = ldf stopifnot;
    check L22() else D14();
  D14():
    deopt 77 [];
  L22():
    p11 = prom<V +>{
      sym7 = ldf identical;
      base7 = ldf identical in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r51):
      return r51;
    L2():
      sym8 = ldf `as.complex`;
      base8 = ldf `as.complex` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r50 = dyn base7(<lang as.complex(NA_REAL)>, <lang `+`(NA_REAL, 0.0i)>);
      goto L0(r50);
    L1(r53):
      identical = ldf identical in base;
      r55 = dyn identical(r53, NA_CPLX, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r55);
    L4():
      as_complex = ldf `as.complex` in base;
      r54 = dyn as_complex(NA_REAL);
      goto L1(r54);
    L5():
      r52 = dyn base8(NA_REAL);
      goto L1(r52);
    };
    r57 = dyn stopifnot(p11);
    check L23() else D15();
  D15():
    deopt 79 [r57];
  L23():
    vapply = ldf vapply;
    check L24() else D16();
  D16():
    deopt 81 [];
  L24():
    p12 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      list = ldf list in base;
      r60 = dyn list(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX);
      goto L0(r60);
    L2():
      r58 = dyn base9(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX);
      goto L0(r58);
    };
    p13 = prom<V +>{
      as_complex1 = ld `as.complex`;
      as_complex2 = force? as_complex1;
      checkMissing(as_complex2);
      return as_complex2;
    };
    p14 = prom<V +>{
      return 0.0i;
    };
    r64 = dyn vapply(p12, p13, p14);
    check L25() else D17();
  D17():
    deopt 85 [r64];
  L25():
    st NAs = r64;
    stopifnot1 = ldf stopifnot;
    check L26() else D18();
  D18():
    deopt 88 [];
  L26():
    p15 = prom<V +>{
      sym10 = ldf `is.na`;
      base10 = ldf `is.na` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      NAs = ld NAs;
      NAs1 = force? NAs;
      checkMissing(NAs1);
      is_na = ldf `is.na` in base;
      r67 = dyn is_na(NAs1);
      goto L0(r67);
    L2():
      r65 = dyn base10(<sym NAs>);
      goto L0(r65);
    };
    p16 = prom<V +>{
      sym11 = ldf `is.na`;
      base11 = ldf `is.na` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r70):
      return r70;
    L2():
      sym12 = ldf Re;
      base12 = ldf Re in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r69 = dyn base11(<lang Re(NAs)>);
      goto L0(r69);
    L1(r72):
      is_na1 = ldf `is.na` in base;
      r74 = dyn is_na1(r72);
      goto L0(r74);
    L4():
      NAs2 = ld NAs;
      NAs3 = force? NAs2;
      checkMissing(NAs3);
      Re = ldf Re in base;
      r73 = dyn Re(NAs3);
      goto L1(r73);
    L5():
      r71 = dyn base12(<sym NAs>);
      goto L1(r71);
    };
    r76 = dyn stopifnot1(p15, p16);
    check L27() else D19();
  D19():
    deopt 91 [r76];
  L27():
    r77 = clos inner973687;
    st showC = r77;
    showC = ldf showC;
    check L28() else D20();
  D20():
    deopt 96 [];
  L28():
    p17 = prom<V +>{
      NAs4 = ld NAs;
      NAs5 = force? NAs4;
      checkMissing(NAs5);
      return NAs5;
    };
    r79 = dyn showC(p17);
    check L29() else D21();
  D21():
    deopt 98 [r79];
  L29():
    sym13 = ldf Im;
    base13 = ldf Im in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L30() else L31();
  L2():
    stopifnot2 = ldf stopifnot;
    check L34() else D24();
  L30():
    NAs6 = ld NAs;
    check L32() else D22();
  L31():
    r80 = dyn base13(<sym NAs>);
    goto L2();
  D22():
    deopt 101 [NAs6];
  D24():
    deopt 106 [];
  L32():
    NAs7 = force? NAs6;
    checkMissing(NAs7);
    Im = ldf Im in base;
    r82 = dyn Im(NAs7);
    check L33() else D23();
  L34():
    p18 = prom<V +>{
      sym14 = ldf Im;
      base14 = ldf Im in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r84):
      c2 = `is.object`(r84);
      if c2 then L4() else L5(r84);
    L2():
      NAs8 = ld NAs;
      NAs9 = force? NAs8;
      checkMissing(NAs9);
      Im1 = ldf Im in base;
      r85 = dyn Im1(NAs9);
      goto L0(r85);
    L3():
      r83 = dyn base14(<sym NAs>);
      goto L0(r83);
    L1(dx1):
      r89 = `==`(dx1, 0.0);
      return r89;
    L4():
      dr = tryDispatchBuiltin.1("[", r84);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r87):
      __2 = ldf `[` in base;
      r88 = dyn __2(r87, <int 1, 2, 3>);
      goto L1(r88);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r91 = dyn stopifnot2(p18);
    check L35() else D25();
  D23():
    deopt 104 [r82];
  D25():
    deopt 108 [r91];
  L33():
    goto L2();
  L35():
    st NpNA = NA_CPLX;
    str = ldf str;
    check L36() else D26();
  D26():
    deopt 113 [];
  L36():
    p19 = prom<V +>{
      NpNA = ld NpNA;
      NpNA1 = force? NpNA;
      checkMissing(NpNA1);
      return NpNA1;
    };
    r93 = dyn str(p19);
    check L37() else D27();
  D27():
    deopt 115 [r93];
  L37():
    stopifnot3 = ldf stopifnot;
    check L38() else D28();
  D28():
    deopt 117 [];
  L38():
    p20 = prom<V +>{
      sym15 = ldf `is.na`;
      base15 = ldf `is.na` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      NpNA2 = ld NpNA;
      NpNA3 = force? NpNA2;
      checkMissing(NpNA3);
      is_na2 = ldf `is.na` in base;
      r96 = dyn is_na2(NpNA3);
      goto L0(r96);
    L2():
      r94 = dyn base15(<sym NpNA>);
      goto L0(r94);
    };
    p21 = prom<V +>{
      sym16 = ldf `is.na`;
      base16 = ldf `is.na` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      is_na3 = ldf `is.na` in base;
      r100 = dyn is_na3(NA_CPLX);
      goto L0(r100);
    L2():
      r98 = dyn base16(NA_CPLX);
      goto L0(r98);
    };
    p22 = prom<V +>{
      sym17 = ldf `is.na`;
      base17 = ldf `is.na` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L2() else L3();
    L0(r103):
      return r103;
    L2():
      sym18 = ldf Re;
      base18 = ldf Re in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L4() else L5();
    L3():
      r102 = dyn base17(<lang Re(NA_CPLX)>);
      goto L0(r102);
    L1(r105):
      is_na4 = ldf `is.na` in base;
      r107 = dyn is_na4(r105);
      goto L0(r107);
    L4():
      Re1 = ldf Re in base;
      r106 = dyn Re1(NA_CPLX);
      goto L1(r106);
    L5():
      r104 = dyn base18(NA_CPLX);
      goto L1(r104);
    };
    p23 = prom<V +>{
      sym19 = ldf `is.na`;
      base19 = ldf `is.na` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L2() else L3();
    L0(r110):
      return r110;
    L2():
      sym20 = ldf Im;
      base20 = ldf Im in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L4() else L5();
    L3():
      r109 = dyn base19(<lang Im(NA_CPLX)>);
      goto L0(r109);
    L1(r112):
      is_na5 = ldf `is.na` in base;
      r114 = dyn is_na5(r112);
      goto L0(r114);
    L4():
      Im2 = ldf Im in base;
      r113 = dyn Im2(NA_CPLX);
      goto L1(r113);
    L5():
      r111 = dyn base20(NA_CPLX);
      goto L1(r111);
    };
    r116 = dyn stopifnot3(p20, p21, p22, p23);
    check L39() else D29();
  D29():
    deopt 122 [r116];
  L39():
    showC1 = ldf showC;
    check L40() else D30();
  D30():
    deopt 124 [];
  L40():
    p24 = prom<V +>{
      NpNA4 = ld NpNA;
      NpNA5 = force? NpNA4;
      checkMissing(NpNA5);
      return NpNA5;
    };
    r118 = dyn showC1(p24);
    check L41() else D31();
  D31():
    deopt 126 [r118];
  L41():
    sym21 = ldf identical;
    base21 = ldf identical in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L42() else L43();
  L3():
    showC2 = ldf showC;
    check L46() else D34();
  L42():
    NpNA6 = ld NpNA;
    check L44() else D32();
  L43():
    r119 = dyn base21(<sym NpNA>, NA_CPLX);
    goto L3();
  D32():
    deopt 129 [NpNA6];
  D34():
    deopt 142 [];
  L44():
    NpNA7 = force? NpNA6;
    checkMissing(NpNA7);
    identical1 = ldf identical in base;
    r121 = dyn identical1(NpNA7, NA_CPLX, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L45() else D33();
  L46():
    r122 = dyn showC2(NA_CPLX);
    check L47() else D35();
  D33():
    deopt 140 [r121];
  D35():
    deopt 144 [r122];
  L45():
    goto L3();
  L47():
    popenv;
    return r122;
  }
}
fun inner1990462342(`length.out`, real, imaginary, modulus, argument) {
  (reg length_out:*, reg real:*, reg imaginary:*, reg modulus:*, reg argument:*) -+> V { var `length.out`:*, reg length_out_isMissing:L, reg length_out_orDefault:*, var real:*, reg real_isMissing:L, reg real_orDefault:*, reg numeric:cls, reg r:V, reg p:p(V +), var imaginary:*, reg imaginary_isMissing:L, reg imaginary_orDefault:*, reg numeric1:cls, reg r2:V, reg p1:p(V +), var modulus:*, reg modulus_isMissing:L, reg modulus_orDefault:*, var argument:*, reg argument_isMissing:L, reg argument_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c5:L, reg r8:V, reg missing1:cls, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg length_out1:*, reg length_out2:V, reg real1:*, reg real2:V, reg imaginary1:*, reg imaginary2:V, reg complex:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg length_out3:*, reg length_out4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg argument1:*, reg argument2:V, reg length:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg modulus1:*, reg modulus2:V, reg length1:cls, reg r20:V, reg max:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg modulus3:*, reg modulus4:V, reg n:*, reg n1:V, reg rep_len:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg r36:V, reg r37:V, reg argument3:*, reg argument4:V, reg n2:*, reg n3:V, reg rep_len1:cls, reg r38:V, reg r39:V, reg r40:V, reg r41:V |
    mkenv;
    length_out_isMissing = missing.0(length_out);
    if length_out_isMissing then L0(0) else L0(length_out);
  L0(length_out_orDefault):
    st `length.out` = length_out_orDefault;
    real_isMissing = missing.0(real);
    if real_isMissing then L1() else L2(real);
  L1():
    p = prom<V +>{
      numeric = ldf numeric;
      r = dyn numeric();
      return r;
    };
    goto L2(p);
  L2(real_orDefault):
    st real = real_orDefault;
    imaginary_isMissing = missing.0(imaginary);
    if imaginary_isMissing then L3() else L4(imaginary);
  L3():
    p1 = prom<V +>{
      numeric1 = ldf numeric;
      r2 = dyn numeric1();
      return r2;
    };
    goto L4(p1);
  L4(imaginary_orDefault):
    st imaginary = imaginary_orDefault;
    modulus_isMissing = missing.0(modulus);
    if modulus_isMissing then L5(1.0) else L5(modulus);
  L5(modulus_orDefault):
    st modulus = modulus_orDefault;
    argument_isMissing = missing.0(argument);
    if argument_isMissing then L6(0.0) else L6(argument);
  L6(argument_orDefault):
    st argument = argument_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L7(r5):
    c = `as.logical`(r5);
    if c then L20() else L8(c);
  L18():
    missing = ldf missing in base;
    r6 = dyn missing(<sym modulus>);
    goto L7(r6);
  L19():
    r4 = dyn base(<sym modulus>);
    goto L7(r4);
  L8(c2):
    c9 = `as.logical`(c2);
    if c9 then L24() else L10();
  L20():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L9(c5, r8):
    c6 = `as.logical`(r8);
    c7 = `&&`(c5, c6);
    goto L8(c7);
  L10():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L21():
    missing1 = ldf missing in base;
    r9 = dyn missing1(<sym argument>);
    goto L9(c, r9);
  L22():
    r7 = dyn base1(<sym argument>);
    goto L9(c, r7);
  L24():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L11(r11):
    popenv;
    return r11;
  L12(r14):
    st n = r14;
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L25():
    length_out1 = ld `length.out`;
    check L27() else D0();
  L26():
    r10 = dyn base2(<lang complex(length.out, real, imaginary)>);
    goto L11(r10);
  L32():
    length_out3 = ld `length.out`;
    check L34() else D4();
  L33():
    r13 = dyn base3(<sym length.out>, <lang length(argument)>, <lang length(modulus)>);
    goto L12(r13);
  D0():
    deopt 9 [length_out1];
  D4():
    deopt 19 [length_out3];
  L15(r23):
    sym7 = ldf exp;
    base7 = ldf exp in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L49() else L50();
  L27():
    length_out2 = force? length_out1;
    checkMissing(length_out2);
    real1 = ld real;
    check L28() else D1();
  L34():
    length_out4 = force? length_out3;
    checkMissing(length_out4);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L44():
    modulus3 = ld modulus;
    check L46() else D10();
  L45():
    r22 = dyn base6(<sym modulus>, <sym n>);
    goto L15(r22);
  D1():
    deopt 11 [real1];
  D10():
    deopt 38 [modulus3];
  L13(r16):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L16(r28, r29):
    r41 = `*`(r28, r29);
    popenv;
    return r41;
  L28():
    real2 = force? real1;
    checkMissing(real2);
    imaginary1 = ld imaginary;
    check L29() else D2();
  L35():
    argument1 = ld argument;
    check L37() else D5();
  L36():
    r15 = dyn base4(<sym argument>);
    goto L13(r15);
  L46():
    modulus4 = force? modulus3;
    checkMissing(modulus4);
    n = ld n;
    check L47() else D11();
  L49():
    sym8 = ldf rep_len;
    base8 = ldf rep_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L51() else L52();
  L50():
    r27 = dyn base7(<lang `*`(`(`(`+`(0.0, 1.0i)), rep_len(argument, n))>);
    goto L16(r23, r27);
  D2():
    deopt 13 [imaginary1];
  D5():
    deopt 23 [argument1];
  D11():
    deopt 40 [n];
  L14(r19):
    max = ldf max in base;
    r21 = dyn max(length_out4, r16, r19);
    check L43() else D9();
  L17(r35, r36, r37):
    r39 = `*`(r36, r37);
    r40 = exp(r39);
    goto L16(r35, r40);
  L29():
    imaginary2 = force? imaginary1;
    checkMissing(imaginary2);
    complex = ldf complex in base;
    r12 = dyn complex(length_out2, real2, imaginary2);
    check L30() else D3();
  L37():
    argument2 = force? argument1;
    checkMissing(argument2);
    length = ldf length in base;
    r17 = dyn length(argument2);
    check L38() else D6();
  L39():
    modulus1 = ld modulus;
    check L41() else D7();
  L40():
    r18 = dyn base5(<sym modulus>);
    goto L14(r18);
  L47():
    n1 = force? n;
    checkMissing(n1);
    rep_len = ldf rep_len in base;
    r24 = dyn rep_len(modulus4, n1);
    check L48() else D12();
  L51():
    argument3 = ld argument;
    check L53() else D13();
  L52():
    r34 = dyn base8(<sym argument>, <sym n>);
    goto L17(r23, 1.0i, r34);
  D3():
    deopt 16 [r12];
  D6():
    deopt 26 [r17];
  D7():
    deopt 29 [modulus1];
  D9():
    deopt 34 [r21];
  D12():
    deopt 43 [r24];
  D13():
    deopt 47 [r23, 1.0i, argument3];
  L30():
    goto L11(r12);
  L38():
    goto L13(r17);
  L41():
    modulus2 = force? modulus1;
    checkMissing(modulus2);
    length1 = ldf length in base;
    r20 = dyn length1(modulus2);
    check L42() else D8();
  L43():
    goto L12(r21);
  L48():
    goto L15(r24);
  L53():
    argument4 = force? argument3;
    checkMissing(argument4);
    n2 = ld n;
    check L54() else D14();
  D8():
    deopt 32 [r20];
  D14():
    deopt 49 [r23, 1.0i, n2];
  L42():
    goto L14(r20);
  L54():
    n3 = force? n2;
    checkMissing(n3);
    rep_len1 = ldf rep_len in base;
    r38 = dyn rep_len1(argument4, n3);
    check L55() else D15();
  D15():
    deopt 52 [r23, 1.0i, r38];
  L55():
    goto L17(r23, 1.0i, r38);
  }
}
fun inner973687(z) {
  (reg z:*) -+> V { var z:*, reg noquote:cls, reg paste0:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg z1:*, reg z2:V, reg Re:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg z3:*, reg z4:V, reg Im:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st z = z;
    noquote = ldf noquote;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        sym = ldf Re;
        base = ldf Re in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        z1 = ld z;
        z2 = force? z1;
        checkMissing(z2);
        Re = ldf Re in base;
        r2 = dyn Re(z2);
        goto L0(r2);
      L2():
        r = dyn base(<sym z>);
        goto L0(r);
      };
      p1 = prom<V +>{
        sym1 = ldf Im;
        base1 = ldf Im in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        z3 = ld z;
        z4 = force? z3;
        checkMissing(z4);
        Im = ldf Im in base;
        r6 = dyn Im(z4);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym z>);
        goto L0(r4);
      };
      r8 = dyn paste0("(", p, ",", p1, ")");
      return r8;
    };
    r10 = dyn noquote(p2);
    check L1() else D1();
  D1():
    deopt 3 [r10];
  L1():
    popenv;
    return r10;
  }
}