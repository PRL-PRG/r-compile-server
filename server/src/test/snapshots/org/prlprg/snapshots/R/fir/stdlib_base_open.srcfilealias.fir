fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1524654321;
    st `open.srcfilealias` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1524654321(con, line, `...`) {
  (reg con:*, reg line:*, reg ddd:dots) -+> V { var con:*, var line:*, var `...`:dots?, reg open:cls, reg con1:*, reg con2:V, reg c:L, reg con4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg line1:*, reg line2:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st con = con;
    st line = line;
    st `...` = ddd;
    open = ldf open;
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
    p1 = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    ddd1 = ld `...`;
    r3 = dyn open[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}