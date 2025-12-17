fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `unix.time` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg _Defunct:cls, reg r:V |
    mkenv;
    st `...` = ddd;
    _Defunct = ldf `.Defunct`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn _Defunct("system.time");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}