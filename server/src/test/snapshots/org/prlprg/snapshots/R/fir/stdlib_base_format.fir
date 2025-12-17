fun main() {
  () -+> V { reg r:cls, reg format:cls, reg p:p(V +), reg r2:V, reg format1:cls, reg p1:p(V +), reg r4:V, reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg format2:cls, reg zz:*, reg zz1:V, reg p3:p(V +), reg r11:V, reg format3:cls, reg zz2:*, reg zz3:V, reg p4:p(V +), reg r13:V, reg format4:cls, reg r14:V, reg format5:cls, reg r15:V, reg format6:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg format7:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg format8:cls, reg p7:p(V +), reg r27:V, reg format9:cls, reg p8:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg c3:cls, reg r32:V, reg t:cls, reg sapply:cls, reg setNames:cls, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:cls, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg letters:*, reg letters1:V, reg c4:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg c5:cls, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg c6:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg quote:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg expression:cls, reg r55:V, reg list:cls, reg r56:V, reg format10:cls, reg z:*, reg z1:V, reg p13:p(V +), reg r58:V, reg format11:cls, reg z2:*, reg z3:V, reg p14:p(V +), reg r60:V, reg f1:*, reg f2:V, reg f3:*, reg f4:V, reg __1:cls, reg r62:V, reg r63:cls, reg r64:V, reg format12:cls, reg cc:*, reg cc1:V, reg p15:p(V +), reg r66:V |
    mkenv;
    r = clos inner2044426018;
    st format = r;
    format = ldf format;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r2 = dyn format(p);
    check L8() else D1();
  D1():
    deopt 6 [r2];
  L8():
    format1 = ldf format;
    check L9() else D2();
  D2():
    deopt 8 [];
  L9():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r4 = dyn format1[, trim](p1, TRUE);
    check L10() else D3();
  D3():
    deopt 12 [r4];
  L10():
    data_frame = ldf `data.frame`;
    check L11() else D4();
  D4():
    deopt 14 [];
  L11():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("aaaaa", "b");
      goto L0(r7);
    L2():
      r5 = dyn base("aaaaa", "b");
      goto L0(r5);
    };
    r9 = dyn data_frame[`(row names)`, `check.names`](p2, FALSE);
    check L12() else D5();
  D5():
    deopt 19 [r9];
  L12():
    st zz = r9;
    format2 = ldf format;
    check L13() else D6();
  D6():
    deopt 22 [];
  L13():
    p3 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    r11 = dyn format2(p3);
    check L14() else D7();
  D7():
    deopt 24 [r11];
  L14():
    format3 = ldf format;
    check L15() else D8();
  D8():
    deopt 26 [];
  L15():
    p4 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r13 = dyn format3[, justify](p4, "left");
    check L16() else D9();
  D9():
    deopt 30 [r13];
  L16():
    format4 = ldf format;
    check L17() else D10();
  D10():
    deopt 32 [];
  L17():
    r14 = dyn format4(13.7);
    check L18() else D11();
  D11():
    deopt 34 [r14];
  L18():
    format5 = ldf format;
    check L19() else D12();
  D12():
    deopt 36 [];
  L19():
    r15 = dyn format5[, nsmall](13.7, 3.0);
    check L20() else D13();
  D13():
    deopt 40 [r15];
  L20():
    format6 = ldf format;
    check L21() else D14();
  D14():
    deopt 42 [];
  L21():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c1 = ldf c in base;
      r18 = dyn c1(6.0, 13.1);
      goto L0(r18);
    L2():
      r16 = dyn base1(6.0, 13.1);
      goto L0(r16);
    };
    r20 = dyn format6[, digits](p5, 2.0);
    check L22() else D15();
  D15():
    deopt 46 [r20];
  L22():
    format7 = ldf format;
    check L23() else D16();
  D16():
    deopt 48 [];
  L23():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c2 = ldf c in base;
      r23 = dyn c2(6.0, 13.1);
      goto L0(r23);
    L2():
      r21 = dyn base2(6.0, 13.1);
      goto L0(r21);
    };
    r25 = dyn format7[, digits, nsmall](p6, 2.0, 1.0);
    check L24() else D17();
  D17():
    deopt 54 [r25];
  L24():
    format8 = ldf format;
    check L25() else D18();
  D18():
    deopt 56 [];
  L25():
    p7 = prom<V +>{
      return 2.147483647E9;
    };
    r27 = dyn format8(p7);
    check L26() else D19();
  D19():
    deopt 58 [r27];
  L26():
    format9 = ldf format;
    check L27() else D20();
  D20():
    deopt 60 [];
  L27():
    p8 = prom<V +>{
      return 2.147483647E9;
    };
    r29 = dyn format9[, scientific](p8, TRUE);
    check L28() else D21();
  D21():
    deopt 64 [r29];
  L28():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L0(r31):
    st x = r31;
    t = ldf t;
    check L32() else D23();
  L29():
    c3 = ldf c in base;
    r32 = dyn c3(100000.0, 1000.0, 10.0, 0.1, 0.001, 0.123);
    check L31() else D22();
  L30():
    r30 = dyn base3(100000.0, 1000.0, 10.0, 0.1, 0.001, 0.123);
    goto L0(r30);
  D22():
    deopt 74 [r32];
  D23():
    deopt 77 [];
  L31():
    goto L0(r32);
  L32():
    p12 = prom<V +>{
      sapply = ldf sapply;
      p10 = prom<V +>{
        setNames = ldf setNames;
        p9 = prom<V +>{
          return <int -4, -3, -2, -1, 0, 1>;
        };
        r34 = dyn setNames(<missing>, p9);
        return r34;
      };
      p11 = prom<V +>{
        r36 = clos inner880221525;
        return r36;
      };
      r38 = dyn sapply(p10, p11);
      return r38;
    };
    r40 = dyn t(p12);
    check L33() else D24();
  D24():
    deopt 79 [r40];
  L33():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L1(r42):
    st z = r42;
    format10 = ldf format;
    check L51() else D29();
  L34():
    letters = ld letters;
    check L36() else D25();
  L35():
    r41 = dyn base4[a, b, c, d, q, e](<lang `[`(letters, `:`(1.0, 3.0))>, <lang `^`(`(`(`+`(`-`(pi), 0.0i)), `(`(`/`(`(`(`:`(`-`(2.0), 2.0)), 2.0)))>, <lang c(1.0, 10.0, 100.0, 1000.0)>, <lang c("a", "longer", "character", "string")>, <lang quote(`+`(a, b))>, <lang expression(`+`(1.0, x))>);
    goto L1(r41);
  D25():
    deopt 82 [letters];
  D29():
    deopt 121 [];
  L36():
    letters1 = force? letters;
    checkMissing(letters1);
    c4 = `is.object`(letters1);
    if c4 then L37() else L38(letters1);
  L51():
    p13 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r58 = dyn format10[, digits](p13, 2.0);
    check L52() else D30();
  D30():
    deopt 125 [r58];
  L2(dx1):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L37():
    dr = tryDispatchBuiltin.1("[", letters1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(letters3):
    __ = ldf `[` in base;
    r43 = dyn __(letters3, <int 1, 2, 3>);
    goto L2(r43);
  L52():
    st f1 = r58;
    format11 = ldf format;
    check L53() else D31();
  D31():
    deopt 128 [];
  L3(r45):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L40():
    c5 = ldf c in base;
    r46 = dyn c5(1.0, 10.0, 100.0, 1000.0);
    check L42() else D26();
  L41():
    r44 = dyn base5(1.0, 10.0, 100.0, 1000.0);
    goto L3(r44);
  L53():
    p14 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r60 = dyn format11[, digits, justify, trim](p14, 2.0, "left", FALSE);
    check L54() else D32();
  D26():
    deopt 98 [r46];
  D32():
    deopt 136 [r60];
  L4(r48):
    sym7 = ldf quote;
    base7 = ldf quote in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L46() else L47();
  L42():
    goto L3(r46);
  L43():
    c6 = ldf c in base;
    r49 = dyn c6("a", "longer", "character", "string");
    check L45() else D27();
  L44():
    r47 = dyn base6("a", "longer", "character", "string");
    goto L4(r47);
  L54():
    st f2 = r60;
    f1 = ld f1;
    check L55() else D33();
  D27():
    deopt 107 [r49];
  D33():
    deopt 138 [f1];
  L5(r51):
    sym8 = ldf expression;
    base8 = ldf expression in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L48() else L49();
  L45():
    goto L4(r49);
  L46():
    quote = ldf quote in base;
    r52 = dyn quote(<lang `+`(a, b)>);
    goto L5(r52);
  L47():
    r50 = dyn base7(<lang `+`(a, b)>);
    goto L5(r50);
  L55():
    f2 = force? f1;
    checkMissing(f2);
    f3 = ld f2;
    check L56() else D34();
  D34():
    deopt 139 [f2, f3];
  L6(r54):
    list = ldf list in base;
    r56 = dyn list(dx1, <cplx -0.3183098861837907-3.8981718325193755E-17i, 3.4546648380201897E-17-0.5641895835477563i, 1.0+0.0i, 1.08531496757392E-16+1.7724538509055159i, -3.141592653589793+3.8473413874435795E-16i>, r45, r48, r51, r54);
    check L50() else D28();
  L48():
    expression = ldf expression in base;
    r55 = dyn expression(<lang `+`(1.0, x)>);
    goto L6(r55);
  L49():
    r53 = dyn base8(<lang `+`(1.0, x)>);
    goto L6(r53);
  L56():
    f4 = force? f3;
    checkMissing(f4);
    `==`(f2, f4);
    __1 = ldf `::`;
    check L57() else D35();
  D28():
    deopt 118 [r56];
  D35():
    deopt 143 [];
  L50():
    goto L1(r56);
  L57():
    r62 = dyn __1("methods", "getClassDef");
    check L58() else D36();
  D36():
    deopt 146 [r62];
  L58():
    checkFun.0(r62);
    r63 = r62 as cls;
    r64 = dyn r63("standardGeneric");
    check L59() else D37();
  D37():
    deopt 149 [r64];
  L59():
    st cc = r64;
    format12 = ldf format;
    check L60() else D38();
  D38():
    deopt 152 [];
  L60():
    p15 = prom<V +>{
      cc = ld cc;
      cc1 = force? cc;
      checkMissing(cc1);
      return cc1;
    };
    r66 = dyn format12(p15);
    check L61() else D39();
  D39():
    deopt 154 [r66];
  L61():
    popenv;
    return r66;
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
    r2 = dyn UseMethod("format");
    goto L0(r2);
  L2():
    r = dyn base("format");
    goto L0(r);
  }
}
fun inner880221525(sci) {
  (reg sci:*) -+> V { var sci:*, reg sapply:cls, reg x:*, reg x1:V, reg p:p(V +), reg format:*, reg format1:V, reg p1:p(V +), reg sci1:*, reg sci2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st sci = sci;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      format = ld format;
      format1 = force? format;
      checkMissing(format1);
      return format1;
    };
    p2 = prom<V +>{
      sci1 = ld sci;
      sci2 = force? sci1;
      checkMissing(sci2);
      return sci2;
    };
    r3 = dyn sapply[, , scientific](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}