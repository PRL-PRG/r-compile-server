fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner986480139;
    st socketAccept = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner986480139(socket, blocking, open, encoding, timeout, options) {
  (reg socket:*, reg blocking:*, reg open:*, reg encoding:*, reg timeout:*, reg options:*) -+> V { var socket:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var options:*, reg options_isMissing:L, reg options_orDefault:*, reg getOption2:cls, reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg socket1:*, reg socket2:V, reg blocking1:*, reg blocking2:V, reg open1:*, reg open2:V, reg encoding1:*, reg encoding2:V, reg timeout1:*, reg timeout2:V, reg options1:*, reg options2:V, reg socketAccept:cls, reg r8:V |
    mkenv;
    st socket = socket;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L0(FALSE) else L0(blocking);
  L0(blocking_orDefault):
    st blocking = blocking_orDefault;
    open_isMissing = missing.0(open);
    if open_isMissing then L1("a+") else L1(open);
  L1(open_orDefault):
    st open = open_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2() else L3(encoding);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L3(p);
  L3(encoding_orDefault):
    st encoding = encoding_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L4() else L5(timeout);
  L4():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("timeout");
      return r2;
    };
    goto L5(p1);
  L5(timeout_orDefault):
    st timeout = timeout_orDefault;
    options_isMissing = missing.0(options);
    if options_isMissing then L6() else L7(options);
  L6():
    p2 = prom<V +>{
      getOption2 = ldf getOption;
      r4 = dyn getOption2("socketOptions");
      return r4;
    };
    goto L7(p2);
  L7(options_orDefault):
    st options = options_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L8(r7):
    popenv;
    return r7;
  L9():
    socket1 = ld socket;
    check L11() else D0();
  L10():
    r6 = dyn base(<lang socketAccept(socket, blocking, open, encoding, timeout, options)>);
    goto L8(r6);
  D0():
    deopt 2 [socket1];
  L11():
    socket2 = force? socket1;
    checkMissing(socket2);
    blocking1 = ld blocking;
    check L12() else D1();
  D1():
    deopt 4 [blocking1];
  L12():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    open1 = ld open;
    check L13() else D2();
  D2():
    deopt 6 [open1];
  L13():
    open2 = force? open1;
    checkMissing(open2);
    encoding1 = ld encoding;
    check L14() else D3();
  D3():
    deopt 8 [encoding1];
  L14():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    timeout1 = ld timeout;
    check L15() else D4();
  D4():
    deopt 10 [timeout1];
  L15():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    options1 = ld options;
    check L16() else D5();
  D5():
    deopt 12 [options1];
  L16():
    options2 = force? options1;
    checkMissing(options2);
    socketAccept = ldf socketAccept in base;
    r8 = dyn socketAccept(socket2, blocking2, open2, encoding2, timeout2, options2);
    check L17() else D6();
  D6():
    deopt 15 [r8];
  L17():
    goto L8(r8);
  }
}