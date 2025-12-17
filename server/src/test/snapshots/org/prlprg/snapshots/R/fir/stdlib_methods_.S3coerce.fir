fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner838351097;
    st `.S3coerce` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg __:cls, reg r:V, reg r1:cls, reg from1:*, reg from2:V, reg p:p(V +), reg r3:V |
    mkenv;
    st from = from;
    st to = to;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("methods", "S3Part");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    r3 = dyn r1(p);
    check L2() else D2();
  D2():
    deopt 7 [r3];
  L2():
    popenv;
    return r3;
  }
}