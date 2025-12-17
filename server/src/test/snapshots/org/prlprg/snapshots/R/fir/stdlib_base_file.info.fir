fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2005936647;
    st `file.info` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2005936647(`...`, extra_cols) {
  (reg ddd:dots, reg extra_cols:*) -+> V { var `...`:dots?, var extra_cols:*, reg extra_cols_isMissing:L, reg extra_cols_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg ddd1:dots?, reg r4:V, reg extra_cols1:*, reg extra_cols2:V, reg file_info:cls, reg r5:V, reg _POSIXct:cls, reg res:*, reg res1:V, reg c1:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p:p(V +), reg r8:V, reg l:*, reg c2:L, reg r10:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg _POSIXct1:cls, reg res4:*, reg res5:V, reg c3:L, reg res7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg p1:p(V +), reg r16:V, reg l3:*, reg c4:L, reg r18:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r21:V, reg _POSIXct2:cls, reg res8:*, reg res9:V, reg c5:L, reg res11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg p2:p(V +), reg r24:V, reg l6:*, reg c6:L, reg r26:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r29:V, reg l9:*, reg class__:cls, reg r30:V, reg fn:*, reg fn1:V, reg l10:*, reg attr__:cls, reg r31:V, reg res12:*, reg res13:V |
    mkenv;
    st `...` = ddd;
    extra_cols_isMissing = missing.0(extra_cols);
    if extra_cols_isMissing then L0(TRUE) else L0(extra_cols);
  L0(extra_cols_orDefault):
    st extra_cols = extra_cols_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    st res = r1;
    _POSIXct = ldf `.POSIXct`;
    check L11() else D4();
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang file.info(`<-`(fn, c(...)), extra_cols)>);
    goto L1(r);
  D4():
    deopt 14 [];
  L2(r3):
    st fn = r3;
    extra_cols1 = ld extra_cols;
    check L9() else D2();
  L5():
    c = ldf c;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym ...>);
    goto L2(r2);
  L11():
    p = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c1 = `is.object`(res1);
      if c1 then L1() else L2(res1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", res1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res3):
      r6 = `$`(res3, <sym mtime>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn _POSIXct(p);
    check L12() else D5();
  D0():
    deopt 4 [];
  D2():
    deopt 8 [extra_cols1];
  D5():
    deopt 16 [r8];
  L7():
    ddd1 = ld `...`;
    r4 = dyn c[`...`](ddd1);
    check L8() else D1();
  L9():
    extra_cols2 = force? extra_cols1;
    checkMissing(extra_cols2);
    file_info = ldf `file.info` in base;
    r5 = dyn file_info(r3, extra_cols2);
    check L10() else D3();
  L12():
    l = ld res;
    c2 = `is.object`(l);
    if c2 then L14() else L15(r8, l);
  D1():
    deopt 6 [r4];
  D3():
    deopt 11 [r5];
  L8():
    goto L2(r4);
  L10():
    goto L1(r5);
  L13(dx3):
    st res = dx3;
    _POSIXct1 = ldf `.POSIXct`;
    check L17() else D6();
  L14():
    dr2 = tryDispatchBuiltin.0("$<-", l, r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(r8, dr2);
  L15(r10, l2):
    r13 = `$<-`(l2, <sym mtime>, r8);
    goto L13(r13);
  D6():
    deopt 21 [];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L17():
    p1 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      c3 = `is.object`(res5);
      if c3 then L1() else L2(res5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", res5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(res7):
      r14 = `$`(res7, <sym ctime>);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn _POSIXct1(p1);
    check L18() else D7();
  D7():
    deopt 23 [r16];
  L18():
    l3 = ld res;
    c4 = `is.object`(l3);
    if c4 then L20() else L21(r16, l3);
  L19(dx7):
    st res = dx7;
    _POSIXct2 = ldf `.POSIXct`;
    check L23() else D8();
  L20():
    dr6 = tryDispatchBuiltin.0("$<-", l3, r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21(r16, dr6);
  L21(r18, l5):
    r21 = `$<-`(l5, <sym ctime>, r16);
    goto L19(r21);
  D8():
    deopt 28 [];
  L22():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(dx6);
  L23():
    p2 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      c5 = `is.object`(res9);
      if c5 then L1() else L2(res9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", res9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(res11):
      r22 = `$`(res11, <sym atime>);
      goto L0(r22);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r24 = dyn _POSIXct2(p2);
    check L24() else D9();
  D9():
    deopt 30 [r24];
  L24():
    l6 = ld res;
    c6 = `is.object`(l6);
    if c6 then L26() else L27(r24, l6);
  L25(dx11):
    st res = dx11;
    l9 = ld res;
    class__ = ldf `class<-`;
    check L29() else D10();
  L26():
    dr10 = tryDispatchBuiltin.0("$<-", l6, r24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L28() else L27(r24, dr10);
  L27(r26, l8):
    r29 = `$<-`(l8, <sym atime>, r24);
    goto L25(r29);
  D10():
    deopt 37 ["data.frame", l9, "data.frame"];
  L28():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L25(dx10);
  L29():
    r30 = dyn class__(l9, NULL, "data.frame");
    check L30() else D11();
  D11():
    deopt 39 ["data.frame", r30];
  L30():
    st res = r30;
    fn = ld fn;
    check L31() else D12();
  D12():
    deopt 41 [fn];
  L31():
    fn1 = force? fn;
    checkMissing(fn1);
    l10 = ld res;
    attr__ = ldf `attr<-`;
    check L32() else D13();
  D13():
    deopt 44 [fn1, l10, fn1];
  L32():
    r31 = dyn attr__(l10, NULL, "row.names", fn1);
    check L33() else D14();
  D14():
    deopt 47 [fn1, r31];
  L33():
    st res = r31;
    res12 = ld res;
    check L34() else D15();
  D15():
    deopt 49 [res12];
  L34():
    res13 = force? res12;
    checkMissing(res13);
    popenv;
    return res13;
  }
}