fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2854634098;
    st port_get_named_v = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg setNames:cls, reg v1:*, reg v2:V, reg c:L, reg v4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg port_v_nms:*, reg port_v_nms1:V, reg __:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg port_v_nms2:*, reg port_v_nms3:V, reg names:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st v = v;
    setNames = ldf setNames;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      c = `is.object`(v2);
      if c then L1() else L2(v2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", v2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(v4):
      port_v_nms = ld port_v_nms;
      port_v_nms1 = force? port_v_nms;
      __ = ldf `[` in base;
      r = dyn __(v4, port_v_nms1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      port_v_nms2 = ld port_v_nms;
      port_v_nms3 = force? port_v_nms2;
      checkMissing(port_v_nms3);
      names = ldf names in base;
      r4 = dyn names(port_v_nms3);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym port_v_nms>);
      goto L0(r2);
    };
    r6 = dyn setNames(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    popenv;
    return r6;
  }
}