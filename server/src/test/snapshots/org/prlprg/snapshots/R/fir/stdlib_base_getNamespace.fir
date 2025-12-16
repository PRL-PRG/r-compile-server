fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1525459820;
    st getNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1525459820(name) {
  (reg name:*) -+> V { var name:*, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg getRegisteredNamespace:cls, reg r2:V, reg p:p(V +), reg loadNamespace:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st name = name;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      getRegisteredNamespace = ldf getRegisteredNamespace in base;
      r2 = dyn getRegisteredNamespace(name2);
      goto L0(r2);
    L2():
      r = dyn base(<lang getRegisteredNamespace(name)>);
      goto L0(r);
    };
    p2 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p1 = prom<V +>{
        name3 = ld name;
        name4 = force? name3;
        checkMissing(name4);
        return name4;
      };
      r5 = dyn loadNamespace(p1);
      return r5;
    };
    r7 = dyn ____(p, p2);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}