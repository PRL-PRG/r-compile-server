fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner904552562;
    st `.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner904552562(x, mheader, mfooter) {
  (reg x:*, reg mheader:*, reg mfooter:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var mheader:*, reg mheader_isMissing:L, reg mheader_orDefault:*, var mfooter:*, reg mfooter_isMissing:L, reg mfooter_orDefault:*, reg l:*, reg class__:cls, reg r4:V, reg _is_not_nonempty_text:cls, reg mheader1:*, reg mheader2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg c:L, reg paste:cls, reg mheader3:*, reg mheader4:V, reg p2:p(V +), reg r9:V, reg l1:*, reg attr__:cls, reg r10:V, reg _is_not_nonempty_text1:cls, reg mfooter1:*, reg mfooter2:V, reg p3:p(V +), reg r13:V, reg r14:V, reg c1:L, reg paste1:cls, reg mfooter3:*, reg mfooter4:V, reg p4:p(V +), reg r16:V, reg l2:*, reg attr__1:cls, reg r17:V, reg x1:*, reg x2:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    mheader_isMissing = missing.0(mheader);
    if mheader_isMissing then L2(NULL) else L2(mheader);
  L2(mheader_orDefault):
    st mheader = mheader_orDefault;
    mfooter_isMissing = missing.0(mfooter);
    if mfooter_isMissing then L3(NULL) else L3(mfooter);
  L3(mfooter_orDefault):
    st mfooter = mfooter_orDefault;
    l = ld x;
    class__ = ldf `class<-`;
    check L8() else D0();
  D0():
    deopt 3 ["bibentry", l, "bibentry"];
  L8():
    r4 = dyn class__(l, NULL, "bibentry");
    check L9() else D1();
  D1():
    deopt 5 ["bibentry", r4];
  L9():
    st x = r4;
    _is_not_nonempty_text = ldf `.is_not_nonempty_text`;
    check L10() else D2();
  D2():
    deopt 8 [];
  L10():
    p1 = prom<V +>{
      mheader1 = ld mheader;
      mheader2 = force? mheader1;
      checkMissing(mheader2);
      return mheader2;
    };
    r6 = dyn _is_not_nonempty_text(p1);
    check L11() else D3();
  D3():
    deopt 10 [r6];
  L11():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L12() else L4();
  L4():
    goto L5();
  L5():
    _is_not_nonempty_text1 = ldf `.is_not_nonempty_text`;
    check L18() else D8();
  L12():
    paste = ldf paste;
    check L13() else D4();
  D4():
    deopt 13 [];
  D8():
    deopt 27 [];
  L13():
    p2 = prom<V +>{
      mheader3 = ld mheader;
      mheader4 = force? mheader3;
      checkMissing(mheader4);
      return mheader4;
    };
    r9 = dyn paste[, collapse](p2, "\n");
    check L14() else D5();
  L18():
    p3 = prom<V +>{
      mfooter1 = ld mfooter;
      mfooter2 = force? mfooter1;
      checkMissing(mfooter2);
      return mfooter2;
    };
    r13 = dyn _is_not_nonempty_text1(p3);
    check L19() else D9();
  D5():
    deopt 17 [r9];
  D9():
    deopt 29 [r13];
  L14():
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L15() else D6();
  L19():
    r14 = `!`(r13);
    c1 = `as.logical`(r14);
    if c1 then L20() else L6();
  D6():
    deopt 19 [r9, l1, r9];
  L6():
    goto L7();
  L7():
    x1 = ld x;
    check L26() else D14();
  L15():
    r10 = dyn attr__(l1, NULL, "mheader", r9);
    check L16() else D7();
  L20():
    paste1 = ldf paste;
    check L21() else D10();
  D7():
    deopt 22 [r9, r10];
  D10():
    deopt 32 [];
  D14():
    deopt 45 [x1];
  L16():
    st x = r10;
    goto L5();
  L21():
    p4 = prom<V +>{
      mfooter3 = ld mfooter;
      mfooter4 = force? mfooter3;
      checkMissing(mfooter4);
      return mfooter4;
    };
    r16 = dyn paste1[, collapse](p4, "\n");
    check L22() else D11();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D11():
    deopt 36 [r16];
  L22():
    l2 = ld x;
    attr__1 = ldf `attr<-`;
    check L23() else D12();
  D12():
    deopt 38 [r16, l2, r16];
  L23():
    r17 = dyn attr__1(l2, NULL, "mfooter", r16);
    check L24() else D13();
  D13():
    deopt 41 [r16, r17];
  L24():
    st x = r17;
    goto L7();
  }
}