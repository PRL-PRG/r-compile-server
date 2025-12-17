fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2386108811;
    st `weighted.mean.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2386108811(x, w, `...`) {
  (reg x:*, reg w:*, reg ddd:dots) -+> V { var x:*, var w:*, var `...`:dots?, reg _difftime:cls, reg weighted_mean:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg w1:*, reg w2:V, reg p1:p(V +), reg ddd1:dots?, reg r5:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg attr:cls, reg r9:V, reg p3:p(V +), reg r11:V |
    mkenv;
    st x = x;
    st w = w;
    st `...` = ddd;
    _difftime = ldf `.difftime`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      weighted_mean = ldf `weighted.mean`;
      p = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        unclass = ldf unclass in base;
        r2 = dyn unclass(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      p1 = prom<V +>{
        w1 = ld w;
        w2 = force? w1;
        checkMissing(w2);
        return w2;
      };
      ddd1 = ld `...`;
      r5 = dyn weighted_mean[, , `...`](p, p1, ddd1);
      return r5;
    };
    p3 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r9 = dyn attr(x4, "units");
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym x>, "units");
      goto L0(r7);
    };
    r11 = dyn _difftime(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r11];
  L1():
    popenv;
    return r11;
  }
}