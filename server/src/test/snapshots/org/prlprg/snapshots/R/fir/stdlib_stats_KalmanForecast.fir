fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3488850642;
    st KalmanForecast = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3488850642(`n.ahead`, mod, update) {
  (reg n_ahead:*, reg mod:*, reg update:*) -+> V { var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var mod:*, var update:*, reg update_isMissing:L, reg update_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_KalmanFore:*, reg C_KalmanFore1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg C_KalmanFore4:V, reg r3:V, reg n_ahead1:*, reg n_ahead2:V, reg as_integer:cls, reg r4:V, reg mod1:*, reg mod2:V, reg update1:*, reg update2:V, reg vargs:dots, reg r5:V |
    mkenv;
    n_ahead_isMissing = missing.0(n_ahead);
    if n_ahead_isMissing then L0(10) else L0(n_ahead);
  L0(n_ahead_orDefault):
    st `n.ahead` = n_ahead_orDefault;
    st mod = mod;
    update_isMissing = missing.0(update);
    if update_isMissing then L1(FALSE) else L1(update);
  L1(update_orDefault):
    st update = update_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r1):
    popenv;
    return r1;
  L4():
    C_KalmanFore = ld C_KalmanFore;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_KalmanFore>, <lang as.integer(n.ahead)>, <sym mod>, <sym update>);
    goto L2(r);
  D0():
    deopt 1 [C_KalmanFore];
  L6():
    C_KalmanFore1 = force? C_KalmanFore;
    checkMissing(C_KalmanFore1);
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3(C_KalmanFore4, r3):
    mod1 = ld mod;
    check L11() else D3();
  L7():
    n_ahead1 = ld `n.ahead`;
    check L9() else D1();
  L8():
    r2 = dyn base1(<sym n.ahead>);
    goto L3(C_KalmanFore1, r2);
  D1():
    deopt 4 [C_KalmanFore1, n_ahead1];
  D3():
    deopt 7 [C_KalmanFore4, r3, mod1];
  L9():
    n_ahead2 = force? n_ahead1;
    checkMissing(n_ahead2);
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(n_ahead2);
    check L10() else D2();
  L11():
    mod2 = force? mod1;
    checkMissing(mod2);
    update1 = ld update;
    check L12() else D4();
  D2():
    deopt 7 [C_KalmanFore1, r4];
  D4():
    deopt 8 [C_KalmanFore4, r3, mod2, update1];
  L10():
    goto L3(C_KalmanFore1, r4);
  L12():
    update2 = force? update1;
    checkMissing(update2);
    vargs = dots[r3, mod2, update2];
    r5 = `.Call`(C_KalmanFore4, vargs, <missing>);
    goto L2(r5);
  }
}