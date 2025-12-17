fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3591571275;
    st `.identC` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3591571275(c1, c2) {
  (reg c1:*, reg c2:*) -+> V { var c1:*, reg c1_isMissing:L, reg c1_orDefault:*, var c2:*, reg c2_isMissing:L, reg c2_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_identC:*, reg C_R_identC1:V, reg c3:*, reg c4:V, reg c5:*, reg c6:V, reg vargs:dots, reg r2:V |
    mkenv;
    c1_isMissing = missing.0(c1);
    if c1_isMissing then L0(NULL) else L0(c1);
  L0(c1_orDefault):
    st c1 = c1_orDefault;
    c2_isMissing = missing.0(c2);
    if c2_isMissing then L1(NULL) else L1(c2);
  L1(c2_orDefault):
    st c2 = c2_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_R_identC = ld C_R_identC;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_R_identC>, <sym c1>, <sym c2>);
    goto L2(r);
  D0():
    deopt 1 [C_R_identC];
  L5():
    C_R_identC1 = force? C_R_identC;
    checkMissing(C_R_identC1);
    c3 = ld c1;
    check L6() else D1();
  D1():
    deopt 2 [C_R_identC1, c3];
  L6():
    c4 = force? c3;
    checkMissing(c4);
    c5 = ld c2;
    check L7() else D2();
  D2():
    deopt 3 [C_R_identC1, c4, c5];
  L7():
    c6 = force? c5;
    checkMissing(c6);
    vargs = dots[c4, c6];
    r2 = `.Call`(C_R_identC1, vargs, <missing>);
    goto L2(r2);
  }
}