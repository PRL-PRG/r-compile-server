fun main() {
  () -+> V { reg r:cls, reg path_expand:cls, reg r1:V |
    mkenv;
    r = clos inner859363206;
    st `path.expand` = r;
    path_expand = ldf `path.expand`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn path_expand("~/foo");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner859363206(path) {
  (reg path:*) -+> V { var path:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg path_expand:cls, reg r2:V |
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
    r = dyn base(<lang path.expand(path)>);
    goto L0(r);
  D0():
    deopt 2 [path1];
  L3():
    path2 = force? path1;
    checkMissing(path2);
    path_expand = ldf `path.expand` in base;
    r2 = dyn path_expand(path2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}