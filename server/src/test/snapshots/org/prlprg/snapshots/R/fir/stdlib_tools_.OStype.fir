fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.OStype` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg Sys_getenv:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    Sys_getenv = ldf `Sys.getenv`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym OS.type>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn Sys_getenv[, unset, names]("R_OSTYPE", p, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}