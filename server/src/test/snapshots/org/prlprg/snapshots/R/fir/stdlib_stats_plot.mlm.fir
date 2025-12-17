fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `plot.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _NotYetImplemented:cls, reg r:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _NotYetImplemented = ldf `.NotYetImplemented`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn _NotYetImplemented();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}