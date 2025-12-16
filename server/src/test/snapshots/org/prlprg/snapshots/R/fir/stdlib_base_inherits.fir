fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2069304448;
    st inherits = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2069304448(x, what, which) {
  (reg x:*, reg what:*, reg which:*) -+> V { var x:*, var what:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg what1:*, reg what2:V, reg which1:*, reg which2:V, reg inherits:cls, reg r2:V |
    mkenv;
    st x = x;
    st what = what;
    which_isMissing = missing.0(which);
    if which_isMissing then L0(FALSE) else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
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
    r = dyn base(<lang inherits(x, what, which)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    what1 = ld what;
    check L5() else D1();
  D1():
    deopt 4 [what1];
  L5():
    what2 = force? what1;
    checkMissing(what2);
    which1 = ld which;
    check L6() else D2();
  D2():
    deopt 6 [which1];
  L6():
    which2 = force? which1;
    checkMissing(which2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, what2, which2);
    check L7() else D3();
  D3():
    deopt 9 [r2];
  L7():
    goto L1(r2);
  }
}