fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `is.primitive` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg typeof:cls, reg r2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg i_ddd:dots, reg i:V, reg c5:L, reg c6:L, reg c7:L, reg stop:cls, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `is.vector`(r1, "any");
    if c then L9() else L10();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(x2);
    check L8() else D1();
  L9():
    c1 = inherits(r1, "factor", FALSE);
    if c1 then L11() else L12();
  L10():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D1():
    deopt 5 [r2];
  L8():
    goto L0(r2);
  L11():
    c2 = `is.character`(r1);
    if c2 then L13() else L14();
  L12():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L11();
  L1():
    popenv;
    return TRUE;
  L2():
    popenv;
    return FALSE;
  L13():
    c3 = `==`.6(r1, "special");
    if c3 then L1() else L15();
  L14():
    i_ddd = dots[r1];
    i = `as.integer`(i_ddd);
    c5 = `==`.5(i, 1);
    if c5 then L3() else L17();
  L3():
    stop = ldf stop;
    check L20() else D2();
  L15():
    c4 = `==`.6(r1, "builtin");
    if c4 then L1() else L16();
  L17():
    c6 = `==`.5(i, 2);
    if c6 then L1() else L18();
  D2():
    deopt 7 [];
  L16():
    goto L2();
  L18():
    c7 = `==`.5(i, 3);
    if c7 then L2() else L19();
  L20():
    r3 = dyn stop("empty alternative in numeric switch");
    check L21() else D3();
  D3():
    deopt 9 [r3];
  L19():
    invisible.0();
    popenv;
    return NULL;
  L21():
    popenv;
    return r3;
  }
}