fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1812953988;
    st `.row` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1812953988(dim) {
  (reg dim:*) -+> V { var dim:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dim1:*, reg dim2:V, reg row:cls, reg r2:V |
    mkenv;
    st dim = dim;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    dim1 = ld dim;
    check L3() else D0();
  L2():
    r = dyn base(<lang row(dim)>);
    goto L0(r);
  D0():
    deopt 2 [dim1];
  L3():
    dim2 = force? dim1;
    checkMissing(dim2);
    row = ldf row in base;
    r2 = dyn row(dim2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}