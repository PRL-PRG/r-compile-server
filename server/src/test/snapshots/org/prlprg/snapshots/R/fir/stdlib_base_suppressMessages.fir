fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1934697382`;
    st suppressMessages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1934697382`(expr, classes) {
  (reg expr:*, reg classes:*) -+> V { var expr:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, reg withCallingHandlers:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st expr = expr;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0("message") else L0(classes);
  L0(classes_orDefault):
    st classes = classes_orDefault;
    withCallingHandlers = ldf withCallingHandlers;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      r1 = clos inner1914006432;
      return r1;
    };
    r3 = dyn withCallingHandlers[, message](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r3];
  L2():
    popenv;
    return r3;
  }
}
fun inner1914006432(c) {
  (reg c:*) -+> V { var c:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c1:*, reg c2:V, reg classes:*, reg classes1:V, reg inherits:cls, reg r2:V, reg c3:L, reg tryInvokeRestart:cls, reg r3:V |
    mkenv;
    st c = c;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c3 = `as.logical`(r1);
    if c3 then L7() else L1();
  L2():
    c1 = ld c;
    check L4() else D0();
  L3():
    r = dyn base(<sym c>, <sym classes>);
    goto L0(r);
  D0():
    deopt 2 [c1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    c2 = force? c1;
    checkMissing(c2);
    classes = ld classes;
    check L5() else D1();
  L7():
    tryInvokeRestart = ldf tryInvokeRestart;
    check L8() else D3();
  D1():
    deopt 4 [classes];
  D3():
    deopt 10 [];
  L5():
    classes1 = force? classes;
    checkMissing(classes1);
    inherits = ldf inherits in base;
    r2 = dyn inherits(c2, classes1, FALSE);
    check L6() else D2();
  L8():
    r3 = dyn tryInvokeRestart("muffleMessage");
    check L9() else D4();
  D2():
    deopt 8 [r2];
  D4():
    deopt 12 [r3];
  L6():
    goto L0(r2);
  L9():
    popenv;
    return r3;
  }
}