fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1049911894;
    st `confint.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1049911894(object, parm, level, trace, test, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg trace:*, reg test:*, reg ddd:dots) -+> V { var object:*, var parm:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg test1:*, reg test2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg coef:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg r9:V, reg names:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg pnames:*, reg pnames1:V, reg r16:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg parm1:*, reg parm2:V, reg c2:L, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg parm3:*, reg parm4:V, reg pnames2:*, reg pnames3:V, reg match:cls, reg r22:V, reg message:cls, reg r23:V, reg __:cls, reg r24:V, reg r25:cls, reg r26:V, reg profile:cls, reg object3:*, reg object4:V, reg p3:p(V +), reg parm5:*, reg parm6:V, reg p4:p(V +), reg level1:*, reg level2:V, reg r29:V, reg r30:V, reg p5:p(V +), reg trace1:*, reg trace2:V, reg p6:p(V +), reg test3:*, reg test4:V, reg p7:p(V +), reg r34:V, reg confint:cls, reg object5:*, reg object6:V, reg p8:p(V +), reg parm7:*, reg parm8:V, reg p9:p(V +), reg level3:*, reg level4:V, reg p10:p(V +), reg trace3:*, reg trace4:V, reg p11:p(V +), reg test5:*, reg test6:V, reg p12:p(V +), reg ddd1:dots?, reg r40:V |
    mkenv;
    st object = object;
    st parm = parm;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(0.95) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L1(FALSE) else L1(trace);
  L1(trace_orDefault):
    st trace = trace_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L2() else L3(test);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("LRT", "Rao");
      goto L0(r2);
    L2():
      r = dyn base("LRT", "Rao");
      goto L0(r);
    };
    goto L3(p);
  L3(test_orDefault):
    st test = test_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p1 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r5 = dyn match_arg(p1);
    check L13() else D1();
  D1():
    deopt 3 [r5];
  L13():
    st test = r5;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L4(r7):
    st pnames = r7;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L14():
    coef = ldf coef;
    check L16() else D2();
  L15():
    r6 = dyn base1(<lang coef(object)>);
    goto L4(r6);
  D2():
    deopt 8 [];
  L5(r12):
    c1 = `as.logical`(r12);
    if c1 then L21() else L6();
  L16():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r9 = dyn coef(p2);
    check L17() else D3();
  L19():
    missing = ldf missing in base;
    r13 = dyn missing(<sym parm>);
    goto L5(r13);
  L20():
    r11 = dyn base2(<sym parm>);
    goto L5(r11);
  D3():
    deopt 10 [r9];
  L6():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L8():
    message = ldf message;
    check L36() else D10();
  L17():
    names = ldf names in base;
    r10 = dyn names(r9);
    check L18() else D4();
  L21():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  D4():
    deopt 12 [r10];
  D10():
    deopt 40 [];
  L7(r15):
    st parm = r15;
    goto L8();
  L9(r19):
    c3 = `as.logical`(r19);
    if c3 then L29() else L10();
  L18():
    goto L4(r10);
  L22():
    pnames = ld pnames;
    check L24() else D5();
  L23():
    r14 = dyn base3(<sym pnames>);
    goto L7(r14);
  L26():
    parm1 = ld parm;
    check L28() else D6();
  L27():
    r18 = dyn base4(<sym parm>);
    goto L9(r18);
  L36():
    r23 = dyn message("Waiting for profiling to be done...");
    check L37() else D11();
  D5():
    deopt 18 [pnames];
  D6():
    deopt 23 [parm1];
  D11():
    deopt 42 [r23];
  L10():
    goto L8();
  L24():
    pnames1 = force? pnames;
    checkMissing(pnames1);
    r16 = seq_along(pnames1);
    goto L7(r16);
  L28():
    parm2 = force? parm1;
    checkMissing(parm2);
    c2 = `is.character`(parm2);
    goto L9(c2);
  L29():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L37():
    __ = ldf `::`;
    check L38() else D12();
  D12():
    deopt 44 [];
  L11(r21):
    st parm = r21;
    goto L8();
  L30():
    parm3 = ld parm;
    check L32() else D7();
  L31():
    r20 = dyn base5[, , nomatch](<sym parm>, <sym pnames>, 0);
    goto L11(r20);
  L38():
    r24 = dyn __("utils", "flush.console");
    check L39() else D13();
  D7():
    deopt 28 [parm3];
  D13():
    deopt 47 [r24];
  L32():
    parm4 = force? parm3;
    checkMissing(parm4);
    pnames2 = ld pnames;
    check L33() else D8();
  L39():
    checkFun.0(r24);
    r25 = r24 as cls;
    r26 = dyn r25();
    check L40() else D14();
  D8():
    deopt 30 [pnames2];
  D14():
    deopt 49 [r26];
  L33():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    match = ldf match in base;
    r22 = dyn match(parm4, pnames3, 0, NULL);
    check L34() else D9();
  L40():
    profile = ldf profile;
    check L41() else D15();
  D9():
    deopt 35 [r22];
  D15():
    deopt 51 [];
  L34():
    goto L11(r22);
  L41():
    p3 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p4 = prom<V +>{
      parm5 = ld parm;
      parm6 = force? parm5;
      checkMissing(parm6);
      return parm6;
    };
    p5 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      r29 = `-`(1.0, level2);
      r30 = `/`(r29, 4.0);
      return r30;
    };
    p6 = prom<V +>{
      trace1 = ld trace;
      trace2 = force? trace1;
      checkMissing(trace2);
      return trace2;
    };
    p7 = prom<V +>{
      test3 = ld test;
      test4 = force? test3;
      checkMissing(test4);
      return test4;
    };
    r34 = dyn profile[, which, alpha, trace, test](p3, p4, p5, p6, p7);
    check L42() else D16();
  D16():
    deopt 61 [r34];
  L42():
    st object = r34;
    confint = ldf confint;
    check L43() else D17();
  D17():
    deopt 64 [];
  L43():
    p8 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p9 = prom<V +>{
      parm7 = ld parm;
      parm8 = force? parm7;
      checkMissing(parm8);
      return parm8;
    };
    p10 = prom<V +>{
      level3 = ld level;
      level4 = force? level3;
      checkMissing(level4);
      return level4;
    };
    p11 = prom<V +>{
      trace3 = ld trace;
      trace4 = force? trace3;
      checkMissing(trace4);
      return trace4;
    };
    p12 = prom<V +>{
      test5 = ld test;
      test6 = force? test5;
      checkMissing(test6);
      return test6;
    };
    ddd1 = ld `...`;
    r40 = dyn confint[, parm, level, trace, test, `...`](p8, p9, p10, p11, p12, ddd1);
    check L44() else D18();
  D18():
    deopt 75 [r40];
  L44():
    popenv;
    return r40;
  }
}