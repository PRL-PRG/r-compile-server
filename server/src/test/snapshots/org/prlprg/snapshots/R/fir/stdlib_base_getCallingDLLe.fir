fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3708401697;
    st getCallingDLLe = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg baseenv:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg get0:cls, reg env:*, reg env1:V, reg p:p(V +), reg r10:V, reg c3:V, reg r11:V, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c9:L, reg r13:V, reg Ds:*, reg Ds1:V, reg length:cls, reg r14:V, reg c10:L, reg c11:V, reg c13:L, reg Ds2:*, reg Ds3:V, reg c14:L, reg Ds5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r15:V |
    mkenv;
    st e = e;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L16() else L1();
  L9():
    e1 = ld e;
    check L11() else D0();
  L10():
    r = dyn base(<lang `<-`(env, `$`(e, .__NAMESPACE__.))>);
    goto L0(r);
  D0():
    deopt 1 [e1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L13() else L14(e2);
  L16():
    sym1 = ldf baseenv;
    base1 = ldf baseenv in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(r4):
    st env = r4;
    goto L3();
  L4(r8):
    r11 = `!`(r8);
    c4 = `as.logical`(r11);
    if c4 then L25() else L5(c4);
  L12(dx1):
    st env = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L13():
    dr = tryDispatchBuiltin.1("$", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(e4):
    r2 = `$`(e4, <sym .__NAMESPACE__.>);
    goto L12(r2);
  L17():
    baseenv = ldf baseenv in base;
    r5 = dyn baseenv();
    check L19() else D1();
  L18():
    r3 = dyn base1();
    goto L2(r3);
  L21():
    get0 = ldf get0;
    check L23() else D2();
  L22():
    r7 = dyn base2(<lang `<-`(Ds, get0("DLLs", envir=env))>);
    goto L4(r7);
  D1():
    deopt 9 [r5];
  D2():
    deopt 15 [];
  L5(c6):
    c13 = `as.logical`(c6);
    if c13 then L31() else L7();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L19():
    goto L2(r5);
  L23():
    p = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r10 = dyn get0[, envir]("DLLs", p);
    check L24() else D3();
  L25():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  D3():
    deopt 19 [r10];
  L6(c9, r13):
    c10 = `as.logical`(r13);
    c11 = `&&`(c9, c10);
    goto L5(c11);
  L7():
    invisible.0();
    popenv;
    return NULL;
  L24():
    st Ds = r10;
    c3 = `==`(r10, NULL);
    goto L4(c3);
  L26():
    Ds = ld Ds;
    check L28() else D4();
  L27():
    r12 = dyn base3(<sym Ds>);
    goto L6(c4, r12);
  L31():
    Ds2 = ld Ds;
    check L32() else D6();
  D4():
    deopt 25 [c4, Ds];
  D6():
    deopt 30 [Ds2];
  L28():
    Ds1 = force? Ds;
    checkMissing(Ds1);
    length = ldf length in base;
    r14 = dyn length(Ds1);
    check L29() else D5();
  L32():
    Ds3 = force? Ds2;
    checkMissing(Ds3);
    c14 = `is.object`(Ds3);
    if c14 then L33() else L34(Ds3);
  D5():
    deopt 28 [c4, r14];
  L8(dx3):
    popenv;
    return dx3;
  L29():
    goto L6(c4, r14);
  L33():
    dr2 = tryDispatchBuiltin.1("[[", Ds3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(Ds5):
    __ = ldf `[[` in base;
    r15 = dyn __(Ds5, 1);
    goto L8(r15);
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  }
}