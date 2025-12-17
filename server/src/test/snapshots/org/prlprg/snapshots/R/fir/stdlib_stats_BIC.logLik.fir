fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `BIC.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg object1:*, reg object2:V, reg as_numeric:cls, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg r11:V, reg object3:*, reg object4:V, reg attr:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg r19:V, reg r20:V, reg nobs:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r22:V, reg r23:V, reg r24:V, reg r25:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3, r4):
    r6 = `*`(r3, r4);
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r2 = dyn base(<sym object>);
    goto L0(-2.0, r2);
  D0():
    deopt 3 [-2.0, object1];
  L1(r10, r11):
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    as_numeric = ldf `as.numeric` in base;
    r5 = dyn as_numeric(object2);
    check L6() else D1();
  L7():
    object3 = ld object;
    check L9() else D2();
  L8():
    r9 = dyn base1(<sym object>, "df");
    goto L1(r6, r9);
  D1():
    deopt 6 [-2.0, r5];
  D2():
    deopt 9 [r6, object3];
  L2(r18, r19, r20):
    r24 = `*`(r19, r20);
    r25 = `+`(r18, r24);
    popenv;
    return r25;
  L6():
    goto L0(-2.0, r5);
  L9():
    object4 = force? object3;
    checkMissing(object4);
    attr = ldf attr in base;
    r12 = dyn attr(object4, "df");
    check L10() else D3();
  L11():
    nobs = ldf nobs;
    check L13() else D4();
  L12():
    r17 = dyn base2(<lang nobs(object)>);
    goto L2(r10, r11, r17);
  D3():
    deopt 13 [r6, r12];
  D4():
    deopt 15 [r10, r11];
  L10():
    goto L1(r6, r12);
  L13():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r22 = dyn nobs(p);
    check L14() else D5();
  D5():
    deopt 17 [r10, r11, r22];
  L14():
    r23 = log(r22, 2.718281828459045);
    goto L2(r10, r11, r23);
  }
}