fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.primname` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_get_primname:*, reg C_R_get_primname1:V, reg object1:*, reg object2:V, reg vargs:dots, reg r2:V, reg f:*, reg f1:V, reg r3:V, reg c:L, reg f2:*, reg f3:V |
    mkenv;
    st object = object;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st f = r1;
    f = ld f;
    check L6() else D2();
  L2():
    C_R_get_primname = ld C_R_get_primname;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_R_get_primname>, <sym object>);
    goto L0(r);
  D0():
    deopt 1 [C_R_get_primname];
  D2():
    deopt 6 [f];
  L4():
    C_R_get_primname1 = force? C_R_get_primname;
    checkMissing(C_R_get_primname1);
    object1 = ld object;
    check L5() else D1();
  L6():
    f1 = force? f;
    checkMissing(f1);
    r3 = `==`(f1, "as.double");
    c = `as.logical`(r3);
    if c then L7() else L1();
  D1():
    deopt 2 [C_R_get_primname1, object1];
  L1():
    f2 = ld f;
    check L9() else D3();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    vargs = dots[object2];
    r2 = `.Call`(C_R_get_primname1, vargs, <missing>);
    goto L0(r2);
  L7():
    popenv;
    return "as.numeric";
  D3():
    deopt 12 [f2];
  L9():
    f3 = force? f2;
    checkMissing(f3);
    popenv;
    return f3;
  }
}