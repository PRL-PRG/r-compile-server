fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.list.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg _difftime:*, reg _difftime1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr:cls, reg r7:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    lapply = ldf lapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
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
      _difftime = ld `.difftime`;
      _difftime1 = force? _difftime;
      checkMissing(_difftime1);
      return _difftime1;
    };
    p2 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r7 = dyn attr(x4, "units");
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym x>, "units");
      goto L0(r5);
    };
    p3 = prom<V +>{
      sym2 = ldf oldClass;
      base2 = ldf oldClass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      oldClass = ldf oldClass in base;
      r11 = dyn oldClass(x6);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym x>);
      goto L0(r9);
    };
    r13 = dyn lapply(p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 6 [r13];
  L1():
    popenv;
    return r13;
  }
}