fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1710856591;
    st `.defenv_for_S3_registry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1710856591(genfun) {
  (reg genfun:*) -+> V { var genfun:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg genfun1:*, reg genfun2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg topenv:cls, reg environment:cls, reg genfun3:*, reg genfun4:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V |
    mkenv;
    st genfun = genfun;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r3 = `==`(r1, "closure");
    c = `as.logical`(r3);
    if c then L6() else L1();
  L2():
    genfun1 = ld genfun;
    check L4() else D0();
  L3():
    r = dyn base(<sym genfun>);
    goto L0(r);
  D0():
    deopt 2 [genfun1];
  L1():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L10() else D4();
  L4():
    genfun2 = force? genfun1;
    checkMissing(genfun2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(genfun2);
    check L5() else D1();
  L6():
    topenv = ldf topenv;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 12 [_BaseNamespaceEnv];
  L5():
    goto L0(r2);
  L7():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        genfun3 = ld genfun;
        genfun4 = force? genfun3;
        checkMissing(genfun4);
        return genfun4;
      };
      r5 = dyn environment(p);
      return r5;
    };
    r7 = dyn topenv(p1);
    check L8() else D3();
  L10():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    popenv;
    return _BaseNamespaceEnv1;
  D3():
    deopt 11 [r7];
  L8():
    popenv;
    return r7;
  }
}