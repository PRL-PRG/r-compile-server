fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3471871819;
    st `sigma.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3471871819(object, `use.fallback`, `...`) {
  (reg object:*, reg use_fallback:*, reg ddd:dots) -+> V { var object:*, var `use.fallback`:*, reg use_fallback_isMissing:L, reg use_fallback_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg deviance:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r3:V, reg nobs:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg use_fallback1:*, reg use_fallback2:V, reg p2:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg r21:V, reg r22:V, reg coef:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg r24:V, reg is_na:cls, reg r25:V, reg r26:V, reg sum:cls, reg r27:V, reg r28:V, reg r29:V, reg r30:V |
    mkenv;
    st object = object;
    use_fallback_isMissing = missing.0(use_fallback);
    if use_fallback_isMissing then L0(TRUE) else L0(use_fallback);
  L0(use_fallback_orDefault):
    st `use.fallback` = use_fallback_orDefault;
    st `...` = ddd;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    popenv;
    return r1;
  L4():
    deviance = ldf deviance;
    check L6() else D0();
  L5():
    r = dyn base(<lang `/`(deviance(object, ...), `(`(`-`(nobs(object, use.fallback=use.fallback), sum(`!`(is.na(coef(object)))))))>);
    goto L1(r);
  D0():
    deopt 2 [];
  L6():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    ddd1 = ld `...`;
    r3 = dyn deviance[, `...`](p, ddd1);
    check L7() else D1();
  D1():
    deopt 5 [r3];
  L7():
    nobs = ldf nobs;
    check L8() else D2();
  D2():
    deopt 6 [r3];
  L8():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p2 = prom<V +>{
      use_fallback1 = ld `use.fallback`;
      use_fallback2 = force? use_fallback1;
      checkMissing(use_fallback2);
      return use_fallback2;
    };
    r6 = dyn nobs[, `use.fallback`](p1, p2);
    check L9() else D3();
  D3():
    deopt 10 [r3, r6];
  L9():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r12, r13, r14):
    r28 = `-`(r13, r14);
    r29 = `/`(r12, r28);
    r30 = sqrt(r29);
    goto L1(r30);
  L10():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r11 = dyn base1(<lang `!`(is.na(coef(object)))>);
    goto L2(r3, r6, r11);
  L3(r20, r21, r22):
    r26 = `!`(r22);
    sum = ldf sum in base;
    r27 = dyn sum(r26);
    check L17() else D7();
  L12():
    coef = ldf coef;
    check L14() else D4();
  L13():
    r19 = dyn base2(<lang coef(object)>);
    goto L3(r3, r6, r19);
  D4():
    deopt 15 [r3, r6];
  D7():
    deopt 22 [r20, r21, r27];
  L14():
    p3 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r24 = dyn coef(p3);
    check L15() else D5();
  L17():
    goto L2(r20, r21, r27);
  D5():
    deopt 17 [r3, r6, r24];
  L15():
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(r24);
    check L16() else D6();
  D6():
    deopt 19 [r3, r6, r25];
  L16():
    goto L3(r3, r6, r25);
  }
}