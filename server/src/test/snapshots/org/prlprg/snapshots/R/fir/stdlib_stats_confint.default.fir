fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1979052304;
    st `confint.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1979052304(object, parm, level, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg ddd:dots) -+> V { var object:*, var parm:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg coef:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg cf:*, reg cf1:V, reg names:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c:L, reg pnames:*, reg pnames1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg parm1:*, reg parm2:V, reg is_numeric:cls, reg r10:V, reg c1:L, reg pnames3:*, reg pnames4:V, reg c2:L, reg pnames6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parm3:*, reg parm4:V, reg __:cls, reg r11:V, reg level1:*, reg level2:V, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg a:*, reg a1:V, reg a2:*, reg a3:V, reg r16:V, reg c3:cls, reg r17:V, reg _format_perc:cls, reg a4:*, reg a5:V, reg p1:p(V +), reg r19:V, reg qnorm:cls, reg a6:*, reg a7:V, reg p2:p(V +), reg r21:V, reg array:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg parm5:*, reg parm6:V, reg length:cls, reg r26:V, reg c4:cls, reg r27:V, reg p3:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg parm7:*, reg parm8:V, reg pct:*, reg pct1:V, reg list:cls, reg r31:V, reg p4:p(V +), reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg diag:cls, reg vcov:cls, reg object3:*, reg object4:V, reg p5:p(V +), reg r37:V, reg p6:p(V +), reg r39:V, reg r40:V, reg c5:L, reg r42:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg parm9:*, reg parm10:V, reg __1:cls, reg r43:V, reg cf2:*, reg cf3:V, reg c6:L, reg cf5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg parm11:*, reg parm12:V, reg __2:cls, reg r44:V, reg _o_:cls, reg ses:*, reg ses1:V, reg p7:p(V +), reg fac:*, reg fac1:V, reg p8:p(V +), reg r47:V, reg r48:V, reg l:*, reg c7:L, reg r50:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ___:cls, reg r53:V, reg ci:*, reg ci1:V |
    mkenv;
    st object = object;
    st parm = parm;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(0.95) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    coef = ldf coef;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn coef(p);
    check L14() else D1();
  D1():
    deopt 3 [r1];
  L14():
    st cf = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r3):
    st pnames = r3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    cf = ld cf;
    check L17() else D2();
  L16():
    r2 = dyn base(<sym cf>);
    goto L1(r2);
  D2():
    deopt 7 [cf];
  L2(r6):
    c = `as.logical`(r6);
    if c then L21() else L3();
  L17():
    cf1 = force? cf;
    checkMissing(cf1);
    names = ldf names in base;
    r4 = dyn names(cf1);
    check L18() else D3();
  L19():
    missing = ldf missing in base;
    r7 = dyn missing(<sym parm>);
    goto L2(r7);
  L20():
    r5 = dyn base1(<sym parm>);
    goto L2(r5);
  D3():
    deopt 10 [r4];
  L3():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L4():
    level1 = ld level;
    check L35() else D9();
  L18():
    goto L1(r4);
  L21():
    pnames = ld pnames;
    check L22() else D4();
  D4():
    deopt 15 [pnames];
  D9():
    deopt 33 [1.0, level1];
  L5(r9):
    c1 = `as.logical`(r9);
    if c1 then L28() else L6();
  L22():
    pnames1 = force? pnames;
    checkMissing(pnames1);
    st parm = pnames1;
    goto L4();
  L24():
    parm1 = ld parm;
    check L26() else D5();
  L25():
    r8 = dyn base2(<sym parm>);
    goto L5(r8);
  L35():
    level2 = force? level1;
    checkMissing(level2);
    r12 = `-`(1.0, level2);
    r13 = `/`(r12, 2.0);
    st a = r13;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  D5():
    deopt 20 [parm1];
  L6():
    goto L4();
  L8(r15):
    st a = r15;
    _format_perc = ldf `.format_perc`;
    check L41() else D13();
  L26():
    parm2 = force? parm1;
    checkMissing(parm2);
    is_numeric = ldf `is.numeric` in base;
    r10 = dyn is_numeric(parm2);
    check L27() else D6();
  L28():
    pnames3 = ld pnames;
    check L29() else D7();
  L36():
    a = ld a;
    check L38() else D10();
  L37():
    r14 = dyn base3(<sym a>, <lang `-`(1.0, a)>);
    goto L8(r14);
  D6():
    deopt 23 [r10];
  D7():
    deopt 24 [pnames3];
  D10():
    deopt 41 [a];
  D13():
    deopt 51 [];
  L27():
    goto L5(r10);
  L29():
    pnames4 = force? pnames3;
    checkMissing(pnames4);
    c2 = `is.object`(pnames4);
    if c2 then L30() else L31(pnames4);
  L38():
    a1 = force? a;
    checkMissing(a1);
    a2 = ld a;
    check L39() else D11();
  L41():
    p1 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    r19 = dyn _format_perc(p1, 3.0);
    check L42() else D14();
  D11():
    deopt 44 [1.0, a2];
  D14():
    deopt 54 [r19];
  L7(dx1):
    st parm = dx1;
    goto L4();
  L30():
    dr = tryDispatchBuiltin.1("[", pnames4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(pnames6):
    parm3 = ld parm;
    check L33() else D8();
  L39():
    a3 = force? a2;
    checkMissing(a3);
    r16 = `-`(1.0, a3);
    c3 = ldf c in base;
    r17 = dyn c3(a1, r16);
    check L40() else D12();
  L42():
    st pct = r19;
    qnorm = ldf qnorm;
    check L43() else D15();
  D8():
    deopt 26 [pnames6, parm3];
  D12():
    deopt 48 [r17];
  D15():
    deopt 57 [];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L33():
    parm4 = force? parm3;
    __ = ldf `[` in base;
    r11 = dyn __(pnames6, parm4);
    goto L7(r11);
  L40():
    goto L8(r17);
  L43():
    p2 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      return a7;
    };
    r21 = dyn qnorm(p2);
    check L44() else D16();
  D16():
    deopt 59 [r21];
  L44():
    st fac = r21;
    array = ldf array;
    check L45() else D17();
  D17():
    deopt 62 [];
  L45():
    p3 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r23):
      return r23;
    L2():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r22 = dyn base4(<lang length(parm)>, 2);
      goto L0(r22);
    L1(r25):
      c4 = ldf c in base;
      r27 = dyn c4(r25, 2);
      goto L0(r27);
    L4():
      parm5 = ld parm;
      parm6 = force? parm5;
      checkMissing(parm6);
      length = ldf length in base;
      r26 = dyn length(parm6);
      goto L1(r26);
    L5():
      r24 = dyn base5(<sym parm>);
      goto L1(r24);
    };
    p4 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      parm7 = ld parm;
      parm8 = force? parm7;
      checkMissing(parm8);
      pct = ld pct;
      pct1 = force? pct;
      checkMissing(pct1);
      list = ldf list in base;
      r31 = dyn list(parm8, pct1);
      goto L0(r31);
    L2():
      r29 = dyn base6(<sym parm>, <sym pct>);
      goto L0(r29);
    };
    r33 = dyn array[, dim, dimnames](NA_LGL, p3, p4);
    check L46() else D18();
  D18():
    deopt 68 [r33];
  L46():
    st ci = r33;
    sym7 = ldf sqrt;
    base7 = ldf sqrt in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L47() else L48();
  L9(r35):
    c5 = `is.object`(r35);
    if c5 then L51() else L52(r35);
  L47():
    diag = ldf diag;
    check L49() else D19();
  L48():
    r34 = dyn base7(<lang diag(vcov(object))>);
    goto L9(r34);
  D19():
    deopt 72 [];
  L10(dx3):
    st ses = dx3;
    cf2 = ld cf;
    check L55() else D22();
  L49():
    p6 = prom<V +>{
      vcov = ldf vcov;
      p5 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r37 = dyn vcov(p5);
      return r37;
    };
    r39 = dyn diag(p6);
    check L50() else D20();
  L51():
    dr2 = tryDispatchBuiltin.1("[", r35);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(r42):
    parm9 = ld parm;
    check L54() else D21();
  D20():
    deopt 74 [r39];
  D21():
    deopt 76 [r42, parm9];
  D22():
    deopt 80 [cf2];
  L50():
    r40 = sqrt(r39);
    goto L9(r40);
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L54():
    parm10 = force? parm9;
    __1 = ldf `[` in base;
    r43 = dyn __1(r42, parm10);
    goto L10(r43);
  L55():
    cf3 = force? cf2;
    checkMissing(cf3);
    c6 = `is.object`(cf3);
    if c6 then L56() else L57(cf3);
  L11(dx5):
    _o_ = ldf `%o%`;
    check L60() else D24();
  L56():
    dr4 = tryDispatchBuiltin.1("[", cf3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(dr4);
  L57(cf5):
    parm11 = ld parm;
    check L59() else D23();
  D23():
    deopt 82 [cf5, parm11];
  D24():
    deopt 85 [dx5];
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L59():
    parm12 = force? parm11;
    __2 = ldf `[` in base;
    r44 = dyn __2(cf5, parm12);
    goto L11(r44);
  L60():
    p7 = prom<V +>{
      ses = ld ses;
      ses1 = force? ses;
      checkMissing(ses1);
      return ses1;
    };
    p8 = prom<V +>{
      fac = ld fac;
      fac1 = force? fac;
      checkMissing(fac1);
      return fac1;
    };
    r47 = dyn _o_(p7, p8);
    check L61() else D25();
  D25():
    deopt 88 [dx5, r47];
  L61():
    r48 = `+`(dx5, r47);
    l = ld ci;
    c7 = `is.object`(l);
    if c7 then L62() else L63(r48);
  L12(dx7):
    st ci = dx7;
    ci = ld ci;
    check L65() else D26();
  L62():
    dr6 = tryDispatchBuiltin.0("[<-", l, r48);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(r48);
  L63(r50):
    ___ = ldf `[<-` in base;
    r53 = dyn ___(l, <missing>, r48);
    goto L12(r53);
  D26():
    deopt 95 [ci];
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L65():
    ci1 = force? ci;
    checkMissing(ci1);
    popenv;
    return ci1;
  }
}