fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c1:L, reg c2:L, reg i_ddd:dots, reg i:V, reg c3:L, reg c4:L, reg c5:L, reg r:V, reg g:cls, reg r1:V, reg c6:L, reg y:*, reg y1:V, reg c7:L |
    mkenv;
    st x = 2.0;
    x = ld x;
    check L7() else D0();
  D0():
    deopt 3 [x];
  L7():
    x1 = force? x;
    checkMissing(x1);
    c = `is.vector`(x1, "any");
    if c then L8() else L9();
  L8():
    c1 = inherits(x1, "factor", FALSE);
    if c1 then L10() else L11();
  L9():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L10():
    c2 = `is.character`(x1);
    if c2 then L12() else L13();
  L11():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L10();
  L12():
    stop(<dot "numeric EXPR required for 'switch' without named alternatives">, TRUE, NULL);
    unreachable;
  L13():
    i_ddd = dots[x1];
    i = `as.integer`(i_ddd);
    c3 = `==`.5(i, 1);
    if c3 then L0() else L14();
  L0():
    goto L4(1.0);
  L4(r):
    c6 = `as.logical`(r);
    if c6 then L23() else L5();
  L14():
    c4 = `==`.5(i, 2);
    if c4 then L1() else L15();
  L1():
    goto L4(2.0);
  L5():
    invisible.0();
    popenv;
    return NULL;
  L15():
    c5 = `==`.5(i, 3);
    if c5 then L2() else L16();
  L23():
    y = ld y;
    check L24() else D3();
  D3():
    deopt 16 [y];
  L2():
    g = ldf g;
    check L20() else D1();
  L16():
    goto L4(NULL);
  L24():
    y1 = force? y;
    checkMissing(y1);
    c7 = `as.logical`(y1);
    if c7 then L25() else L6();
  D1():
    deopt 12 [];
  L6():
    popenv;
    return 5.0;
  L20():
    r1 = dyn g(3.0);
    check L21() else D2();
  L25():
    popenv;
    return 4.0;
  D2():
    deopt 14 [r1];
  L21():
    goto L4(r1);
  }
}