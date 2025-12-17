fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1154884528;
    st socketConnection = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1154884528(host, port, server, blocking, open, encoding, timeout, options) {
  (reg host:*, reg port:*, reg server:*, reg blocking:*, reg open:*, reg encoding:*, reg timeout:*, reg options:*) -+> V { var host:*, reg host_isMissing:L, reg host_orDefault:*, var port:*, var server:*, reg server_isMissing:L, reg server_orDefault:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var options:*, reg options_isMissing:L, reg options_orDefault:*, reg getOption2:cls, reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg host1:*, reg host2:V, reg port1:*, reg port2:V, reg server1:*, reg server2:V, reg blocking1:*, reg blocking2:V, reg open1:*, reg open2:V, reg encoding1:*, reg encoding2:V, reg timeout1:*, reg timeout2:V, reg options1:*, reg options2:V, reg socketConnection:cls, reg r8:V |
    mkenv;
    host_isMissing = missing.0(host);
    if host_isMissing then L0("localhost") else L0(host);
  L0(host_orDefault):
    st host = host_orDefault;
    st port = port;
    server_isMissing = missing.0(server);
    if server_isMissing then L1(FALSE) else L1(server);
  L1(server_orDefault):
    st server = server_orDefault;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L2(FALSE) else L2(blocking);
  L2(blocking_orDefault):
    st blocking = blocking_orDefault;
    open_isMissing = missing.0(open);
    if open_isMissing then L3("a+") else L3(open);
  L3(open_orDefault):
    st open = open_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L4() else L5(encoding);
  L4():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L5(p);
  L5(encoding_orDefault):
    st encoding = encoding_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L6() else L7(timeout);
  L6():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("timeout");
      return r2;
    };
    goto L7(p1);
  L7(timeout_orDefault):
    st timeout = timeout_orDefault;
    options_isMissing = missing.0(options);
    if options_isMissing then L8() else L9(options);
  L8():
    p2 = prom<V +>{
      getOption2 = ldf getOption;
      r4 = dyn getOption2("socketOptions");
      return r4;
    };
    goto L9(p2);
  L9(options_orDefault):
    st options = options_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L10(r7):
    popenv;
    return r7;
  L11():
    host1 = ld host;
    check L13() else D0();
  L12():
    r6 = dyn base(<lang socketConnection(host, port, server, blocking, open, encoding, timeout, options)>);
    goto L10(r6);
  D0():
    deopt 2 [host1];
  L13():
    host2 = force? host1;
    checkMissing(host2);
    port1 = ld port;
    check L14() else D1();
  D1():
    deopt 4 [port1];
  L14():
    port2 = force? port1;
    checkMissing(port2);
    server1 = ld server;
    check L15() else D2();
  D2():
    deopt 6 [server1];
  L15():
    server2 = force? server1;
    checkMissing(server2);
    blocking1 = ld blocking;
    check L16() else D3();
  D3():
    deopt 8 [blocking1];
  L16():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    open1 = ld open;
    check L17() else D4();
  D4():
    deopt 10 [open1];
  L17():
    open2 = force? open1;
    checkMissing(open2);
    encoding1 = ld encoding;
    check L18() else D5();
  D5():
    deopt 12 [encoding1];
  L18():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    timeout1 = ld timeout;
    check L19() else D6();
  D6():
    deopt 14 [timeout1];
  L19():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    options1 = ld options;
    check L20() else D7();
  D7():
    deopt 16 [options1];
  L20():
    options2 = force? options1;
    checkMissing(options2);
    socketConnection = ldf socketConnection in base;
    r8 = dyn socketConnection(host2, port2, server2, blocking2, open2, encoding2, timeout2, options2);
    check L21() else D8();
  D8():
    deopt 19 [r8];
  L21():
    goto L10(r8);
  }
}