fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-984275626`;
    st ngettext = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-984275626`(n, msg1, msg2, domain) {
  (reg n:*, reg msg1:*, reg msg2:*, reg domain:*) -+> V { var n:*, var msg1:*, var msg2:*, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg msg3:*, reg msg4:V, reg msg5:*, reg msg6:V, reg domain1:*, reg domain2:V, reg ngettext:cls, reg r2:V |
    mkenv;
    st n = n;
    st msg1 = msg1;
    st msg2 = msg2;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L0(NULL) else L0(domain);
  L0(domain_orDefault):
    st domain = domain_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    n1 = ld n;
    check L4() else D0();
  L3():
    r = dyn base(<lang ngettext(n, msg1, msg2, domain)>);
    goto L1(r);
  D0():
    deopt 2 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    msg3 = ld msg1;
    check L5() else D1();
  D1():
    deopt 4 [msg3];
  L5():
    msg4 = force? msg3;
    checkMissing(msg4);
    msg5 = ld msg2;
    check L6() else D2();
  D2():
    deopt 6 [msg5];
  L6():
    msg6 = force? msg5;
    checkMissing(msg6);
    domain1 = ld domain;
    check L7() else D3();
  D3():
    deopt 8 [domain1];
  L7():
    domain2 = force? domain1;
    checkMissing(domain2);
    ngettext = ldf ngettext in base;
    r2 = dyn ngettext(n2, msg4, msg6, domain2);
    check L8() else D4();
  D4():
    deopt 11 [r2];
  L8():
    goto L1(r2);
  }
}