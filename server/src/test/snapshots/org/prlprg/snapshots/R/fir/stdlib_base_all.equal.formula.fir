fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3833187206;
    st `all.equal.formula` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3833187206(target, current, `...`) {
  (reg target:*, reg current:*, reg ddd:dots) -+> V { var target:*, var current:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg target1:*, reg target2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg current1:*, reg current2:V, reg length1:cls, reg r8:V, reg r9:V, reg c:L, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg target3:*, reg target4:V, reg length2:cls, reg r12:V, reg r13:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg current3:*, reg current4:V, reg length3:cls, reg r17:V, reg r18:V, reg p1:p(V +), reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg deparse:cls, reg target5:*, reg target6:V, reg p2:p(V +), reg r26:V, reg deparse1:cls, reg current5:*, reg current6:V, reg p3:p(V +), reg r28:V, reg identical:cls, reg r29:V, reg r30:V, reg c1:L |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    target1 = ld target;
    check L8() else D0();
  L7():
    r = dyn base(<sym target>);
    goto L0(r);
  D0():
    deopt 2 [target1];
  L1(r6, r7):
    r9 = `!=`(r6, r7);
    c = `as.logical`(r9);
    if c then L14() else L2();
  L8():
    target2 = force? target1;
    checkMissing(target2);
    length = ldf length in base;
    r2 = dyn length(target2);
    check L9() else D1();
  L10():
    current1 = ld current;
    check L12() else D2();
  L11():
    r5 = dyn base1(<sym current>);
    goto L1(r1, r5);
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [r1, current1];
  L2():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L19() else L20();
  L9():
    goto L0(r2);
  L12():
    current2 = force? current1;
    checkMissing(current2);
    length1 = ldf length in base;
    r8 = dyn length1(current2);
    check L13() else D3();
  L14():
    paste0 = ldf paste0;
    check L15() else D4();
  D3():
    deopt 10 [r1, r8];
  D4():
    deopt 13 [];
  L4(r24):
    r30 = `!`(r24);
    c1 = `as.logical`(r30);
    if c1 then L26() else L5();
  L13():
    goto L1(r1, r8);
  L15():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      r13 = `==`(r11, 3);
      return r13;
    L1():
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      length2 = ldf length in base;
      r12 = dyn length2(target4);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym target>);
      goto L0(r10);
    };
    p1 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      r18 = `==`(r16, 3);
      return r18;
    L1():
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      length3 = ldf length in base;
      r17 = dyn length3(current4);
      goto L0(r17);
    L2():
      r15 = dyn base3(<sym current>);
      goto L0(r15);
    };
    r20 = dyn paste0("target, current differ in having response: ", p, ", ", p1);
    check L16() else D5();
  L19():
    deparse = ldf deparse;
    check L21() else D6();
  L20():
    r23 = dyn base4(<lang deparse(target)>, <lang deparse(current)>);
    goto L4(r23);
  D5():
    deopt 18 [r20];
  D6():
    deopt 25 [];
  L5():
    popenv;
    return TRUE;
  L16():
    popenv;
    return r20;
  L21():
    p2 = prom<V +>{
      target5 = ld target;
      target6 = force? target5;
      checkMissing(target6);
      return target6;
    };
    r26 = dyn deparse(p2);
    check L22() else D7();
  L26():
    popenv;
    return "formulas differ in contents";
  D7():
    deopt 27 [r26];
  L22():
    deparse1 = ldf deparse;
    check L23() else D8();
  D8():
    deopt 29 [];
  L23():
    p3 = prom<V +>{
      current5 = ld current;
      current6 = force? current5;
      checkMissing(current6);
      return current6;
    };
    r28 = dyn deparse1(p3);
    check L24() else D9();
  D9():
    deopt 31 [r28];
  L24():
    identical = ldf identical in base;
    r29 = dyn identical(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L25() else D10();
  D10():
    deopt 40 [r29];
  L25():
    goto L4(r29);
  }
}