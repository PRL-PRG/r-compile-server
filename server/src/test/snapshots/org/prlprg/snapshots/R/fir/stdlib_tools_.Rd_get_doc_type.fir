fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_doc_type` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg _Rd_get_metadata:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r9:V, reg c1:cls, reg r10:V, reg c2:L, reg r12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r13:V |
    mkenv;
    st x = x;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c2 = `is.object`(r1);
    if c2 then L16() else L17(r1);
  L3():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `$`(attr(x, "meta"), docType)>, <lang .Rd_get_metadata(x, "docType")>, "");
    goto L0(r);
  L1(r3):
    c = `is.object`(r3);
    if c then L10() else L11(r3);
  L2(dx3):
    popenv;
    return dx3;
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym x>, "meta");
    goto L1(r2);
  L16():
    dr2 = tryDispatchBuiltin.1("[", r1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(r12):
    __ = ldf `[` in base;
    r13 = dyn __(r12, 1);
    goto L2(r13);
  D0():
    deopt 4 [x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "meta");
    check L8() else D1();
  L9(dx1):
    _Rd_get_metadata = ldf `.Rd_get_metadata`;
    check L13() else D2();
  L10():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r6):
    r7 = `$`(r6, <sym docType>);
    goto L9(r7);
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  D1():
    deopt 8 [r4];
  D2():
    deopt 11 [];
  L8():
    goto L1(r4);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn _Rd_get_metadata(p, "docType");
    check L14() else D3();
  D3():
    deopt 14 [r9];
  L14():
    c1 = ldf c in base;
    r10 = dyn c1(dx1, r9, "");
    check L15() else D4();
  D4():
    deopt 17 [r10];
  L15():
    goto L0(r10);
  }
}