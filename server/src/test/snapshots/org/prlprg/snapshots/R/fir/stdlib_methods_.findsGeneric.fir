fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1000267613;
    st `.findsGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1000267613(what, ns) {
  (reg what:*, reg ns:*) -+> V { var what:*, var ns:*, reg is:cls, reg get:cls, reg what1:*, reg what2:V, reg p:p(V +), reg ns1:*, reg ns2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg _getGenericFromCache:cls, reg what3:*, reg what4:V, reg p3:p(V +), reg ns3:*, reg ns4:V, reg p4:p(V +), reg r9:V, reg c1:V, reg r10:V, reg c2:L |
    mkenv;
    st what = what;
    st ns = ns;
    is = ldf is;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      get = ldf get;
      p = prom<V +>{
        what1 = ld what;
        what2 = force? what1;
        checkMissing(what2);
        return what2;
      };
      p1 = prom<V +>{
        ns1 = ld ns;
        ns2 = force? ns1;
        checkMissing(ns2);
        return ns2;
      };
      r2 = dyn get[, mode, envir](p, "function", p1);
      return r2;
    };
    r4 = dyn is(p2, "genericFunction");
    check L4() else D1();
  D1():
    deopt 4 [r4];
  L4():
    c = `as.logical`(r4);
    if c then L5() else L0();
  L0():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L5():
    popenv;
    return 1;
  L1(r6):
    r10 = `!`(r6);
    c2 = `as.logical`(r10);
    if c2 then L11() else L2();
  L7():
    _getGenericFromCache = ldf `.getGenericFromCache`;
    check L9() else D2();
  L8():
    r5 = dyn base(<lang .getGenericFromCache(what, ns)>);
    goto L1(r5);
  D2():
    deopt 9 [];
  L2():
    popenv;
    return 0;
  L9():
    p3 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p4 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r9 = dyn _getGenericFromCache(p3, p4);
    check L10() else D3();
  L11():
    popenv;
    return 2;
  D3():
    deopt 12 [r9];
  L10():
    c1 = `==`(r9, NULL);
    goto L1(c1);
  }
}