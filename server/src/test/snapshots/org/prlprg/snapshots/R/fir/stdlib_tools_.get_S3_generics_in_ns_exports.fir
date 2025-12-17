fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2310282661;
    st `.get_S3_generics_in_ns_exports` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg sort:cls, reg intersect:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg env:*, reg env1:V, reg names:cls, reg r4:V, reg p1:p(V +), reg getNamespaceExports:cls, reg env2:*, reg env3:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg _get_S3_generics_in_env:cls, reg env4:*, reg env5:V, reg p5:p(V +), reg nms:*, reg nms1:V, reg p6:p(V +), reg r14:V |
    mkenv;
    st ns = ns;
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
    r1 = dyn asNamespace(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st env = r1;
    sort = ldf sort;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p4 = prom<V +>{
      intersect = ldf intersect;
      p1 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        names = ldf names in base;
        r4 = dyn names(env1);
        goto L0(r4);
      L2():
        r2 = dyn base(<sym env>);
        goto L0(r2);
      };
      p3 = prom<V +>{
        getNamespaceExports = ldf getNamespaceExports;
        p2 = prom<V +>{
          env2 = ld env;
          env3 = force? env2;
          checkMissing(env3);
          return env3;
        };
        r7 = dyn getNamespaceExports(p2);
        return r7;
      };
      r9 = dyn intersect(p1, p3);
      return r9;
    };
    r11 = dyn sort(p4);
    check L3() else D3();
  D3():
    deopt 8 [r11];
  L3():
    st nms = r11;
    _get_S3_generics_in_env = ldf `.get_S3_generics_in_env`;
    check L4() else D4();
  D4():
    deopt 11 [];
  L4():
    p5 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    p6 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r14 = dyn _get_S3_generics_in_env(p5, p6);
    check L5() else D5();
  D5():
    deopt 14 [r14];
  L5():
    popenv;
    return r14;
  }
}