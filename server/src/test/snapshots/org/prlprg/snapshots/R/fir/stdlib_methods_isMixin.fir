fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st isMixin = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg __:cls, reg r:V, reg cc:*, reg cc1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __1:cls, reg r1:V, reg r2:V, reg c1:L, reg i5:I, reg c2:V, reg val:*, reg val1:V, reg r3:V, reg c4:L, reg c5:V, reg c7:L, reg val2:*, reg val3:V, reg r5:V, reg val4:*, reg val5:V, reg r6:V |
    mkenv;
    st classDef = classDef;
    st val = 0.0;
    __ = ldf `@` in base;
    r = dyn __(<sym classDef>, <sym contains>);
    st cc = r;
    cc = ld cc;
    check L6() else D0();
  D0():
    deopt 6 [cc];
  L6():
    cc1 = force? cc;
    checkMissing(cc1);
    s = toForSeq(cc1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L5();
  L3():
    val4 = ld val;
    check L15() else D3();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    __1 = ldf `@` in base;
    r1 = dyn __1(<sym cl>, <sym distance>);
    r2 = `>`(r1, 1.0);
    c1 = `as.logical`(r2);
    if c1 then L1(i2, c1) else L8();
  L7():
    goto L3();
  D3():
    deopt 29 [val4];
  L1(i5, c2):
    c7 = `as.logical`(c2);
    if c7 then L11() else L2();
  L8():
    val = ld val;
    check L9() else D1();
  L15():
    val5 = force? val4;
    checkMissing(val5);
    r6 = `>`(val5, 1.0);
    popenv;
    return r6;
  D1():
    deopt 12 [i2, c1, val];
  L2():
    val2 = ld val;
    check L14() else D2();
  L9():
    val1 = force? val;
    checkMissing(val1);
    r3 = `>`(val1, 1.0);
    c4 = `as.logical`(r3);
    c5 = `||`(c1, c4);
    goto L1(i2, c5);
  L11():
    goto L3();
  D2():
    deopt 21 [i5, val2];
  L14():
    val3 = force? val2;
    checkMissing(val3);
    r5 = `+`(val3, 1.0);
    st val = r5;
    goto L0(i5);
  }
}