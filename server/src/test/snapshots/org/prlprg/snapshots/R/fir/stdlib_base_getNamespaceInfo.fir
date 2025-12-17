fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1937826624;
    st getNamespaceInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1937826624(ns, which) {
  (reg ns:*, reg which:*) -+> V { var ns:*, var which:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg get:cls, reg which1:*, reg which2:V, reg p1:p(V +), reg ns3:*, reg ns4:V, reg c:L, reg ns6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st ns = ns;
    st which = which;
    asNamespace = ldf asNamespace;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn asNamespace[, `base.OK`](p, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st ns = r1;
    get = ldf get;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    p2 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      c = `is.object`(ns4);
      if c then L1() else L2(ns4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", ns4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ns6):
      __ = ldf `[[` in base;
      r3 = dyn __(ns6, ".__NAMESPACE__.");
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn get[, envir](p1, p2);
    check L3() else D3();
  D3():
    deopt 12 [r5];
  L3():
    popenv;
    return r5;
  }
}