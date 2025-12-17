fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.SHLIB` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _shlib_internal:cls, reg commandArgs:cls, reg r:V, reg p:p(V +), reg r2:V, reg q:cls, reg status:*, reg status1:V, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    _shlib_internal = ldf `.shlib_internal`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      commandArgs = ldf commandArgs;
      r = dyn commandArgs(TRUE);
      return r;
    };
    r2 = dyn _shlib_internal(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    st status = r2;
    q = ldf q;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      status = ld status;
      status1 = force? status;
      checkMissing(status1);
      r3 = `!=`(status1, 0.0);
      visible.0();
      return r3;
    };
    r5 = dyn q[, status, runLast]("no", p1, FALSE);
    check L3() else D3();
  D3():
    deopt 12 [r5];
  L3():
    popenv;
    return r5;
  }
}