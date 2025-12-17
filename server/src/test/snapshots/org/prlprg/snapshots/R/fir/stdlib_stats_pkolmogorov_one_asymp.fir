fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3503827405;
    st pkolmogorov_one_asymp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3503827405(q, n, `lower.tail`) {
  (reg q:*, reg n:*, reg lower_tail:*) -+> V { var q:*, var n:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg r2:V, reg q1:*, reg q2:V, reg r3:V, reg r4:V, reg r5:V, reg lower_tail1:*, reg lower_tail2:V, reg c:L, reg p:*, reg p1:V, reg r6:V, reg p2:*, reg p3:V |
    mkenv;
    st q = q;
    st n = n;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    st p = r1;
    lower_tail1 = ld `lower.tail`;
    check L7() else D2();
  L3():
    n1 = ld n;
    check L5() else D0();
  L4():
    r = dyn base(<lang `*`(`*`(`-`(2.0), n), `^`(q, 2.0))>);
    goto L1(r);
  D0():
    deopt 2 [-2.0, n1];
  D2():
    deopt 11 [lower_tail1];
  L5():
    n2 = force? n1;
    checkMissing(n2);
    r2 = `*`(-2.0, n2);
    q1 = ld q;
    check L6() else D1();
  L7():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    c = `as.logical`(lower_tail2);
    if c then L8() else L2();
  D1():
    deopt 4 [r2, q1];
  L2():
    p2 = ld p;
    check L11() else D4();
  L6():
    q2 = force? q1;
    checkMissing(q2);
    r3 = `^`(q2, 2.0);
    r4 = `*`(r2, r3);
    r5 = exp(r4);
    goto L1(r5);
  L8():
    p = ld p;
    check L9() else D3();
  D3():
    deopt 14 [1.0, p];
  D4():
    deopt 17 [p2];
  L9():
    p1 = force? p;
    checkMissing(p1);
    r6 = `-`(1.0, p1);
    popenv;
    return r6;
  L11():
    p3 = force? p2;
    checkMissing(p3);
    popenv;
    return p3;
  }
}