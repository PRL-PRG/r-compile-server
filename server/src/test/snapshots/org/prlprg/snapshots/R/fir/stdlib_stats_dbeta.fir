fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2847418551;
    st dbeta = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2847418551(x, shape1, shape2, ncp, log) {
  (reg x:*, reg shape1:*, reg shape2:*, reg ncp:*, reg log:*) -+> V { var x:*, var shape1:*, var shape2:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_dbeta:*, reg C_dbeta1:V, reg x1:*, reg x2:V, reg shape3:*, reg shape4:V, reg shape5:*, reg shape6:V, reg log1:*, reg log2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_dnbeta:*, reg C_dnbeta1:V, reg x3:*, reg x4:V, reg shape7:*, reg shape8:V, reg shape9:*, reg shape10:V, reg ncp1:*, reg ncp2:V, reg log3:*, reg log4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st x = x;
    st shape1 = shape1;
    st shape2 = shape2;
    ncp_isMissing = missing.0(ncp);
    if ncp_isMissing then L0(0.0) else L0(ncp);
  L0(ncp_orDefault):
    st ncp = ncp_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L1(FALSE) else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    c = `as.logical`(r1);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L2(r2);
  L7():
    r = dyn base(<sym ncp>);
    goto L2(r);
  L3():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L8():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r4):
    popenv;
    return r4;
  L5(r7):
    popenv;
    return r7;
  L9():
    C_dbeta = ld C_dbeta;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym C_dbeta>, <sym x>, <sym shape1>, <sym shape2>, <sym log>);
    goto L4(r3);
  L17():
    C_dnbeta = ld C_dnbeta;
    check L19() else D5();
  L18():
    r6 = dyn base2(<sym C_dnbeta>, <sym x>, <sym shape1>, <sym shape2>, <sym ncp>, <sym log>);
    goto L5(r6);
  D0():
    deopt 4 [C_dbeta];
  D5():
    deopt 12 [C_dnbeta];
  L11():
    C_dbeta1 = force? C_dbeta;
    checkMissing(C_dbeta1);
    x1 = ld x;
    check L12() else D1();
  L19():
    C_dnbeta1 = force? C_dnbeta;
    checkMissing(C_dnbeta1);
    x3 = ld x;
    check L20() else D6();
  D1():
    deopt 5 [C_dbeta1, x1];
  D6():
    deopt 13 [C_dnbeta1, x3];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    shape3 = ld shape1;
    check L13() else D2();
  L20():
    x4 = force? x3;
    checkMissing(x4);
    shape7 = ld shape1;
    check L21() else D7();
  D2():
    deopt 6 [C_dbeta1, x2, shape3];
  D7():
    deopt 14 [C_dnbeta1, x4, shape7];
  L13():
    shape4 = force? shape3;
    checkMissing(shape4);
    shape5 = ld shape2;
    check L14() else D3();
  L21():
    shape8 = force? shape7;
    checkMissing(shape8);
    shape9 = ld shape2;
    check L22() else D8();
  D3():
    deopt 7 [C_dbeta1, x2, shape4, shape5];
  D8():
    deopt 15 [C_dnbeta1, x4, shape8, shape9];
  L14():
    shape6 = force? shape5;
    checkMissing(shape6);
    log1 = ld log;
    check L15() else D4();
  L22():
    shape10 = force? shape9;
    checkMissing(shape10);
    ncp1 = ld ncp;
    check L23() else D9();
  D4():
    deopt 8 [C_dbeta1, x2, shape4, shape6, log1];
  D9():
    deopt 16 [C_dnbeta1, x4, shape8, shape10, ncp1];
  L15():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, shape4, shape6, log2];
    r5 = `.Call`(C_dbeta1, vargs, <missing>);
    goto L4(r5);
  L23():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    log3 = ld log;
    check L24() else D10();
  D10():
    deopt 17 [C_dnbeta1, x4, shape8, shape10, ncp2, log3];
  L24():
    log4 = force? log3;
    checkMissing(log4);
    vargs1 = dots[x4, shape8, shape10, ncp2, log4];
    r8 = `.Call`(C_dnbeta1, vargs1, <missing>);
    goto L5(r8);
  }
}