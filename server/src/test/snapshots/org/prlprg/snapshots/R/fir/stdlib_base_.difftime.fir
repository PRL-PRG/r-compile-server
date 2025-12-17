fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner723830835;
    st `.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner723830835(xx, units, cl) {
  (reg xx:*, reg units:*, reg cl:*) -+> V { var xx:*, var units:*, var cl:*, reg cl_isMissing:L, reg cl_orDefault:*, reg cl1:*, reg cl2:V, reg l:*, reg class__:cls, reg r:V, reg units1:*, reg units2:V, reg l1:*, reg attr__:cls, reg r1:V, reg xx1:*, reg xx2:V |
    mkenv;
    st xx = xx;
    st units = units;
    cl_isMissing = missing.0(cl);
    if cl_isMissing then L0("difftime") else L0(cl);
  L0(cl_orDefault):
    st cl = cl_orDefault;
    cl1 = ld cl;
    check L1() else D0();
  D0():
    deopt 0 [cl1];
  L1():
    cl2 = force? cl1;
    checkMissing(cl2);
    l = ld xx;
    class__ = ldf `class<-`;
    check L2() else D1();
  D1():
    deopt 3 [cl2, l, cl2];
  L2():
    r = dyn class__(l, NULL, cl2);
    check L3() else D2();
  D2():
    deopt 5 [cl2, r];
  L3():
    st xx = r;
    units1 = ld units;
    check L4() else D3();
  D3():
    deopt 7 [units1];
  L4():
    units2 = force? units1;
    checkMissing(units2);
    l1 = ld xx;
    attr__ = ldf `attr<-`;
    check L5() else D4();
  D4():
    deopt 10 [units2, l1, units2];
  L5():
    r1 = dyn attr__(l1, NULL, "units", units2);
    check L6() else D5();
  D5():
    deopt 13 [units2, r1];
  L6():
    st xx = r1;
    xx1 = ld xx;
    check L7() else D6();
  D6():
    deopt 15 [xx1];
  L7():
    xx2 = force? xx1;
    checkMissing(xx2);
    popenv;
    return xx2;
  }
}