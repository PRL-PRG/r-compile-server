fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083333630`;
    st tracingState = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083333630`(on) {
  (reg on:*) -+> V { var on:*, reg on_isMissing:L, reg on_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg on1:*, reg on2:V, reg traceOnOff:cls, reg r2:V |
    mkenv;
    on_isMissing = missing.0(on);
    if on_isMissing then L0(NULL) else L0(on);
  L0(on_orDefault):
    st on = on_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    on1 = ld on;
    check L4() else D0();
  L3():
    r = dyn base(<lang traceOnOff(on)>);
    goto L1(r);
  D0():
    deopt 2 [on1];
  L4():
    on2 = force? on1;
    checkMissing(on2);
    traceOnOff = ldf traceOnOff in base;
    r2 = dyn traceOnOff(on2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}