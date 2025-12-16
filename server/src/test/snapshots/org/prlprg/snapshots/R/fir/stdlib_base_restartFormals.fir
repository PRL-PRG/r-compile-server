fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1413327215;
    st restartFormals = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1413327215(r) {
  (reg r:*) -+> V { var r:*, reg formals:cls, reg r1:*, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    st r = r;
    formals = ldf formals;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r1 = ld r;
      r2 = force? r1;
      checkMissing(r2);
      c = `is.object`(r2);
      if c then L1() else L2(r2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r4):
      r5 = `$`(r4, <sym handler>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn formals(p);
    check L1() else D1();
  D1():
    deopt 3 [r7];
  L1():
    popenv;
    return r7;
  }
}