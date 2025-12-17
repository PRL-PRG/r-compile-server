fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner84694862;
    st latex_tag = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner84694862(x, tag) {
  (reg x:*, reg tag:*) -+> V { var x:*, var tag:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg r2:V, reg c1:L, reg tag1:*, reg tag2:V, reg l:*, reg attr__:cls, reg r3:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st tag = tag;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L6() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    x3 = ld x;
    check L11() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L6():
    tag1 = ld tag;
    check L7() else D1();
  D1():
    deopt 5 [tag1];
  D4():
    deopt 15 [x3];
  L7():
    tag2 = force? tag1;
    checkMissing(tag2);
    l = ld x;
    attr__ = ldf `attr<-`;
    check L8() else D2();
  L11():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D2():
    deopt 8 [tag2, l, tag2];
  L8():
    r3 = dyn attr__(l, NULL, "latex_tag", tag2);
    check L9() else D3();
  D3():
    deopt 11 [tag2, r3];
  L9():
    st x = r3;
    goto L2();
  }
}