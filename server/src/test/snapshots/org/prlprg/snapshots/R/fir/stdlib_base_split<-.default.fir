fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner53362663;
    st `.default` = r;
    st split = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner53362663(x, f, drop, `...`, value) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots, reg value:*) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, var value:*, reg split:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg p:p(V +), reg f1:*, reg f2:V, reg p1:p(V +), reg drop1:*, reg drop2:V, reg p2:p(V +), reg ddd1:dots?, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg value1:*, reg value2:V, reg length:cls, reg r9:V, reg ix:*, reg ix1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg j:*, reg j1:V, reg n:*, reg n1:V, reg __:cls, reg r10:V, reg r11:V, reg value3:*, reg value4:V, reg c1:L, reg i6:I, reg value6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j2:*, reg j3:V, reg __1:cls, reg r12:V, reg l1:*, reg c2:L, reg i10:I, reg dx3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i12:I, reg dx7:V, reg i13:*, reg i14:V, reg ___:cls, reg r13:V, reg x4:*, reg x5:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    st value = value;
    split = ldf split;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r2 = seq_along(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p2 = prom<V +>{
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      return drop2;
    };
    ddd1 = ld `...`;
    r6 = dyn split[, , drop, `...`](p, p1, p2, ddd1);
    check L7() else D1();
  D1():
    deopt 7 [r6];
  L7():
    st ix = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r8):
    st n = r8;
    st j = 0.0;
    ix = ld ix;
    check L12() else D4();
  L8():
    value1 = ld value;
    check L10() else D2();
  L9():
    r7 = dyn base1(<sym value>);
    goto L1(r7);
  D2():
    deopt 11 [value1];
  D4():
    deopt 19 [ix];
  L10():
    value2 = force? value1;
    checkMissing(value2);
    length = ldf length in base;
    r9 = dyn length(value2);
    check L11() else D3();
  L12():
    ix1 = force? ix;
    checkMissing(ix1);
    s = toForSeq(ix1);
    l = length(s);
    i = 0;
    goto L2(i);
  D3():
    deopt 14 [r9];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L5();
  L11():
    goto L1(r9);
  L5():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    j = ld j;
    check L14() else D5();
  L13():
    x4 = ld x;
    check L26() else D11();
  D5():
    deopt 22 [i2, j];
  D11():
    deopt 44 [x4];
  L14():
    j1 = force? j;
    checkMissing(j1);
    n = ld n;
    check L15() else D6();
  L26():
    x5 = force? x4;
    checkMissing(x5);
    popenv;
    return x5;
  D6():
    deopt 24 [i2, n];
  L15():
    n1 = force? n;
    checkMissing(n1);
    __ = ldf `%%` in base;
    r10 = dyn __(j1, n1);
    check L16() else D7();
  D7():
    deopt 27 [i2, r10];
  L16():
    r11 = `+`(r10, 1.0);
    st j = r11;
    value3 = ld value;
    check L17() else D8();
  D8():
    deopt 31 [i2, value3];
  L17():
    value4 = force? value3;
    checkMissing(value4);
    c1 = `is.object`(value4);
    if c1 then L18() else L19(i2, value4);
  L3(i8, dx1):
    l1 = ld x;
    c2 = `is.object`(l1);
    if c2 then L22() else L23(i8, dx1, l1);
  L18():
    dr = tryDispatchBuiltin.1("[[", value4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(i2, dr);
  L19(i6, value6):
    j2 = ld j;
    check L21() else D9();
  D9():
    deopt 33 [i6, value6, j2];
  L4(i12, dx7):
    st x = dx7;
    goto L2(i12);
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L21():
    j3 = force? j2;
    __1 = ldf `[[` in base;
    r12 = dyn __1(value6, j3);
    goto L3(i6, r12);
  L22():
    dr2 = tryDispatchBuiltin.0("[<-", l1, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(i8, dx1, dr2);
  L23(i10, dx3, l3):
    i13 = ld i;
    check L25() else D10();
  D10():
    deopt 37 [i10, dx3, l3, dx1, i13];
  L24():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L4(i8, dx5);
  L25():
    i14 = force? i13;
    ___ = ldf `[<-` in base;
    r13 = dyn ___(l3, dx1, i14);
    goto L4(i10, r13);
  }
}