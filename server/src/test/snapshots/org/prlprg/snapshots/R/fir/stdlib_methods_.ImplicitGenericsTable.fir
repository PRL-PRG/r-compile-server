fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3253127715;
    st `.ImplicitGenericsTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3253127715(where) {
  (reg where:*) -+> V { var where:*, reg exists:cls, reg _ImplicitGenericsMetaName:*, reg _ImplicitGenericsMetaName1:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg assign:cls, reg _ImplicitGenericsMetaName2:*, reg _ImplicitGenericsMetaName3:V, reg p2:p(V +), reg new_env:cls, reg r5:V, reg p3:p(V +), reg where3:*, reg where4:V, reg p4:p(V +), reg r8:V, reg get:cls, reg _ImplicitGenericsMetaName4:*, reg _ImplicitGenericsMetaName5:V, reg p5:p(V +), reg where5:*, reg where6:V, reg p6:p(V +), reg r12:V |
    mkenv;
    st where = where;
    exists = ldf exists;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      _ImplicitGenericsMetaName = ld `.ImplicitGenericsMetaName`;
      _ImplicitGenericsMetaName1 = force? _ImplicitGenericsMetaName;
      checkMissing(_ImplicitGenericsMetaName1);
      return _ImplicitGenericsMetaName1;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn exists[, , inherits](p, p1, FALSE);
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    get = ldf get;
    check L8() else D4();
  L4():
    assign = ldf assign;
    check L5() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 17 [];
  L5():
    p2 = prom<V +>{
      _ImplicitGenericsMetaName2 = ld `.ImplicitGenericsMetaName`;
      _ImplicitGenericsMetaName3 = force? _ImplicitGenericsMetaName2;
      checkMissing(_ImplicitGenericsMetaName3);
      return _ImplicitGenericsMetaName3;
    };
    p3 = prom<V +>{
      new_env = ldf `new.env`;
      r5 = dyn new_env(TRUE);
      return r5;
    };
    p4 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r8 = dyn assign(p2, p3, p4);
    check L6() else D3();
  L8():
    p5 = prom<V +>{
      _ImplicitGenericsMetaName4 = ld `.ImplicitGenericsMetaName`;
      _ImplicitGenericsMetaName5 = force? _ImplicitGenericsMetaName4;
      checkMissing(_ImplicitGenericsMetaName5);
      return _ImplicitGenericsMetaName5;
    };
    p6 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r12 = dyn get(p5, p6);
    check L9() else D5();
  D3():
    deopt 13 [r8];
  D5():
    deopt 20 [r12];
  L6():
    goto L1();
  L9():
    popenv;
    return r12;
  }
}