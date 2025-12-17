fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner267380696;
    st `plot.medpolish` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner267380696(x, main, `...`) {
  (reg x:*, reg main:*, reg ddd:dots) -+> V { var x:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `...`:dots?, reg plot:cls, reg outer:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg r4:V, reg x9:*, reg x10:V, reg c2:L, reg r6:V, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r8:V, reg dx5:V, reg r9:V, reg r10:V, reg p2:p(V +), reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p3:p(V +), reg main1:*, reg main2:V, reg p4:p(V +), reg ddd1:dots?, reg r15:V, reg abline:cls, reg r16:V |
    mkenv;
    st x = x;
    main_isMissing = missing.0(main);
    if main_isMissing then L0("Tukey Additivity Plot") else L0(main);
  L0(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    plot = ldf plot;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      outer = ldf outer;
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
        r = `$`(x4, <sym row>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c1 = `is.object`(x6);
        if c1 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r2 = `$`(x8, <sym col>);
        goto L0(r2);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r4 = dyn outer(p, p1);
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(r4, x10);
    L0(r8, dx5):
      r10 = `/`(r8, dx5);
      return r10;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(r4, dr4);
    L2(r6, x12):
      r9 = `$`(x12, <sym overall>);
      goto L0(r6, r9);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(r4, dx4);
    };
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r12 = `$`(x16, <sym residuals>);
      goto L0(r12);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p4 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd1 = ld `...`;
    r15 = dyn plot[, , main, xlab, ylab, `...`](p2, p3, p4, "Diagnostic Comparison Values", "Residuals", ddd1);
    check L2() else D1();
  D1():
    deopt 11 [r15];
  L2():
    abline = ldf abline;
    check L3() else D2();
  D2():
    deopt 13 [];
  L3():
    r16 = dyn abline[h, v, lty](0.0, 0.0, "dotted");
    check L4() else D3();
  D3():
    deopt 20 [r16];
  L4():
    popenv;
    return r16;
  }
}