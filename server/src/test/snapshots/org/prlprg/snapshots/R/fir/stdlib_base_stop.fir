fun main() {
  () -+> V { reg r:cls, reg try:cls, reg iter:*, reg iter1:V, reg r1:V, reg c:L, reg stop:cls, reg r2:V, reg p:p(V +), reg r4:V, reg r5:cls, reg try1:cls, reg tst1:cls, reg p1:p(V +), reg long:*, reg long1:V, reg p2:p(V +), reg calling:*, reg calling1:V, reg p3:p(V +), reg expression:*, reg expression1:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg r13:cls, reg try2:cls, reg tst2:cls, reg p6:p(V +), reg longcalling:*, reg longcalling1:V, reg p7:p(V +), reg expression2:*, reg expression3:V, reg p8:p(V +), reg but_not_seen_in_Error:*, reg but_not_seen_in_Error1:V, reg p9:p(V +), reg r18:V, reg p10:p(V +), reg r20:V |
    mkenv;
    r = clos inner318083183;
    st stop = r;
    st iter = 12.0;
    try = ldf try;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      iter = ld iter;
      iter1 = force? iter;
      checkMissing(iter1);
      r1 = `>`(iter1, 10.0);
      c = `as.logical`(r1);
      if c then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      stop = ldf stop;
      r2 = dyn stop("too many iterations");
      return r2;
    };
    r4 = dyn try(p);
    check L1() else D1();
  D1():
    deopt 9 [r4];
  L1():
    r5 = clos inner1246119658;
    st tst1 = r5;
    try1 = ldf try;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    p5 = prom<V +>{
      tst1 = ldf tst1;
      p1 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p2 = prom<V +>{
        long = ld long;
        long1 = force? long;
        checkMissing(long1);
        return long1;
      };
      p3 = prom<V +>{
        calling = ld calling;
        calling1 = force? calling;
        checkMissing(calling1);
        return calling1;
      };
      p4 = prom<V +>{
        expression = ld expression;
        expression1 = force? expression;
        checkMissing(expression1);
        return expression1;
      };
      r10 = dyn tst1(p1, p2, p3, p4);
      return r10;
    };
    r12 = dyn try1(p5);
    check L3() else D3();
  D3():
    deopt 16 [r12];
  L3():
    r13 = clos inner1246119658;
    st tst2 = r13;
    try2 = ldf try;
    check L4() else D4();
  D4():
    deopt 21 [];
  L4():
    p10 = prom<V +>{
      tst2 = ldf tst2;
      p6 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p7 = prom<V +>{
        longcalling = ld longcalling;
        longcalling1 = force? longcalling;
        checkMissing(longcalling1);
        return longcalling1;
      };
      p8 = prom<V +>{
        expression2 = ld expression;
        expression3 = force? expression2;
        checkMissing(expression3);
        return expression3;
      };
      p9 = prom<V +>{
        but_not_seen_in_Error = ld `but.not.seen.in.Error`;
        but_not_seen_in_Error1 = force? but_not_seen_in_Error;
        checkMissing(but_not_seen_in_Error1);
        return but_not_seen_in_Error1;
      };
      r18 = dyn tst2(p6, p7, p8, p9);
      return r18;
    };
    r20 = dyn try2(p10);
    check L5() else D5();
  D5():
    deopt 23 [r20];
  L5():
    popenv;
    return r20;
  }
}
fun inner318083183(`...`, `call.`, domain) {
  (reg ddd:dots, reg call_:*, reg domain:*) -+> V { var `...`:dots?, var `call.`:*, reg call__isMissing:L, reg call__orDefault:*, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg __1:*, reg __2:V, reg inherits:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg __3:*, reg __4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg nargs:cls, reg r9:V, reg r10:V, reg c10:L, reg warning:cls, reg r11:V, reg conditionMessage:cls, reg cond:*, reg cond1:V, reg p:p(V +), reg r14:V, reg conditionCall:cls, reg cond2:*, reg cond3:V, reg p1:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg cond4:*, reg cond5:V, reg message:*, reg message1:V, reg call:*, reg call1:V, reg _signalCondition:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg message2:*, reg message3:V, reg call2:*, reg call3:V, reg _dfltStop:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg call_1:*, reg call_2:V, reg _makeMessage:cls, reg ddd1:dots?, reg domain1:*, reg domain2:V, reg p2:p(V +), reg r26:V, reg stop:cls, reg r27:V |
    mkenv;
    st `...` = ddd;
    call__isMissing = missing.0(call_);
    if call__isMissing then L0(TRUE) else L0(call_);
  L0(call__orDefault):
    st `call.` = call__orDefault;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L1(NULL) else L1(domain);
  L1(domain_orDefault):
    st domain = domain_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L15() else L3(c);
  L12():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L14() else D0();
  L13():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3(c2):
    c9 = `as.logical`(c2);
    if c9 then L21() else L5();
  L14():
    goto L2(r2);
  L15():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L4(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L3(c7);
  L5():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L16():
    __1 = ld `..1`;
    check L18() else D1();
  L17():
    r4 = dyn base1(<sym ..1>, "condition");
    goto L4(c, r4);
  L21():
    __3 = ld `..1`;
    check L22() else D3();
  D1():
    deopt 8 [c, __1];
  D3():
    deopt 15 [__3];
  L11(r24):
    popenv;
    return r24;
  L18():
    __2 = force? __1;
    checkMissing(__2);
    inherits = ldf inherits in base;
    r6 = dyn inherits(__2, "condition", FALSE);
    check L19() else D2();
  L22():
    __4 = force? __3;
    checkMissing(__4);
    st cond = __4;
    sym2 = ldf nargs;
    base2 = ldf nargs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L46():
    call_1 = ld `call.`;
    check L48() else D18();
  L47():
    r23 = dyn base5(<lang stop(call., .makeMessage(..., domain=domain))>);
    goto L11(r23);
  D2():
    deopt 13 [c, r6];
  D18():
    deopt 60 [call_1];
  L6(r8):
    r10 = `>`(r8, 1);
    c10 = `as.logical`(r10);
    if c10 then L26() else L7();
  L19():
    goto L4(c, r6);
  L23():
    nargs = ldf nargs in base;
    r9 = dyn nargs();
    check L25() else D4();
  L24():
    r7 = dyn base2();
    goto L6(r7);
  L48():
    call_2 = force? call_1;
    checkMissing(call_2);
    _makeMessage = ldf `.makeMessage`;
    check L49() else D19();
  D4():
    deopt 21 [r9];
  D19():
    deopt 63 [];
  L7():
    goto L8();
  L8():
    conditionMessage = ldf conditionMessage;
    check L30() else D7();
  L25():
    goto L6(r9);
  L26():
    warning = ldf warning;
    check L27() else D5();
  L49():
    ddd1 = ld `...`;
    p2 = prom<V +>{
      domain1 = ld domain;
      domain2 = force? domain1;
      checkMissing(domain2);
      return domain2;
    };
    r26 = dyn _makeMessage[`...`, domain](ddd1, p2);
    check L50() else D20();
  D5():
    deopt 25 [];
  D7():
    deopt 31 [];
  D20():
    deopt 67 [r26];
  L27():
    r11 = dyn warning("additional arguments ignored in stop()");
    check L28() else D6();
  L30():
    p = prom<V +>{
      cond = ld cond;
      cond1 = force? cond;
      checkMissing(cond1);
      return cond1;
    };
    r14 = dyn conditionMessage(p);
    check L31() else D8();
  L50():
    stop = ldf stop in base;
    r27 = dyn stop(call_2, r26);
    check L51() else D21();
  D6():
    deopt 27 [r11];
  D8():
    deopt 33 [r14];
  D21():
    deopt 69 [r27];
  L28():
    goto L8();
  L31():
    st message = r14;
    conditionCall = ldf conditionCall;
    check L32() else D9();
  L51():
    goto L11(r27);
  D9():
    deopt 36 [];
  L32():
    p1 = prom<V +>{
      cond2 = ld cond;
      cond3 = force? cond2;
      checkMissing(cond3);
      return cond3;
    };
    r16 = dyn conditionCall(p1);
    check L33() else D10();
  D10():
    deopt 38 [r16];
  L33():
    st call = r16;
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L9():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L34():
    cond4 = ld cond;
    check L36() else D11();
  L35():
    r17 = dyn base3(<lang .signalCondition(cond, message, call)>);
    goto L9();
  D11():
    deopt 42 [cond4];
  L10(r21):
    popenv;
    return r21;
  L36():
    cond5 = force? cond4;
    checkMissing(cond5);
    message = ld message;
    check L37() else D12();
  L40():
    message2 = ld message;
    check L42() else D15();
  L41():
    r20 = dyn base4(<lang .dfltStop(message, call)>);
    goto L10(r20);
  D12():
    deopt 44 [message];
  D15():
    deopt 52 [message2];
  L37():
    message1 = force? message;
    checkMissing(message1);
    call = ld call;
    check L38() else D13();
  L42():
    message3 = force? message2;
    checkMissing(message3);
    call2 = ld call;
    check L43() else D16();
  D13():
    deopt 46 [call];
  D16():
    deopt 54 [call2];
  L38():
    call1 = force? call;
    checkMissing(call1);
    _signalCondition = ldf `.signalCondition` in base;
    r19 = dyn _signalCondition(cond5, message1, call1);
    check L39() else D14();
  L43():
    call3 = force? call2;
    checkMissing(call3);
    _dfltStop = ldf `.dfltStop` in base;
    r22 = dyn _dfltStop(message3, call3);
    check L44() else D17();
  D14():
    deopt 49 [r19];
  D17():
    deopt 57 [r22];
  L39():
    goto L9();
  L44():
    goto L10(r22);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg stop:cls, reg r:V |
    mkenv;
    st `...` = ddd;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn stop("dummy error");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}