fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1510954060;
    st `.transitiveExtends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1510954060(from, by, byExt, moreExts, strictBy) {
  (reg from:*, reg by:*, reg byExt:*, reg moreExts:*, reg strictBy:*) -+> V { var from:*, var by:*, var byExt:*, var moreExts:*, var strictBy:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg moreExts1:*, reg moreExts2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg moreExts3:*, reg moreExts4:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg moreExts5:*, reg moreExts6:V, reg c1:L, reg i6:I, reg moreExts8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r6:V, reg what:*, reg what1:V, reg c2:L, reg i12:I, reg what3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg __1:cls, reg r7:V, reg _combineExtends:cls, reg byExt1:*, reg byExt2:V, reg p:p(V +), reg toExt:*, reg toExt1:V, reg p1:p(V +), reg by1:*, reg by2:V, reg p2:p(V +), reg to:*, reg to1:V, reg p3:p(V +), reg strictBy1:*, reg strictBy2:V, reg p4:p(V +), reg r13:V, reg toExt2:*, reg toExt3:V, reg l1:*, reg c3:L, reg i18:I, reg toExt5:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i20:I, reg dx5:V, reg i21:*, reg i22:V, reg ____:cls, reg r14:V, reg moreExts9:*, reg moreExts10:V |
    mkenv;
    st from = from;
    st by = by;
    st byExt = byExt;
    st moreExts = moreExts;
    st strictBy = strictBy;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st what = r1;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    moreExts1 = ld moreExts;
    check L9() else D0();
  L8():
    r = dyn base(<sym moreExts>);
    goto L0(r);
  D0():
    deopt 2 [moreExts1];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L9():
    moreExts2 = force? moreExts1;
    checkMissing(moreExts2);
    names = ldf names in base;
    r2 = dyn names(moreExts2);
    check L10() else D1();
  L11():
    moreExts3 = ld moreExts;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym moreExts>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [moreExts3];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L14() else L6();
  L10():
    goto L0(r2);
  L13():
    moreExts4 = force? moreExts3;
    checkMissing(moreExts4);
    r5 = seq_along(moreExts4);
    goto L1(r5);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    moreExts5 = ld moreExts;
    check L15() else D3();
  L14():
    moreExts9 = ld moreExts;
    check L32() else D11();
  D3():
    deopt 11 [i2, moreExts5];
  D11():
    deopt 42 [moreExts9];
  L15():
    moreExts6 = force? moreExts5;
    checkMissing(moreExts6);
    c1 = `is.object`(moreExts6);
    if c1 then L16() else L17(i2, moreExts6);
  L32():
    moreExts10 = force? moreExts9;
    checkMissing(moreExts10);
    popenv;
    return moreExts10;
  L3(i8, dx1):
    st toExt = dx1;
    what = ld what;
    check L20() else D5();
  L16():
    dr = tryDispatchBuiltin.1("[[", moreExts6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(i2, dr);
  L17(i6, moreExts8):
    i9 = ld i;
    check L19() else D4();
  D4():
    deopt 13 [i6, moreExts8, i9];
  D5():
    deopt 17 [i8, what];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L19():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r6 = dyn __(moreExts8, i10);
    goto L3(i6, r6);
  L20():
    what1 = force? what;
    checkMissing(what1);
    c2 = `is.object`(what1);
    if c2 then L21() else L22(i8, what1);
  L4(i14, dx3):
    st to = dx3;
    _combineExtends = ldf `.combineExtends`;
    check L25() else D7();
  L21():
    dr2 = tryDispatchBuiltin.1("[[", what1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(i8, dr2);
  L22(i12, what3):
    i15 = ld i;
    check L24() else D6();
  D6():
    deopt 19 [i12, what3, i15];
  D7():
    deopt 24 [i14];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i8, dx2);
  L24():
    i16 = force? i15;
    __1 = ldf `[[` in base;
    r7 = dyn __1(what3, i16);
    goto L4(i12, r7);
  L25():
    p = prom<V +>{
      byExt1 = ld byExt;
      byExt2 = force? byExt1;
      checkMissing(byExt2);
      return byExt2;
    };
    p1 = prom<V +>{
      toExt = ld toExt;
      toExt1 = force? toExt;
      checkMissing(toExt1);
      return toExt1;
    };
    p2 = prom<V +>{
      by1 = ld by;
      by2 = force? by1;
      checkMissing(by2);
      return by2;
    };
    p3 = prom<V +>{
      to = ld to;
      to1 = force? to;
      checkMissing(to1);
      return to1;
    };
    p4 = prom<V +>{
      strictBy1 = ld strictBy;
      strictBy2 = force? strictBy1;
      checkMissing(strictBy2);
      return strictBy2;
    };
    r13 = dyn _combineExtends(p, p1, p2, p3, p4);
    check L26() else D8();
  D8():
    deopt 30 [i14, r13];
  L26():
    st toExt = r13;
    toExt2 = ld toExt;
    check L27() else D9();
  D9():
    deopt 32 [i14, toExt2];
  L27():
    toExt3 = force? toExt2;
    checkMissing(toExt3);
    l1 = ld moreExts;
    c3 = `is.object`(l1);
    if c3 then L28() else L29(i14, toExt3, l1);
  L5(i20, dx5):
    st moreExts = dx5;
    goto L2(i20);
  L28():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, toExt3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(i14, toExt3, dr4);
  L29(i18, toExt5, l3):
    i21 = ld i;
    check L31() else D10();
  D10():
    deopt 35 [i18, toExt5, l3, toExt3, i21];
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(i14, dx4);
  L31():
    i22 = force? i21;
    ____ = ldf `[[<-` in base;
    r14 = dyn ____(l3, toExt3, i22);
    goto L5(i18, r14);
  }
}