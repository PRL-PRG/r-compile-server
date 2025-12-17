fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `case.names.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg rownames:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    rownames = ldf rownames;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn rownames(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}