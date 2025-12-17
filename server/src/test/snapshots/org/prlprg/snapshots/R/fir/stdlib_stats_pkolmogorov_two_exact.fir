fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3503827405;
    st pkolmogorov_two_exact = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3503827405(q, n, `lower.tail`) {
  (reg q:*, reg n:*, reg lower_tail:*) -+> V { var q:*, var n:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_pkolmogorov_two_exact:*, reg C_pkolmogorov_two_exact1:V, reg q1:*, reg q2:V, reg n1:*, reg n2:V, reg vargs:dots, reg r2:V, reg lower_tail1:*, reg lower_tail2:V, reg c:L, reg p:*, reg p1:V, reg p2:*, reg p3:V, reg r3:V |
    mkenv;
    st q = q;
    st n = n;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    st p = r1;
    lower_tail1 = ld `lower.tail`;
    check L8() else D3();
  L3():
    C_pkolmogorov_two_exact = ld C_pkolmogorov_two_exact;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_pkolmogorov_two_exact>, <sym q>, <sym n>);
    goto L1(r);
  D0():
    deopt 1 [C_pkolmogorov_two_exact];
  D3():
    deopt 7 [lower_tail1];
  L5():
    C_pkolmogorov_two_exact1 = force? C_pkolmogorov_two_exact;
    checkMissing(C_pkolmogorov_two_exact1);
    q1 = ld q;
    check L6() else D1();
  L8():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    c = `as.logical`(lower_tail2);
    if c then L9() else L2();
  D1():
    deopt 2 [C_pkolmogorov_two_exact1, q1];
  L2():
    p2 = ld p;
    check L12() else D5();
  L6():
    q2 = force? q1;
    checkMissing(q2);
    n1 = ld n;
    check L7() else D2();
  L9():
    p = ld p;
    check L10() else D4();
  D2():
    deopt 3 [C_pkolmogorov_two_exact1, q2, n1];
  D4():
    deopt 9 [p];
  D5():
    deopt 12 [1.0, p2];
  L7():
    n2 = force? n1;
    checkMissing(n2);
    vargs = dots[q2, n2];
    r2 = `.Call`(C_pkolmogorov_two_exact1, vargs, <missing>);
    goto L1(r2);
  L10():
    p1 = force? p;
    checkMissing(p1);
    popenv;
    return p1;
  L12():
    p3 = force? p2;
    checkMissing(p3);
    r3 = `-`(1.0, p3);
    popenv;
    return r3;
  }
}