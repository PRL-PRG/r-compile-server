fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3958450520;
    st `close.txtProgressBar` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3958450520(con, `...`) {
  (reg con:*, reg ddd:dots) -+> V { var con:*, var `...`:dots?, reg con1:*, reg con2:V, reg c:L, reg con4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg dx2:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg invisible:cls, reg r4:V |
    mkenv;
    st con = con;
    st `...` = ddd;
    con1 = ld con;
    check L1() else D0();
  D0():
    deopt 0 [con1];
  L1():
    con2 = force? con1;
    checkMissing(con2);
    c = `is.object`(con2);
    if c then L3() else L4(con2);
  L2(dx1):
    checkFun.0(dx1);
    dx2 = dx1 as cls;
    r1 = dyn dx2();
    check L6() else D1();
  L3():
    dr = tryDispatchBuiltin.1("$", con2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(con4):
    r = `$`(con4, <sym kill>);
    goto L2(r);
  D1():
    deopt 4 [r1];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r3):
    popenv;
    return r3;
  L7():
    invisible = ldf invisible in base;
    r4 = dyn invisible(NULL);
    check L9() else D2();
  L8():
    r2 = dyn base(NULL);
    goto L0(r2);
  D2():
    deopt 9 [r4];
  L9():
    goto L0(r4);
  }
}