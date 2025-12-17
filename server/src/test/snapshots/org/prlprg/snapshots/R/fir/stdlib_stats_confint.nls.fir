fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1979052304;
    st `confint.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1979052304(object, parm, level, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg ddd:dots) -+> V { var object:*, var parm:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg coef:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r3:V, reg names:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg pnames:*, reg pnames1:V, reg r10:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg parm1:*, reg parm2:V, reg is_numeric:cls, reg r14:V, reg c1:L, reg pnames2:*, reg pnames3:V, reg c2:L, reg pnames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parm3:*, reg parm4:V, reg __:cls, reg r15:V, reg message:cls, reg r16:V, reg __1:cls, reg r17:V, reg r18:cls, reg r19:V, reg profile:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg parm5:*, reg parm6:V, reg p2:p(V +), reg level1:*, reg level2:V, reg r22:V, reg r23:V, reg p3:p(V +), reg r25:V, reg confint:cls, reg object5:*, reg object6:V, reg p4:p(V +), reg parm7:*, reg parm8:V, reg p5:p(V +), reg level3:*, reg level4:V, reg p6:p(V +), reg ddd1:dots?, reg r29:V |
    mkenv;
    st object = object;
    st parm = parm;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(0.95) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    st pnames = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L10():
    coef = ldf coef;
    check L12() else D0();
  L11():
    r = dyn base(<lang coef(object)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L2(r6):
    c = `as.logical`(r6);
    if c then L17() else L3();
  L12():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r3 = dyn coef(p);
    check L13() else D1();
  L15():
    missing = ldf missing in base;
    r7 = dyn missing(<sym parm>);
    goto L2(r7);
  L16():
    r5 = dyn base1(<sym parm>);
    goto L2(r5);
  D1():
    deopt 5 [r3];
  L3():
    goto L5();
  L5():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L13():
    names = ldf names in base;
    r4 = dyn names(r3);
    check L14() else D2();
  L17():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D2():
    deopt 7 [r4];
  L4(r9):
    st parm = r9;
    goto L5();
  L6(r13):
    c1 = `as.logical`(r13);
    if c1 then L26() else L7();
  L14():
    goto L1(r4);
  L18():
    pnames = ld pnames;
    check L20() else D3();
  L19():
    r8 = dyn base2(<sym pnames>);
    goto L4(r8);
  L22():
    parm1 = ld parm;
    check L24() else D4();
  L23():
    r12 = dyn base3(<sym parm>);
    goto L6(r12);
  D3():
    deopt 13 [pnames];
  D4():
    deopt 21 [parm1];
  L7():
    goto L9();
  L9():
    message = ldf message;
    check L33() else D8();
  L20():
    pnames1 = force? pnames;
    checkMissing(pnames1);
    r10 = seq_along(pnames1);
    goto L4(r10);
  L24():
    parm2 = force? parm1;
    checkMissing(parm2);
    is_numeric = ldf `is.numeric` in base;
    r14 = dyn is_numeric(parm2);
    check L25() else D5();
  L26():
    pnames2 = ld pnames;
    check L27() else D6();
  D5():
    deopt 24 [r14];
  D6():
    deopt 25 [pnames2];
  D8():
    deopt 34 [];
  L25():
    goto L6(r14);
  L27():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    c2 = `is.object`(pnames3);
    if c2 then L28() else L29(pnames3);
  L33():
    r16 = dyn message("Waiting for profiling to be done...");
    check L34() else D9();
  D9():
    deopt 36 [r16];
  L8(dx1):
    st parm = dx1;
    goto L9();
  L28():
    dr = tryDispatchBuiltin.1("[", pnames3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(pnames5):
    parm3 = ld parm;
    check L31() else D7();
  L34():
    __1 = ldf `::`;
    check L35() else D10();
  D7():
    deopt 27 [pnames5, parm3];
  D10():
    deopt 38 [];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L31():
    parm4 = force? parm3;
    __ = ldf `[` in base;
    r15 = dyn __(pnames5, parm4);
    goto L8(r15);
  L35():
    r17 = dyn __1("utils", "flush.console");
    check L36() else D11();
  D11():
    deopt 41 [r17];
  L36():
    checkFun.0(r17);
    r18 = r17 as cls;
    r19 = dyn r18();
    check L37() else D12();
  D12():
    deopt 43 [r19];
  L37():
    profile = ldf profile;
    check L38() else D13();
  D13():
    deopt 45 [];
  L38():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p2 = prom<V +>{
      parm5 = ld parm;
      parm6 = force? parm5;
      checkMissing(parm6);
      return parm6;
    };
    p3 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      r22 = `-`(1.0, level2);
      r23 = `/`(r22, 4.0);
      return r23;
    };
    r25 = dyn profile[, which, alphamax](p1, p2, p3);
    check L39() else D14();
  D14():
    deopt 51 [r25];
  L39():
    st object = r25;
    confint = ldf confint;
    check L40() else D15();
  D15():
    deopt 54 [];
  L40():
    p4 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p5 = prom<V +>{
      parm7 = ld parm;
      parm8 = force? parm7;
      checkMissing(parm8);
      return parm8;
    };
    p6 = prom<V +>{
      level3 = ld level;
      level4 = force? level3;
      checkMissing(level4);
      return level4;
    };
    ddd1 = ld `...`;
    r29 = dyn confint[, parm, level, `...`](p4, p5, p6, ddd1);
    check L41() else D16();
  D16():
    deopt 61 [r29];
  L41():
    popenv;
    return r29;
  }
}