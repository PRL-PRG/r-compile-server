fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3606894440;
    st globalVariables = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3606894440(names, package, add) {
  (reg names:*, reg package:*, reg add:*) -+> V { var names:*, var package:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg registerNames:cls, reg names1:*, reg names2:V, reg p:p(V +), reg package1:*, reg package2:V, reg p1:p(V +), reg add1:*, reg add2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st names = names;
    st package = package;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(TRUE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    registerNames = ldf registerNames;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      return names2;
    };
    p1 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p2 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      return add2;
    };
    r3 = dyn registerNames(p, p1, ".__global__", p2);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    popenv;
    return r3;
  }
}