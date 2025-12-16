fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner988007138;
    st serverSocket = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner988007138(port) {
  (reg port:*) -+> V { var port:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg port1:*, reg port2:V, reg serverSocket:cls, reg r2:V |
    mkenv;
    st port = port;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    port1 = ld port;
    check L3() else D0();
  L2():
    r = dyn base(<lang serverSocket(port)>);
    goto L0(r);
  D0():
    deopt 2 [port1];
  L3():
    port2 = force? port1;
    checkMissing(port2);
    serverSocket = ldf serverSocket in base;
    r2 = dyn serverSocket(port2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}