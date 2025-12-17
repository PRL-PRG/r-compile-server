fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2674830739;
    st `split.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2674830739(x, f, drop, `...`) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg lapply:cls, reg split_default:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg f1:*, reg f2:V, reg p1:p(V +), reg drop1:*, reg drop2:V, reg p2:p(V +), reg ddd1:dots?, reg r6:V, reg p3:p(V +), reg _Date:*, reg _Date1:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r11:V, reg p5:p(V +), reg r13:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    lapply = ldf lapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      split_default = ldf `split.default`;
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
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p2 = prom<V +>{
        drop1 = ld drop;
        drop2 = force? drop1;
        checkMissing(drop2);
        return drop2;
      };
      ddd1 = ld `...`;
      r6 = dyn split_default[, , drop, `...`](p, p1, p2, ddd1);
      return r6;
    };
    p4 = prom<V +>{
      _Date = ld `.Date`;
      _Date1 = force? _Date;
      checkMissing(_Date1);
      return _Date1;
    };
    p5 = prom<V +>{
      sym1 = ldf oldClass;
      base1 = ldf oldClass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      oldClass = ldf oldClass in base;
      r11 = dyn oldClass(x4);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym x>);
      goto L0(r9);
    };
    r13 = dyn lapply(p3, p4, p5);
    check L2() else D1();
  D1():
    deopt 5 [r13];
  L2():
    popenv;
    return r13;
  }
}