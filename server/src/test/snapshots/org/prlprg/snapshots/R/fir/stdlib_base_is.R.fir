fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `is.R` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _Defunct:cls, reg r:V |
    mkenv;
    _Defunct = ldf `.Defunct`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn _Defunct();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}