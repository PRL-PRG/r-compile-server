fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `type.convert.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg type_convert:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r3:V, reg p:p(V +), reg ddd1:dots?, reg r5:V, reg l1:*, reg c2:L, reg i8:I, reg r7:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r10:V, reg x8:*, reg x9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L3();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L0(r2);
  L3():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    type_convert = ldf `type.convert`;
    check L8() else D1();
  L7():
    x8 = ld x;
    check L14() else D4();
  D1():
    deopt 5 [i2];
  D4():
    deopt 17 [x8];
  L8():
    p = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c1 = `is.object`(x5);
      if c1 then L1() else L2(x5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x7):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r3 = dyn __(x7, i6);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r5 = dyn type_convert[, `...`](p, ddd1);
    check L9() else D2();
  L14():
    x9 = force? x8;
    checkMissing(x9);
    popenv;
    return x9;
  D2():
    deopt 8 [i2, r5];
  L9():
    l1 = ld x;
    c2 = `is.object`(l1);
    if c2 then L10() else L11(i2, r5, l1);
  L2(i10, dx3):
    st x = dx3;
    goto L1(i10);
  L10():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(i2, r5, dr2);
  L11(i8, r7, l3):
    i11 = ld i;
    check L13() else D3();
  D3():
    deopt 10 [i8, r7, l3, r5, i11];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(i2, dx2);
  L13():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r10 = dyn ____(l3, r5, i12);
    goto L2(i8, r10);
  }
}