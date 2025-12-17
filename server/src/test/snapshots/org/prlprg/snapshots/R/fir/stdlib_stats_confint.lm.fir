fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1979052304;
    st `confint.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1979052304(object, parm, level, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg ddd:dots) -+> V { var object:*, var parm:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg coef:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg diag:cls, reg vcov:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg ses:*, reg ses1:V, reg names:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg cf:*, reg cf1:V, reg is_matrix:cls, reg r14:V, reg c:L, reg setNames:cls, reg as_vector:cls, reg cf2:*, reg cf3:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg pnames:*, reg pnames1:V, reg p5:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg missing:cls, reg r23:V, reg c1:L, reg pnames2:*, reg pnames3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg parm1:*, reg parm2:V, reg is_numeric:cls, reg r26:V, reg c2:L, reg pnames5:*, reg pnames6:V, reg c3:L, reg pnames8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parm3:*, reg parm4:V, reg __:cls, reg r27:V, reg level1:*, reg level2:V, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg a:*, reg a1:V, reg a2:*, reg a3:V, reg r32:V, reg c4:cls, reg r33:V, reg qt:cls, reg a4:*, reg a5:V, reg p6:p(V +), reg object5:*, reg object6:V, reg c5:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r35:V, reg p7:p(V +), reg r37:V, reg _format_perc:cls, reg a6:*, reg a7:V, reg p8:p(V +), reg r39:V, reg array:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg parm5:*, reg parm6:V, reg length:cls, reg r44:V, reg c6:cls, reg r45:V, reg p9:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg parm7:*, reg parm8:V, reg pct:*, reg pct1:V, reg list:cls, reg r49:V, reg p10:p(V +), reg r51:V, reg cf4:*, reg cf5:V, reg c7:L, reg cf7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg parm9:*, reg parm10:V, reg __1:cls, reg r52:V, reg _o_:cls, reg ses2:*, reg ses3:V, reg c8:L, reg ses5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg parm11:*, reg parm12:V, reg __2:cls, reg r53:V, reg p11:p(V +), reg fac:*, reg fac1:V, reg p12:p(V +), reg r56:V, reg r57:V, reg l:*, reg c9:L, reg r59:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ___:cls, reg r62:V, reg ci:*, reg ci1:V |
    mkenv;
    st object = object;
    st parm = parm;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(0.95) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    coef = ldf coef;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn coef(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    st cf = r1;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r3):
    st ses = r3;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    diag = ldf diag;
    check L19() else D2();
  L18():
    r2 = dyn base(<lang diag(vcov(object))>);
    goto L1(r2);
  D2():
    deopt 7 [];
  L2(r10):
    st pnames = r10;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L19():
    p2 = prom<V +>{
      vcov = ldf vcov;
      p1 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r5 = dyn vcov(p1);
      return r5;
    };
    r7 = dyn diag(p2);
    check L20() else D3();
  L21():
    ses = ld ses;
    check L23() else D4();
  L22():
    r9 = dyn base1(<sym ses>);
    goto L2(r9);
  D3():
    deopt 9 [r7];
  D4():
    deopt 14 [ses];
  L3(r13):
    c = `as.logical`(r13);
    if c then L29() else L4();
  L20():
    r8 = sqrt(r7);
    goto L1(r8);
  L23():
    ses1 = force? ses;
    checkMissing(ses1);
    names = ldf names in base;
    r11 = dyn names(ses1);
    check L24() else D5();
  L25():
    cf = ld cf;
    check L27() else D6();
  L26():
    r12 = dyn base2(<sym cf>);
    goto L3(r12);
  D5():
    deopt 17 [r11];
  D6():
    deopt 21 [cf];
  L4():
    goto L5();
  L5():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L24():
    goto L2(r11);
  L27():
    cf1 = force? cf;
    checkMissing(cf1);
    is_matrix = ldf `is.matrix` in base;
    r14 = dyn is_matrix(cf1);
    check L28() else D7();
  L29():
    setNames = ldf setNames;
    check L30() else D8();
  D7():
    deopt 24 [r14];
  D8():
    deopt 26 [];
  L6(r22):
    c1 = `as.logical`(r22);
    if c1 then L35() else L7();
  L28():
    goto L3(r14);
  L30():
    p4 = prom<V +>{
      as_vector = ldf `as.vector`;
      p3 = prom<V +>{
        cf2 = ld cf;
        cf3 = force? cf2;
        checkMissing(cf3);
        return cf3;
      };
      r16 = dyn as_vector(p3);
      return r16;
    };
    p5 = prom<V +>{
      pnames = ld pnames;
      pnames1 = force? pnames;
      checkMissing(pnames1);
      return pnames1;
    };
    r19 = dyn setNames(p4, p5);
    check L31() else D9();
  L33():
    missing = ldf missing in base;
    r23 = dyn missing(<sym parm>);
    goto L6(r23);
  L34():
    r21 = dyn base3(<sym parm>);
    goto L6(r21);
  D9():
    deopt 29 [r19];
  L7():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L8():
    level1 = ld level;
    check L49() else D15();
  L31():
    st cf = r19;
    goto L5();
  L35():
    pnames2 = ld pnames;
    check L36() else D10();
  D10():
    deopt 36 [pnames2];
  D15():
    deopt 54 [1.0, level1];
  L9(r25):
    c2 = `as.logical`(r25);
    if c2 then L42() else L10();
  L36():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    st parm = pnames3;
    goto L8();
  L38():
    parm1 = ld parm;
    check L40() else D11();
  L39():
    r24 = dyn base4(<sym parm>);
    goto L9(r24);
  L49():
    level2 = force? level1;
    checkMissing(level2);
    r28 = `-`(1.0, level2);
    r29 = `/`(r28, 2.0);
    st a = r29;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  D11():
    deopt 41 [parm1];
  L10():
    goto L8();
  L12(r31):
    st a = r31;
    qt = ldf qt;
    check L55() else D19();
  L40():
    parm2 = force? parm1;
    checkMissing(parm2);
    is_numeric = ldf `is.numeric` in base;
    r26 = dyn is_numeric(parm2);
    check L41() else D12();
  L42():
    pnames5 = ld pnames;
    check L43() else D13();
  L50():
    a = ld a;
    check L52() else D16();
  L51():
    r30 = dyn base5(<sym a>, <lang `-`(1.0, a)>);
    goto L12(r30);
  D12():
    deopt 44 [r26];
  D13():
    deopt 45 [pnames5];
  D16():
    deopt 62 [a];
  D19():
    deopt 72 [];
  L41():
    goto L9(r26);
  L43():
    pnames6 = force? pnames5;
    checkMissing(pnames6);
    c3 = `is.object`(pnames6);
    if c3 then L44() else L45(pnames6);
  L52():
    a1 = force? a;
    checkMissing(a1);
    a2 = ld a;
    check L53() else D17();
  L55():
    p6 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    p7 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c5 = `is.object`(object6);
      if c5 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r35 = `$`(object8, <sym df.residual>);
      goto L0(r35);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r37 = dyn qt(p6, p7);
    check L56() else D20();
  D17():
    deopt 65 [1.0, a2];
  D20():
    deopt 75 [r37];
  L11(dx1):
    st parm = dx1;
    goto L8();
  L44():
    dr = tryDispatchBuiltin.1("[", pnames6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(pnames8):
    parm3 = ld parm;
    check L47() else D14();
  L53():
    a3 = force? a2;
    checkMissing(a3);
    r32 = `-`(1.0, a3);
    c4 = ldf c in base;
    r33 = dyn c4(a1, r32);
    check L54() else D18();
  L56():
    st fac = r37;
    _format_perc = ldf `.format_perc`;
    check L57() else D21();
  D14():
    deopt 47 [pnames8, parm3];
  D18():
    deopt 69 [r33];
  D21():
    deopt 78 [];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L47():
    parm4 = force? parm3;
    __ = ldf `[` in base;
    r27 = dyn __(pnames8, parm4);
    goto L11(r27);
  L54():
    goto L12(r33);
  L57():
    p8 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      return a7;
    };
    r39 = dyn _format_perc(p8, 3.0);
    check L58() else D22();
  D22():
    deopt 81 [r39];
  L58():
    st pct = r39;
    array = ldf array;
    check L59() else D23();
  D23():
    deopt 84 [];
  L59():
    p9 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r41):
      return r41;
    L2():
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r40 = dyn base6(<lang length(parm)>, 2);
      goto L0(r40);
    L1(r43):
      c6 = ldf c in base;
      r45 = dyn c6(r43, 2);
      goto L0(r45);
    L4():
      parm5 = ld parm;
      parm6 = force? parm5;
      checkMissing(parm6);
      length = ldf length in base;
      r44 = dyn length(parm6);
      goto L1(r44);
    L5():
      r42 = dyn base7(<sym parm>);
      goto L1(r42);
    };
    p10 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      parm7 = ld parm;
      parm8 = force? parm7;
      checkMissing(parm8);
      pct = ld pct;
      pct1 = force? pct;
      checkMissing(pct1);
      list = ldf list in base;
      r49 = dyn list(parm8, pct1);
      goto L0(r49);
    L2():
      r47 = dyn base8(<sym parm>, <sym pct>);
      goto L0(r47);
    };
    r51 = dyn array[, dim, dimnames](NA_REAL, p9, p10);
    check L60() else D24();
  D24():
    deopt 90 [r51];
  L60():
    st ci = r51;
    cf4 = ld cf;
    check L61() else D25();
  D25():
    deopt 92 [cf4];
  L61():
    cf5 = force? cf4;
    checkMissing(cf5);
    c7 = `is.object`(cf5);
    if c7 then L62() else L63(cf5);
  L13(dx5):
    _o_ = ldf `%o%`;
    check L66() else D27();
  L62():
    dr4 = tryDispatchBuiltin.1("[", cf5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(dr4);
  L63(cf7):
    parm9 = ld parm;
    check L65() else D26();
  D26():
    deopt 94 [cf7, parm9];
  D27():
    deopt 97 [dx5];
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L65():
    parm10 = force? parm9;
    __1 = ldf `[` in base;
    r52 = dyn __1(cf7, parm10);
    goto L13(r52);
  L66():
    p11 = prom<V +>{
      ses2 = ld ses;
      ses3 = force? ses2;
      checkMissing(ses3);
      c8 = `is.object`(ses3);
      if c8 then L1() else L2(ses3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", ses3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ses5):
      parm11 = ld parm;
      parm12 = force? parm11;
      __2 = ldf `[` in base;
      r53 = dyn __2(ses5, parm12);
      goto L0(r53);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p12 = prom<V +>{
      fac = ld fac;
      fac1 = force? fac;
      checkMissing(fac1);
      return fac1;
    };
    r56 = dyn _o_(p11, p12);
    check L67() else D28();
  D28():
    deopt 100 [dx5, r56];
  L67():
    r57 = `+`(dx5, r56);
    l = ld ci;
    c9 = `is.object`(l);
    if c9 then L68() else L69(r57);
  L14(dx9):
    st ci = dx9;
    ci = ld ci;
    check L71() else D29();
  L68():
    dr8 = tryDispatchBuiltin.0("[<-", l, r57);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(r57);
  L69(r59):
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l, <missing>, r57);
    goto L14(r62);
  D29():
    deopt 107 [ci];
  L70():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx8);
  L71():
    ci1 = force? ci;
    checkMissing(ci1);
    popenv;
    return ci1;
  }
}