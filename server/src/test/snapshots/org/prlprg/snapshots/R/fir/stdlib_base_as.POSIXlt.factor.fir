fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.POSIXlt.factor` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_POSIXlt:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg names:cls, reg r7:V, reg l:*, reg c:L, reg r10:V, reg l3:*, reg r11:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg r14:V, reg l6:*, reg r15:V, reg dx1:V, reg r16:V, reg names__:cls, reg r17:V, reg c1:L, reg r19:V, reg l8:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    ddd1 = ld `...`;
    r4 = dyn as_POSIXlt[, `...`](p, ddd1);
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    st y = r4;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r6):
    l = ld y;
    c = `is.object`(l);
    if c then L8() else L9(r6, l, r6, l);
  L3():
    x3 = ld x;
    check L5() else D2();
  L4():
    r5 = dyn base1(<sym x>);
    goto L0(r5);
  D2():
    deopt 8 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r7 = dyn names(x4);
    check L6() else D3();
  L7(r14, l6, r15, dx1):
    names__ = ldf `names<-`;
    check L11() else D4();
  L8():
    dr = tryDispatchBuiltin.1("$", l);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(r6, l, r6, dr);
  L9(r10, l3, r11, l4):
    r16 = `$`(l4, <sym year>);
    goto L7(r10, l3, r11, r16);
  D3():
    deopt 11 [r7];
  D4():
    deopt 16 [r14, l6, dx1, r15];
  L6():
    goto L0(r7);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(r6, l, r6, dx);
  L11():
    r17 = dyn names__(dx1, NULL, r15);
    check L12() else D5();
  D5():
    deopt 18 [r14, l6, r17];
  L12():
    c1 = `is.object`(l6);
    if c1 then L14() else L15(r14, l6);
  L13(dx3):
    st y = dx3;
    y = ld y;
    check L17() else D6();
  L14():
    dr2 = tryDispatchBuiltin.0("$<-", l6, r17);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(r14, dr2);
  L15(r19, l8):
    r22 = `$<-`(l8, <sym year>, r17);
    goto L13(r22);
  D6():
    deopt 21 [y];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L17():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}