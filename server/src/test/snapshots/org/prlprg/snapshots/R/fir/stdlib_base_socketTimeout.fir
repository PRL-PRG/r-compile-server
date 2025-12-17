fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2735828590;
    st socketTimeout = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2735828590(socket, timeout) {
  (reg socket:*, reg timeout:*) -+> V { var socket:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg socket1:*, reg socket2:V, reg timeout1:*, reg timeout2:V, reg socketTimeout:cls, reg r3:V |
    mkenv;
    st socket = socket;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L0() else L1(timeout);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(timeout_orDefault):
    st timeout = timeout_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r2):
    popenv;
    return r2;
  L3():
    socket1 = ld socket;
    check L5() else D0();
  L4():
    r1 = dyn base(<lang socketTimeout(socket, timeout)>);
    goto L2(r1);
  D0():
    deopt 2 [socket1];
  L5():
    socket2 = force? socket1;
    checkMissing(socket2);
    timeout1 = ld timeout;
    check L6() else D1();
  D1():
    deopt 4 [timeout1];
  L6():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    socketTimeout = ldf socketTimeout in base;
    r3 = dyn socketTimeout(socket2, timeout2);
    check L7() else D2();
  D2():
    deopt 7 [r3];
  L7():
    goto L2(r3);
  }
}