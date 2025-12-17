fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4001578419;
    st `.onLoad` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4001578419(libname, pkgname) {
  (reg libname:*, reg pkgname:*) -+> V { var libname:*, var pkgname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg list:cls, reg r5:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg op_stats:*, reg op_stats1:V, reg names:cls, reg r8:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg _Options:*, reg _Options1:V, reg names1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg toset:*, reg toset1:V, reg any:cls, reg r18:V, reg c1:L, reg options:cls, reg op_stats2:*, reg op_stats3:V, reg c2:L, reg op_stats5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg toset2:*, reg toset3:V, reg __:cls, reg r19:V, reg p2:p(V +), reg r21:V |
    mkenv;
    st libname = libname;
    st pkgname = pkgname;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st `op.stats` = r1;
    _in_ = ldf `%in%`;
    check L10() else D2();
  L4():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base[contrasts, `na.action`, `show.coef.Pvalues`, `show.signif.stars`, `str.dendrogram.last`, `ts.eps`, `ts.S.compat`](<lang c(unordered="contr.treatment", ordered="contr.poly")>, "na.omit", TRUE, TRUE, "`", 1.0E-5, FALSE);
    goto L0(r);
  D2():
    deopt 27 [];
  L1(r3):
    list = ldf list in base;
    r5 = dyn list(r3, "na.omit", TRUE, TRUE, "`", 1.0E-5, FALSE);
    check L9() else D1();
  L6():
    c = ldf c in base;
    r4 = dyn c("contr.treatment", "contr.poly");
    check L8() else D0();
  L7():
    r2 = dyn base1[unordered, ordered]("contr.treatment", "contr.poly");
    goto L1(r2);
  L10():
    p = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      op_stats = ld `op.stats`;
      op_stats1 = force? op_stats;
      checkMissing(op_stats1);
      names = ldf names in base;
      r8 = dyn names(op_stats1);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym op.stats>);
      goto L0(r6);
    };
    p1 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      _Options = ld `.Options`;
      _Options1 = force? _Options;
      checkMissing(_Options1);
      names1 = ldf names in base;
      r12 = dyn names1(_Options1);
      goto L0(r12);
    L2():
      r10 = dyn base3(<sym .Options>);
      goto L0(r10);
    };
    r14 = dyn _in_(p, p1);
    check L11() else D3();
  D0():
    deopt 9 [r4];
  D1():
    deopt 24 [r5];
  D3():
    deopt 30 [r14];
  L8():
    goto L1(r4);
  L9():
    goto L0(r5);
  L11():
    r15 = `!`(r14);
    st toset = r15;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L12() else L13();
  L2(r17):
    c1 = `as.logical`(r17);
    if c1 then L16() else L3();
  L12():
    toset = ld toset;
    check L14() else D4();
  L13():
    r16 = dyn base4(<sym toset>);
    goto L2(r16);
  D4():
    deopt 35 [toset];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L14():
    toset1 = force? toset;
    checkMissing(toset1);
    any = ldf any in base;
    r18 = dyn any(toset1);
    check L15() else D5();
  L16():
    options = ldf options;
    check L17() else D6();
  D5():
    deopt 38 [r18];
  D6():
    deopt 40 [];
  L15():
    goto L2(r18);
  L17():
    p2 = prom<V +>{
      op_stats2 = ld `op.stats`;
      op_stats3 = force? op_stats2;
      checkMissing(op_stats3);
      c2 = `is.object`(op_stats3);
      if c2 then L1() else L2(op_stats3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", op_stats3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(op_stats5):
      toset2 = ld toset;
      toset3 = force? toset2;
      __ = ldf `[` in base;
      r19 = dyn __(op_stats5, toset3);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r21 = dyn options(p2);
    check L18() else D7();
  D7():
    deopt 42 [r21];
  L18():
    popenv;
    return r21;
  }
}