fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `family.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg gaussian:cls, reg r:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    gaussian = ldf gaussian;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn gaussian();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}