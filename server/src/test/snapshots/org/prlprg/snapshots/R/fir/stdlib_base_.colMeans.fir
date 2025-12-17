fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2781274991;
    st `.colMeans` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2781274991(x, m, n, `na.rm`) {
  (reg x:*, reg m:*, reg n:*, reg na_rm:*) -+> V { var x:*, var m:*, var n:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg m1:*, reg m2:V, reg n1:*, reg n2:V, reg na_rm1:*, reg na_rm2:V, reg colMeans:cls, reg r2:V |
    mkenv;
    st x = x;
    st m = m;
    st n = n;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang colMeans(x, m, n, na.rm)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    m1 = ld m;
    check L5() else D1();
  D1():
    deopt 4 [m1];
  L5():
    m2 = force? m1;
    checkMissing(m2);
    n1 = ld n;
    check L6() else D2();
  D2():
    deopt 6 [n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    na_rm1 = ld `na.rm`;
    check L7() else D3();
  D3():
    deopt 8 [na_rm1];
  L7():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    colMeans = ldf colMeans in base;
    r2 = dyn colMeans(x2, m2, n2, na_rm2);
    check L8() else D4();
  D4():
    deopt 11 [r2];
  L8():
    goto L1(r2);
  }
}