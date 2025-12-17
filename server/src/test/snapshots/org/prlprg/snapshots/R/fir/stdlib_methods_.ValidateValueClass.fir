fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2457756281;
    st `.ValidateValueClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2457756281(fdef, name, valueClass) {
  (reg fdef:*, reg name:*, reg valueClass:*) -+> V { var fdef:*, var name:*, var valueClass:*, reg body:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg l:*, reg body__:cls, reg environment:cls, reg fdef3:*, reg fdef4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg fdef5:*, reg fdef6:V |
    mkenv;
    st fdef = fdef;
    st name = name;
    st valueClass = valueClass;
    body = ldf body;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn body(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st fbody = r1;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    l = ld fdef;
    body__ = ldf `body<-`;
    check L5() else D2();
  L3():
    substitute = ldf substitute in base;
    r4 = dyn substitute(<lang {
      `<-`(ans, EXPR);
      .valueClassTest(ans, VALUECLASS, FNAME)
    }>, <lang list(EXPR=fbody, VALUECLASS=valueClass, FNAME=name)>);
    goto L0(r4);
  L4():
    r2 = dyn base(<lang {
      `<-`(ans, EXPR);
      .valueClassTest(ans, VALUECLASS, FNAME)
    }>, <lang list(EXPR=fbody, VALUECLASS=valueClass, FNAME=name)>);
    goto L0(r2);
  D2():
    deopt 9 [r3, l, r3];
  L5():
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r6 = dyn environment(p1);
      return r6;
    };
    r8 = dyn body__[, , envir, ](l, NULL, p2, r3);
    check L6() else D3();
  D3():
    deopt 13 [r3, r8];
  L6():
    st fdef = r8;
    fdef5 = ld fdef;
    check L7() else D4();
  D4():
    deopt 15 [fdef5];
  L7():
    fdef6 = force? fdef5;
    checkMissing(fdef6);
    popenv;
    return fdef6;
  }
}