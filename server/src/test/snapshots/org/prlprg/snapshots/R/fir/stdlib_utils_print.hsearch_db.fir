fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.hsearch_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg writeLines:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sprintf:cls, reg NROW:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg NROW1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg NROW2:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg NROW3:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg c4:cls, reg r19:V, reg p8:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg x17:*, reg x18:V, reg invisible:cls, reg r24:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    writeLines = ldf writeLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p8 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        NROW = ldf NROW;
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
          r2 = `$`(x4, <sym Base>);
          goto L0(r2);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r4 = dyn NROW(p);
        return r4;
      };
      p3 = prom<V +>{
        NROW1 = ldf NROW;
        p2 = prom<V +>{
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
          r6 = `$`(x8, <sym Aliases>);
          goto L0(r6);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r8 = dyn NROW1(p2);
        return r8;
      };
      p5 = prom<V +>{
        NROW2 = ldf NROW;
        p4 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          c2 = `is.object`(x10);
          if c2 then L1() else L2(x10);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("$", x10);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(x12):
          r10 = `$`(x12, <sym Keywords>);
          goto L0(r10);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r12 = dyn NROW2(p4);
        return r12;
      };
      p7 = prom<V +>{
        NROW3 = ldf NROW;
        p6 = prom<V +>{
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
          r14 = `$`(x16, <sym Concepts>);
          goto L0(r14);
        L3():
          dx6 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx6);
        };
        r16 = dyn NROW3(p6);
        return r16;
      };
      r18 = dyn sprintf("Objects: %d, Aliases: %d, Keywords: %d, Concepts: %d", p1, p3, p5, p7);
      c4 = ldf c in base;
      r19 = dyn c4("A help search database:", r18);
      goto L0(r19);
    L2():
      r = dyn base("A help search database:", <lang sprintf("Objects: %d, Aliases: %d, Keywords: %d, Concepts: %d", NROW(`$`(x, Base)), NROW(`$`(x, Aliases)), NROW(`$`(x, Keywords)), NROW(`$`(x, Concepts)))>);
      goto L0(r);
    };
    r21 = dyn writeLines(p8);
    check L2() else D1();
  D1():
    deopt 3 [r21];
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r23):
    popenv;
    return r23;
  L3():
    x17 = ld x;
    check L5() else D2();
  L4():
    r22 = dyn base1(<sym x>);
    goto L0(r22);
  D2():
    deopt 6 [x17];
  L5():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r24 = dyn invisible(x18);
    check L6() else D3();
  D3():
    deopt 9 [r24];
  L6():
    goto L0(r24);
  }
}