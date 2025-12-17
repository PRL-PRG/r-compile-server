fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1418141903;
    st tagged = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1418141903(x, tag, srcref) {
  (reg x:*, reg tag:*, reg srcref:*) -+> V { var x:*, var tag:*, var srcref:*, reg srcref_isMissing:L, reg srcref_orDefault:*, reg tag1:*, reg tag2:V, reg l:*, reg attr__:cls, reg r:V, reg srcref1:*, reg srcref2:V, reg l1:*, reg attr__1:cls, reg r1:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st tag = tag;
    srcref_isMissing = missing.0(srcref);
    if srcref_isMissing then L0(NULL) else L0(srcref);
  L0(srcref_orDefault):
    st srcref = srcref_orDefault;
    tag1 = ld tag;
    check L1() else D0();
  D0():
    deopt 0 [tag1];
  L1():
    tag2 = force? tag1;
    checkMissing(tag2);
    l = ld x;
    attr__ = ldf `attr<-`;
    check L2() else D1();
  D1():
    deopt 3 [tag2, l, tag2];
  L2():
    r = dyn attr__(l, NULL, "Rd_tag", tag2);
    check L3() else D2();
  D2():
    deopt 6 [tag2, r];
  L3():
    st x = r;
    srcref1 = ld srcref;
    check L4() else D3();
  D3():
    deopt 8 [srcref1];
  L4():
    srcref2 = force? srcref1;
    checkMissing(srcref2);
    l1 = ld x;
    attr__1 = ldf `attr<-`;
    check L5() else D4();
  D4():
    deopt 11 [srcref2, l1, srcref2];
  L5():
    r1 = dyn attr__1(l1, NULL, "srcref", srcref2);
    check L6() else D5();
  D5():
    deopt 14 [srcref2, r1];
  L6():
    st x = r1;
    x1 = ld x;
    check L7() else D6();
  D6():
    deopt 16 [x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}