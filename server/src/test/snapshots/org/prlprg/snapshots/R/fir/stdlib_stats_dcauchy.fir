fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner687643580;
    st dcauchy = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner687643580(x, location, scale, log) {
  (reg x:*, reg location:*, reg scale:*, reg log:*) -+> V { var x:*, var location:*, reg location_isMissing:L, reg location_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dcauchy:*, reg C_dcauchy1:V, reg x1:*, reg x2:V, reg location1:*, reg location2:V, reg scale1:*, reg scale2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    location_isMissing = missing.0(location);
    if location_isMissing then L0(0.0) else L0(location);
  L0(location_orDefault):
    st location = location_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(1.0) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L2(FALSE) else L2(log);
  L2(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    C_dcauchy = ld C_dcauchy;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_dcauchy>, <sym x>, <sym location>, <sym scale>, <sym log>);
    goto L3(r);
  D0():
    deopt 1 [C_dcauchy];
  L6():
    C_dcauchy1 = force? C_dcauchy;
    checkMissing(C_dcauchy1);
    x1 = ld x;
    check L7() else D1();
  D1():
    deopt 2 [C_dcauchy1, x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    location1 = ld location;
    check L8() else D2();
  D2():
    deopt 3 [C_dcauchy1, x2, location1];
  L8():
    location2 = force? location1;
    checkMissing(location2);
    scale1 = ld scale;
    check L9() else D3();
  D3():
    deopt 4 [C_dcauchy1, x2, location2, scale1];
  L9():
    scale2 = force? scale1;
    checkMissing(scale2);
    log1 = ld log;
    check L10() else D4();
  D4():
    deopt 5 [C_dcauchy1, x2, location2, scale2, log1];
  L10():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, location2, scale2, log2];
    r2 = `.Call`(C_dcauchy1, vargs, <missing>);
    goto L3(r2);
  }
}