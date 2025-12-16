fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.list.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg l:*, reg names__:cls, reg r3:V, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg r6:I, reg p:p(V +), reg r8:cls, reg p1:p(V +), reg r10:V, reg nms:*, reg nms1:V, reg l1:*, reg names__1:cls, reg r11:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st nms = r1;
    l = ld x;
    names__ = ldf `names<-`;
    check L5() else D2();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 10 [NULL, l, NULL];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L4() else D1();
  L5():
    r3 = dyn names__(l, NULL, NULL);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [NULL, r3];
  L4():
    goto L0(r2);
  L6():
    st x = r3;
    lapply = ldf lapply;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p = prom<V +>{
      sym1 = ldf seq_along;
      base1 = ldf seq_along in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      r6 = seq_along(x4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    p1 = prom<V +>{
      r8 = clos inner854741286;
      return r8;
    };
    r10 = dyn lapply(p, p1);
    check L8() else D5();
  D5():
    deopt 18 [r10];
  L8():
    st y = r10;
    nms = ld nms;
    check L9() else D6();
  D6():
    deopt 20 [nms];
  L9():
    nms1 = force? nms;
    checkMissing(nms1);
    l1 = ld y;
    names__1 = ldf `names<-`;
    check L10() else D7();
  D7():
    deopt 23 [nms1, l1, nms1];
  L10():
    r11 = dyn names__1(l1, NULL, nms1);
    check L11() else D8();
  D8():
    deopt 25 [nms1, r11];
  L11():
    st y = r11;
    y = ld y;
    check L12() else D9();
  D9():
    deopt 27 [y];
  L12():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner854741286(i) {
  (reg i:*) -+> V { var i:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V |
    mkenv;
    st i = i;
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
    i1 = ld i;
    check L5() else D1();
  D1():
    deopt 2 [x3, i1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(x3, i2);
    goto L0(r);
  }
}