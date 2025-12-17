fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1410043808;
    st rlogis = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1410043808(n, location, scale) {
  (reg n:*, reg location:*, reg scale:*) -+> V { var n:*, var location:*, reg location_isMissing:L, reg location_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rlogis:*, reg C_rlogis1:V, reg n1:*, reg n2:V, reg location1:*, reg location2:V, reg scale1:*, reg scale2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    location_isMissing = missing.0(location);
    if location_isMissing then L0(0.0) else L0(location);
  L0(location_orDefault):
    st location = location_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(1.0) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_rlogis = ld C_rlogis;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_rlogis>, <sym n>, <sym location>, <sym scale>);
    goto L2(r);
  D0():
    deopt 1 [C_rlogis];
  L5():
    C_rlogis1 = force? C_rlogis;
    checkMissing(C_rlogis1);
    n1 = ld n;
    check L6() else D1();
  D1():
    deopt 2 [C_rlogis1, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    location1 = ld location;
    check L7() else D2();
  D2():
    deopt 3 [C_rlogis1, n2, location1];
  L7():
    location2 = force? location1;
    checkMissing(location2);
    scale1 = ld scale;
    check L8() else D3();
  D3():
    deopt 4 [C_rlogis1, n2, location2, scale1];
  L8():
    scale2 = force? scale1;
    checkMissing(scale2);
    vargs = dots[n2, location2, scale2];
    r2 = `.Call`(C_rlogis1, vargs, <missing>);
    goto L2(r2);
  }
}