fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `plot.decomposed.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg ____:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg with:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg type:*, reg type1:V, reg r5:V, reg c1:L, reg random:*, reg random1:V, reg trend:*, reg trend1:V, reg r6:V, reg seasonal:*, reg seasonal1:V, reg r7:V, reg random2:*, reg random3:V, reg trend2:*, reg trend3:V, reg r8:V, reg seasonal2:*, reg seasonal3:V, reg r9:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg plot:cls, reg cbind:cls, reg xx:*, reg xx1:V, reg p4:p(V +), reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p5:p(V +), reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg p6:p(V +), reg x15:*, reg x16:V, reg c4:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r19:V, reg p7:p(V +), reg r21:V, reg p8:p(V +), reg paste:cls, reg x19:*, reg x20:V, reg c5:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r23:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg ddd1:dots?, reg r27:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
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
      r = `$`(x4, <sym x>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      sym = ldf with;
      base = ldf with in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      with = ldf with;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p2 = prom<V +>{
        type = ld type;
        type1 = force? type;
        checkMissing(type1);
        r5 = `==`(type1, "additive");
        c1 = `as.logical`(r5);
        if c1 then L1() else L0();
      L0():
        random2 = ld random;
        random3 = force? random2;
        checkMissing(random3);
        trend2 = ld trend;
        trend3 = force? trend2;
        checkMissing(trend3);
        r8 = `*`(random3, trend3);
        seasonal2 = ld seasonal;
        seasonal3 = force? seasonal2;
        checkMissing(seasonal3);
        r9 = `*`(r8, seasonal3);
        return r9;
      L1():
        random = ld random;
        random1 = force? random;
        checkMissing(random1);
        trend = ld trend;
        trend1 = force? trend;
        checkMissing(trend1);
        r6 = `+`(random1, trend1);
        seasonal = ld seasonal;
        seasonal1 = force? seasonal;
        checkMissing(seasonal1);
        r7 = `+`(r6, seasonal1);
        return r7;
      };
      r11 = dyn with(p1, p2);
      goto L0(r11);
    L2():
      r2 = dyn base(<sym x>, <lang if(`==`(type, "additive"), `+`(`+`(random, trend), seasonal), `*`(`*`(random, trend), seasonal))>);
      goto L0(r2);
    };
    r13 = dyn ____(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r13];
  L1():
    st xx = r13;
    plot = ldf plot;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p8 = prom<V +>{
      cbind = ldf cbind;
      p4 = prom<V +>{
        xx = ld xx;
        xx1 = force? xx;
        checkMissing(xx1);
        return xx1;
      };
      p5 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        c2 = `is.object`(x8);
        if c2 then L1() else L2(x8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x10):
        r15 = `$`(x10, <sym trend>);
        goto L0(r15);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p6 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c3 = `is.object`(x12);
        if c3 then L1() else L2(x12);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x14):
        r17 = `$`(x14, <sym seasonal>);
        goto L0(r17);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p7 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c4 = `is.object`(x16);
        if c4 then L1() else L2(x16);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x16);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x18):
        r19 = `$`(x18, <sym random>);
        goto L0(r19);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r21 = dyn cbind[observed, trend, seasonal, random](p4, p5, p6, p7);
      return r21;
    };
    p10 = prom<V +>{
      paste = ldf paste;
      p9 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        c5 = `is.object`(x20);
        if c5 then L1() else L2(x20);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", x20);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x22):
        r23 = `$`(x22, <sym type>);
        goto L0(r23);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r25 = dyn paste("Decomposition of", p9, "time series");
      return r25;
    };
    ddd1 = ld `...`;
    r27 = dyn plot[, main, `...`](p8, p10, ddd1);
    check L3() else D3();
  D3():
    deopt 12 [r27];
  L3():
    popenv;
    return r27;
  }
}