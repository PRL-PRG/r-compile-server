fun main() {
  () -+> V { reg r:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg r2:V, reg c1:L, reg print:cls, reg nsl:cls, reg r3:V, reg p:p(V +), reg r5:V |
    mkenv;
    r = clos inner1393319443;
    st nsl = r;
    _Platform = ld `.Platform`;
    check L1() else D0();
  D0():
    deopt 3 [_Platform];
  L1():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L3() else L4(_Platform1);
  L2(dx1):
    r2 = `==`(dx1, "unix");
    c1 = `as.logical`(r2);
    if c1 then L6() else L0();
  L3():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(_Platform3):
    r1 = `$`(_Platform3, <sym OS.type>);
    goto L2(r1);
  L0():
    invisible.0();
    popenv;
    return NULL;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    print = ldf print;
    check L7() else D1();
  D1():
    deopt 9 [];
  L7():
    p = prom<V +>{
      nsl = ldf nsl;
      r3 = dyn nsl("www.r-project.org");
      return r3;
    };
    r5 = dyn print(p);
    check L8() else D2();
  D2():
    deopt 11 [r5];
  L8():
    popenv;
    return r5;
  }
}
fun inner1393319443(hostname) {
  (reg hostname:*) -+> V { var hostname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_nsl:*, reg C_nsl1:V, reg hostname1:*, reg hostname2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st hostname = hostname;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_nsl = ld C_nsl;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_nsl>, <sym hostname>);
    goto L0(r);
  D0():
    deopt 1 [C_nsl];
  L3():
    C_nsl1 = force? C_nsl;
    checkMissing(C_nsl1);
    hostname1 = ld hostname;
    check L4() else D1();
  D1():
    deopt 2 [C_nsl1, hostname1];
  L4():
    hostname2 = force? hostname1;
    checkMissing(hostname2);
    vargs = dots[hostname2];
    r2 = `.Call`(C_nsl1, vargs, <missing>);
    goto L0(r2);
  }
}