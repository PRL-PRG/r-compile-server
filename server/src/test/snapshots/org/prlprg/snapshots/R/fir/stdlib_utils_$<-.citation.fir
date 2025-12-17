fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `$<-.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg _citation:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    _citation = ldf `.citation`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("$<-");
      return r;
    };
    p1 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r4 = dyn attr(x2, "package");
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>, "package");
      goto L0(r2);
    };
    r6 = dyn _citation(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    popenv;
    return r6;
  }
}