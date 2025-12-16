fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2005422678`;
    st `open.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2005422678`(con, open, blocking, `...`) {
  (reg con:*, reg open:*, reg blocking:*, reg ddd:dots) -+> V { var con:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg open1:*, reg open2:V, reg blocking1:*, reg blocking2:V, reg open3:cls, reg r2:V |
    mkenv;
    st con = con;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("r") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L1(TRUE) else L1(blocking);
  L1(blocking_orDefault):
    st blocking = blocking_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    con1 = ld con;
    check L5() else D0();
  L4():
    r = dyn base(<lang open(con, open, blocking)>);
    goto L2(r);
  D0():
    deopt 2 [con1];
  L5():
    con2 = force? con1;
    checkMissing(con2);
    open1 = ld open;
    check L6() else D1();
  D1():
    deopt 4 [open1];
  L6():
    open2 = force? open1;
    checkMissing(open2);
    blocking1 = ld blocking;
    check L7() else D2();
  D2():
    deopt 6 [blocking1];
  L7():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    open3 = ldf open in base;
    r2 = dyn open3(con2, open2, blocking2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}