fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.gblEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l:*, reg environment__:cls, reg r:V, reg f1:*, reg f2:V |
    mkenv;
    st f = f;
    _GlobalEnv = ld `.GlobalEnv`;
    check L0() else D0();
  D0():
    deopt 0 [_GlobalEnv];
  L0():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    l = ld f;
    environment__ = ldf `environment<-`;
    check L1() else D1();
  D1():
    deopt 3 [_GlobalEnv1, l, _GlobalEnv1];
  L1():
    r = dyn environment__(l, NULL, _GlobalEnv1);
    check L2() else D2();
  D2():
    deopt 5 [_GlobalEnv1, r];
  L2():
    st f = r;
    f1 = ld f;
    check L3() else D3();
  D3():
    deopt 7 [f1];
  L3():
    f2 = force? f1;
    checkMissing(f2);
    popenv;
    return f2;
  }
}