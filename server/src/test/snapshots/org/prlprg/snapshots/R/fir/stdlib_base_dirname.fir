fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3006846853;
    st dirname = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3006846853(path) {
  (reg path:*) -+> V { var path:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg dirname:cls, reg r2:V |
    mkenv;
    st path = path;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    path1 = ld path;
    check L3() else D0();
  L2():
    r = dyn base(<lang dirname(path)>);
    goto L0(r);
  D0():
    deopt 2 [path1];
  L3():
    path2 = force? path1;
    checkMissing(path2);
    dirname = ldf dirname in base;
    r2 = dyn dirname(path2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}