fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1966010878;
    st fromNextMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1966010878(call) {
  (reg call:*) -+> V { var call:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call1:*, reg call2:V, reg c:L, reg call4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg quote:cls, reg r5:V, reg identical:cls, reg r6:V |
    mkenv;
    st call = call;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    call1 = ld call;
    check L5() else D0();
  L4():
    r = dyn base(<lang `[[`(call, 1)>, <lang quote(.nextMethod)>);
    goto L0(r);
  D0():
    deopt 2 [call1];
  L5():
    call2 = force? call1;
    checkMissing(call2);
    c = `is.object`(call2);
    if c then L6() else L7(call2);
  L1(dx1):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L6():
    dr = tryDispatchBuiltin.1("[[", call2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(call4):
    __ = ldf `[[` in base;
    r2 = dyn __(call4, 1);
    goto L1(r2);
  L2(r4):
    identical = ldf identical in base;
    r6 = dyn identical(dx1, r4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L11() else D1();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    quote = ldf quote in base;
    r5 = dyn quote(<sym .nextMethod>);
    goto L2(r5);
  L10():
    r3 = dyn base1(<sym .nextMethod>);
    goto L2(r3);
  D1():
    deopt 18 [r6];
  L11():
    goto L0(r6);
  }
}