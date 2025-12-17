fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `is.finite.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg is_finite:cls, reg r4:V |
    mkenv;
    st x = x;
    sym = ldf `is.finite`;
    base = ldf `is.finite` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    as_POSIXct = ldf `as.POSIXct`;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.POSIXct(x)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn as_POSIXct(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    is_finite = ldf `is.finite` in base;
    r4 = dyn is_finite(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}