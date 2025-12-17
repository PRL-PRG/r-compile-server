fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_po_files` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg cat:cls, reg r3:V, reg nrow1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r5:V, reg r6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg i7:I, reg r8:V, reg x6:*, reg x7:V, reg c2:L, reg i9:I, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r9:V, reg is_na:cls, reg r10:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg i18:I, reg r12:V, reg c4:cls, reg r13:V, reg i19:I, reg r14:V, reg cat1:cls, reg x10:*, reg x11:V, reg c5:L, reg x13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i20:*, reg i21:V, reg cols:*, reg cols1:V, reg __1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg cat2:cls, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    nrow = ldf nrow;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L10() else L0();
  L0():
    nrow1 = ldf nrow;
    check L14() else D4();
  L10():
    cat = ldf cat;
    check L11() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [1.0];
  L11():
    r3 = dyn cat("No errors\n");
    check L12() else D3();
  L14():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn nrow1(p1);
    check L15() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 13 [1.0, r5];
  L12():
    popenv;
    return r3;
  L15():
    r6 = `:`(1.0, r5);
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L16() else L7();
  L7():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L16():
    invisible.0();
    popenv;
    return i2;
  L2(i7, r8):
    c3 = `as.logical`(r8);
    if c3 then L25() else L4();
  L17():
    x6 = ld x;
    check L19() else D6();
  L18():
    r7 = dyn base(<lang `[`(x, i, 2)>);
    goto L2(i2, r7);
  D6():
    deopt 17 [i2, x6];
  L4():
    goto L6(i7, <int 1, 2, 3, 4, 5>);
  L6(i19, r14):
    st cols = r14;
    cat1 = ldf cat;
    check L30() else D10();
  L19():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    if c2 then L20() else L21(i2, x7);
  L25():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D10():
    deopt 36 [i19];
  L3(i11, dx1):
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(dx1);
    check L24() else D8();
  L5(i18, r12):
    goto L6(i18, r12);
  L20():
    dr = tryDispatchBuiltin.1("[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(i2, dr);
  L21(i9, x9):
    i12 = ld i;
    check L23() else D7();
  L26():
    c4 = ldf c in base;
    r13 = dyn c4(1, <int 3, 4, 5>);
    check L28() else D9();
  L27():
    r11 = dyn base1(1, <lang `:`(3.0, 5.0)>);
    goto L5(i7, r11);
  L30():
    p2 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c5 = `is.object`(x11);
      if c5 then L1() else L2(x11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x13):
      i20 = ld i;
      i21 = force? i20;
      cols = ld cols;
      cols1 = force? cols;
      __1 = ldf `[` in base;
      r15 = dyn __1(x13, i21, cols1);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn cat1[, sep](p2, "\n");
    check L31() else D11();
  D7():
    deopt 19 [i9, x9, i12];
  D8():
    deopt 24 [i11, r10];
  D9():
    deopt 31 [i7, r13];
  D11():
    deopt 40 [i19, r17];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L23():
    i13 = force? i12;
    __ = ldf `[` in base;
    r9 = dyn __(x9, i13, 2);
    goto L3(i9, r9);
  L24():
    goto L2(i11, r10);
  L28():
    goto L5(i7, r13);
  L31():
    cat2 = ldf cat;
    check L32() else D12();
  D12():
    deopt 42 [i19];
  L32():
    r18 = dyn cat2("\n");
    check L33() else D13();
  D13():
    deopt 44 [i19, r18];
  L33():
    goto L1(i19);
  }
}