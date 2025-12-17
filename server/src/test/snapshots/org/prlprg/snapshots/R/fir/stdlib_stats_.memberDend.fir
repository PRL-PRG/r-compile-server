fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.memberDend` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg ____1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg attr1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st x = x;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "x.member");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "x.member");
      goto L0(r);
    };
    p2 = prom<V +>{
      ____1 = ldf `%||%`;
      p1 = prom<V +>{
        sym1 = ldf attr;
        base1 = ldf attr in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        attr1 = ldf attr in base;
        r6 = dyn attr1(x4, "members");
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>, "members");
        goto L0(r4);
      };
      r8 = dyn ____1(p1, 1);
      visible.0();
      return r8;
    };
    r10 = dyn ____(p, p2);
    check L1() else D1();
  D1():
    deopt 4 [r10];
  L1():
    popenv;
    return r10;
  }
}