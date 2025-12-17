fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st cacheOnAssign = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg c:L, reg env4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg c3:V, reg env5:*, reg env6:V, reg c5:L, reg c7:L, reg env8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c9:L, reg dx3:V, reg r3:V, reg c10:L, reg c11:V |
    mkenv;
    st env = env;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L1(c2) else L9();
  L2():
    env1 = ld env;
    check L4() else D0();
  L3():
    r = dyn base(<lang `$`(env, .cacheOnAssign)>);
    goto L0(r);
  D0():
    deopt 1 [env1];
  L1(c3):
    popenv;
    return c3;
  L4():
    env2 = force? env1;
    checkMissing(env2);
    c = `is.object`(env2);
    if c then L6() else L7(env2);
  L9():
    env5 = ld env;
    check L10() else D1();
  D1():
    deopt 5 [c2, env5];
  L5(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L6():
    dr = tryDispatchBuiltin.1("$", env2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(env4):
    r2 = `$`(env4, <sym .cacheOnAssign>);
    goto L5(r2);
  L10():
    env6 = force? env5;
    checkMissing(env6);
    c5 = `is.object`(env6);
    if c5 then L12() else L13(c2, env6);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L11(c9, dx3):
    c10 = `as.logical`(dx3);
    c11 = `||`(c9, c10);
    goto L1(c11);
  L12():
    dr2 = tryDispatchBuiltin.1("$", env6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(c2, dr2);
  L13(c7, env8):
    r3 = `$`(env8, <sym .cacheOnAssign>);
    goto L11(c7, r3);
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(c2, dx2);
  }
}