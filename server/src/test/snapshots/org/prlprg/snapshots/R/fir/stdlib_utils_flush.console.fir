fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `flush.console` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_flushconsole:*, reg C_flushconsole1:V, reg vargs:dots, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang .Call(C_flushconsole)>);
    goto L0(r);
  L1(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L7() else D1();
  L4():
    C_flushconsole = ld C_flushconsole;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym C_flushconsole>);
    goto L1(r2);
  D0():
    deopt 3 [C_flushconsole];
  D1():
    deopt 7 [r5];
  L6():
    C_flushconsole1 = force? C_flushconsole;
    checkMissing(C_flushconsole1);
    vargs = dots[];
    r4 = `.Call`(C_flushconsole1, vargs, <missing>);
    goto L1(r4);
  L7():
    goto L0(r5);
  }
}