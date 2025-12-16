fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1810966873;
    st `close.srcfilealias` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1810966873(con, `...`) {
  (reg con:*, reg ddd:dots) -+> V { var con:*, var `...`:dots?, reg close:cls, reg con1:*, reg con2:V, reg c:L, reg con4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st con = con;
    st `...` = ddd;
    close = ldf close;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      c = `is.object`(con2);
      if c then L1() else L2(con2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", con2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(con4):
      r = `$`(con4, <sym original>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r2 = dyn close[, `...`](p, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}