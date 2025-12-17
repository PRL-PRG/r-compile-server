fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner509519364;
    st `.package_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner509519364(package_name) {
  (reg package_name:*) -+> V { var package_name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paste0:cls, reg package_name1:*, reg package_name2:V, reg p:p(V +), reg r3:V, reg as_environment:cls, reg r4:V |
    mkenv;
    st package_name = package_name;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    paste0 = ldf paste0;
    check L3() else D0();
  L2():
    r = dyn base(<lang paste0("package:", package_name)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      package_name1 = ld package_name;
      package_name2 = force? package_name1;
      checkMissing(package_name2);
      return package_name2;
    };
    r3 = dyn paste0("package:", p);
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    as_environment = ldf `as.environment` in base;
    r4 = dyn as_environment(r3);
    check L5() else D2();
  D2():
    deopt 8 [r4];
  L5():
    goto L0(r4);
  }
}