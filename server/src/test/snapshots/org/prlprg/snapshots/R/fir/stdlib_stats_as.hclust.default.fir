fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.hclust.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r11:V, reg c1:V, reg r12:V, reg c2:L, reg gettextf1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg oldClass1:cls, reg r15:V, reg c3:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg r22:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>, "hclust");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    stop = ldf stop;
    check L9() else D3();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "hclust", FALSE);
    check L5() else D1();
  L6():
    x3 = ld x;
    check L7() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  D3():
    deopt 11 [];
  L5():
    goto L0(r2);
  L7():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L9():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r3 = dyn dQuote("hclust");
        return r3;
      };
      r5 = dyn gettextf("argument 'x' cannot be coerced to class %s", p);
      return r5;
    };
    p3 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r8):
      r12 = `!`(r8);
      c2 = `as.logical`(r12);
      if c2 then L7() else L2();
    L3():
      sym2 = ldf oldClass;
      base2 = ldf oldClass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r7 = dyn base1(<lang oldClass(x)>);
      goto L0(r7);
    L1(r10):
      c1 = `==`(r10, NULL);
      goto L0(c1);
    L2():
      invisible.0();
      return NULL;
    L5():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      oldClass = ldf oldClass in base;
      r11 = dyn oldClass(x6);
      goto L1(r11);
    L6():
      r9 = dyn base2(<sym x>);
      goto L1(r9);
    L7():
      gettextf1 = ldf gettextf;
      p2 = prom<V +>{
        sym3 = ldf oldClass;
        base3 = ldf oldClass in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L2() else L3();
      L0(r14):
        c3 = `is.object`(r14);
        if c3 then L4() else L5(r14);
      L2():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        oldClass1 = ldf oldClass in base;
        r15 = dyn oldClass1(x8);
        goto L0(r15);
      L3():
        r13 = dyn base3(<sym x>);
        goto L0(r13);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[", r14);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r17):
        __ = ldf `[` in base;
        r18 = dyn __(r17, 1);
        goto L1(r18);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r20 = dyn gettextf1("\n Consider providing an as.hclust.%s() method", p2);
      return r20;
    };
    r22 = dyn stop[, , domain](p1, p3, NA_LGL);
    check L10() else D4();
  D4():
    deopt 16 [r22];
  L10():
    popenv;
    return r22;
  }
}