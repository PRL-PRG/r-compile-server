fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1166641542;
    st `print.function` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1166641542(x, useSource, `...`) {
  (reg x:*, reg useSource:*, reg ddd:dots) -+> V { var x:*, var useSource:*, reg useSource_isMissing:L, reg useSource_orDefault:*, var `...`:dots?, reg print_default:cls, reg x1:*, reg x2:V, reg p:p(V +), reg useSource1:*, reg useSource2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st x = x;
    useSource_isMissing = missing.0(useSource);
    if useSource_isMissing then L0(TRUE) else L0(useSource);
  L0(useSource_orDefault):
    st useSource = useSource_orDefault;
    st `...` = ddd;
    print_default = ldf `print.default`;
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
    p1 = prom<V +>{
      useSource1 = ld useSource;
      useSource2 = force? useSource1;
      checkMissing(useSource2);
      return useSource2;
    };
    ddd1 = ld `...`;
    r2 = dyn print_default[, useSource, `...`](p, p1, ddd1);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    popenv;
    return r2;
  }
}