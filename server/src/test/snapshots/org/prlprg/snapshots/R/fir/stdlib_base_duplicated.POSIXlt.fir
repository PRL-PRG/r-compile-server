fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3117001256;
    st `duplicated.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3117001256(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg NextMethod:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    as_POSIXct = ldf `as.POSIXct`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_POSIXct(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st x = r1;
    NextMethod = ldf NextMethod;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn NextMethod("duplicated", p1);
    check L4() else D3();
  D3():
    deopt 9 [r3];
  L4():
    popenv;
    return r3;
  }
}