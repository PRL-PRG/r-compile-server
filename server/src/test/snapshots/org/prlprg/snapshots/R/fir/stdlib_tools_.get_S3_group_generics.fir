fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_S3_group_generics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    c = ldf c in base;
    r2 = dyn c("Ops", "Math", "Summary", "Complex", "matrixOps");
    check L3() else D0();
  L2():
    r = dyn base("Ops", "Math", "Summary", "Complex", "matrixOps");
    goto L0(r);
  D0():
    deopt 8 [r2];
  L3():
    goto L0(r2);
  }
}