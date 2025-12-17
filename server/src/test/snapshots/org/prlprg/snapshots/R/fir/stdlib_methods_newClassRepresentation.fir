fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st newClassRepresentation = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg new:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn new[, `...`]("classRepresentation", ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    popenv;
    return r;
  }
}