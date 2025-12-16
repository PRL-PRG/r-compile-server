fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.default` = r;
    st `row.names` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg rownames__:cls, reg x1:*, reg x2:V, reg p:p(V +), reg value1:*, reg value2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st value = value;
    rownames__ = ldf `rownames<-`;
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
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r2 = dyn rownames__(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}