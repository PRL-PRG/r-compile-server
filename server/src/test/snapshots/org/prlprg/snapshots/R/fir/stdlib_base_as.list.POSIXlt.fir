fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.list.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg l:*, reg names__:cls, reg r3:V, reg lapply:cls, reg do_call:cls, reg Map:*, reg Map1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list:*, reg list1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg unCfillPOSIXlt:cls, reg r9:V, reg c:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg _POSIXlt:*, reg _POSIXlt1:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg attr:cls, reg r17:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x7:*, reg x8:V, reg oldClass:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg nms:*, reg nms1:V, reg l1:*, reg names__1:cls, reg r24:V, reg y:*, reg y1:V |
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
    p2 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        Map = ld Map;
        Map1 = force? Map;
        checkMissing(Map1);
        return Map1;
      };
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r6):
        return r6;
      L2():
        list = ld list;
        list1 = force? list;
        checkMissing(list1);
        sym2 = ldf unCfillPOSIXlt;
        base2 = ldf unCfillPOSIXlt in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L4() else L5();
      L3():
        r5 = dyn base1(<sym list>, <lang unCfillPOSIXlt(x)>);
        goto L0(r5);
      L1(r8):
        c = ldf c in base;
        r10 = dyn c(list1, r8);
        goto L0(r10);
      L4():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
        r9 = dyn unCfillPOSIXlt(x4);
        goto L1(r9);
      L5():
        r7 = dyn base2(<sym x>);
        goto L1(r7);
      };
      r12 = dyn do_call(p, p1);
      return r12;
    };
    p3 = prom<V +>{
      _POSIXlt = ld `.POSIXlt`;
      _POSIXlt1 = force? _POSIXlt;
      checkMissing(_POSIXlt1);
      return _POSIXlt1;
    };
    p4 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr = ldf attr in base;
      r17 = dyn attr(x6, "tzone");
      goto L0(r17);
    L2():
      r15 = dyn base3(<sym x>, "tzone");
      goto L0(r15);
    };
    p5 = prom<V +>{
      sym4 = ldf oldClass;
      base4 = ldf oldClass in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      oldClass = ldf oldClass in base;
      r21 = dyn oldClass(x8);
      goto L0(r21);
    L2():
      r19 = dyn base4(<sym x>);
      goto L0(r19);
    };
    r23 = dyn lapply[X, FUN, , ](p2, p3, p4, p5);
    check L8() else D5();
  D5():
    deopt 22 [r23];
  L8():
    st y = r23;
    nms = ld nms;
    check L9() else D6();
  D6():
    deopt 24 [nms];
  L9():
    nms1 = force? nms;
    checkMissing(nms1);
    l1 = ld y;
    names__1 = ldf `names<-`;
    check L10() else D7();
  D7():
    deopt 27 [nms1, l1, nms1];
  L10():
    r24 = dyn names__1(l1, NULL, nms1);
    check L11() else D8();
  D8():
    deopt 29 [nms1, r24];
  L11():
    st y = r24;
    y = ld y;
    check L12() else D9();
  D9():
    deopt 31 [y];
  L12():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}