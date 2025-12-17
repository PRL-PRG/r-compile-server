fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2518445115;
    st isBaseFun = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2518445115(fun) {
  (reg fun:*) -+> V { var fun:*, reg is_primitive:cls, reg fun1:*, reg fun2:V, reg p:p(V +), reg r1:V, reg c:L, reg c1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg environment:cls, reg fun3:*, reg fun4:V, reg p1:p(V +), reg r5:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg identical:cls, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st fun = fun;
    is_primitive = ldf `is.primitive`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      fun1 = ld fun;
      fun2 = force? fun1;
      checkMissing(fun2);
      return fun2;
    };
    r1 = dyn is_primitive(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L0(c) else L4();
  L0(c1):
    popenv;
    return c1;
  L4():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(c5, r3):
    c6 = `as.logical`(r3);
    c7 = `||`(c5, c6);
    goto L0(c7);
  L5():
    environment = ldf environment;
    check L7() else D2();
  L6():
    r2 = dyn base(<lang environment(fun)>, <sym .BaseNamespaceEnv>);
    goto L1(c, r2);
  D2():
    deopt 7 [c];
  L7():
    p1 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    r5 = dyn environment(p1);
    check L8() else D3();
  D3():
    deopt 9 [c, r5];
  L8():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L9() else D4();
  D4():
    deopt 10 [c, _BaseNamespaceEnv];
  L9():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    identical = ldf identical in base;
    r6 = dyn identical(r5, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L10() else D5();
  D5():
    deopt 20 [c, r6];
  L10():
    goto L1(c, r6);
  }
}