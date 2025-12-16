fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.double.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg as_double:cls, reg r4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `as.double`;
    base = ldf `as.double` in base;
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
    as_double = ldf `as.double` in base;
    r4 = dyn as_double(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}