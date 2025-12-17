fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner719242021;
    st `.package_vignettes_via_call_to_R` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner719242021(dir, `...`, libpaths) {
  (reg dir:*, reg ddd:dots, reg libpaths:*) -+> V { var dir:*, var `...`:dots?, var libpaths:*, reg libpaths_isMissing:L, reg libpaths_orDefault:*, reg _libPaths:cls, reg r:V, reg p:p(V +), reg r2:cls, reg R:cls, reg fun:*, reg fun1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg ddd1:dots?, reg libpaths1:*, reg libpaths2:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st dir = dir;
    st `...` = ddd;
    libpaths_isMissing = missing.0(libpaths);
    if libpaths_isMissing then L0() else L1(libpaths);
  L0():
    p = prom<V +>{
      _libPaths = ldf `.libPaths`;
      r = dyn _libPaths();
      return r;
    };
    goto L1(p);
  L1(libpaths_orDefault):
    st libpaths = libpaths_orDefault;
    r2 = clos inner4157025770;
    st fun = r2;
    R = ldf R;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p1 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    p4 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      list = ldf list;
      p2 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      ddd1 = ld `...`;
      p3 = prom<V +>{
        libpaths1 = ld libpaths;
        libpaths2 = force? libpaths1;
        checkMissing(libpaths2);
        return libpaths2;
      };
      r8 = dyn list[, `...`, libpaths](p2, ddd1, p3);
      goto L0(r8);
    L2():
      r4 = dyn base[, , libpaths](<sym dir>, <sym ...>, <sym libpaths>);
      goto L0(r4);
    };
    r10 = dyn R(p1, p4, "--vanilla");
    check L3() else D1();
  D1():
    deopt 8 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun inner4157025770(dir, `...`, libpaths) {
  (reg dir:*, reg ddd:dots, reg libpaths:*) -+> V { var dir:*, var `...`:dots?, var libpaths:*, reg _libPaths:cls, reg libpaths1:*, reg libpaths2:V, reg p:p(V +), reg r1:V, reg pkgVignettes:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st dir = dir;
    st `...` = ddd;
    st libpaths = libpaths;
    _libPaths = ldf `.libPaths`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      libpaths1 = ld libpaths;
      libpaths2 = force? libpaths1;
      checkMissing(libpaths2);
      return libpaths2;
    };
    r1 = dyn _libPaths(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    pkgVignettes = ldf pkgVignettes;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    ddd1 = ld `...`;
    r3 = dyn pkgVignettes[dir, `...`](p1, ddd1);
    check L3() else D3();
  D3():
    deopt 9 [r3];
  L3():
    popenv;
    return r3;
  }
}