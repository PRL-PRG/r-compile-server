fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner657373133;
    st `substr<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner657373133(x, start, stop, value) {
  (reg x:*, reg start:*, reg stop:*, reg value:*) -+> V { var x:*, var start:*, var stop:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg start1:*, reg start2:V, reg as_integer:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg stop1:*, reg stop2:V, reg as_integer1:cls, reg r7:V, reg value1:*, reg value2:V, reg substr__:cls, reg r8:V |
    mkenv;
    st x = x;
    st start = start;
    st stop = stop;
    st value = value;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang `substr<-`(x, as.integer(start), as.integer(stop), value)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r3):
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L6():
    start1 = ld start;
    check L8() else D1();
  L7():
    r2 = dyn base1(<sym start>);
    goto L1(r2);
  D1():
    deopt 6 [start1];
  L2(r6):
    value1 = ld value;
    check L14() else D5();
  L8():
    start2 = force? start1;
    checkMissing(start2);
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(start2);
    check L9() else D2();
  L10():
    stop1 = ld stop;
    check L12() else D3();
  L11():
    r5 = dyn base2(<sym stop>);
    goto L2(r5);
  D2():
    deopt 9 [r4];
  D3():
    deopt 12 [stop1];
  D5():
    deopt 16 [value1];
  L9():
    goto L1(r4);
  L12():
    stop2 = force? stop1;
    checkMissing(stop2);
    as_integer1 = ldf `as.integer` in base;
    r7 = dyn as_integer1(stop2);
    check L13() else D4();
  L14():
    value2 = force? value1;
    checkMissing(value2);
    substr__ = ldf `substr<-` in base;
    r8 = dyn substr__(x2, r3, r6, value2);
    check L15() else D6();
  D4():
    deopt 15 [r7];
  D6():
    deopt 19 [r8];
  L13():
    goto L2(r7);
  L15():
    goto L0(r8);
  }
}