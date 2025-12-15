fun main() {
  () -+> V { reg new_env:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg emptyenv:cls, reg r2:V, reg p:p(V +), reg r4:V, reg l:*, reg c:L, reg r6:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg get:cls, reg e:*, reg e1:V, reg p1:p(V +), reg r11:V |
    mkenv;
    new_env = ldf `new.env`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf emptyenv;
      base = ldf emptyenv in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      emptyenv = ldf emptyenv in base;
      r2 = dyn emptyenv();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    r4 = dyn new_env[parent](p);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    st e = r4;
    l = ld e;
    c = `is.object`(l);
    if c then L3() else L4(42.0, l);
  L2(dx1):
    st e = dx1;
    get = ldf get;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("$<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(42.0, dr);
  L4(r6, l2):
    r9 = `$<-`(l2, <sym x>, 42.0);
    goto L2(r9);
  D2():
    deopt 12 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    p1 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r11 = dyn get[, envir, inherits]("x", p1, FALSE);
    check L7() else D3();
  D3():
    deopt 18 [r11];
  L7():
    popenv;
    return r11;
  }
}