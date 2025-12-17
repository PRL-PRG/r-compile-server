fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `.SSassign` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg assign:cls, reg _SSname:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg value1:*, reg value2:V, reg p2:p(V +), reg _SSenv:*, reg _SSenv1:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st x = x;
    st value = value;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _SSname = ldf `.SSname`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn _SSname(p);
      return r1;
    };
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p3 = prom<V +>{
      _SSenv = ld `.SSenv`;
      _SSenv1 = force? _SSenv;
      checkMissing(_SSenv1);
      return _SSenv1;
    };
    r5 = dyn assign[, , envir](p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}