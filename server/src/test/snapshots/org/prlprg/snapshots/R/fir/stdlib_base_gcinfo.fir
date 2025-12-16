fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-609979393`;
    st gcinfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-609979393`(verbose) {
  (reg verbose:*) -+> V { var verbose:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg verbose1:*, reg verbose2:V, reg gcinfo:cls, reg r2:V |
    mkenv;
    st verbose = verbose;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    verbose1 = ld verbose;
    check L3() else D0();
  L2():
    r = dyn base(<lang gcinfo(verbose)>);
    goto L0(r);
  D0():
    deopt 2 [verbose1];
  L3():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    gcinfo = ldf gcinfo in base;
    r2 = dyn gcinfo(verbose2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}