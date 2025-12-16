fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1493171195`;
    st bindtextdomain = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1493171195`(domain, dirname) {
  (reg domain:*, reg dirname:*) -+> V { var domain:*, var dirname:*, reg dirname_isMissing:L, reg dirname_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg domain1:*, reg domain2:V, reg dirname1:*, reg dirname2:V, reg bindtextdomain:cls, reg r2:V |
    mkenv;
    st domain = domain;
    dirname_isMissing = missing.0(dirname);
    if dirname_isMissing then L0(NULL) else L0(dirname);
  L0(dirname_orDefault):
    st dirname = dirname_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    domain1 = ld domain;
    check L4() else D0();
  L3():
    r = dyn base(<lang bindtextdomain(domain, dirname)>);
    goto L1(r);
  D0():
    deopt 2 [domain1];
  L4():
    domain2 = force? domain1;
    checkMissing(domain2);
    dirname1 = ld dirname;
    check L5() else D1();
  D1():
    deopt 4 [dirname1];
  L5():
    dirname2 = force? dirname1;
    checkMissing(dirname2);
    bindtextdomain = ldf bindtextdomain in base;
    r2 = dyn bindtextdomain(domain2, dirname2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}