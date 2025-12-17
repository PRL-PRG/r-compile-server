fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3298491467;
    st `.genericAssign` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3298491467(f, fdef, methods, where, deflt) {
  (reg f:*, reg fdef:*, reg methods:*, reg where:*, reg deflt:*) -+> V { var f:*, var fdef:*, var methods:*, var where:*, var deflt:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg assign:cls, reg methods1:*, reg methods2:V, reg p1:p(V +), reg ev:*, reg ev1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    st methods = methods;
    st where = where;
    st deflt = deflt;
    environment = ldf environment;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn environment(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st ev = r1;
    assign = ldf assign;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      methods1 = ld methods;
      methods2 = force? methods1;
      checkMissing(methods2);
      return methods2;
    };
    p2 = prom<V +>{
      ev = ld ev;
      ev1 = force? ev;
      checkMissing(ev1);
      return ev1;
    };
    r4 = dyn assign(".Methods", p1, p2);
    check L3() else D3();
  D3():
    deopt 10 [r4];
  L3():
    popenv;
    return r4;
  }
}