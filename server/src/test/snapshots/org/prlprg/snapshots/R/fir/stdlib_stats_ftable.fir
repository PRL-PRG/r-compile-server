fun main() {
  () -+> V { reg r:cls, reg ftable:cls, reg Titanic:*, reg Titanic1:V, reg p:p(V +), reg p1:p(V +), reg r3:V, reg ftable1:cls, reg Titanic2:*, reg Titanic3:V, reg p2:p(V +), reg p3:p(V +), reg r6:V, reg ftable2:cls, reg Titanic4:*, reg Titanic5:V, reg p4:p(V +), reg p5:p(V +), reg r9:V, reg integer:cls, reg r10:V, reg ftable3:cls, reg Titanic6:*, reg Titanic7:V, reg p6:p(V +), reg __:*, reg __1:V, reg p7:p(V +), reg r13:V, reg ftable4:cls, reg Titanic8:*, reg Titanic9:V, reg p8:p(V +), reg __2:*, reg __3:V, reg p9:p(V +), reg r16:V, reg ftable5:cls, reg Titanic10:*, reg Titanic11:V, reg p10:p(V +), reg __4:*, reg __5:V, reg p11:p(V +), reg r19:V, reg ftable6:cls, reg Titanic12:*, reg Titanic13:V, reg p12:p(V +), reg __6:*, reg __7:V, reg p13:p(V +), reg __8:*, reg __9:V, reg p14:p(V +), reg r23:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg f04:*, reg f5:V, reg dim:cls, reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg r31:V, reg c:cls, reg r32:V, reg r33:V, reg p15:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg f10:*, reg f11:V, reg dim1:cls, reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg r42:V, reg c1:cls, reg r43:V, reg r44:V, reg p16:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg f12:*, reg f13:V, reg dim2:cls, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg r53:V, reg c2:cls, reg r54:V, reg r55:V, reg p17:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg f14:*, reg f15:V, reg dim3:cls, reg r59:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg r64:V, reg c3:cls, reg r65:V, reg r66:V, reg p18:p(V +), reg r68:V, reg ftable7:cls, reg mtcars:*, reg mtcars1:V, reg c4:L, reg mtcars3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg mtcars6:V, reg r70:V, reg c5:cls, reg r71:V, reg __10:cls, reg r72:V, reg p19:p(V +), reg r74:V, reg x:*, reg x1:V, reg ftable8:cls, reg x2:*, reg x3:V, reg p20:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg r77:V, reg c6:cls, reg r78:V, reg p21:p(V +), reg r80:V, reg ftable9:cls, reg mtcars7:*, reg mtcars8:V, reg c7:L, reg mtcars10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r81:V, reg p22:p(V +), reg mtcars11:*, reg mtcars12:V, reg c8:L, reg mtcars14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r83:V, reg p23:p(V +), reg mtcars15:*, reg mtcars16:V, reg c9:L, reg mtcars18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r85:V, reg p24:p(V +), reg mtcars19:*, reg mtcars20:V, reg c10:L, reg mtcars22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r87:V, reg p25:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg c11:cls, reg r91:V, reg p26:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r93:V, reg r94:V, reg c12:cls, reg r95:V, reg p27:p(V +), reg r97:V |
    mkenv;
    r = clos inner2044426018;
    st ftable = r;
    ftable = ldf ftable;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      Titanic = ld Titanic;
      Titanic1 = force? Titanic;
      checkMissing(Titanic1);
      return Titanic1;
    };
    p1 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r3 = dyn ftable[, `row.vars`](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    ftable1 = ldf ftable;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      Titanic2 = ld Titanic;
      Titanic3 = force? Titanic2;
      checkMissing(Titanic3);
      return Titanic3;
    };
    p3 = prom<V +>{
      return <int 1, 2>;
    };
    r6 = dyn ftable1[, `row.vars`, `col.vars`](p2, p3, "Survived");
    check L3() else D3();
  D3():
    deopt 16 [r6];
  L3():
    ftable2 = ldf ftable;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p4 = prom<V +>{
      Titanic4 = ld Titanic;
      Titanic5 = force? Titanic4;
      checkMissing(Titanic5);
      return Titanic5;
    };
    p5 = prom<V +>{
      return <int 2, 1>;
    };
    r9 = dyn ftable2[, `row.vars`, `col.vars`](p4, p5, "Survived");
    check L5() else D5();
  D5():
    deopt 24 [r9];
  L5():
    integer = ldf integer;
    check L6() else D6();
  D6():
    deopt 26 [];
  L6():
    r10 = dyn integer();
    check L7() else D7();
  D7():
    deopt 27 [r10];
  L7():
    st `.` = r10;
    ftable3 = ldf ftable;
    check L8() else D8();
  D8():
    deopt 30 [];
  L8():
    p6 = prom<V +>{
      Titanic6 = ld Titanic;
      Titanic7 = force? Titanic6;
      checkMissing(Titanic7);
      return Titanic7;
    };
    p7 = prom<V +>{
      __ = ld `.`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r13 = dyn ftable3[, `col.vars`](p6, p7);
    check L9() else D9();
  D9():
    deopt 34 [r13];
  L9():
    st f04 = r13;
    ftable4 = ldf ftable;
    check L10() else D10();
  D10():
    deopt 37 [];
  L10():
    p8 = prom<V +>{
      Titanic8 = ld Titanic;
      Titanic9 = force? Titanic8;
      checkMissing(Titanic9);
      return Titanic9;
    };
    p9 = prom<V +>{
      __2 = ld `.`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r16 = dyn ftable4[, `col.vars`, `row.vars`](p8, 1.0, p9);
    check L11() else D11();
  D11():
    deopt 43 [r16];
  L11():
    st f10 = r16;
    ftable5 = ldf ftable;
    check L12() else D12();
  D12():
    deopt 46 [];
  L12():
    p10 = prom<V +>{
      Titanic10 = ld Titanic;
      Titanic11 = force? Titanic10;
      checkMissing(Titanic11);
      return Titanic11;
    };
    p11 = prom<V +>{
      __4 = ld `.`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r19 = dyn ftable5[, `col.vars`, `row.vars`](p10, p11, 1.0);
    check L13() else D13();
  D13():
    deopt 52 [r19];
  L13():
    st f01 = r19;
    ftable6 = ldf ftable;
    check L14() else D14();
  D14():
    deopt 55 [];
  L14():
    p12 = prom<V +>{
      Titanic12 = ld Titanic;
      Titanic13 = force? Titanic12;
      checkMissing(Titanic13);
      return Titanic13;
    };
    p13 = prom<V +>{
      __6 = ld `.`;
      __7 = force? __6;
      checkMissing(__7);
      return __7;
    };
    p14 = prom<V +>{
      __8 = ld `.`;
      __9 = force? __8;
      checkMissing(__9);
      return __9;
    };
    r23 = dyn ftable6[, `col.vars`, `row.vars`](p12, p13, p14);
    check L15() else D15();
  D15():
    deopt 61 [r23];
  L15():
    st f00 = r23;
    stopifnot = ldf stopifnot;
    check L16() else D16();
  D16():
    deopt 64 [];
  L16():
    p15 = prom<V +>{
      sym = ldf dim;
      base = ldf dim in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r25):
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L2():
      f04 = ld f04;
      f5 = force? f04;
      checkMissing(f5);
      dim = ldf dim in base;
      r26 = dyn dim(f5);
      goto L0(r26);
    L3():
      r24 = dyn base(<sym f04>);
      goto L0(r24);
    L1(r30, r31):
      r33 = `==`(r30, r31);
      return r33;
    L4():
      c = ldf c in base;
      r32 = dyn c(32.0, 1.0);
      goto L1(r25, r32);
    L5():
      r29 = dyn base1(32.0, 1.0);
      goto L1(r25, r29);
    };
    p16 = prom<V +>{
      sym2 = ldf dim;
      base2 = ldf dim in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r36):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L2():
      f10 = ld f10;
      f11 = force? f10;
      checkMissing(f11);
      dim1 = ldf dim in base;
      r37 = dyn dim1(f11);
      goto L0(r37);
    L3():
      r35 = dyn base2(<sym f10>);
      goto L0(r35);
    L1(r41, r42):
      r44 = `==`(r41, r42);
      return r44;
    L4():
      c1 = ldf c in base;
      r43 = dyn c1(1.0, 4.0);
      goto L1(r36, r43);
    L5():
      r40 = dyn base3(1.0, 4.0);
      goto L1(r36, r40);
    };
    p17 = prom<V +>{
      sym4 = ldf dim;
      base4 = ldf dim in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r47):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L2():
      f12 = ld f01;
      f13 = force? f12;
      checkMissing(f13);
      dim2 = ldf dim in base;
      r48 = dyn dim2(f13);
      goto L0(r48);
    L3():
      r46 = dyn base4(<sym f01>);
      goto L0(r46);
    L1(r52, r53):
      r55 = `==`(r52, r53);
      return r55;
    L4():
      c2 = ldf c in base;
      r54 = dyn c2(4.0, 1.0);
      goto L1(r47, r54);
    L5():
      r51 = dyn base5(4.0, 1.0);
      goto L1(r47, r51);
    };
    p18 = prom<V +>{
      sym6 = ldf dim;
      base6 = ldf dim in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r58):
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L2():
      f14 = ld f00;
      f15 = force? f14;
      checkMissing(f15);
      dim3 = ldf dim in base;
      r59 = dyn dim3(f15);
      goto L0(r59);
    L3():
      r57 = dyn base6(<sym f00>);
      goto L0(r57);
    L1(r63, r64):
      r66 = `==`(r63, r64);
      return r66;
    L4():
      c3 = ldf c in base;
      r65 = dyn c3(1.0, 1.0);
      goto L1(r58, r65);
    L5():
      r62 = dyn base7(1.0, 1.0);
      goto L1(r58, r62);
    };
    r68 = dyn stopifnot(p15, p16, p17, p18);
    check L17() else D17();
  D17():
    deopt 69 [r68];
  L17():
    ftable7 = ldf ftable;
    check L18() else D18();
  D18():
    deopt 71 [];
  L18():
    p19 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      c4 = `is.object`(mtcars1);
      if c4 then L2() else L3(mtcars1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", mtcars1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(mtcars3):
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L1(mtcars6, r70):
      __10 = ldf `[` in base;
      r72 = dyn __10(mtcars6, r70);
      goto L0(r72);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c5 = ldf c in base;
      r71 = dyn c5("cyl", "vs", "am", "gear");
      goto L1(mtcars3, r71);
    L6():
      r69 = dyn base8("cyl", "vs", "am", "gear");
      goto L1(mtcars3, r69);
    };
    r74 = dyn ftable7(p19);
    check L19() else D19();
  D19():
    deopt 73 [r74];
  L19():
    st x = r74;
    x = ld x;
    check L20() else D20();
  D20():
    deopt 75 [x];
  L20():
    x1 = force? x;
    checkMissing(x1);
    ftable8 = ldf ftable;
    check L21() else D21();
  D21():
    deopt 78 [];
  L21():
    p20 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p21 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      c6 = ldf c in base;
      r78 = dyn c6(2.0, 4.0);
      goto L0(r78);
    L2():
      r76 = dyn base9(2.0, 4.0);
      goto L0(r76);
    };
    r80 = dyn ftable8[, `row.vars`](p20, p21);
    check L22() else D22();
  D22():
    deopt 82 [r80];
  L22():
    ftable9 = ldf ftable;
    check L23() else D23();
  D23():
    deopt 84 [];
  L23():
    p22 = prom<V +>{
      mtcars7 = ld mtcars;
      mtcars8 = force? mtcars7;
      checkMissing(mtcars8);
      c7 = `is.object`(mtcars8);
      if c7 then L1() else L2(mtcars8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", mtcars8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(mtcars10):
      r81 = `$`(mtcars10, <sym cyl>);
      goto L0(r81);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p23 = prom<V +>{
      mtcars11 = ld mtcars;
      mtcars12 = force? mtcars11;
      checkMissing(mtcars12);
      c8 = `is.object`(mtcars12);
      if c8 then L1() else L2(mtcars12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", mtcars12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(mtcars14):
      r83 = `$`(mtcars14, <sym vs>);
      goto L0(r83);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p24 = prom<V +>{
      mtcars15 = ld mtcars;
      mtcars16 = force? mtcars15;
      checkMissing(mtcars16);
      c9 = `is.object`(mtcars16);
      if c9 then L1() else L2(mtcars16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", mtcars16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(mtcars18):
      r85 = `$`(mtcars18, <sym am>);
      goto L0(r85);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p25 = prom<V +>{
      mtcars19 = ld mtcars;
      mtcars20 = force? mtcars19;
      checkMissing(mtcars20);
      c10 = `is.object`(mtcars20);
      if c10 then L1() else L2(mtcars20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", mtcars20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(mtcars22):
      r87 = `$`(mtcars22, <sym gear>);
      goto L0(r87);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p26 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r90):
      return r90;
    L1():
      c11 = ldf c in base;
      r91 = dyn c11(2.0, 4.0);
      goto L0(r91);
    L2():
      r89 = dyn base10(2.0, 4.0);
      goto L0(r89);
    };
    p27 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      c12 = ldf c in base;
      r95 = dyn c12("Cylinders", "V/S", "Transmission", "Gears");
      goto L0(r95);
    L2():
      r93 = dyn base11("Cylinders", "V/S", "Transmission", "Gears");
      goto L0(r93);
    };
    r97 = dyn ftable9[, , , , `row.vars`, dnn](p22, p23, p24, p25, p26, p27);
    check L24() else D24();
  D24():
    deopt 93 [r97];
  L24():
    popenv;
    return r97;
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
    r2 = dyn UseMethod("ftable");
    goto L0(r2);
  L2():
    r = dyn base("ftable");
    goto L0(r);
  }
}