fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2674830739;
    st `split.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2674830739(x, f, drop, `...`) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg inherits:cls, reg r2:V, reg c:L, reg _formula2varlist:cls, reg f3:*, reg f4:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg lapply:cls, reg split:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg nrow:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r10:V, reg r11:I, reg p3:p(V +), reg f5:*, reg f6:V, reg p4:p(V +), reg drop1:*, reg drop2:V, reg p5:p(V +), reg ddd1:dots?, reg r15:V, reg p6:p(V +), reg r17:cls, reg p7:p(V +), reg r19:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L8() else L2();
  L4():
    f1 = ld f;
    check L6() else D0();
  L5():
    r = dyn base(<sym f>, "formula");
    goto L1(r);
  D0():
    deopt 2 [f1];
  L2():
    goto L3();
  L3():
    lapply = ldf lapply;
    check L12() else D4();
  L6():
    f2 = force? f1;
    checkMissing(f2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(f2, "formula", FALSE);
    check L7() else D1();
  L8():
    _formula2varlist = ldf `.formula2varlist`;
    check L9() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 17 [];
  L7():
    goto L1(r2);
  L9():
    p = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn _formula2varlist(p, p1);
    check L10() else D3();
  L12():
    p6 = prom<V +>{
      split = ldf split;
      p3 = prom<V +>{
        sym1 = ldf seq_len;
        base1 = ldf seq_len in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r8):
        return r8;
      L1():
        nrow = ldf nrow;
        p2 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r10 = dyn nrow(p2);
        r11 = seq_len(r10);
        goto L0(r11);
      L2():
        r7 = dyn base1(<lang nrow(x)>);
        goto L0(r7);
      };
      p4 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      p5 = prom<V +>{
        drop1 = ld drop;
        drop2 = force? drop1;
        checkMissing(drop2);
        return drop2;
      };
      ddd1 = ld `...`;
      r15 = dyn split[x, f, drop, `...`](p3, p4, p5, ddd1);
      return r15;
    };
    p7 = prom<V +>{
      r17 = clos inner1768509083;
      return r17;
    };
    r19 = dyn lapply(p6, p7);
    check L13() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 20 [r19];
  L10():
    st f = r5;
    goto L3();
  L13():
    popenv;
    return r19;
  }
}
fun inner1768509083(ind) {
  (reg ind:*) -+> V { var ind:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind1:*, reg ind2:V, reg __:cls, reg r:V |
    mkenv;
    st ind = ind;
    x = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L2() else L3(x1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x3):
    ind1 = ld ind;
    check L5() else D1();
  D1():
    deopt 2 [x3, ind1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    ind2 = force? ind1;
    __ = ldf `[` in base;
    r = dyn __(x1, ind2, <missing>, FALSE);
    goto L0(r);
  }
}