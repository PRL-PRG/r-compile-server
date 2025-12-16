fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner855442539;
    st tempdir = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner855442539(check) {
  (reg check:*) -+> V { var check:*, reg check_isMissing:L, reg check_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg check1:*, reg check2:V, reg tempdir:cls, reg r2:V |
    mkenv;
    check_isMissing = missing.0(check);
    if check_isMissing then L0(FALSE) else L0(check);
  L0(check_orDefault):
    st check = check_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    check1 = ld check;
    check L4() else D0();
  L3():
    r = dyn base(<lang tempdir(check)>);
    goto L1(r);
  D0():
    deopt 2 [check1];
  L4():
    check2 = force? check1;
    checkMissing(check2);
    tempdir = ldf tempdir in base;
    r2 = dyn tempdir(check2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}