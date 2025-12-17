fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `Sys.time` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _POSIXct:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_time:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    _POSIXct = ldf `.POSIXct`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      Sys_time = ldf `Sys.time` in base;
      r2 = dyn Sys_time();
      goto L0(r2);
    L2():
      r = dyn base(<lang Sys.time()>);
      goto L0(r);
    };
    r4 = dyn _POSIXct(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}