fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2275580337;
    st `.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2275580337(xx, tz, cl) {
  (reg xx:*, reg tz:*, reg cl:*) -+> V { var xx:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var cl:*, reg cl_isMissing:L, reg cl_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg cl1:*, reg cl2:V, reg l:*, reg class__:cls, reg r4:V, reg tz1:*, reg tz2:V, reg l1:*, reg attr__:cls, reg r5:V, reg xx1:*, reg xx2:V |
    mkenv;
    st xx = xx;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0(NULL) else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    cl_isMissing = missing.0(cl);
    if cl_isMissing then L1() else L2(cl);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("POSIXct", "POSIXt");
      goto L0(r2);
    L2():
      r = dyn base("POSIXct", "POSIXt");
      goto L0(r);
    };
    goto L2(p);
  L2(cl_orDefault):
    st cl = cl_orDefault;
    cl1 = ld cl;
    check L3() else D0();
  D0():
    deopt 0 [cl1];
  L3():
    cl2 = force? cl1;
    checkMissing(cl2);
    l = ld xx;
    class__ = ldf `class<-`;
    check L4() else D1();
  D1():
    deopt 3 [cl2, l, cl2];
  L4():
    r4 = dyn class__(l, NULL, cl2);
    check L5() else D2();
  D2():
    deopt 5 [cl2, r4];
  L5():
    st xx = r4;
    tz1 = ld tz;
    check L6() else D3();
  D3():
    deopt 7 [tz1];
  L6():
    tz2 = force? tz1;
    checkMissing(tz2);
    l1 = ld xx;
    attr__ = ldf `attr<-`;
    check L7() else D4();
  D4():
    deopt 10 [tz2, l1, tz2];
  L7():
    r5 = dyn attr__(l1, NULL, "tzone", tz2);
    check L8() else D5();
  D5():
    deopt 13 [tz2, r5];
  L8():
    st xx = r5;
    xx1 = ld xx;
    check L9() else D6();
  D6():
    deopt 15 [xx1];
  L9():
    xx2 = force? xx1;
    checkMissing(xx2);
    popenv;
    return xx2;
  }
}