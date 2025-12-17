fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2368403604;
    st `all.equal.function` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2368403604(target, current, `check.environment`, `...`) {
  (reg target:*, reg current:*, reg check_environment:*, reg ddd:dots) -+> V { var target:*, var current:*, var `check.environment`:*, reg check_environment_isMissing:L, reg check_environment_orDefault:*, var `...`:dots?, reg all_equal_language:cls, reg target1:*, reg target2:V, reg p:p(V +), reg current1:*, reg current2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg check_environment1:*, reg check_environment2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg environment:cls, reg target3:*, reg target4:V, reg p2:p(V +), reg r6:V, reg environment1:cls, reg current3:*, reg current4:V, reg p3:p(V +), reg r8:V, reg identical:cls, reg r9:V, reg ee:*, reg ee1:V, reg r10:V, reg c1:L, reg all_equal_environment:cls, reg environment2:cls, reg target5:*, reg target6:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg environment3:cls, reg current5:*, reg current6:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg ddd2:dots?, reg r17:V, reg isTRUE:cls, reg msg:*, reg msg1:V, reg p8:p(V +), reg r20:V, reg c2:L, reg ee2:*, reg ee3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg msg2:*, reg msg3:V, reg isTRUE1:cls, reg ee4:*, reg ee5:V, reg p9:p(V +), reg r24:V, reg r25:V, reg c3:L, reg ee6:*, reg ee7:V, reg ee8:V, reg c4:cls, reg r26:V, reg msg4:*, reg msg5:V |
    mkenv;
    st target = target;
    st current = current;
    check_environment_isMissing = missing.0(check_environment);
    if check_environment_isMissing then L0(TRUE) else L0(check_environment);
  L0(check_environment_orDefault):
    st `check.environment` = check_environment_orDefault;
    st `...` = ddd;
    all_equal_language = ldf `all.equal.language`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    p1 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    ddd1 = ld `...`;
    r2 = dyn all_equal_language[, , `...`](p, p1, ddd1);
    check L10() else D1();
  D1():
    deopt 5 [r2];
  L10():
    st msg = r2;
    check_environment1 = ld `check.environment`;
    check L11() else D2();
  D2():
    deopt 7 [check_environment1];
  L11():
    check_environment2 = force? check_environment1;
    checkMissing(check_environment2);
    c = `as.logical`(check_environment2);
    if c then L12() else L1();
  L1():
    msg4 = ld msg;
    check L40() else D19();
  L12():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  D19():
    deopt 62 [msg4];
  L2(r4):
    st ee = r4;
    ee = ld ee;
    check L20() else D8();
  L13():
    environment = ldf environment;
    check L15() else D3();
  L14():
    r3 = dyn base[, , `ignore.environment`](<lang environment(target)>, <lang environment(current)>, FALSE);
    goto L2(r3);
  L40():
    msg5 = force? msg4;
    checkMissing(msg5);
    popenv;
    return msg5;
  D3():
    deopt 12 [];
  D8():
    deopt 29 [ee];
  L15():
    p2 = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    r6 = dyn environment(p2);
    check L16() else D4();
  L20():
    ee1 = force? ee;
    checkMissing(ee1);
    r10 = `!`(ee1);
    c1 = `as.logical`(r10);
    if c1 then L21() else L3();
  D4():
    deopt 14 [r6];
  L3():
    goto L4();
  L4():
    isTRUE = ldf isTRUE;
    check L25() else D11();
  L16():
    environment1 = ldf environment;
    check L17() else D5();
  L21():
    all_equal_environment = ldf `all.equal.environment`;
    check L22() else D9();
  D5():
    deopt 16 [];
  D9():
    deopt 33 [];
  D11():
    deopt 42 [];
  L17():
    p3 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    r8 = dyn environment1(p3);
    check L18() else D6();
  L22():
    p5 = prom<V +>{
      environment2 = ldf environment;
      p4 = prom<V +>{
        target5 = ld target;
        target6 = force? target5;
        checkMissing(target6);
        return target6;
      };
      r12 = dyn environment2(p4);
      return r12;
    };
    p7 = prom<V +>{
      environment3 = ldf environment;
      p6 = prom<V +>{
        current5 = ld current;
        current6 = force? current5;
        checkMissing(current6);
        return current6;
      };
      r15 = dyn environment3(p6);
      return r15;
    };
    ddd2 = ld `...`;
    r17 = dyn all_equal_environment[, , `...`](p5, p7, ddd2);
    check L23() else D10();
  L25():
    p8 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r20 = dyn isTRUE(p8);
    check L26() else D12();
  D6():
    deopt 18 [r8];
  D10():
    deopt 37 [r17];
  D12():
    deopt 44 [r20];
  L18():
    identical = ldf identical in base;
    r9 = dyn identical(r6, r8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L19() else D7();
  L23():
    st ee = r17;
    goto L4();
  L26():
    c2 = `as.logical`(r20);
    if c2 then L27() else L5();
  D7():
    deopt 27 [r9];
  L5():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L19():
    goto L2(r9);
  L27():
    ee2 = ld ee;
    check L28() else D13();
  D13():
    deopt 45 [ee2];
  L6(r22):
    popenv;
    return r22;
  L28():
    ee3 = force? ee2;
    checkMissing(ee3);
    popenv;
    return ee3;
  L30():
    msg2 = ld msg;
    check L32() else D14();
  L31():
    r21 = dyn base1(<sym msg>, <lang if(`!`(isTRUE(ee)), ee)>);
    goto L6(r21);
  D14():
    deopt 49 [msg2];
  L32():
    msg3 = force? msg2;
    checkMissing(msg3);
    isTRUE1 = ldf isTRUE;
    check L33() else D15();
  D15():
    deopt 52 [];
  L33():
    p9 = prom<V +>{
      ee4 = ld ee;
      ee5 = force? ee4;
      checkMissing(ee5);
      return ee5;
    };
    r24 = dyn isTRUE1(p9);
    check L34() else D16();
  D16():
    deopt 54 [r24];
  L34():
    r25 = `!`(r24);
    c3 = `as.logical`(r25);
    if c3 then L35() else L7();
  L7():
    goto L8(NULL);
  L8(ee8):
    c4 = ldf c in base;
    r26 = dyn c4(msg3, ee8);
    check L38() else D18();
  L35():
    ee6 = ld ee;
    check L36() else D17();
  D17():
    deopt 56 [ee6];
  D18():
    deopt 61 [r26];
  L36():
    ee7 = force? ee6;
    checkMissing(ee7);
    goto L8(ee7);
  L38():
    goto L6(r26);
  }
}