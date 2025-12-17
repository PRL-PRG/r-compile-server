fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner312461984;
    st dbinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner312461984(x, size, prob, log) {
  (reg x:*, reg size:*, reg prob:*, reg log:*) -+> V { var x:*, var size:*, var prob:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dbinom:*, reg C_dbinom1:V, reg x1:*, reg x2:V, reg size1:*, reg size2:V, reg prob1:*, reg prob2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st size = size;
    st prob = prob;
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
    C_dbinom = ld C_dbinom;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_dbinom>, <sym x>, <sym size>, <sym prob>, <sym log>);
    goto L1(r);
  D0():
    deopt 1 [C_dbinom];
  L4():
    C_dbinom1 = force? C_dbinom;
    checkMissing(C_dbinom1);
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [C_dbinom1, x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    size1 = ld size;
    check L6() else D2();
  D2():
    deopt 3 [C_dbinom1, x2, size1];
  L6():
    size2 = force? size1;
    checkMissing(size2);
    prob1 = ld prob;
    check L7() else D3();
  D3():
    deopt 4 [C_dbinom1, x2, size2, prob1];
  L7():
    prob2 = force? prob1;
    checkMissing(prob2);
    log1 = ld log;
    check L8() else D4();
  D4():
    deopt 5 [C_dbinom1, x2, size2, prob2, log1];
  L8():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, size2, prob2, log2];
    r2 = `.Call`(C_dbinom1, vargs, <missing>);
    goto L1(r2);
  }
}