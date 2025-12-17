fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2975030429;
    st dwilcox = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2975030429(x, m, n, log) {
  (reg x:*, reg m:*, reg n:*, reg log:*) -+> V { var x:*, var m:*, var n:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg on_exit:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_dwilcox:*, reg C_dwilcox1:V, reg x1:*, reg x2:V, reg m1:*, reg m2:V, reg n1:*, reg n2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r5:V |
    mkenv;
    st x = x;
    st m = m;
    st n = n;
    log_isMissing = missing.0(log);
    if log_isMissing then L0(FALSE) else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L3():
    on_exit = ldf `on.exit` in base;
    r2 = dyn on_exit(<lang .External(C_wilcox_free)>);
    goto L1();
  L4():
    r = dyn base(<lang .External(C_wilcox_free)>);
    goto L1();
  L2(r4):
    popenv;
    return r4;
  L5():
    C_dwilcox = ld C_dwilcox;
    check L7() else D0();
  L6():
    r3 = dyn base1(<sym C_dwilcox>, <sym x>, <sym m>, <sym n>, <sym log>);
    goto L2(r3);
  D0():
    deopt 4 [C_dwilcox];
  L7():
    C_dwilcox1 = force? C_dwilcox;
    checkMissing(C_dwilcox1);
    x1 = ld x;
    check L8() else D1();
  D1():
    deopt 5 [C_dwilcox1, x1];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    m1 = ld m;
    check L9() else D2();
  D2():
    deopt 6 [C_dwilcox1, x2, m1];
  L9():
    m2 = force? m1;
    checkMissing(m2);
    n1 = ld n;
    check L10() else D3();
  D3():
    deopt 7 [C_dwilcox1, x2, m2, n1];
  L10():
    n2 = force? n1;
    checkMissing(n2);
    log1 = ld log;
    check L11() else D4();
  D4():
    deopt 8 [C_dwilcox1, x2, m2, n2, log1];
  L11():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, m2, n2, log2];
    r5 = `.Call`(C_dwilcox1, vargs, <missing>);
    goto L2(r5);
  }
}