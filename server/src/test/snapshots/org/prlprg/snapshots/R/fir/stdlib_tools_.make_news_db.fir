fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner678743321;
    st `.make_news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner678743321(x, bad, classes) {
  (reg x:*, reg bad:*, reg classes:*) -+> V { var x:*, var bad:*, reg bad_isMissing:L, reg bad_orDefault:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, reg data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg l:*, reg colnames:cls, reg r5:V, reg c1:L, reg r8:V, reg l2:*, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg r11:V, reg l4:*, reg dx1:V, reg ___:cls, reg r12:V, reg colnames__:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg bad1:*, reg bad2:V, reg c2:V, reg r16:V, reg c3:L, reg bad3:*, reg bad4:V, reg l5:*, reg attr__:cls, reg r17:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg classes1:*, reg classes2:V, reg c4:cls, reg r20:V, reg p1:p(V +), reg r22:V, reg l6:*, reg class__:cls, reg r23:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    bad_isMissing = missing.0(bad);
    if bad_isMissing then L0(NULL) else L0(bad);
  L0(bad_orDefault):
    st bad = bad_orDefault;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L1(NULL) else L1(classes);
  L1(classes_orDefault):
    st classes = classes_orDefault;
    data_frame = ldf `data.frame`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn data_frame[, `row.names`, stringsAsFactors](p, NULL, FALSE);
    check L8() else D1();
  D1():
    deopt 7 [r1];
  L8():
    st out = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r3):
    l = ld out;
    colnames = ldf colnames;
    check L12() else D3();
  L9():
    c = ldf c in base;
    r4 = dyn c("Version", "Date", "Category", "Text");
    check L11() else D2();
  L10():
    r2 = dyn base("Version", "Date", "Category", "Text");
    goto L2(r2);
  D2():
    deopt 16 [r4];
  D3():
    deopt 18 [r3, l, r3];
  L11():
    goto L2(r4);
  L12():
    r5 = dyn colnames(r3, NULL);
    check L13() else D4();
  D4():
    deopt 20 [r3, l, r3, r5];
  L13():
    c1 = `is.object`(r5);
    if c1 then L14() else L15(r3, l, r5);
  L3(r11, l4, dx1):
    colnames__ = ldf `colnames<-`;
    check L17() else D5();
  L14():
    dr = tryDispatchBuiltin.0("[<-", r5, r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(r3, l, dr);
  L15(r8, l2, r9):
    ___ = ldf `[<-` in base;
    r12 = dyn ___(r9, r3, <int 1, 2, 3, 4>);
    goto L3(r8, l2, r12);
  D5():
    deopt 25 [r11, l4, dx1];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(r3, l, dx);
  L17():
    r13 = dyn colnames__(l4, NULL, dx1);
    check L18() else D6();
  D6():
    deopt 27 [r11, r13];
  L18():
    st out = r13;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L4(r15):
    r16 = `!`(r15);
    c3 = `as.logical`(r16);
    if c3 then L22() else L5();
  L19():
    bad1 = ld bad;
    check L21() else D7();
  L20():
    r14 = dyn base1(<sym bad>);
    goto L4(r14);
  D7():
    deopt 30 [bad1];
  L5():
    goto L6();
  L6():
    unique = ldf unique;
    check L27() else D11();
  L21():
    bad2 = force? bad1;
    checkMissing(bad2);
    c2 = `==`(bad2, NULL);
    goto L4(c2);
  L22():
    bad3 = ld bad;
    check L23() else D8();
  D8():
    deopt 34 [bad3];
  D11():
    deopt 45 [];
  L23():
    bad4 = force? bad3;
    checkMissing(bad4);
    l5 = ld out;
    attr__ = ldf `attr<-`;
    check L24() else D9();
  L27():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      c4 = ldf c in base;
      r20 = dyn c4(classes2, "news_db", "data.frame");
      goto L0(r20);
    L2():
      r18 = dyn base2(<sym classes>, "news_db", "data.frame");
      goto L0(r18);
    };
    r22 = dyn unique(p1);
    check L28() else D12();
  D9():
    deopt 37 [bad4, l5, bad4];
  D12():
    deopt 47 [r22];
  L24():
    r17 = dyn attr__(l5, NULL, "bad", bad4);
    check L25() else D10();
  L28():
    l6 = ld out;
    class__ = ldf `class<-`;
    check L29() else D13();
  D10():
    deopt 40 [bad4, r17];
  D13():
    deopt 49 [r22, l6, r22];
  L25():
    st out = r17;
    goto L6();
  L29():
    r23 = dyn class__(l6, NULL, r22);
    check L30() else D14();
  D14():
    deopt 51 [r22, r23];
  L30():
    st out = r23;
    out = ld out;
    check L31() else D15();
  D15():
    deopt 53 [out];
  L31():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  }
}