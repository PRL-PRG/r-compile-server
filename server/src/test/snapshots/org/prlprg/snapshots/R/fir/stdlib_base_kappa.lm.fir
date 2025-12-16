fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1435282401;
    st `kappa.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1435282401(z, `...`) {
  (reg z:*, reg ddd:dots) -+> V { var z:*, var `...`:dots?, reg kappa_qr:cls, reg z1:*, reg z2:V, reg c:L, reg z4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st z = z;
    st `...` = ddd;
    kappa_qr = ldf `kappa.qr`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      c = `is.object`(z2);
      if c then L1() else L2(z2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", z2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z4):
      r = `$`(z4, <sym qr>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r2 = dyn kappa_qr[, `...`](p, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}