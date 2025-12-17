fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `na.pass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    object1 = ld object;
    check L0() else D0();
  D0():
    deopt 0 [object1];
  L0():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  }
}