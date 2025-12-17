fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2183095376;
    st `.detach` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2183095376(pos) {
  (reg pos:*) -+> V { var pos:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pos1:*, reg pos2:V, reg detach:cls, reg r2:V |
    mkenv;
    st pos = pos;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    pos1 = ld pos;
    check L3() else D0();
  L2():
    r = dyn base(<lang detach(pos)>);
    goto L0(r);
  D0():
    deopt 2 [pos1];
  L3():
    pos2 = force? pos1;
    checkMissing(pos2);
    detach = ldf detach in base;
    r2 = dyn detach(pos2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}