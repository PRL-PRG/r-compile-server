fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3218364206;
    st `.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3218364206(xx, cl) {
  (reg xx:*, reg cl:*) -+> V { var xx:*, var cl:*, reg cl_isMissing:L, reg cl_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg xx1:*, reg xx2:V, reg cl1:*, reg cl2:V, reg class__:cls, reg r2:V |
    mkenv;
    st xx = xx;
    cl_isMissing = missing.0(cl);
    if cl_isMissing then L0("Date") else L0(cl);
  L0(cl_orDefault):
    st cl = cl_orDefault;
    sym = ldf `class<-`;
    base = ldf `class<-` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    xx1 = ld xx;
    check L4() else D0();
  L3():
    r = dyn base(<sym xx>, <sym cl>);
    goto L1(r);
  D0():
    deopt 2 [xx1];
  L4():
    xx2 = force? xx1;
    checkMissing(xx2);
    cl1 = ld cl;
    check L5() else D1();
  D1():
    deopt 4 [cl1];
  L5():
    cl2 = force? cl1;
    checkMissing(cl2);
    class__ = ldf `class<-` in base;
    r2 = dyn class__(xx2, cl2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}