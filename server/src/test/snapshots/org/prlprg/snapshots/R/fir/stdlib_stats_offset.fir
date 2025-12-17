fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st offset = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
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