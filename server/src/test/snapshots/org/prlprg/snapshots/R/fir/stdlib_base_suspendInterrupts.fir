fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1978040662;
    st suspendInterrupts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1978040662(expr) {
  (reg expr:*) -+> V { var expr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interruptsSuspended:cls, reg r2:V, reg suspended:*, reg suspended1:V, reg c:L, reg expr1:*, reg expr2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg on_exit:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg interruptsSuspended1:cls, reg r8:V, reg expr3:*, reg expr4:V |
    mkenv;
    st expr = expr;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st suspended = r1;
    suspended = ld suspended;
    check L7() else D1();
  L4():
    interruptsSuspended = ldf interruptsSuspended in base;
    r2 = dyn interruptsSuspended();
    check L6() else D0();
  L5():
    r = dyn base(<lang interruptsSuspended()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 5 [suspended];
  L6():
    goto L0(r2);
  L7():
    suspended1 = force? suspended;
    checkMissing(suspended1);
    c = `as.logical`(suspended1);
    if c then L8() else L1();
  L1():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    expr1 = ld expr;
    check L9() else D2();
  D2():
    deopt 7 [expr1];
  L2():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L9():
    expr2 = force? expr1;
    checkMissing(expr2);
    popenv;
    return expr2;
  L11():
    on_exit = ldf `on.exit` in base;
    r5 = dyn on_exit(<lang .Internal(interruptsSuspended(suspended))>);
    goto L2();
  L12():
    r3 = dyn base1(<lang .Internal(interruptsSuspended(suspended))>);
    goto L2();
  L3():
    expr3 = ld expr;
    check L16() else D4();
  L13():
    interruptsSuspended1 = ldf interruptsSuspended in base;
    r8 = dyn interruptsSuspended1(TRUE);
    check L15() else D3();
  L14():
    r6 = dyn base2(<lang interruptsSuspended(TRUE)>);
    goto L3();
  D3():
    deopt 16 [r8];
  D4():
    deopt 17 [expr3];
  L15():
    goto L3();
  L16():
    expr4 = force? expr3;
    checkMissing(expr4);
    popenv;
    return expr4;
  }
}