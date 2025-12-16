fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.list.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg l:*, reg names__:cls, reg r3:V, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg unclass:cls, reg r6:V, reg p:p(V +), reg _POSIXct:*, reg _POSIXct1:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg attr:cls, reg r11:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg oldClass:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg nms:*, reg nms1:V, reg l1:*, reg names__1:cls, reg r18:V, reg y:*, reg y1:V |
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
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r6 = dyn unclass(x4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    p1 = prom<V +>{
      _POSIXct = ld `.POSIXct`;
      _POSIXct1 = force? _POSIXct;
      checkMissing(_POSIXct1);
      return _POSIXct1;
    };
    p2 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr = ldf attr in base;
      r11 = dyn attr(x6, "tzone");
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym x>, "tzone");
      goto L0(r9);
    };
    p3 = prom<V +>{
      sym3 = ldf oldClass;
      base3 = ldf oldClass in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      oldClass = ldf oldClass in base;
      r15 = dyn oldClass(x8);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym x>);
      goto L0(r13);
    };
    r17 = dyn lapply(p, p1, p2, p3);
    check L8() else D5();
  D5():
    deopt 20 [r17];
  L8():
    st y = r17;
    nms = ld nms;
    check L9() else D6();
  D6():
    deopt 22 [nms];
  L9():
    nms1 = force? nms;
    checkMissing(nms1);
    l1 = ld y;
    names__1 = ldf `names<-`;
    check L10() else D7();
  D7():
    deopt 25 [nms1, l1, nms1];
  L10():
    r18 = dyn names__1(l1, NULL, nms1);
    check L11() else D8();
  D8():
    deopt 27 [nms1, r18];
  L11():
    st y = r18;
    y = ld y;
    check L12() else D9();
  D9():
    deopt 29 [y];
  L12():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}