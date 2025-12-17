fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.xngettext` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg lapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg invisible:cls, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    lapply = ldf lapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      r1 = clos inner2501545716;
      return r1;
    };
    r3 = dyn lapply(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r3];
  L2():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r5):
    popenv;
    return r5;
  L3():
    x3 = ld x;
    check L5() else D2();
  L4():
    r4 = dyn base(<sym x>);
    goto L0(r4);
  D2():
    deopt 7 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r6 = dyn invisible(x4);
    check L6() else D3();
  D3():
    deopt 10 [r6];
  L6():
    goto L0(r6);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg encodeString:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg cat:cls, reg e:*, reg e1:V, reg c:L, reg e3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p1:p(V +), reg e4:*, reg e5:V, reg c1:L, reg e7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st x = x;
    encodeString = ldf encodeString;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn encodeString(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st e = r1;
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      c = `is.object`(e1);
      if c then L1() else L2(e1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e3):
      __ = ldf `[` in base;
      r2 = dyn __(e3, 1);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      e4 = ld e;
      e5 = force? e4;
      checkMissing(e5);
      c1 = `is.object`(e5);
      if c1 then L1() else L2(e5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", e5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(e7):
      __1 = ldf `[` in base;
      r4 = dyn __1(e7, 2);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn cat[, , , , , sep]("\nmsgid        = ", p1, "\nmsgid_plural = ", p2, "\n", "");
    check L3() else D3();
  D3():
    deopt 14 [r6];
  L3():
    popenv;
    return r6;
  }
}