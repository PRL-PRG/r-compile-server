fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3503827405;
    st pkolmogorov_two_asymp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3503827405(q, n, `lower.tail`) {
  (reg q:*, reg n:*, reg lower_tail:*) -+> V { var q:*, var n:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_pkolmogorov_two_limit:*, reg C_pkolmogorov_two_limit1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg n1:*, reg n2:V, reg r4:V, reg q1:*, reg q2:V, reg r5:V, reg lower_tail1:*, reg lower_tail2:V, reg _Call:cls, reg r6:V |
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
    popenv;
    return r1;
  L3():
    C_pkolmogorov_two_limit = ld C_pkolmogorov_two_limit;
    check L5() else D0();
  L4():
    r = dyn base[, , , tol](<sym C_pkolmogorov_two_limit>, <lang `*`(sqrt(n), q)>, <sym lower.tail>, 1.0E-6);
    goto L1(r);
  D0():
    deopt 2 [C_pkolmogorov_two_limit];
  L5():
    C_pkolmogorov_two_limit1 = force? C_pkolmogorov_two_limit;
    checkMissing(C_pkolmogorov_two_limit1);
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2(r3):
    q1 = ld q;
    check L9() else D2();
  L6():
    n1 = ld n;
    check L8() else D1();
  L7():
    r2 = dyn base1(<sym n>);
    goto L2(r2);
  D1():
    deopt 5 [n1];
  D2():
    deopt 7 [r3, q1];
  L8():
    n2 = force? n1;
    checkMissing(n2);
    r4 = sqrt(n2);
    goto L2(r4);
  L9():
    q2 = force? q1;
    checkMissing(q2);
    r5 = `*`(r3, q2);
    lower_tail1 = ld `lower.tail`;
    check L10() else D3();
  D3():
    deopt 10 [lower_tail1];
  L10():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    _Call = ldf `.Call` in base;
    r6 = dyn _Call(C_pkolmogorov_two_limit1, r5, lower_tail2, 1.0E-6);
    check L11() else D4();
  D4():
    deopt 15 [r6];
  L11():
    goto L1(r6);
  }
}