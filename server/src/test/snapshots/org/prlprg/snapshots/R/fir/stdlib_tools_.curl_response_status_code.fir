fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.curl_response_status_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>, "error");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    x3 = ld x;
    check L8() else D2();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "error", FALSE);
    check L5() else D1();
  L6():
    popenv;
    return -1;
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [x3];
  L5():
    goto L0(r2);
  L8():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L10() else L11(x4);
  L9(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    r3 = `$`(x6, <sym status_code>);
    goto L9(r3);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  }
}