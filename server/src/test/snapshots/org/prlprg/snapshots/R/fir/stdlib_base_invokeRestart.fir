fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1724373224;
    st invokeRestart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1724373224(r, `...`) {
  (reg r:*, reg ddd:dots) -+> V { var r:*, var `...`:dots?, reg isRestart:cls, reg r1:*, reg r2:V, reg p:p(V +), reg r4:V, reg r5:V, reg c:L, reg findRestart:cls, reg r6:*, reg r7:V, reg p1:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg res:*, reg res1:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg r14:*, reg r15:V, reg as_character:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg res2:*, reg res3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg r24:*, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg list:cls, reg ddd1:dots?, reg r28:V, reg _invokeRestart:cls, reg r29:V |
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
    goto L4();
  L4():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L9():
    findRestart = ldf findRestart;
    check L10() else D2();
  D2():
    deopt 6 [];
  L5(r23):
    popenv;
    return r23;
  L10():
    p1 = prom<V +>{
      r6 = ld r;
      r7 = force? r6;
      checkMissing(r7);
      return r7;
    };
    r9 = dyn findRestart(p1);
    check L11() else D3();
  L21():
    r24 = ld r;
    check L23() else D8();
  L22():
    r22 = dyn base2(<lang .invokeRestart(r, list(...))>);
    goto L5(r22);
  D3():
    deopt 8 [r9];
  D8():
    deopt 29 [r24];
  L11():
    st res = r9;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L23():
    r25 = force? r24;
    checkMissing(r25);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L1(r11):
    c2 = `as.logical`(r11);
    if c2 then L15() else L2();
  L6(r27):
    _invokeRestart = ldf `.invokeRestart` in base;
    r29 = dyn _invokeRestart(r25, r27);
    check L28() else D11();
  L12():
    res = ld res;
    check L14() else D4();
  L13():
    r10 = dyn base(<sym res>);
    goto L1(r10);
  L24():
    list = ldf list;
    check L26() else D9();
  L25():
    r26 = dyn base3(<sym ...>);
    goto L6(r26);
  D4():
    deopt 11 [res];
  D9():
    deopt 33 [];
  D11():
    deopt 37 [r29];
  L2():
    goto L3();
  L3():
    res2 = ld res;
    check L19() else D7();
  L14():
    res1 = force? res;
    checkMissing(res1);
    c1 = `==`(res1, NULL);
    goto L1(c1);
  L15():
    stop = ldf stop;
    check L16() else D5();
  L26():
    ddd1 = ld `...`;
    r28 = dyn list[`...`](ddd1);
    check L27() else D10();
  L28():
    goto L5(r29);
  D5():
    deopt 15 [];
  D7():
    deopt 22 [res2];
  D10():
    deopt 35 [r28];
  L16():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        r14 = ld r;
        r15 = force? r14;
        checkMissing(r15);
        as_character = ldf `as.character` in base;
        r16 = dyn as_character(r15);
        goto L0(r16);
      L2():
        r12 = dyn base1(<sym r>);
        goto L0(r12);
      };
      r18 = dyn gettextf("no 'restart' '%s' found", p2);
      return r18;
    };
    r20 = dyn stop[, domain](p3, NA_LGL);
    check L17() else D6();
  L19():
    res3 = force? res2;
    checkMissing(res3);
    st r = res3;
    goto L4();
  L27():
    goto L6(r28);
  D6():
    deopt 19 [r20];
  L17():
    goto L3();
  }
}