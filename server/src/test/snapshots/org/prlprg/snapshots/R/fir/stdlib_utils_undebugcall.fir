fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1966010878;
    st undebugcall = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1966010878(call) {
  (reg call:*) -+> V { var call:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg _debugcall:cls, reg call1:*, reg call2:V, reg p:p(V +), reg undebug:*, reg undebug1:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg invisible:cls, reg r8:V |
    mkenv;
    st call = call;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st call = r1;
    _debugcall = ldf `.debugcall`;
    check L4() else D0();
  L2():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym call>);
    goto L0(r2);
  L3():
    r = dyn base(<sym call>);
    goto L0(r);
  D0():
    deopt 5 [];
  L4():
    p = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    p1 = prom<V +>{
      undebug = ld undebug;
      undebug1 = force? undebug;
      checkMissing(undebug1);
      return undebug1;
    };
    r5 = dyn _debugcall(p, p1);
    check L5() else D1();
  D1():
    deopt 8 [r5];
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r7):
    popenv;
    return r7;
  L6():
    invisible = ldf invisible in base;
    r8 = dyn invisible(NULL);
    check L8() else D2();
  L7():
    r6 = dyn base1(NULL);
    goto L1(r6);
  D2():
    deopt 13 [r8];
  L8():
    goto L1(r8);
  }
}