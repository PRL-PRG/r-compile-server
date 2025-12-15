fun main() {
  () -+> V { reg r:cls, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg helper:cls, reg i5:*, reg i6:V, reg p:p(V +), reg r2:V, reg c1:L, reg x1:*, reg x2:V, reg i11:*, reg i12:V, reg r4:V, reg x3:*, reg x4:V |
    mkenv;
    r = clos `inner-1611851170`;
    st helper = r;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3, 4, 5>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L5();
  L1():
    x3 = ld x;
    check L13() else D4();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    helper = ldf helper;
    check L6() else D0();
  D0():
    deopt 11 [i2];
  D4():
    deopt 27 [x3];
  L6():
    p = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r2 = dyn helper(p);
    check L7() else D1();
  L13():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D1():
    deopt 13 [i2, r2];
  L7():
    c1 = `as.logical`(r2);
    if c1 then L8() else L3();
  L3():
    x1 = ld x;
    check L11() else D2();
  L8():
    goto L1();
  D2():
    deopt 18 [i2, x1];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    i11 = ld i;
    check L12() else D3();
  D3():
    deopt 19 [i2, x2, i11];
  L12():
    i12 = force? i11;
    checkMissing(i12);
    r4 = `+`(x2, i12);
    st x = r4;
    goto L2(i2);
  }
}
fun `inner-1611851170`(val) {
  (reg val:*) -+> V { var val:*, reg val1:*, reg val2:V, reg r:V, reg c:L |
    mkenv;
    st val = val;
    val1 = ld val;
    check L2() else D0();
  D0():
    deopt 0 [val1];
  L2():
    val2 = force? val1;
    checkMissing(val2);
    r = `==`(val2, 3.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    popenv;
    return FALSE;
  L3():
    popenv;
    return TRUE;
  }
}