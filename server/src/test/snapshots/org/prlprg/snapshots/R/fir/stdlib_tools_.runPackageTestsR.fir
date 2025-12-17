fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.runPackageTestsR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg cat:cls, reg r:V, reg _runPackageTests:cls, reg ddd1:dots?, reg r1:V, reg q:cls, reg status:*, reg status1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st `...` = ddd;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat("\n");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    _runPackageTests = ldf `.runPackageTests`;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    ddd1 = ld `...`;
    r1 = dyn _runPackageTests[`...`](ddd1);
    check L3() else D3();
  D3():
    deopt 7 [r1];
  L3():
    st status = r1;
    q = ldf q;
    check L4() else D4();
  D4():
    deopt 10 [];
  L4():
    p = prom<V +>{
      status = ld status;
      status1 = force? status;
      checkMissing(status1);
      return status1;
    };
    r3 = dyn q[, status]("no", p);
    check L5() else D5();
  D5():
    deopt 14 [r3];
  L5():
    popenv;
    return r3;
  }
}