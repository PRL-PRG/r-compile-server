fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1649437083;
    st installFoundDepends = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1649437083(depPkgList, `...`) {
  (reg depPkgList:*, reg ddd:dots) -+> V { var depPkgList:*, var `...`:dots?, reg _Defunct:cls, reg r:V |
    mkenv;
    st depPkgList = depPkgList;
    st `...` = ddd;
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