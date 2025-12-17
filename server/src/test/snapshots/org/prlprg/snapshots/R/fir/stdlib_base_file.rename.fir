fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner838351097;
    st `file.rename` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg file_rename:cls, reg r2:V |
    mkenv;
    st from = from;
    st to = to;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    from1 = ld from;
    check L3() else D0();
  L2():
    r = dyn base(<lang file.rename(from, to)>);
    goto L0(r);
  D0():
    deopt 2 [from1];
  L3():
    from2 = force? from1;
    checkMissing(from2);
    to1 = ld to;
    check L4() else D1();
  D1():
    deopt 4 [to1];
  L4():
    to2 = force? to1;
    checkMissing(to2);
    file_rename = ldf `file.rename` in base;
    r2 = dyn file_rename(from2, to2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}