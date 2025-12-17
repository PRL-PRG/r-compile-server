fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4098760439;
    st `.transitiveSubclasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4098760439(by, to, toExt, moreExts, strictBy) {
  (reg by:*, reg to:*, reg toExt:*, reg moreExts:*, reg strictBy:*) -+> V { var by:*, var to:*, var toExt:*, var moreExts:*, var strictBy:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg moreExts1:*, reg moreExts2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg moreExts3:*, reg moreExts4:V, reg c1:L, reg i6:I, reg moreExts6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r3:V, reg _combineExtends:cls, reg byExt:*, reg byExt1:V, reg p:p(V +), reg toExt1:*, reg toExt2:V, reg p1:p(V +), reg by1:*, reg by2:V, reg p2:p(V +), reg to1:*, reg to2:V, reg p3:p(V +), reg strictBy1:*, reg strictBy2:V, reg p4:p(V +), reg r9:V, reg byExt2:*, reg byExt3:V, reg l1:*, reg c2:L, reg i12:I, reg byExt5:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg ____:cls, reg r10:V, reg moreExts7:*, reg moreExts8:V |
    mkenv;
    st by = by;
    st to = to;
    st toExt = toExt;
    st moreExts = moreExts;
    st strictBy = strictBy;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L5():
    moreExts1 = ld moreExts;
    check L7() else D0();
  L6():
    r = dyn base(<sym moreExts>);
    goto L0(r);
  D0():
    deopt 1 [moreExts1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L4();
  L7():
    moreExts2 = force? moreExts1;
    checkMissing(moreExts2);
    r2 = seq_along(moreExts2);
    goto L0(r2);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    moreExts3 = ld moreExts;
    check L9() else D1();
  L8():
    moreExts7 = ld moreExts;
    check L21() else D7();
  D1():
    deopt 4 [i2, moreExts3];
  D7():
    deopt 29 [moreExts7];
  L9():
    moreExts4 = force? moreExts3;
    checkMissing(moreExts4);
    c1 = `is.object`(moreExts4);
    if c1 then L10() else L11(i2, moreExts4);
  L21():
    moreExts8 = force? moreExts7;
    checkMissing(moreExts8);
    popenv;
    return moreExts8;
  L2(i8, dx1):
    st byExt = dx1;
    _combineExtends = ldf `.combineExtends`;
    check L14() else D3();
  L10():
    dr = tryDispatchBuiltin.1("[[", moreExts4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(i2, dr);
  L11(i6, moreExts6):
    i9 = ld i;
    check L13() else D2();
  D2():
    deopt 6 [i6, moreExts6, i9];
  D3():
    deopt 11 [i8];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L13():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r3 = dyn __(moreExts6, i10);
    goto L2(i6, r3);
  L14():
    p = prom<V +>{
      byExt = ld byExt;
      byExt1 = force? byExt;
      checkMissing(byExt1);
      return byExt1;
    };
    p1 = prom<V +>{
      toExt1 = ld toExt;
      toExt2 = force? toExt1;
      checkMissing(toExt2);
      return toExt2;
    };
    p2 = prom<V +>{
      by1 = ld by;
      by2 = force? by1;
      checkMissing(by2);
      return by2;
    };
    p3 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p4 = prom<V +>{
      strictBy1 = ld strictBy;
      strictBy2 = force? strictBy1;
      checkMissing(strictBy2);
      return strictBy2;
    };
    r9 = dyn _combineExtends(p, p1, p2, p3, p4);
    check L15() else D4();
  D4():
    deopt 17 [i8, r9];
  L15():
    st byExt = r9;
    byExt2 = ld byExt;
    check L16() else D5();
  D5():
    deopt 19 [i8, byExt2];
  L16():
    byExt3 = force? byExt2;
    checkMissing(byExt3);
    l1 = ld moreExts;
    c2 = `is.object`(l1);
    if c2 then L17() else L18(i8, byExt3, l1);
  L3(i14, dx3):
    st moreExts = dx3;
    goto L1(i14);
  L17():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, byExt3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(i8, byExt3, dr2);
  L18(i12, byExt5, l3):
    i15 = ld i;
    check L20() else D6();
  D6():
    deopt 22 [i12, byExt5, l3, byExt3, i15];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx2);
  L20():
    i16 = force? i15;
    ____ = ldf `[[<-` in base;
    r10 = dyn ____(l3, byExt3, i16);
    goto L3(i12, r10);
  }
}