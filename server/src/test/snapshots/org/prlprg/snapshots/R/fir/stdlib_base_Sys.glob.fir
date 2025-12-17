fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3325472830;
    st `Sys.glob` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3325472830(paths, dirmark) {
  (reg paths:*, reg dirmark:*) -+> V { var paths:*, var dirmark:*, reg dirmark_isMissing:L, reg dirmark_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path_expand:cls, reg paths1:*, reg paths2:V, reg p:p(V +), reg r3:V, reg dirmark1:*, reg dirmark2:V, reg Sys_glob:cls, reg r4:V |
    mkenv;
    st paths = paths;
    dirmark_isMissing = missing.0(dirmark);
    if dirmark_isMissing then L0(FALSE) else L0(dirmark);
  L0(dirmark_orDefault):
    st dirmark = dirmark_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    path_expand = ldf `path.expand`;
    check L4() else D0();
  L3():
    r = dyn base(<lang Sys.glob(path.expand(paths), dirmark)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      paths1 = ld paths;
      paths2 = force? paths1;
      checkMissing(paths2);
      return paths2;
    };
    r3 = dyn path_expand(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    dirmark1 = ld dirmark;
    check L6() else D2();
  D2():
    deopt 6 [dirmark1];
  L6():
    dirmark2 = force? dirmark1;
    checkMissing(dirmark2);
    Sys_glob = ldf `Sys.glob` in base;
    r4 = dyn Sys_glob(r3, dirmark2);
    check L7() else D3();
  D3():
    deopt 9 [r4];
  L7():
    goto L1(r4);
  }
}