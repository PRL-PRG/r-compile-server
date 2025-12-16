fun main() {
  () -+> V { reg r:cls, reg identical:cls, reg r1:V, reg identical1:cls, reg r2:V, reg identical2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg as_integer:cls, reg r5:V, reg p:p(V +), reg r7:V, reg all_equal:cls, reg x:*, reg x1:V, reg p1:p(V +), reg y:*, reg y1:V, reg p2:p(V +), reg r10:V, reg identical3:cls, reg E:*, reg E1:V, reg p3:p(V +), reg r12:V, reg isTRUE:cls, reg E2:*, reg E3:V, reg p4:p(V +), reg r14:V, reg identical4:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p5:p(V +), reg environment:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg identical5:cls, reg p7:p(V +), reg r20:V, reg identical6:cls, reg p8:p(V +), reg r22:V, reg identical7:cls, reg p9:p(V +), reg r24:V, reg identical8:cls, reg p10:p(V +), reg r26:V, reg r27:cls, reg f:*, reg f1:V, reg __:cls, reg r28:V, reg r29:cls, reg f2:*, reg f3:V, reg p11:p(V +), reg r31:V, reg g:*, reg g1:V, reg identical9:cls, reg f4:*, reg f5:V, reg p12:p(V +), reg g2:*, reg g3:V, reg p13:p(V +), reg r34:V, reg identical10:cls, reg f6:*, reg f7:V, reg p14:p(V +), reg g4:*, reg g5:V, reg p15:p(V +), reg r37:V, reg poisson:cls, reg r38:V, reg poisson1:cls, reg r39:V, reg identical11:cls, reg p16:*, reg p17:V, reg p18:p(V +), reg p19:*, reg p20:V, reg p21:p(V +), reg r42:V, reg identical12:cls, reg p22:*, reg p23:V, reg p24:p(V +), reg p25:*, reg p26:V, reg p27:p(V +), reg r45:V, reg options:cls, reg r46:V, reg r47:cls, reg r48:cls, reg identical13:cls, reg f8:*, reg f9:V, reg p28:p(V +), reg f10:*, reg f11:V, reg p29:p(V +), reg r51:V, reg identical14:cls, reg f12:*, reg f13:V, reg p30:p(V +), reg f14:*, reg f15:V, reg p31:p(V +), reg r54:V, reg options1:cls, reg op:*, reg op1:V, reg p32:p(V +), reg r56:V, reg structure:cls, reg cbind:cls, reg p33:p(V +), reg r58:V, reg p34:p(V +), reg r60:V, reg rev:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r61:V, reg r62:V, reg m:*, reg m1:V, reg attributes:cls, reg r63:V, reg p35:p(V +), reg r65:V, reg l:*, reg attributes__:cls, reg r66:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r67:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r69:V, reg r70:V, reg m2:*, reg m3:V, reg attributes1:cls, reg r71:V, reg names:cls, reg r72:V, reg stopifnot:cls, reg identical15:cls, reg p36:p(V +), reg r74:V, reg p37:p(V +), reg identical16:cls, reg p38:p(V +), reg r77:V, reg r78:V, reg p39:p(V +), reg identical17:cls, reg p40:p(V +), reg r81:V, reg p41:p(V +), reg identical18:cls, reg p42:p(V +), reg r84:V, reg r85:V, reg p43:p(V +), reg identical19:cls, reg m4:*, reg m5:V, reg p44:p(V +), reg m6:*, reg m7:V, reg p45:p(V +), reg r89:V, reg p46:p(V +), reg identical20:cls, reg m8:*, reg m9:V, reg p47:p(V +), reg m10:*, reg m11:V, reg p48:p(V +), reg r93:V, reg r94:V, reg p49:p(V +), reg r96:V |
    mkenv;
    r = clos inner1169235015;
    st identical = r;
    identical = ldf identical;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn identical(1.0, NULL);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    identical1 = ldf identical;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    r2 = dyn identical1(1.0, 1.0);
    check L5() else D3();
  D3():
    deopt 12 [r2];
  L5():
    identical2 = ldf identical;
    check L6() else D4();
  D4():
    deopt 14 [];
  L6():
    p = prom<V +>{
      sym = ldf `as.integer`;
      base = ldf `as.integer` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      as_integer = ldf `as.integer` in base;
      r5 = dyn as_integer(1.0);
      goto L0(r5);
    L2():
      r3 = dyn base(1.0);
      goto L0(r3);
    };
    r7 = dyn identical2(1.0, p);
    check L7() else D5();
  D5():
    deopt 17 [r7];
  L7():
    st x = 1.0;
    st y = 0.99999999999;
    all_equal = ldf `all.equal`;
    check L8() else D6();
  D6():
    deopt 25 [];
  L8():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r10 = dyn all_equal(p1, p2);
    check L9() else D7();
  D7():
    deopt 28 [r10];
  L9():
    st E = r10;
    identical3 = ldf identical;
    check L10() else D8();
  D8():
    deopt 31 [];
  L10():
    p3 = prom<V +>{
      E = ld E;
      E1 = force? E;
      checkMissing(E1);
      return E1;
    };
    r12 = dyn identical3(TRUE, p3);
    check L11() else D9();
  D9():
    deopt 34 [r12];
  L11():
    isTRUE = ldf isTRUE;
    check L12() else D10();
  D10():
    deopt 36 [];
  L12():
    p4 = prom<V +>{
      E2 = ld E;
      E3 = force? E2;
      checkMissing(E3);
      return E3;
    };
    r14 = dyn isTRUE(p4);
    check L13() else D11();
  D11():
    deopt 38 [r14];
  L13():
    identical4 = ldf identical;
    check L14() else D12();
  D12():
    deopt 40 [];
  L14():
    p5 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    p6 = prom<V +>{
      environment = ldf environment;
      r16 = dyn environment();
      return r16;
    };
    r18 = dyn identical4(p5, p6);
    check L15() else D13();
  D13():
    deopt 43 [r18];
  L15():
    identical5 = ldf identical;
    check L16() else D14();
  D14():
    deopt 45 [];
  L16():
    p7 = prom<V +>{
      return -0.0;
    };
    r20 = dyn identical5(0.0, p7);
    check L17() else D15();
  D15():
    deopt 48 [r20];
  L17():
    identical6 = ldf identical;
    check L18() else D16();
  D16():
    deopt 50 [];
  L18():
    p8 = prom<V +>{
      return -0.0;
    };
    r22 = dyn identical6[, , `num.eq`](0.0, p8, FALSE);
    check L19() else D17();
  D17():
    deopt 55 [r22];
  L19():
    identical7 = ldf identical;
    check L20() else D18();
  D18():
    deopt 57 [];
  L20():
    p9 = prom<V +>{
      return NA_REAL;
    };
    r24 = dyn identical7(NA_REAL, p9);
    check L21() else D19();
  D19():
    deopt 60 [r24];
  L21():
    identical8 = ldf identical;
    check L22() else D20();
  D20():
    deopt 62 [];
  L22():
    p10 = prom<V +>{
      return NA_REAL;
    };
    r26 = dyn identical8[, , `single.NA`](NA_REAL, p10, FALSE);
    check L23() else D21();
  D21():
    deopt 67 [r26];
  L23():
    r27 = clos inner354062069;
    st f = r27;
    f = ld f;
    check L24() else D22();
  D22():
    deopt 71 [f];
  L24():
    f1 = force? f;
    checkMissing(f1);
    __ = ldf `::`;
    check L25() else D23();
  D23():
    deopt 74 [];
  L25():
    r28 = dyn __("compiler", "cmpfun");
    check L26() else D24();
  D24():
    deopt 77 [r28];
  L26():
    checkFun.0(r28);
    r29 = r28 as cls;
    p11 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r31 = dyn r29(p11);
    check L27() else D25();
  D25():
    deopt 80 [r31];
  L27():
    st g = r31;
    g = ld g;
    check L28() else D26();
  D26():
    deopt 82 [g];
  L28():
    g1 = force? g;
    checkMissing(g1);
    identical9 = ldf identical;
    check L29() else D27();
  D27():
    deopt 85 [];
  L29():
    p12 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p13 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r34 = dyn identical9(p12, p13);
    check L30() else D28();
  D28():
    deopt 88 [r34];
  L30():
    identical10 = ldf identical;
    check L31() else D29();
  D29():
    deopt 90 [];
  L31():
    p14 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    p15 = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    r37 = dyn identical10[, , `ignore.bytecode`](p14, p15, FALSE);
    check L32() else D30();
  D30():
    deopt 95 [r37];
  L32():
    poisson = ldf poisson;
    check L33() else D31();
  D31():
    deopt 97 [];
  L33():
    r38 = dyn poisson();
    check L34() else D32();
  D32():
    deopt 98 [r38];
  L34():
    st p1 = r38;
    poisson1 = ldf poisson;
    check L35() else D33();
  D33():
    deopt 101 [];
  L35():
    r39 = dyn poisson1();
    check L36() else D34();
  D34():
    deopt 102 [r39];
  L36():
    st p2 = r39;
    identical11 = ldf identical;
    check L37() else D35();
  D35():
    deopt 105 [];
  L37():
    p18 = prom<V +>{
      p16 = ld p1;
      p17 = force? p16;
      checkMissing(p17);
      return p17;
    };
    p21 = prom<V +>{
      p19 = ld p2;
      p20 = force? p19;
      checkMissing(p20);
      return p20;
    };
    r42 = dyn identical11(p18, p21);
    check L38() else D36();
  D36():
    deopt 108 [r42];
  L38():
    identical12 = ldf identical;
    check L39() else D37();
  D37():
    deopt 110 [];
  L39():
    p24 = prom<V +>{
      p22 = ld p1;
      p23 = force? p22;
      checkMissing(p23);
      return p23;
    };
    p27 = prom<V +>{
      p25 = ld p2;
      p26 = force? p25;
      checkMissing(p26);
      return p26;
    };
    r45 = dyn identical12[, , `ignore.environment`](p24, p27, TRUE);
    check L40() else D38();
  D38():
    deopt 115 [r45];
  L40():
    options = ldf options;
    check L41() else D39();
  D39():
    deopt 117 [];
  L41():
    r46 = dyn options[`keep.source`](TRUE);
    check L42() else D40();
  D40():
    deopt 120 [r46];
  L42():
    st op = r46;
    r47 = clos inner560854305;
    st f1 = r47;
    r48 = clos inner560854305;
    st f2 = r48;
    identical13 = ldf identical;
    check L43() else D41();
  D41():
    deopt 129 [];
  L43():
    p28 = prom<V +>{
      f8 = ld f1;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p29 = prom<V +>{
      f10 = ld f2;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r51 = dyn identical13(p28, p29);
    check L44() else D42();
  D42():
    deopt 132 [r51];
  L44():
    identical14 = ldf identical;
    check L45() else D43();
  D43():
    deopt 134 [];
  L45():
    p30 = prom<V +>{
      f12 = ld f1;
      f13 = force? f12;
      checkMissing(f13);
      return f13;
    };
    p31 = prom<V +>{
      f14 = ld f2;
      f15 = force? f14;
      checkMissing(f15);
      return f15;
    };
    r54 = dyn identical14[, , `ignore.srcref`](p30, p31, FALSE);
    check L46() else D44();
  D44():
    deopt 139 [r54];
  L46():
    options1 = ldf options;
    check L47() else D45();
  D45():
    deopt 141 [];
  L47():
    p32 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r56 = dyn options1(p32);
    check L48() else D46();
  D46():
    deopt 143 [r56];
  L48():
    structure = ldf structure;
    check L49() else D47();
  D47():
    deopt 145 [];
  L49():
    p34 = prom<V +>{
      cbind = ldf cbind;
      p33 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r58 = dyn cbind[I, a](1.0, p33);
      return r58;
    };
    r60 = dyn structure[, foo, class](p34, "bar", "matrix");
    check L50() else D48();
  D48():
    deopt 151 [r60];
  L50():
    st m = r60;
    st m0 = r60;
    rev = ldf rev;
    check L51() else D49();
  D49():
    deopt 155 [];
  L51():
    p35 = prom<V +>{
      sym1 = ldf attributes;
      base1 = ldf attributes in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      attributes = ldf attributes in base;
      r63 = dyn attributes(m1);
      goto L0(r63);
    L2():
      r61 = dyn base1(<sym m>);
      goto L0(r61);
    };
    r65 = dyn rev(p35);
    check L52() else D50();
  D50():
    deopt 157 [r65];
  L52():
    l = ld m0;
    attributes__ = ldf `attributes<-`;
    check L53() else D51();
  D51():
    deopt 159 [r65, l, r65];
  L53():
    r66 = dyn attributes__(l, NULL, r65);
    check L54() else D52();
  D52():
    deopt 161 [r65, r66];
  L54():
    st m0 = r66;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L0():
    stopifnot = ldf stopifnot;
    check L62() else D56();
  L55():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L56():
    r67 = dyn base2(<lang attributes(m0)>);
    goto L0();
  D56():
    deopt 174 [];
  L1(r70):
    names = ldf names in base;
    r72 = dyn names(r70);
    check L61() else D55();
  L57():
    m2 = ld m0;
    check L59() else D53();
  L58():
    r69 = dyn base3(<sym m0>);
    goto L1(r69);
  L62():
    p37 = prom<V +>{
      identical15 = ldf identical;
      p36 = prom<V +>{
        return -0.0;
      };
      r74 = dyn identical15(0.0, p36);
      return r74;
    };
    p39 = prom<V +>{
      identical16 = ldf identical;
      p38 = prom<V +>{
        return -0.0;
      };
      r77 = dyn identical16[, , `num.eq`](0.0, p38, FALSE);
      r78 = `!`(r77);
      return r78;
    };
    p41 = prom<V +>{
      identical17 = ldf identical;
      p40 = prom<V +>{
        return NA_REAL;
      };
      r81 = dyn identical17(NA_REAL, p40);
      return r81;
    };
    p43 = prom<V +>{
      identical18 = ldf identical;
      p42 = prom<V +>{
        return NA_REAL;
      };
      r84 = dyn identical18[, , `single.NA`](NA_REAL, p42, FALSE);
      r85 = `!`(r84);
      return r85;
    };
    p46 = prom<V +>{
      identical19 = ldf identical;
      p44 = prom<V +>{
        m4 = ld m;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      p45 = prom<V +>{
        m6 = ld m0;
        m7 = force? m6;
        checkMissing(m7);
        return m7;
      };
      r89 = dyn identical19(p44, p45);
      return r89;
    };
    p49 = prom<V +>{
      identical20 = ldf identical;
      p47 = prom<V +>{
        m8 = ld m;
        m9 = force? m8;
        checkMissing(m9);
        return m9;
      };
      p48 = prom<V +>{
        m10 = ld m0;
        m11 = force? m10;
        checkMissing(m11);
        return m11;
      };
      r93 = dyn identical20[, , `attrib.as.set`](p47, p48, FALSE);
      r94 = `!`(r93);
      return r94;
    };
    r96 = dyn stopifnot(p37, p39, p41, p43, p46, p49);
    check L63() else D57();
  D53():
    deopt 167 [m2];
  D55():
    deopt 172 [r72];
  D57():
    deopt 181 [r96];
  L59():
    m3 = force? m2;
    checkMissing(m3);
    attributes1 = ldf attributes in base;
    r71 = dyn attributes1(m3);
    check L60() else D54();
  L61():
    goto L0();
  L63():
    popenv;
    return r96;
  D54():
    deopt 170 [r71];
  L60():
    goto L1(r71);
  }
}
fun inner1169235015(x, y, `num.eq`, `single.NA`, `attrib.as.set`, `ignore.bytecode`, `ignore.environment`, `ignore.srcref`, `extptr.as.ref`) {
  (reg x:*, reg y:*, reg num_eq:*, reg single_NA:*, reg attrib_as_set:*, reg ignore_bytecode:*, reg ignore_environment:*, reg ignore_srcref:*, reg extptr_as_ref:*) -+> V { var x:*, var y:*, var `num.eq`:*, reg num_eq_isMissing:L, reg num_eq_orDefault:*, var `single.NA`:*, reg single_NA_isMissing:L, reg single_NA_orDefault:*, var `attrib.as.set`:*, reg attrib_as_set_isMissing:L, reg attrib_as_set_orDefault:*, var `ignore.bytecode`:*, reg ignore_bytecode_isMissing:L, reg ignore_bytecode_orDefault:*, var `ignore.environment`:*, reg ignore_environment_isMissing:L, reg ignore_environment_orDefault:*, var `ignore.srcref`:*, reg ignore_srcref_isMissing:L, reg ignore_srcref_orDefault:*, var `extptr.as.ref`:*, reg extptr_as_ref_isMissing:L, reg extptr_as_ref_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg num_eq1:*, reg num_eq2:V, reg single_NA1:*, reg single_NA2:V, reg attrib_as_set1:*, reg attrib_as_set2:V, reg ignore_bytecode1:*, reg ignore_bytecode2:V, reg ignore_environment1:*, reg ignore_environment2:V, reg ignore_srcref1:*, reg ignore_srcref2:V, reg extptr_as_ref1:*, reg extptr_as_ref2:V, reg identical:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    num_eq_isMissing = missing.0(num_eq);
    if num_eq_isMissing then L0(TRUE) else L0(num_eq);
  L0(num_eq_orDefault):
    st `num.eq` = num_eq_orDefault;
    single_NA_isMissing = missing.0(single_NA);
    if single_NA_isMissing then L1(TRUE) else L1(single_NA);
  L1(single_NA_orDefault):
    st `single.NA` = single_NA_orDefault;
    attrib_as_set_isMissing = missing.0(attrib_as_set);
    if attrib_as_set_isMissing then L2(TRUE) else L2(attrib_as_set);
  L2(attrib_as_set_orDefault):
    st `attrib.as.set` = attrib_as_set_orDefault;
    ignore_bytecode_isMissing = missing.0(ignore_bytecode);
    if ignore_bytecode_isMissing then L3(TRUE) else L3(ignore_bytecode);
  L3(ignore_bytecode_orDefault):
    st `ignore.bytecode` = ignore_bytecode_orDefault;
    ignore_environment_isMissing = missing.0(ignore_environment);
    if ignore_environment_isMissing then L4(FALSE) else L4(ignore_environment);
  L4(ignore_environment_orDefault):
    st `ignore.environment` = ignore_environment_orDefault;
    ignore_srcref_isMissing = missing.0(ignore_srcref);
    if ignore_srcref_isMissing then L5(TRUE) else L5(ignore_srcref);
  L5(ignore_srcref_orDefault):
    st `ignore.srcref` = ignore_srcref_orDefault;
    extptr_as_ref_isMissing = missing.0(extptr_as_ref);
    if extptr_as_ref_isMissing then L6(FALSE) else L6(extptr_as_ref);
  L6(extptr_as_ref_orDefault):
    st `extptr.as.ref` = extptr_as_ref_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L7(r1):
    popenv;
    return r1;
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<lang identical(x, y, num.eq, single.NA, attrib.as.set, ignore.bytecode, ignore.environment, ignore.srcref, extptr.as.ref)>);
    goto L7(r);
  D0():
    deopt 2 [x1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L11() else D1();
  D1():
    deopt 4 [y1];
  L11():
    y2 = force? y1;
    checkMissing(y2);
    num_eq1 = ld `num.eq`;
    check L12() else D2();
  D2():
    deopt 6 [num_eq1];
  L12():
    num_eq2 = force? num_eq1;
    checkMissing(num_eq2);
    single_NA1 = ld `single.NA`;
    check L13() else D3();
  D3():
    deopt 8 [single_NA1];
  L13():
    single_NA2 = force? single_NA1;
    checkMissing(single_NA2);
    attrib_as_set1 = ld `attrib.as.set`;
    check L14() else D4();
  D4():
    deopt 10 [attrib_as_set1];
  L14():
    attrib_as_set2 = force? attrib_as_set1;
    checkMissing(attrib_as_set2);
    ignore_bytecode1 = ld `ignore.bytecode`;
    check L15() else D5();
  D5():
    deopt 12 [ignore_bytecode1];
  L15():
    ignore_bytecode2 = force? ignore_bytecode1;
    checkMissing(ignore_bytecode2);
    ignore_environment1 = ld `ignore.environment`;
    check L16() else D6();
  D6():
    deopt 14 [ignore_environment1];
  L16():
    ignore_environment2 = force? ignore_environment1;
    checkMissing(ignore_environment2);
    ignore_srcref1 = ld `ignore.srcref`;
    check L17() else D7();
  D7():
    deopt 16 [ignore_srcref1];
  L17():
    ignore_srcref2 = force? ignore_srcref1;
    checkMissing(ignore_srcref2);
    extptr_as_ref1 = ld `extptr.as.ref`;
    check L18() else D8();
  D8():
    deopt 18 [extptr_as_ref1];
  L18():
    extptr_as_ref2 = force? extptr_as_ref1;
    checkMissing(extptr_as_ref2);
    identical = ldf identical in base;
    r2 = dyn identical(x2, y2, num_eq2, single_NA2, attrib_as_set2, ignore_bytecode2, ignore_environment2, ignore_srcref2, extptr_as_ref2);
    check L19() else D9();
  D9():
    deopt 21 [r2];
  L19():
    goto L7(r2);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}
fun inner560854305() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}