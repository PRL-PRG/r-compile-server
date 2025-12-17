fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1179177493;
    st besselI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1179177493(x, nu, `expon.scaled`) {
  (reg x:*, reg nu:*, reg expon_scaled:*) -+> V { var x:*, var nu:*, var `expon.scaled`:*, reg expon_scaled_isMissing:L, reg expon_scaled_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg nu1:*, reg nu2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:R, reg r6:V, reg expon_scaled1:*, reg expon_scaled2:V, reg as_logical:cls, reg r7:V, reg r8:V, reg besselI:cls, reg r9:V |
    mkenv;
    st x = x;
    st nu = nu;
    expon_scaled_isMissing = missing.0(expon_scaled);
    if expon_scaled_isMissing then L0(FALSE) else L0(expon_scaled);
  L0(expon_scaled_orDefault):
    st `expon.scaled` = expon_scaled_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang besselI(x, nu, `+`(1.0, as.logical(expon.scaled)))>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    nu1 = ld nu;
    check L6() else D1();
  D1():
    deopt 4 [nu1];
  L6():
    nu2 = force? nu1;
    checkMissing(nu2);
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r5, r6):
    r8 = `+`(r5, r6);
    besselI = ldf besselI in base;
    r9 = dyn besselI(x2, nu2, r8);
    check L11() else D4();
  L7():
    expon_scaled1 = ld `expon.scaled`;
    check L9() else D2();
  L8():
    r4 = dyn base1(<sym expon.scaled>);
    goto L2(1.0, r4);
  D2():
    deopt 9 [1.0, expon_scaled1];
  D4():
    deopt 15 [r9];
  L9():
    expon_scaled2 = force? expon_scaled1;
    checkMissing(expon_scaled2);
    as_logical = ldf `as.logical` in base;
    r7 = dyn as_logical(expon_scaled2);
    check L10() else D3();
  L11():
    goto L1(r9);
  D3():
    deopt 12 [1.0, r7];
  L10():
    goto L2(1.0, r7);
  }
}