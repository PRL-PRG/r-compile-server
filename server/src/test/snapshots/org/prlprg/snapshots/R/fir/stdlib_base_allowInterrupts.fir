fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4125524309;
    st allowInterrupts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interruptsSuspended:cls, reg r2:V, reg suspended:*, reg suspended1:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg on_exit:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg interruptsSuspended1:cls, reg r8:V, reg expr1:*, reg expr2:V, reg expr3:*, reg expr4:V |
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
    expr3 = ld expr;
    check L16() else D4();
  L8():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D4():
    deopt 17 [expr3];
  L2():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L9():
    on_exit = ldf `on.exit` in base;
    r5 = dyn on_exit(<lang .Internal(interruptsSuspended(suspended))>);
    goto L2();
  L10():
    r3 = dyn base1(<lang .Internal(interruptsSuspended(suspended))>);
    goto L2();
  L16():
    expr4 = force? expr3;
    checkMissing(expr4);
    popenv;
    return expr4;
  L3():
    expr1 = ld expr;
    check L14() else D3();
  L11():
    interruptsSuspended1 = ldf interruptsSuspended in base;
    r8 = dyn interruptsSuspended1(FALSE);
    check L13() else D2();
  L12():
    r6 = dyn base2(<lang interruptsSuspended(FALSE)>);
    goto L3();
  D2():
    deopt 14 [r8];
  D3():
    deopt 15 [expr1];
  L13():
    goto L3();
  L14():
    expr2 = force? expr1;
    checkMissing(expr2);
    popenv;
    return expr2;
  }
}