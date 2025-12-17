fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4258959003;
    st dynamicHelpURL = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4258959003(path, port) {
  (reg path:*, reg port:*) -+> V { var path:*, var port:*, reg port_isMissing:L, reg port_orDefault:*, reg httpdPort:cls, reg r:V, reg p:p(V +), reg paste0:cls, reg port1:*, reg port2:V, reg p1:p(V +), reg path1:*, reg path2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st path = path;
    port_isMissing = missing.0(port);
    if port_isMissing then L0() else L1(port);
  L0():
    p = prom<V +>{
      httpdPort = ldf httpdPort;
      r = dyn httpdPort();
      return r;
    };
    goto L1(p);
  L1(port_orDefault):
    st port = port_orDefault;
    paste0 = ldf paste0;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      port1 = ld port;
      port2 = force? port1;
      checkMissing(port2);
      return port2;
    };
    p2 = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r4 = dyn paste0("http://127.0.0.1:", p1, p2);
    check L3() else D1();
  D1():
    deopt 5 [r4];
  L3():
    popenv;
    return r4;
  }
}