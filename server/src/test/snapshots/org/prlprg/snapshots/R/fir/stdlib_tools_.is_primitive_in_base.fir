fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3498582957;
    st `.is_primitive_in_base` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3498582957(fname) {
  (reg fname:*) -+> V { var fname:*, reg is_primitive:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg baseenv:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fname1:*, reg fname2:V, reg __:cls, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    st fname = fname;
    is_primitive = ldf `is.primitive`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf baseenv;
      base = ldf baseenv in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L2():
      baseenv = ldf baseenv in base;
      r2 = dyn baseenv();
      goto L0(r2);
    L3():
      r = dyn base();
      goto L0(r);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r4):
      fname1 = ld fname;
      fname2 = force? fname1;
      __ = ldf `[[` in base;
      r5 = dyn __(r4, fname2);
      goto L1(r5);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r7 = dyn is_primitive(p);
    check L1() else D1();
  D1():
    deopt 3 [r7];
  L1():
    popenv;
    return r7;
  }
}