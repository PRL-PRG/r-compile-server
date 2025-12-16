fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg r2:cls, reg testit:cls, reg r3:V, reg r4:cls, reg testit1:cls, reg r5:V, reg suppressWarnings:cls, reg warning:cls, reg r6:V, reg p:p(V +), reg r8:V, reg __:cls, reg r9:V, reg r10:cls, reg r11:V, reg r12:V, reg r13:V, reg eigenval:*, reg eigenval1:V, reg r14:V, reg c:L, reg warning1:cls, reg r15:V, reg options1:cls, reg oldopt:*, reg oldopt1:V, reg p1:p(V +), reg r18:V |
    mkenv;
    r = clos `inner-1077214158`;
    st warning = r;
    options = ldf options;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn options[warn](1.0);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    st oldopt = r1;
    r2 = clos inner560854305;
    st testit = r2;
    testit = ldf testit;
    check L4() else D2();
  D2():
    deopt 13 [];
  L4():
    r3 = dyn testit();
    check L5() else D3();
  D3():
    deopt 14 [r3];
  L5():
    r4 = clos inner560854305;
    st testit = r4;
    testit1 = ldf testit;
    check L6() else D4();
  D4():
    deopt 19 [];
  L6():
    r5 = dyn testit1();
    check L7() else D5();
  D5():
    deopt 20 [r5];
  L7():
    suppressWarnings = ldf suppressWarnings;
    check L8() else D6();
  D6():
    deopt 22 [];
  L8():
    p = prom<V +>{
      warning = ldf warning;
      r6 = dyn warning("testit");
      return r6;
    };
    r8 = dyn suppressWarnings(p);
    check L9() else D7();
  D7():
    deopt 24 [r8];
  L9():
    __ = ldf `::`;
    check L10() else D8();
  D8():
    deopt 27 [10.0];
  L10():
    r9 = dyn __("stats", "rnorm");
    check L11() else D9();
  D9():
    deopt 30 [10.0, r9];
  L11():
    checkFun.0(r9);
    r10 = r9 as cls;
    r11 = dyn r10[, mean](1.0, 6.0);
    check L12() else D10();
  D10():
    deopt 35 [10.0, r11];
  L12():
    r12 = `-`(<missing>, r11);
    r13 = `^`(10.0, r12);
    st eigenval = r13;
    eigenval = ld eigenval;
    check L13() else D11();
  D11():
    deopt 39 [eigenval];
  L13():
    eigenval1 = force? eigenval;
    checkMissing(eigenval1);
    r14 = `<`(eigenval1, 1.0E-7);
    c = `as.logical`(r14);
    if c then L14() else L0();
  L0():
    goto L1();
  L1():
    options1 = ldf options;
    check L18() else D14();
  L14():
    warning1 = ldf warning;
    check L15() else D12();
  D12():
    deopt 44 [];
  D14():
    deopt 50 [];
  L15():
    r15 = dyn warning1("system near singular");
    check L16() else D13();
  L18():
    p1 = prom<V +>{
      oldopt = ld oldopt;
      oldopt1 = force? oldopt;
      checkMissing(oldopt1);
      return oldopt1;
    };
    r18 = dyn options1(p1);
    check L19() else D15();
  D13():
    deopt 46 [r15];
  D15():
    deopt 52 [r18];
  L16():
    goto L1();
  L19():
    popenv;
    return r18;
  }
}
fun `inner-1077214158`(`...`, `call.`, `immediate.`, `noBreaks.`, domain) {
  (reg ddd:dots, reg call_:*, reg immediate_:*, reg noBreaks_:*, reg domain:*) -+> V { var `...`:dots?, var `call.`:*, reg call__isMissing:L, reg call__orDefault:*, var `immediate.`:*, reg immediate__isMissing:L, reg immediate__orDefault:*, var `noBreaks.`:*, reg noBreaks__isMissing:L, reg noBreaks__orDefault:*, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg __1:*, reg __2:V, reg inherits:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg __3:*, reg __4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg nargs:cls, reg r9:V, reg r10:V, reg c10:L, reg cat:cls, reg gettext:cls, reg r11:V, reg p:p(V +), reg stderr:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg conditionMessage:cls, reg cond:*, reg cond1:V, reg p2:p(V +), reg r18:V, reg conditionCall:cls, reg cond2:*, reg cond3:V, reg p3:p(V +), reg r20:V, reg withRestarts:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg cond4:*, reg cond5:V, reg message:*, reg message1:V, reg call:*, reg call1:V, reg _signalCondition:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg message2:*, reg message3:V, reg call2:*, reg call3:V, reg _dfltWarn:cls, reg r26:V, reg p4:p(V +), reg r28:cls, reg p5:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg message4:*, reg message5:V, reg invisible:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg call_1:*, reg call_2:V, reg immediate_1:*, reg immediate_2:V, reg noBreaks_1:*, reg noBreaks_2:V, reg _makeMessage:cls, reg ddd1:dots?, reg domain1:*, reg domain2:V, reg p6:p(V +), reg r37:V, reg warning:cls, reg r38:V |
    mkenv;
    st `...` = ddd;
    call__isMissing = missing.0(call_);
    if call__isMissing then L0(TRUE) else L0(call_);
  L0(call__orDefault):
    st `call.` = call__orDefault;
    immediate__isMissing = missing.0(immediate_);
    if immediate__isMissing then L1(FALSE) else L1(immediate_);
  L1(immediate__orDefault):
    st `immediate.` = immediate__orDefault;
    noBreaks__isMissing = missing.0(noBreaks_);
    if noBreaks__isMissing then L2(FALSE) else L2(noBreaks_);
  L2(noBreaks__orDefault):
    st `noBreaks.` = noBreaks__orDefault;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L3(NULL) else L3(domain);
  L3(domain_orDefault):
    st domain = domain_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L4(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L16() else L5(c);
  L13():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L15() else D0();
  L14():
    r = dyn base();
    goto L4(r);
  D0():
    deopt 3 [r2];
  L5(c2):
    c9 = `as.logical`(c2);
    if c9 then L22() else L7();
  L15():
    goto L4(r2);
  L16():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L6(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L5(c7);
  L7():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L17():
    __1 = ld `..1`;
    check L19() else D1();
  L18():
    r4 = dyn base1(<sym ..1>, "condition");
    goto L6(c, r4);
  L22():
    __3 = ld `..1`;
    check L23() else D3();
  D1():
    deopt 8 [c, __1];
  D3():
    deopt 15 [__3];
  L12(r35):
    popenv;
    return r35;
  L19():
    __2 = force? __1;
    checkMissing(__2);
    inherits = ldf inherits in base;
    r6 = dyn inherits(__2, "condition", FALSE);
    check L20() else D2();
  L23():
    __4 = force? __3;
    checkMissing(__4);
    st cond = __4;
    sym2 = ldf nargs;
    base2 = ldf nargs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L42():
    call_1 = ld `call.`;
    check L44() else D15();
  L43():
    r34 = dyn base6(<lang warning(call., immediate., noBreaks., .makeMessage(..., domain=domain))>);
    goto L12(r34);
  D2():
    deopt 13 [c, r6];
  D15():
    deopt 59 [call_1];
  L8(r8):
    r10 = `>`(r8, 1);
    c10 = `as.logical`(r10);
    if c10 then L27() else L9();
  L20():
    goto L6(c, r6);
  L24():
    nargs = ldf nargs in base;
    r9 = dyn nargs();
    check L26() else D4();
  L25():
    r7 = dyn base2();
    goto L8(r7);
  L44():
    call_2 = force? call_1;
    checkMissing(call_2);
    immediate_1 = ld `immediate.`;
    check L45() else D16();
  D4():
    deopt 21 [r9];
  D16():
    deopt 61 [immediate_1];
  L9():
    goto L10();
  L10():
    conditionMessage = ldf conditionMessage;
    check L31() else D7();
  L26():
    goto L8(r9);
  L27():
    cat = ldf cat;
    check L28() else D5();
  L45():
    immediate_2 = force? immediate_1;
    checkMissing(immediate_2);
    noBreaks_1 = ld `noBreaks.`;
    check L46() else D17();
  D5():
    deopt 25 [];
  D7():
    deopt 36 [];
  D17():
    deopt 63 [noBreaks_1];
  L28():
    p = prom<V +>{
      gettext = ldf gettext;
      r11 = dyn gettext("additional arguments ignored in warning()");
      return r11;
    };
    p1 = prom<V +>{
      stderr = ldf stderr;
      r13 = dyn stderr();
      return r13;
    };
    r15 = dyn cat[, , sep, file](p, "\n", "", p1);
    check L29() else D6();
  L31():
    p2 = prom<V +>{
      cond = ld cond;
      cond1 = force? cond;
      checkMissing(cond1);
      return cond1;
    };
    r18 = dyn conditionMessage(p2);
    check L32() else D8();
  L46():
    noBreaks_2 = force? noBreaks_1;
    checkMissing(noBreaks_2);
    _makeMessage = ldf `.makeMessage`;
    check L47() else D18();
  D6():
    deopt 32 [r15];
  D8():
    deopt 38 [r18];
  D18():
    deopt 66 [];
  L29():
    goto L10();
  L32():
    st message = r18;
    conditionCall = ldf conditionCall;
    check L33() else D9();
  L47():
    ddd1 = ld `...`;
    p6 = prom<V +>{
      domain1 = ld domain;
      domain2 = force? domain1;
      checkMissing(domain2);
      return domain2;
    };
    r37 = dyn _makeMessage[`...`, domain](ddd1, p6);
    check L48() else D19();
  D9():
    deopt 41 [];
  D19():
    deopt 70 [r37];
  L33():
    p3 = prom<V +>{
      cond2 = ld cond;
      cond3 = force? cond2;
      checkMissing(cond3);
      return cond3;
    };
    r20 = dyn conditionCall(p3);
    check L34() else D10();
  L48():
    warning = ldf warning in base;
    r38 = dyn warning(call_2, immediate_2, noBreaks_2, r37);
    check L49() else D20();
  D10():
    deopt 43 [r20];
  D20():
    deopt 72 [r38];
  L34():
    st call = r20;
    withRestarts = ldf withRestarts;
    check L35() else D11();
  L49():
    goto L12(r38);
  D11():
    deopt 46 [];
  L35():
    p4 = prom<V +>{
      sym3 = ldf `.Internal`;
      base3 = ldf `.Internal` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0():
      sym4 = ldf `.Internal`;
      base4 = ldf `.Internal` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L2():
      cond4 = ld cond;
      cond5 = force? cond4;
      checkMissing(cond5);
      message = ld message;
      message1 = force? message;
      checkMissing(message1);
      call = ld call;
      call1 = force? call;
      checkMissing(call1);
      _signalCondition = ldf `.signalCondition` in base;
      r23 = dyn _signalCondition(cond5, message1, call1);
      goto L0();
    L3():
      r21 = dyn base3(<lang .signalCondition(cond, message, call)>);
      goto L0();
    L1(r25):
      return r25;
    L4():
      message2 = ld message;
      message3 = force? message2;
      checkMissing(message3);
      call2 = ld call;
      call3 = force? call2;
      checkMissing(call3);
      _dfltWarn = ldf `.dfltWarn` in base;
      r26 = dyn _dfltWarn(message3, call3);
      goto L1(r26);
    L5():
      r24 = dyn base4(<lang .dfltWarn(message, call)>);
      goto L1(r24);
    };
    p5 = prom<V +>{
      r28 = clos inner560854305;
      return r28;
    };
    r30 = dyn withRestarts[, muffleWarning](p4, p5);
    check L36() else D12();
  D12():
    deopt 50 [r30];
  L36():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L11(r32):
    popenv;
    return r32;
  L37():
    message4 = ld message;
    check L39() else D13();
  L38():
    r31 = dyn base5(<sym message>);
    goto L11(r31);
  D13():
    deopt 53 [message4];
  L39():
    message5 = force? message4;
    checkMissing(message5);
    invisible = ldf invisible in base;
    r33 = dyn invisible(message5);
    check L40() else D14();
  D14():
    deopt 56 [r33];
  L40():
    goto L11(r33);
  }
}
fun inner560854305() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}