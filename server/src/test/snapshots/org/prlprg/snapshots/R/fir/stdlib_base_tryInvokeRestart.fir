fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-423110423`;
    st tryInvokeRestart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-423110423`(r, `...`) {
  (reg r:*, reg ddd:dots) -+> V { var r:*, var `...`:dots?, reg isRestart:cls, reg r1:*, reg r2:V, reg p:p(V +), reg r4:V, reg r5:V, reg c:L, reg findRestart:cls, reg r6:*, reg r7:V, reg p1:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg r13:*, reg r14:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg invisible:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg r20:*, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg list:cls, reg ddd1:dots?, reg r24:V, reg _invokeRestart:cls, reg r25:V |
    mkenv;
    st r = r;
    st `...` = ddd;
    isRestart = ldf isRestart;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      r1 = ld r;
      r2 = force? r1;
      checkMissing(r2);
      return r2;
    };
    r4 = dyn isRestart(p);
    check L8() else D1();
  D1():
    deopt 3 [r4];
  L8():
    r5 = `!`(r4);
    c = `as.logical`(r5);
    if c then L9() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L9():
    findRestart = ldf findRestart;
    check L10() else D2();
  D2():
    deopt 6 [];
  L2(r12):
    c2 = `as.logical`(r12);
    if c2 then L16() else L3();
  L10():
    p1 = prom<V +>{
      r6 = ld r;
      r7 = force? r6;
      checkMissing(r7);
      return r7;
    };
    r9 = dyn findRestart(p1);
    check L11() else D3();
  L13():
    r13 = ld r;
    check L15() else D4();
  L14():
    r11 = dyn base(<sym r>);
    goto L2(r11);
  D3():
    deopt 8 [r9];
  D4():
    deopt 13 [r13];
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    st r = r9;
    goto L1();
  L15():
    r14 = force? r13;
    checkMissing(r14);
    c1 = `==`(r14, NULL);
    goto L2(c1);
  L16():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L4(r16):
    popenv;
    return r16;
  L5(r19):
    popenv;
    return r19;
  L17():
    invisible = ldf invisible in base;
    r17 = dyn invisible(NULL);
    check L19() else D5();
  L18():
    r15 = dyn base1(NULL);
    goto L4(r15);
  L21():
    r20 = ld r;
    check L23() else D6();
  L22():
    r18 = dyn base2(<lang .invokeRestart(r, list(...))>);
    goto L5(r18);
  D5():
    deopt 20 [r17];
  D6():
    deopt 23 [r20];
  L19():
    goto L4(r17);
  L23():
    r21 = force? r20;
    checkMissing(r21);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L6(r23):
    _invokeRestart = ldf `.invokeRestart` in base;
    r25 = dyn _invokeRestart(r21, r23);
    check L28() else D9();
  L24():
    list = ldf list;
    check L26() else D7();
  L25():
    r22 = dyn base3(<sym ...>);
    goto L6(r22);
  D7():
    deopt 27 [];
  D9():
    deopt 31 [r25];
  L26():
    ddd1 = ld `...`;
    r24 = dyn list[`...`](ddd1);
    check L27() else D8();
  L28():
    goto L5(r25);
  D8():
    deopt 29 [r24];
  L27():
    goto L6(r24);
  }
}