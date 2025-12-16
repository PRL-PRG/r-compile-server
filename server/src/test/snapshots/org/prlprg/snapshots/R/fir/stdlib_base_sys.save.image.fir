fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1525459820;
    st `sys.save.image` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1525459820(name) {
  (reg name:*) -+> V { var name:*, reg closeAllConnections:cls, reg r:V, reg save_image:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st name = name;
    closeAllConnections = ldf closeAllConnections;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn closeAllConnections();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    save_image = ldf `save.image`;
    check L2() else D2();
  D2():
    deopt 4 [];
  L2():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r2 = dyn save_image(p);
    check L3() else D3();
  D3():
    deopt 6 [r2];
  L3():
    popenv;
    return r2;
  }
}