fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.TableMetaPrefix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg methodsPackageMetaName:cls, reg r:V |
    mkenv;
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn methodsPackageMetaName("T", "");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    popenv;
    return r;
  }
}