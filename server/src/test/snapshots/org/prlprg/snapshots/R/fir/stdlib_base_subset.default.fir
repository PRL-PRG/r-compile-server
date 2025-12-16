fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2094980301;
    st `subset.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2094980301(x, subset, `...`) {
  (reg x:*, reg subset:*, reg ddd:dots) -+> V { var x:*, var subset:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg subset1:*, reg subset2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg r3:V, reg x1:*, reg x2:V, reg c2:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg subset3:*, reg subset4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg x7:V, reg subset7:V, reg r6:V, reg subset8:*, reg subset9:V, reg is_na:cls, reg r7:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V |
    mkenv;
    st x = x;
    st subset = subset;
    st `...` = ddd;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L8() else L1();
  L5():
    subset1 = ld subset;
    check L7() else D0();
  L6():
    r = dyn base(<sym subset>);
    goto L0(r);
  D0():
    deopt 1 [subset1];
  L1():
    goto L2();
  L2():
    x1 = ld x;
    check L12() else D3();
  L7():
    subset2 = force? subset1;
    checkMissing(subset2);
    c = `is.logical`(subset2);
    goto L0(c);
  L8():
    stop = ldf stop;
    check L9() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 11 [x1];
  L9():
    r3 = dyn stop("'subset' must be logical");
    check L10() else D2();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    c2 = `is.object`(x2);
    if c2 then L13() else L14(x2);
  D2():
    deopt 8 [r3];
  L3(dx1):
    popenv;
    return dx1;
  L10():
    goto L2();
  L13():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x4):
    subset3 = ld subset;
    check L16() else D4();
  D4():
    deopt 13 [x4, subset3];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L16():
    subset4 = force? subset3;
    checkMissing(subset4);
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L4(x7, subset7, r6):
    r8 = `!`(r6);
    r9 = `&&`(subset7, r8);
    __ = ldf `[` in base;
    r10 = dyn __(x7, r9);
    goto L3(r10);
  L17():
    subset8 = ld subset;
    check L19() else D5();
  L18():
    r5 = dyn base1(<sym subset>);
    goto L4(x4, subset4, r5);
  D5():
    deopt 16 [x4, subset4, subset8];
  L19():
    subset9 = force? subset8;
    checkMissing(subset9);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(subset9);
    check L20() else D6();
  D6():
    deopt 19 [x4, subset4, r7];
  L20():
    goto L4(x4, subset4, r7);
  }
}