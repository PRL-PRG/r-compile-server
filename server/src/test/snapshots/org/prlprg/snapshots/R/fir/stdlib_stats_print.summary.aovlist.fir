fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.summary.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg nn:*, reg nn1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg cat:cls, reg i5:*, reg i6:V, reg p:p(V +), reg r4:V, reg print:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i7:*, reg i8:V, reg __:cls, reg r5:V, reg p1:p(V +), reg ddd1:dots?, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x8:*, reg x9:V, reg invisible:cls, reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st nn = r1;
    nn = ld nn;
    check L8() else D2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [nn];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L7() else D1();
  L8():
    nn1 = force? nn;
    checkMissing(nn1);
    s = toForSeq(nn1);
    l = length(s);
    i = 0;
    goto L1(i);
  D1():
    deopt 5 [r2];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L9() else L2();
  L7():
    goto L0(r2);
  L2():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    cat = ldf cat;
    check L10() else D3();
  L9():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D3():
    deopt 10 [i2];
  L3(r9):
    popenv;
    return r9;
  L10():
    p = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r4 = dyn cat[, , , sep]("\n", p, "\n", "");
    check L11() else D4();
  L14():
    x8 = ld x;
    check L16() else D7();
  L15():
    r8 = dyn base1(<sym x>);
    goto L3(r8);
  D4():
    deopt 16 [i2, r4];
  D7():
    deopt 27 [x8];
  L11():
    print = ldf print;
    check L12() else D5();
  L16():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r10 = dyn invisible(x9);
    check L17() else D8();
  D5():
    deopt 18 [i2];
  D8():
    deopt 30 [r10];
  L12():
    p1 = prom<V +>{
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
      i7 = ld i;
      i8 = force? i7;
      __ = ldf `[[` in base;
      r5 = dyn __(x7, i8);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r7 = dyn print[, `...`](p1, ddd1);
    check L13() else D6();
  L17():
    goto L3(r10);
  D6():
    deopt 21 [i2, r7];
  L13():
    goto L1(i2);
  }
}