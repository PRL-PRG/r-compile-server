fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st Pair = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg cbind:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg l:*, reg class__:cls, reg r3:V, reg pp:*, reg pp1:V |
    mkenv;
    st x = x;
    st y = y;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn cbind(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    st pp = r2;
    l = ld pp;
    class__ = ldf `class<-`;
    check L2() else D2();
  D2():
    deopt 9 ["Pair", l, "Pair"];
  L2():
    r3 = dyn class__(l, NULL, "Pair");
    check L3() else D3();
  D3():
    deopt 11 ["Pair", r3];
  L3():
    st pp = r3;
    pp = ld pp;
    check L4() else D4();
  D4():
    deopt 13 [pp];
  L4():
    pp1 = force? pp;
    checkMissing(pp1);
    popenv;
    return pp1;
  }
}