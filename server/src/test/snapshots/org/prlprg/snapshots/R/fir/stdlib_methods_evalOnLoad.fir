fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner43458643;
    st evalOnLoad = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner43458643(expr, where, aname) {
  (reg expr:*, reg where:*, reg aname:*) -+> V { var expr:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var aname:*, reg aname_isMissing:L, reg aname_orDefault:*, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg l:*, reg body__:cls, reg where1:*, reg where2:V, reg p2:p(V +), reg r9:V, reg setLoadAction:cls, reg f:*, reg f1:V, reg p3:p(V +), reg aname1:*, reg aname2:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r13:V |
    mkenv;
    st expr = expr;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    aname_isMissing = missing.0(aname);
    if aname_isMissing then L2("") else L2(aname);
  L2(aname_orDefault):
    st aname = aname_orDefault;
    r4 = clos inner2916718377;
    st f = r4;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r6):
    l = ld f;
    body__ = ldf `body<-`;
    check L6() else D0();
  L4():
    substitute = ldf substitute in base;
    r7 = dyn substitute(<lang eval(EXPR, ENV)>, <lang list(EXPR=expr, ENV=where)>);
    goto L3(r7);
  L5():
    r5 = dyn base(<lang eval(EXPR, ENV)>, <lang list(EXPR=expr, ENV=where)>);
    goto L3(r5);
  D0():
    deopt 7 [r6, l, r6];
  L6():
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn body__(l, NULL, p2, r6);
    check L7() else D1();
  D1():
    deopt 10 [r6, r9];
  L7():
    st f = r9;
    setLoadAction = ldf setLoadAction;
    check L8() else D2();
  D2():
    deopt 13 [];
  L8():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p4 = prom<V +>{
      aname1 = ld aname;
      aname2 = force? aname1;
      checkMissing(aname2);
      return aname2;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r13 = dyn setLoadAction(p3, p4, p5);
    check L9() else D3();
  D3():
    deopt 17 [r13];
  L9():
    popenv;
    return r13;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:* |
    mkenv;
    st env = env;
    popenv;
    return NULL;
  }
}