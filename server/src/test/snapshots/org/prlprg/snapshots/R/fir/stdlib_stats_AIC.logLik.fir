fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner262388851;
    st `AIC.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner262388851(object, `...`, k) {
  (reg object:*, reg ddd:dots, reg k:*) -+> V { var object:*, var `...`:dots?, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg object1:*, reg object2:V, reg as_numeric:cls, reg r5:V, reg r6:V, reg k1:*, reg k2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg k5:V, reg r11:V, reg object3:*, reg object4:V, reg attr:cls, reg r12:V, reg r13:V, reg r14:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r3, r4):
    r6 = `*`(r3, r4);
    k1 = ld k;
    check L7() else D2();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r2 = dyn base(<sym object>);
    goto L1(-2.0, r2);
  D0():
    deopt 3 [-2.0, object1];
  D2():
    deopt 7 [r6, k1];
  L5():
    object2 = force? object1;
    checkMissing(object2);
    as_numeric = ldf `as.numeric` in base;
    r5 = dyn as_numeric(object2);
    check L6() else D1();
  L7():
    k2 = force? k1;
    checkMissing(k2);
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 6 [-2.0, r5];
  L2(r10, k5, r11):
    r13 = `*`(k5, r11);
    r14 = `+`(r10, r13);
    popenv;
    return r14;
  L6():
    goto L1(-2.0, r5);
  L8():
    object3 = ld object;
    check L10() else D3();
  L9():
    r9 = dyn base1(<sym object>, "df");
    goto L2(r6, k2, r9);
  D3():
    deopt 10 [r6, k2, object3];
  L10():
    object4 = force? object3;
    checkMissing(object4);
    attr = ldf attr in base;
    r12 = dyn attr(object4, "df");
    check L11() else D4();
  D4():
    deopt 14 [r6, k2, r12];
  L11():
    goto L2(r6, k2, r12);
  }
}