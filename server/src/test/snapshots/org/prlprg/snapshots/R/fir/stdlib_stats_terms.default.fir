fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `terms.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg ____:cls, reg ____1:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x5:*, reg x6:V, reg attr:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg stop:cls, reg r8:V, reg p3:p(V +), reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      ____1 = ldf `%||%`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r = `$`(x4, <sym terms>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        sym = ldf attr;
        base = ldf attr in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        attr = ldf attr in base;
        r4 = dyn attr(x6, "terms");
        goto L0(r4);
      L2():
        r2 = dyn base(<sym x>, "terms");
        goto L0(r2);
      };
      r6 = dyn ____1(p, p1);
      return r6;
    };
    p3 = prom<V +>{
      stop = ldf stop;
      r8 = dyn stop("no terms component nor attribute");
      return r8;
    };
    r10 = dyn ____(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r10];
  L1():
    popenv;
    return r10;
  }
}