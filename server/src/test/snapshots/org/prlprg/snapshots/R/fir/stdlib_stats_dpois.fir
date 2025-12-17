fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner102008451;
    st dpois = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner102008451(x, lambda, log) {
  (reg x:*, reg lambda:*, reg log:*) -+> V { var x:*, var lambda:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dpois:*, reg C_dpois1:V, reg x1:*, reg x2:V, reg lambda1:*, reg lambda2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st lambda = lambda;
    log_isMissing = missing.0(log);
    if log_isMissing then L0(FALSE) else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_dpois = ld C_dpois;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_dpois>, <sym x>, <sym lambda>, <sym log>);
    goto L1(r);
  D0():
    deopt 1 [C_dpois];
  L4():
    C_dpois1 = force? C_dpois;
    checkMissing(C_dpois1);
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [C_dpois1, x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    lambda1 = ld lambda;
    check L6() else D2();
  D2():
    deopt 3 [C_dpois1, x2, lambda1];
  L6():
    lambda2 = force? lambda1;
    checkMissing(lambda2);
    log1 = ld log;
    check L7() else D3();
  D3():
    deopt 4 [C_dpois1, x2, lambda2, log1];
  L7():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, lambda2, log2];
    r2 = `.Call`(C_dpois1, vargs, <missing>);
    goto L1(r2);
  }
}