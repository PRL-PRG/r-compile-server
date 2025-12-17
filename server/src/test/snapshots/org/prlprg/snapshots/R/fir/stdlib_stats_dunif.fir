fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner121553931;
    st dunif = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner121553931(x, min, max, log) {
  (reg x:*, reg min:*, reg max:*, reg log:*) -+> V { var x:*, var min:*, reg min_isMissing:L, reg min_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dunif:*, reg C_dunif1:V, reg x1:*, reg x2:V, reg min1:*, reg min2:V, reg max1:*, reg max2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    min_isMissing = missing.0(min);
    if min_isMissing then L0(0.0) else L0(min);
  L0(min_orDefault):
    st min = min_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L1(1.0) else L1(max);
  L1(max_orDefault):
    st max = max_orDefault;
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
    C_dunif = ld C_dunif;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_dunif>, <sym x>, <sym min>, <sym max>, <sym log>);
    goto L3(r);
  D0():
    deopt 1 [C_dunif];
  L6():
    C_dunif1 = force? C_dunif;
    checkMissing(C_dunif1);
    x1 = ld x;
    check L7() else D1();
  D1():
    deopt 2 [C_dunif1, x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    min1 = ld min;
    check L8() else D2();
  D2():
    deopt 3 [C_dunif1, x2, min1];
  L8():
    min2 = force? min1;
    checkMissing(min2);
    max1 = ld max;
    check L9() else D3();
  D3():
    deopt 4 [C_dunif1, x2, min2, max1];
  L9():
    max2 = force? max1;
    checkMissing(max2);
    log1 = ld log;
    check L10() else D4();
  D4():
    deopt 5 [C_dunif1, x2, min2, max2, log1];
  L10():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, min2, max2, log2];
    r2 = `.Call`(C_dunif1, vargs, <missing>);
    goto L3(r2);
  }
}