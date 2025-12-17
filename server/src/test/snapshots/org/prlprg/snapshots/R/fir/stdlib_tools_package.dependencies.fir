fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3967158760;
    st `package.dependencies` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3967158760(x, check, depLevel) {
  (reg x:*, reg check:*, reg depLevel:*) -+> V { var x:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, var depLevel:*, reg depLevel_isMissing:L, reg depLevel_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg _Defunct:cls, reg r4:V |
    mkenv;
    st x = x;
    check_isMissing = missing.0(check);
    if check_isMissing then L0(FALSE) else L0(check);
  L0(check_orDefault):
    st check = check_orDefault;
    depLevel_isMissing = missing.0(depLevel);
    if depLevel_isMissing then L1() else L2(depLevel);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Depends", "Imports", "Suggests");
      goto L0(r2);
    L2():
      r = dyn base("Depends", "Imports", "Suggests");
      goto L0(r);
    };
    goto L2(p);
  L2(depLevel_orDefault):
    st depLevel = depLevel_orDefault;
    _Defunct = ldf `.Defunct`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r4 = dyn _Defunct("package_dependencies");
    check L4() else D1();
  D1():
    deopt 3 [r4];
  L4():
    popenv;
    return r4;
  }
}