fun main() {
  () -+> V { reg r:cls, reg relevel:cls, reg warpbreaks:*, reg warpbreaks1:V, reg c:L, reg warpbreaks3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg l:*, reg c1:L, reg r5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg summary:cls, reg lm:cls, reg __:cls, reg r9:V, reg p1:p(V +), reg warpbreaks4:*, reg warpbreaks5:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V |
    mkenv;
    r = clos inner238421359;
    st relevel = r;
    relevel = ldf relevel;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      c = `is.object`(warpbreaks1);
      if c then L1() else L2(warpbreaks1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", warpbreaks1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(warpbreaks3):
      r1 = `$`(warpbreaks3, <sym tension>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn relevel[, ref](p, "M");
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    l = ld warpbreaks;
    c1 = `is.object`(l);
    if c1 then L3() else L4(r3, l);
  L2(dx3):
    st warpbreaks = dx3;
    summary = ldf summary;
    check L6() else D2();
  L3():
    dr2 = tryDispatchBuiltin.0("$<-", l, r3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L5() else L4(r3, dr2);
  L4(r5, l2):
    r8 = `$<-`(l2, <sym tension>, r3);
    goto L2(r8);
  D2():
    deopt 13 [];
  L5():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L6():
    p3 = prom<V +>{
      lm = ldf lm;
      p1 = prom<V +>{
        __ = ldf `~` in base;
        r9 = dyn __(<sym breaks>, <lang `+`(wool, tension)>);
        return r9;
      };
      p2 = prom<V +>{
        warpbreaks4 = ld warpbreaks;
        warpbreaks5 = force? warpbreaks4;
        checkMissing(warpbreaks5);
        return warpbreaks5;
      };
      r12 = dyn lm[, data](p1, p2);
      return r12;
    };
    r14 = dyn summary(p3);
    check L7() else D3();
  D3():
    deopt 15 [r14];
  L7():
    popenv;
    return r14;
  }
}
fun inner238421359(x, ref, `...`) {
  (reg x:*, reg ref:*, reg ddd:dots) -+> V { var x:*, var ref:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st ref = ref;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("relevel");
    goto L0(r2);
  L2():
    r = dyn base("relevel");
    goto L0(r);
  }
}