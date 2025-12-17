fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2300758201;
    st `drop1.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2300758201(object, scope, `...`) {
  (reg object:*, reg scope:*, reg ddd:dots) -+> V { var object:*, var scope:*, var `...`:dots?, reg stop:cls, reg r:V |
    mkenv;
    st object = object;
    st scope = scope;
    st `...` = ddd;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn stop("no 'drop1' method for \"mlm\" models");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}